#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1
type: SIMPLE_ASSIGN
vrNordic_g01.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3464]] /* vrNordic_g01.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 1;
}

/*
equation index: 2
type: SIMPLE_ASSIGN
vrNordic_g01.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_2(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1016]] /* vrNordic_g01.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 2;
}

/*
equation index: 3
type: SIMPLE_ASSIGN
vrNordic_g01.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_3(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3463]] /* vrNordic_g01.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 3;
}

/*
equation index: 4
type: SIMPLE_ASSIGN
vrNordic_g01.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1017]] /* vrNordic_g01.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 4;
}

/*
equation index: 5
type: SIMPLE_ASSIGN
vrNordic_g01.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_5(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3469]] /* vrNordic_g01.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 5;
}

/*
equation index: 6
type: SIMPLE_ASSIGN
goverNordic_g01.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[552]] /* goverNordic_g01.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 6;
}

/*
equation index: 7
type: SIMPLE_ASSIGN
goverNordic_g01.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1949]] /* goverNordic_g01.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 7;
}

/*
equation index: 8
type: SIMPLE_ASSIGN
goverNordic_g01.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_8(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[550]] /* goverNordic_g01.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 8;
}

/*
equation index: 9
type: SIMPLE_ASSIGN
goverNordic_g01.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_9(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1938]] /* goverNordic_g01.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 9;
}

/*
equation index: 10
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_10(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1946]] /* goverNordic_g01.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 10;
}

/*
equation index: 11
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_11(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[551]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 11;
}

/*
equation index: 12
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_12(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1945]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 12;
}

/*
equation index: 13
type: SIMPLE_ASSIGN
vrNordic_g02.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_13(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3488]] /* vrNordic_g02.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 13;
}

/*
equation index: 14
type: SIMPLE_ASSIGN
vrNordic_g02.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_14(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1019]] /* vrNordic_g02.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 14;
}

/*
equation index: 15
type: SIMPLE_ASSIGN
vrNordic_g02.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_15(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3487]] /* vrNordic_g02.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 15;
}

/*
equation index: 16
type: SIMPLE_ASSIGN
vrNordic_g02.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_16(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1020]] /* vrNordic_g02.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 16;
}

/*
equation index: 17
type: SIMPLE_ASSIGN
vrNordic_g02.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_17(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3493]] /* vrNordic_g02.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 17;
}

/*
equation index: 18
type: SIMPLE_ASSIGN
goverNordic_g02.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_18(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[555]] /* goverNordic_g02.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 18;
}

/*
equation index: 19
type: SIMPLE_ASSIGN
goverNordic_g02.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_19(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1967]] /* goverNordic_g02.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 19;
}

/*
equation index: 20
type: SIMPLE_ASSIGN
goverNordic_g02.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_20(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[553]] /* goverNordic_g02.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 20;
}

/*
equation index: 21
type: SIMPLE_ASSIGN
goverNordic_g02.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_21(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1956]] /* goverNordic_g02.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 21;
}

/*
equation index: 22
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_22(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1964]] /* goverNordic_g02.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 22;
}

/*
equation index: 23
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_23(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[554]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 23;
}

/*
equation index: 24
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_24(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1963]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 24;
}

/*
equation index: 25
type: SIMPLE_ASSIGN
vrNordic_g03.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_25(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3512]] /* vrNordic_g03.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 25;
}

/*
equation index: 26
type: SIMPLE_ASSIGN
vrNordic_g03.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_26(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1022]] /* vrNordic_g03.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 26;
}

/*
equation index: 27
type: SIMPLE_ASSIGN
vrNordic_g03.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_27(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3511]] /* vrNordic_g03.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 27;
}

/*
equation index: 28
type: SIMPLE_ASSIGN
vrNordic_g03.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_28(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1023]] /* vrNordic_g03.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 28;
}

/*
equation index: 29
type: SIMPLE_ASSIGN
vrNordic_g03.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_29(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3517]] /* vrNordic_g03.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 29;
}

/*
equation index: 30
type: SIMPLE_ASSIGN
goverNordic_g03.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_30(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[558]] /* goverNordic_g03.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 30;
}

/*
equation index: 31
type: SIMPLE_ASSIGN
goverNordic_g03.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_31(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1985]] /* goverNordic_g03.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 31;
}

/*
equation index: 32
type: SIMPLE_ASSIGN
goverNordic_g03.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_32(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[556]] /* goverNordic_g03.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 32;
}

/*
equation index: 33
type: SIMPLE_ASSIGN
goverNordic_g03.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_33(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1974]] /* goverNordic_g03.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 33;
}

/*
equation index: 34
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_34(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1982]] /* goverNordic_g03.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 34;
}

/*
equation index: 35
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_35(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[557]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 35;
}

/*
equation index: 36
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_36(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1981]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 36;
}

/*
equation index: 37
type: SIMPLE_ASSIGN
vrNordic_g04.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_37(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3536]] /* vrNordic_g04.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 37;
}

/*
equation index: 38
type: SIMPLE_ASSIGN
vrNordic_g04.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_38(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1025]] /* vrNordic_g04.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 38;
}

/*
equation index: 39
type: SIMPLE_ASSIGN
vrNordic_g04.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_39(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3535]] /* vrNordic_g04.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 39;
}

/*
equation index: 40
type: SIMPLE_ASSIGN
vrNordic_g04.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_40(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1026]] /* vrNordic_g04.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 40;
}

/*
equation index: 41
type: SIMPLE_ASSIGN
vrNordic_g04.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_41(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3541]] /* vrNordic_g04.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 41;
}

/*
equation index: 42
type: SIMPLE_ASSIGN
goverNordic_g04.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_42(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[561]] /* goverNordic_g04.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 42;
}

/*
equation index: 43
type: SIMPLE_ASSIGN
goverNordic_g04.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_43(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2003]] /* goverNordic_g04.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 43;
}

/*
equation index: 44
type: SIMPLE_ASSIGN
goverNordic_g04.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_44(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[559]] /* goverNordic_g04.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 44;
}

/*
equation index: 45
type: SIMPLE_ASSIGN
goverNordic_g04.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_45(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1992]] /* goverNordic_g04.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 45;
}

/*
equation index: 46
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_46(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2000]] /* goverNordic_g04.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 46;
}

/*
equation index: 47
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_47(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[560]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 47;
}

/*
equation index: 48
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_48(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1999]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 48;
}

/*
equation index: 49
type: SIMPLE_ASSIGN
vrNordic_g05.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_49(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3560]] /* vrNordic_g05.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 49;
}

/*
equation index: 50
type: SIMPLE_ASSIGN
vrNordic_g05.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_50(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1028]] /* vrNordic_g05.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 50;
}

/*
equation index: 51
type: SIMPLE_ASSIGN
vrNordic_g05.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_51(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3559]] /* vrNordic_g05.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 51;
}

/*
equation index: 52
type: SIMPLE_ASSIGN
vrNordic_g05.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_52(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1029]] /* vrNordic_g05.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 52;
}

/*
equation index: 53
type: SIMPLE_ASSIGN
vrNordic_g05.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_53(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3565]] /* vrNordic_g05.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 53;
}

/*
equation index: 54
type: SIMPLE_ASSIGN
goverNordic_g05.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_54(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[564]] /* goverNordic_g05.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 54;
}

/*
equation index: 55
type: SIMPLE_ASSIGN
goverNordic_g05.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_55(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2021]] /* goverNordic_g05.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 55;
}

/*
equation index: 56
type: SIMPLE_ASSIGN
goverNordic_g05.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_56(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,56};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[562]] /* goverNordic_g05.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 56;
}

/*
equation index: 57
type: SIMPLE_ASSIGN
goverNordic_g05.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_57(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,57};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2010]] /* goverNordic_g05.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 57;
}

/*
equation index: 58
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_58(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2018]] /* goverNordic_g05.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 58;
}

/*
equation index: 59
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_59(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,59};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[563]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 59;
}

/*
equation index: 60
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_60(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2017]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 60;
}

/*
equation index: 61
type: SIMPLE_ASSIGN
vrNordic_g06.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_61(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3584]] /* vrNordic_g06.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 61;
}

/*
equation index: 62
type: SIMPLE_ASSIGN
vrNordic_g06.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_62(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1031]] /* vrNordic_g06.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 62;
}

/*
equation index: 63
type: SIMPLE_ASSIGN
vrNordic_g06.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_63(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,63};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3583]] /* vrNordic_g06.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 63;
}

/*
equation index: 64
type: SIMPLE_ASSIGN
vrNordic_g06.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_64(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1032]] /* vrNordic_g06.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 64;
}

/*
equation index: 65
type: SIMPLE_ASSIGN
vrNordic_g06.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_65(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3589]] /* vrNordic_g06.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 65;
}

/*
equation index: 66
type: SIMPLE_ASSIGN
goverNordic_g06.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_66(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[567]] /* goverNordic_g06.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 66;
}

/*
equation index: 67
type: SIMPLE_ASSIGN
goverNordic_g06.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_67(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,67};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2039]] /* goverNordic_g06.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 67;
}

/*
equation index: 68
type: SIMPLE_ASSIGN
goverNordic_g06.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_68(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[565]] /* goverNordic_g06.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 68;
}

/*
equation index: 69
type: SIMPLE_ASSIGN
goverNordic_g06.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_69(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2028]] /* goverNordic_g06.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 69;
}

/*
equation index: 70
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_70(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2036]] /* goverNordic_g06.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 70;
}

/*
equation index: 71
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_71(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[566]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 71;
}

/*
equation index: 72
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_72(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2035]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 72;
}

/*
equation index: 73
type: SIMPLE_ASSIGN
vrNordic_g07.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_73(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3608]] /* vrNordic_g07.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 73;
}

/*
equation index: 74
type: SIMPLE_ASSIGN
vrNordic_g07.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_74(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1034]] /* vrNordic_g07.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 74;
}

/*
equation index: 75
type: SIMPLE_ASSIGN
vrNordic_g07.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_75(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3607]] /* vrNordic_g07.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 75;
}

/*
equation index: 76
type: SIMPLE_ASSIGN
vrNordic_g07.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_76(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1035]] /* vrNordic_g07.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 76;
}

/*
equation index: 77
type: SIMPLE_ASSIGN
vrNordic_g07.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_77(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3613]] /* vrNordic_g07.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 77;
}

/*
equation index: 78
type: SIMPLE_ASSIGN
goverNordic_g07.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_78(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[570]] /* goverNordic_g07.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 78;
}

/*
equation index: 79
type: SIMPLE_ASSIGN
goverNordic_g07.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_79(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2057]] /* goverNordic_g07.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 79;
}

/*
equation index: 80
type: SIMPLE_ASSIGN
goverNordic_g07.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_80(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[568]] /* goverNordic_g07.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 80;
}

/*
equation index: 81
type: SIMPLE_ASSIGN
goverNordic_g07.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_81(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2046]] /* goverNordic_g07.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 81;
}

/*
equation index: 82
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_82(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2054]] /* goverNordic_g07.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 82;
}

/*
equation index: 83
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_83(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[569]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 83;
}

/*
equation index: 84
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_84(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2053]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 84;
}

/*
equation index: 85
type: SIMPLE_ASSIGN
vrNordic_g08.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_85(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3632]] /* vrNordic_g08.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 85;
}

/*
equation index: 86
type: SIMPLE_ASSIGN
vrNordic_g08.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_86(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1037]] /* vrNordic_g08.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 86;
}

/*
equation index: 87
type: SIMPLE_ASSIGN
vrNordic_g08.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_87(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3631]] /* vrNordic_g08.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 87;
}

/*
equation index: 88
type: SIMPLE_ASSIGN
vrNordic_g08.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_88(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1038]] /* vrNordic_g08.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 88;
}

/*
equation index: 89
type: SIMPLE_ASSIGN
vrNordic_g08.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_89(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3637]] /* vrNordic_g08.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 89;
}

/*
equation index: 90
type: SIMPLE_ASSIGN
goverNordic_g08.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_90(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[573]] /* goverNordic_g08.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 90;
}

/*
equation index: 91
type: SIMPLE_ASSIGN
goverNordic_g08.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_91(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2075]] /* goverNordic_g08.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 91;
}

/*
equation index: 92
type: SIMPLE_ASSIGN
goverNordic_g08.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_92(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[571]] /* goverNordic_g08.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 92;
}

/*
equation index: 93
type: SIMPLE_ASSIGN
goverNordic_g08.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_93(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2064]] /* goverNordic_g08.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 93;
}

/*
equation index: 94
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_94(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2072]] /* goverNordic_g08.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 94;
}

/*
equation index: 95
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_95(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[572]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 95;
}

/*
equation index: 96
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_96(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2071]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 96;
}

/*
equation index: 97
type: SIMPLE_ASSIGN
vrNordic_g09.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_97(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3656]] /* vrNordic_g09.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 97;
}

/*
equation index: 98
type: SIMPLE_ASSIGN
vrNordic_g09.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_98(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1040]] /* vrNordic_g09.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 98;
}

/*
equation index: 99
type: SIMPLE_ASSIGN
vrNordic_g09.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_99(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3655]] /* vrNordic_g09.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 99;
}

/*
equation index: 100
type: SIMPLE_ASSIGN
vrNordic_g09.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1041]] /* vrNordic_g09.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 100;
}

/*
equation index: 101
type: SIMPLE_ASSIGN
vrNordic_g09.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3661]] /* vrNordic_g09.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 101;
}

/*
equation index: 102
type: SIMPLE_ASSIGN
goverNordic_g09.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[576]] /* goverNordic_g09.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 102;
}

/*
equation index: 103
type: SIMPLE_ASSIGN
goverNordic_g09.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2093]] /* goverNordic_g09.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 103;
}

/*
equation index: 104
type: SIMPLE_ASSIGN
goverNordic_g09.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[574]] /* goverNordic_g09.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 104;
}

/*
equation index: 105
type: SIMPLE_ASSIGN
goverNordic_g09.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2082]] /* goverNordic_g09.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 105;
}

/*
equation index: 106
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2090]] /* goverNordic_g09.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 106;
}

/*
equation index: 107
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[575]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 107;
}

/*
equation index: 108
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2089]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 108;
}

/*
equation index: 109
type: SIMPLE_ASSIGN
vrNordic_g10.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3680]] /* vrNordic_g10.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 109;
}

/*
equation index: 110
type: SIMPLE_ASSIGN
vrNordic_g10.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1043]] /* vrNordic_g10.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 110;
}

/*
equation index: 111
type: SIMPLE_ASSIGN
vrNordic_g10.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3679]] /* vrNordic_g10.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 111;
}

/*
equation index: 112
type: SIMPLE_ASSIGN
vrNordic_g10.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1044]] /* vrNordic_g10.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 112;
}

/*
equation index: 113
type: SIMPLE_ASSIGN
vrNordic_g10.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3685]] /* vrNordic_g10.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 113;
}

/*
equation index: 114
type: SIMPLE_ASSIGN
goverNordic_g10.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[579]] /* goverNordic_g10.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 114;
}

/*
equation index: 115
type: SIMPLE_ASSIGN
goverNordic_g10.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2111]] /* goverNordic_g10.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 115;
}

/*
equation index: 116
type: SIMPLE_ASSIGN
goverNordic_g10.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[577]] /* goverNordic_g10.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 116;
}

/*
equation index: 117
type: SIMPLE_ASSIGN
goverNordic_g10.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2100]] /* goverNordic_g10.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 117;
}

/*
equation index: 118
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2108]] /* goverNordic_g10.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 118;
}

/*
equation index: 119
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[578]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 119;
}

/*
equation index: 120
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2107]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 120;
}

/*
equation index: 121
type: SIMPLE_ASSIGN
vrNordic_g11.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3704]] /* vrNordic_g11.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 121;
}

/*
equation index: 122
type: SIMPLE_ASSIGN
vrNordic_g11.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1046]] /* vrNordic_g11.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 122;
}

/*
equation index: 123
type: SIMPLE_ASSIGN
vrNordic_g11.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3703]] /* vrNordic_g11.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 123;
}

/*
equation index: 124
type: SIMPLE_ASSIGN
vrNordic_g11.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1047]] /* vrNordic_g11.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 124;
}

/*
equation index: 125
type: SIMPLE_ASSIGN
vrNordic_g11.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3709]] /* vrNordic_g11.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 125;
}

/*
equation index: 126
type: SIMPLE_ASSIGN
goverNordic_g11.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[582]] /* goverNordic_g11.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 126;
}

/*
equation index: 127
type: SIMPLE_ASSIGN
goverNordic_g11.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2129]] /* goverNordic_g11.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 127;
}

/*
equation index: 128
type: SIMPLE_ASSIGN
goverNordic_g11.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[580]] /* goverNordic_g11.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 128;
}

/*
equation index: 129
type: SIMPLE_ASSIGN
goverNordic_g11.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2118]] /* goverNordic_g11.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 129;
}

/*
equation index: 130
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2126]] /* goverNordic_g11.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 130;
}

/*
equation index: 131
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[581]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 131;
}

/*
equation index: 132
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2125]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 132;
}

/*
equation index: 133
type: SIMPLE_ASSIGN
vrNordic_g12.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3728]] /* vrNordic_g12.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 133;
}

/*
equation index: 134
type: SIMPLE_ASSIGN
vrNordic_g12.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,134};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1049]] /* vrNordic_g12.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 134;
}

/*
equation index: 135
type: SIMPLE_ASSIGN
vrNordic_g12.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3727]] /* vrNordic_g12.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 135;
}

/*
equation index: 136
type: SIMPLE_ASSIGN
vrNordic_g12.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,136};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1050]] /* vrNordic_g12.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 136;
}

/*
equation index: 137
type: SIMPLE_ASSIGN
vrNordic_g12.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3733]] /* vrNordic_g12.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 137;
}

/*
equation index: 138
type: SIMPLE_ASSIGN
goverNordic_g12.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[585]] /* goverNordic_g12.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 138;
}

/*
equation index: 139
type: SIMPLE_ASSIGN
goverNordic_g12.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2147]] /* goverNordic_g12.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 139;
}

/*
equation index: 140
type: SIMPLE_ASSIGN
goverNordic_g12.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[583]] /* goverNordic_g12.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 140;
}

/*
equation index: 141
type: SIMPLE_ASSIGN
goverNordic_g12.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2136]] /* goverNordic_g12.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 141;
}

/*
equation index: 142
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2144]] /* goverNordic_g12.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 142;
}

/*
equation index: 143
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[584]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 143;
}

/*
equation index: 144
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2143]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 144;
}

/*
equation index: 145
type: SIMPLE_ASSIGN
vrNordic_g13.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3752]] /* vrNordic_g13.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 145;
}

/*
equation index: 146
type: SIMPLE_ASSIGN
vrNordic_g13.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1052]] /* vrNordic_g13.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 146;
}

/*
equation index: 147
type: SIMPLE_ASSIGN
vrNordic_g13.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3751]] /* vrNordic_g13.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 147;
}

/*
equation index: 148
type: SIMPLE_ASSIGN
vrNordic_g13.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1053]] /* vrNordic_g13.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 148;
}

/*
equation index: 149
type: SIMPLE_ASSIGN
vrNordic_g13.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3757]] /* vrNordic_g13.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 149;
}

/*
equation index: 150
type: SIMPLE_ASSIGN
goverNordic_g13.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,150};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[588]] /* goverNordic_g13.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 150;
}

/*
equation index: 151
type: SIMPLE_ASSIGN
goverNordic_g13.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2165]] /* goverNordic_g13.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 151;
}

/*
equation index: 152
type: SIMPLE_ASSIGN
goverNordic_g13.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[586]] /* goverNordic_g13.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 152;
}

/*
equation index: 153
type: SIMPLE_ASSIGN
goverNordic_g13.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2154]] /* goverNordic_g13.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 153;
}

/*
equation index: 154
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2162]] /* goverNordic_g13.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 154;
}

/*
equation index: 155
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,155};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[587]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 155;
}

/*
equation index: 156
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2161]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 156;
}

/*
equation index: 157
type: SIMPLE_ASSIGN
vrNordic_g14.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3776]] /* vrNordic_g14.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 157;
}

/*
equation index: 158
type: SIMPLE_ASSIGN
vrNordic_g14.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,158};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1055]] /* vrNordic_g14.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 158;
}

/*
equation index: 159
type: SIMPLE_ASSIGN
vrNordic_g14.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3775]] /* vrNordic_g14.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 159;
}

/*
equation index: 160
type: SIMPLE_ASSIGN
vrNordic_g14.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1056]] /* vrNordic_g14.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 160;
}

/*
equation index: 161
type: SIMPLE_ASSIGN
vrNordic_g14.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3781]] /* vrNordic_g14.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 161;
}

/*
equation index: 162
type: SIMPLE_ASSIGN
goverNordic_g14.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,162};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[591]] /* goverNordic_g14.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 162;
}

/*
equation index: 163
type: SIMPLE_ASSIGN
goverNordic_g14.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2183]] /* goverNordic_g14.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 163;
}

/*
equation index: 164
type: SIMPLE_ASSIGN
goverNordic_g14.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[589]] /* goverNordic_g14.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 164;
}

/*
equation index: 165
type: SIMPLE_ASSIGN
goverNordic_g14.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2172]] /* goverNordic_g14.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 165;
}

/*
equation index: 166
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2180]] /* goverNordic_g14.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 166;
}

/*
equation index: 167
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,167};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[590]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 167;
}

/*
equation index: 168
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2179]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 168;
}

/*
equation index: 169
type: SIMPLE_ASSIGN
vrNordic_g15.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3800]] /* vrNordic_g15.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 169;
}

/*
equation index: 170
type: SIMPLE_ASSIGN
vrNordic_g15.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,170};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1058]] /* vrNordic_g15.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 170;
}

/*
equation index: 171
type: SIMPLE_ASSIGN
vrNordic_g15.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3799]] /* vrNordic_g15.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 171;
}

/*
equation index: 172
type: SIMPLE_ASSIGN
vrNordic_g15.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,172};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1059]] /* vrNordic_g15.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 172;
}

/*
equation index: 173
type: SIMPLE_ASSIGN
vrNordic_g15.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3805]] /* vrNordic_g15.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 173;
}

/*
equation index: 174
type: SIMPLE_ASSIGN
goverNordic_g15.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,174};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[594]] /* goverNordic_g15.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 174;
}

/*
equation index: 175
type: SIMPLE_ASSIGN
goverNordic_g15.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2201]] /* goverNordic_g15.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 175;
}

/*
equation index: 176
type: SIMPLE_ASSIGN
goverNordic_g15.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,176};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[592]] /* goverNordic_g15.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 176;
}

/*
equation index: 177
type: SIMPLE_ASSIGN
goverNordic_g15.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2190]] /* goverNordic_g15.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 177;
}

/*
equation index: 178
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2198]] /* goverNordic_g15.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 178;
}

/*
equation index: 179
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,179};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[593]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 179;
}

/*
equation index: 180
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2197]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 180;
}

/*
equation index: 181
type: SIMPLE_ASSIGN
vrNordic_g16.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3824]] /* vrNordic_g16.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 181;
}

/*
equation index: 182
type: SIMPLE_ASSIGN
vrNordic_g16.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,182};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1061]] /* vrNordic_g16.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 182;
}

/*
equation index: 183
type: SIMPLE_ASSIGN
vrNordic_g16.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3823]] /* vrNordic_g16.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 183;
}

/*
equation index: 184
type: SIMPLE_ASSIGN
vrNordic_g16.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,184};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1062]] /* vrNordic_g16.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 184;
}

/*
equation index: 185
type: SIMPLE_ASSIGN
vrNordic_g16.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3829]] /* vrNordic_g16.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 185;
}

/*
equation index: 186
type: SIMPLE_ASSIGN
goverNordic_g16.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,186};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[597]] /* goverNordic_g16.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 186;
}

/*
equation index: 187
type: SIMPLE_ASSIGN
goverNordic_g16.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2219]] /* goverNordic_g16.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 187;
}

/*
equation index: 188
type: SIMPLE_ASSIGN
goverNordic_g16.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,188};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[595]] /* goverNordic_g16.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 188;
}

/*
equation index: 189
type: SIMPLE_ASSIGN
goverNordic_g16.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2208]] /* goverNordic_g16.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 189;
}

/*
equation index: 190
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2216]] /* goverNordic_g16.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 190;
}

/*
equation index: 191
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,191};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[596]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 191;
}

/*
equation index: 192
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2215]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 192;
}

/*
equation index: 193
type: SIMPLE_ASSIGN
vrNordic_g17.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* vrNordic_g17.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 193;
}

/*
equation index: 194
type: SIMPLE_ASSIGN
vrNordic_g17.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,194};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1064]] /* vrNordic_g17.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 194;
}

/*
equation index: 195
type: SIMPLE_ASSIGN
vrNordic_g17.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3847]] /* vrNordic_g17.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 195;
}

/*
equation index: 196
type: SIMPLE_ASSIGN
vrNordic_g17.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,196};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1065]] /* vrNordic_g17.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 196;
}

/*
equation index: 197
type: SIMPLE_ASSIGN
vrNordic_g17.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3853]] /* vrNordic_g17.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 197;
}

/*
equation index: 198
type: SIMPLE_ASSIGN
goverNordic_g17.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,198};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[600]] /* goverNordic_g17.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 198;
}

/*
equation index: 199
type: SIMPLE_ASSIGN
goverNordic_g17.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2237]] /* goverNordic_g17.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 199;
}

/*
equation index: 200
type: SIMPLE_ASSIGN
goverNordic_g17.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,200};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[598]] /* goverNordic_g17.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 200;
}

/*
equation index: 201
type: SIMPLE_ASSIGN
goverNordic_g17.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2226]] /* goverNordic_g17.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 201;
}

/*
equation index: 202
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2234]] /* goverNordic_g17.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 202;
}

/*
equation index: 203
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[599]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 203;
}

/*
equation index: 204
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2233]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 204;
}

/*
equation index: 205
type: SIMPLE_ASSIGN
vrNordic_g18.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3872]] /* vrNordic_g18.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 205;
}

/*
equation index: 206
type: SIMPLE_ASSIGN
vrNordic_g18.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,206};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1067]] /* vrNordic_g18.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 206;
}

/*
equation index: 207
type: SIMPLE_ASSIGN
vrNordic_g18.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3871]] /* vrNordic_g18.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 207;
}

/*
equation index: 208
type: SIMPLE_ASSIGN
vrNordic_g18.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,208};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1068]] /* vrNordic_g18.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 208;
}

/*
equation index: 209
type: SIMPLE_ASSIGN
vrNordic_g18.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3877]] /* vrNordic_g18.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 209;
}

/*
equation index: 210
type: SIMPLE_ASSIGN
goverNordic_g18.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,210};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[603]] /* goverNordic_g18.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 210;
}

/*
equation index: 211
type: SIMPLE_ASSIGN
goverNordic_g18.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2255]] /* goverNordic_g18.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 211;
}

/*
equation index: 212
type: SIMPLE_ASSIGN
goverNordic_g18.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,212};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[601]] /* goverNordic_g18.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 212;
}

/*
equation index: 213
type: SIMPLE_ASSIGN
goverNordic_g18.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2244]] /* goverNordic_g18.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 213;
}

/*
equation index: 214
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2252]] /* goverNordic_g18.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 214;
}

/*
equation index: 215
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,215};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[602]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 215;
}

/*
equation index: 216
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2251]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 216;
}

/*
equation index: 217
type: SIMPLE_ASSIGN
vrNordic_g19.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3896]] /* vrNordic_g19.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 217;
}

/*
equation index: 218
type: SIMPLE_ASSIGN
vrNordic_g19.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,218};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1070]] /* vrNordic_g19.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 218;
}

/*
equation index: 219
type: SIMPLE_ASSIGN
vrNordic_g19.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3895]] /* vrNordic_g19.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 219;
}

/*
equation index: 220
type: SIMPLE_ASSIGN
vrNordic_g19.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,220};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1071]] /* vrNordic_g19.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 220;
}

/*
equation index: 221
type: SIMPLE_ASSIGN
vrNordic_g19.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3901]] /* vrNordic_g19.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 221;
}

/*
equation index: 222
type: SIMPLE_ASSIGN
goverNordic_g19.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,222};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[606]] /* goverNordic_g19.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 222;
}

/*
equation index: 223
type: SIMPLE_ASSIGN
goverNordic_g19.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2273]] /* goverNordic_g19.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 223;
}

/*
equation index: 224
type: SIMPLE_ASSIGN
goverNordic_g19.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,224};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[604]] /* goverNordic_g19.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 224;
}

/*
equation index: 225
type: SIMPLE_ASSIGN
goverNordic_g19.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2262]] /* goverNordic_g19.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 225;
}

/*
equation index: 226
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2270]] /* goverNordic_g19.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 226;
}

/*
equation index: 227
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,227};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[605]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 227;
}

/*
equation index: 228
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2269]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 228;
}

/*
equation index: 229
type: SIMPLE_ASSIGN
vrNordic_g20.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3920]] /* vrNordic_g20.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 229;
}

/*
equation index: 230
type: SIMPLE_ASSIGN
vrNordic_g20.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,230};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1073]] /* vrNordic_g20.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 230;
}

/*
equation index: 231
type: SIMPLE_ASSIGN
vrNordic_g20.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3919]] /* vrNordic_g20.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 231;
}

/*
equation index: 232
type: SIMPLE_ASSIGN
vrNordic_g20.timer.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,232};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1074]] /* vrNordic_g20.timer.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 232;
}

/*
equation index: 233
type: SIMPLE_ASSIGN
vrNordic_g20.timer.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3925]] /* vrNordic_g20.timer.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 233;
}

/*
equation index: 234
type: SIMPLE_ASSIGN
goverNordic_g20.waterFlow.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,234};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[609]] /* goverNordic_g20.waterFlow.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 234;
}

/*
equation index: 235
type: SIMPLE_ASSIGN
goverNordic_g20.waterFlow.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2291]] /* goverNordic_g20.waterFlow.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 235;
}

/*
equation index: 236
type: SIMPLE_ASSIGN
goverNordic_g20.govInt.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,236};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[607]] /* goverNordic_g20.govInt.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 236;
}

/*
equation index: 237
type: SIMPLE_ASSIGN
goverNordic_g20.govInt.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2280]] /* goverNordic_g20.govInt.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 237;
}

/*
equation index: 238
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limiter.simplifiedExpr = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2288]] /* goverNordic_g20.limRateLimFirstOrder.limiter.simplifiedExpr variable */) = 0.0;
  threadData->lastEquationSolved = 238;
}

/*
equation index: 239
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limIntegrator.local_reset = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,239};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[608]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.local_reset DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 239;
}

/*
equation index: 240
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limIntegrator.local_set = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2287]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.local_set variable */) = 0.0;
  threadData->lastEquationSolved = 240;
}

/*
equation index: 241
type: SIMPLE_ASSIGN
bus_B01.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* bus_B01.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 241;
}

/*
equation index: 242
type: SIMPLE_ASSIGN
bus_B01.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* bus_B01.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 242;
}

/*
equation index: 243
type: SIMPLE_ASSIGN
bus_B02.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* bus_B02.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 243;
}

/*
equation index: 244
type: SIMPLE_ASSIGN
bus_B02.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* bus_B02.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 244;
}

/*
equation index: 245
type: SIMPLE_ASSIGN
bus_B03.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* bus_B03.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 245;
}

/*
equation index: 246
type: SIMPLE_ASSIGN
bus_B03.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* bus_B03.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 246;
}

/*
equation index: 247
type: SIMPLE_ASSIGN
bus_B04.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* bus_B04.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 247;
}

/*
equation index: 248
type: SIMPLE_ASSIGN
bus_B04.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* bus_B04.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 248;
}

/*
equation index: 249
type: SIMPLE_ASSIGN
bus_B05.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* bus_B05.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 249;
}

/*
equation index: 250
type: SIMPLE_ASSIGN
bus_B05.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* bus_B05.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 250;
}

/*
equation index: 251
type: SIMPLE_ASSIGN
bus_B11.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* bus_B11.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 251;
}

/*
equation index: 252
type: SIMPLE_ASSIGN
bus_B11.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* bus_B11.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 252;
}

/*
equation index: 253
type: SIMPLE_ASSIGN
bus_B12.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* bus_B12.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 253;
}

/*
equation index: 254
type: SIMPLE_ASSIGN
bus_B12.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* bus_B12.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 254;
}

/*
equation index: 255
type: SIMPLE_ASSIGN
bus_B13.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* bus_B13.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 255;
}

/*
equation index: 256
type: SIMPLE_ASSIGN
bus_B13.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* bus_B13.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 256;
}

/*
equation index: 257
type: SIMPLE_ASSIGN
bus_B22.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* bus_B22.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 257;
}

/*
equation index: 258
type: SIMPLE_ASSIGN
bus_B22.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* bus_B22.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 258;
}

/*
equation index: 259
type: SIMPLE_ASSIGN
bus_B31.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* bus_B31.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 259;
}

/*
equation index: 260
type: SIMPLE_ASSIGN
bus_B31.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* bus_B31.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 260;
}

/*
equation index: 261
type: SIMPLE_ASSIGN
bus_B32.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[853]] /* bus_B32.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 261;
}

/*
equation index: 262
type: SIMPLE_ASSIGN
bus_B32.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* bus_B32.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 262;
}

/*
equation index: 263
type: SIMPLE_ASSIGN
bus_B41.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* bus_B41.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 263;
}

/*
equation index: 264
type: SIMPLE_ASSIGN
bus_B41.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[859]] /* bus_B41.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 264;
}

/*
equation index: 265
type: SIMPLE_ASSIGN
bus_B42.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* bus_B42.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 265;
}

/*
equation index: 266
type: SIMPLE_ASSIGN
bus_B42.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* bus_B42.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 266;
}

/*
equation index: 267
type: SIMPLE_ASSIGN
bus_B43.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[868]] /* bus_B43.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 267;
}

/*
equation index: 268
type: SIMPLE_ASSIGN
bus_B43.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[869]] /* bus_B43.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 268;
}

/*
equation index: 269
type: SIMPLE_ASSIGN
bus_B47.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[878]] /* bus_B47.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 269;
}

/*
equation index: 270
type: SIMPLE_ASSIGN
bus_B47.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[879]] /* bus_B47.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 270;
}

/*
equation index: 271
type: SIMPLE_ASSIGN
bus_B46.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* bus_B46.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 271;
}

/*
equation index: 272
type: SIMPLE_ASSIGN
bus_B46.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[874]] /* bus_B46.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 272;
}

/*
equation index: 273
type: SIMPLE_ASSIGN
bus_B51.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* bus_B51.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 273;
}

/*
equation index: 274
type: SIMPLE_ASSIGN
bus_B51.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[884]] /* bus_B51.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 274;
}

/*
equation index: 275
type: SIMPLE_ASSIGN
bus_B61.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* bus_B61.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 275;
}

/*
equation index: 276
type: SIMPLE_ASSIGN
bus_B61.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* bus_B61.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 276;
}

/*
equation index: 277
type: SIMPLE_ASSIGN
bus_B62.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bus_B62.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 277;
}

/*
equation index: 278
type: SIMPLE_ASSIGN
bus_B62.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bus_B62.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 278;
}

/*
equation index: 279
type: SIMPLE_ASSIGN
bus_B63.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bus_B63.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 279;
}

/*
equation index: 280
type: SIMPLE_ASSIGN
bus_B63.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bus_B63.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 280;
}

/*
equation index: 281
type: SIMPLE_ASSIGN
bus_B71.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* bus_B71.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 281;
}

/*
equation index: 282
type: SIMPLE_ASSIGN
bus_B71.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* bus_B71.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 282;
}

/*
equation index: 283
type: SIMPLE_ASSIGN
bus_B72.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[908]] /* bus_B72.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 283;
}

/*
equation index: 284
type: SIMPLE_ASSIGN
bus_B72.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* bus_B72.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 284;
}

/*
equation index: 285
type: SIMPLE_ASSIGN
bus_BG01.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* bus_BG01.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 285;
}

/*
equation index: 286
type: SIMPLE_ASSIGN
bus_BG01.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* bus_BG01.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 286;
}

/*
equation index: 287
type: SIMPLE_ASSIGN
bus_BG02.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* bus_BG02.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 287;
}

/*
equation index: 288
type: SIMPLE_ASSIGN
bus_BG02.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* bus_BG02.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 288;
}

/*
equation index: 289
type: SIMPLE_ASSIGN
bus_BG03.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* bus_BG03.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 289;
}

/*
equation index: 290
type: SIMPLE_ASSIGN
bus_BG03.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* bus_BG03.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 290;
}

/*
equation index: 291
type: SIMPLE_ASSIGN
bus_BG04.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[928]] /* bus_BG04.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 291;
}

/*
equation index: 292
type: SIMPLE_ASSIGN
bus_BG04.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[929]] /* bus_BG04.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 292;
}

/*
equation index: 293
type: SIMPLE_ASSIGN
bus_BG05.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* bus_BG05.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 293;
}

/*
equation index: 294
type: SIMPLE_ASSIGN
bus_BG05.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* bus_BG05.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 294;
}

/*
equation index: 295
type: SIMPLE_ASSIGN
bus_BG06.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* bus_BG06.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 295;
}

/*
equation index: 296
type: SIMPLE_ASSIGN
bus_BG06.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* bus_BG06.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 296;
}

/*
equation index: 297
type: SIMPLE_ASSIGN
bus_BG07.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* bus_BG07.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 297;
}

/*
equation index: 298
type: SIMPLE_ASSIGN
bus_BG07.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* bus_BG07.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 298;
}

/*
equation index: 299
type: SIMPLE_ASSIGN
bus_BG08.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* bus_BG08.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 299;
}

/*
equation index: 300
type: SIMPLE_ASSIGN
bus_BG08.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* bus_BG08.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 300;
}

/*
equation index: 301
type: SIMPLE_ASSIGN
bus_BG09.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* bus_BG09.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 301;
}

/*
equation index: 302
type: SIMPLE_ASSIGN
bus_BG09.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* bus_BG09.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 302;
}

/*
equation index: 303
type: SIMPLE_ASSIGN
bus_BG10.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* bus_BG10.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 303;
}

/*
equation index: 304
type: SIMPLE_ASSIGN
bus_BG10.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[959]] /* bus_BG10.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 304;
}

/*
equation index: 305
type: SIMPLE_ASSIGN
bus_BG11.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* bus_BG11.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 305;
}

/*
equation index: 306
type: SIMPLE_ASSIGN
bus_BG11.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* bus_BG11.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 306;
}

/*
equation index: 307
type: SIMPLE_ASSIGN
bus_BG12.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* bus_BG12.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 307;
}

/*
equation index: 308
type: SIMPLE_ASSIGN
bus_BG12.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* bus_BG12.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 308;
}

/*
equation index: 309
type: SIMPLE_ASSIGN
bus_BG13.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* bus_BG13.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 309;
}

/*
equation index: 310
type: SIMPLE_ASSIGN
bus_BG13.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* bus_BG13.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 310;
}

/*
equation index: 311
type: SIMPLE_ASSIGN
bus_BG14.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* bus_BG14.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 311;
}

/*
equation index: 312
type: SIMPLE_ASSIGN
bus_BG14.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* bus_BG14.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 312;
}

/*
equation index: 313
type: SIMPLE_ASSIGN
bus_BG15.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[983]] /* bus_BG15.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 313;
}

/*
equation index: 314
type: SIMPLE_ASSIGN
bus_BG15.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[984]] /* bus_BG15.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 314;
}

/*
equation index: 315
type: SIMPLE_ASSIGN
bus_BG16.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* bus_BG16.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 315;
}

/*
equation index: 316
type: SIMPLE_ASSIGN
bus_BG16.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* bus_BG16.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 316;
}

/*
equation index: 317
type: SIMPLE_ASSIGN
bus_BG17.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* bus_BG17.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 317;
}

/*
equation index: 318
type: SIMPLE_ASSIGN
bus_BG17.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* bus_BG17.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 318;
}

/*
equation index: 319
type: SIMPLE_ASSIGN
bus_BG18.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* bus_BG18.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 319;
}

/*
equation index: 320
type: SIMPLE_ASSIGN
bus_BG18.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* bus_BG18.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 320;
}

/*
equation index: 321
type: SIMPLE_ASSIGN
bus_BG19.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* bus_BG19.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 321;
}

/*
equation index: 322
type: SIMPLE_ASSIGN
bus_BG19.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* bus_BG19.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 322;
}

/*
equation index: 323
type: SIMPLE_ASSIGN
bus_BG20.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* bus_BG20.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 323;
}

/*
equation index: 324
type: SIMPLE_ASSIGN
bus_BG20.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* bus_BG20.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 324;
}

/*
equation index: 325
type: SIMPLE_ASSIGN
bus_1011.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* bus_1011.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 325;
}

/*
equation index: 326
type: SIMPLE_ASSIGN
bus_1011.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* bus_1011.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 326;
}

/*
equation index: 327
type: SIMPLE_ASSIGN
bus_1012.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* bus_1012.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 327;
}

/*
equation index: 328
type: SIMPLE_ASSIGN
bus_1012.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* bus_1012.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 328;
}

/*
equation index: 329
type: SIMPLE_ASSIGN
bus_1013.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* bus_1013.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 329;
}

/*
equation index: 330
type: SIMPLE_ASSIGN
bus_1013.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* bus_1013.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 330;
}

/*
equation index: 331
type: SIMPLE_ASSIGN
bus_1014.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* bus_1014.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 331;
}

/*
equation index: 332
type: SIMPLE_ASSIGN
bus_1014.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* bus_1014.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 332;
}

/*
equation index: 333
type: SIMPLE_ASSIGN
bus_1021.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* bus_1021.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 333;
}

/*
equation index: 334
type: SIMPLE_ASSIGN
bus_1021.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* bus_1021.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 334;
}

/*
equation index: 335
type: SIMPLE_ASSIGN
bus_1022.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* bus_1022.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 335;
}

/*
equation index: 336
type: SIMPLE_ASSIGN
bus_1022.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* bus_1022.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 336;
}

/*
equation index: 337
type: SIMPLE_ASSIGN
bus_1041.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* bus_1041.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 337;
}

/*
equation index: 338
type: SIMPLE_ASSIGN
bus_1041.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* bus_1041.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 338;
}

/*
equation index: 339
type: SIMPLE_ASSIGN
bus_1042.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* bus_1042.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 339;
}

/*
equation index: 340
type: SIMPLE_ASSIGN
bus_1042.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* bus_1042.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 340;
}

/*
equation index: 341
type: SIMPLE_ASSIGN
bus_1043.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* bus_1043.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 341;
}

/*
equation index: 342
type: SIMPLE_ASSIGN
bus_1043.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* bus_1043.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 342;
}

/*
equation index: 343
type: SIMPLE_ASSIGN
bus_1044.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* bus_1044.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 343;
}

/*
equation index: 344
type: SIMPLE_ASSIGN
bus_1044.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* bus_1044.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 344;
}

/*
equation index: 345
type: SIMPLE_ASSIGN
bus_1045.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* bus_1045.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 345;
}

/*
equation index: 346
type: SIMPLE_ASSIGN
bus_1045.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* bus_1045.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 346;
}

/*
equation index: 347
type: SIMPLE_ASSIGN
bus_2031.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* bus_2031.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 347;
}

/*
equation index: 348
type: SIMPLE_ASSIGN
bus_2031.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* bus_2031.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 348;
}

/*
equation index: 349
type: SIMPLE_ASSIGN
bus_2032.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* bus_2032.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 349;
}

/*
equation index: 350
type: SIMPLE_ASSIGN
bus_2032.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* bus_2032.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 350;
}

/*
equation index: 351
type: SIMPLE_ASSIGN
bus_4011.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* bus_4011.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 351;
}

/*
equation index: 352
type: SIMPLE_ASSIGN
bus_4011.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* bus_4011.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 352;
}

/*
equation index: 353
type: SIMPLE_ASSIGN
bus_4012.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* bus_4012.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 353;
}

/*
equation index: 354
type: SIMPLE_ASSIGN
bus_4012.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* bus_4012.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 354;
}

/*
equation index: 355
type: SIMPLE_ASSIGN
bus_4021.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* bus_4021.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 355;
}

/*
equation index: 356
type: SIMPLE_ASSIGN
bus_4021.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* bus_4021.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 356;
}

/*
equation index: 357
type: SIMPLE_ASSIGN
bus_4022.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* bus_4022.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 357;
}

/*
equation index: 358
type: SIMPLE_ASSIGN
bus_4022.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* bus_4022.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 358;
}

/*
equation index: 359
type: SIMPLE_ASSIGN
bus_4031.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* bus_4031.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 359;
}

/*
equation index: 360
type: SIMPLE_ASSIGN
bus_4031.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* bus_4031.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 360;
}

/*
equation index: 361
type: SIMPLE_ASSIGN
bus_4032.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* bus_4032.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 361;
}

/*
equation index: 362
type: SIMPLE_ASSIGN
bus_4032.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* bus_4032.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 362;
}

/*
equation index: 363
type: SIMPLE_ASSIGN
bus_4041.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* bus_4041.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 363;
}

/*
equation index: 364
type: SIMPLE_ASSIGN
bus_4041.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* bus_4041.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 364;
}

/*
equation index: 365
type: SIMPLE_ASSIGN
bus_4042.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* bus_4042.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 365;
}

/*
equation index: 366
type: SIMPLE_ASSIGN
bus_4042.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* bus_4042.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 366;
}

/*
equation index: 367
type: SIMPLE_ASSIGN
bus_4043.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* bus_4043.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 367;
}

/*
equation index: 368
type: SIMPLE_ASSIGN
bus_4043.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* bus_4043.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 368;
}

/*
equation index: 369
type: SIMPLE_ASSIGN
bus_4044.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* bus_4044.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 369;
}

/*
equation index: 370
type: SIMPLE_ASSIGN
bus_4044.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* bus_4044.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 370;
}

/*
equation index: 371
type: SIMPLE_ASSIGN
bus_4045.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* bus_4045.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 371;
}

/*
equation index: 372
type: SIMPLE_ASSIGN
bus_4045.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* bus_4045.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 372;
}

/*
equation index: 373
type: SIMPLE_ASSIGN
bus_4046.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* bus_4046.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 373;
}

/*
equation index: 374
type: SIMPLE_ASSIGN
bus_4046.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* bus_4046.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 374;
}

/*
equation index: 375
type: SIMPLE_ASSIGN
bus_4047.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* bus_4047.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 375;
}

/*
equation index: 376
type: SIMPLE_ASSIGN
bus_4047.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* bus_4047.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 376;
}

/*
equation index: 377
type: SIMPLE_ASSIGN
bus_4051.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* bus_4051.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 377;
}

/*
equation index: 378
type: SIMPLE_ASSIGN
bus_4051.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* bus_4051.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 378;
}

/*
equation index: 379
type: SIMPLE_ASSIGN
bus_4061.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* bus_4061.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 379;
}

/*
equation index: 380
type: SIMPLE_ASSIGN
bus_4061.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* bus_4061.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 380;
}

/*
equation index: 381
type: SIMPLE_ASSIGN
bus_4062.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* bus_4062.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 381;
}

/*
equation index: 382
type: SIMPLE_ASSIGN
bus_4062.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* bus_4062.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 382;
}

/*
equation index: 383
type: SIMPLE_ASSIGN
bus_4063.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* bus_4063.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 383;
}

/*
equation index: 384
type: SIMPLE_ASSIGN
bus_4063.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* bus_4063.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 384;
}

/*
equation index: 385
type: SIMPLE_ASSIGN
bus_4071.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* bus_4071.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 385;
}

/*
equation index: 386
type: SIMPLE_ASSIGN
bus_4071.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* bus_4071.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 386;
}

/*
equation index: 387
type: SIMPLE_ASSIGN
bus_4072.terminal.i.im = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* bus_4072.terminal.i.im variable */) = 0.0;
  threadData->lastEquationSolved = 387;
}

/*
equation index: 388
type: SIMPLE_ASSIGN
bus_4072.terminal.i.re = 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* bus_4072.terminal.i.re variable */) = 0.0;
  threadData->lastEquationSolved = 388;
}

/*
equation index: 389
type: SIMPLE_ASSIGN
g01.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,389};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[471]] /* g01.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 389;
}

/*
equation index: 390
type: SIMPLE_ASSIGN
g01.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,390};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[472]] /* g01.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 390;
}

/*
equation index: 391
type: SIMPLE_ASSIGN
g01.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,391};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[473]] /* g01.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 391;
}

/*
equation index: 392
type: SIMPLE_ASSIGN
g02.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,392};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[475]] /* g02.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 392;
}

/*
equation index: 393
type: SIMPLE_ASSIGN
g02.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,393};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[476]] /* g02.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 393;
}

/*
equation index: 394
type: SIMPLE_ASSIGN
g02.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,394};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[477]] /* g02.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 394;
}

/*
equation index: 395
type: SIMPLE_ASSIGN
g03.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,395};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[479]] /* g03.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 395;
}

/*
equation index: 396
type: SIMPLE_ASSIGN
g03.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,396};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[480]] /* g03.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 396;
}

/*
equation index: 397
type: SIMPLE_ASSIGN
g03.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,397};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[481]] /* g03.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 397;
}

/*
equation index: 398
type: SIMPLE_ASSIGN
g04.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,398};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[483]] /* g04.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 398;
}

/*
equation index: 399
type: SIMPLE_ASSIGN
g04.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,399};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[484]] /* g04.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 399;
}

/*
equation index: 400
type: SIMPLE_ASSIGN
g04.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,400};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[485]] /* g04.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 400;
}

/*
equation index: 401
type: SIMPLE_ASSIGN
g05.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,401};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[487]] /* g05.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 401;
}

/*
equation index: 402
type: SIMPLE_ASSIGN
g05.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,402};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[488]] /* g05.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 402;
}

/*
equation index: 403
type: SIMPLE_ASSIGN
g05.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,403};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[489]] /* g05.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 403;
}

/*
equation index: 404
type: SIMPLE_ASSIGN
g06.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,404};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[491]] /* g06.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 404;
}

/*
equation index: 405
type: SIMPLE_ASSIGN
g06.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,405};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[492]] /* g06.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 405;
}

/*
equation index: 406
type: SIMPLE_ASSIGN
g06.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,406};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[493]] /* g06.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 406;
}

/*
equation index: 407
type: SIMPLE_ASSIGN
g07.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,407};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[495]] /* g07.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 407;
}

/*
equation index: 408
type: SIMPLE_ASSIGN
g07.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,408};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[496]] /* g07.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 408;
}

/*
equation index: 409
type: SIMPLE_ASSIGN
g07.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,409};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[497]] /* g07.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 409;
}

/*
equation index: 410
type: SIMPLE_ASSIGN
g08.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,410};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[499]] /* g08.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 410;
}

/*
equation index: 411
type: SIMPLE_ASSIGN
g08.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,411};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[500]] /* g08.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 411;
}

/*
equation index: 412
type: SIMPLE_ASSIGN
g08.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,412};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[501]] /* g08.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 412;
}

/*
equation index: 413
type: SIMPLE_ASSIGN
g09.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,413};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[503]] /* g09.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 413;
}

/*
equation index: 414
type: SIMPLE_ASSIGN
g09.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,414};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[504]] /* g09.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 414;
}

/*
equation index: 415
type: SIMPLE_ASSIGN
g09.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,415};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[505]] /* g09.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 415;
}

/*
equation index: 416
type: SIMPLE_ASSIGN
g10.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,416};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[507]] /* g10.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 416;
}

/*
equation index: 417
type: SIMPLE_ASSIGN
g10.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,417};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[508]] /* g10.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 417;
}

/*
equation index: 418
type: SIMPLE_ASSIGN
g10.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,418};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[509]] /* g10.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 418;
}

/*
equation index: 419
type: SIMPLE_ASSIGN
g11.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[511]] /* g11.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 419;
}

/*
equation index: 420
type: SIMPLE_ASSIGN
g11.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,420};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[512]] /* g11.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 420;
}

/*
equation index: 421
type: SIMPLE_ASSIGN
g11.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,421};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[513]] /* g11.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 421;
}

/*
equation index: 422
type: SIMPLE_ASSIGN
g12.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,422};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[515]] /* g12.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 422;
}

/*
equation index: 423
type: SIMPLE_ASSIGN
g12.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[516]] /* g12.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 423;
}

/*
equation index: 424
type: SIMPLE_ASSIGN
g12.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,424};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[517]] /* g12.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 424;
}

/*
equation index: 425
type: SIMPLE_ASSIGN
g13.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[519]] /* g13.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 425;
}

/*
equation index: 426
type: SIMPLE_ASSIGN
g13.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,426};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[520]] /* g13.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 426;
}

/*
equation index: 427
type: SIMPLE_ASSIGN
g13.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,427};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[521]] /* g13.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 427;
}

/*
equation index: 428
type: SIMPLE_ASSIGN
g14.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[523]] /* g14.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 428;
}

/*
equation index: 429
type: SIMPLE_ASSIGN
g14.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,429};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[524]] /* g14.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 429;
}

/*
equation index: 430
type: SIMPLE_ASSIGN
g14.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,430};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[525]] /* g14.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 430;
}

/*
equation index: 431
type: SIMPLE_ASSIGN
g15.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,431};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[527]] /* g15.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 431;
}

/*
equation index: 432
type: SIMPLE_ASSIGN
g15.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,432};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[528]] /* g15.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 432;
}

/*
equation index: 433
type: SIMPLE_ASSIGN
g15.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,433};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[529]] /* g15.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 433;
}

/*
equation index: 434
type: SIMPLE_ASSIGN
g16.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,434};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[531]] /* g16.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 434;
}

/*
equation index: 435
type: SIMPLE_ASSIGN
g16.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,435};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[532]] /* g16.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 435;
}

/*
equation index: 436
type: SIMPLE_ASSIGN
g16.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,436};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[533]] /* g16.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 436;
}

/*
equation index: 437
type: SIMPLE_ASSIGN
g17.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,437};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[535]] /* g17.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 437;
}

/*
equation index: 438
type: SIMPLE_ASSIGN
g17.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,438};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[536]] /* g17.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 438;
}

/*
equation index: 439
type: SIMPLE_ASSIGN
g17.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,439};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[537]] /* g17.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 439;
}

/*
equation index: 440
type: SIMPLE_ASSIGN
g18.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,440};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[539]] /* g18.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 440;
}

/*
equation index: 441
type: SIMPLE_ASSIGN
g18.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,441};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[540]] /* g18.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 441;
}

/*
equation index: 442
type: SIMPLE_ASSIGN
g18.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,442};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[541]] /* g18.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 442;
}

/*
equation index: 443
type: SIMPLE_ASSIGN
g19.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,443};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[543]] /* g19.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 443;
}

/*
equation index: 444
type: SIMPLE_ASSIGN
g19.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,444};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[544]] /* g19.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 444;
}

/*
equation index: 445
type: SIMPLE_ASSIGN
g19.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,445};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[545]] /* g19.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 445;
}

/*
equation index: 446
type: SIMPLE_ASSIGN
g20.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,446};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[547]] /* g20.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 446;
}

/*
equation index: 447
type: SIMPLE_ASSIGN
g20.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,447};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[548]] /* g20.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 447;
}

/*
equation index: 448
type: SIMPLE_ASSIGN
g20.switchOffSignal3.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,448};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[549]] /* g20.switchOffSignal3.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 448;
}

/*
equation index: 449
type: SIMPLE_ASSIGN
trafo_1_1041.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,449};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[896]] /* trafo_1_1041.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 449;
}

/*
equation index: 450
type: SIMPLE_ASSIGN
trafo_1_1041.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[897]] /* trafo_1_1041.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 450;
}

/*
equation index: 451
type: SIMPLE_ASSIGN
trafo_2_1042.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,451};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[905]] /* trafo_2_1042.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 451;
}

/*
equation index: 452
type: SIMPLE_ASSIGN
trafo_2_1042.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,452};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[906]] /* trafo_2_1042.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 452;
}

/*
equation index: 453
type: SIMPLE_ASSIGN
trafo_3_1043.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,453};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[914]] /* trafo_3_1043.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 453;
}

/*
equation index: 454
type: SIMPLE_ASSIGN
trafo_3_1043.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,454};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[915]] /* trafo_3_1043.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 454;
}

/*
equation index: 455
type: SIMPLE_ASSIGN
trafo_4_1044.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,455};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[932]] /* trafo_4_1044.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 455;
}

/*
equation index: 456
type: SIMPLE_ASSIGN
trafo_4_1044.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,456};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[933]] /* trafo_4_1044.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 456;
}

/*
equation index: 457
type: SIMPLE_ASSIGN
trafo_5_1045.switchOffSignal1.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,457};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[938]] /* trafo_5_1045.switchOffSignal1.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 457;
}

/*
equation index: 458
type: SIMPLE_ASSIGN
trafo_5_1045.switchOffSignal2.value = false
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,458};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[939]] /* trafo_5_1045.switchOffSignal2.value DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 458;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[458])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_1,
    MyNordic_initialized_TestCase_initialized_eqFunction_2,
    MyNordic_initialized_TestCase_initialized_eqFunction_3,
    MyNordic_initialized_TestCase_initialized_eqFunction_4,
    MyNordic_initialized_TestCase_initialized_eqFunction_5,
    MyNordic_initialized_TestCase_initialized_eqFunction_6,
    MyNordic_initialized_TestCase_initialized_eqFunction_7,
    MyNordic_initialized_TestCase_initialized_eqFunction_8,
    MyNordic_initialized_TestCase_initialized_eqFunction_9,
    MyNordic_initialized_TestCase_initialized_eqFunction_10,
    MyNordic_initialized_TestCase_initialized_eqFunction_11,
    MyNordic_initialized_TestCase_initialized_eqFunction_12,
    MyNordic_initialized_TestCase_initialized_eqFunction_13,
    MyNordic_initialized_TestCase_initialized_eqFunction_14,
    MyNordic_initialized_TestCase_initialized_eqFunction_15,
    MyNordic_initialized_TestCase_initialized_eqFunction_16,
    MyNordic_initialized_TestCase_initialized_eqFunction_17,
    MyNordic_initialized_TestCase_initialized_eqFunction_18,
    MyNordic_initialized_TestCase_initialized_eqFunction_19,
    MyNordic_initialized_TestCase_initialized_eqFunction_20,
    MyNordic_initialized_TestCase_initialized_eqFunction_21,
    MyNordic_initialized_TestCase_initialized_eqFunction_22,
    MyNordic_initialized_TestCase_initialized_eqFunction_23,
    MyNordic_initialized_TestCase_initialized_eqFunction_24,
    MyNordic_initialized_TestCase_initialized_eqFunction_25,
    MyNordic_initialized_TestCase_initialized_eqFunction_26,
    MyNordic_initialized_TestCase_initialized_eqFunction_27,
    MyNordic_initialized_TestCase_initialized_eqFunction_28,
    MyNordic_initialized_TestCase_initialized_eqFunction_29,
    MyNordic_initialized_TestCase_initialized_eqFunction_30,
    MyNordic_initialized_TestCase_initialized_eqFunction_31,
    MyNordic_initialized_TestCase_initialized_eqFunction_32,
    MyNordic_initialized_TestCase_initialized_eqFunction_33,
    MyNordic_initialized_TestCase_initialized_eqFunction_34,
    MyNordic_initialized_TestCase_initialized_eqFunction_35,
    MyNordic_initialized_TestCase_initialized_eqFunction_36,
    MyNordic_initialized_TestCase_initialized_eqFunction_37,
    MyNordic_initialized_TestCase_initialized_eqFunction_38,
    MyNordic_initialized_TestCase_initialized_eqFunction_39,
    MyNordic_initialized_TestCase_initialized_eqFunction_40,
    MyNordic_initialized_TestCase_initialized_eqFunction_41,
    MyNordic_initialized_TestCase_initialized_eqFunction_42,
    MyNordic_initialized_TestCase_initialized_eqFunction_43,
    MyNordic_initialized_TestCase_initialized_eqFunction_44,
    MyNordic_initialized_TestCase_initialized_eqFunction_45,
    MyNordic_initialized_TestCase_initialized_eqFunction_46,
    MyNordic_initialized_TestCase_initialized_eqFunction_47,
    MyNordic_initialized_TestCase_initialized_eqFunction_48,
    MyNordic_initialized_TestCase_initialized_eqFunction_49,
    MyNordic_initialized_TestCase_initialized_eqFunction_50,
    MyNordic_initialized_TestCase_initialized_eqFunction_51,
    MyNordic_initialized_TestCase_initialized_eqFunction_52,
    MyNordic_initialized_TestCase_initialized_eqFunction_53,
    MyNordic_initialized_TestCase_initialized_eqFunction_54,
    MyNordic_initialized_TestCase_initialized_eqFunction_55,
    MyNordic_initialized_TestCase_initialized_eqFunction_56,
    MyNordic_initialized_TestCase_initialized_eqFunction_57,
    MyNordic_initialized_TestCase_initialized_eqFunction_58,
    MyNordic_initialized_TestCase_initialized_eqFunction_59,
    MyNordic_initialized_TestCase_initialized_eqFunction_60,
    MyNordic_initialized_TestCase_initialized_eqFunction_61,
    MyNordic_initialized_TestCase_initialized_eqFunction_62,
    MyNordic_initialized_TestCase_initialized_eqFunction_63,
    MyNordic_initialized_TestCase_initialized_eqFunction_64,
    MyNordic_initialized_TestCase_initialized_eqFunction_65,
    MyNordic_initialized_TestCase_initialized_eqFunction_66,
    MyNordic_initialized_TestCase_initialized_eqFunction_67,
    MyNordic_initialized_TestCase_initialized_eqFunction_68,
    MyNordic_initialized_TestCase_initialized_eqFunction_69,
    MyNordic_initialized_TestCase_initialized_eqFunction_70,
    MyNordic_initialized_TestCase_initialized_eqFunction_71,
    MyNordic_initialized_TestCase_initialized_eqFunction_72,
    MyNordic_initialized_TestCase_initialized_eqFunction_73,
    MyNordic_initialized_TestCase_initialized_eqFunction_74,
    MyNordic_initialized_TestCase_initialized_eqFunction_75,
    MyNordic_initialized_TestCase_initialized_eqFunction_76,
    MyNordic_initialized_TestCase_initialized_eqFunction_77,
    MyNordic_initialized_TestCase_initialized_eqFunction_78,
    MyNordic_initialized_TestCase_initialized_eqFunction_79,
    MyNordic_initialized_TestCase_initialized_eqFunction_80,
    MyNordic_initialized_TestCase_initialized_eqFunction_81,
    MyNordic_initialized_TestCase_initialized_eqFunction_82,
    MyNordic_initialized_TestCase_initialized_eqFunction_83,
    MyNordic_initialized_TestCase_initialized_eqFunction_84,
    MyNordic_initialized_TestCase_initialized_eqFunction_85,
    MyNordic_initialized_TestCase_initialized_eqFunction_86,
    MyNordic_initialized_TestCase_initialized_eqFunction_87,
    MyNordic_initialized_TestCase_initialized_eqFunction_88,
    MyNordic_initialized_TestCase_initialized_eqFunction_89,
    MyNordic_initialized_TestCase_initialized_eqFunction_90,
    MyNordic_initialized_TestCase_initialized_eqFunction_91,
    MyNordic_initialized_TestCase_initialized_eqFunction_92,
    MyNordic_initialized_TestCase_initialized_eqFunction_93,
    MyNordic_initialized_TestCase_initialized_eqFunction_94,
    MyNordic_initialized_TestCase_initialized_eqFunction_95,
    MyNordic_initialized_TestCase_initialized_eqFunction_96,
    MyNordic_initialized_TestCase_initialized_eqFunction_97,
    MyNordic_initialized_TestCase_initialized_eqFunction_98,
    MyNordic_initialized_TestCase_initialized_eqFunction_99,
    MyNordic_initialized_TestCase_initialized_eqFunction_100,
    MyNordic_initialized_TestCase_initialized_eqFunction_101,
    MyNordic_initialized_TestCase_initialized_eqFunction_102,
    MyNordic_initialized_TestCase_initialized_eqFunction_103,
    MyNordic_initialized_TestCase_initialized_eqFunction_104,
    MyNordic_initialized_TestCase_initialized_eqFunction_105,
    MyNordic_initialized_TestCase_initialized_eqFunction_106,
    MyNordic_initialized_TestCase_initialized_eqFunction_107,
    MyNordic_initialized_TestCase_initialized_eqFunction_108,
    MyNordic_initialized_TestCase_initialized_eqFunction_109,
    MyNordic_initialized_TestCase_initialized_eqFunction_110,
    MyNordic_initialized_TestCase_initialized_eqFunction_111,
    MyNordic_initialized_TestCase_initialized_eqFunction_112,
    MyNordic_initialized_TestCase_initialized_eqFunction_113,
    MyNordic_initialized_TestCase_initialized_eqFunction_114,
    MyNordic_initialized_TestCase_initialized_eqFunction_115,
    MyNordic_initialized_TestCase_initialized_eqFunction_116,
    MyNordic_initialized_TestCase_initialized_eqFunction_117,
    MyNordic_initialized_TestCase_initialized_eqFunction_118,
    MyNordic_initialized_TestCase_initialized_eqFunction_119,
    MyNordic_initialized_TestCase_initialized_eqFunction_120,
    MyNordic_initialized_TestCase_initialized_eqFunction_121,
    MyNordic_initialized_TestCase_initialized_eqFunction_122,
    MyNordic_initialized_TestCase_initialized_eqFunction_123,
    MyNordic_initialized_TestCase_initialized_eqFunction_124,
    MyNordic_initialized_TestCase_initialized_eqFunction_125,
    MyNordic_initialized_TestCase_initialized_eqFunction_126,
    MyNordic_initialized_TestCase_initialized_eqFunction_127,
    MyNordic_initialized_TestCase_initialized_eqFunction_128,
    MyNordic_initialized_TestCase_initialized_eqFunction_129,
    MyNordic_initialized_TestCase_initialized_eqFunction_130,
    MyNordic_initialized_TestCase_initialized_eqFunction_131,
    MyNordic_initialized_TestCase_initialized_eqFunction_132,
    MyNordic_initialized_TestCase_initialized_eqFunction_133,
    MyNordic_initialized_TestCase_initialized_eqFunction_134,
    MyNordic_initialized_TestCase_initialized_eqFunction_135,
    MyNordic_initialized_TestCase_initialized_eqFunction_136,
    MyNordic_initialized_TestCase_initialized_eqFunction_137,
    MyNordic_initialized_TestCase_initialized_eqFunction_138,
    MyNordic_initialized_TestCase_initialized_eqFunction_139,
    MyNordic_initialized_TestCase_initialized_eqFunction_140,
    MyNordic_initialized_TestCase_initialized_eqFunction_141,
    MyNordic_initialized_TestCase_initialized_eqFunction_142,
    MyNordic_initialized_TestCase_initialized_eqFunction_143,
    MyNordic_initialized_TestCase_initialized_eqFunction_144,
    MyNordic_initialized_TestCase_initialized_eqFunction_145,
    MyNordic_initialized_TestCase_initialized_eqFunction_146,
    MyNordic_initialized_TestCase_initialized_eqFunction_147,
    MyNordic_initialized_TestCase_initialized_eqFunction_148,
    MyNordic_initialized_TestCase_initialized_eqFunction_149,
    MyNordic_initialized_TestCase_initialized_eqFunction_150,
    MyNordic_initialized_TestCase_initialized_eqFunction_151,
    MyNordic_initialized_TestCase_initialized_eqFunction_152,
    MyNordic_initialized_TestCase_initialized_eqFunction_153,
    MyNordic_initialized_TestCase_initialized_eqFunction_154,
    MyNordic_initialized_TestCase_initialized_eqFunction_155,
    MyNordic_initialized_TestCase_initialized_eqFunction_156,
    MyNordic_initialized_TestCase_initialized_eqFunction_157,
    MyNordic_initialized_TestCase_initialized_eqFunction_158,
    MyNordic_initialized_TestCase_initialized_eqFunction_159,
    MyNordic_initialized_TestCase_initialized_eqFunction_160,
    MyNordic_initialized_TestCase_initialized_eqFunction_161,
    MyNordic_initialized_TestCase_initialized_eqFunction_162,
    MyNordic_initialized_TestCase_initialized_eqFunction_163,
    MyNordic_initialized_TestCase_initialized_eqFunction_164,
    MyNordic_initialized_TestCase_initialized_eqFunction_165,
    MyNordic_initialized_TestCase_initialized_eqFunction_166,
    MyNordic_initialized_TestCase_initialized_eqFunction_167,
    MyNordic_initialized_TestCase_initialized_eqFunction_168,
    MyNordic_initialized_TestCase_initialized_eqFunction_169,
    MyNordic_initialized_TestCase_initialized_eqFunction_170,
    MyNordic_initialized_TestCase_initialized_eqFunction_171,
    MyNordic_initialized_TestCase_initialized_eqFunction_172,
    MyNordic_initialized_TestCase_initialized_eqFunction_173,
    MyNordic_initialized_TestCase_initialized_eqFunction_174,
    MyNordic_initialized_TestCase_initialized_eqFunction_175,
    MyNordic_initialized_TestCase_initialized_eqFunction_176,
    MyNordic_initialized_TestCase_initialized_eqFunction_177,
    MyNordic_initialized_TestCase_initialized_eqFunction_178,
    MyNordic_initialized_TestCase_initialized_eqFunction_179,
    MyNordic_initialized_TestCase_initialized_eqFunction_180,
    MyNordic_initialized_TestCase_initialized_eqFunction_181,
    MyNordic_initialized_TestCase_initialized_eqFunction_182,
    MyNordic_initialized_TestCase_initialized_eqFunction_183,
    MyNordic_initialized_TestCase_initialized_eqFunction_184,
    MyNordic_initialized_TestCase_initialized_eqFunction_185,
    MyNordic_initialized_TestCase_initialized_eqFunction_186,
    MyNordic_initialized_TestCase_initialized_eqFunction_187,
    MyNordic_initialized_TestCase_initialized_eqFunction_188,
    MyNordic_initialized_TestCase_initialized_eqFunction_189,
    MyNordic_initialized_TestCase_initialized_eqFunction_190,
    MyNordic_initialized_TestCase_initialized_eqFunction_191,
    MyNordic_initialized_TestCase_initialized_eqFunction_192,
    MyNordic_initialized_TestCase_initialized_eqFunction_193,
    MyNordic_initialized_TestCase_initialized_eqFunction_194,
    MyNordic_initialized_TestCase_initialized_eqFunction_195,
    MyNordic_initialized_TestCase_initialized_eqFunction_196,
    MyNordic_initialized_TestCase_initialized_eqFunction_197,
    MyNordic_initialized_TestCase_initialized_eqFunction_198,
    MyNordic_initialized_TestCase_initialized_eqFunction_199,
    MyNordic_initialized_TestCase_initialized_eqFunction_200,
    MyNordic_initialized_TestCase_initialized_eqFunction_201,
    MyNordic_initialized_TestCase_initialized_eqFunction_202,
    MyNordic_initialized_TestCase_initialized_eqFunction_203,
    MyNordic_initialized_TestCase_initialized_eqFunction_204,
    MyNordic_initialized_TestCase_initialized_eqFunction_205,
    MyNordic_initialized_TestCase_initialized_eqFunction_206,
    MyNordic_initialized_TestCase_initialized_eqFunction_207,
    MyNordic_initialized_TestCase_initialized_eqFunction_208,
    MyNordic_initialized_TestCase_initialized_eqFunction_209,
    MyNordic_initialized_TestCase_initialized_eqFunction_210,
    MyNordic_initialized_TestCase_initialized_eqFunction_211,
    MyNordic_initialized_TestCase_initialized_eqFunction_212,
    MyNordic_initialized_TestCase_initialized_eqFunction_213,
    MyNordic_initialized_TestCase_initialized_eqFunction_214,
    MyNordic_initialized_TestCase_initialized_eqFunction_215,
    MyNordic_initialized_TestCase_initialized_eqFunction_216,
    MyNordic_initialized_TestCase_initialized_eqFunction_217,
    MyNordic_initialized_TestCase_initialized_eqFunction_218,
    MyNordic_initialized_TestCase_initialized_eqFunction_219,
    MyNordic_initialized_TestCase_initialized_eqFunction_220,
    MyNordic_initialized_TestCase_initialized_eqFunction_221,
    MyNordic_initialized_TestCase_initialized_eqFunction_222,
    MyNordic_initialized_TestCase_initialized_eqFunction_223,
    MyNordic_initialized_TestCase_initialized_eqFunction_224,
    MyNordic_initialized_TestCase_initialized_eqFunction_225,
    MyNordic_initialized_TestCase_initialized_eqFunction_226,
    MyNordic_initialized_TestCase_initialized_eqFunction_227,
    MyNordic_initialized_TestCase_initialized_eqFunction_228,
    MyNordic_initialized_TestCase_initialized_eqFunction_229,
    MyNordic_initialized_TestCase_initialized_eqFunction_230,
    MyNordic_initialized_TestCase_initialized_eqFunction_231,
    MyNordic_initialized_TestCase_initialized_eqFunction_232,
    MyNordic_initialized_TestCase_initialized_eqFunction_233,
    MyNordic_initialized_TestCase_initialized_eqFunction_234,
    MyNordic_initialized_TestCase_initialized_eqFunction_235,
    MyNordic_initialized_TestCase_initialized_eqFunction_236,
    MyNordic_initialized_TestCase_initialized_eqFunction_237,
    MyNordic_initialized_TestCase_initialized_eqFunction_238,
    MyNordic_initialized_TestCase_initialized_eqFunction_239,
    MyNordic_initialized_TestCase_initialized_eqFunction_240,
    MyNordic_initialized_TestCase_initialized_eqFunction_241,
    MyNordic_initialized_TestCase_initialized_eqFunction_242,
    MyNordic_initialized_TestCase_initialized_eqFunction_243,
    MyNordic_initialized_TestCase_initialized_eqFunction_244,
    MyNordic_initialized_TestCase_initialized_eqFunction_245,
    MyNordic_initialized_TestCase_initialized_eqFunction_246,
    MyNordic_initialized_TestCase_initialized_eqFunction_247,
    MyNordic_initialized_TestCase_initialized_eqFunction_248,
    MyNordic_initialized_TestCase_initialized_eqFunction_249,
    MyNordic_initialized_TestCase_initialized_eqFunction_250,
    MyNordic_initialized_TestCase_initialized_eqFunction_251,
    MyNordic_initialized_TestCase_initialized_eqFunction_252,
    MyNordic_initialized_TestCase_initialized_eqFunction_253,
    MyNordic_initialized_TestCase_initialized_eqFunction_254,
    MyNordic_initialized_TestCase_initialized_eqFunction_255,
    MyNordic_initialized_TestCase_initialized_eqFunction_256,
    MyNordic_initialized_TestCase_initialized_eqFunction_257,
    MyNordic_initialized_TestCase_initialized_eqFunction_258,
    MyNordic_initialized_TestCase_initialized_eqFunction_259,
    MyNordic_initialized_TestCase_initialized_eqFunction_260,
    MyNordic_initialized_TestCase_initialized_eqFunction_261,
    MyNordic_initialized_TestCase_initialized_eqFunction_262,
    MyNordic_initialized_TestCase_initialized_eqFunction_263,
    MyNordic_initialized_TestCase_initialized_eqFunction_264,
    MyNordic_initialized_TestCase_initialized_eqFunction_265,
    MyNordic_initialized_TestCase_initialized_eqFunction_266,
    MyNordic_initialized_TestCase_initialized_eqFunction_267,
    MyNordic_initialized_TestCase_initialized_eqFunction_268,
    MyNordic_initialized_TestCase_initialized_eqFunction_269,
    MyNordic_initialized_TestCase_initialized_eqFunction_270,
    MyNordic_initialized_TestCase_initialized_eqFunction_271,
    MyNordic_initialized_TestCase_initialized_eqFunction_272,
    MyNordic_initialized_TestCase_initialized_eqFunction_273,
    MyNordic_initialized_TestCase_initialized_eqFunction_274,
    MyNordic_initialized_TestCase_initialized_eqFunction_275,
    MyNordic_initialized_TestCase_initialized_eqFunction_276,
    MyNordic_initialized_TestCase_initialized_eqFunction_277,
    MyNordic_initialized_TestCase_initialized_eqFunction_278,
    MyNordic_initialized_TestCase_initialized_eqFunction_279,
    MyNordic_initialized_TestCase_initialized_eqFunction_280,
    MyNordic_initialized_TestCase_initialized_eqFunction_281,
    MyNordic_initialized_TestCase_initialized_eqFunction_282,
    MyNordic_initialized_TestCase_initialized_eqFunction_283,
    MyNordic_initialized_TestCase_initialized_eqFunction_284,
    MyNordic_initialized_TestCase_initialized_eqFunction_285,
    MyNordic_initialized_TestCase_initialized_eqFunction_286,
    MyNordic_initialized_TestCase_initialized_eqFunction_287,
    MyNordic_initialized_TestCase_initialized_eqFunction_288,
    MyNordic_initialized_TestCase_initialized_eqFunction_289,
    MyNordic_initialized_TestCase_initialized_eqFunction_290,
    MyNordic_initialized_TestCase_initialized_eqFunction_291,
    MyNordic_initialized_TestCase_initialized_eqFunction_292,
    MyNordic_initialized_TestCase_initialized_eqFunction_293,
    MyNordic_initialized_TestCase_initialized_eqFunction_294,
    MyNordic_initialized_TestCase_initialized_eqFunction_295,
    MyNordic_initialized_TestCase_initialized_eqFunction_296,
    MyNordic_initialized_TestCase_initialized_eqFunction_297,
    MyNordic_initialized_TestCase_initialized_eqFunction_298,
    MyNordic_initialized_TestCase_initialized_eqFunction_299,
    MyNordic_initialized_TestCase_initialized_eqFunction_300,
    MyNordic_initialized_TestCase_initialized_eqFunction_301,
    MyNordic_initialized_TestCase_initialized_eqFunction_302,
    MyNordic_initialized_TestCase_initialized_eqFunction_303,
    MyNordic_initialized_TestCase_initialized_eqFunction_304,
    MyNordic_initialized_TestCase_initialized_eqFunction_305,
    MyNordic_initialized_TestCase_initialized_eqFunction_306,
    MyNordic_initialized_TestCase_initialized_eqFunction_307,
    MyNordic_initialized_TestCase_initialized_eqFunction_308,
    MyNordic_initialized_TestCase_initialized_eqFunction_309,
    MyNordic_initialized_TestCase_initialized_eqFunction_310,
    MyNordic_initialized_TestCase_initialized_eqFunction_311,
    MyNordic_initialized_TestCase_initialized_eqFunction_312,
    MyNordic_initialized_TestCase_initialized_eqFunction_313,
    MyNordic_initialized_TestCase_initialized_eqFunction_314,
    MyNordic_initialized_TestCase_initialized_eqFunction_315,
    MyNordic_initialized_TestCase_initialized_eqFunction_316,
    MyNordic_initialized_TestCase_initialized_eqFunction_317,
    MyNordic_initialized_TestCase_initialized_eqFunction_318,
    MyNordic_initialized_TestCase_initialized_eqFunction_319,
    MyNordic_initialized_TestCase_initialized_eqFunction_320,
    MyNordic_initialized_TestCase_initialized_eqFunction_321,
    MyNordic_initialized_TestCase_initialized_eqFunction_322,
    MyNordic_initialized_TestCase_initialized_eqFunction_323,
    MyNordic_initialized_TestCase_initialized_eqFunction_324,
    MyNordic_initialized_TestCase_initialized_eqFunction_325,
    MyNordic_initialized_TestCase_initialized_eqFunction_326,
    MyNordic_initialized_TestCase_initialized_eqFunction_327,
    MyNordic_initialized_TestCase_initialized_eqFunction_328,
    MyNordic_initialized_TestCase_initialized_eqFunction_329,
    MyNordic_initialized_TestCase_initialized_eqFunction_330,
    MyNordic_initialized_TestCase_initialized_eqFunction_331,
    MyNordic_initialized_TestCase_initialized_eqFunction_332,
    MyNordic_initialized_TestCase_initialized_eqFunction_333,
    MyNordic_initialized_TestCase_initialized_eqFunction_334,
    MyNordic_initialized_TestCase_initialized_eqFunction_335,
    MyNordic_initialized_TestCase_initialized_eqFunction_336,
    MyNordic_initialized_TestCase_initialized_eqFunction_337,
    MyNordic_initialized_TestCase_initialized_eqFunction_338,
    MyNordic_initialized_TestCase_initialized_eqFunction_339,
    MyNordic_initialized_TestCase_initialized_eqFunction_340,
    MyNordic_initialized_TestCase_initialized_eqFunction_341,
    MyNordic_initialized_TestCase_initialized_eqFunction_342,
    MyNordic_initialized_TestCase_initialized_eqFunction_343,
    MyNordic_initialized_TestCase_initialized_eqFunction_344,
    MyNordic_initialized_TestCase_initialized_eqFunction_345,
    MyNordic_initialized_TestCase_initialized_eqFunction_346,
    MyNordic_initialized_TestCase_initialized_eqFunction_347,
    MyNordic_initialized_TestCase_initialized_eqFunction_348,
    MyNordic_initialized_TestCase_initialized_eqFunction_349,
    MyNordic_initialized_TestCase_initialized_eqFunction_350,
    MyNordic_initialized_TestCase_initialized_eqFunction_351,
    MyNordic_initialized_TestCase_initialized_eqFunction_352,
    MyNordic_initialized_TestCase_initialized_eqFunction_353,
    MyNordic_initialized_TestCase_initialized_eqFunction_354,
    MyNordic_initialized_TestCase_initialized_eqFunction_355,
    MyNordic_initialized_TestCase_initialized_eqFunction_356,
    MyNordic_initialized_TestCase_initialized_eqFunction_357,
    MyNordic_initialized_TestCase_initialized_eqFunction_358,
    MyNordic_initialized_TestCase_initialized_eqFunction_359,
    MyNordic_initialized_TestCase_initialized_eqFunction_360,
    MyNordic_initialized_TestCase_initialized_eqFunction_361,
    MyNordic_initialized_TestCase_initialized_eqFunction_362,
    MyNordic_initialized_TestCase_initialized_eqFunction_363,
    MyNordic_initialized_TestCase_initialized_eqFunction_364,
    MyNordic_initialized_TestCase_initialized_eqFunction_365,
    MyNordic_initialized_TestCase_initialized_eqFunction_366,
    MyNordic_initialized_TestCase_initialized_eqFunction_367,
    MyNordic_initialized_TestCase_initialized_eqFunction_368,
    MyNordic_initialized_TestCase_initialized_eqFunction_369,
    MyNordic_initialized_TestCase_initialized_eqFunction_370,
    MyNordic_initialized_TestCase_initialized_eqFunction_371,
    MyNordic_initialized_TestCase_initialized_eqFunction_372,
    MyNordic_initialized_TestCase_initialized_eqFunction_373,
    MyNordic_initialized_TestCase_initialized_eqFunction_374,
    MyNordic_initialized_TestCase_initialized_eqFunction_375,
    MyNordic_initialized_TestCase_initialized_eqFunction_376,
    MyNordic_initialized_TestCase_initialized_eqFunction_377,
    MyNordic_initialized_TestCase_initialized_eqFunction_378,
    MyNordic_initialized_TestCase_initialized_eqFunction_379,
    MyNordic_initialized_TestCase_initialized_eqFunction_380,
    MyNordic_initialized_TestCase_initialized_eqFunction_381,
    MyNordic_initialized_TestCase_initialized_eqFunction_382,
    MyNordic_initialized_TestCase_initialized_eqFunction_383,
    MyNordic_initialized_TestCase_initialized_eqFunction_384,
    MyNordic_initialized_TestCase_initialized_eqFunction_385,
    MyNordic_initialized_TestCase_initialized_eqFunction_386,
    MyNordic_initialized_TestCase_initialized_eqFunction_387,
    MyNordic_initialized_TestCase_initialized_eqFunction_388,
    MyNordic_initialized_TestCase_initialized_eqFunction_389,
    MyNordic_initialized_TestCase_initialized_eqFunction_390,
    MyNordic_initialized_TestCase_initialized_eqFunction_391,
    MyNordic_initialized_TestCase_initialized_eqFunction_392,
    MyNordic_initialized_TestCase_initialized_eqFunction_393,
    MyNordic_initialized_TestCase_initialized_eqFunction_394,
    MyNordic_initialized_TestCase_initialized_eqFunction_395,
    MyNordic_initialized_TestCase_initialized_eqFunction_396,
    MyNordic_initialized_TestCase_initialized_eqFunction_397,
    MyNordic_initialized_TestCase_initialized_eqFunction_398,
    MyNordic_initialized_TestCase_initialized_eqFunction_399,
    MyNordic_initialized_TestCase_initialized_eqFunction_400,
    MyNordic_initialized_TestCase_initialized_eqFunction_401,
    MyNordic_initialized_TestCase_initialized_eqFunction_402,
    MyNordic_initialized_TestCase_initialized_eqFunction_403,
    MyNordic_initialized_TestCase_initialized_eqFunction_404,
    MyNordic_initialized_TestCase_initialized_eqFunction_405,
    MyNordic_initialized_TestCase_initialized_eqFunction_406,
    MyNordic_initialized_TestCase_initialized_eqFunction_407,
    MyNordic_initialized_TestCase_initialized_eqFunction_408,
    MyNordic_initialized_TestCase_initialized_eqFunction_409,
    MyNordic_initialized_TestCase_initialized_eqFunction_410,
    MyNordic_initialized_TestCase_initialized_eqFunction_411,
    MyNordic_initialized_TestCase_initialized_eqFunction_412,
    MyNordic_initialized_TestCase_initialized_eqFunction_413,
    MyNordic_initialized_TestCase_initialized_eqFunction_414,
    MyNordic_initialized_TestCase_initialized_eqFunction_415,
    MyNordic_initialized_TestCase_initialized_eqFunction_416,
    MyNordic_initialized_TestCase_initialized_eqFunction_417,
    MyNordic_initialized_TestCase_initialized_eqFunction_418,
    MyNordic_initialized_TestCase_initialized_eqFunction_419,
    MyNordic_initialized_TestCase_initialized_eqFunction_420,
    MyNordic_initialized_TestCase_initialized_eqFunction_421,
    MyNordic_initialized_TestCase_initialized_eqFunction_422,
    MyNordic_initialized_TestCase_initialized_eqFunction_423,
    MyNordic_initialized_TestCase_initialized_eqFunction_424,
    MyNordic_initialized_TestCase_initialized_eqFunction_425,
    MyNordic_initialized_TestCase_initialized_eqFunction_426,
    MyNordic_initialized_TestCase_initialized_eqFunction_427,
    MyNordic_initialized_TestCase_initialized_eqFunction_428,
    MyNordic_initialized_TestCase_initialized_eqFunction_429,
    MyNordic_initialized_TestCase_initialized_eqFunction_430,
    MyNordic_initialized_TestCase_initialized_eqFunction_431,
    MyNordic_initialized_TestCase_initialized_eqFunction_432,
    MyNordic_initialized_TestCase_initialized_eqFunction_433,
    MyNordic_initialized_TestCase_initialized_eqFunction_434,
    MyNordic_initialized_TestCase_initialized_eqFunction_435,
    MyNordic_initialized_TestCase_initialized_eqFunction_436,
    MyNordic_initialized_TestCase_initialized_eqFunction_437,
    MyNordic_initialized_TestCase_initialized_eqFunction_438,
    MyNordic_initialized_TestCase_initialized_eqFunction_439,
    MyNordic_initialized_TestCase_initialized_eqFunction_440,
    MyNordic_initialized_TestCase_initialized_eqFunction_441,
    MyNordic_initialized_TestCase_initialized_eqFunction_442,
    MyNordic_initialized_TestCase_initialized_eqFunction_443,
    MyNordic_initialized_TestCase_initialized_eqFunction_444,
    MyNordic_initialized_TestCase_initialized_eqFunction_445,
    MyNordic_initialized_TestCase_initialized_eqFunction_446,
    MyNordic_initialized_TestCase_initialized_eqFunction_447,
    MyNordic_initialized_TestCase_initialized_eqFunction_448,
    MyNordic_initialized_TestCase_initialized_eqFunction_449,
    MyNordic_initialized_TestCase_initialized_eqFunction_450,
    MyNordic_initialized_TestCase_initialized_eqFunction_451,
    MyNordic_initialized_TestCase_initialized_eqFunction_452,
    MyNordic_initialized_TestCase_initialized_eqFunction_453,
    MyNordic_initialized_TestCase_initialized_eqFunction_454,
    MyNordic_initialized_TestCase_initialized_eqFunction_455,
    MyNordic_initialized_TestCase_initialized_eqFunction_456,
    MyNordic_initialized_TestCase_initialized_eqFunction_457,
    MyNordic_initialized_TestCase_initialized_eqFunction_458
  };
  
  for (int id = 0; id < 458; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif