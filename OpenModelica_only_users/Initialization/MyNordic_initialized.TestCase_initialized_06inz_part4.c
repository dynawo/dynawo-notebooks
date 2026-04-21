#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1833
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.x[1] = vrNordic_g10.leadLag2.x_scaled[1] / vrNordic_g10.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3677]] /* vrNordic_g10.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* vrNordic_g10.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4883]] /* vrNordic_g10.leadLag2.a_end PARAM */),"vrNordic_g10.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1833;
}

/*
equation index: 1834
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.y = (vrNordic_g10.leadLag2.bb[2] - vrNordic_g10.leadLag2.d * vrNordic_g10.leadLag2.a[2]) * vrNordic_g10.leadLag2.x[1] + vrNordic_g10.leadLag2.d * vrNordic_g10.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3678]] /* vrNordic_g10.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4887]] /* vrNordic_g10.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4888]] /* vrNordic_g10.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4882]] /* vrNordic_g10.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3677]] /* vrNordic_g10.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4888]] /* vrNordic_g10.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3676]] /* vrNordic_g10.leadLag1.y variable */));
  threadData->lastEquationSolved = 1834;
}

/*
equation index: 1835
type: SIMPLE_ASSIGN
vrNordic_g10.limiter.y = smooth(0, if vrNordic_g10.leadLag2.y > vrNordic_g10.limiter.uMax then vrNordic_g10.limiter.uMax else if vrNordic_g10.leadLag2.y < vrNordic_g10.limiter.uMin then vrNordic_g10.limiter.uMin else vrNordic_g10.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1835};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
  tmp36 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3678]] /* vrNordic_g10.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4896]] /* vrNordic_g10.limiter.uMax PARAM */));
  tmp38 = (modelica_boolean)tmp36;
  if(tmp38)
  {
    tmp39 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4896]] /* vrNordic_g10.limiter.uMax PARAM */);
  }
  else
  {
    tmp37 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3678]] /* vrNordic_g10.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4897]] /* vrNordic_g10.limiter.uMin PARAM */));
    tmp39 = (tmp37?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4897]] /* vrNordic_g10.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3678]] /* vrNordic_g10.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3681]] /* vrNordic_g10.limiter.y variable */) = tmp39;
  threadData->lastEquationSolved = 1835;
}

/*
equation index: 1836
type: SIMPLE_ASSIGN
$DER.vrNordic_g10.leadLag2.x_scaled[1] = (vrNordic_g10.leadLag2.a_end * vrNordic_g10.leadLag1.y - vrNordic_g10.leadLag2.a[2] * vrNordic_g10.leadLag2.x_scaled[1]) / vrNordic_g10.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[577]] /* der(vrNordic_g10.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4883]] /* vrNordic_g10.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3676]] /* vrNordic_g10.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4882]] /* vrNordic_g10.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* vrNordic_g10.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4881]] /* vrNordic_g10.leadLag2.a[1] PARAM */),"vrNordic_g10.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1836;
}

/*
equation index: 1837
type: SIMPLE_ASSIGN
vrNordic_g11.derivative.x = $START.vrNordic_g11.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* vrNordic_g11.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[260] /* vrNordic_g11.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1837;
}

/*
equation index: 1838
type: SIMPLE_ASSIGN
vrNordic_g11.derivative.y = if vrNordic_g11.derivative.zeroGain then 0.0 else vrNordic_g11.derivative.k / vrNordic_g11.derivative.T * (vrNordic_g11.dOmega.y - vrNordic_g11.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1838};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3692]] /* vrNordic_g11.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[971]] /* vrNordic_g11.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4925]] /* vrNordic_g11.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4924]] /* vrNordic_g11.derivative.T PARAM */),"vrNordic_g11.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3690]] /* vrNordic_g11.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* vrNordic_g11.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1838;
}

/*
equation index: 1839
type: SIMPLE_ASSIGN
$DER.vrNordic_g11.derivative.x = if vrNordic_g11.derivative.zeroGain then 0.0 else (vrNordic_g11.dOmega.y - vrNordic_g11.derivative.x) / vrNordic_g11.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* der(vrNordic_g11.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[971]] /* vrNordic_g11.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3690]] /* vrNordic_g11.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* vrNordic_g11.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4924]] /* vrNordic_g11.derivative.T PARAM */),"vrNordic_g11.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1839;
}

/*
equation index: 1840
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.x_scaled[1] = $START.vrNordic_g11.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* vrNordic_g11.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[262] /* vrNordic_g11.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1840;
}

/*
equation index: 1841
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.x[1] = vrNordic_g11.leadLag1.x_scaled[1] / vrNordic_g11.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3699]] /* vrNordic_g11.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* vrNordic_g11.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4949]] /* vrNordic_g11.leadLag1.a_end PARAM */),"vrNordic_g11.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1841;
}

/*
equation index: 1842
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.y = (vrNordic_g11.leadLag1.bb[2] - vrNordic_g11.leadLag1.d * vrNordic_g11.leadLag1.a[2]) * vrNordic_g11.leadLag1.x[1] + vrNordic_g11.leadLag1.d * vrNordic_g11.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3700]] /* vrNordic_g11.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4953]] /* vrNordic_g11.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4954]] /* vrNordic_g11.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4948]] /* vrNordic_g11.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3699]] /* vrNordic_g11.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4954]] /* vrNordic_g11.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3692]] /* vrNordic_g11.derivative.y variable */));
  threadData->lastEquationSolved = 1842;
}

/*
equation index: 1843
type: SIMPLE_ASSIGN
$DER.vrNordic_g11.leadLag1.x_scaled[1] = (vrNordic_g11.leadLag1.a_end * vrNordic_g11.derivative.y - vrNordic_g11.leadLag1.a[2] * vrNordic_g11.leadLag1.x_scaled[1]) / vrNordic_g11.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[582]] /* der(vrNordic_g11.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4949]] /* vrNordic_g11.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3692]] /* vrNordic_g11.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4948]] /* vrNordic_g11.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* vrNordic_g11.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4947]] /* vrNordic_g11.leadLag1.a[1] PARAM */),"vrNordic_g11.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1843;
}

/*
equation index: 1844
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.x_scaled[1] = $START.vrNordic_g11.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1844};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* vrNordic_g11.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[263] /* vrNordic_g11.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1844;
}

/*
equation index: 1845
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.x[1] = vrNordic_g11.leadLag2.x_scaled[1] / vrNordic_g11.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3701]] /* vrNordic_g11.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* vrNordic_g11.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4962]] /* vrNordic_g11.leadLag2.a_end PARAM */),"vrNordic_g11.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1845;
}

/*
equation index: 1846
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.y = (vrNordic_g11.leadLag2.bb[2] - vrNordic_g11.leadLag2.d * vrNordic_g11.leadLag2.a[2]) * vrNordic_g11.leadLag2.x[1] + vrNordic_g11.leadLag2.d * vrNordic_g11.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1846};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3702]] /* vrNordic_g11.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4966]] /* vrNordic_g11.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4967]] /* vrNordic_g11.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4961]] /* vrNordic_g11.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3701]] /* vrNordic_g11.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4967]] /* vrNordic_g11.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3700]] /* vrNordic_g11.leadLag1.y variable */));
  threadData->lastEquationSolved = 1846;
}

/*
equation index: 1847
type: SIMPLE_ASSIGN
vrNordic_g11.limiter.y = smooth(0, if vrNordic_g11.leadLag2.y > vrNordic_g11.limiter.uMax then vrNordic_g11.limiter.uMax else if vrNordic_g11.leadLag2.y < vrNordic_g11.limiter.uMin then vrNordic_g11.limiter.uMin else vrNordic_g11.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1847};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  tmp40 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3702]] /* vrNordic_g11.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4975]] /* vrNordic_g11.limiter.uMax PARAM */));
  tmp42 = (modelica_boolean)tmp40;
  if(tmp42)
  {
    tmp43 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4975]] /* vrNordic_g11.limiter.uMax PARAM */);
  }
  else
  {
    tmp41 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3702]] /* vrNordic_g11.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4976]] /* vrNordic_g11.limiter.uMin PARAM */));
    tmp43 = (tmp41?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4976]] /* vrNordic_g11.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3702]] /* vrNordic_g11.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3705]] /* vrNordic_g11.limiter.y variable */) = tmp43;
  threadData->lastEquationSolved = 1847;
}

/*
equation index: 1848
type: SIMPLE_ASSIGN
$DER.vrNordic_g11.leadLag2.x_scaled[1] = (vrNordic_g11.leadLag2.a_end * vrNordic_g11.leadLag1.y - vrNordic_g11.leadLag2.a[2] * vrNordic_g11.leadLag2.x_scaled[1]) / vrNordic_g11.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1848};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* der(vrNordic_g11.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4962]] /* vrNordic_g11.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3700]] /* vrNordic_g11.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4961]] /* vrNordic_g11.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* vrNordic_g11.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4960]] /* vrNordic_g11.leadLag2.a[1] PARAM */),"vrNordic_g11.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1848;
}

/*
equation index: 1849
type: SIMPLE_ASSIGN
vrNordic_g12.derivative.x = $START.vrNordic_g12.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* vrNordic_g12.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[266] /* vrNordic_g12.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1849;
}

/*
equation index: 1850
type: SIMPLE_ASSIGN
vrNordic_g12.derivative.y = if vrNordic_g12.derivative.zeroGain then 0.0 else vrNordic_g12.derivative.k / vrNordic_g12.derivative.T * (vrNordic_g12.dOmega.y - vrNordic_g12.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3716]] /* vrNordic_g12.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[982]] /* vrNordic_g12.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5004]] /* vrNordic_g12.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5003]] /* vrNordic_g12.derivative.T PARAM */),"vrNordic_g12.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3714]] /* vrNordic_g12.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* vrNordic_g12.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1850;
}

/*
equation index: 1851
type: SIMPLE_ASSIGN
$DER.vrNordic_g12.derivative.x = if vrNordic_g12.derivative.zeroGain then 0.0 else (vrNordic_g12.dOmega.y - vrNordic_g12.derivative.x) / vrNordic_g12.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* der(vrNordic_g12.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[982]] /* vrNordic_g12.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3714]] /* vrNordic_g12.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* vrNordic_g12.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5003]] /* vrNordic_g12.derivative.T PARAM */),"vrNordic_g12.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1851;
}

/*
equation index: 1852
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.x_scaled[1] = $START.vrNordic_g12.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1852};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* vrNordic_g12.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[268] /* vrNordic_g12.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1852;
}

/*
equation index: 1853
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.x[1] = vrNordic_g12.leadLag1.x_scaled[1] / vrNordic_g12.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3723]] /* vrNordic_g12.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* vrNordic_g12.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5028]] /* vrNordic_g12.leadLag1.a_end PARAM */),"vrNordic_g12.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1853;
}

/*
equation index: 1854
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.y = (vrNordic_g12.leadLag1.bb[2] - vrNordic_g12.leadLag1.d * vrNordic_g12.leadLag1.a[2]) * vrNordic_g12.leadLag1.x[1] + vrNordic_g12.leadLag1.d * vrNordic_g12.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3724]] /* vrNordic_g12.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5032]] /* vrNordic_g12.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5033]] /* vrNordic_g12.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5027]] /* vrNordic_g12.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3723]] /* vrNordic_g12.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5033]] /* vrNordic_g12.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3716]] /* vrNordic_g12.derivative.y variable */));
  threadData->lastEquationSolved = 1854;
}

/*
equation index: 1855
type: SIMPLE_ASSIGN
$DER.vrNordic_g12.leadLag1.x_scaled[1] = (vrNordic_g12.leadLag1.a_end * vrNordic_g12.derivative.y - vrNordic_g12.leadLag1.a[2] * vrNordic_g12.leadLag1.x_scaled[1]) / vrNordic_g12.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* der(vrNordic_g12.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5028]] /* vrNordic_g12.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3716]] /* vrNordic_g12.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5027]] /* vrNordic_g12.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* vrNordic_g12.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5026]] /* vrNordic_g12.leadLag1.a[1] PARAM */),"vrNordic_g12.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1855;
}

/*
equation index: 1856
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.x_scaled[1] = $START.vrNordic_g12.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* vrNordic_g12.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[269] /* vrNordic_g12.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1856;
}

/*
equation index: 1857
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.x[1] = vrNordic_g12.leadLag2.x_scaled[1] / vrNordic_g12.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3725]] /* vrNordic_g12.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* vrNordic_g12.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5041]] /* vrNordic_g12.leadLag2.a_end PARAM */),"vrNordic_g12.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1857;
}

/*
equation index: 1858
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.y = (vrNordic_g12.leadLag2.bb[2] - vrNordic_g12.leadLag2.d * vrNordic_g12.leadLag2.a[2]) * vrNordic_g12.leadLag2.x[1] + vrNordic_g12.leadLag2.d * vrNordic_g12.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3726]] /* vrNordic_g12.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5045]] /* vrNordic_g12.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5046]] /* vrNordic_g12.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5040]] /* vrNordic_g12.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3725]] /* vrNordic_g12.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5046]] /* vrNordic_g12.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3724]] /* vrNordic_g12.leadLag1.y variable */));
  threadData->lastEquationSolved = 1858;
}

/*
equation index: 1859
type: SIMPLE_ASSIGN
vrNordic_g12.limiter.y = smooth(0, if vrNordic_g12.leadLag2.y > vrNordic_g12.limiter.uMax then vrNordic_g12.limiter.uMax else if vrNordic_g12.leadLag2.y < vrNordic_g12.limiter.uMin then vrNordic_g12.limiter.uMin else vrNordic_g12.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1859};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  tmp44 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3726]] /* vrNordic_g12.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5054]] /* vrNordic_g12.limiter.uMax PARAM */));
  tmp46 = (modelica_boolean)tmp44;
  if(tmp46)
  {
    tmp47 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5054]] /* vrNordic_g12.limiter.uMax PARAM */);
  }
  else
  {
    tmp45 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3726]] /* vrNordic_g12.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5055]] /* vrNordic_g12.limiter.uMin PARAM */));
    tmp47 = (tmp45?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5055]] /* vrNordic_g12.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3726]] /* vrNordic_g12.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3729]] /* vrNordic_g12.limiter.y variable */) = tmp47;
  threadData->lastEquationSolved = 1859;
}

/*
equation index: 1860
type: SIMPLE_ASSIGN
$DER.vrNordic_g12.leadLag2.x_scaled[1] = (vrNordic_g12.leadLag2.a_end * vrNordic_g12.leadLag1.y - vrNordic_g12.leadLag2.a[2] * vrNordic_g12.leadLag2.x_scaled[1]) / vrNordic_g12.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* der(vrNordic_g12.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5041]] /* vrNordic_g12.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3724]] /* vrNordic_g12.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5040]] /* vrNordic_g12.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* vrNordic_g12.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5039]] /* vrNordic_g12.leadLag2.a[1] PARAM */),"vrNordic_g12.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1860;
}

/*
equation index: 1861
type: SIMPLE_ASSIGN
vrNordic_g13.derivative.x = $START.vrNordic_g13.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* vrNordic_g13.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[272] /* vrNordic_g13.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1861;
}

/*
equation index: 1862
type: SIMPLE_ASSIGN
vrNordic_g13.derivative.y = if vrNordic_g13.derivative.zeroGain then 0.0 else vrNordic_g13.derivative.k / vrNordic_g13.derivative.T * (vrNordic_g13.dOmega.y - vrNordic_g13.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3740]] /* vrNordic_g13.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[993]] /* vrNordic_g13.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5083]] /* vrNordic_g13.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5082]] /* vrNordic_g13.derivative.T PARAM */),"vrNordic_g13.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3738]] /* vrNordic_g13.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* vrNordic_g13.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1862;
}

/*
equation index: 1863
type: SIMPLE_ASSIGN
$DER.vrNordic_g13.derivative.x = if vrNordic_g13.derivative.zeroGain then 0.0 else (vrNordic_g13.dOmega.y - vrNordic_g13.derivative.x) / vrNordic_g13.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* der(vrNordic_g13.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[993]] /* vrNordic_g13.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3738]] /* vrNordic_g13.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* vrNordic_g13.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5082]] /* vrNordic_g13.derivative.T PARAM */),"vrNordic_g13.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1863;
}

/*
equation index: 1864
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.x_scaled[1] = $START.vrNordic_g13.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* vrNordic_g13.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[274] /* vrNordic_g13.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1864;
}

/*
equation index: 1865
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.x[1] = vrNordic_g13.leadLag1.x_scaled[1] / vrNordic_g13.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3747]] /* vrNordic_g13.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* vrNordic_g13.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5107]] /* vrNordic_g13.leadLag1.a_end PARAM */),"vrNordic_g13.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1865;
}

/*
equation index: 1866
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.y = (vrNordic_g13.leadLag1.bb[2] - vrNordic_g13.leadLag1.d * vrNordic_g13.leadLag1.a[2]) * vrNordic_g13.leadLag1.x[1] + vrNordic_g13.leadLag1.d * vrNordic_g13.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3748]] /* vrNordic_g13.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5111]] /* vrNordic_g13.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5112]] /* vrNordic_g13.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5106]] /* vrNordic_g13.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3747]] /* vrNordic_g13.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5112]] /* vrNordic_g13.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3740]] /* vrNordic_g13.derivative.y variable */));
  threadData->lastEquationSolved = 1866;
}

/*
equation index: 1867
type: SIMPLE_ASSIGN
$DER.vrNordic_g13.leadLag1.x_scaled[1] = (vrNordic_g13.leadLag1.a_end * vrNordic_g13.derivative.y - vrNordic_g13.leadLag1.a[2] * vrNordic_g13.leadLag1.x_scaled[1]) / vrNordic_g13.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* der(vrNordic_g13.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5107]] /* vrNordic_g13.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3740]] /* vrNordic_g13.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5106]] /* vrNordic_g13.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* vrNordic_g13.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5105]] /* vrNordic_g13.leadLag1.a[1] PARAM */),"vrNordic_g13.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1867;
}

/*
equation index: 1868
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.x_scaled[1] = $START.vrNordic_g13.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1868};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* vrNordic_g13.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[275] /* vrNordic_g13.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1868;
}

/*
equation index: 1869
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.x[1] = vrNordic_g13.leadLag2.x_scaled[1] / vrNordic_g13.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3749]] /* vrNordic_g13.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* vrNordic_g13.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5120]] /* vrNordic_g13.leadLag2.a_end PARAM */),"vrNordic_g13.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1869;
}

/*
equation index: 1870
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.y = (vrNordic_g13.leadLag2.bb[2] - vrNordic_g13.leadLag2.d * vrNordic_g13.leadLag2.a[2]) * vrNordic_g13.leadLag2.x[1] + vrNordic_g13.leadLag2.d * vrNordic_g13.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3750]] /* vrNordic_g13.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5124]] /* vrNordic_g13.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5125]] /* vrNordic_g13.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5119]] /* vrNordic_g13.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3749]] /* vrNordic_g13.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5125]] /* vrNordic_g13.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3748]] /* vrNordic_g13.leadLag1.y variable */));
  threadData->lastEquationSolved = 1870;
}

/*
equation index: 1871
type: SIMPLE_ASSIGN
vrNordic_g13.limiter.y = smooth(0, if vrNordic_g13.leadLag2.y > vrNordic_g13.limiter.uMax then vrNordic_g13.limiter.uMax else if vrNordic_g13.leadLag2.y < vrNordic_g13.limiter.uMin then vrNordic_g13.limiter.uMin else vrNordic_g13.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1871};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  tmp48 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3750]] /* vrNordic_g13.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5133]] /* vrNordic_g13.limiter.uMax PARAM */));
  tmp50 = (modelica_boolean)tmp48;
  if(tmp50)
  {
    tmp51 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5133]] /* vrNordic_g13.limiter.uMax PARAM */);
  }
  else
  {
    tmp49 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3750]] /* vrNordic_g13.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5134]] /* vrNordic_g13.limiter.uMin PARAM */));
    tmp51 = (tmp49?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5134]] /* vrNordic_g13.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3750]] /* vrNordic_g13.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3753]] /* vrNordic_g13.limiter.y variable */) = tmp51;
  threadData->lastEquationSolved = 1871;
}

/*
equation index: 1872
type: SIMPLE_ASSIGN
$DER.vrNordic_g13.leadLag2.x_scaled[1] = (vrNordic_g13.leadLag2.a_end * vrNordic_g13.leadLag1.y - vrNordic_g13.leadLag2.a[2] * vrNordic_g13.leadLag2.x_scaled[1]) / vrNordic_g13.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* der(vrNordic_g13.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5120]] /* vrNordic_g13.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3748]] /* vrNordic_g13.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5119]] /* vrNordic_g13.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* vrNordic_g13.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5118]] /* vrNordic_g13.leadLag2.a[1] PARAM */),"vrNordic_g13.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1872;
}

/*
equation index: 1873
type: SIMPLE_ASSIGN
vrNordic_g14.derivative.x = $START.vrNordic_g14.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1873};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* vrNordic_g14.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[278] /* vrNordic_g14.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1873;
}

/*
equation index: 1874
type: SIMPLE_ASSIGN
vrNordic_g14.derivative.y = if vrNordic_g14.derivative.zeroGain then 0.0 else vrNordic_g14.derivative.k / vrNordic_g14.derivative.T * (vrNordic_g14.dOmega.y - vrNordic_g14.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3764]] /* vrNordic_g14.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1004]] /* vrNordic_g14.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5162]] /* vrNordic_g14.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5161]] /* vrNordic_g14.derivative.T PARAM */),"vrNordic_g14.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3762]] /* vrNordic_g14.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* vrNordic_g14.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1874;
}

/*
equation index: 1875
type: SIMPLE_ASSIGN
$DER.vrNordic_g14.derivative.x = if vrNordic_g14.derivative.zeroGain then 0.0 else (vrNordic_g14.dOmega.y - vrNordic_g14.derivative.x) / vrNordic_g14.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* der(vrNordic_g14.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1004]] /* vrNordic_g14.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3762]] /* vrNordic_g14.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* vrNordic_g14.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5161]] /* vrNordic_g14.derivative.T PARAM */),"vrNordic_g14.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1875;
}

/*
equation index: 1876
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.x_scaled[1] = $START.vrNordic_g14.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* vrNordic_g14.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[280] /* vrNordic_g14.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1876;
}

/*
equation index: 1877
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.x[1] = vrNordic_g14.leadLag1.x_scaled[1] / vrNordic_g14.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1877};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3771]] /* vrNordic_g14.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* vrNordic_g14.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5186]] /* vrNordic_g14.leadLag1.a_end PARAM */),"vrNordic_g14.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1877;
}

/*
equation index: 1878
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.y = (vrNordic_g14.leadLag1.bb[2] - vrNordic_g14.leadLag1.d * vrNordic_g14.leadLag1.a[2]) * vrNordic_g14.leadLag1.x[1] + vrNordic_g14.leadLag1.d * vrNordic_g14.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3772]] /* vrNordic_g14.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5190]] /* vrNordic_g14.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5191]] /* vrNordic_g14.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5185]] /* vrNordic_g14.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3771]] /* vrNordic_g14.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5191]] /* vrNordic_g14.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3764]] /* vrNordic_g14.derivative.y variable */));
  threadData->lastEquationSolved = 1878;
}

/*
equation index: 1879
type: SIMPLE_ASSIGN
$DER.vrNordic_g14.leadLag1.x_scaled[1] = (vrNordic_g14.leadLag1.a_end * vrNordic_g14.derivative.y - vrNordic_g14.leadLag1.a[2] * vrNordic_g14.leadLag1.x_scaled[1]) / vrNordic_g14.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* der(vrNordic_g14.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5186]] /* vrNordic_g14.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3764]] /* vrNordic_g14.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5185]] /* vrNordic_g14.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* vrNordic_g14.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5184]] /* vrNordic_g14.leadLag1.a[1] PARAM */),"vrNordic_g14.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1879;
}

/*
equation index: 1880
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.x_scaled[1] = $START.vrNordic_g14.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* vrNordic_g14.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[281] /* vrNordic_g14.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1880;
}

/*
equation index: 1881
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.x[1] = vrNordic_g14.leadLag2.x_scaled[1] / vrNordic_g14.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3773]] /* vrNordic_g14.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* vrNordic_g14.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5199]] /* vrNordic_g14.leadLag2.a_end PARAM */),"vrNordic_g14.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1881;
}

/*
equation index: 1882
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.y = (vrNordic_g14.leadLag2.bb[2] - vrNordic_g14.leadLag2.d * vrNordic_g14.leadLag2.a[2]) * vrNordic_g14.leadLag2.x[1] + vrNordic_g14.leadLag2.d * vrNordic_g14.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1882};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3774]] /* vrNordic_g14.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5203]] /* vrNordic_g14.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5204]] /* vrNordic_g14.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5198]] /* vrNordic_g14.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3773]] /* vrNordic_g14.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5204]] /* vrNordic_g14.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3772]] /* vrNordic_g14.leadLag1.y variable */));
  threadData->lastEquationSolved = 1882;
}

/*
equation index: 1883
type: SIMPLE_ASSIGN
vrNordic_g14.limiter.y = smooth(0, if vrNordic_g14.leadLag2.y > vrNordic_g14.limiter.uMax then vrNordic_g14.limiter.uMax else if vrNordic_g14.leadLag2.y < vrNordic_g14.limiter.uMin then vrNordic_g14.limiter.uMin else vrNordic_g14.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1883};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  tmp52 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3774]] /* vrNordic_g14.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5212]] /* vrNordic_g14.limiter.uMax PARAM */));
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5212]] /* vrNordic_g14.limiter.uMax PARAM */);
  }
  else
  {
    tmp53 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3774]] /* vrNordic_g14.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5213]] /* vrNordic_g14.limiter.uMin PARAM */));
    tmp55 = (tmp53?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5213]] /* vrNordic_g14.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3774]] /* vrNordic_g14.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3777]] /* vrNordic_g14.limiter.y variable */) = tmp55;
  threadData->lastEquationSolved = 1883;
}

/*
equation index: 1884
type: SIMPLE_ASSIGN
$DER.vrNordic_g14.leadLag2.x_scaled[1] = (vrNordic_g14.leadLag2.a_end * vrNordic_g14.leadLag1.y - vrNordic_g14.leadLag2.a[2] * vrNordic_g14.leadLag2.x_scaled[1]) / vrNordic_g14.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* der(vrNordic_g14.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5199]] /* vrNordic_g14.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3772]] /* vrNordic_g14.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5198]] /* vrNordic_g14.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* vrNordic_g14.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5197]] /* vrNordic_g14.leadLag2.a[1] PARAM */),"vrNordic_g14.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1884;
}

/*
equation index: 1885
type: SIMPLE_ASSIGN
vrNordic_g15.derivative.x = $START.vrNordic_g15.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* vrNordic_g15.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[284] /* vrNordic_g15.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1885;
}

/*
equation index: 1886
type: SIMPLE_ASSIGN
vrNordic_g15.derivative.y = if vrNordic_g15.derivative.zeroGain then 0.0 else vrNordic_g15.derivative.k / vrNordic_g15.derivative.T * (vrNordic_g15.dOmega.y - vrNordic_g15.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3788]] /* vrNordic_g15.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1015]] /* vrNordic_g15.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5241]] /* vrNordic_g15.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5240]] /* vrNordic_g15.derivative.T PARAM */),"vrNordic_g15.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3786]] /* vrNordic_g15.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* vrNordic_g15.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1886;
}

/*
equation index: 1887
type: SIMPLE_ASSIGN
$DER.vrNordic_g15.derivative.x = if vrNordic_g15.derivative.zeroGain then 0.0 else (vrNordic_g15.dOmega.y - vrNordic_g15.derivative.x) / vrNordic_g15.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* der(vrNordic_g15.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1015]] /* vrNordic_g15.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3786]] /* vrNordic_g15.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* vrNordic_g15.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5240]] /* vrNordic_g15.derivative.T PARAM */),"vrNordic_g15.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1887;
}

/*
equation index: 1888
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.x_scaled[1] = $START.vrNordic_g15.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1888};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* vrNordic_g15.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[286] /* vrNordic_g15.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1888;
}

/*
equation index: 1889
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.x[1] = vrNordic_g15.leadLag1.x_scaled[1] / vrNordic_g15.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1889};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3795]] /* vrNordic_g15.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* vrNordic_g15.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5265]] /* vrNordic_g15.leadLag1.a_end PARAM */),"vrNordic_g15.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1889;
}

/*
equation index: 1890
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.y = (vrNordic_g15.leadLag1.bb[2] - vrNordic_g15.leadLag1.d * vrNordic_g15.leadLag1.a[2]) * vrNordic_g15.leadLag1.x[1] + vrNordic_g15.leadLag1.d * vrNordic_g15.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1890};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3796]] /* vrNordic_g15.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5269]] /* vrNordic_g15.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5270]] /* vrNordic_g15.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5264]] /* vrNordic_g15.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3795]] /* vrNordic_g15.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5270]] /* vrNordic_g15.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3788]] /* vrNordic_g15.derivative.y variable */));
  threadData->lastEquationSolved = 1890;
}

/*
equation index: 1891
type: SIMPLE_ASSIGN
$DER.vrNordic_g15.leadLag1.x_scaled[1] = (vrNordic_g15.leadLag1.a_end * vrNordic_g15.derivative.y - vrNordic_g15.leadLag1.a[2] * vrNordic_g15.leadLag1.x_scaled[1]) / vrNordic_g15.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1891};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* der(vrNordic_g15.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5265]] /* vrNordic_g15.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3788]] /* vrNordic_g15.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5264]] /* vrNordic_g15.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* vrNordic_g15.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5263]] /* vrNordic_g15.leadLag1.a[1] PARAM */),"vrNordic_g15.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1891;
}

/*
equation index: 1892
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.x_scaled[1] = $START.vrNordic_g15.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* vrNordic_g15.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[287] /* vrNordic_g15.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1892;
}

/*
equation index: 1893
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.x[1] = vrNordic_g15.leadLag2.x_scaled[1] / vrNordic_g15.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3797]] /* vrNordic_g15.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* vrNordic_g15.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5278]] /* vrNordic_g15.leadLag2.a_end PARAM */),"vrNordic_g15.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1893;
}

/*
equation index: 1894
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.y = (vrNordic_g15.leadLag2.bb[2] - vrNordic_g15.leadLag2.d * vrNordic_g15.leadLag2.a[2]) * vrNordic_g15.leadLag2.x[1] + vrNordic_g15.leadLag2.d * vrNordic_g15.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3798]] /* vrNordic_g15.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5282]] /* vrNordic_g15.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5283]] /* vrNordic_g15.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5277]] /* vrNordic_g15.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3797]] /* vrNordic_g15.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5283]] /* vrNordic_g15.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3796]] /* vrNordic_g15.leadLag1.y variable */));
  threadData->lastEquationSolved = 1894;
}

/*
equation index: 1895
type: SIMPLE_ASSIGN
vrNordic_g15.limiter.y = smooth(0, if vrNordic_g15.leadLag2.y > vrNordic_g15.limiter.uMax then vrNordic_g15.limiter.uMax else if vrNordic_g15.leadLag2.y < vrNordic_g15.limiter.uMin then vrNordic_g15.limiter.uMin else vrNordic_g15.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1895};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  tmp56 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3798]] /* vrNordic_g15.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5291]] /* vrNordic_g15.limiter.uMax PARAM */));
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5291]] /* vrNordic_g15.limiter.uMax PARAM */);
  }
  else
  {
    tmp57 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3798]] /* vrNordic_g15.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5292]] /* vrNordic_g15.limiter.uMin PARAM */));
    tmp59 = (tmp57?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5292]] /* vrNordic_g15.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3798]] /* vrNordic_g15.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3801]] /* vrNordic_g15.limiter.y variable */) = tmp59;
  threadData->lastEquationSolved = 1895;
}

/*
equation index: 1896
type: SIMPLE_ASSIGN
$DER.vrNordic_g15.leadLag2.x_scaled[1] = (vrNordic_g15.leadLag2.a_end * vrNordic_g15.leadLag1.y - vrNordic_g15.leadLag2.a[2] * vrNordic_g15.leadLag2.x_scaled[1]) / vrNordic_g15.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* der(vrNordic_g15.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5278]] /* vrNordic_g15.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3796]] /* vrNordic_g15.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5277]] /* vrNordic_g15.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* vrNordic_g15.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5276]] /* vrNordic_g15.leadLag2.a[1] PARAM */),"vrNordic_g15.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1896;
}

/*
equation index: 1897
type: SIMPLE_ASSIGN
vrNordic_g16.derivative.x = $START.vrNordic_g16.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1897};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* vrNordic_g16.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[290] /* vrNordic_g16.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1897;
}

/*
equation index: 1898
type: SIMPLE_ASSIGN
vrNordic_g16.derivative.y = if vrNordic_g16.derivative.zeroGain then 0.0 else vrNordic_g16.derivative.k / vrNordic_g16.derivative.T * (vrNordic_g16.dOmega.y - vrNordic_g16.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1898};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3812]] /* vrNordic_g16.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1026]] /* vrNordic_g16.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5320]] /* vrNordic_g16.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5319]] /* vrNordic_g16.derivative.T PARAM */),"vrNordic_g16.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3810]] /* vrNordic_g16.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* vrNordic_g16.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1898;
}

/*
equation index: 1899
type: SIMPLE_ASSIGN
$DER.vrNordic_g16.derivative.x = if vrNordic_g16.derivative.zeroGain then 0.0 else (vrNordic_g16.dOmega.y - vrNordic_g16.derivative.x) / vrNordic_g16.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* der(vrNordic_g16.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1026]] /* vrNordic_g16.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3810]] /* vrNordic_g16.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* vrNordic_g16.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5319]] /* vrNordic_g16.derivative.T PARAM */),"vrNordic_g16.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1899;
}

/*
equation index: 1900
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.x_scaled[1] = $START.vrNordic_g16.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* vrNordic_g16.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[292] /* vrNordic_g16.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1900;
}

/*
equation index: 1901
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.x[1] = vrNordic_g16.leadLag1.x_scaled[1] / vrNordic_g16.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3819]] /* vrNordic_g16.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* vrNordic_g16.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5344]] /* vrNordic_g16.leadLag1.a_end PARAM */),"vrNordic_g16.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1901;
}

/*
equation index: 1902
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.y = (vrNordic_g16.leadLag1.bb[2] - vrNordic_g16.leadLag1.d * vrNordic_g16.leadLag1.a[2]) * vrNordic_g16.leadLag1.x[1] + vrNordic_g16.leadLag1.d * vrNordic_g16.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3820]] /* vrNordic_g16.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5348]] /* vrNordic_g16.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5349]] /* vrNordic_g16.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5343]] /* vrNordic_g16.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3819]] /* vrNordic_g16.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5349]] /* vrNordic_g16.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3812]] /* vrNordic_g16.derivative.y variable */));
  threadData->lastEquationSolved = 1902;
}

/*
equation index: 1903
type: SIMPLE_ASSIGN
$DER.vrNordic_g16.leadLag1.x_scaled[1] = (vrNordic_g16.leadLag1.a_end * vrNordic_g16.derivative.y - vrNordic_g16.leadLag1.a[2] * vrNordic_g16.leadLag1.x_scaled[1]) / vrNordic_g16.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vrNordic_g16.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5344]] /* vrNordic_g16.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3812]] /* vrNordic_g16.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5343]] /* vrNordic_g16.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* vrNordic_g16.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5342]] /* vrNordic_g16.leadLag1.a[1] PARAM */),"vrNordic_g16.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1903;
}

/*
equation index: 1904
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.x_scaled[1] = $START.vrNordic_g16.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* vrNordic_g16.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[293] /* vrNordic_g16.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1904;
}

/*
equation index: 1905
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.x[1] = vrNordic_g16.leadLag2.x_scaled[1] / vrNordic_g16.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3821]] /* vrNordic_g16.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* vrNordic_g16.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5357]] /* vrNordic_g16.leadLag2.a_end PARAM */),"vrNordic_g16.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1905;
}

/*
equation index: 1906
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.y = (vrNordic_g16.leadLag2.bb[2] - vrNordic_g16.leadLag2.d * vrNordic_g16.leadLag2.a[2]) * vrNordic_g16.leadLag2.x[1] + vrNordic_g16.leadLag2.d * vrNordic_g16.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3822]] /* vrNordic_g16.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5361]] /* vrNordic_g16.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5362]] /* vrNordic_g16.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5356]] /* vrNordic_g16.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3821]] /* vrNordic_g16.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5362]] /* vrNordic_g16.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3820]] /* vrNordic_g16.leadLag1.y variable */));
  threadData->lastEquationSolved = 1906;
}

/*
equation index: 1907
type: SIMPLE_ASSIGN
vrNordic_g16.limiter.y = smooth(0, if vrNordic_g16.leadLag2.y > vrNordic_g16.limiter.uMax then vrNordic_g16.limiter.uMax else if vrNordic_g16.leadLag2.y < vrNordic_g16.limiter.uMin then vrNordic_g16.limiter.uMin else vrNordic_g16.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1907};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  tmp60 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3822]] /* vrNordic_g16.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5370]] /* vrNordic_g16.limiter.uMax PARAM */));
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5370]] /* vrNordic_g16.limiter.uMax PARAM */);
  }
  else
  {
    tmp61 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3822]] /* vrNordic_g16.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5371]] /* vrNordic_g16.limiter.uMin PARAM */));
    tmp63 = (tmp61?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5371]] /* vrNordic_g16.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3822]] /* vrNordic_g16.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3825]] /* vrNordic_g16.limiter.y variable */) = tmp63;
  threadData->lastEquationSolved = 1907;
}

/*
equation index: 1908
type: SIMPLE_ASSIGN
$DER.vrNordic_g16.leadLag2.x_scaled[1] = (vrNordic_g16.leadLag2.a_end * vrNordic_g16.leadLag1.y - vrNordic_g16.leadLag2.a[2] * vrNordic_g16.leadLag2.x_scaled[1]) / vrNordic_g16.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* der(vrNordic_g16.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5357]] /* vrNordic_g16.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3820]] /* vrNordic_g16.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5356]] /* vrNordic_g16.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* vrNordic_g16.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5355]] /* vrNordic_g16.leadLag2.a[1] PARAM */),"vrNordic_g16.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1908;
}

/*
equation index: 1909
type: SIMPLE_ASSIGN
vrNordic_g17.derivative.x = $START.vrNordic_g17.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* vrNordic_g17.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[296] /* vrNordic_g17.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1909;
}

/*
equation index: 1910
type: SIMPLE_ASSIGN
vrNordic_g17.derivative.y = if vrNordic_g17.derivative.zeroGain then 0.0 else vrNordic_g17.derivative.k / vrNordic_g17.derivative.T * (vrNordic_g17.dOmega.y - vrNordic_g17.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1910};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3836]] /* vrNordic_g17.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1037]] /* vrNordic_g17.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5399]] /* vrNordic_g17.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5398]] /* vrNordic_g17.derivative.T PARAM */),"vrNordic_g17.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3834]] /* vrNordic_g17.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* vrNordic_g17.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1910;
}

/*
equation index: 1911
type: SIMPLE_ASSIGN
$DER.vrNordic_g17.derivative.x = if vrNordic_g17.derivative.zeroGain then 0.0 else (vrNordic_g17.dOmega.y - vrNordic_g17.derivative.x) / vrNordic_g17.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1911};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* der(vrNordic_g17.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1037]] /* vrNordic_g17.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3834]] /* vrNordic_g17.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* vrNordic_g17.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5398]] /* vrNordic_g17.derivative.T PARAM */),"vrNordic_g17.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1911;
}

/*
equation index: 1912
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.x_scaled[1] = $START.vrNordic_g17.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* vrNordic_g17.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[298] /* vrNordic_g17.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1912;
}

/*
equation index: 1913
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.x[1] = vrNordic_g17.leadLag1.x_scaled[1] / vrNordic_g17.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3843]] /* vrNordic_g17.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* vrNordic_g17.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5423]] /* vrNordic_g17.leadLag1.a_end PARAM */),"vrNordic_g17.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1913;
}

/*
equation index: 1914
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.y = (vrNordic_g17.leadLag1.bb[2] - vrNordic_g17.leadLag1.d * vrNordic_g17.leadLag1.a[2]) * vrNordic_g17.leadLag1.x[1] + vrNordic_g17.leadLag1.d * vrNordic_g17.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3844]] /* vrNordic_g17.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5427]] /* vrNordic_g17.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5428]] /* vrNordic_g17.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5422]] /* vrNordic_g17.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3843]] /* vrNordic_g17.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5428]] /* vrNordic_g17.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3836]] /* vrNordic_g17.derivative.y variable */));
  threadData->lastEquationSolved = 1914;
}

/*
equation index: 1915
type: SIMPLE_ASSIGN
$DER.vrNordic_g17.leadLag1.x_scaled[1] = (vrNordic_g17.leadLag1.a_end * vrNordic_g17.derivative.y - vrNordic_g17.leadLag1.a[2] * vrNordic_g17.leadLag1.x_scaled[1]) / vrNordic_g17.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1915};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* der(vrNordic_g17.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5423]] /* vrNordic_g17.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3836]] /* vrNordic_g17.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5422]] /* vrNordic_g17.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* vrNordic_g17.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5421]] /* vrNordic_g17.leadLag1.a[1] PARAM */),"vrNordic_g17.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1915;
}

/*
equation index: 1916
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.x_scaled[1] = $START.vrNordic_g17.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* vrNordic_g17.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[299] /* vrNordic_g17.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1916;
}

/*
equation index: 1917
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.x[1] = vrNordic_g17.leadLag2.x_scaled[1] / vrNordic_g17.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3845]] /* vrNordic_g17.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* vrNordic_g17.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5436]] /* vrNordic_g17.leadLag2.a_end PARAM */),"vrNordic_g17.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1917;
}

/*
equation index: 1918
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.y = (vrNordic_g17.leadLag2.bb[2] - vrNordic_g17.leadLag2.d * vrNordic_g17.leadLag2.a[2]) * vrNordic_g17.leadLag2.x[1] + vrNordic_g17.leadLag2.d * vrNordic_g17.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1918};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* vrNordic_g17.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5440]] /* vrNordic_g17.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5441]] /* vrNordic_g17.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5435]] /* vrNordic_g17.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3845]] /* vrNordic_g17.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5441]] /* vrNordic_g17.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3844]] /* vrNordic_g17.leadLag1.y variable */));
  threadData->lastEquationSolved = 1918;
}

/*
equation index: 1919
type: SIMPLE_ASSIGN
vrNordic_g17.limiter.y = smooth(0, if vrNordic_g17.leadLag2.y > vrNordic_g17.limiter.uMax then vrNordic_g17.limiter.uMax else if vrNordic_g17.leadLag2.y < vrNordic_g17.limiter.uMin then vrNordic_g17.limiter.uMin else vrNordic_g17.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1919};
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  tmp64 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* vrNordic_g17.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5449]] /* vrNordic_g17.limiter.uMax PARAM */));
  tmp66 = (modelica_boolean)tmp64;
  if(tmp66)
  {
    tmp67 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5449]] /* vrNordic_g17.limiter.uMax PARAM */);
  }
  else
  {
    tmp65 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* vrNordic_g17.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5450]] /* vrNordic_g17.limiter.uMin PARAM */));
    tmp67 = (tmp65?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5450]] /* vrNordic_g17.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* vrNordic_g17.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3849]] /* vrNordic_g17.limiter.y variable */) = tmp67;
  threadData->lastEquationSolved = 1919;
}

/*
equation index: 1920
type: SIMPLE_ASSIGN
$DER.vrNordic_g17.leadLag2.x_scaled[1] = (vrNordic_g17.leadLag2.a_end * vrNordic_g17.leadLag1.y - vrNordic_g17.leadLag2.a[2] * vrNordic_g17.leadLag2.x_scaled[1]) / vrNordic_g17.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* der(vrNordic_g17.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5436]] /* vrNordic_g17.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3844]] /* vrNordic_g17.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5435]] /* vrNordic_g17.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* vrNordic_g17.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5434]] /* vrNordic_g17.leadLag2.a[1] PARAM */),"vrNordic_g17.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1920;
}

/*
equation index: 1921
type: SIMPLE_ASSIGN
vrNordic_g18.derivative.x = $START.vrNordic_g18.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1921};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* vrNordic_g18.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[302] /* vrNordic_g18.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1921;
}

/*
equation index: 1922
type: SIMPLE_ASSIGN
vrNordic_g18.derivative.y = if vrNordic_g18.derivative.zeroGain then 0.0 else vrNordic_g18.derivative.k / vrNordic_g18.derivative.T * (vrNordic_g18.dOmega.y - vrNordic_g18.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3860]] /* vrNordic_g18.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1048]] /* vrNordic_g18.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5478]] /* vrNordic_g18.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5477]] /* vrNordic_g18.derivative.T PARAM */),"vrNordic_g18.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3858]] /* vrNordic_g18.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* vrNordic_g18.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1922;
}

/*
equation index: 1923
type: SIMPLE_ASSIGN
$DER.vrNordic_g18.derivative.x = if vrNordic_g18.derivative.zeroGain then 0.0 else (vrNordic_g18.dOmega.y - vrNordic_g18.derivative.x) / vrNordic_g18.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* der(vrNordic_g18.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1048]] /* vrNordic_g18.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3858]] /* vrNordic_g18.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* vrNordic_g18.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5477]] /* vrNordic_g18.derivative.T PARAM */),"vrNordic_g18.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1923;
}

/*
equation index: 1924
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.x_scaled[1] = $START.vrNordic_g18.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1924};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* vrNordic_g18.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[304] /* vrNordic_g18.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1924;
}

/*
equation index: 1925
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.x[1] = vrNordic_g18.leadLag1.x_scaled[1] / vrNordic_g18.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3867]] /* vrNordic_g18.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* vrNordic_g18.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5502]] /* vrNordic_g18.leadLag1.a_end PARAM */),"vrNordic_g18.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1925;
}

/*
equation index: 1926
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.y = (vrNordic_g18.leadLag1.bb[2] - vrNordic_g18.leadLag1.d * vrNordic_g18.leadLag1.a[2]) * vrNordic_g18.leadLag1.x[1] + vrNordic_g18.leadLag1.d * vrNordic_g18.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3868]] /* vrNordic_g18.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5506]] /* vrNordic_g18.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5507]] /* vrNordic_g18.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5501]] /* vrNordic_g18.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3867]] /* vrNordic_g18.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5507]] /* vrNordic_g18.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3860]] /* vrNordic_g18.derivative.y variable */));
  threadData->lastEquationSolved = 1926;
}

/*
equation index: 1927
type: SIMPLE_ASSIGN
$DER.vrNordic_g18.leadLag1.x_scaled[1] = (vrNordic_g18.leadLag1.a_end * vrNordic_g18.derivative.y - vrNordic_g18.leadLag1.a[2] * vrNordic_g18.leadLag1.x_scaled[1]) / vrNordic_g18.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* der(vrNordic_g18.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5502]] /* vrNordic_g18.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3860]] /* vrNordic_g18.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5501]] /* vrNordic_g18.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* vrNordic_g18.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5500]] /* vrNordic_g18.leadLag1.a[1] PARAM */),"vrNordic_g18.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1927;
}

/*
equation index: 1928
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.x_scaled[1] = $START.vrNordic_g18.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* vrNordic_g18.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[305] /* vrNordic_g18.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1928;
}

/*
equation index: 1929
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.x[1] = vrNordic_g18.leadLag2.x_scaled[1] / vrNordic_g18.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3869]] /* vrNordic_g18.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* vrNordic_g18.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5515]] /* vrNordic_g18.leadLag2.a_end PARAM */),"vrNordic_g18.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1929;
}

/*
equation index: 1930
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.y = (vrNordic_g18.leadLag2.bb[2] - vrNordic_g18.leadLag2.d * vrNordic_g18.leadLag2.a[2]) * vrNordic_g18.leadLag2.x[1] + vrNordic_g18.leadLag2.d * vrNordic_g18.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1930};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3870]] /* vrNordic_g18.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5519]] /* vrNordic_g18.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5520]] /* vrNordic_g18.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5514]] /* vrNordic_g18.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3869]] /* vrNordic_g18.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5520]] /* vrNordic_g18.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3868]] /* vrNordic_g18.leadLag1.y variable */));
  threadData->lastEquationSolved = 1930;
}

/*
equation index: 1931
type: SIMPLE_ASSIGN
vrNordic_g18.limiter.y = smooth(0, if vrNordic_g18.leadLag2.y > vrNordic_g18.limiter.uMax then vrNordic_g18.limiter.uMax else if vrNordic_g18.leadLag2.y < vrNordic_g18.limiter.uMin then vrNordic_g18.limiter.uMin else vrNordic_g18.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1931};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  tmp68 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3870]] /* vrNordic_g18.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5528]] /* vrNordic_g18.limiter.uMax PARAM */));
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5528]] /* vrNordic_g18.limiter.uMax PARAM */);
  }
  else
  {
    tmp69 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3870]] /* vrNordic_g18.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5529]] /* vrNordic_g18.limiter.uMin PARAM */));
    tmp71 = (tmp69?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5529]] /* vrNordic_g18.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3870]] /* vrNordic_g18.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3873]] /* vrNordic_g18.limiter.y variable */) = tmp71;
  threadData->lastEquationSolved = 1931;
}

/*
equation index: 1932
type: SIMPLE_ASSIGN
$DER.vrNordic_g18.leadLag2.x_scaled[1] = (vrNordic_g18.leadLag2.a_end * vrNordic_g18.leadLag1.y - vrNordic_g18.leadLag2.a[2] * vrNordic_g18.leadLag2.x_scaled[1]) / vrNordic_g18.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1932};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* der(vrNordic_g18.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5515]] /* vrNordic_g18.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3868]] /* vrNordic_g18.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5514]] /* vrNordic_g18.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* vrNordic_g18.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5513]] /* vrNordic_g18.leadLag2.a[1] PARAM */),"vrNordic_g18.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1932;
}

/*
equation index: 1933
type: SIMPLE_ASSIGN
vrNordic_g19.derivative.x = $START.vrNordic_g19.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* vrNordic_g19.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[308] /* vrNordic_g19.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1933;
}

/*
equation index: 1934
type: SIMPLE_ASSIGN
vrNordic_g19.derivative.y = if vrNordic_g19.derivative.zeroGain then 0.0 else vrNordic_g19.derivative.k / vrNordic_g19.derivative.T * (vrNordic_g19.dOmega.y - vrNordic_g19.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3884]] /* vrNordic_g19.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1059]] /* vrNordic_g19.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5557]] /* vrNordic_g19.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5556]] /* vrNordic_g19.derivative.T PARAM */),"vrNordic_g19.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3882]] /* vrNordic_g19.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* vrNordic_g19.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1934;
}

/*
equation index: 1935
type: SIMPLE_ASSIGN
$DER.vrNordic_g19.derivative.x = if vrNordic_g19.derivative.zeroGain then 0.0 else (vrNordic_g19.dOmega.y - vrNordic_g19.derivative.x) / vrNordic_g19.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1935};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* der(vrNordic_g19.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1059]] /* vrNordic_g19.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3882]] /* vrNordic_g19.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* vrNordic_g19.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5556]] /* vrNordic_g19.derivative.T PARAM */),"vrNordic_g19.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1935;
}

/*
equation index: 1936
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.x_scaled[1] = $START.vrNordic_g19.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1936};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* vrNordic_g19.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[310] /* vrNordic_g19.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1936;
}

/*
equation index: 1937
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.x[1] = vrNordic_g19.leadLag1.x_scaled[1] / vrNordic_g19.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1937};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3891]] /* vrNordic_g19.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* vrNordic_g19.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5581]] /* vrNordic_g19.leadLag1.a_end PARAM */),"vrNordic_g19.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1937;
}

/*
equation index: 1938
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.y = (vrNordic_g19.leadLag1.bb[2] - vrNordic_g19.leadLag1.d * vrNordic_g19.leadLag1.a[2]) * vrNordic_g19.leadLag1.x[1] + vrNordic_g19.leadLag1.d * vrNordic_g19.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1938};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* vrNordic_g19.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5585]] /* vrNordic_g19.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5586]] /* vrNordic_g19.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5580]] /* vrNordic_g19.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3891]] /* vrNordic_g19.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5586]] /* vrNordic_g19.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3884]] /* vrNordic_g19.derivative.y variable */));
  threadData->lastEquationSolved = 1938;
}

/*
equation index: 1939
type: SIMPLE_ASSIGN
$DER.vrNordic_g19.leadLag1.x_scaled[1] = (vrNordic_g19.leadLag1.a_end * vrNordic_g19.derivative.y - vrNordic_g19.leadLag1.a[2] * vrNordic_g19.leadLag1.x_scaled[1]) / vrNordic_g19.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* der(vrNordic_g19.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5581]] /* vrNordic_g19.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3884]] /* vrNordic_g19.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5580]] /* vrNordic_g19.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* vrNordic_g19.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5579]] /* vrNordic_g19.leadLag1.a[1] PARAM */),"vrNordic_g19.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1939;
}

/*
equation index: 1940
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.x_scaled[1] = $START.vrNordic_g19.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* vrNordic_g19.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[311] /* vrNordic_g19.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1940;
}

/*
equation index: 1941
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.x[1] = vrNordic_g19.leadLag2.x_scaled[1] / vrNordic_g19.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1941};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* vrNordic_g19.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* vrNordic_g19.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5594]] /* vrNordic_g19.leadLag2.a_end PARAM */),"vrNordic_g19.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1941;
}

/*
equation index: 1942
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.y = (vrNordic_g19.leadLag2.bb[2] - vrNordic_g19.leadLag2.d * vrNordic_g19.leadLag2.a[2]) * vrNordic_g19.leadLag2.x[1] + vrNordic_g19.leadLag2.d * vrNordic_g19.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1942};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* vrNordic_g19.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5598]] /* vrNordic_g19.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5599]] /* vrNordic_g19.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5593]] /* vrNordic_g19.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* vrNordic_g19.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5599]] /* vrNordic_g19.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* vrNordic_g19.leadLag1.y variable */));
  threadData->lastEquationSolved = 1942;
}

/*
equation index: 1943
type: SIMPLE_ASSIGN
vrNordic_g19.limiter.y = smooth(0, if vrNordic_g19.leadLag2.y > vrNordic_g19.limiter.uMax then vrNordic_g19.limiter.uMax else if vrNordic_g19.leadLag2.y < vrNordic_g19.limiter.uMin then vrNordic_g19.limiter.uMin else vrNordic_g19.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1943};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  tmp72 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* vrNordic_g19.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5607]] /* vrNordic_g19.limiter.uMax PARAM */));
  tmp74 = (modelica_boolean)tmp72;
  if(tmp74)
  {
    tmp75 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5607]] /* vrNordic_g19.limiter.uMax PARAM */);
  }
  else
  {
    tmp73 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* vrNordic_g19.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5608]] /* vrNordic_g19.limiter.uMin PARAM */));
    tmp75 = (tmp73?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5608]] /* vrNordic_g19.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* vrNordic_g19.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* vrNordic_g19.limiter.y variable */) = tmp75;
  threadData->lastEquationSolved = 1943;
}

/*
equation index: 1944
type: SIMPLE_ASSIGN
$DER.vrNordic_g19.leadLag2.x_scaled[1] = (vrNordic_g19.leadLag2.a_end * vrNordic_g19.leadLag1.y - vrNordic_g19.leadLag2.a[2] * vrNordic_g19.leadLag2.x_scaled[1]) / vrNordic_g19.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* der(vrNordic_g19.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5594]] /* vrNordic_g19.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* vrNordic_g19.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5593]] /* vrNordic_g19.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* vrNordic_g19.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5592]] /* vrNordic_g19.leadLag2.a[1] PARAM */),"vrNordic_g19.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1944;
}

/*
equation index: 1945
type: SIMPLE_ASSIGN
vrNordic_g20.derivative.x = $START.vrNordic_g20.derivative.x
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* vrNordic_g20.derivative.x STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[314] /* vrNordic_g20.derivative.x STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1945;
}

/*
equation index: 1946
type: SIMPLE_ASSIGN
vrNordic_g20.derivative.y = if vrNordic_g20.derivative.zeroGain then 0.0 else vrNordic_g20.derivative.k / vrNordic_g20.derivative.T * (vrNordic_g20.dOmega.y - vrNordic_g20.derivative.x)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1946};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3908]] /* vrNordic_g20.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1070]] /* vrNordic_g20.derivative.zeroGain PARAM */)?0.0:(DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5636]] /* vrNordic_g20.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5635]] /* vrNordic_g20.derivative.T PARAM */),"vrNordic_g20.derivative.T",equationIndexes)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3906]] /* vrNordic_g20.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* vrNordic_g20.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 1946;
}

/*
equation index: 1947
type: SIMPLE_ASSIGN
$DER.vrNordic_g20.derivative.x = if vrNordic_g20.derivative.zeroGain then 0.0 else (vrNordic_g20.dOmega.y - vrNordic_g20.derivative.x) / vrNordic_g20.derivative.T
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* der(vrNordic_g20.derivative.x) STATE_DER */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1070]] /* vrNordic_g20.derivative.zeroGain PARAM */)?0.0:DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3906]] /* vrNordic_g20.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* vrNordic_g20.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5635]] /* vrNordic_g20.derivative.T PARAM */),"vrNordic_g20.derivative.T",equationIndexes));
  threadData->lastEquationSolved = 1947;
}

/*
equation index: 1948
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.x_scaled[1] = $START.vrNordic_g20.leadLag1.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1948};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* vrNordic_g20.leadLag1.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[316] /* vrNordic_g20.leadLag1.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1948;
}

/*
equation index: 1949
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.x[1] = vrNordic_g20.leadLag1.x_scaled[1] / vrNordic_g20.leadLag1.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1949};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3915]] /* vrNordic_g20.leadLag1.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* vrNordic_g20.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5660]] /* vrNordic_g20.leadLag1.a_end PARAM */),"vrNordic_g20.leadLag1.a_end",equationIndexes);
  threadData->lastEquationSolved = 1949;
}

/*
equation index: 1950
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.y = (vrNordic_g20.leadLag1.bb[2] - vrNordic_g20.leadLag1.d * vrNordic_g20.leadLag1.a[2]) * vrNordic_g20.leadLag1.x[1] + vrNordic_g20.leadLag1.d * vrNordic_g20.derivative.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1950};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3916]] /* vrNordic_g20.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5664]] /* vrNordic_g20.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5665]] /* vrNordic_g20.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5659]] /* vrNordic_g20.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3915]] /* vrNordic_g20.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5665]] /* vrNordic_g20.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3908]] /* vrNordic_g20.derivative.y variable */));
  threadData->lastEquationSolved = 1950;
}

/*
equation index: 1951
type: SIMPLE_ASSIGN
$DER.vrNordic_g20.leadLag1.x_scaled[1] = (vrNordic_g20.leadLag1.a_end * vrNordic_g20.derivative.y - vrNordic_g20.leadLag1.a[2] * vrNordic_g20.leadLag1.x_scaled[1]) / vrNordic_g20.leadLag1.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1951};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* der(vrNordic_g20.leadLag1.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5660]] /* vrNordic_g20.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3908]] /* vrNordic_g20.derivative.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5659]] /* vrNordic_g20.leadLag1.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* vrNordic_g20.leadLag1.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5658]] /* vrNordic_g20.leadLag1.a[1] PARAM */),"vrNordic_g20.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1951;
}

/*
equation index: 1952
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.x_scaled[1] = $START.vrNordic_g20.leadLag2.x_scaled[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1952};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* vrNordic_g20.leadLag2.x_scaled[1] STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[317] /* vrNordic_g20.leadLag2.x_scaled[1] STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 1952;
}

/*
equation index: 1953
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.x[1] = vrNordic_g20.leadLag2.x_scaled[1] / vrNordic_g20.leadLag2.a_end
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1953};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3917]] /* vrNordic_g20.leadLag2.x[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* vrNordic_g20.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5673]] /* vrNordic_g20.leadLag2.a_end PARAM */),"vrNordic_g20.leadLag2.a_end",equationIndexes);
  threadData->lastEquationSolved = 1953;
}

/*
equation index: 1954
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.y = (vrNordic_g20.leadLag2.bb[2] - vrNordic_g20.leadLag2.d * vrNordic_g20.leadLag2.a[2]) * vrNordic_g20.leadLag2.x[1] + vrNordic_g20.leadLag2.d * vrNordic_g20.leadLag1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1954};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3918]] /* vrNordic_g20.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5677]] /* vrNordic_g20.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5678]] /* vrNordic_g20.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5672]] /* vrNordic_g20.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3917]] /* vrNordic_g20.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5678]] /* vrNordic_g20.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3916]] /* vrNordic_g20.leadLag1.y variable */));
  threadData->lastEquationSolved = 1954;
}

/*
equation index: 1955
type: SIMPLE_ASSIGN
vrNordic_g20.limiter.y = smooth(0, if vrNordic_g20.leadLag2.y > vrNordic_g20.limiter.uMax then vrNordic_g20.limiter.uMax else if vrNordic_g20.leadLag2.y < vrNordic_g20.limiter.uMin then vrNordic_g20.limiter.uMin else vrNordic_g20.leadLag2.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1955};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  tmp76 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3918]] /* vrNordic_g20.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5686]] /* vrNordic_g20.limiter.uMax PARAM */));
  tmp78 = (modelica_boolean)tmp76;
  if(tmp78)
  {
    tmp79 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5686]] /* vrNordic_g20.limiter.uMax PARAM */);
  }
  else
  {
    tmp77 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3918]] /* vrNordic_g20.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5687]] /* vrNordic_g20.limiter.uMin PARAM */));
    tmp79 = (tmp77?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5687]] /* vrNordic_g20.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3918]] /* vrNordic_g20.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3921]] /* vrNordic_g20.limiter.y variable */) = tmp79;
  threadData->lastEquationSolved = 1955;
}

/*
equation index: 1956
type: SIMPLE_ASSIGN
$DER.vrNordic_g20.leadLag2.x_scaled[1] = (vrNordic_g20.leadLag2.a_end * vrNordic_g20.leadLag1.y - vrNordic_g20.leadLag2.a[2] * vrNordic_g20.leadLag2.x_scaled[1]) / vrNordic_g20.leadLag2.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1956};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* der(vrNordic_g20.leadLag2.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5673]] /* vrNordic_g20.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3916]] /* vrNordic_g20.leadLag1.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5672]] /* vrNordic_g20.leadLag2.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* vrNordic_g20.leadLag2.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5671]] /* vrNordic_g20.leadLag2.a[1] PARAM */),"vrNordic_g20.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 1956;
}

/*
equation index: 1957
type: SIMPLE_ASSIGN
$PRE.nodeFault.nodeFault.value = $START.nodeFault.nodeFault.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1957};
  (data->simulationInfo->booleanVarsPre[831] /* nodeFault.nodeFault.value DISCRETE */) = (data->modelData->booleanVarsData[831] /* nodeFault.nodeFault.value DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 1957;
}

/*
equation index: 1958
type: SIMPLE_ASSIGN
nodeFault.nodeFault.value = $PRE.nodeFault.nodeFault.value
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1958};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[831]] /* nodeFault.nodeFault.value DISCRETE */) = (data->simulationInfo->booleanVarsPre[831] /* nodeFault.nodeFault.value DISCRETE */);
  threadData->lastEquationSolved = 1958;
}

void MyNordic_initialized_TestCase_initialized_eqFunction_3015(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3014(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3013(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3012(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3011(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3010(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3009(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3008(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3007(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3006(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3005(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3004(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3003(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3002(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3001(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_3000(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2999(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2998(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2997(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2996(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2995(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2994(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2993(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2992(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2991(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2990(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2989(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2988(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2987(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2986(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2985(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2984(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2983(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2982(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2981(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2980(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2979(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2978(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2977(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2976(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2975(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2974(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2973(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2972(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2971(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2970(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2969(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2968(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2967(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2966(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2965(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2964(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2963(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2962(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2961(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2960(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2959(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2958(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2957(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2956(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2955(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2954(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2953(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2952(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2951(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2950(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2949(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2948(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2947(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2946(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2945(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2944(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2943(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2942(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2941(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2940(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2939(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2938(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2937(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2936(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2935(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2934(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2933(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2932(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2931(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2930(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2929(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2928(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2927(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2926(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2925(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2924(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2923(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2922(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2921(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2920(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2919(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2918(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2917(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2916(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2915(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2914(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2913(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2912(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2911(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2910(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2909(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2908(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2907(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2906(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2905(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2904(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2903(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2902(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2901(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2900(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2899(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2898(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2897(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2896(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2895(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2894(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2893(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2892(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2891(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2890(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2889(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2888(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2887(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2886(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2885(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2884(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2883(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2882(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2881(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2880(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2879(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2878(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2877(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2876(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2875(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2874(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2873(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2872(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2871(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2870(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2869(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2868(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2867(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2866(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2865(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2864(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2863(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2862(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2861(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2860(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2859(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2858(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2857(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2856(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2855(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2854(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2853(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2852(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2851(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2850(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2849(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2848(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2847(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2846(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2845(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2844(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2843(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2842(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2841(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2840(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2839(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2838(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2837(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2836(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2835(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2834(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2833(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2832(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2831(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2830(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2829(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2828(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2827(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2826(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2825(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2824(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2823(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2822(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2821(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2820(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2819(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2818(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2817(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2816(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2815(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2814(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2813(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2812(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2811(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2810(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2809(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2808(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2807(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2806(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2805(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2804(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2803(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2802(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2801(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2800(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2799(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2798(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2797(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2796(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2795(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2794(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2793(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2792(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2791(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2790(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2789(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2788(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2787(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2786(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2785(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2784(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2783(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2782(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2781(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2780(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2779(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2778(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2777(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2776(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2775(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2774(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2773(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2772(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2771(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2770(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2769(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2768(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2767(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2766(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2765(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2764(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2763(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2762(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2761(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2760(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2759(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2758(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2757(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2756(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2755(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2754(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2753(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2752(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2751(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2750(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2749(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2748(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2747(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2746(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2745(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2744(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2743(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2742(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2741(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2740(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2739(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2738(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2737(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2736(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2735(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2734(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2733(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2732(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2731(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2730(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2729(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2728(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2727(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2726(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2725(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2724(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2723(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2722(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2721(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2720(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2719(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2718(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2717(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2716(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2715(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2714(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2713(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2712(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2711(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2710(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2709(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2708(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2707(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2706(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2705(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2704(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2703(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2702(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2701(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2700(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2699(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2698(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2697(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2696(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2695(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2694(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2693(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2692(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2691(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2690(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2689(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2688(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2687(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2686(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2685(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2684(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2683(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2682(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2681(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2680(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2679(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2678(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2677(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2676(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2675(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2674(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2673(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2672(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2671(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2670(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2669(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2668(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2667(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2666(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2665(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2664(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2663(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2662(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2661(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2660(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2659(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2658(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2657(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2656(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2655(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2654(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2653(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2652(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2651(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2650(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2649(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2648(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2647(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2646(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2645(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2644(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2643(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2642(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2641(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2640(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2639(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2638(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2637(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2636(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2635(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2634(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2633(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2632(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2631(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2630(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2629(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2628(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2627(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2626(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2625(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2624(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2623(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2622(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2621(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2620(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2619(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2618(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2617(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2616(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2615(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2614(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2613(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2612(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2611(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2610(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2609(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2608(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2607(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2606(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2605(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2604(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2603(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2602(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2601(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2600(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2599(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2598(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2597(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2596(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2595(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2594(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2593(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2592(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2591(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2590(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2589(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2588(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2587(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2586(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2585(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2584(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2583(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2582(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2581(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2580(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2579(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2578(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2577(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2576(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2575(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2574(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2573(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2572(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2571(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2570(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2569(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2568(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2567(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2566(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2565(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2564(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2563(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2562(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2561(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2560(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2559(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2558(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2557(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2556(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2555(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2554(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2553(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2552(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2551(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2550(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2549(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2548(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2547(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2546(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2545(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2544(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2543(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2542(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2541(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2540(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2539(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2538(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2537(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2536(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2535(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2534(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2533(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2532(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2531(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2530(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2529(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2528(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2527(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2526(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2525(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2524(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2523(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2522(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2521(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2520(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2519(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2518(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2517(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2516(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2515(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2514(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2513(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2512(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2511(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2510(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2509(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2508(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2507(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2506(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2505(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2504(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2503(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2502(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2501(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2500(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2499(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2498(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2497(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2496(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2495(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2494(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2493(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2492(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2491(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2490(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2489(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2488(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2487(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2486(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2485(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2484(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2483(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2482(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2481(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2480(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2479(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2478(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2477(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2476(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2475(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2474(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2473(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2472(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2471(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2470(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2469(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2468(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2467(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2466(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2465(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2464(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2463(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2462(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2461(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2460(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2459(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2458(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2457(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2456(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2455(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2454(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2453(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2452(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2451(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2450(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2449(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2448(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2447(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2446(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2445(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2444(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2443(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2442(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2441(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2440(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2439(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2438(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2437(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2436(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2435(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2434(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2433(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2432(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2431(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2430(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2429(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2428(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2427(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2426(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2425(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2424(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2423(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2422(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2421(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2420(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2419(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2418(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2417(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2416(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2415(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2414(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2413(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2412(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2411(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2410(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2409(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2408(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2407(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2406(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2405(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2404(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2403(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2402(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2401(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2400(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2399(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2398(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2397(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2396(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2395(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2394(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2393(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2392(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2391(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2390(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2389(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2388(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2387(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2386(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2385(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2384(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2383(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2382(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2381(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2380(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2379(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2378(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2377(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2376(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2375(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2374(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2373(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2372(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2371(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2370(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2369(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2368(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2367(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2366(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2365(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2364(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2363(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2362(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2361(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2360(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2359(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2358(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2357(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2356(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2355(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2354(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2353(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2352(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2351(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2350(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2349(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2348(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2347(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2346(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2345(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2344(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2343(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2342(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2341(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2340(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2339(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2338(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2337(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2336(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2335(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2334(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2333(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2332(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2331(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2330(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2329(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2328(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2327(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2326(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2325(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2324(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2323(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2322(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2321(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2320(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2319(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2318(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2317(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2316(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2315(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2314(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2313(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2312(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2311(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2310(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2309(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2308(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2307(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2306(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2305(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2304(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2303(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2302(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2301(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2300(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2299(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2298(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2297(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2296(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2295(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2294(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2293(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2292(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2291(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2290(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2289(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2288(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2287(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2286(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2285(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2284(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2283(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2282(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2281(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2280(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2279(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2278(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2277(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2276(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2275(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2274(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2273(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2272(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2271(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2270(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2269(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2268(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2267(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2266(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2265(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2264(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2263(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2262(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2261(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2260(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2259(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2258(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2257(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2256(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2255(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2254(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2253(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2252(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2251(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2250(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2249(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2248(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2247(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2246(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2245(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2244(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2243(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2242(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2241(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2240(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2239(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2238(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2237(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2236(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2235(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2234(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2233(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2232(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2231(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2230(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2229(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2228(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2227(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2226(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2225(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2224(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2223(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2222(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2221(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2220(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2219(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2218(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2217(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2216(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2215(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2214(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2213(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2212(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2211(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2210(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2209(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2208(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2207(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2206(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2205(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2204(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2203(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2202(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2201(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2200(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2199(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2198(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2197(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2196(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2195(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2194(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2193(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2192(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2191(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2190(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2189(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2188(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2187(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2186(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2185(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2184(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2183(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2182(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2181(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2180(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2179(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2178(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2177(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2176(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2175(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2174(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2173(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2172(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2171(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2170(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2169(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2168(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2167(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2166(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2165(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2164(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2163(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2162(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2161(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2160(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2159(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2158(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2157(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2156(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2155(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2154(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2153(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2152(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2151(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2150(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2149(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2148(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2147(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2146(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2145(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2144(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2143(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2142(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2141(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2140(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2139(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2138(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2137(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2136(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2135(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2134(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2133(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2132(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2131(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2130(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2129(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2128(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2127(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2126(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2125(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2124(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2123(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2122(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2121(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2120(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2119(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2118(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2117(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2116(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2115(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2114(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2113(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2112(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2111(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2110(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2109(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2108(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2107(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2106(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2105(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2104(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2103(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2102(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2101(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2100(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2099(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2098(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2097(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2096(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2095(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2094(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2093(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2092(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2091(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2090(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2089(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2088(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2087(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2086(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2085(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2084(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2083(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2082(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2081(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2080(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2079(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2078(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2077(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2076(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2075(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2074(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2073(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2072(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2071(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2070(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2069(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2068(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2067(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2066(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2065(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2064(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2063(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2062(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2061(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2060(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2059(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2058(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2057(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2056(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2055(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2054(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2053(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2052(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2051(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2050(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2049(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2048(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2047(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2046(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2045(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2044(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2043(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2042(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2041(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2040(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2039(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2038(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2037(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2036(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2035(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2034(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2033(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2032(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2031(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2030(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2029(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2028(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2027(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2026(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2025(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2024(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2023(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2022(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2021(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2020(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2019(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2018(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2017(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2016(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2015(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2014(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2013(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2012(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2011(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2010(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2009(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2008(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2007(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2006(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2005(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2004(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2003(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2002(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2001(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_2000(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1999(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1998(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1997(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1996(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1995(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1994(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1993(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1992(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1991(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1990(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1989(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1988(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1987(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1986(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1985(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1984(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1983(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1982(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1981(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1980(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1979(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1978(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1977(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1976(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1975(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1974(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1973(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1972(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1971(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1970(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1969(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1968(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1967(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1966(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1965(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1964(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1963(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1962(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1961(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1960(DATA*, threadData_t*);
void MyNordic_initialized_TestCase_initialized_eqFunction_1959(DATA*, threadData_t*);
/*
equation index: 4073
indexNonlinear: 0
type: NONLINEAR

vars: {nodeFault.terminal.i.im, line_4031_4032.terminal2.i.im, line_4032_4044.terminal1.V.im, line_4021_4032.terminal2.i.im, line_4021_4032.terminal1.i.im, line_4011_4021.terminal2.i.im, line_4011_4021.terminal1.i.im, trafo_g9_4011.terminal2.i.im, g09.terminal.i.im, line_4011_4071.terminal1.V.im, line_4011_4012.terminal2.i.im, line_4012_4022.terminal1.i.im, line_4012_4022.terminal1.V.re, line_4011_4012.terminal1.i.im, line_4011_4012.terminal2.i.re, line_4012_4022.terminal1.i.re, line_4012_4022.terminal2.i.re, line_4022_4031a.terminal1.i.re, line_4022_4031a.terminal1.i.im, line_4022_4031b.terminal1.i.im, line_4022_4031b.terminal1.i.re, line_4022_4031b.terminal2.i.re, trafo_g12_4031.terminal2.i.re, g12.terminal.i.re, g12.terminal.V.im, g12.udPu, g12.lambdadPu, g12.uqPu, g12.terminal.V.re, line_4031_4041b.terminal1.V.re, line_4022_4031a.terminal2.i.re, line_4022_4031b.terminal1.V.im, line_4011_4022.terminal1.i.re, line_4011_4012.terminal1.i.re, line_4012_4022.terminal1.V.im, line_4012_4022.terminal2.i.im, line_4022_4031b.terminal1.V.re, line_4011_4022.terminal2.i.re, line_4011_4022.terminal1.i.im, line_4011_4022.terminal2.i.im, line_4022_4031a.terminal2.i.im, line_4031_4041b.terminal1.i.im, line_4031_4041b.terminal1.i.re, line_4031_4041b.terminal2.i.re, trafo_41_4041.terminal2.i.re, trafo_41_4041.terminal1.i.re, load_41.QPu, load_41.terminal.V.re, load_41.terminal.V.im, load_41.PPu, trafo_41_4041.terminal1.i.im, trafo_41_4041.terminal2.i.im, line_4041_4061.terminal1.i.im, line_4061_4062.terminal1.V.im, line_4061_4062.terminal1.V.re, line_4041_4061.terminal1.i.re, line_4041_4061.terminal2.i.re, line_4061_4062.terminal1.i.re, line_4061_4062.terminal1.i.im, line_4041_4061.terminal2.i.im, line_4062_4063b.terminal1.V.re, line_4045_4062.terminal1.i.im, trafo_1045_4045b.terminal2.i.im, trafo_1045_4045b.terminal1.i.im, trafo_5_1045.terminal2.i.im, trafo_5_1045.terminal1.i.im, load_05.PPu, load_05.terminal.V.im, load_05.terminal.V.re, load_05.QPu, trafo_5_1045.terminal1.i.re, trafo_5_1045.terminal2.i.re, line_1042_1045.terminal2.i.re, line_1042_1045.terminal1.i.re, line_1042_1044b.terminal1.i.re, line_1042_1044b.terminal1.i.im, trafo_g6_1042.terminal2.i.im, g06.terminal.i.im, g06.terminal.i.re, trafo_g6_1042.terminal2.i.re, line_1042_1045.terminal1.V.re, line_1042_1044a.terminal1.i.im, line_1042_1044a.terminal1.i.re, line_1042_1044a.terminal2.i.im, trafo_1044_4044b.terminal1.i.im, trafo_1044_4044b.terminal2.i.im, line_4043_4044.terminal2.i.im, line_4043_4044.terminal1.i.im, line_4042_4043.terminal2.i.im, line_4042_4043.terminal1.V.re, line_4021_4042.terminal1.i.im, line_4021_4042.terminal2.i.im, trafo_g14_4042.terminal2.i.im, line_4042_4043.terminal1.V.im, line_4021_4032.terminal1.V.im, line_4011_4021.terminal2.i.re, line_4021_4042.terminal1.i.re, line_4021_4032.terminal1.V.re, line_4011_4071.terminal1.V.re, line_4011_4021.terminal1.i.re, line_4011_4071.terminal1.i.re, line_4011_4071.terminal2.i.re, line_4071_4072a.terminal1.i.re, line_4071_4072a.terminal1.V.re, line_4011_4071.terminal1.i.im, line_4011_4071.terminal2.i.im, line_4012_4071.terminal2.i.im, line_4071_4072a.terminal1.V.im, line_4012_4071.terminal2.i.re, line_4012_4071.terminal1.i.im, line_4012_4071.terminal1.i.re, line_4071_4072a.terminal1.i.im, line_4071_4072a.terminal2.i.im, trafo_g20_4072.terminal2.i.im, line_4071_4072a.terminal2.V.re, line_4071_4072a.terminal2.V.im, line_4071_4072b.terminal1.i.re, line_4071_4072b.terminal2.i.re, line_4071_4072a.terminal2.i.re, line_4071_4072b.terminal1.i.im, line_4071_4072b.terminal2.i.im, trafo_72_4072.terminal2.i.im, trafo_72_4072.terminal2.i.re, load_72.terminal.V.im, trafo_72_4072.terminal1.i.im, load_72.QPu, trafo_72_4072.terminal1.i.re, load_72.PPu, load_72.terminal.V.re, trafo_g20_4072.terminal2.i.re, trafo_g20_4072.terminal1.V.im, g20.uqPu, g20.lambdaqPu, g20.udPu, trafo_g20_4072.terminal1.V.re, g20.terminal.i.re, g20.idPu, g20.iDPu, g20.iQ1Pu, g20.lambdaAQPu, g20.lambdaAirGapPu, g20.cos2Eta, g20.miPu, g20.MdSatPPu, g20.ifPu, g20.iqPu, g20.iQ2Pu, g20.MqSatPPu, g20.terminal.i.im, g20.lambdadPu, g20.sin2Eta, g20.mqsPu, g20.mdsPu, g20.lambdaADPu, shunt_4071.terminal.i.re, shunt_4071.PPu, shunt_4071.terminal.i.im, shunt_4071.QPu, shunt_4071.UPu, trafo_71_4071.terminal2.i.im, trafo_71_4071.terminal2.i.re, trafo_71_4071.terminal1.i.im, load_71.terminal.V.im, trafo_71_4071.terminal1.i.re, load_71.QPu, load_71.PPu, load_71.terminal.V.re, trafo_g19_4071.terminal2.i.im, trafo_g19_4071.terminal2.i.re, g19.terminal.V.im, g19.udPu, g19.lambdaqPu, g19.lambdadPu, g19.MdSatPPu, g19.miPu, g19.cos2Eta, g19.sin2Eta, g19.lambdaAQPu, g19.lambdaAirGapPu, g19.lambdaADPu, g19.iDPu, g19.iQ1Pu, g19.iqPu, g19.MqSatPPu, g19.iQ2Pu, g19.ifPu, g19.idPu, g19.terminal.i.im, g19.terminal.V.re, g19.uqPu, g19.terminal.i.re, g19.mqsPu, g19.mdsPu, trafo_1011_4011.terminal2.i.im, trafo_1011_4011.terminal2.i.re, trafo_1011_4011.terminal1.i.im, trafo_11_1011.terminal2.i.im, trafo_11_1011.terminal1.i.im, load_11.terminal.V.im, load_11.terminal.V.re, load_11.QPu, load_11.PPu, line_1011_1013a.terminal1.V.re, line_1011_1013a.terminal1.i.im, line_1011_1013a.terminal1.i.re, trafo_11_1011.terminal2.i.re, trafo_11_1011.terminal1.i.re, line_1011_1013a.terminal1.V.im, line_1011_1013a.terminal2.i.im, line_1011_1013b.terminal2.i.im, line_1011_1013b.terminal1.i.im, line_1011_1013b.terminal1.i.re, line_1011_1013b.terminal2.i.re, trafo_13_1013.terminal2.i.re, line_1013_1014a.terminal1.V.re, line_1011_1013a.terminal2.i.re, line_1013_1014a.terminal1.V.im, line_1013_1014a.terminal1.i.im, line_1013_1014a.terminal1.i.re, line_1013_1014a.terminal2.i.re, line_1012_1014a.terminal2.i.re, line_1013_1014a.terminal2.V.re, line_1012_1014a.terminal1.i.im, trafo_g1_1012.terminal2.i.im, g01.terminal.i.im, line_1012_1014a.terminal1.V.im, line_1012_1014a.terminal1.i.re, trafo_1012_4012.terminal1.i.re, trafo_1012_4012.terminal2.i.re, trafo_1012_4012.terminal1.i.im, trafo_1012_4012.terminal2.i.im, line_1012_1014a.terminal1.V.re, line_1012_1014a.terminal2.i.im, line_1012_1014b.terminal2.i.im, line_1012_1014b.terminal1.i.im, line_1012_1014b.terminal1.i.re, line_1012_1014b.terminal2.i.re, line_1013_1014a.terminal2.V.im, line_1013_1014a.terminal2.i.im, line_1013_1014b.terminal1.i.re, line_1013_1014b.terminal2.i.re, line_1013_1014b.terminal1.i.im, line_1013_1014b.terminal2.i.im, trafo_g3_1014.terminal2.i.im, trafo_g3_1014.terminal2.i.re, g03.terminal.i.im, g03.terminal.V.re, g03.udPu, g03.lambdaqPu, g03.uqPu, g03.terminal.V.im, g03.MqSatPPu, g03.cos2Eta, g03.miPu, g03.MdSatPPu, g03.iDPu, g03.idPu, g03.ifPu, g03.lambdadPu, g03.iqPu, g03.lambdaAQPu, g03.sin2Eta, g03.lambdaAirGapPu, g03.lambdaADPu, g03.mqsPu, g03.mdsPu, g03.iQ2Pu, g03.iQ1Pu, g03.terminal.i.re, trafo_12_1012.terminal2.i.im, trafo_12_1012.terminal2.i.re, load_12.terminal.V.re, load_12.terminal.V.im, load_12.QPu, trafo_12_1012.terminal1.i.re, load_12.PPu, trafo_12_1012.terminal1.i.im, trafo_g1_1012.terminal2.i.re, g01.terminal.V.re, g01.udPu, g01.lambdadPu, g01.uqPu, g01.terminal.V.im, g01.iDPu, g01.MdSatPPu, g01.sin2Eta, g01.mdsPu, g01.lambdaAirGapPu, g01.lambdaAQPu, g01.lambdaADPu, g01.cos2Eta, g01.miPu, g01.MqSatPPu, g01.iQ2Pu, g01.iQ1Pu, g01.lambdaqPu, g01.mqsPu, g01.idPu, g01.ifPu, g01.iqPu, g01.terminal.i.re, trafo_13_1013.terminal2.i.im, load_13.terminal.V.im, trafo_13_1013.terminal1.i.im, trafo_13_1013.terminal1.i.re, load_13.QPu, load_13.PPu, load_13.terminal.V.re, trafo_g2_1013.terminal2.i.im, trafo_g2_1013.terminal2.i.re, g02.terminal.V.im, g02.udPu, g02.lambdaqPu, g02.uqPu, g02.terminal.V.re, g02.terminal.i.im, g02.iqPu, g02.lambdaAQPu, g02.sin2Eta, g02.miPu, g02.MqSatPPu, g02.iQ2Pu, g02.iQ1Pu, g02.iDPu, g02.ifPu, g02.idPu, g02.MdSatPPu, g02.lambdadPu, g02.terminal.i.re, g02.mdsPu, g02.lambdaAirGapPu, g02.cos2Eta, g02.mqsPu, g02.lambdaADPu, trafo_1011_4011.terminal1.i.re, trafo_g9_4011.terminal2.i.re, g09.terminal.V.re, g09.udPu, g09.lambdadPu, g09.uqPu, g09.terminal.V.im, g09.MdSatPPu, g09.sin2Eta, g09.mqsPu, g09.lambdaAirGapPu, g09.lambdaAQPu, g09.lambdaADPu, g09.cos2Eta, g09.miPu, g09.idPu, g09.iDPu, g09.lambdaqPu, g09.ifPu, g09.iqPu, g09.iQ2Pu, g09.MqSatPPu, g09.iQ1Pu, g09.terminal.i.re, g09.mdsPu, line_4021_4032.terminal1.i.re, line_4032_4044.terminal1.V.re, line_4031_4032.terminal1.i.re, line_4031_4032.terminal2.i.re, line_4021_4032.terminal2.i.re, line_4031_4032.terminal1.i.im, line_4032_4042.terminal2.i.im, line_4032_4042.terminal1.i.im, line_4032_4042.terminal1.i.re, line_4032_4042.terminal2.i.re, line_4021_4042.terminal2.i.re, line_4032_4044.terminal1.i.im, line_4032_4044.terminal2.i.re, trafo_1044_4044a.terminal2.i.re, trafo_1044_4044a.terminal1.i.re, trafo_1044_4044b.terminal1.i.re, trafo_1044_4044b.terminal2.i.re, line_4044_4045a.terminal1.V.im, line_4032_4044.terminal2.i.im, line_4032_4044.terminal1.i.re, line_4041_4044.terminal2.i.im, line_4041_4044.terminal1.i.im, line_4041_4044.terminal2.i.re, line_4041_4044.terminal1.i.re, line_4042_4044.terminal2.i.im, line_4042_4044.terminal2.i.re, line_4042_4044.terminal1.i.im, line_4042_4044.terminal1.i.re, line_4043_4044.terminal2.i.re, line_4043_4044.terminal1.i.re, line_4043_4047.terminal1.i.re, line_4043_4047.terminal2.i.im, trafo_47_4047.terminal2.i.im, trafo_47_4047.terminal1.i.im, load_47.PPu, trafo_47_4047.terminal1.i.re, load_47.terminal.V.im, load_47.QPu, line_4046_4047.terminal2.V.im, line_4043_4046.terminal1.V.im, line_4042_4043.terminal1.i.im, line_4042_4043.terminal1.i.re, line_4042_4043.terminal2.i.re, line_4043_4046.terminal1.i.re, line_4043_4046.terminal1.i.im, line_4043_4046.terminal2.i.im, line_4046_4047.terminal1.i.im, line_4046_4047.terminal1.i.re, shunt_4046.terminal.i.re, shunt_4046.QPu, shunt_4046.UPu, line_4046_4047.terminal1.V.re, line_4043_4046.terminal2.i.re, line_4046_4047.terminal2.i.re, trafo_g15_4047.terminal2.i.re, line_4046_4047.terminal2.V.re, line_4043_4047.terminal1.i.im, line_4043_4047.terminal2.i.re, line_4046_4047.terminal1.V.im, shunt_4046.PPu, shunt_4046.terminal.i.im, trafo_46_4046.terminal2.i.im, trafo_46_4046.terminal2.i.re, load_46.terminal.V.im, load_46.PPu, trafo_46_4046.terminal1.i.im, trafo_46_4046.terminal1.i.re, load_46.QPu, load_46.terminal.V.re, line_4046_4047.terminal2.i.im, trafo_47_4047.terminal2.i.re, load_47.terminal.V.re, trafo_g15_4047.terminal2.i.im, g15.terminal.V.re, g15.udPu, g15.lambdadPu, g15.lambdaqPu, g15.iQ1Pu, g15.iqPu, g15.iQ2Pu, g15.MqSatPPu, g15.cos2Eta, g15.mqsPu, g15.lambdaAirGapPu, g15.sin2Eta, g15.miPu, g15.lambdaADPu, g15.lambdaAQPu, g15.idPu, g15.ifPu, g15.iDPu, g15.MdSatPPu, g15.terminal.i.im, g15.terminal.V.im, g15.uqPu, g15.terminal.i.re, g15.mdsPu, shunt_4043.QPu, shunt_4043.terminal.i.re, shunt_4043.terminal.i.im, shunt_4043.PPu, shunt_4043.UPu, trafo_43_4043.terminal2.i.im, trafo_43_4043.terminal2.i.re, load_43.terminal.V.im, load_43.PPu, trafo_43_4043.terminal1.i.re, load_43.terminal.V.re, load_43.QPu, trafo_43_4043.terminal1.i.im, line_4043_4046.terminal1.V.re, line_4044_4045a.terminal2.i.im, line_4044_4045a.terminal1.i.im, line_4044_4045a.terminal1.i.re, line_4044_4045a.terminal2.i.re, trafo_1045_4045a.terminal2.i.re, trafo_1045_4045a.terminal1.i.re, trafo_1045_4045a.terminal1.i.im, trafo_1045_4045a.terminal2.i.im, line_1042_1045.terminal2.V.re, line_1041_1045a.terminal1.i.im, line_1041_1043b.terminal1.i.im, line_1041_1043b.terminal1.i.re, line_1041_1043a.terminal1.i.re, line_1041_1043a.terminal2.i.im, line_1041_1043b.terminal2.i.im, line_1041_1043a.terminal1.V.im, line_1041_1043a.terminal1.i.im, line_1043_1044a.terminal1.V.im, line_1041_1043a.terminal2.i.re, trafo_3_1043.terminal2.i.re, trafo_3_1043.terminal1.i.re, load_03.terminal.V.re, load_03.PPu, trafo_3_1043.terminal1.i.im, load_03.QPu, trafo_3_1043.terminal2.i.im, load_03.terminal.V.im, line_1043_1044a.terminal1.V.re, line_1041_1043b.terminal2.i.re, line_1041_1043a.terminal1.V.re, line_1041_1045a.terminal2.i.im, line_1041_1045a.terminal2.i.re, line_1041_1045a.terminal1.i.re, line_1041_1045b.terminal2.i.im, line_1041_1045b.terminal2.i.re, line_1041_1045b.terminal1.i.im, line_1041_1045b.terminal1.i.re, shunt_1041.terminal.i.re, shunt_1041.PPu, shunt_1041.terminal.i.im, shunt_1041.QPu, shunt_1041.UPu, trafo_1_1041.terminal2.i.im, trafo_1_1041.terminal2.i.re, trafo_1_1041.terminal1.i.im, load_01.PPu, load_01.terminal.V.im, load_01.QPu, load_01.terminal.V.re, trafo_1_1041.terminal1.i.re, line_1043_1044a.terminal1.i.re, line_1043_1044a.terminal2.i.re, line_1043_1044a.terminal1.i.im, line_1043_1044a.terminal2.i.im, line_1043_1044b.terminal1.i.re, line_1043_1044b.terminal2.i.re, line_1043_1044b.terminal1.i.im, line_1043_1044b.terminal2.i.im, shunt_1043.terminal.i.re, shunt_1043.PPu, shunt_1043.terminal.i.im, shunt_1043.QPu, shunt_1043.UPu, trafo_g7_1043.terminal2.i.im, trafo_g7_1043.terminal2.i.re, g07.terminal.V.re, g07.uqPu, g07.lambdaqPu, g07.udPu, g07.terminal.V.im, g07.terminal.i.re, g07.idPu, g07.ifPu, g07.MdSatPPu, g07.miPu, g07.MqSatPPu, g07.lambdaAQPu, g07.sin2Eta, g07.mdsPu, g07.lambdaAirGapPu, g07.cos2Eta, g07.mqsPu, g07.lambdaADPu, g07.iQ2Pu, g07.iQ1Pu, g07.iqPu, g07.iDPu, g07.lambdadPu, g07.terminal.i.im, line_1042_1045.terminal1.V.im, line_1042_1044a.terminal2.i.re, line_1042_1044b.terminal2.i.re, line_1042_1044b.terminal2.i.im, line_1043_1044a.terminal2.V.im, shunt_1044.QPu, shunt_1044.terminal.i.re, shunt_1044.PPu, shunt_1044.terminal.i.im, shunt_1044.UPu, trafo_4_1044.terminal2.i.im, trafo_4_1044.terminal2.i.re, trafo_4_1044.terminal1.i.re, load_04.terminal.V.im, load_04.PPu, trafo_4_1044.terminal1.i.im, load_04.QPu, load_04.terminal.V.re, trafo_1044_4044a.terminal1.i.im, trafo_1044_4044a.terminal2.i.im, line_1043_1044a.terminal2.V.re, line_4044_4045a.terminal1.V.re, line_4044_4045b.terminal1.i.re, line_4044_4045b.terminal2.i.re, line_4044_4045b.terminal1.i.im, line_4044_4045b.terminal2.i.im, line_1042_1045.terminal1.i.im, trafo_2_1042.terminal2.i.im, trafo_2_1042.terminal2.i.re, load_02.terminal.V.im, load_02.PPu, load_02.terminal.V.re, load_02.QPu, trafo_2_1042.terminal1.i.im, trafo_2_1042.terminal1.i.re, line_1042_1045.terminal2.i.im, shunt_1045.QPu, shunt_1045.terminal.i.re, shunt_1045.PPu, shunt_1045.terminal.i.im, shunt_1045.UPu, trafo_1045_4045b.terminal1.i.re, trafo_1045_4045b.terminal2.i.re, line_4045_4051b.terminal1.V.im, line_4045_4051a.terminal1.i.im, line_4045_4051a.terminal2.i.re, trafo_g16_4051.terminal2.i.re, g16.terminal.i.re, g16.terminal.i.im, trafo_g16_4051.terminal2.i.im, line_4045_4051a.terminal2.i.im, line_4045_4051b.terminal2.V.im, line_4045_4051a.terminal1.i.re, line_4045_4051b.terminal1.i.re, line_4045_4051b.terminal2.i.re, line_4045_4051b.terminal1.i.im, line_4045_4051b.terminal2.i.im, shunt_4051.terminal.i.im, shunt_4051.terminal.i.re, shunt_4051.QPu, shunt_4051.PPu, shunt_4051.UPu, trafo_51_4051.terminal2.i.im, trafo_51_4051.terminal2.i.re, trafo_51_4051.terminal1.i.im, load_51.terminal.V.im, load_51.QPu, trafo_51_4051.terminal1.i.re, load_51.PPu, load_51.terminal.V.re, line_4045_4051b.terminal2.V.re, g16.idPu, g16.ifPu, g16.MdSatPPu, g16.miPu, g16.MqSatPPu, g16.lambdaAQPu, g16.lambdaAirGapPu, g16.cos2Eta, g16.sin2Eta, g16.mqsPu, g16.mdsPu, g16.lambdaADPu, g16.iQ1Pu, g16.iQ2Pu, g16.lambdaqPu, g16.uqPu, g16.terminal.V.im, g16.terminal.V.re, g16.udPu, g16.iDPu, g16.lambdadPu, g16.iqPu, line_4045_4051b.terminal1.V.re, line_4045_4062.terminal1.i.re, line_4045_4062.terminal2.i.im, line_4062_4063a.terminal1.i.im, line_4062_4063b.terminal1.V.im, line_4061_4062.terminal2.i.re, line_4045_4062.terminal2.i.re, line_4061_4062.terminal2.i.im, line_4062_4063b.terminal2.V.re, line_4062_4063a.terminal2.i.re, line_4062_4063b.terminal2.i.re, line_4062_4063b.terminal1.i.re, line_4062_4063b.terminal2.V.im, line_4062_4063a.terminal1.i.re, line_4062_4063b.terminal1.i.im, line_4062_4063b.terminal2.i.im, line_4062_4063a.terminal2.i.im, trafo_63_4063.terminal2.i.im, trafo_63_4063.terminal2.i.re, load_63.terminal.V.im, trafo_63_4063.terminal1.i.im, load_63.QPu, load_63.terminal.V.re, load_63.PPu, trafo_63_4063.terminal1.i.re, trafo_g18_4063.terminal2.i.im, trafo_g18_4063.terminal2.i.re, g18.terminal.V.im, g18.uqPu, g18.lambdadPu, g18.lambdaqPu, g18.iqPu, g18.lambdaAQPu, g18.sin2Eta, g18.MdSatPPu, g18.lambdaADPu, g18.cos2Eta, g18.MqSatPPu, g18.iQ1Pu, g18.iQ2Pu, g18.miPu, g18.lambdaAirGapPu, g18.mqsPu, g18.mdsPu, g18.iDPu, g18.idPu, g18.ifPu, g18.terminal.i.im, g18.terminal.V.re, g18.udPu, g18.terminal.i.re, trafo_62_4062.terminal2.i.im, trafo_62_4062.terminal2.i.re, trafo_62_4062.terminal1.i.re, load_62.terminal.V.re, load_62.PPu, load_62.terminal.V.im, load_62.QPu, trafo_62_4062.terminal1.i.im, trafo_g17_4062.terminal2.i.im, trafo_g17_4062.terminal2.i.re, g17.terminal.V.im, g17.uqPu, g17.lambdadPu, g17.udPu, g17.terminal.V.re, g17.terminal.i.re, g17.idPu, g17.ifPu, g17.iDPu, g17.lambdaqPu, g17.iqPu, g17.lambdaAQPu, g17.sin2Eta, g17.miPu, g17.MqSatPPu, g17.iQ1Pu, g17.iQ2Pu, g17.cos2Eta, g17.lambdaADPu, g17.lambdaAirGapPu, g17.mqsPu, g17.mdsPu, g17.terminal.i.im, g17.MdSatPPu, nodeFault.terminal.i.re, trafo_g11_4021.terminal2.i.im, trafo_g11_4021.terminal2.i.re, g11.terminal.V.re, g11.udPu, g11.lambdaqPu, g11.uqPu, g11.terminal.V.im, g11.terminal.i.im, g11.iqPu, g11.MqSatPPu, g11.miPu, g11.sin2Eta, g11.mqsPu, g11.lambdaAirGapPu, g11.lambdaAQPu, g11.lambdaADPu, g11.cos2Eta, g11.MdSatPPu, g11.ifPu, g11.idPu, g11.lambdadPu, g11.terminal.i.re, g11.mdsPu, g11.iQ1Pu, g11.iQ2Pu, g11.iDPu, trafo_42_4042.terminal2.i.im, trafo_42_4042.terminal2.i.re, load_42.terminal.V.im, load_42.PPu, trafo_42_4042.terminal1.i.im, load_42.QPu, trafo_42_4042.terminal1.i.re, load_42.terminal.V.re, trafo_g14_4042.terminal2.i.re, g14.terminal.V.im, g14.uqPu, g14.lambdadPu, g14.idPu, g14.ifPu, g14.MdSatPPu, g14.sin2Eta, g14.mdsPu, g14.lambdaAirGapPu, g14.lambdaAQPu, g14.lambdaADPu, g14.cos2Eta, g14.miPu, g14.iQ1Pu, g14.MqSatPPu, g14.iQ2Pu, g14.lambdaqPu, g14.mqsPu, g14.iqPu, g14.terminal.i.im, g14.terminal.V.re, g14.udPu, g14.terminal.i.re, g14.iDPu, g06.iqPu, g06.iQ1Pu, g06.iQ2Pu, g06.MqSatPPu, g06.miPu, g06.sin2Eta, g06.cos2Eta, g06.lambdaADPu, g06.lambdaAirGapPu, g06.lambdaAQPu, g06.mqsPu, g06.mdsPu, g06.MdSatPPu, g06.iDPu, g06.lambdaqPu, g06.uqPu, g06.terminal.V.im, g06.terminal.V.re, g06.udPu, g06.ifPu, g06.lambdadPu, g06.idPu, line_1042_1045.terminal2.V.im, trafo_61_4061.terminal2.i.im, trafo_61_4061.terminal2.i.re, load_61.terminal.V.re, load_61.terminal.V.im, load_61.QPu, trafo_61_4061.terminal1.i.re, load_61.PPu, trafo_61_4061.terminal1.i.im, line_4041_4061.terminal1.V.re, line_4031_4041a.terminal1.i.im, line_4031_4041a.terminal1.i.re, line_4031_4041a.terminal2.i.re, line_4031_4041a.terminal2.i.im, line_4041_4061.terminal1.V.im, line_4031_4041b.terminal2.i.im, shunt_4041.terminal.i.im, shunt_4041.terminal.i.re, shunt_4041.QPu, shunt_4041.PPu, shunt_4041.UPu, trafo_g13_4041.terminal2.i.im, trafo_g13_4041.terminal2.i.re, g13.terminal.V.im, g13.uqPu, g13.lambdaqPu, g13.udPu, g13.terminal.V.re, g13.terminal.i.re, g13.idPu, g13.MdSatPPu, g13.sin2Eta, g13.cos2Eta, g13.miPu, g13.lambdaADPu, g13.lambdaAQPu, g13.lambdaAirGapPu, g13.mqsPu, g13.mdsPu, g13.iQ2Pu, g13.iQ1Pu, g13.iqPu, g13.MqSatPPu, g13.iDPu, g13.ifPu, g13.lambdadPu, g13.terminal.i.im, line_4022_4031b.terminal2.i.im, line_4031_4041b.terminal1.V.im, trafo_2031_4031.terminal2.i.im, trafo_2031_4031.terminal2.i.re, trafo_2031_4031.terminal1.i.im, line_2031_2032a.terminal1.i.im, line_2031_2032b.terminal1.V.im, line_2031_2032a.terminal2.i.re, line_2031_2032b.terminal2.i.re, line_2031_2032b.terminal1.i.re, line_2031_2032a.terminal1.i.re, line_2031_2032b.terminal1.V.re, line_2031_2032b.terminal2.i.im, line_2031_2032a.terminal2.i.im, line_2031_2032b.terminal2.V.re, line_2031_2032b.terminal1.i.im, line_2031_2032b.terminal2.V.im, trafo_32_2032.terminal2.i.im, trafo_32_2032.terminal2.i.re, load_32.terminal.V.im, trafo_32_2032.terminal1.i.im, trafo_32_2032.terminal1.i.re, load_32.QPu, load_32.PPu, load_32.terminal.V.re, trafo_g8_2032.terminal2.i.im, trafo_g8_2032.terminal2.i.re, g08.terminal.i.re, g08.terminal.V.re, g08.uqPu, g08.lambdadPu, g08.udPu, g08.terminal.V.im, g08.idPu, g08.iDPu, g08.lambdaqPu, g08.MdSatPPu, g08.miPu, g08.cos2Eta, g08.mdsPu, g08.lambdaAirGapPu, g08.sin2Eta, g08.lambdaADPu, g08.lambdaAQPu, g08.MqSatPPu, g08.iQ1Pu, g08.iQ2Pu, g08.mqsPu, g08.ifPu, g08.terminal.i.im, g08.iqPu, trafo_31_2031.terminal2.i.im, trafo_31_2031.terminal2.i.re, trafo_31_2031.terminal1.i.re, load_31.terminal.V.re, load_31.terminal.V.im, load_31.QPu, load_31.PPu, trafo_31_2031.terminal1.i.im, trafo_2031_4031.terminal1.i.re, trafo_g12_4031.terminal2.i.im, trafo_1022_4022.terminal2.i.im, trafo_1022_4022.terminal2.i.re, line_1021_1022b.terminal2.V.re, line_1021_1022a.terminal1.i.re, line_1021_1022b.terminal1.i.re, line_1021_1022b.terminal1.V.re, line_1021_1022b.terminal1.V.im, line_1021_1022a.terminal2.i.re, shunt_1022.terminal.i.re, shunt_1022.QPu, shunt_1022.UPu, line_1021_1022b.terminal2.V.im, line_1021_1022a.terminal2.i.im, trafo_1022_4022.terminal1.i.im, trafo_1022_4022.terminal1.i.re, line_1021_1022b.terminal1.i.im, line_1021_1022a.terminal1.i.im, line_1021_1022b.terminal2.i.re, line_1021_1022b.terminal2.i.im, shunt_1022.PPu, shunt_1022.terminal.i.im, trafo_22_1022.terminal2.i.im, trafo_22_1022.terminal2.i.re, load_22.terminal.V.im, load_22.PPu, trafo_22_1022.terminal1.i.re, load_22.QPu, trafo_22_1022.terminal1.i.im, load_22.terminal.V.re, trafo_g5_1022.terminal2.i.im, trafo_g5_1022.terminal2.i.re, g05.terminal.i.im, g05.terminal.V.re, g05.udPu, g05.lambdadPu, g05.uqPu, g05.terminal.V.im, g05.ifPu, g05.idPu, g05.iDPu, g05.lambdaqPu, g05.MdSatPPu, g05.miPu, g05.cos2Eta, g05.sin2Eta, g05.lambdaAQPu, g05.lambdaADPu, g05.lambdaAirGapPu, g05.mqsPu, g05.mdsPu, g05.MqSatPPu, g05.iQ1Pu, g05.iQ2Pu, g05.iqPu, g05.terminal.i.re, trafo_g4_1021.terminal2.i.im, trafo_g4_1021.terminal2.i.re, g04.terminal.V.im, g04.uqPu, g04.lambdaqPu, g04.idPu, g04.lambdaADPu, g04.cos2Eta, g04.MqSatPPu, g04.lambdaAQPu, g04.sin2Eta, g04.MdSatPPu, g04.ifPu, g04.iqPu, g04.iQ2Pu, g04.iQ1Pu, g04.iDPu, g04.lambdadPu, g04.terminal.i.im, g04.terminal.V.re, g04.udPu, g04.terminal.i.re, g04.miPu, g04.lambdaAirGapPu, g04.mqsPu, g04.mdsPu, shunt_4012.terminal.i.im, shunt_4012.terminal.i.re, shunt_4012.QPu, shunt_4012.PPu, shunt_4012.UPu, trafo_g10_4012.terminal2.i.im, trafo_g10_4012.terminal2.i.re, g10.terminal.i.re, g10.terminal.V.re, g10.udPu, g10.lambdaqPu, g10.uqPu, g10.terminal.V.im, g10.iDPu, g10.lambdaADPu, g10.cos2Eta, g10.MqSatPPu, g10.iQ2Pu, g10.iqPu, g10.iQ1Pu, g10.MdSatPPu, g10.miPu, g10.mqsPu, g10.lambdaAirGapPu, g10.sin2Eta, g10.mdsPu, g10.lambdaAQPu, g10.ifPu, g10.lambdadPu, g10.terminal.i.im, g10.idPu, g12.idPu, g12.ifPu, g12.iDPu, g12.lambdaqPu, g12.MdSatPPu, g12.sin2Eta, g12.miPu, g12.cos2Eta, g12.lambdaADPu, g12.lambdaAQPu, g12.lambdaAirGapPu, g12.mqsPu, g12.mdsPu, g12.iQ1Pu, g12.iQ2Pu, g12.MqSatPPu, g12.terminal.i.im, g12.iqPu}
eqns: {3015, 3014, 3013, 3012, 3011, 3010, 3009, 3008, 3007, 3006, 3005, 3004, 3003, 3002, 3001, 3000, 2999, 2998, 2997, 2996, 2995, 2994, 2993, 2992, 2991, 2990, 2989, 2988, 2987, 2986, 2985, 2984, 2983, 2982, 2981, 2980, 2979, 2978, 2977, 2976, 2975, 2974, 2973, 2972, 2971, 2970, 2969, 2968, 2967, 2966, 2965, 2964, 2963, 2962, 2961, 2960, 2959, 2958, 2957, 2956, 2955, 2954, 2953, 2952, 2951, 2950, 2949, 2948, 2947, 2946, 2945, 2944, 2943, 2942, 2941, 2940, 2939, 2938, 2937, 2936, 2935, 2934, 2933, 2932, 2931, 2930, 2929, 2928, 2927, 2926, 2925, 2924, 2923, 2922, 2921, 2920, 2919, 2918, 2917, 2916, 2915, 2914, 2913, 2912, 2911, 2910, 2909, 2908, 2907, 2906, 2905, 2904, 2903, 2902, 2901, 2900, 2899, 2898, 2897, 2896, 2895, 2894, 2893, 2892, 2891, 2890, 2889, 2888, 2887, 2886, 2885, 2884, 2883, 2882, 2881, 2880, 2879, 2878, 2877, 2876, 2875, 2874, 2873, 2872, 2871, 2870, 2869, 2868, 2867, 2866, 2865, 2864, 2863, 2862, 2861, 2860, 2859, 2858, 2857, 2856, 2855, 2854, 2853, 2852, 2851, 2850, 2849, 2848, 2847, 2846, 2845, 2844, 2843, 2842, 2841, 2840, 2839, 2838, 2837, 2836, 2835, 2834, 2833, 2832, 2831, 2830, 2829, 2828, 2827, 2826, 2825, 2824, 2823, 2822, 2821, 2820, 2819, 2818, 2817, 2816, 2815, 2814, 2813, 2812, 2811, 2810, 2809, 2808, 2807, 2806, 2805, 2804, 2803, 2802, 2801, 2800, 2799, 2798, 2797, 2796, 2795, 2794, 2793, 2792, 2791, 2790, 2789, 2788, 2787, 2786, 2785, 2784, 2783, 2782, 2781, 2780, 2779, 2778, 2777, 2776, 2775, 2774, 2773, 2772, 2771, 2770, 2769, 2768, 2767, 2766, 2765, 2764, 2763, 2762, 2761, 2760, 2759, 2758, 2757, 2756, 2755, 2754, 2753, 2752, 2751, 2750, 2749, 2748, 2747, 2746, 2745, 2744, 2743, 2742, 2741, 2740, 2739, 2738, 2737, 2736, 2735, 2734, 2733, 2732, 2731, 2730, 2729, 2728, 2727, 2726, 2725, 2724, 2723, 2722, 2721, 2720, 2719, 2718, 2717, 2716, 2715, 2714, 2713, 2712, 2711, 2710, 2709, 2708, 2707, 2706, 2705, 2704, 2703, 2702, 2701, 2700, 2699, 2698, 2697, 2696, 2695, 2694, 2693, 2692, 2691, 2690, 2689, 2688, 2687, 2686, 2685, 2684, 2683, 2682, 2681, 2680, 2679, 2678, 2677, 2676, 2675, 2674, 2673, 2672, 2671, 2670, 2669, 2668, 2667, 2666, 2665, 2664, 2663, 2662, 2661, 2660, 2659, 2658, 2657, 2656, 2655, 2654, 2653, 2652, 2651, 2650, 2649, 2648, 2647, 2646, 2645, 2644, 2643, 2642, 2641, 2640, 2639, 2638, 2637, 2636, 2635, 2634, 2633, 2632, 2631, 2630, 2629, 2628, 2627, 2626, 2625, 2624, 2623, 2622, 2621, 2620, 2619, 2618, 2617, 2616, 2615, 2614, 2613, 2612, 2611, 2610, 2609, 2608, 2607, 2606, 2605, 2604, 2603, 2602, 2601, 2600, 2599, 2598, 2597, 2596, 2595, 2594, 2593, 2592, 2591, 2590, 2589, 2588, 2587, 2586, 2585, 2584, 2583, 2582, 2581, 2580, 2579, 2578, 2577, 2576, 2575, 2574, 2573, 2572, 2571, 2570, 2569, 2568, 2567, 2566, 2565, 2564, 2563, 2562, 2561, 2560, 2559, 2558, 2557, 2556, 2555, 2554, 2553, 2552, 2551, 2550, 2549, 2548, 2547, 2546, 2545, 2544, 2543, 2542, 2541, 2540, 2539, 2538, 2537, 2536, 2535, 2534, 2533, 2532, 2531, 2530, 2529, 2528, 2527, 2526, 2525, 2524, 2523, 2522, 2521, 2520, 2519, 2518, 2517, 2516, 2515, 2514, 2513, 2512, 2511, 2510, 2509, 2508, 2507, 2506, 2505, 2504, 2503, 2502, 2501, 2500, 2499, 2498, 2497, 2496, 2495, 2494, 2493, 2492, 2491, 2490, 2489, 2488, 2487, 2486, 2485, 2484, 2483, 2482, 2481, 2480, 2479, 2478, 2477, 2476, 2475, 2474, 2473, 2472, 2471, 2470, 2469, 2468, 2467, 2466, 2465, 2464, 2463, 2462, 2461, 2460, 2459, 2458, 2457, 2456, 2455, 2454, 2453, 2452, 2451, 2450, 2449, 2448, 2447, 2446, 2445, 2444, 2443, 2442, 2441, 2440, 2439, 2438, 2437, 2436, 2435, 2434, 2433, 2432, 2431, 2430, 2429, 2428, 2427, 2426, 2425, 2424, 2423, 2422, 2421, 2420, 2419, 2418, 2417, 2416, 2415, 2414, 2413, 2412, 2411, 2410, 2409, 2408, 2407, 2406, 2405, 2404, 2403, 2402, 2401, 2400, 2399, 2398, 2397, 2396, 2395, 2394, 2393, 2392, 2391, 2390, 2389, 2388, 2387, 2386, 2385, 2384, 2383, 2382, 2381, 2380, 2379, 2378, 2377, 2376, 2375, 2374, 2373, 2372, 2371, 2370, 2369, 2368, 2367, 2366, 2365, 2364, 2363, 2362, 2361, 2360, 2359, 2358, 2357, 2356, 2355, 2354, 2353, 2352, 2351, 2350, 2349, 2348, 2347, 2346, 2345, 2344, 2343, 2342, 2341, 2340, 2339, 2338, 2337, 2336, 2335, 2334, 2333, 2332, 2331, 2330, 2329, 2328, 2327, 2326, 2325, 2324, 2323, 2322, 2321, 2320, 2319, 2318, 2317, 2316, 2315, 2314, 2313, 2312, 2311, 2310, 2309, 2308, 2307, 2306, 2305, 2304, 2303, 2302, 2301, 2300, 2299, 2298, 2297, 2296, 2295, 2294, 2293, 2292, 2291, 2290, 2289, 2288, 2287, 2286, 2285, 2284, 2283, 2282, 2281, 2280, 2279, 2278, 2277, 2276, 2275, 2274, 2273, 2272, 2271, 2270, 2269, 2268, 2267, 2266, 2265, 2264, 2263, 2262, 2261, 2260, 2259, 2258, 2257, 2256, 2255, 2254, 2253, 2252, 2251, 2250, 2249, 2248, 2247, 2246, 2245, 2244, 2243, 2242, 2241, 2240, 2239, 2238, 2237, 2236, 2235, 2234, 2233, 2232, 2231, 2230, 2229, 2228, 2227, 2226, 2225, 2224, 2223, 2222, 2221, 2220, 2219, 2218, 2217, 2216, 2215, 2214, 2213, 2212, 2211, 2210, 2209, 2208, 2207, 2206, 2205, 2204, 2203, 2202, 2201, 2200, 2199, 2198, 2197, 2196, 2195, 2194, 2193, 2192, 2191, 2190, 2189, 2188, 2187, 2186, 2185, 2184, 2183, 2182, 2181, 2180, 2179, 2178, 2177, 2176, 2175, 2174, 2173, 2172, 2171, 2170, 2169, 2168, 2167, 2166, 2165, 2164, 2163, 2162, 2161, 2160, 2159, 2158, 2157, 2156, 2155, 2154, 2153, 2152, 2151, 2150, 2149, 2148, 2147, 2146, 2145, 2144, 2143, 2142, 2141, 2140, 2139, 2138, 2137, 2136, 2135, 2134, 2133, 2132, 2131, 2130, 2129, 2128, 2127, 2126, 2125, 2124, 2123, 2122, 2121, 2120, 2119, 2118, 2117, 2116, 2115, 2114, 2113, 2112, 2111, 2110, 2109, 2108, 2107, 2106, 2105, 2104, 2103, 2102, 2101, 2100, 2099, 2098, 2097, 2096, 2095, 2094, 2093, 2092, 2091, 2090, 2089, 2088, 2087, 2086, 2085, 2084, 2083, 2082, 2081, 2080, 2079, 2078, 2077, 2076, 2075, 2074, 2073, 2072, 2071, 2070, 2069, 2068, 2067, 2066, 2065, 2064, 2063, 2062, 2061, 2060, 2059, 2058, 2057, 2056, 2055, 2054, 2053, 2052, 2051, 2050, 2049, 2048, 2047, 2046, 2045, 2044, 2043, 2042, 2041, 2040, 2039, 2038, 2037, 2036, 2035, 2034, 2033, 2032, 2031, 2030, 2029, 2028, 2027, 2026, 2025, 2024, 2023, 2022, 2021, 2020, 2019, 2018, 2017, 2016, 2015, 2014, 2013, 2012, 2011, 2010, 2009, 2008, 2007, 2006, 2005, 2004, 2003, 2002, 2001, 2000, 1999, 1998, 1997, 1996, 1995, 1994, 1993, 1992, 1991, 1990, 1989, 1988, 1987, 1986, 1985, 1984, 1983, 1982, 1981, 1980, 1979, 1978, 1977, 1976, 1975, 1974, 1973, 1972, 1971, 1970, 1969, 1968, 1967, 1966, 1965, 1964, 1963, 1962, 1961, 1960, 1959}
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4073};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 4073 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2926]] /* nodeFault.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2564]] /* line_4031_4032.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2530]] /* line_4021_4032.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2528]] /* line_4021_4032.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* line_4011_4021.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* line_4011_4021.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3444]] /* trafo_g9_4011.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* line_4011_4012.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* line_4012_4022.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* line_4011_4012.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* line_4011_4012.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* line_4012_4022.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* line_4012_4022.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* line_4022_4031a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* line_4022_4031a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* line_4022_4031b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* line_4022_4031b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2557]] /* line_4022_4031b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* trafo_g12_4031.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1563]] /* g12.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1546]] /* g12.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1565]] /* g12.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[30] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* line_4022_4031a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[31] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[32] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* line_4011_4022.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[33] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* line_4011_4012.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[34] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[35] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* line_4012_4022.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[36] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[37] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* line_4011_4022.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[38] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* line_4011_4022.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[39] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* line_4011_4022.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[40] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2546]] /* line_4022_4031a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[41] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* line_4031_4041b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[42] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* line_4031_4041b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[43] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2583]] /* line_4031_4041b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[44] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3163]] /* trafo_41_4041.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[45] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[46] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2850]] /* load_41.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[47] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[48] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[49] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2849]] /* load_41.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[50] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[51] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3162]] /* trafo_41_4041.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[52] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2616]] /* line_4041_4061.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[53] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[54] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[55] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2617]] /* line_4041_4061.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[56] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2619]] /* line_4041_4061.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[57] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* line_4061_4062.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[58] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* line_4061_4062.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[59] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2618]] /* line_4041_4061.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[60] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[61] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2706]] /* line_4045_4062.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[62] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3052]] /* trafo_1045_4045b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[63] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[64] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3232]] /* trafo_5_1045.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[65] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[66] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2800]] /* load_05.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[67] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[68] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[69] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2801]] /* load_05.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[70] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[71] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3233]] /* trafo_5_1045.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[72] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* line_1042_1045.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[73] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* line_1042_1045.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[74] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* line_1042_1044b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[75] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* line_1042_1044b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[76] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3420]] /* trafo_g6_1042.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[77] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[78] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[79] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3421]] /* trafo_g6_1042.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[80] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[81] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* line_1042_1044a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[82] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* line_1042_1044a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[83] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* line_1042_1044a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[84] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[85] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* trafo_1044_4044b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[86] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* line_4043_4044.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[87] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* line_4043_4044.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[88] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* line_4042_4043.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[89] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[90] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2536]] /* line_4021_4042.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[91] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2538]] /* line_4021_4042.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[92] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3322]] /* trafo_g14_4042.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[93] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[94] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[95] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* line_4011_4021.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[96] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2537]] /* line_4021_4042.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[97] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[98] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[99] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* line_4011_4021.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[100] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2501]] /* line_4011_4071.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[101] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2503]] /* line_4011_4071.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[102] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* line_4071_4072a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[103] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[104] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2500]] /* line_4011_4071.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[105] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2502]] /* line_4011_4071.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[106] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2520]] /* line_4012_4071.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[107] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[108] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* line_4012_4071.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[109] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2518]] /* line_4012_4071.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[110] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2519]] /* line_4012_4071.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[111] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* line_4071_4072a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[112] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* line_4071_4072a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[113] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3380]] /* trafo_g20_4072.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[114] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[115] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[116] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* line_4071_4072b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[117] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* line_4071_4072b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[118] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* line_4071_4072a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[119] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* line_4071_4072b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[120] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* line_4071_4072b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[121] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3282]] /* trafo_72_4072.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[122] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3283]] /* trafo_72_4072.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[123] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[124] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[125] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2920]] /* load_72.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[126] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[127] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2919]] /* load_72.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[128] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[129] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3381]] /* trafo_g20_4072.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[130] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[131] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1931]] /* g20.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[132] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1915]] /* g20.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[133] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1929]] /* g20.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[134] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[135] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[136] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[137] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1903]] /* g20.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[138] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* g20.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[139] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1912]] /* g20.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[140] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1913]] /* g20.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[141] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1901]] /* g20.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[142] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1917]] /* g20.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[143] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[144] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[145] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[146] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* g20.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[147] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[148] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[149] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* g20.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[150] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1921]] /* g20.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[151] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1918]] /* g20.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[152] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1916]] /* g20.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[153] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1911]] /* g20.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[154] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2983]] /* shunt_4071.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[155] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2979]] /* shunt_4071.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[156] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2982]] /* shunt_4071.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[157] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2980]] /* shunt_4071.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[158] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2981]] /* shunt_4071.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[159] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* trafo_71_4071.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[160] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* trafo_71_4071.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[161] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[162] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[163] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[164] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2913]] /* load_71.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[165] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2912]] /* load_71.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[166] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[167] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3362]] /* trafo_g19_4071.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[168] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3363]] /* trafo_g19_4071.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[169] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[170] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1885]] /* g19.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[171] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1869]] /* g19.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[172] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1868]] /* g19.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[173] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[174] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1871]] /* g19.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[175] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1855]] /* g19.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[176] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1875]] /* g19.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[177] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* g19.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[178] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1867]] /* g19.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[179] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1865]] /* g19.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[180] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1857]] /* g19.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[181] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1858]] /* g19.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[182] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[183] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[184] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1859]] /* g19.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[185] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[186] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[187] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[188] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[189] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* g19.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[190] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[191] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1872]] /* g19.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[192] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1870]] /* g19.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[193] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* trafo_1011_4011.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[194] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* trafo_1011_4011.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[195] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[196] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* trafo_11_1011.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[197] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[198] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[199] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[200] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2808]] /* load_11.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[201] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2807]] /* load_11.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[202] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[203] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* line_1011_1013a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[204] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* line_1011_1013a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[205] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* trafo_11_1011.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[206] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[207] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[208] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* line_1011_1013a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[209] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* line_1011_1013b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[210] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* line_1011_1013b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[211] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* line_1011_1013b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[212] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* line_1011_1013b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[213] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3083]] /* trafo_13_1013.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[214] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[215] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* line_1011_1013a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[216] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[217] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2334]] /* line_1013_1014a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[218] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2335]] /* line_1013_1014a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[219] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* line_1013_1014a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[220] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* line_1012_1014a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[221] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[222] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* line_1012_1014a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[223] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* trafo_g1_1012.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[224] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[225] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[226] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* line_1012_1014a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[227] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[228] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* trafo_1012_4012.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[229] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[230] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* trafo_1012_4012.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[231] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[232] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* line_1012_1014a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[233] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2326]] /* line_1012_1014b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[234] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* line_1012_1014b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[235] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* line_1012_1014b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[236] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2327]] /* line_1012_1014b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[237] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[238] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2338]] /* line_1013_1014a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[239] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* line_1013_1014b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[240] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* line_1013_1014b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[241] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* line_1013_1014b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[242] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* line_1013_1014b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[243] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* trafo_g3_1014.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[244] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* trafo_g3_1014.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[245] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[246] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[247] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* g03.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[248] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* g03.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[249] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* g03.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[250] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[251] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[252] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* g03.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[253] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* g03.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[254] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[255] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* g03.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[256] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[257] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[258] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* g03.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[259] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[260] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* g03.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[261] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* g03.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[262] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* g03.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[263] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* g03.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[264] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* g03.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[265] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* g03.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[266] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* g03.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[267] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* g03.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[268] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[269] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3072]] /* trafo_12_1012.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[270] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3073]] /* trafo_12_1012.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[271] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[272] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[273] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2815]] /* load_12.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[274] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[275] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2814]] /* load_12.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[276] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[277] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* trafo_g1_1012.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[278] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[279] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* g01.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[280] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* g01.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[281] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* g01.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[282] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[283] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* g01.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[284] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[285] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* g01.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[286] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* g01.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[287] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* g01.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[288] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* g01.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[289] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* g01.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[290] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* g01.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[291] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* g01.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[292] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[293] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* g01.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[294] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* g01.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[295] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* g01.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[296] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* g01.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[297] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[298] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[299] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[300] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[301] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3082]] /* trafo_13_1013.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[302] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[303] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[304] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[305] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2822]] /* load_13.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[306] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2821]] /* load_13.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[307] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[308] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3388]] /* trafo_g2_1013.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[309] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3389]] /* trafo_g2_1013.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[310] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[311] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* g02.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[312] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* g02.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[313] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* g02.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[314] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[315] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[316] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[317] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* g02.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[318] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* g02.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[319] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* g02.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[320] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[321] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* g02.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[322] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* g02.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[323] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* g02.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[324] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[325] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[326] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[327] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* g02.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[328] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[329] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* g02.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[330] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* g02.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[331] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* g02.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[332] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* g02.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[333] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* g02.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[334] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[335] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* trafo_g9_4011.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[336] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[337] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1425]] /* g09.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[338] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1408]] /* g09.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[339] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1427]] /* g09.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[340] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[341] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[342] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1415]] /* g09.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[343] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1412]] /* g09.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[344] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1407]] /* g09.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[345] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1406]] /* g09.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[346] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1405]] /* g09.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[347] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1395]] /* g09.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[348] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1411]] /* g09.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[349] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[350] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1397]] /* g09.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[351] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1409]] /* g09.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[352] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[353] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[354] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* g09.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[355] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[356] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* g09.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[357] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[358] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1410]] /* g09.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[359] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2529]] /* line_4021_4032.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[360] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[361] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2563]] /* line_4031_4032.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[362] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* line_4031_4032.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[363] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2531]] /* line_4021_4032.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[364] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2562]] /* line_4031_4032.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[365] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2590]] /* line_4032_4042.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[366] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2588]] /* line_4032_4042.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[367] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2589]] /* line_4032_4042.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[368] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2591]] /* line_4032_4042.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[369] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2539]] /* line_4021_4042.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[370] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2598]] /* line_4032_4044.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[371] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2601]] /* line_4032_4044.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[372] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* trafo_1044_4044a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[373] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[374] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[375] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* trafo_1044_4044b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[376] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[377] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2600]] /* line_4032_4044.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[378] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2599]] /* line_4032_4044.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[379] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* line_4041_4044.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[380] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2606]] /* line_4041_4044.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[381] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2609]] /* line_4041_4044.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[382] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2607]] /* line_4041_4044.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[383] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2636]] /* line_4042_4044.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[384] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* line_4042_4044.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[385] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* line_4042_4044.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[386] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2635]] /* line_4042_4044.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[387] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* line_4043_4044.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[388] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* line_4043_4044.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[389] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* line_4043_4047.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[390] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* line_4043_4047.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[391] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3202]] /* trafo_47_4047.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[392] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[393] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2877]] /* load_47.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[394] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[395] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[396] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2878]] /* load_47.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[397] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[398] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[399] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2626]] /* line_4042_4043.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[400] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2627]] /* line_4042_4043.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[401] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2629]] /* line_4042_4043.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[402] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* line_4043_4046.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[403] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* line_4043_4046.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[404] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* line_4043_4046.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[405] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* line_4046_4047.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[406] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* line_4046_4047.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[407] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2973]] /* shunt_4046.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[408] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2970]] /* shunt_4046.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[409] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2971]] /* shunt_4046.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[410] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[411] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* line_4043_4046.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[412] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* line_4046_4047.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[413] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3331]] /* trafo_g15_4047.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[414] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[415] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* line_4043_4047.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[416] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* line_4043_4047.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[417] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[418] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2969]] /* shunt_4046.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[419] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2972]] /* shunt_4046.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[420] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* trafo_46_4046.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[421] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* trafo_46_4046.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[422] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[423] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2870]] /* load_46.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[424] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[425] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[426] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2871]] /* load_46.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[427] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[428] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* line_4046_4047.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[429] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3203]] /* trafo_47_4047.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[430] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[431] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3330]] /* trafo_g15_4047.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[432] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[433] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1701]] /* g15.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[434] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1684]] /* g15.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[435] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1685]] /* g15.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[436] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* g15.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[437] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[438] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1675]] /* g15.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[439] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[440] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* g15.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[441] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1688]] /* g15.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[442] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1683]] /* g15.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[443] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1691]] /* g15.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[444] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1687]] /* g15.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[445] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1681]] /* g15.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[446] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1682]] /* g15.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[447] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[448] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[449] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* g15.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[450] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[451] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[452] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[453] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1703]] /* g15.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[454] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[455] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1686]] /* g15.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[456] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2965]] /* shunt_4043.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[457] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2968]] /* shunt_4043.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[458] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2967]] /* shunt_4043.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[459] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2964]] /* shunt_4043.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[460] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2966]] /* shunt_4043.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[461] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* trafo_43_4043.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[462] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* trafo_43_4043.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[463] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[464] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2863]] /* load_43.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[465] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[466] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[467] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2864]] /* load_43.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[468] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[469] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[470] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* line_4044_4045a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[471] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* line_4044_4045a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[472] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* line_4044_4045a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[473] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* line_4044_4045a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[474] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* trafo_1045_4045a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[475] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[476] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[477] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* trafo_1045_4045a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[478] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[479] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2390]] /* line_1041_1045a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[480] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* line_1041_1043b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[481] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2383]] /* line_1041_1043b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[482] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* line_1041_1043a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[483] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* line_1041_1043a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[484] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2384]] /* line_1041_1043b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[485] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[486] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* line_1041_1043a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[487] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[488] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* line_1041_1043a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[489] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* trafo_3_1043.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[490] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[491] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[492] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2786]] /* load_03.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[493] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[494] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2787]] /* load_03.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[495] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* trafo_3_1043.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[496] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[497] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[498] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* line_1041_1043b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[499] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[500] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2392]] /* line_1041_1045a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[501] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2393]] /* line_1041_1045a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[502] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2391]] /* line_1041_1045a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[503] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* line_1041_1045b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[504] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* line_1041_1045b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[505] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* line_1041_1045b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[506] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* line_1041_1045b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[507] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2938]] /* shunt_1041.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[508] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2934]] /* shunt_1041.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[509] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2937]] /* shunt_1041.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[510] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2935]] /* shunt_1041.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[511] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2936]] /* shunt_1041.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[512] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3092]] /* trafo_1_1041.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[513] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3093]] /* trafo_1_1041.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[514] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[515] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2772]] /* load_01.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[516] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[517] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2773]] /* load_01.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[518] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[519] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[520] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* line_1043_1044a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[521] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* line_1043_1044a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[522] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* line_1043_1044a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[523] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2440]] /* line_1043_1044a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[524] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2447]] /* line_1043_1044b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[525] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2449]] /* line_1043_1044b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[526] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2446]] /* line_1043_1044b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[527] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2448]] /* line_1043_1044b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[528] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2943]] /* shunt_1043.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[529] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2939]] /* shunt_1043.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[530] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2942]] /* shunt_1043.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[531] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2940]] /* shunt_1043.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[532] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2941]] /* shunt_1043.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[533] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3428]] /* trafo_g7_1043.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[534] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3429]] /* trafo_g7_1043.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[535] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[536] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* g07.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[537] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* g07.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[538] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* g07.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[539] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[540] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[541] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[542] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[543] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[544] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* g07.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[545] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[546] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* g07.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[547] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1323]] /* g07.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[548] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* g07.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[549] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* g07.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[550] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* g07.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[551] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1320]] /* g07.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[552] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* g07.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[553] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* g07.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[554] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* g07.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[555] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[556] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* g07.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[557] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* g07.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[558] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[559] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[560] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* line_1042_1044a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[561] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* line_1042_1044b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[562] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* line_1042_1044b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[563] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[564] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2945]] /* shunt_1044.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[565] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2948]] /* shunt_1044.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[566] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2944]] /* shunt_1044.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[567] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2947]] /* shunt_1044.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[568] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2946]] /* shunt_1044.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[569] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3212]] /* trafo_4_1044.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[570] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3213]] /* trafo_4_1044.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[571] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[572] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[573] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2793]] /* load_04.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[574] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[575] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2794]] /* load_04.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[576] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[577] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[578] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* trafo_1044_4044a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[579] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[580] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[581] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* line_4044_4045b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[582] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* line_4044_4045b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[583] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* line_4044_4045b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[584] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* line_4044_4045b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[585] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* line_1042_1045.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[586] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* trafo_2_1042.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[587] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3123]] /* trafo_2_1042.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[588] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[589] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2779]] /* load_02.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[590] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[591] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2780]] /* load_02.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[592] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[593] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[594] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2428]] /* line_1042_1045.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[595] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2950]] /* shunt_1045.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[596] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2953]] /* shunt_1045.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[597] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2949]] /* shunt_1045.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[598] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2952]] /* shunt_1045.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[599] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2951]] /* shunt_1045.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[600] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[601] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3053]] /* trafo_1045_4045b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[602] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[603] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* line_4045_4051a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[604] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* line_4045_4051a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[605] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3339]] /* trafo_g16_4051.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[606] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[607] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[608] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3338]] /* trafo_g16_4051.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[609] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* line_4045_4051a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[610] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[611] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* line_4045_4051a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[612] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* line_4045_4051b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[613] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* line_4045_4051b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[614] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* line_4045_4051b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[615] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* line_4045_4051b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[616] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2977]] /* shunt_4051.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[617] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2978]] /* shunt_4051.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[618] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2975]] /* shunt_4051.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[619] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2974]] /* shunt_4051.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[620] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2976]] /* shunt_4051.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[621] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* trafo_51_4051.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[622] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* trafo_51_4051.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[623] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[624] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[625] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2885]] /* load_51.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[626] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[627] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2884]] /* load_51.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[628] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[629] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[630] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[631] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[632] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[633] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* g16.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[634] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[635] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* g16.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[636] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* g16.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[637] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* g16.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[638] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* g16.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[639] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1734]] /* g16.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[640] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* g16.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[641] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1727]] /* g16.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[642] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* g16.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[643] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* g16.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[644] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* g16.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[645] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* g16.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[646] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[647] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[648] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* g16.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[649] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* g16.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[650] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1730]] /* g16.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[651] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[652] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[653] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* line_4045_4062.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[654] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2708]] /* line_4045_4062.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[655] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2736]] /* line_4062_4063a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[656] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[657] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* line_4061_4062.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[658] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2709]] /* line_4045_4062.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[659] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* line_4061_4062.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[660] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[661] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* line_4062_4063a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[662] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* line_4062_4063b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[663] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* line_4062_4063b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[664] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[665] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* line_4062_4063a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[666] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* line_4062_4063b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[667] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* line_4062_4063b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[668] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* line_4062_4063a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[669] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3262]] /* trafo_63_4063.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[670] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3263]] /* trafo_63_4063.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[671] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[672] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[673] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2906]] /* load_63.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[674] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[675] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2905]] /* load_63.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[676] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[677] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3354]] /* trafo_g18_4063.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[678] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3355]] /* trafo_g18_4063.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[679] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[680] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1841]] /* g18.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[681] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1822]] /* g18.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[682] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1823]] /* g18.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[683] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[684] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1820]] /* g18.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[685] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1829]] /* g18.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[686] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[687] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1819]] /* g18.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[688] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1809]] /* g18.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[689] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[690] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1812]] /* g18.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[691] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1813]] /* g18.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[692] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* g18.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[693] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1821]] /* g18.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[694] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1826]] /* g18.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[695] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* g18.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[696] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1811]] /* g18.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[697] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[698] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[699] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[700] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[701] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1839]] /* g18.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[702] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[703] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3252]] /* trafo_62_4062.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[704] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3253]] /* trafo_62_4062.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[705] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[706] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[707] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2898]] /* load_62.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[708] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[709] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2899]] /* load_62.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[710] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[711] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3346]] /* trafo_g17_4062.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[712] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3347]] /* trafo_g17_4062.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[713] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[714] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* g17.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[715] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1776]] /* g17.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[716] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* g17.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[717] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[718] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[719] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[720] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[721] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1765]] /* g17.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[722] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1777]] /* g17.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[723] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[724] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* g17.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[725] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1783]] /* g17.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[726] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* g17.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[727] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[728] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* g17.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[729] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* g17.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[730] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1763]] /* g17.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[731] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1773]] /* g17.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[732] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* g17.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[733] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* g17.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[734] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* g17.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[735] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[736] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[737] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2927]] /* nodeFault.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[738] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3298]] /* trafo_g11_4021.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[739] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3299]] /* trafo_g11_4021.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[740] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[741] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1517]] /* g11.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[742] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1501]] /* g11.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[743] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1519]] /* g11.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[744] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[745] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[746] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[747] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[748] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1503]] /* g11.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[749] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* g11.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[750] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1504]] /* g11.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[751] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* g11.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[752] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1498]] /* g11.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[753] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1497]] /* g11.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[754] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1487]] /* g11.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[755] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[756] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[757] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[758] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1500]] /* g11.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[759] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[760] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1502]] /* g11.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[761] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1490]] /* g11.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[762] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1491]] /* g11.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[763] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1489]] /* g11.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[764] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* trafo_42_4042.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[765] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* trafo_42_4042.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[766] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[767] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2856]] /* load_42.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[768] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[769] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2857]] /* load_42.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[770] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[771] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[772] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3323]] /* trafo_g14_4042.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[773] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[774] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* g14.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[775] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* g14.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[776] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[777] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[778] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[779] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1645]] /* g14.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[780] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* g14.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[781] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1637]] /* g14.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[782] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1636]] /* g14.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[783] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1635]] /* g14.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[784] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1625]] /* g14.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[785] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* g14.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[786] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1628]] /* g14.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[787] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[788] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1629]] /* g14.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[789] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* g14.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[790] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1642]] /* g14.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[791] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[792] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[793] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[794] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* g14.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[795] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[796] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1627]] /* g14.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[797] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[798] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* g06.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[799] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* g06.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[800] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[801] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* g06.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[802] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* g06.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[803] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* g06.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[804] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* g06.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[805] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* g06.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[806] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* g06.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[807] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* g06.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[808] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* g06.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[809] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[810] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* g06.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[811] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* g06.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[812] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1289]] /* g06.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[813] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[814] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[815] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1287]] /* g06.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[816] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[817] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* g06.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[818] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[819] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[820] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3242]] /* trafo_61_4061.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[821] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* trafo_61_4061.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[822] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[823] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[824] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2892]] /* load_61.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[825] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[826] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2891]] /* load_61.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[827] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[828] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[829] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* line_4031_4041a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[830] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* line_4031_4041a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[831] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* line_4031_4041a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[832] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* line_4031_4041a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[833] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[834] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2582]] /* line_4031_4041b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[835] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2962]] /* shunt_4041.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[836] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2963]] /* shunt_4041.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[837] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2960]] /* shunt_4041.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[838] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2959]] /* shunt_4041.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[839] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2961]] /* shunt_4041.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[840] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* trafo_g13_4041.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[841] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* trafo_g13_4041.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[842] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[843] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1611]] /* g13.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[844] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1593]] /* g13.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[845] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1609]] /* g13.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[846] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[847] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[848] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[849] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[850] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1599]] /* g13.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[851] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1579]] /* g13.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[852] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1595]] /* g13.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[853] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1589]] /* g13.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[854] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1590]] /* g13.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[855] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1591]] /* g13.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[856] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1596]] /* g13.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[857] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1594]] /* g13.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[858] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* g13.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[859] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1582]] /* g13.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[860] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[861] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[862] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* g13.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[863] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[864] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1592]] /* g13.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[865] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[866] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2556]] /* line_4022_4031b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[867] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[868] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3102]] /* trafo_2031_4031.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[869] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3103]] /* trafo_2031_4031.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[870] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[871] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2454]] /* line_2031_2032a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[872] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[873] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2457]] /* line_2031_2032a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[874] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* line_2031_2032b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[875] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2465]] /* line_2031_2032b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[876] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* line_2031_2032a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[877] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[878] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* line_2031_2032b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[879] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2456]] /* line_2031_2032a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[880] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[881] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2464]] /* line_2031_2032b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[882] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[883] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3142]] /* trafo_32_2032.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[884] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3143]] /* trafo_32_2032.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[885] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[886] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[887] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[888] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2843]] /* load_32.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[889] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2842]] /* load_32.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[890] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[891] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3436]] /* trafo_g8_2032.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[892] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3437]] /* trafo_g8_2032.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[893] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[894] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[895] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1381]] /* g08.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[896] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* g08.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[897] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1379]] /* g08.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[898] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[899] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[900] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* g08.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[901] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1363]] /* g08.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[902] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[903] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1365]] /* g08.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[904] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1349]] /* g08.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[905] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1364]] /* g08.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[906] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* g08.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[907] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1369]] /* g08.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[908] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1359]] /* g08.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[909] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1360]] /* g08.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[910] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[911] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* g08.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[912] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* g08.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[913] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1366]] /* g08.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[914] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[915] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[916] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[917] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* trafo_31_2031.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[918] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* trafo_31_2031.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[919] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[920] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[921] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[922] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2836]] /* load_31.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[923] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2835]] /* load_31.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[924] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[925] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[926] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* trafo_g12_4031.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[927] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* trafo_1022_4022.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[928] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3013]] /* trafo_1022_4022.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[929] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[930] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* line_1021_1022a.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[931] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2363]] /* line_1021_1022b.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[932] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[933] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[934] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2355]] /* line_1021_1022a.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[935] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2933]] /* shunt_1022.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[936] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2930]] /* shunt_1022.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[937] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2931]] /* shunt_1022.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[938] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[939] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* line_1021_1022a.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[940] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[941] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[942] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2362]] /* line_1021_1022b.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[943] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* line_1021_1022a.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[944] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* line_1021_1022b.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[945] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2366]] /* line_1021_1022b.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[946] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2929]] /* shunt_1022.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[947] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2932]] /* shunt_1022.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[948] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3112]] /* trafo_22_1022.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[949] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3113]] /* trafo_22_1022.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[950] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[951] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2828]] /* load_22.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[952] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[953] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2829]] /* load_22.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[954] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[955] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[956] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3412]] /* trafo_g5_1022.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[957] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3413]] /* trafo_g5_1022.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[958] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[959] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[960] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* g05.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[961] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* g05.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[962] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* g05.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[963] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[964] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[965] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[966] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* g05.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[967] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* g05.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[968] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[969] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* g05.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[970] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* g05.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[971] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* g05.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[972] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* g05.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[973] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* g05.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[974] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* g05.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[975] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* g05.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[976] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* g05.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[977] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[978] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* g05.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[979] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* g05.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[980] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[981] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[982] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3404]] /* trafo_g4_1021.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[983] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3405]] /* trafo_g4_1021.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[984] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[985] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* g04.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[986] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* g04.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[987] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[988] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* g04.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[989] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* g04.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[990] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[991] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* g04.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[992] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* g04.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[993] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[994] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[995] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[996] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* g04.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[997] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* g04.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[998] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* g04.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[999] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* g04.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1000] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1001] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1002] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* g04.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1003] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1004] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* g04.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1005] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* g04.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1006] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1182]] /* g04.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1007] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* g04.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1008] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2957]] /* shunt_4012.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1009] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2958]] /* shunt_4012.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1010] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2955]] /* shunt_4012.QPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1011] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2954]] /* shunt_4012.PPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1012] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2956]] /* shunt_4012.UPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1013] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* trafo_g10_4012.terminal2.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1014] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* trafo_g10_4012.terminal2.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1015] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1016] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1017] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* g10.udPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1018] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1455]] /* g10.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1019] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* g10.uqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1020] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1021] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* g10.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1022] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1451]] /* g10.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1023] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1441]] /* g10.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1024] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1025] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* g10.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1026] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1027] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* g10.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1028] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1029] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1457]] /* g10.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1030] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1458]] /* g10.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1031] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1453]] /* g10.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1032] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1461]] /* g10.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1033] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1456]] /* g10.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1034] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1452]] /* g10.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1035] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1036] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1454]] /* g10.lambdadPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1037] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1038] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1039] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1040] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1041] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1535]] /* g12.iDPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1042] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1547]] /* g12.lambdaqPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1043] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1044] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1553]] /* g12.sin2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1045] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1549]] /* g12.miPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1046] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1533]] /* g12.cos2Eta variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1047] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1543]] /* g12.lambdaADPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1048] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1544]] /* g12.lambdaAQPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1049] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1545]] /* g12.lambdaAirGapPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1050] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1550]] /* g12.mqsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1051] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1548]] /* g12.mdsPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1052] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1536]] /* g12.iQ1Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1053] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1537]] /* g12.iQ2Pu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1054] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1055] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1056] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,4073};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 4073 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2926]] /* nodeFault.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2564]] /* line_4031_4032.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2530]] /* line_4021_4032.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2528]] /* line_4021_4032.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* line_4011_4021.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* line_4011_4021.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3444]] /* trafo_g9_4011.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* line_4011_4012.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* line_4012_4022.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2474]] /* line_4011_4012.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* line_4011_4012.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* line_4012_4022.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* line_4012_4022.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* line_4022_4031a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* line_4022_4031a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* line_4022_4031b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* line_4022_4031b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2557]] /* line_4022_4031b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* trafo_g12_4031.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1563]] /* g12.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1546]] /* g12.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1565]] /* g12.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* line_4022_4031a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[30];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[31];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* line_4011_4022.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[32];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* line_4011_4012.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[33];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[34];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* line_4012_4022.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[35];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[36];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* line_4011_4022.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[37];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* line_4011_4022.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[38];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* line_4011_4022.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[39];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2546]] /* line_4022_4031a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[40];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* line_4031_4041b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[41];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* line_4031_4041b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[42];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2583]] /* line_4031_4041b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[43];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3163]] /* trafo_41_4041.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[44];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[45];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2850]] /* load_41.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[46];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[47];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[48];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2849]] /* load_41.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[49];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[50];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3162]] /* trafo_41_4041.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[51];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2616]] /* line_4041_4061.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[52];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[53];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[54];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2617]] /* line_4041_4061.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[55];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2619]] /* line_4041_4061.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[56];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* line_4061_4062.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[57];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* line_4061_4062.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[58];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2618]] /* line_4041_4061.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[59];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[60];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2706]] /* line_4045_4062.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[61];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3052]] /* trafo_1045_4045b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[62];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* trafo_1045_4045b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[63];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3232]] /* trafo_5_1045.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[64];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[65];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2800]] /* load_05.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[66];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[67];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[68];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2801]] /* load_05.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[69];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[70];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3233]] /* trafo_5_1045.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[71];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2429]] /* line_1042_1045.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[72];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2425]] /* line_1042_1045.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[73];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2415]] /* line_1042_1044b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[74];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2414]] /* line_1042_1044b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[75];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3420]] /* trafo_g6_1042.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[76];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[77];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[78];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3421]] /* trafo_g6_1042.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[79];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[80];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2406]] /* line_1042_1044a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[81];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2407]] /* line_1042_1044a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[82];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2408]] /* line_1042_1044a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[83];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* trafo_1044_4044b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[84];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* trafo_1044_4044b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[85];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2644]] /* line_4043_4044.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[86];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2642]] /* line_4043_4044.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[87];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* line_4042_4043.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[88];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[89];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2536]] /* line_4021_4042.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[90];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2538]] /* line_4021_4042.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[91];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3322]] /* trafo_g14_4042.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[92];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[93];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[94];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* line_4011_4021.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[95];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2537]] /* line_4021_4042.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[96];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[97];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[98];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* line_4011_4021.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[99];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2501]] /* line_4011_4071.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[100];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2503]] /* line_4011_4071.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[101];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* line_4071_4072a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[102];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[103];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2500]] /* line_4011_4071.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[104];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2502]] /* line_4011_4071.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[105];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2520]] /* line_4012_4071.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[106];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[107];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2521]] /* line_4012_4071.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[108];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2518]] /* line_4012_4071.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[109];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2519]] /* line_4012_4071.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[110];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* line_4071_4072a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[111];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* line_4071_4072a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[112];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3380]] /* trafo_g20_4072.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[113];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[114];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[115];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* line_4071_4072b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[116];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* line_4071_4072b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[117];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* line_4071_4072a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[118];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* line_4071_4072b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[119];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* line_4071_4072b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[120];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3282]] /* trafo_72_4072.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[121];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3283]] /* trafo_72_4072.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[122];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[123];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* trafo_72_4072.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[124];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2920]] /* load_72.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[125];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* trafo_72_4072.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[126];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2919]] /* load_72.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[127];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[128];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3381]] /* trafo_g20_4072.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[129];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[130];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1931]] /* g20.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[131];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1915]] /* g20.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[132];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1929]] /* g20.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[133];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[134];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[135];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[136];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1903]] /* g20.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[137];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* g20.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[138];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1912]] /* g20.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[139];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1913]] /* g20.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[140];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1901]] /* g20.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[141];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1917]] /* g20.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[142];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[143];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[144];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[145];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* g20.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[146];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[147];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[148];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* g20.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[149];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1921]] /* g20.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[150];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1918]] /* g20.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[151];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1916]] /* g20.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[152];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1911]] /* g20.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[153];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2983]] /* shunt_4071.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[154];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2979]] /* shunt_4071.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[155];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2982]] /* shunt_4071.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[156];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2980]] /* shunt_4071.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[157];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2981]] /* shunt_4071.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[158];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* trafo_71_4071.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[159];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* trafo_71_4071.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[160];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* trafo_71_4071.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[161];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[162];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* trafo_71_4071.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[163];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2913]] /* load_71.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[164];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2912]] /* load_71.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[165];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[166];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3362]] /* trafo_g19_4071.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[167];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3363]] /* trafo_g19_4071.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[168];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[169];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1885]] /* g19.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[170];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1869]] /* g19.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[171];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1868]] /* g19.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[172];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[173];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1871]] /* g19.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[174];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1855]] /* g19.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[175];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1875]] /* g19.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[176];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* g19.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[177];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1867]] /* g19.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[178];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1865]] /* g19.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[179];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1857]] /* g19.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[180];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1858]] /* g19.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[181];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[182];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[183];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1859]] /* g19.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[184];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[185];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[186];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[187];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[188];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* g19.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[189];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[190];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1872]] /* g19.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[191];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1870]] /* g19.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[192];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2992]] /* trafo_1011_4011.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[193];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2993]] /* trafo_1011_4011.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[194];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2990]] /* trafo_1011_4011.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[195];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* trafo_11_1011.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[196];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* trafo_11_1011.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[197];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[198];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[199];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2808]] /* load_11.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[200];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2807]] /* load_11.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[201];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[202];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* line_1011_1013a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[203];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* line_1011_1013a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[204];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* trafo_11_1011.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[205];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* trafo_11_1011.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[206];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[207];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* line_1011_1013a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[208];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2308]] /* line_1011_1013b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[209];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2306]] /* line_1011_1013b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[210];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2307]] /* line_1011_1013b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[211];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2309]] /* line_1011_1013b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[212];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3083]] /* trafo_13_1013.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[213];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[214];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* line_1011_1013a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[215];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[216];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2334]] /* line_1013_1014a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[217];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2335]] /* line_1013_1014a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[218];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* line_1013_1014a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[219];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2319]] /* line_1012_1014a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[220];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[221];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2316]] /* line_1012_1014a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[222];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* trafo_g1_1012.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[223];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[224];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[225];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2317]] /* line_1012_1014a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[226];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* trafo_1012_4012.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[227];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* trafo_1012_4012.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[228];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* trafo_1012_4012.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[229];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* trafo_1012_4012.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[230];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[231];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2318]] /* line_1012_1014a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[232];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2326]] /* line_1012_1014b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[233];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2324]] /* line_1012_1014b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[234];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2325]] /* line_1012_1014b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[235];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2327]] /* line_1012_1014b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[236];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[237];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2338]] /* line_1013_1014a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[238];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2345]] /* line_1013_1014b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[239];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2347]] /* line_1013_1014b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[240];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2344]] /* line_1013_1014b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[241];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2346]] /* line_1013_1014b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[242];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* trafo_g3_1014.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[243];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* trafo_g3_1014.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[244];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[245];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[246];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* g03.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[247];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* g03.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[248];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* g03.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[249];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[250];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[251];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* g03.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[252];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* g03.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[253];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[254];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* g03.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[255];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[256];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[257];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* g03.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[258];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[259];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* g03.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[260];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* g03.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[261];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* g03.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[262];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* g03.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[263];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* g03.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[264];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* g03.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[265];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* g03.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[266];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* g03.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[267];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[268];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3072]] /* trafo_12_1012.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[269];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3073]] /* trafo_12_1012.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[270];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[271];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[272];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2815]] /* load_12.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[273];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3071]] /* trafo_12_1012.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[274];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2814]] /* load_12.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[275];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3070]] /* trafo_12_1012.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[276];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* trafo_g1_1012.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[277];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[278];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* g01.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[279];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* g01.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[280];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* g01.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[281];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[282];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* g01.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[283];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[284];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* g01.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[285];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* g01.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[286];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* g01.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[287];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* g01.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[288];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* g01.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[289];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* g01.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[290];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* g01.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[291];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[292];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* g01.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[293];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* g01.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[294];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* g01.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[295];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* g01.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[296];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[297];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[298];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[299];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[300];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3082]] /* trafo_13_1013.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[301];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[302];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3080]] /* trafo_13_1013.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[303];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3081]] /* trafo_13_1013.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[304];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2822]] /* load_13.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[305];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2821]] /* load_13.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[306];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[307];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3388]] /* trafo_g2_1013.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[308];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3389]] /* trafo_g2_1013.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[309];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[310];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* g02.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[311];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* g02.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[312];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* g02.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[313];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[314];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[315];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[316];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* g02.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[317];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* g02.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[318];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* g02.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[319];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[320];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* g02.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[321];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* g02.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[322];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* g02.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[323];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[324];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[325];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[326];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* g02.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[327];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[328];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* g02.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[329];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* g02.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[330];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* g02.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[331];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* g02.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[332];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* g02.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[333];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2991]] /* trafo_1011_4011.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[334];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* trafo_g9_4011.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[335];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[336];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1425]] /* g09.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[337];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1408]] /* g09.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[338];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1427]] /* g09.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[339];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[340];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[341];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1415]] /* g09.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[342];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1412]] /* g09.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[343];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1407]] /* g09.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[344];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1406]] /* g09.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[345];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1405]] /* g09.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[346];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1395]] /* g09.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[347];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1411]] /* g09.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[348];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[349];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1397]] /* g09.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[350];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1409]] /* g09.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[351];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[352];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[353];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* g09.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[354];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[355];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* g09.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[356];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[357];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1410]] /* g09.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[358];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2529]] /* line_4021_4032.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[359];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[360];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2563]] /* line_4031_4032.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[361];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2565]] /* line_4031_4032.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[362];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2531]] /* line_4021_4032.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[363];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2562]] /* line_4031_4032.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[364];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2590]] /* line_4032_4042.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[365];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2588]] /* line_4032_4042.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[366];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2589]] /* line_4032_4042.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[367];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2591]] /* line_4032_4042.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[368];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2539]] /* line_4021_4042.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[369];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2598]] /* line_4032_4044.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[370];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2601]] /* line_4032_4044.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[371];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* trafo_1044_4044a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[372];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* trafo_1044_4044a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[373];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* trafo_1044_4044b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[374];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* trafo_1044_4044b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[375];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[376];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2600]] /* line_4032_4044.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[377];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2599]] /* line_4032_4044.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[378];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* line_4041_4044.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[379];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2606]] /* line_4041_4044.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[380];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2609]] /* line_4041_4044.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[381];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2607]] /* line_4041_4044.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[382];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2636]] /* line_4042_4044.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[383];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2637]] /* line_4042_4044.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[384];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* line_4042_4044.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[385];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2635]] /* line_4042_4044.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[386];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* line_4043_4044.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[387];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2643]] /* line_4043_4044.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[388];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2661]] /* line_4043_4047.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[389];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2662]] /* line_4043_4047.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[390];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3202]] /* trafo_47_4047.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[391];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3200]] /* trafo_47_4047.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[392];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2877]] /* load_47.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[393];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3201]] /* trafo_47_4047.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[394];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[395];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2878]] /* load_47.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[396];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[397];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[398];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2626]] /* line_4042_4043.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[399];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2627]] /* line_4042_4043.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[400];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2629]] /* line_4042_4043.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[401];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2653]] /* line_4043_4046.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[402];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2652]] /* line_4043_4046.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[403];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2654]] /* line_4043_4046.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[404];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* line_4046_4047.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[405];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* line_4046_4047.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[406];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2973]] /* shunt_4046.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[407];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2970]] /* shunt_4046.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[408];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2971]] /* shunt_4046.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[409];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[410];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2655]] /* line_4043_4046.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[411];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* line_4046_4047.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[412];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3331]] /* trafo_g15_4047.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[413];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[414];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2660]] /* line_4043_4047.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[415];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2663]] /* line_4043_4047.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[416];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[417];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2969]] /* shunt_4046.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[418];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2972]] /* shunt_4046.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[419];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3192]] /* trafo_46_4046.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[420];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3193]] /* trafo_46_4046.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[421];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[422];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2870]] /* load_46.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[423];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* trafo_46_4046.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[424];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3191]] /* trafo_46_4046.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[425];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2871]] /* load_46.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[426];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[427];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* line_4046_4047.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[428];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3203]] /* trafo_47_4047.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[429];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[430];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3330]] /* trafo_g15_4047.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[431];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[432];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1701]] /* g15.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[433];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1684]] /* g15.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[434];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1685]] /* g15.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[435];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* g15.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[436];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[437];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1675]] /* g15.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[438];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[439];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* g15.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[440];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1688]] /* g15.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[441];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1683]] /* g15.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[442];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1691]] /* g15.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[443];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1687]] /* g15.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[444];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1681]] /* g15.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[445];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1682]] /* g15.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[446];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[447];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[448];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* g15.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[449];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[450];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[451];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[452];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1703]] /* g15.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[453];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[454];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1686]] /* g15.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[455];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2965]] /* shunt_4043.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[456];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2968]] /* shunt_4043.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[457];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2967]] /* shunt_4043.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[458];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2964]] /* shunt_4043.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[459];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2966]] /* shunt_4043.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[460];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* trafo_43_4043.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[461];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* trafo_43_4043.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[462];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[463];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2863]] /* load_43.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[464];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3181]] /* trafo_43_4043.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[465];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[466];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2864]] /* load_43.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[467];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3180]] /* trafo_43_4043.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[468];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[469];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2672]] /* line_4044_4045a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[470];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2670]] /* line_4044_4045a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[471];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2671]] /* line_4044_4045a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[472];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2673]] /* line_4044_4045a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[473];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* trafo_1045_4045a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[474];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* trafo_1045_4045a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[475];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* trafo_1045_4045a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[476];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* trafo_1045_4045a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[477];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[478];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2390]] /* line_1041_1045a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[479];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2382]] /* line_1041_1043b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[480];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2383]] /* line_1041_1043b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[481];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2375]] /* line_1041_1043a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[482];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* line_1041_1043a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[483];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2384]] /* line_1041_1043b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[484];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[485];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2374]] /* line_1041_1043a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[486];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[487];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2377]] /* line_1041_1043a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[488];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* trafo_3_1043.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[489];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3151]] /* trafo_3_1043.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[490];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[491];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2786]] /* load_03.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[492];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3150]] /* trafo_3_1043.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[493];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2787]] /* load_03.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[494];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* trafo_3_1043.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[495];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[496];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[497];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2385]] /* line_1041_1043b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[498];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[499];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2392]] /* line_1041_1045a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[500];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2393]] /* line_1041_1045a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[501];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2391]] /* line_1041_1045a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[502];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2400]] /* line_1041_1045b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[503];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2401]] /* line_1041_1045b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[504];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* line_1041_1045b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[505];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* line_1041_1045b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[506];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2938]] /* shunt_1041.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[507];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2934]] /* shunt_1041.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[508];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2937]] /* shunt_1041.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[509];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2935]] /* shunt_1041.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[510];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2936]] /* shunt_1041.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[511];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3092]] /* trafo_1_1041.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[512];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3093]] /* trafo_1_1041.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[513];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3090]] /* trafo_1_1041.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[514];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2772]] /* load_01.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[515];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[516];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2773]] /* load_01.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[517];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[518];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3091]] /* trafo_1_1041.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[519];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* line_1043_1044a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[520];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* line_1043_1044a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[521];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* line_1043_1044a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[522];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2440]] /* line_1043_1044a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[523];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2447]] /* line_1043_1044b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[524];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2449]] /* line_1043_1044b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[525];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2446]] /* line_1043_1044b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[526];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2448]] /* line_1043_1044b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[527];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2943]] /* shunt_1043.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[528];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2939]] /* shunt_1043.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[529];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2942]] /* shunt_1043.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[530];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2940]] /* shunt_1043.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[531];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2941]] /* shunt_1043.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[532];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3428]] /* trafo_g7_1043.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[533];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3429]] /* trafo_g7_1043.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[534];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[535];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* g07.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[536];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* g07.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[537];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* g07.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[538];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[539];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[540];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[541];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[542];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[543];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* g07.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[544];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[545];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* g07.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[546];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1323]] /* g07.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[547];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* g07.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[548];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* g07.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[549];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* g07.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[550];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1320]] /* g07.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[551];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* g07.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[552];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* g07.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[553];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* g07.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[554];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[555];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* g07.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[556];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* g07.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[557];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[558];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[559];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2409]] /* line_1042_1044a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[560];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2417]] /* line_1042_1044b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[561];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2416]] /* line_1042_1044b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[562];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[563];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2945]] /* shunt_1044.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[564];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2948]] /* shunt_1044.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[565];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2944]] /* shunt_1044.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[566];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2947]] /* shunt_1044.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[567];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2946]] /* shunt_1044.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[568];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3212]] /* trafo_4_1044.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[569];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3213]] /* trafo_4_1044.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[570];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3211]] /* trafo_4_1044.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[571];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[572];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2793]] /* load_04.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[573];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3210]] /* trafo_4_1044.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[574];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2794]] /* load_04.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[575];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[576];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* trafo_1044_4044a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[577];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* trafo_1044_4044a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[578];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[579];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[580];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* line_4044_4045b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[581];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* line_4044_4045b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[582];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* line_4044_4045b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[583];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* line_4044_4045b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[584];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2424]] /* line_1042_1045.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[585];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* trafo_2_1042.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[586];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3123]] /* trafo_2_1042.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[587];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[588];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2779]] /* load_02.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[589];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[590];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2780]] /* load_02.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[591];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* trafo_2_1042.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[592];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* trafo_2_1042.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[593];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2428]] /* line_1042_1045.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[594];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2950]] /* shunt_1045.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[595];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2953]] /* shunt_1045.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[596];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2949]] /* shunt_1045.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[597];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2952]] /* shunt_1045.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[598];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2951]] /* shunt_1045.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[599];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* trafo_1045_4045b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[600];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3053]] /* trafo_1045_4045b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[601];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[602];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* line_4045_4051a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[603];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* line_4045_4051a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[604];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3339]] /* trafo_g16_4051.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[605];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[606];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[607];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3338]] /* trafo_g16_4051.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[608];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* line_4045_4051a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[609];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[610];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* line_4045_4051a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[611];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* line_4045_4051b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[612];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2701]] /* line_4045_4051b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[613];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* line_4045_4051b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[614];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* line_4045_4051b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[615];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2977]] /* shunt_4051.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[616];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2978]] /* shunt_4051.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[617];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2975]] /* shunt_4051.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[618];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2974]] /* shunt_4051.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[619];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2976]] /* shunt_4051.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[620];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* trafo_51_4051.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[621];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* trafo_51_4051.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[622];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3220]] /* trafo_51_4051.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[623];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[624];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2885]] /* load_51.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[625];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3221]] /* trafo_51_4051.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[626];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2884]] /* load_51.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[627];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[628];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[629];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[630];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[631];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[632];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* g16.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[633];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[634];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* g16.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[635];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* g16.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[636];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* g16.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[637];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* g16.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[638];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1734]] /* g16.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[639];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* g16.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[640];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1727]] /* g16.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[641];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* g16.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[642];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* g16.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[643];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* g16.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[644];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* g16.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[645];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[646];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[647];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* g16.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[648];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* g16.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[649];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1730]] /* g16.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[650];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[651];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[652];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2707]] /* line_4045_4062.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[653];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2708]] /* line_4045_4062.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[654];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2736]] /* line_4062_4063a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[655];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[656];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2731]] /* line_4061_4062.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[657];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2709]] /* line_4045_4062.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[658];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2730]] /* line_4061_4062.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[659];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[660];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* line_4062_4063a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[661];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* line_4062_4063b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[662];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* line_4062_4063b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[663];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[664];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* line_4062_4063a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[665];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* line_4062_4063b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[666];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* line_4062_4063b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[667];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* line_4062_4063a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[668];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3262]] /* trafo_63_4063.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[669];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3263]] /* trafo_63_4063.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[670];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[671];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* trafo_63_4063.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[672];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2906]] /* load_63.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[673];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[674];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2905]] /* load_63.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[675];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* trafo_63_4063.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[676];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3354]] /* trafo_g18_4063.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[677];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3355]] /* trafo_g18_4063.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[678];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[679];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1841]] /* g18.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[680];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1822]] /* g18.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[681];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1823]] /* g18.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[682];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[683];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1820]] /* g18.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[684];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1829]] /* g18.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[685];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[686];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1819]] /* g18.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[687];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1809]] /* g18.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[688];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[689];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1812]] /* g18.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[690];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1813]] /* g18.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[691];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* g18.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[692];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1821]] /* g18.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[693];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1826]] /* g18.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[694];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* g18.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[695];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1811]] /* g18.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[696];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[697];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[698];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[699];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[700];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1839]] /* g18.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[701];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[702];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3252]] /* trafo_62_4062.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[703];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3253]] /* trafo_62_4062.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[704];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* trafo_62_4062.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[705];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[706];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2898]] /* load_62.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[707];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[708];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2899]] /* load_62.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[709];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* trafo_62_4062.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[710];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3346]] /* trafo_g17_4062.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[711];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3347]] /* trafo_g17_4062.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[712];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[713];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* g17.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[714];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1776]] /* g17.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[715];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* g17.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[716];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[717];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[718];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[719];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[720];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1765]] /* g17.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[721];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1777]] /* g17.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[722];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[723];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* g17.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[724];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1783]] /* g17.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[725];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* g17.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[726];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[727];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* g17.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[728];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* g17.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[729];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1763]] /* g17.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[730];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1773]] /* g17.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[731];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* g17.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[732];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* g17.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[733];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* g17.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[734];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[735];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[736];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2927]] /* nodeFault.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[737];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3298]] /* trafo_g11_4021.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[738];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3299]] /* trafo_g11_4021.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[739];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[740];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1517]] /* g11.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[741];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1501]] /* g11.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[742];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1519]] /* g11.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[743];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[744];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[745];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[746];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[747];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1503]] /* g11.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[748];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* g11.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[749];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1504]] /* g11.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[750];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* g11.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[751];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1498]] /* g11.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[752];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1497]] /* g11.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[753];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1487]] /* g11.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[754];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[755];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[756];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[757];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1500]] /* g11.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[758];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[759];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1502]] /* g11.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[760];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1490]] /* g11.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[761];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1491]] /* g11.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[762];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1489]] /* g11.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[763];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3172]] /* trafo_42_4042.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[764];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* trafo_42_4042.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[765];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[766];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2856]] /* load_42.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[767];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[768];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2857]] /* load_42.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[769];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[770];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[771];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3323]] /* trafo_g14_4042.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[772];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[773];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* g14.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[774];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* g14.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[775];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[776];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[777];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[778];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1645]] /* g14.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[779];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* g14.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[780];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1637]] /* g14.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[781];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1636]] /* g14.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[782];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1635]] /* g14.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[783];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1625]] /* g14.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[784];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* g14.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[785];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1628]] /* g14.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[786];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[787];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1629]] /* g14.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[788];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* g14.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[789];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1642]] /* g14.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[790];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[791];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[792];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[793];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* g14.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[794];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[795];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1627]] /* g14.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[796];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[797];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* g06.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[798];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* g06.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[799];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[800];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* g06.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[801];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* g06.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[802];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* g06.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[803];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* g06.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[804];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* g06.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[805];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* g06.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[806];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* g06.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[807];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* g06.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[808];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[809];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* g06.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[810];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* g06.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[811];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1289]] /* g06.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[812];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[813];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[814];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1287]] /* g06.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[815];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[816];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* g06.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[817];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[818];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[819];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3242]] /* trafo_61_4061.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[820];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* trafo_61_4061.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[821];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[822];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[823];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2892]] /* load_61.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[824];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[825];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2891]] /* load_61.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[826];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[827];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[828];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* line_4031_4041a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[829];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* line_4031_4041a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[830];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* line_4031_4041a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[831];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* line_4031_4041a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[832];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[833];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2582]] /* line_4031_4041b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[834];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2962]] /* shunt_4041.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[835];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2963]] /* shunt_4041.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[836];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2960]] /* shunt_4041.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[837];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2959]] /* shunt_4041.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[838];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2961]] /* shunt_4041.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[839];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* trafo_g13_4041.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[840];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* trafo_g13_4041.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[841];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[842];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1611]] /* g13.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[843];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1593]] /* g13.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[844];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1609]] /* g13.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[845];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[846];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[847];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[848];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[849];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1599]] /* g13.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[850];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1579]] /* g13.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[851];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1595]] /* g13.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[852];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1589]] /* g13.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[853];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1590]] /* g13.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[854];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1591]] /* g13.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[855];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1596]] /* g13.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[856];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1594]] /* g13.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[857];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* g13.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[858];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1582]] /* g13.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[859];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[860];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[861];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* g13.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[862];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[863];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1592]] /* g13.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[864];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[865];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2556]] /* line_4022_4031b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[866];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[867];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3102]] /* trafo_2031_4031.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[868];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3103]] /* trafo_2031_4031.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[869];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[870];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2454]] /* line_2031_2032a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[871];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[872];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2457]] /* line_2031_2032a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[873];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* line_2031_2032b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[874];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2465]] /* line_2031_2032b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[875];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* line_2031_2032a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[876];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[877];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* line_2031_2032b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[878];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2456]] /* line_2031_2032a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[879];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[880];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2464]] /* line_2031_2032b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[881];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[882];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3142]] /* trafo_32_2032.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[883];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3143]] /* trafo_32_2032.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[884];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[885];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[886];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[887];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2843]] /* load_32.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[888];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2842]] /* load_32.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[889];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[890];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3436]] /* trafo_g8_2032.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[891];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3437]] /* trafo_g8_2032.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[892];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[893];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[894];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1381]] /* g08.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[895];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* g08.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[896];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1379]] /* g08.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[897];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[898];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[899];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* g08.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[900];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1363]] /* g08.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[901];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[902];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1365]] /* g08.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[903];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1349]] /* g08.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[904];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1364]] /* g08.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[905];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* g08.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[906];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1369]] /* g08.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[907];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1359]] /* g08.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[908];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1360]] /* g08.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[909];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[910];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* g08.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[911];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* g08.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[912];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1366]] /* g08.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[913];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[914];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[915];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[916];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* trafo_31_2031.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[917];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* trafo_31_2031.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[918];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[919];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[920];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[921];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2836]] /* load_31.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[922];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2835]] /* load_31.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[923];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[924];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[925];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* trafo_g12_4031.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[926];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* trafo_1022_4022.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[927];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3013]] /* trafo_1022_4022.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[928];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[929];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* line_1021_1022a.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[930];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2363]] /* line_1021_1022b.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[931];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[932];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[933];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2355]] /* line_1021_1022a.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[934];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2933]] /* shunt_1022.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[935];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2930]] /* shunt_1022.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[936];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2931]] /* shunt_1022.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[937];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[938];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* line_1021_1022a.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[939];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[940];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[941];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2362]] /* line_1021_1022b.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[942];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* line_1021_1022a.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[943];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* line_1021_1022b.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[944];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2366]] /* line_1021_1022b.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[945];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2929]] /* shunt_1022.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[946];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2932]] /* shunt_1022.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[947];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3112]] /* trafo_22_1022.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[948];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3113]] /* trafo_22_1022.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[949];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[950];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2828]] /* load_22.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[951];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[952];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2829]] /* load_22.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[953];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[954];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[955];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3412]] /* trafo_g5_1022.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[956];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3413]] /* trafo_g5_1022.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[957];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[958];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[959];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* g05.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[960];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* g05.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[961];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* g05.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[962];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[963];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[964];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[965];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* g05.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[966];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* g05.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[967];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[968];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* g05.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[969];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* g05.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[970];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* g05.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[971];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* g05.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[972];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* g05.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[973];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* g05.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[974];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* g05.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[975];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* g05.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[976];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[977];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* g05.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[978];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* g05.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[979];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[980];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[981];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3404]] /* trafo_g4_1021.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[982];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3405]] /* trafo_g4_1021.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[983];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[984];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* g04.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[985];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* g04.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[986];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[987];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* g04.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[988];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* g04.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[989];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[990];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* g04.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[991];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* g04.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[992];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[993];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[994];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[995];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* g04.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[996];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* g04.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[997];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* g04.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[998];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* g04.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[999];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1000];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1001];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* g04.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1002];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1003];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* g04.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1004];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* g04.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1005];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1182]] /* g04.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1006];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* g04.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1007];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2957]] /* shunt_4012.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1008];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2958]] /* shunt_4012.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1009];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2955]] /* shunt_4012.QPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1010];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2954]] /* shunt_4012.PPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1011];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2956]] /* shunt_4012.UPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1012];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* trafo_g10_4012.terminal2.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1013];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* trafo_g10_4012.terminal2.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1014];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1015];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1016];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* g10.udPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1017];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1455]] /* g10.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1018];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* g10.uqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1019];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1020];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* g10.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1021];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1451]] /* g10.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1022];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1441]] /* g10.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1023];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1024];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* g10.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1025];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1026];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* g10.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1027];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1028];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1457]] /* g10.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1029];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1458]] /* g10.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1030];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1453]] /* g10.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1031];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1461]] /* g10.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1032];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1456]] /* g10.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1033];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1452]] /* g10.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1034];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1035];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1454]] /* g10.lambdadPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1036];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1037];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1038];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1039];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1040];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1535]] /* g12.iDPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1041];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1547]] /* g12.lambdaqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1042];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1043];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1553]] /* g12.sin2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1044];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1549]] /* g12.miPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1045];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1533]] /* g12.cos2Eta variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1046];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1543]] /* g12.lambdaADPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1047];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1544]] /* g12.lambdaAQPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1048];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1545]] /* g12.lambdaAirGapPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1049];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1550]] /* g12.mqsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1050];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1548]] /* g12.mdsPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1051];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1536]] /* g12.iQ1Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1052];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1537]] /* g12.iQ2Pu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1053];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1054];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1055];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1056];
  threadData->lastEquationSolved = 4073;
}

/*
equation index: 4074
type: SIMPLE_ASSIGN
g09.iStatorPu.im = if g09.running.value then g09.rTfoPu * g09.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4074;
}

/*
equation index: 4075
type: SIMPLE_ASSIGN
g12.iStatorPu.re = if g12.running.value then g12.rTfoPu * g12.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4075;
}

/*
equation index: 4076
type: SIMPLE_ASSIGN
g12.iStatorPu.im = if g12.running.value then g12.rTfoPu * g12.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4076;
}

/*
equation index: 4077
type: SIMPLE_ASSIGN
g12.IStatorPu = if g12.running.value then if g12.iStatorPu.re == 0.0 and g12.iStatorPu.im == 0.0 then 0.0 else (g12.iStatorPu.re ^ 2.0 + g12.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4077};
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_boolean tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
  modelica_real tmp86;
  tmp85 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp85)
  {
    tmp83 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */) == 0.0));
    if(tmp83)
    {
      tmp84 = 0.0;
    }
    else
    {
      tmp80 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */);
      tmp81 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */);
      tmp82 = (tmp80 * tmp80) + (tmp81 * tmp81);
      if(tmp82 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp82, 0.5);
      }
      tmp84 = sqrt(tmp82);
    }
    tmp86 = tmp84;
  }
  else
  {
    tmp86 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1520]] /* g12.IStatorPu variable */) = tmp86;
  threadData->lastEquationSolved = 4077;
}

/*
equation index: 4078
type: SIMPLE_ASSIGN
$DER.g12.lambdaQ2Pu = if g12.running.value then g12.RQ2PPu * g12.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(g12.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1384]] /* g12.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1537]] /* g12.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4078;
}

/*
equation index: 4079
type: SIMPLE_ASSIGN
$DER.g12.lambdaQ1Pu = if g12.running.value then g12.RQ1PPu * g12.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* der(g12.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1383]] /* g12.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1536]] /* g12.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4079;
}

/*
equation index: 4080
type: SIMPLE_ASSIGN
$DER.g12.lambdaDPu = if g12.running.value then g12.RDPPu * g12.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* der(g12.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1382]] /* g12.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1535]] /* g12.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4080;
}

/*
equation index: 4081
type: SIMPLE_ASSIGN
g12.uStatorPu.re = if g12.running.value then (g12.terminal.V.re + (-100.0) * (g12.terminal.i.re * g12.RTfoPu - g12.terminal.i.im * g12.XTfoPu) / g12.SNom) / g12.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* g12.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* g12.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */),"g12.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */),"g12.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4081;
}

/*
equation index: 4082
type: SIMPLE_ASSIGN
g12.uPu.re = if g12.running.value then g12.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1560]] /* g12.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4082;
}

/*
equation index: 4083
type: SIMPLE_ASSIGN
check_UPu_bus_4012 = (line_4012_4022.terminal1.V.re ^ 2.0 + line_4012_4022.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4083};
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  tmp87 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */);
  tmp88 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */);
  tmp89 = (tmp87 * tmp87) + (tmp88 * tmp88);
  if(tmp89 < 0.0) {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp89, 0.5);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* check_UPu_bus_4012 variable */) = sqrt(tmp89);
  threadData->lastEquationSolved = 4083;
}

/*
equation index: 4084
type: SIMPLE_ASSIGN
trafo_g10_4012.U2Pu = if trafo_g10_4012.running.value then if line_4012_4022.terminal1.V.re == 0.0 and line_4012_4022.terminal1.V.im == 0.0 then 0.0 else (line_4012_4022.terminal1.V.re ^ 2.0 + line_4012_4022.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4084};
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_boolean tmp95;
  modelica_real tmp96;
  tmp95 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */);
  if(tmp95)
  {
    tmp93 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0));
    if(tmp93)
    {
      tmp94 = 0.0;
    }
    else
    {
      tmp90 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */);
      tmp91 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */);
      tmp92 = (tmp90 * tmp90) + (tmp91 * tmp91);
      if(tmp92 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp92, 0.5);
      }
      tmp94 = sqrt(tmp92);
    }
    tmp96 = tmp94;
  }
  else
  {
    tmp96 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3289]] /* trafo_g10_4012.U2Pu variable */) = tmp96;
  threadData->lastEquationSolved = 4084;
}

/*
equation index: 4085
type: SIMPLE_ASSIGN
g10.iStatorPu.re = if g10.running.value then g10.rTfoPu * g10.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4085;
}

/*
equation index: 4086
type: SIMPLE_ASSIGN
$DER.g10.lambdaDPu = if g10.running.value then g10.RDPPu * g10.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* der(g10.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1180]] /* g10.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* g10.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4086;
}

/*
equation index: 4087
type: SIMPLE_ASSIGN
g10.iStatorPu.im = if g10.running.value then g10.rTfoPu * g10.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4087;
}

/*
equation index: 4088
type: SIMPLE_ASSIGN
g10.IStatorPu = if g10.running.value then if g10.iStatorPu.re == 0.0 and g10.iStatorPu.im == 0.0 then 0.0 else (g10.iStatorPu.re ^ 2.0 + g10.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4088};
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_boolean tmp100;
  modelica_real tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  tmp102 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp102)
  {
    tmp100 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */) == 0.0));
    if(tmp100)
    {
      tmp101 = 0.0;
    }
    else
    {
      tmp97 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */);
      tmp98 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */);
      tmp99 = (tmp97 * tmp97) + (tmp98 * tmp98);
      if(tmp99 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp99, 0.5);
      }
      tmp101 = sqrt(tmp99);
    }
    tmp103 = tmp101;
  }
  else
  {
    tmp103 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1428]] /* g10.IStatorPu variable */) = tmp103;
  threadData->lastEquationSolved = 4088;
}

/*
equation index: 4089
type: SIMPLE_ASSIGN
$DER.g10.lambdaQ1Pu = if g10.running.value then g10.RQ1PPu * g10.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* der(g10.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* g10.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* g10.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4089;
}

/*
equation index: 4090
type: SIMPLE_ASSIGN
$DER.g10.lambdaQ2Pu = if g10.running.value then g10.RQ2PPu * g10.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* der(g10.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1182]] /* g10.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* g10.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4090;
}

/*
equation index: 4091
type: SIMPLE_ASSIGN
g10.uStatorPu.im = if g10.running.value then (g10.terminal.V.im + (-100.0) * (g10.terminal.i.re * g10.XTfoPu + g10.terminal.i.im * g10.RTfoPu) / g10.SNom) / g10.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* g10.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* g10.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */),"g10.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */),"g10.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4091;
}

/*
equation index: 4092
type: SIMPLE_ASSIGN
g10.uPu.im = if g10.running.value then g10.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1467]] /* g10.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4092;
}

/*
equation index: 4093
type: SIMPLE_ASSIGN
g10.cePu = if g10.running.value then g10.lambdaqPu * g10.idPu - g10.lambdadPu * g10.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1439]] /* g10.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1455]] /* g10.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1454]] /* g10.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4093;
}

/*
equation index: 4094
type: SIMPLE_ASSIGN
g10.PePu = if g10.running.value then g10.cePu * g10.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1432]] /* g10.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1439]] /* g10.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4094;
}

/*
equation index: 4095
type: SIMPLE_ASSIGN
g10.thetaInternal.value = if g10.running.value then Modelica.Math.atan3(g10.udPu, g10.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1466]] /* g10.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* g10.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* g10.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4095;
}

/*
equation index: 4096
type: SIMPLE_ASSIGN
g10.uStatorPu.re = if g10.running.value then (g10.terminal.V.re + (-100.0) * (g10.terminal.i.re * g10.RTfoPu - g10.terminal.i.im * g10.XTfoPu) / g10.SNom) / g10.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* g10.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* g10.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */),"g10.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */),"g10.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4096;
}

/*
equation index: 4097
type: SIMPLE_ASSIGN
g10.sStatorPu.im = if g10.running.value then g10.uStatorPu.im * g10.iStatorPu.re - g10.uStatorPu.re * g10.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1459]] /* g10.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4097;
}

/*
equation index: 4098
type: SIMPLE_ASSIGN
g10.QStatorPu = if g10.running.value then -g10.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1436]] /* g10.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1459]] /* g10.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4098;
}

/*
equation index: 4099
type: SIMPLE_ASSIGN
g10.QStatorPuQNom = if g10.running.value then 100.0 * g10.QStatorPu / g10.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1437]] /* g10.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1436]] /* g10.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1177]] /* g10.QNomAlt PARAM */),"g10.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4099;
}

/*
equation index: 4100
type: SIMPLE_ASSIGN
g10.sStatorPu.re = if g10.running.value then g10.uStatorPu.re * g10.iStatorPu.re + g10.uStatorPu.im * g10.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1460]] /* g10.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4100;
}

/*
equation index: 4101
type: SIMPLE_ASSIGN
g10.QGenPu = if g10.running.value then g10.terminal.V.re * g10.terminal.i.im - g10.terminal.V.im * g10.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1435]] /* g10.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4101;
}

/*
equation index: 4102
type: SIMPLE_ASSIGN
g10.QGen = if g10.running.value then 100.0 * g10.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1434]] /* g10.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1435]] /* g10.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4102;
}

/*
equation index: 4103
type: SIMPLE_ASSIGN
g10.UPu = if g10.running.value then (g10.terminal.V.re ^ 2.0 + g10.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4103};
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_boolean tmp107;
  modelica_real tmp108;
  tmp107 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp107)
  {
    tmp104 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */);
    tmp105 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */);
    tmp106 = (tmp104 * tmp104) + (tmp105 * tmp105);
    if(tmp106 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp106, 0.5);
    }
    tmp108 = sqrt(tmp106);
  }
  else
  {
    tmp108 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1438]] /* g10.UPu variable */) = tmp108;
  threadData->lastEquationSolved = 4103;
}

/*
equation index: 4104
type: SIMPLE_ASSIGN
g10.uPu.re = if g10.running.value then g10.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1468]] /* g10.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4104;
}

/*
equation index: 4105
type: SIMPLE_ASSIGN
trafo_g10_4012.U1Pu = if trafo_g10_4012.running.value then if g10.terminal.V.re == 0.0 and g10.terminal.V.im == 0.0 then 0.0 else (g10.terminal.V.re ^ 2.0 + g10.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4105};
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_boolean tmp112;
  modelica_real tmp113;
  modelica_boolean tmp114;
  modelica_real tmp115;
  tmp114 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[955]] /* trafo_g10_4012.running.value DISCRETE */);
  if(tmp114)
  {
    tmp112 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) == 0.0));
    if(tmp112)
    {
      tmp113 = 0.0;
    }
    else
    {
      tmp109 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */);
      tmp110 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */);
      tmp111 = (tmp109 * tmp109) + (tmp110 * tmp110);
      if(tmp111 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp111, 0.5);
      }
      tmp113 = sqrt(tmp111);
    }
    tmp115 = tmp113;
  }
  else
  {
    tmp115 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3288]] /* trafo_g10_4012.U1Pu variable */) = tmp115;
  threadData->lastEquationSolved = 4105;
}

/*
equation index: 4106
type: SIMPLE_ASSIGN
trafo_g10_4012.Q1Pu = g10.terminal.V.re * g10.terminal.i.im - g10.terminal.V.im * g10.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3286]] /* trafo_g10_4012.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4106;
}

/*
equation index: 4107
type: SIMPLE_ASSIGN
trafo_g10_4012.P1Pu = (-g10.terminal.V.re) * g10.terminal.i.re - g10.terminal.V.im * g10.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3284]] /* trafo_g10_4012.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4107;
}

/*
equation index: 4108
type: SIMPLE_ASSIGN
bus_BG10.UPhase = Modelica.Math.atan3(g10.terminal.V.im, g10.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[956]] /* bus_BG10.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4108;
}

/*
equation index: 4109
type: SIMPLE_ASSIGN
bus_BG10.UPu = if g10.terminal.V.re == 0.0 and g10.terminal.V.im == 0.0 then 0.0 else (g10.terminal.V.re ^ 2.0 + g10.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4109};
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_boolean tmp119;
  modelica_real tmp120;
  tmp119 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) == 0.0));
  if(tmp119)
  {
    tmp120 = 0.0;
  }
  else
  {
    tmp116 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */);
    tmp117 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */);
    tmp118 = (tmp116 * tmp116) + (tmp117 * tmp117);
    if(tmp118 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp118, 0.5);
    }
    tmp120 = sqrt(tmp118);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* bus_BG10.UPu variable */) = tmp120;
  threadData->lastEquationSolved = 4109;
}

/*
equation index: 4110
type: SIMPLE_ASSIGN
bus_BG10.U = bus_BG10.UPu * bus_BG10.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* bus_BG10.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* bus_BG10.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[207]] /* bus_BG10.UNom PARAM */));
  threadData->lastEquationSolved = 4110;
}

/*
equation index: 4111
type: SIMPLE_ASSIGN
trafo_g10_4012.Q2Pu = line_4012_4022.terminal1.V.im * trafo_g10_4012.terminal2.i.re - line_4012_4022.terminal1.V.re * trafo_g10_4012.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3287]] /* trafo_g10_4012.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* trafo_g10_4012.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* trafo_g10_4012.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4111;
}

/*
equation index: 4112
type: SIMPLE_ASSIGN
trafo_g10_4012.P2Pu = line_4012_4022.terminal1.V.re * trafo_g10_4012.terminal2.i.re + line_4012_4022.terminal1.V.im * trafo_g10_4012.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3285]] /* trafo_g10_4012.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* trafo_g10_4012.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* trafo_g10_4012.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4112;
}

/*
equation index: 4113
type: SIMPLE_ASSIGN
trafo_1012_4012.U2Pu = if trafo_1012_4012.running.value then if line_4012_4022.terminal1.V.re == 0.0 and line_4012_4022.terminal1.V.im == 0.0 then 0.0 else (line_4012_4022.terminal1.V.re ^ 2.0 + line_4012_4022.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4113};
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_boolean tmp124;
  modelica_real tmp125;
  modelica_boolean tmp126;
  modelica_real tmp127;
  tmp126 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[868]] /* trafo_1012_4012.running.value DISCRETE */);
  if(tmp126)
  {
    tmp124 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0));
    if(tmp124)
    {
      tmp125 = 0.0;
    }
    else
    {
      tmp121 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */);
      tmp122 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */);
      tmp123 = (tmp121 * tmp121) + (tmp122 * tmp122);
      if(tmp123 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp123, 0.5);
      }
      tmp125 = sqrt(tmp123);
    }
    tmp127 = tmp125;
  }
  else
  {
    tmp127 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2999]] /* trafo_1012_4012.U2Pu variable */) = tmp127;
  threadData->lastEquationSolved = 4113;
}

/*
equation index: 4114
type: SIMPLE_ASSIGN
line_4012_4022.Q1Pu = line_4012_4022.terminal1.V.im * line_4012_4022.terminal1.i.re - line_4012_4022.terminal1.V.re * line_4012_4022.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2506]] /* line_4012_4022.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* line_4012_4022.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* line_4012_4022.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4114;
}

/*
equation index: 4115
type: SIMPLE_ASSIGN
line_4012_4022.P1Pu = line_4012_4022.terminal1.V.re * line_4012_4022.terminal1.i.re + line_4012_4022.terminal1.V.im * line_4012_4022.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2504]] /* line_4012_4022.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* line_4012_4022.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* line_4012_4022.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4115;
}

/*
equation index: 4116
type: SIMPLE_ASSIGN
trafo_1022_4022.U2Pu = if trafo_1022_4022.running.value then if line_4022_4031b.terminal1.V.re == 0.0 and line_4022_4031b.terminal1.V.im == 0.0 then 0.0 else (line_4022_4031b.terminal1.V.re ^ 2.0 + line_4022_4031b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4116};
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_boolean tmp131;
  modelica_real tmp132;
  modelica_boolean tmp133;
  modelica_real tmp134;
  tmp133 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */);
  if(tmp133)
  {
    tmp131 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) == 0.0));
    if(tmp131)
    {
      tmp132 = 0.0;
    }
    else
    {
      tmp128 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */);
      tmp129 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */);
      tmp130 = (tmp128 * tmp128) + (tmp129 * tmp129);
      if(tmp130 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp130, 0.5);
      }
      tmp132 = sqrt(tmp130);
    }
    tmp134 = tmp132;
  }
  else
  {
    tmp134 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3009]] /* trafo_1022_4022.U2Pu variable */) = tmp134;
  threadData->lastEquationSolved = 4116;
}

/*
equation index: 4117
type: SIMPLE_ASSIGN
trafo_g4_1021.U2Pu = if trafo_g4_1021.running.value then if line_1021_1022b.terminal1.V.re == 0.0 and line_1021_1022b.terminal1.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal1.V.re ^ 2.0 + line_1021_1022b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4117};
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_boolean tmp138;
  modelica_real tmp139;
  modelica_boolean tmp140;
  modelica_real tmp141;
  tmp140 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */);
  if(tmp140)
  {
    tmp138 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) == 0.0));
    if(tmp138)
    {
      tmp139 = 0.0;
    }
    else
    {
      tmp135 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */);
      tmp136 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */);
      tmp137 = (tmp135 * tmp135) + (tmp136 * tmp136);
      if(tmp137 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp137, 0.5);
      }
      tmp139 = sqrt(tmp137);
    }
    tmp141 = tmp139;
  }
  else
  {
    tmp141 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3403]] /* trafo_g4_1021.U2Pu variable */) = tmp141;
  threadData->lastEquationSolved = 4117;
}

/*
equation index: 4118
type: SIMPLE_ASSIGN
g04.iStatorPu.re = if g04.running.value then g04.rTfoPu * g04.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4118;
}

/*
equation index: 4119
type: SIMPLE_ASSIGN
g04.iStatorPu.im = if g04.running.value then g04.rTfoPu * g04.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4119;
}

/*
equation index: 4120
type: SIMPLE_ASSIGN
g04.IStatorPu = if g04.running.value then if g04.iStatorPu.re == 0.0 and g04.iStatorPu.im == 0.0 then 0.0 else (g04.iStatorPu.re ^ 2.0 + g04.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4120};
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_boolean tmp145;
  modelica_real tmp146;
  modelica_boolean tmp147;
  modelica_real tmp148;
  tmp147 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp147)
  {
    tmp145 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */) == 0.0));
    if(tmp145)
    {
      tmp146 = 0.0;
    }
    else
    {
      tmp142 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */);
      tmp143 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */);
      tmp144 = (tmp142 * tmp142) + (tmp143 * tmp143);
      if(tmp144 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp144, 0.5);
      }
      tmp146 = sqrt(tmp144);
    }
    tmp148 = tmp146;
  }
  else
  {
    tmp148 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* g04.IStatorPu variable */) = tmp148;
  threadData->lastEquationSolved = 4120;
}

/*
equation index: 4121
type: SIMPLE_ASSIGN
g04.uStatorPu.re = if g04.running.value then (g04.terminal.V.re + (-100.0) * (g04.terminal.i.re * g04.RTfoPu - g04.terminal.i.im * g04.XTfoPu) / g04.SNom) / g04.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* g04.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* g04.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */),"g04.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */),"g04.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4121;
}

/*
equation index: 4122
type: SIMPLE_ASSIGN
g04.uPu.re = if g04.running.value then g04.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1192]] /* g04.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4122;
}

/*
equation index: 4123
type: SIMPLE_ASSIGN
$DER.g04.lambdaDPu = if g04.running.value then g04.RDPPu * g04.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(g04.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* g04.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* g04.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4123;
}

/*
equation index: 4124
type: SIMPLE_ASSIGN
$DER.g04.lambdaQ1Pu = if g04.running.value then g04.RQ1PPu * g04.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(g04.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* g04.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* g04.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4124;
}

/*
equation index: 4125
type: SIMPLE_ASSIGN
$DER.g04.lambdaQ2Pu = if g04.running.value then g04.RQ2PPu * g04.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(g04.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* g04.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* g04.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4125;
}

/*
equation index: 4126
type: SIMPLE_ASSIGN
g04.cePu = if g04.running.value then g04.lambdaqPu * g04.idPu - g04.lambdadPu * g04.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* g04.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* g04.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* g04.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4126;
}

/*
equation index: 4127
type: SIMPLE_ASSIGN
g04.PePu = if g04.running.value then g04.cePu * g04.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* g04.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* g04.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4127;
}

/*
equation index: 4128
type: SIMPLE_ASSIGN
g04.thetaInternal.value = if g04.running.value then Modelica.Math.atan3(g04.udPu, g04.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1190]] /* g04.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* g04.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* g04.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4128;
}

/*
equation index: 4129
type: SIMPLE_ASSIGN
g04.uStatorPu.im = if g04.running.value then (g04.terminal.V.im + (-100.0) * (g04.terminal.i.re * g04.XTfoPu + g04.terminal.i.im * g04.RTfoPu) / g04.SNom) / g04.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* g04.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* g04.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */),"g04.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */),"g04.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4129;
}

/*
equation index: 4130
type: SIMPLE_ASSIGN
g04.sStatorPu.im = if g04.running.value then g04.uStatorPu.im * g04.iStatorPu.re - g04.uStatorPu.re * g04.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1183]] /* g04.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4130;
}

/*
equation index: 4131
type: SIMPLE_ASSIGN
g04.QStatorPu = if g04.running.value then -g04.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* g04.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1183]] /* g04.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4131;
}

/*
equation index: 4132
type: SIMPLE_ASSIGN
g04.QStatorPuQNom = if g04.running.value then 100.0 * g04.QStatorPu / g04.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* g04.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* g04.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* g04.QNomAlt PARAM */),"g04.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4132;
}

/*
equation index: 4133
type: SIMPLE_ASSIGN
g04.sStatorPu.re = if g04.running.value then g04.uStatorPu.re * g04.iStatorPu.re + g04.uStatorPu.im * g04.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1184]] /* g04.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4133;
}

/*
equation index: 4134
type: SIMPLE_ASSIGN
g04.QGenPu = if g04.running.value then g04.terminal.V.re * g04.terminal.i.im - g04.terminal.V.im * g04.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* g04.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4134;
}

/*
equation index: 4135
type: SIMPLE_ASSIGN
g04.QGen = if g04.running.value then 100.0 * g04.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* g04.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* g04.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4135;
}

/*
equation index: 4136
type: SIMPLE_ASSIGN
g04.UPu = if g04.running.value then (g04.terminal.V.re ^ 2.0 + g04.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4136};
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_boolean tmp152;
  modelica_real tmp153;
  tmp152 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp152)
  {
    tmp149 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */);
    tmp150 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */);
    tmp151 = (tmp149 * tmp149) + (tmp150 * tmp150);
    if(tmp151 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp151, 0.5);
    }
    tmp153 = sqrt(tmp151);
  }
  else
  {
    tmp153 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* g04.UPu variable */) = tmp153;
  threadData->lastEquationSolved = 4136;
}

/*
equation index: 4137
type: SIMPLE_ASSIGN
g04.uPu.im = if g04.running.value then g04.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1191]] /* g04.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4137;
}

/*
equation index: 4138
type: SIMPLE_ASSIGN
trafo_g4_1021.U1Pu = if trafo_g4_1021.running.value then if g04.terminal.V.re == 0.0 and g04.terminal.V.im == 0.0 then 0.0 else (g04.terminal.V.re ^ 2.0 + g04.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4138};
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_boolean tmp157;
  modelica_real tmp158;
  modelica_boolean tmp159;
  modelica_real tmp160;
  tmp159 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[997]] /* trafo_g4_1021.running.value DISCRETE */);
  if(tmp159)
  {
    tmp157 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) == 0.0));
    if(tmp157)
    {
      tmp158 = 0.0;
    }
    else
    {
      tmp154 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */);
      tmp155 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */);
      tmp156 = (tmp154 * tmp154) + (tmp155 * tmp155);
      if(tmp156 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp156, 0.5);
      }
      tmp158 = sqrt(tmp156);
    }
    tmp160 = tmp158;
  }
  else
  {
    tmp160 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3402]] /* trafo_g4_1021.U1Pu variable */) = tmp160;
  threadData->lastEquationSolved = 4138;
}

/*
equation index: 4139
type: SIMPLE_ASSIGN
trafo_g4_1021.Q1Pu = g04.terminal.V.re * g04.terminal.i.im - g04.terminal.V.im * g04.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3400]] /* trafo_g4_1021.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4139;
}

/*
equation index: 4140
type: SIMPLE_ASSIGN
trafo_g4_1021.P1Pu = (-g04.terminal.V.re) * g04.terminal.i.re - g04.terminal.V.im * g04.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3398]] /* trafo_g4_1021.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4140;
}

/*
equation index: 4141
type: SIMPLE_ASSIGN
bus_BG04.UPhase = Modelica.Math.atan3(g04.terminal.V.im, g04.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* bus_BG04.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4141;
}

/*
equation index: 4142
type: SIMPLE_ASSIGN
bus_BG04.UPu = if g04.terminal.V.re == 0.0 and g04.terminal.V.im == 0.0 then 0.0 else (g04.terminal.V.re ^ 2.0 + g04.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4142};
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_boolean tmp164;
  modelica_real tmp165;
  tmp164 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) == 0.0));
  if(tmp164)
  {
    tmp165 = 0.0;
  }
  else
  {
    tmp161 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */);
    tmp162 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */);
    tmp163 = (tmp161 * tmp161) + (tmp162 * tmp162);
    if(tmp163 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp163, 0.5);
    }
    tmp165 = sqrt(tmp163);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* bus_BG04.UPu variable */) = tmp165;
  threadData->lastEquationSolved = 4142;
}

/*
equation index: 4143
type: SIMPLE_ASSIGN
bus_BG04.U = bus_BG04.UPu * bus_BG04.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* bus_BG04.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* bus_BG04.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* bus_BG04.UNom PARAM */));
  threadData->lastEquationSolved = 4143;
}

/*
equation index: 4144
type: SIMPLE_ASSIGN
trafo_g4_1021.Q2Pu = line_1021_1022b.terminal1.V.im * trafo_g4_1021.terminal2.i.re - line_1021_1022b.terminal1.V.re * trafo_g4_1021.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3401]] /* trafo_g4_1021.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3405]] /* trafo_g4_1021.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3404]] /* trafo_g4_1021.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4144;
}

/*
equation index: 4145
type: SIMPLE_ASSIGN
trafo_g4_1021.P2Pu = line_1021_1022b.terminal1.V.re * trafo_g4_1021.terminal2.i.re + line_1021_1022b.terminal1.V.im * trafo_g4_1021.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3399]] /* trafo_g4_1021.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3405]] /* trafo_g4_1021.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3404]] /* trafo_g4_1021.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4145;
}

/*
equation index: 4146
type: SIMPLE_ASSIGN
trafo_g5_1022.U2Pu = if trafo_g5_1022.running.value then if line_1021_1022b.terminal2.V.re == 0.0 and line_1021_1022b.terminal2.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal2.V.re ^ 2.0 + line_1021_1022b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4146};
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_boolean tmp169;
  modelica_real tmp170;
  modelica_boolean tmp171;
  modelica_real tmp172;
  tmp171 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */);
  if(tmp171)
  {
    tmp169 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0));
    if(tmp169)
    {
      tmp170 = 0.0;
    }
    else
    {
      tmp166 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */);
      tmp167 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */);
      tmp168 = (tmp166 * tmp166) + (tmp167 * tmp167);
      if(tmp168 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp168, 0.5);
      }
      tmp170 = sqrt(tmp168);
    }
    tmp172 = tmp170;
  }
  else
  {
    tmp172 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3411]] /* trafo_g5_1022.U2Pu variable */) = tmp172;
  threadData->lastEquationSolved = 4146;
}

/*
equation index: 4147
type: SIMPLE_ASSIGN
g05.iStatorPu.im = if g05.running.value then g05.rTfoPu * g05.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4147;
}

/*
equation index: 4148
type: SIMPLE_ASSIGN
g05.iStatorPu.re = if g05.running.value then g05.rTfoPu * g05.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4148;
}

/*
equation index: 4149
type: SIMPLE_ASSIGN
g05.IStatorPu = if g05.running.value then if g05.iStatorPu.re == 0.0 and g05.iStatorPu.im == 0.0 then 0.0 else (g05.iStatorPu.re ^ 2.0 + g05.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4149};
  modelica_real tmp173;
  modelica_real tmp174;
  modelica_real tmp175;
  modelica_boolean tmp176;
  modelica_real tmp177;
  modelica_boolean tmp178;
  modelica_real tmp179;
  tmp178 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp178)
  {
    tmp176 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */) == 0.0));
    if(tmp176)
    {
      tmp177 = 0.0;
    }
    else
    {
      tmp173 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */);
      tmp174 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */);
      tmp175 = (tmp173 * tmp173) + (tmp174 * tmp174);
      if(tmp175 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp175, 0.5);
      }
      tmp177 = sqrt(tmp175);
    }
    tmp179 = tmp177;
  }
  else
  {
    tmp179 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* g05.IStatorPu variable */) = tmp179;
  threadData->lastEquationSolved = 4149;
}

/*
equation index: 4150
type: SIMPLE_ASSIGN
$DER.g05.lambdaQ2Pu = if g05.running.value then g05.RQ2PPu * g05.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* der(g05.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* g05.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* g05.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4150;
}

/*
equation index: 4151
type: SIMPLE_ASSIGN
$DER.g05.lambdaQ1Pu = if g05.running.value then g05.RQ1PPu * g05.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* der(g05.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[672]] /* g05.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* g05.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4151;
}

/*
equation index: 4152
type: SIMPLE_ASSIGN
$DER.g05.lambdaDPu = if g05.running.value then g05.RDPPu * g05.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* der(g05.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[671]] /* g05.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* g05.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4152;
}

/*
equation index: 4153
type: SIMPLE_ASSIGN
g05.uStatorPu.im = if g05.running.value then (g05.terminal.V.im + (-100.0) * (g05.terminal.i.re * g05.XTfoPu + g05.terminal.i.im * g05.RTfoPu) / g05.SNom) / g05.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* g05.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* g05.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */),"g05.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */),"g05.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4153;
}

/*
equation index: 4154
type: SIMPLE_ASSIGN
g05.uPu.im = if g05.running.value then g05.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* g05.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4154;
}

/*
equation index: 4155
type: SIMPLE_ASSIGN
g05.cePu = if g05.running.value then g05.lambdaqPu * g05.idPu - g05.lambdadPu * g05.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* g05.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* g05.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* g05.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4155;
}

/*
equation index: 4156
type: SIMPLE_ASSIGN
g05.PePu = if g05.running.value then g05.cePu * g05.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1202]] /* g05.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* g05.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4156;
}

/*
equation index: 4157
type: SIMPLE_ASSIGN
g05.thetaInternal.value = if g05.running.value then Modelica.Math.atan3(g05.udPu, g05.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* g05.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* g05.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* g05.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4157;
}

/*
equation index: 4158
type: SIMPLE_ASSIGN
g05.uStatorPu.re = if g05.running.value then (g05.terminal.V.re + (-100.0) * (g05.terminal.i.re * g05.RTfoPu - g05.terminal.i.im * g05.XTfoPu) / g05.SNom) / g05.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* g05.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* g05.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */),"g05.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */),"g05.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4158;
}

/*
equation index: 4159
type: SIMPLE_ASSIGN
g05.sStatorPu.im = if g05.running.value then g05.uStatorPu.im * g05.iStatorPu.re - g05.uStatorPu.re * g05.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* g05.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4159;
}

/*
equation index: 4160
type: SIMPLE_ASSIGN
g05.QStatorPu = if g05.running.value then -g05.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* g05.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* g05.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4160;
}

/*
equation index: 4161
type: SIMPLE_ASSIGN
g05.QStatorPuQNom = if g05.running.value then 100.0 * g05.QStatorPu / g05.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* g05.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* g05.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* g05.QNomAlt PARAM */),"g05.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4161;
}

/*
equation index: 4162
type: SIMPLE_ASSIGN
g05.sStatorPu.re = if g05.running.value then g05.uStatorPu.re * g05.iStatorPu.re + g05.uStatorPu.im * g05.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* g05.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4162;
}

/*
equation index: 4163
type: SIMPLE_ASSIGN
g05.QGenPu = if g05.running.value then g05.terminal.V.re * g05.terminal.i.im - g05.terminal.V.im * g05.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* g05.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4163;
}

/*
equation index: 4164
type: SIMPLE_ASSIGN
g05.QGen = if g05.running.value then 100.0 * g05.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* g05.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* g05.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4164;
}

/*
equation index: 4165
type: SIMPLE_ASSIGN
g05.UPu = if g05.running.value then (g05.terminal.V.re ^ 2.0 + g05.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4165};
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_boolean tmp183;
  modelica_real tmp184;
  tmp183 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp183)
  {
    tmp180 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */);
    tmp181 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */);
    tmp182 = (tmp180 * tmp180) + (tmp181 * tmp181);
    if(tmp182 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp182, 0.5);
    }
    tmp184 = sqrt(tmp182);
  }
  else
  {
    tmp184 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* g05.UPu variable */) = tmp184;
  threadData->lastEquationSolved = 4165;
}

/*
equation index: 4166
type: SIMPLE_ASSIGN
g05.uPu.re = if g05.running.value then g05.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* g05.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4166;
}

/*
equation index: 4167
type: SIMPLE_ASSIGN
trafo_g5_1022.U1Pu = if trafo_g5_1022.running.value then if g05.terminal.V.re == 0.0 and g05.terminal.V.im == 0.0 then 0.0 else (g05.terminal.V.re ^ 2.0 + g05.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4167};
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_real tmp187;
  modelica_boolean tmp188;
  modelica_real tmp189;
  modelica_boolean tmp190;
  modelica_real tmp191;
  tmp190 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1000]] /* trafo_g5_1022.running.value DISCRETE */);
  if(tmp190)
  {
    tmp188 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) == 0.0));
    if(tmp188)
    {
      tmp189 = 0.0;
    }
    else
    {
      tmp185 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */);
      tmp186 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */);
      tmp187 = (tmp185 * tmp185) + (tmp186 * tmp186);
      if(tmp187 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp187, 0.5);
      }
      tmp189 = sqrt(tmp187);
    }
    tmp191 = tmp189;
  }
  else
  {
    tmp191 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3410]] /* trafo_g5_1022.U1Pu variable */) = tmp191;
  threadData->lastEquationSolved = 4167;
}

/*
equation index: 4168
type: SIMPLE_ASSIGN
trafo_g5_1022.Q1Pu = g05.terminal.V.re * g05.terminal.i.im - g05.terminal.V.im * g05.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3408]] /* trafo_g5_1022.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4168;
}

/*
equation index: 4169
type: SIMPLE_ASSIGN
trafo_g5_1022.P1Pu = (-g05.terminal.V.re) * g05.terminal.i.re - g05.terminal.V.im * g05.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3406]] /* trafo_g5_1022.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4169;
}

/*
equation index: 4170
type: SIMPLE_ASSIGN
bus_BG05.UPhase = Modelica.Math.atan3(g05.terminal.V.im, g05.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* bus_BG05.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4170;
}

/*
equation index: 4171
type: SIMPLE_ASSIGN
bus_BG05.UPu = if g05.terminal.V.re == 0.0 and g05.terminal.V.im == 0.0 then 0.0 else (g05.terminal.V.re ^ 2.0 + g05.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4171};
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_boolean tmp195;
  modelica_real tmp196;
  tmp195 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) == 0.0));
  if(tmp195)
  {
    tmp196 = 0.0;
  }
  else
  {
    tmp192 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */);
    tmp193 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */);
    tmp194 = (tmp192 * tmp192) + (tmp193 * tmp193);
    if(tmp194 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp194, 0.5);
    }
    tmp196 = sqrt(tmp194);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* bus_BG05.UPu variable */) = tmp196;
  threadData->lastEquationSolved = 4171;
}

/*
equation index: 4172
type: SIMPLE_ASSIGN
bus_BG05.U = bus_BG05.UPu * bus_BG05.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* bus_BG05.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* bus_BG05.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* bus_BG05.UNom PARAM */));
  threadData->lastEquationSolved = 4172;
}

/*
equation index: 4173
type: SIMPLE_ASSIGN
trafo_g5_1022.Q2Pu = line_1021_1022b.terminal2.V.im * trafo_g5_1022.terminal2.i.re - line_1021_1022b.terminal2.V.re * trafo_g5_1022.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3409]] /* trafo_g5_1022.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3413]] /* trafo_g5_1022.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3412]] /* trafo_g5_1022.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4173;
}

/*
equation index: 4174
type: SIMPLE_ASSIGN
trafo_g5_1022.P2Pu = line_1021_1022b.terminal2.V.re * trafo_g5_1022.terminal2.i.re + line_1021_1022b.terminal2.V.im * trafo_g5_1022.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3407]] /* trafo_g5_1022.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3413]] /* trafo_g5_1022.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3412]] /* trafo_g5_1022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4174;
}

/*
equation index: 4175
type: SIMPLE_ASSIGN
trafo_1022_4022.U1Pu = if trafo_1022_4022.running.value then if line_1021_1022b.terminal2.V.re == 0.0 and line_1021_1022b.terminal2.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal2.V.re ^ 2.0 + line_1021_1022b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4175};
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_boolean tmp200;
  modelica_real tmp201;
  modelica_boolean tmp202;
  modelica_real tmp203;
  tmp202 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[871]] /* trafo_1022_4022.running.value DISCRETE */);
  if(tmp202)
  {
    tmp200 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0));
    if(tmp200)
    {
      tmp201 = 0.0;
    }
    else
    {
      tmp197 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */);
      tmp198 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */);
      tmp199 = (tmp197 * tmp197) + (tmp198 * tmp198);
      if(tmp199 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, 0.5);
      }
      tmp201 = sqrt(tmp199);
    }
    tmp203 = tmp201;
  }
  else
  {
    tmp203 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3008]] /* trafo_1022_4022.U1Pu variable */) = tmp203;
  threadData->lastEquationSolved = 4175;
}

/*
equation index: 4176
type: SIMPLE_ASSIGN
trafo_22_1022.U2Pu = if trafo_22_1022.running.value then if line_1021_1022b.terminal2.V.re == 0.0 and line_1021_1022b.terminal2.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal2.V.re ^ 2.0 + line_1021_1022b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4176};
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_boolean tmp207;
  modelica_real tmp208;
  modelica_boolean tmp209;
  modelica_real tmp210;
  tmp209 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */);
  if(tmp209)
  {
    tmp207 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0));
    if(tmp207)
    {
      tmp208 = 0.0;
    }
    else
    {
      tmp204 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */);
      tmp205 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */);
      tmp206 = (tmp204 * tmp204) + (tmp205 * tmp205);
      if(tmp206 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp206, 0.5);
      }
      tmp208 = sqrt(tmp206);
    }
    tmp210 = tmp208;
  }
  else
  {
    tmp210 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3109]] /* trafo_22_1022.U2Pu variable */) = tmp210;
  threadData->lastEquationSolved = 4176;
}

/*
equation index: 4177
type: SIMPLE_ASSIGN
trafo_22_1022.U1Pu = if trafo_22_1022.running.value then if load_22.terminal.V.re == 0.0 and load_22.terminal.V.im == 0.0 then 0.0 else (load_22.terminal.V.re ^ 2.0 + load_22.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4177};
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_real tmp213;
  modelica_boolean tmp214;
  modelica_real tmp215;
  modelica_boolean tmp216;
  modelica_real tmp217;
  tmp216 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[901]] /* trafo_22_1022.running.value DISCRETE */);
  if(tmp216)
  {
    tmp214 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) == 0.0));
    if(tmp214)
    {
      tmp215 = 0.0;
    }
    else
    {
      tmp211 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */);
      tmp212 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */);
      tmp213 = (tmp211 * tmp211) + (tmp212 * tmp212);
      if(tmp213 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp213, 0.5);
      }
      tmp215 = sqrt(tmp213);
    }
    tmp217 = tmp215;
  }
  else
  {
    tmp217 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3108]] /* trafo_22_1022.U1Pu variable */) = tmp217;
  threadData->lastEquationSolved = 4177;
}

/*
equation index: 4178
type: SIMPLE_ASSIGN
trafo_22_1022.Q1Pu = load_22.terminal.V.im * trafo_22_1022.terminal1.i.re - load_22.terminal.V.re * trafo_22_1022.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3106]] /* trafo_22_1022.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4178;
}

/*
equation index: 4179
type: SIMPLE_ASSIGN
trafo_22_1022.P1Pu = load_22.terminal.V.re * trafo_22_1022.terminal1.i.re + load_22.terminal.V.im * trafo_22_1022.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3104]] /* trafo_22_1022.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3111]] /* trafo_22_1022.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3110]] /* trafo_22_1022.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4179;
}

/*
equation index: 4180
type: SIMPLE_ASSIGN
load_22.UPu.value = if load_22.running.value then (load_22.terminal.V.re ^ 2.0 + load_22.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4180};
  modelica_real tmp218;
  modelica_real tmp219;
  modelica_real tmp220;
  modelica_boolean tmp221;
  modelica_real tmp222;
  tmp221 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[789]] /* load_22.running.value DISCRETE */);
  if(tmp221)
  {
    tmp218 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */);
    tmp219 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */);
    tmp220 = (tmp218 * tmp218) + (tmp219 * tmp219);
    if(tmp220 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp220, 0.5);
    }
    tmp222 = sqrt(tmp220);
  }
  else
  {
    tmp222 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2830]] /* load_22.UPu.value variable */) = tmp222;
  threadData->lastEquationSolved = 4180;
}

/*
equation index: 4181
type: SIMPLE_ASSIGN
bus_B22.UPhase = Modelica.Math.atan3(load_22.terminal.V.im, load_22.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* bus_B22.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4181;
}

/*
equation index: 4182
type: SIMPLE_ASSIGN
bus_B22.UPu = if load_22.terminal.V.re == 0.0 and load_22.terminal.V.im == 0.0 then 0.0 else (load_22.terminal.V.re ^ 2.0 + load_22.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4182};
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_real tmp225;
  modelica_boolean tmp226;
  modelica_real tmp227;
  tmp226 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) == 0.0));
  if(tmp226)
  {
    tmp227 = 0.0;
  }
  else
  {
    tmp223 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */);
    tmp224 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */);
    tmp225 = (tmp223 * tmp223) + (tmp224 * tmp224);
    if(tmp225 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp225, 0.5);
    }
    tmp227 = sqrt(tmp225);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* bus_B22.UPu variable */) = tmp227;
  threadData->lastEquationSolved = 4182;
}

/*
equation index: 4183
type: SIMPLE_ASSIGN
bus_B22.U = bus_B22.UPu * bus_B22.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* bus_B22.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* bus_B22.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* bus_B22.UNom PARAM */));
  threadData->lastEquationSolved = 4183;
}

/*
equation index: 4184
type: SIMPLE_ASSIGN
trafo_22_1022.Q2Pu = line_1021_1022b.terminal2.V.im * trafo_22_1022.terminal2.i.re - line_1021_1022b.terminal2.V.re * trafo_22_1022.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3107]] /* trafo_22_1022.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3113]] /* trafo_22_1022.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3112]] /* trafo_22_1022.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4184;
}

/*
equation index: 4185
type: SIMPLE_ASSIGN
trafo_22_1022.P2Pu = line_1021_1022b.terminal2.V.re * trafo_22_1022.terminal2.i.re + line_1021_1022b.terminal2.V.im * trafo_22_1022.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3105]] /* trafo_22_1022.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3113]] /* trafo_22_1022.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3112]] /* trafo_22_1022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4185;
}

/*
equation index: 4186
type: SIMPLE_ASSIGN
line_1021_1022b.Q1Pu = line_1021_1022b.terminal1.V.im * line_1021_1022b.terminal1.i.re - line_1021_1022b.terminal1.V.re * line_1021_1022b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2358]] /* line_1021_1022b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2363]] /* line_1021_1022b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2362]] /* line_1021_1022b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4186;
}

/*
equation index: 4187
type: SIMPLE_ASSIGN
line_1021_1022b.P1Pu = line_1021_1022b.terminal1.V.re * line_1021_1022b.terminal1.i.re + line_1021_1022b.terminal1.V.im * line_1021_1022b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2356]] /* line_1021_1022b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2363]] /* line_1021_1022b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2362]] /* line_1021_1022b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4187;
}

/*
equation index: 4188
type: SIMPLE_ASSIGN
line_1021_1022b.Q2Pu = line_1021_1022b.terminal2.V.im * line_1021_1022b.terminal2.i.re - line_1021_1022b.terminal2.V.re * line_1021_1022b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2359]] /* line_1021_1022b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* line_1021_1022b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2366]] /* line_1021_1022b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4188;
}

/*
equation index: 4189
type: SIMPLE_ASSIGN
line_1021_1022b.P2Pu = line_1021_1022b.terminal2.V.re * line_1021_1022b.terminal2.i.re + line_1021_1022b.terminal2.V.im * line_1021_1022b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2357]] /* line_1021_1022b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2367]] /* line_1021_1022b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2366]] /* line_1021_1022b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4189;
}

/*
equation index: 4190
type: SIMPLE_ASSIGN
line_1021_1022a.Q1Pu = line_1021_1022b.terminal1.V.im * line_1021_1022a.terminal1.i.re - line_1021_1022b.terminal1.V.re * line_1021_1022a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2350]] /* line_1021_1022a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* line_1021_1022a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* line_1021_1022a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4190;
}

/*
equation index: 4191
type: SIMPLE_ASSIGN
line_1021_1022a.P1Pu = line_1021_1022b.terminal1.V.re * line_1021_1022a.terminal1.i.re + line_1021_1022b.terminal1.V.im * line_1021_1022a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2348]] /* line_1021_1022a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2353]] /* line_1021_1022a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* line_1021_1022a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4191;
}

/*
equation index: 4192
type: SIMPLE_ASSIGN
line_1021_1022a.Q2Pu = line_1021_1022b.terminal2.V.im * line_1021_1022a.terminal2.i.re - line_1021_1022b.terminal2.V.re * line_1021_1022a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2351]] /* line_1021_1022a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2355]] /* line_1021_1022a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* line_1021_1022a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4192;
}

/*
equation index: 4193
type: SIMPLE_ASSIGN
line_1021_1022a.P2Pu = line_1021_1022b.terminal2.V.re * line_1021_1022a.terminal2.i.re + line_1021_1022b.terminal2.V.im * line_1021_1022a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2349]] /* line_1021_1022a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2355]] /* line_1021_1022a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* line_1021_1022a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4193;
}

/*
equation index: 4194
type: SIMPLE_ASSIGN
trafo_1022_4022.Q1Pu = line_1021_1022b.terminal2.V.im * trafo_1022_4022.terminal1.i.re - line_1021_1022b.terminal2.V.re * trafo_1022_4022.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3006]] /* trafo_1022_4022.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4194;
}

/*
equation index: 4195
type: SIMPLE_ASSIGN
trafo_1022_4022.P1Pu = line_1021_1022b.terminal2.V.re * trafo_1022_4022.terminal1.i.re + line_1021_1022b.terminal2.V.im * trafo_1022_4022.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3004]] /* trafo_1022_4022.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3011]] /* trafo_1022_4022.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3010]] /* trafo_1022_4022.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4195;
}

/*
equation index: 4196
type: SIMPLE_ASSIGN
bus_1022.UPu = shunt_1022.UPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* bus_1022.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2931]] /* shunt_1022.UPu variable */);
  threadData->lastEquationSolved = 4196;
}

/*
equation index: 4197
type: SIMPLE_ASSIGN
bus_1022.U = bus_1022.UPu * bus_1022.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* bus_1022.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* bus_1022.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* bus_1022.UNom PARAM */));
  threadData->lastEquationSolved = 4197;
}

/*
equation index: 4198
type: SIMPLE_ASSIGN
bus_1021.UPhase = Modelica.Math.atan3(line_1021_1022b.terminal1.V.im, line_1021_1022b.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* bus_1021.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4198;
}

/*
equation index: 4199
type: SIMPLE_ASSIGN
bus_1021.UPu = if line_1021_1022b.terminal1.V.re == 0.0 and line_1021_1022b.terminal1.V.im == 0.0 then 0.0 else (line_1021_1022b.terminal1.V.re ^ 2.0 + line_1021_1022b.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4199};
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_real tmp230;
  modelica_boolean tmp231;
  modelica_real tmp232;
  tmp231 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) == 0.0));
  if(tmp231)
  {
    tmp232 = 0.0;
  }
  else
  {
    tmp228 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */);
    tmp229 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */);
    tmp230 = (tmp228 * tmp228) + (tmp229 * tmp229);
    if(tmp230 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp230, 0.5);
    }
    tmp232 = sqrt(tmp230);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* bus_1021.UPu variable */) = tmp232;
  threadData->lastEquationSolved = 4199;
}

/*
equation index: 4200
type: SIMPLE_ASSIGN
bus_1021.U = bus_1021.UPu * bus_1021.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* bus_1021.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* bus_1021.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* bus_1021.UNom PARAM */));
  threadData->lastEquationSolved = 4200;
}

/*
equation index: 4201
type: SIMPLE_ASSIGN
bus_1022.UPhase = Modelica.Math.atan3(line_1021_1022b.terminal2.V.im, line_1021_1022b.terminal2.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* bus_1022.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4201;
}

/*
equation index: 4202
type: SIMPLE_ASSIGN
trafo_1022_4022.Q2Pu = line_4022_4031b.terminal1.V.im * trafo_1022_4022.terminal2.i.re - line_4022_4031b.terminal1.V.re * trafo_1022_4022.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3007]] /* trafo_1022_4022.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3013]] /* trafo_1022_4022.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* trafo_1022_4022.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4202;
}

/*
equation index: 4203
type: SIMPLE_ASSIGN
trafo_1022_4022.P2Pu = line_4022_4031b.terminal1.V.re * trafo_1022_4022.terminal2.i.re + line_4022_4031b.terminal1.V.im * trafo_1022_4022.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3005]] /* trafo_1022_4022.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3013]] /* trafo_1022_4022.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* trafo_1022_4022.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4203;
}

/*
equation index: 4204
type: SIMPLE_ASSIGN
line_4022_4031b.Q1Pu = line_4022_4031b.terminal1.V.im * line_4022_4031b.terminal1.i.re - line_4022_4031b.terminal1.V.re * line_4022_4031b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2550]] /* line_4022_4031b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* line_4022_4031b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* line_4022_4031b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4204;
}

/*
equation index: 4205
type: SIMPLE_ASSIGN
line_4022_4031b.P1Pu = line_4022_4031b.terminal1.V.re * line_4022_4031b.terminal1.i.re + line_4022_4031b.terminal1.V.im * line_4022_4031b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2548]] /* line_4022_4031b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2555]] /* line_4022_4031b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2554]] /* line_4022_4031b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4205;
}

/*
equation index: 4206
type: SIMPLE_ASSIGN
trafo_g12_4031.U2Pu = if trafo_g12_4031.running.value then if line_4031_4041b.terminal1.V.re == 0.0 and line_4031_4041b.terminal1.V.im == 0.0 then 0.0 else (line_4031_4041b.terminal1.V.re ^ 2.0 + line_4031_4041b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4206};
  modelica_real tmp233;
  modelica_real tmp234;
  modelica_real tmp235;
  modelica_boolean tmp236;
  modelica_real tmp237;
  modelica_boolean tmp238;
  modelica_real tmp239;
  tmp238 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[961]] /* trafo_g12_4031.running.value DISCRETE */);
  if(tmp238)
  {
    tmp236 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) == 0.0));
    if(tmp236)
    {
      tmp237 = 0.0;
    }
    else
    {
      tmp233 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */);
      tmp234 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */);
      tmp235 = (tmp233 * tmp233) + (tmp234 * tmp234);
      if(tmp235 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp235, 0.5);
      }
      tmp237 = sqrt(tmp235);
    }
    tmp239 = tmp237;
  }
  else
  {
    tmp239 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3305]] /* trafo_g12_4031.U2Pu variable */) = tmp239;
  threadData->lastEquationSolved = 4206;
}

/*
equation index: 4207
type: SIMPLE_ASSIGN
trafo_g12_4031.Q2Pu = line_4031_4041b.terminal1.V.im * trafo_g12_4031.terminal2.i.re - line_4031_4041b.terminal1.V.re * trafo_g12_4031.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3303]] /* trafo_g12_4031.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* trafo_g12_4031.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* trafo_g12_4031.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4207;
}

/*
equation index: 4208
type: SIMPLE_ASSIGN
trafo_g12_4031.P2Pu = line_4031_4041b.terminal1.V.re * trafo_g12_4031.terminal2.i.re + line_4031_4041b.terminal1.V.im * trafo_g12_4031.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3301]] /* trafo_g12_4031.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3307]] /* trafo_g12_4031.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* trafo_g12_4031.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4208;
}

/*
equation index: 4209
type: SIMPLE_ASSIGN
trafo_2031_4031.U2Pu = if trafo_2031_4031.running.value then if line_4031_4041b.terminal1.V.re == 0.0 and line_4031_4041b.terminal1.V.im == 0.0 then 0.0 else (line_4031_4041b.terminal1.V.re ^ 2.0 + line_4031_4041b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4209};
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_boolean tmp243;
  modelica_real tmp244;
  modelica_boolean tmp245;
  modelica_real tmp246;
  tmp245 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */);
  if(tmp245)
  {
    tmp243 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) == 0.0));
    if(tmp243)
    {
      tmp244 = 0.0;
    }
    else
    {
      tmp240 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */);
      tmp241 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */);
      tmp242 = (tmp240 * tmp240) + (tmp241 * tmp241);
      if(tmp242 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp242, 0.5);
      }
      tmp244 = sqrt(tmp242);
    }
    tmp246 = tmp244;
  }
  else
  {
    tmp246 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3099]] /* trafo_2031_4031.U2Pu variable */) = tmp246;
  threadData->lastEquationSolved = 4209;
}

/*
equation index: 4210
type: SIMPLE_ASSIGN
trafo_2031_4031.U1Pu = if trafo_2031_4031.running.value then if line_2031_2032b.terminal1.V.re == 0.0 and line_2031_2032b.terminal1.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal1.V.re ^ 2.0 + line_2031_2032b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4210};
  modelica_real tmp247;
  modelica_real tmp248;
  modelica_real tmp249;
  modelica_boolean tmp250;
  modelica_real tmp251;
  modelica_boolean tmp252;
  modelica_real tmp253;
  tmp252 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[898]] /* trafo_2031_4031.running.value DISCRETE */);
  if(tmp252)
  {
    tmp250 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) == 0.0));
    if(tmp250)
    {
      tmp251 = 0.0;
    }
    else
    {
      tmp247 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */);
      tmp248 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */);
      tmp249 = (tmp247 * tmp247) + (tmp248 * tmp248);
      if(tmp249 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp249, 0.5);
      }
      tmp251 = sqrt(tmp249);
    }
    tmp253 = tmp251;
  }
  else
  {
    tmp253 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3098]] /* trafo_2031_4031.U1Pu variable */) = tmp253;
  threadData->lastEquationSolved = 4210;
}

/*
equation index: 4211
type: SIMPLE_ASSIGN
trafo_2031_4031.Q1Pu = line_2031_2032b.terminal1.V.im * trafo_2031_4031.terminal1.i.re - line_2031_2032b.terminal1.V.re * trafo_2031_4031.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3096]] /* trafo_2031_4031.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4211;
}

/*
equation index: 4212
type: SIMPLE_ASSIGN
trafo_2031_4031.P1Pu = line_2031_2032b.terminal1.V.re * trafo_2031_4031.terminal1.i.re + line_2031_2032b.terminal1.V.im * trafo_2031_4031.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3094]] /* trafo_2031_4031.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* trafo_2031_4031.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* trafo_2031_4031.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4212;
}

/*
equation index: 4213
type: SIMPLE_ASSIGN
trafo_31_2031.U2Pu = if trafo_31_2031.running.value then if line_2031_2032b.terminal1.V.re == 0.0 and line_2031_2032b.terminal1.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal1.V.re ^ 2.0 + line_2031_2032b.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4213};
  modelica_real tmp254;
  modelica_real tmp255;
  modelica_real tmp256;
  modelica_boolean tmp257;
  modelica_real tmp258;
  modelica_boolean tmp259;
  modelica_real tmp260;
  tmp259 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */);
  if(tmp259)
  {
    tmp257 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) == 0.0));
    if(tmp257)
    {
      tmp258 = 0.0;
    }
    else
    {
      tmp254 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */);
      tmp255 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */);
      tmp256 = (tmp254 * tmp254) + (tmp255 * tmp255);
      if(tmp256 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp256, 0.5);
      }
      tmp258 = sqrt(tmp256);
    }
    tmp260 = tmp258;
  }
  else
  {
    tmp260 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3129]] /* trafo_31_2031.U2Pu variable */) = tmp260;
  threadData->lastEquationSolved = 4213;
}

/*
equation index: 4214
type: SIMPLE_ASSIGN
trafo_31_2031.U1Pu = if trafo_31_2031.running.value then if load_31.terminal.V.re == 0.0 and load_31.terminal.V.im == 0.0 then 0.0 else (load_31.terminal.V.re ^ 2.0 + load_31.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4214};
  modelica_real tmp261;
  modelica_real tmp262;
  modelica_real tmp263;
  modelica_boolean tmp264;
  modelica_real tmp265;
  modelica_boolean tmp266;
  modelica_real tmp267;
  tmp266 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[907]] /* trafo_31_2031.running.value DISCRETE */);
  if(tmp266)
  {
    tmp264 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) == 0.0));
    if(tmp264)
    {
      tmp265 = 0.0;
    }
    else
    {
      tmp261 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */);
      tmp262 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */);
      tmp263 = (tmp261 * tmp261) + (tmp262 * tmp262);
      if(tmp263 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp263, 0.5);
      }
      tmp265 = sqrt(tmp263);
    }
    tmp267 = tmp265;
  }
  else
  {
    tmp267 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3128]] /* trafo_31_2031.U1Pu variable */) = tmp267;
  threadData->lastEquationSolved = 4214;
}

/*
equation index: 4215
type: SIMPLE_ASSIGN
trafo_31_2031.Q1Pu = load_31.terminal.V.im * trafo_31_2031.terminal1.i.re - load_31.terminal.V.re * trafo_31_2031.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3126]] /* trafo_31_2031.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4215;
}

/*
equation index: 4216
type: SIMPLE_ASSIGN
trafo_31_2031.P1Pu = load_31.terminal.V.re * trafo_31_2031.terminal1.i.re + load_31.terminal.V.im * trafo_31_2031.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3124]] /* trafo_31_2031.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* trafo_31_2031.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* trafo_31_2031.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4216;
}

/*
equation index: 4217
type: SIMPLE_ASSIGN
load_31.UPu.value = if load_31.running.value then (load_31.terminal.V.re ^ 2.0 + load_31.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4217};
  modelica_real tmp268;
  modelica_real tmp269;
  modelica_real tmp270;
  modelica_boolean tmp271;
  modelica_real tmp272;
  tmp271 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[792]] /* load_31.running.value DISCRETE */);
  if(tmp271)
  {
    tmp268 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */);
    tmp269 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */);
    tmp270 = (tmp268 * tmp268) + (tmp269 * tmp269);
    if(tmp270 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp270, 0.5);
    }
    tmp272 = sqrt(tmp270);
  }
  else
  {
    tmp272 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2837]] /* load_31.UPu.value variable */) = tmp272;
  threadData->lastEquationSolved = 4217;
}

/*
equation index: 4218
type: SIMPLE_ASSIGN
bus_B31.UPhase = Modelica.Math.atan3(load_31.terminal.V.im, load_31.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* bus_B31.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4218;
}

/*
equation index: 4219
type: SIMPLE_ASSIGN
bus_B31.UPu = if load_31.terminal.V.re == 0.0 and load_31.terminal.V.im == 0.0 then 0.0 else (load_31.terminal.V.re ^ 2.0 + load_31.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4219};
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_boolean tmp276;
  modelica_real tmp277;
  tmp276 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) == 0.0));
  if(tmp276)
  {
    tmp277 = 0.0;
  }
  else
  {
    tmp273 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */);
    tmp274 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */);
    tmp275 = (tmp273 * tmp273) + (tmp274 * tmp274);
    if(tmp275 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp275, 0.5);
    }
    tmp277 = sqrt(tmp275);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* bus_B31.UPu variable */) = tmp277;
  threadData->lastEquationSolved = 4219;
}

/*
equation index: 4220
type: SIMPLE_ASSIGN
bus_B31.U = bus_B31.UPu * bus_B31.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* bus_B31.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* bus_B31.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[185]] /* bus_B31.UNom PARAM */));
  threadData->lastEquationSolved = 4220;
}

/*
equation index: 4221
type: SIMPLE_ASSIGN
trafo_31_2031.Q2Pu = line_2031_2032b.terminal1.V.im * trafo_31_2031.terminal2.i.re - line_2031_2032b.terminal1.V.re * trafo_31_2031.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3127]] /* trafo_31_2031.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* trafo_31_2031.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* trafo_31_2031.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4221;
}

/*
equation index: 4222
type: SIMPLE_ASSIGN
trafo_31_2031.P2Pu = line_2031_2032b.terminal1.V.re * trafo_31_2031.terminal2.i.re + line_2031_2032b.terminal1.V.im * trafo_31_2031.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3125]] /* trafo_31_2031.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* trafo_31_2031.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* trafo_31_2031.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4222;
}

/*
equation index: 4223
type: SIMPLE_ASSIGN
trafo_g8_2032.U2Pu = if trafo_g8_2032.running.value then if line_2031_2032b.terminal2.V.re == 0.0 and line_2031_2032b.terminal2.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal2.V.re ^ 2.0 + line_2031_2032b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4223};
  modelica_real tmp278;
  modelica_real tmp279;
  modelica_real tmp280;
  modelica_boolean tmp281;
  modelica_real tmp282;
  modelica_boolean tmp283;
  modelica_real tmp284;
  tmp283 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */);
  if(tmp283)
  {
    tmp281 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) == 0.0));
    if(tmp281)
    {
      tmp282 = 0.0;
    }
    else
    {
      tmp278 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */);
      tmp279 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */);
      tmp280 = (tmp278 * tmp278) + (tmp279 * tmp279);
      if(tmp280 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp280, 0.5);
      }
      tmp282 = sqrt(tmp280);
    }
    tmp284 = tmp282;
  }
  else
  {
    tmp284 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3435]] /* trafo_g8_2032.U2Pu variable */) = tmp284;
  threadData->lastEquationSolved = 4223;
}

/*
equation index: 4224
type: SIMPLE_ASSIGN
g08.iStatorPu.re = if g08.running.value then g08.rTfoPu * g08.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4224;
}

/*
equation index: 4225
type: SIMPLE_ASSIGN
g08.iStatorPu.im = if g08.running.value then g08.rTfoPu * g08.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4225;
}

/*
equation index: 4226
type: SIMPLE_ASSIGN
g08.IStatorPu = if g08.running.value then if g08.iStatorPu.re == 0.0 and g08.iStatorPu.im == 0.0 then 0.0 else (g08.iStatorPu.re ^ 2.0 + g08.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4226};
  modelica_real tmp285;
  modelica_real tmp286;
  modelica_real tmp287;
  modelica_boolean tmp288;
  modelica_real tmp289;
  modelica_boolean tmp290;
  modelica_real tmp291;
  tmp290 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp290)
  {
    tmp288 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */) == 0.0));
    if(tmp288)
    {
      tmp289 = 0.0;
    }
    else
    {
      tmp285 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */);
      tmp286 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */);
      tmp287 = (tmp285 * tmp285) + (tmp286 * tmp286);
      if(tmp287 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp287, 0.5);
      }
      tmp289 = sqrt(tmp287);
    }
    tmp291 = tmp289;
  }
  else
  {
    tmp291 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* g08.IStatorPu variable */) = tmp291;
  threadData->lastEquationSolved = 4226;
}

/*
equation index: 4227
type: SIMPLE_ASSIGN
$DER.g08.lambdaQ2Pu = if g08.running.value then g08.RQ2PPu * g08.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* der(g08.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[980]] /* g08.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* g08.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4227;
}

/*
equation index: 4228
type: SIMPLE_ASSIGN
$DER.g08.lambdaQ1Pu = if g08.running.value then g08.RQ1PPu * g08.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* der(g08.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* g08.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* g08.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4228;
}

/*
equation index: 4229
type: SIMPLE_ASSIGN
$DER.g08.lambdaDPu = if g08.running.value then g08.RDPPu * g08.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* der(g08.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* g08.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* g08.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4229;
}

/*
equation index: 4230
type: SIMPLE_ASSIGN
g08.uStatorPu.im = if g08.running.value then (g08.terminal.V.im + (-100.0) * (g08.terminal.i.re * g08.XTfoPu + g08.terminal.i.im * g08.RTfoPu) / g08.SNom) / g08.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* g08.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* g08.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */),"g08.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */),"g08.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4230;
}

/*
equation index: 4231
type: SIMPLE_ASSIGN
g08.uPu.im = if g08.running.value then g08.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1375]] /* g08.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4231;
}

/*
equation index: 4232
type: SIMPLE_ASSIGN
g08.cePu = if g08.running.value then g08.lambdaqPu * g08.idPu - g08.lambdadPu * g08.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* g08.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1363]] /* g08.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* g08.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4232;
}

/*
equation index: 4233
type: SIMPLE_ASSIGN
g08.PePu = if g08.running.value then g08.cePu * g08.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* g08.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* g08.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4233;
}

/*
equation index: 4234
type: SIMPLE_ASSIGN
g08.thetaInternal.value = if g08.running.value then Modelica.Math.atan3(g08.udPu, g08.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1374]] /* g08.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1379]] /* g08.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1381]] /* g08.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4234;
}

/*
equation index: 4235
type: SIMPLE_ASSIGN
g08.uStatorPu.re = if g08.running.value then (g08.terminal.V.re + (-100.0) * (g08.terminal.i.re * g08.RTfoPu - g08.terminal.i.im * g08.XTfoPu) / g08.SNom) / g08.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* g08.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* g08.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */),"g08.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */),"g08.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4235;
}

/*
equation index: 4236
type: SIMPLE_ASSIGN
g08.sStatorPu.im = if g08.running.value then g08.uStatorPu.im * g08.iStatorPu.re - g08.uStatorPu.re * g08.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1367]] /* g08.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4236;
}

/*
equation index: 4237
type: SIMPLE_ASSIGN
g08.QStatorPu = if g08.running.value then -g08.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* g08.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1367]] /* g08.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4237;
}

/*
equation index: 4238
type: SIMPLE_ASSIGN
g08.QStatorPuQNom = if g08.running.value then 100.0 * g08.QStatorPu / g08.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* g08.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* g08.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* g08.QNomAlt PARAM */),"g08.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4238;
}

/*
equation index: 4239
type: SIMPLE_ASSIGN
g08.sStatorPu.re = if g08.running.value then g08.uStatorPu.re * g08.iStatorPu.re + g08.uStatorPu.im * g08.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1368]] /* g08.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4239;
}

/*
equation index: 4240
type: SIMPLE_ASSIGN
g08.QGenPu = if g08.running.value then g08.terminal.V.re * g08.terminal.i.im - g08.terminal.V.im * g08.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* g08.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4240;
}

/*
equation index: 4241
type: SIMPLE_ASSIGN
g08.QGen = if g08.running.value then 100.0 * g08.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* g08.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* g08.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4241;
}

/*
equation index: 4242
type: SIMPLE_ASSIGN
g08.UPu = if g08.running.value then (g08.terminal.V.re ^ 2.0 + g08.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4242};
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_boolean tmp295;
  modelica_real tmp296;
  tmp295 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp295)
  {
    tmp292 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */);
    tmp293 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */);
    tmp294 = (tmp292 * tmp292) + (tmp293 * tmp293);
    if(tmp294 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp294, 0.5);
    }
    tmp296 = sqrt(tmp294);
  }
  else
  {
    tmp296 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1346]] /* g08.UPu variable */) = tmp296;
  threadData->lastEquationSolved = 4242;
}

/*
equation index: 4243
type: SIMPLE_ASSIGN
g08.uPu.re = if g08.running.value then g08.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1376]] /* g08.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4243;
}

/*
equation index: 4244
type: SIMPLE_ASSIGN
trafo_g8_2032.U1Pu = if trafo_g8_2032.running.value then if g08.terminal.V.re == 0.0 and g08.terminal.V.im == 0.0 then 0.0 else (g08.terminal.V.re ^ 2.0 + g08.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4244};
  modelica_real tmp297;
  modelica_real tmp298;
  modelica_real tmp299;
  modelica_boolean tmp300;
  modelica_real tmp301;
  modelica_boolean tmp302;
  modelica_real tmp303;
  tmp302 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1009]] /* trafo_g8_2032.running.value DISCRETE */);
  if(tmp302)
  {
    tmp300 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) == 0.0));
    if(tmp300)
    {
      tmp301 = 0.0;
    }
    else
    {
      tmp297 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */);
      tmp298 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */);
      tmp299 = (tmp297 * tmp297) + (tmp298 * tmp298);
      if(tmp299 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp299, 0.5);
      }
      tmp301 = sqrt(tmp299);
    }
    tmp303 = tmp301;
  }
  else
  {
    tmp303 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3434]] /* trafo_g8_2032.U1Pu variable */) = tmp303;
  threadData->lastEquationSolved = 4244;
}

/*
equation index: 4245
type: SIMPLE_ASSIGN
trafo_g8_2032.Q1Pu = g08.terminal.V.re * g08.terminal.i.im - g08.terminal.V.im * g08.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3432]] /* trafo_g8_2032.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4245;
}

/*
equation index: 4246
type: SIMPLE_ASSIGN
trafo_g8_2032.P1Pu = (-g08.terminal.V.re) * g08.terminal.i.re - g08.terminal.V.im * g08.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3430]] /* trafo_g8_2032.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4246;
}

/*
equation index: 4247
type: SIMPLE_ASSIGN
bus_BG08.UPhase = Modelica.Math.atan3(g08.terminal.V.im, g08.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* bus_BG08.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4247;
}

/*
equation index: 4248
type: SIMPLE_ASSIGN
bus_BG08.UPu = if g08.terminal.V.re == 0.0 and g08.terminal.V.im == 0.0 then 0.0 else (g08.terminal.V.re ^ 2.0 + g08.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4248};
  modelica_real tmp304;
  modelica_real tmp305;
  modelica_real tmp306;
  modelica_boolean tmp307;
  modelica_real tmp308;
  tmp307 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) == 0.0));
  if(tmp307)
  {
    tmp308 = 0.0;
  }
  else
  {
    tmp304 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */);
    tmp305 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */);
    tmp306 = (tmp304 * tmp304) + (tmp305 * tmp305);
    if(tmp306 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp306, 0.5);
    }
    tmp308 = sqrt(tmp306);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* bus_BG08.UPu variable */) = tmp308;
  threadData->lastEquationSolved = 4248;
}

/*
equation index: 4249
type: SIMPLE_ASSIGN
bus_BG08.U = bus_BG08.UPu * bus_BG08.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* bus_BG08.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* bus_BG08.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* bus_BG08.UNom PARAM */));
  threadData->lastEquationSolved = 4249;
}

/*
equation index: 4250
type: SIMPLE_ASSIGN
trafo_g8_2032.Q2Pu = line_2031_2032b.terminal2.V.im * trafo_g8_2032.terminal2.i.re - line_2031_2032b.terminal2.V.re * trafo_g8_2032.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3433]] /* trafo_g8_2032.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3437]] /* trafo_g8_2032.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3436]] /* trafo_g8_2032.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4250;
}

/*
equation index: 4251
type: SIMPLE_ASSIGN
trafo_g8_2032.P2Pu = line_2031_2032b.terminal2.V.re * trafo_g8_2032.terminal2.i.re + line_2031_2032b.terminal2.V.im * trafo_g8_2032.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3431]] /* trafo_g8_2032.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3437]] /* trafo_g8_2032.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3436]] /* trafo_g8_2032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4251;
}

/*
equation index: 4252
type: SIMPLE_ASSIGN
trafo_32_2032.U2Pu = if trafo_32_2032.running.value then if line_2031_2032b.terminal2.V.re == 0.0 and line_2031_2032b.terminal2.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal2.V.re ^ 2.0 + line_2031_2032b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4252};
  modelica_real tmp309;
  modelica_real tmp310;
  modelica_real tmp311;
  modelica_boolean tmp312;
  modelica_real tmp313;
  modelica_boolean tmp314;
  modelica_real tmp315;
  tmp314 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */);
  if(tmp314)
  {
    tmp312 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) == 0.0));
    if(tmp312)
    {
      tmp313 = 0.0;
    }
    else
    {
      tmp309 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */);
      tmp310 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */);
      tmp311 = (tmp309 * tmp309) + (tmp310 * tmp310);
      if(tmp311 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp311, 0.5);
      }
      tmp313 = sqrt(tmp311);
    }
    tmp315 = tmp313;
  }
  else
  {
    tmp315 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3139]] /* trafo_32_2032.U2Pu variable */) = tmp315;
  threadData->lastEquationSolved = 4252;
}

/*
equation index: 4253
type: SIMPLE_ASSIGN
trafo_32_2032.U1Pu = if trafo_32_2032.running.value then if load_32.terminal.V.re == 0.0 and load_32.terminal.V.im == 0.0 then 0.0 else (load_32.terminal.V.re ^ 2.0 + load_32.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4253};
  modelica_real tmp316;
  modelica_real tmp317;
  modelica_real tmp318;
  modelica_boolean tmp319;
  modelica_real tmp320;
  modelica_boolean tmp321;
  modelica_real tmp322;
  tmp321 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[910]] /* trafo_32_2032.running.value DISCRETE */);
  if(tmp321)
  {
    tmp319 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) == 0.0));
    if(tmp319)
    {
      tmp320 = 0.0;
    }
    else
    {
      tmp316 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */);
      tmp317 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */);
      tmp318 = (tmp316 * tmp316) + (tmp317 * tmp317);
      if(tmp318 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp318, 0.5);
      }
      tmp320 = sqrt(tmp318);
    }
    tmp322 = tmp320;
  }
  else
  {
    tmp322 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3138]] /* trafo_32_2032.U1Pu variable */) = tmp322;
  threadData->lastEquationSolved = 4253;
}

/*
equation index: 4254
type: SIMPLE_ASSIGN
trafo_32_2032.Q1Pu = load_32.terminal.V.im * trafo_32_2032.terminal1.i.re - load_32.terminal.V.re * trafo_32_2032.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3136]] /* trafo_32_2032.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4254;
}

/*
equation index: 4255
type: SIMPLE_ASSIGN
trafo_32_2032.P1Pu = load_32.terminal.V.re * trafo_32_2032.terminal1.i.re + load_32.terminal.V.im * trafo_32_2032.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3134]] /* trafo_32_2032.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3141]] /* trafo_32_2032.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* trafo_32_2032.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4255;
}

/*
equation index: 4256
type: SIMPLE_ASSIGN
load_32.UPu.value = if load_32.running.value then (load_32.terminal.V.re ^ 2.0 + load_32.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4256};
  modelica_real tmp323;
  modelica_real tmp324;
  modelica_real tmp325;
  modelica_boolean tmp326;
  modelica_real tmp327;
  tmp326 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[795]] /* load_32.running.value DISCRETE */);
  if(tmp326)
  {
    tmp323 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */);
    tmp324 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */);
    tmp325 = (tmp323 * tmp323) + (tmp324 * tmp324);
    if(tmp325 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp325, 0.5);
    }
    tmp327 = sqrt(tmp325);
  }
  else
  {
    tmp327 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2844]] /* load_32.UPu.value variable */) = tmp327;
  threadData->lastEquationSolved = 4256;
}

/*
equation index: 4257
type: SIMPLE_ASSIGN
bus_B32.UPhase = Modelica.Math.atan3(load_32.terminal.V.im, load_32.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bus_B32.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4257;
}

/*
equation index: 4258
type: SIMPLE_ASSIGN
bus_B32.UPu = if load_32.terminal.V.re == 0.0 and load_32.terminal.V.im == 0.0 then 0.0 else (load_32.terminal.V.re ^ 2.0 + load_32.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4258};
  modelica_real tmp328;
  modelica_real tmp329;
  modelica_real tmp330;
  modelica_boolean tmp331;
  modelica_real tmp332;
  tmp331 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) == 0.0));
  if(tmp331)
  {
    tmp332 = 0.0;
  }
  else
  {
    tmp328 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */);
    tmp329 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */);
    tmp330 = (tmp328 * tmp328) + (tmp329 * tmp329);
    if(tmp330 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp330, 0.5);
    }
    tmp332 = sqrt(tmp330);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bus_B32.UPu variable */) = tmp332;
  threadData->lastEquationSolved = 4258;
}

/*
equation index: 4259
type: SIMPLE_ASSIGN
bus_B32.U = bus_B32.UPu * bus_B32.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bus_B32.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bus_B32.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* bus_B32.UNom PARAM */));
  threadData->lastEquationSolved = 4259;
}

/*
equation index: 4260
type: SIMPLE_ASSIGN
trafo_32_2032.Q2Pu = line_2031_2032b.terminal2.V.im * trafo_32_2032.terminal2.i.re - line_2031_2032b.terminal2.V.re * trafo_32_2032.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3137]] /* trafo_32_2032.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3143]] /* trafo_32_2032.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3142]] /* trafo_32_2032.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4260;
}

/*
equation index: 4261
type: SIMPLE_ASSIGN
trafo_32_2032.P2Pu = line_2031_2032b.terminal2.V.re * trafo_32_2032.terminal2.i.re + line_2031_2032b.terminal2.V.im * trafo_32_2032.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3135]] /* trafo_32_2032.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3143]] /* trafo_32_2032.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3142]] /* trafo_32_2032.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4261;
}

/*
equation index: 4262
type: SIMPLE_ASSIGN
line_2031_2032b.Q2Pu = line_2031_2032b.terminal2.V.im * line_2031_2032b.terminal2.i.re - line_2031_2032b.terminal2.V.re * line_2031_2032b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2461]] /* line_2031_2032b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* line_2031_2032b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* line_2031_2032b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4262;
}

/*
equation index: 4263
type: SIMPLE_ASSIGN
line_2031_2032b.P2Pu = line_2031_2032b.terminal2.V.re * line_2031_2032b.terminal2.i.re + line_2031_2032b.terminal2.V.im * line_2031_2032b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2459]] /* line_2031_2032b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2469]] /* line_2031_2032b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2468]] /* line_2031_2032b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4263;
}

/*
equation index: 4264
type: SIMPLE_ASSIGN
line_2031_2032b.Q1Pu = line_2031_2032b.terminal1.V.im * line_2031_2032b.terminal1.i.re - line_2031_2032b.terminal1.V.re * line_2031_2032b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2460]] /* line_2031_2032b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2465]] /* line_2031_2032b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2464]] /* line_2031_2032b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4264;
}

/*
equation index: 4265
type: SIMPLE_ASSIGN
line_2031_2032b.P1Pu = line_2031_2032b.terminal1.V.re * line_2031_2032b.terminal1.i.re + line_2031_2032b.terminal1.V.im * line_2031_2032b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2458]] /* line_2031_2032b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2465]] /* line_2031_2032b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2464]] /* line_2031_2032b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4265;
}

/*
equation index: 4266
type: SIMPLE_ASSIGN
line_2031_2032a.Q2Pu = line_2031_2032b.terminal2.V.im * line_2031_2032a.terminal2.i.re - line_2031_2032b.terminal2.V.re * line_2031_2032a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2453]] /* line_2031_2032a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2457]] /* line_2031_2032a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2456]] /* line_2031_2032a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4266;
}

/*
equation index: 4267
type: SIMPLE_ASSIGN
line_2031_2032a.P2Pu = line_2031_2032b.terminal2.V.re * line_2031_2032a.terminal2.i.re + line_2031_2032b.terminal2.V.im * line_2031_2032a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2451]] /* line_2031_2032a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2457]] /* line_2031_2032a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2456]] /* line_2031_2032a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4267;
}

/*
equation index: 4268
type: SIMPLE_ASSIGN
bus_2032.UPhase = Modelica.Math.atan3(line_2031_2032b.terminal2.V.im, line_2031_2032b.terminal2.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* bus_2032.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4268;
}

/*
equation index: 4269
type: SIMPLE_ASSIGN
bus_2032.UPu = if line_2031_2032b.terminal2.V.re == 0.0 and line_2031_2032b.terminal2.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal2.V.re ^ 2.0 + line_2031_2032b.terminal2.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4269};
  modelica_real tmp333;
  modelica_real tmp334;
  modelica_real tmp335;
  modelica_boolean tmp336;
  modelica_real tmp337;
  tmp336 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) == 0.0));
  if(tmp336)
  {
    tmp337 = 0.0;
  }
  else
  {
    tmp333 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */);
    tmp334 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */);
    tmp335 = (tmp333 * tmp333) + (tmp334 * tmp334);
    if(tmp335 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp335, 0.5);
    }
    tmp337 = sqrt(tmp335);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* bus_2032.UPu variable */) = tmp337;
  threadData->lastEquationSolved = 4269;
}

/*
equation index: 4270
type: SIMPLE_ASSIGN
bus_2032.U = bus_2032.UPu * bus_2032.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* bus_2032.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* bus_2032.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* bus_2032.UNom PARAM */));
  threadData->lastEquationSolved = 4270;
}

/*
equation index: 4271
type: SIMPLE_ASSIGN
line_2031_2032a.Q1Pu = line_2031_2032b.terminal1.V.im * line_2031_2032a.terminal1.i.re - line_2031_2032b.terminal1.V.re * line_2031_2032a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2452]] /* line_2031_2032a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* line_2031_2032a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2454]] /* line_2031_2032a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4271;
}

/*
equation index: 4272
type: SIMPLE_ASSIGN
line_2031_2032a.P1Pu = line_2031_2032b.terminal1.V.re * line_2031_2032a.terminal1.i.re + line_2031_2032b.terminal1.V.im * line_2031_2032a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2450]] /* line_2031_2032a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2455]] /* line_2031_2032a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2454]] /* line_2031_2032a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4272;
}

/*
equation index: 4273
type: SIMPLE_ASSIGN
bus_2031.UPhase = Modelica.Math.atan3(line_2031_2032b.terminal1.V.im, line_2031_2032b.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* bus_2031.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4273;
}

/*
equation index: 4274
type: SIMPLE_ASSIGN
bus_2031.UPu = if line_2031_2032b.terminal1.V.re == 0.0 and line_2031_2032b.terminal1.V.im == 0.0 then 0.0 else (line_2031_2032b.terminal1.V.re ^ 2.0 + line_2031_2032b.terminal1.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4274};
  modelica_real tmp338;
  modelica_real tmp339;
  modelica_real tmp340;
  modelica_boolean tmp341;
  modelica_real tmp342;
  tmp341 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) == 0.0));
  if(tmp341)
  {
    tmp342 = 0.0;
  }
  else
  {
    tmp338 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */);
    tmp339 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */);
    tmp340 = (tmp338 * tmp338) + (tmp339 * tmp339);
    if(tmp340 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp340, 0.5);
    }
    tmp342 = sqrt(tmp340);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* bus_2031.UPu variable */) = tmp342;
  threadData->lastEquationSolved = 4274;
}

/*
equation index: 4275
type: SIMPLE_ASSIGN
bus_2031.U = bus_2031.UPu * bus_2031.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* bus_2031.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* bus_2031.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* bus_2031.UNom PARAM */));
  threadData->lastEquationSolved = 4275;
}

/*
equation index: 4276
type: SIMPLE_ASSIGN
trafo_2031_4031.Q2Pu = line_4031_4041b.terminal1.V.im * trafo_2031_4031.terminal2.i.re - line_4031_4041b.terminal1.V.re * trafo_2031_4031.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3097]] /* trafo_2031_4031.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3103]] /* trafo_2031_4031.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3102]] /* trafo_2031_4031.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4276;
}

/*
equation index: 4277
type: SIMPLE_ASSIGN
trafo_2031_4031.P2Pu = line_4031_4041b.terminal1.V.re * trafo_2031_4031.terminal2.i.re + line_4031_4041b.terminal1.V.im * trafo_2031_4031.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3095]] /* trafo_2031_4031.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3103]] /* trafo_2031_4031.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3102]] /* trafo_2031_4031.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4277;
}

/*
equation index: 4278
type: SIMPLE_ASSIGN
line_4022_4031b.Q2Pu = line_4031_4041b.terminal1.V.im * line_4022_4031b.terminal2.i.re - line_4031_4041b.terminal1.V.re * line_4022_4031b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2551]] /* line_4022_4031b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2557]] /* line_4022_4031b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2556]] /* line_4022_4031b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4278;
}

/*
equation index: 4279
type: SIMPLE_ASSIGN
line_4022_4031b.P2Pu = line_4031_4041b.terminal1.V.re * line_4022_4031b.terminal2.i.re + line_4031_4041b.terminal1.V.im * line_4022_4031b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2549]] /* line_4022_4031b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2557]] /* line_4022_4031b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2556]] /* line_4022_4031b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4279;
}

/*
equation index: 4280
type: SIMPLE_ASSIGN
line_4022_4031a.Q1Pu = line_4022_4031b.terminal1.V.im * line_4022_4031a.terminal1.i.re - line_4022_4031b.terminal1.V.re * line_4022_4031a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2542]] /* line_4022_4031a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* line_4022_4031a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* line_4022_4031a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4280;
}

/*
equation index: 4281
type: SIMPLE_ASSIGN
line_4022_4031a.P1Pu = line_4022_4031b.terminal1.V.re * line_4022_4031a.terminal1.i.re + line_4022_4031b.terminal1.V.im * line_4022_4031a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2540]] /* line_4022_4031a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2545]] /* line_4022_4031a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2544]] /* line_4022_4031a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4281;
}

/*
equation index: 4282
type: SIMPLE_ASSIGN
line_4022_4031a.Q2Pu = line_4031_4041b.terminal1.V.im * line_4022_4031a.terminal2.i.re - line_4031_4041b.terminal1.V.re * line_4022_4031a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2543]] /* line_4022_4031a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* line_4022_4031a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2546]] /* line_4022_4031a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4282;
}

/*
equation index: 4283
type: SIMPLE_ASSIGN
line_4022_4031a.P2Pu = line_4031_4041b.terminal1.V.re * line_4022_4031a.terminal2.i.re + line_4031_4041b.terminal1.V.im * line_4022_4031a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2541]] /* line_4022_4031a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2547]] /* line_4022_4031a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2546]] /* line_4022_4031a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4283;
}

/*
equation index: 4284
type: SIMPLE_ASSIGN
line_4031_4041b.Q1Pu = line_4031_4041b.terminal1.V.im * line_4031_4041b.terminal1.i.re - line_4031_4041b.terminal1.V.re * line_4031_4041b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2576]] /* line_4031_4041b.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* line_4031_4041b.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* line_4031_4041b.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4284;
}

/*
equation index: 4285
type: SIMPLE_ASSIGN
line_4031_4041b.P1Pu = line_4031_4041b.terminal1.V.re * line_4031_4041b.terminal1.i.re + line_4031_4041b.terminal1.V.im * line_4031_4041b.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2574]] /* line_4031_4041b.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2581]] /* line_4031_4041b.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2580]] /* line_4031_4041b.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4285;
}

/*
equation index: 4286
type: SIMPLE_ASSIGN
trafo_41_4041.U1Pu = if trafo_41_4041.running.value then if load_41.terminal.V.re == 0.0 and load_41.terminal.V.im == 0.0 then 0.0 else (load_41.terminal.V.re ^ 2.0 + load_41.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4286};
  modelica_real tmp343;
  modelica_real tmp344;
  modelica_real tmp345;
  modelica_boolean tmp346;
  modelica_real tmp347;
  modelica_boolean tmp348;
  modelica_real tmp349;
  tmp348 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */);
  if(tmp348)
  {
    tmp346 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) == 0.0));
    if(tmp346)
    {
      tmp347 = 0.0;
    }
    else
    {
      tmp343 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */);
      tmp344 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */);
      tmp345 = (tmp343 * tmp343) + (tmp344 * tmp344);
      if(tmp345 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp345, 0.5);
      }
      tmp347 = sqrt(tmp345);
    }
    tmp349 = tmp347;
  }
  else
  {
    tmp349 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3158]] /* trafo_41_4041.U1Pu variable */) = tmp349;
  threadData->lastEquationSolved = 4286;
}

/*
equation index: 4287
type: SIMPLE_ASSIGN
trafo_41_4041.Q1Pu = load_41.terminal.V.im * trafo_41_4041.terminal1.i.re - load_41.terminal.V.re * trafo_41_4041.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3156]] /* trafo_41_4041.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4287;
}

/*
equation index: 4288
type: SIMPLE_ASSIGN
trafo_41_4041.P1Pu = load_41.terminal.V.re * trafo_41_4041.terminal1.i.re + load_41.terminal.V.im * trafo_41_4041.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3154]] /* trafo_41_4041.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* trafo_41_4041.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* trafo_41_4041.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4288;
}

/*
equation index: 4289
type: SIMPLE_ASSIGN
trafo_g13_4041.U2Pu = if trafo_g13_4041.running.value then if line_4041_4061.terminal1.V.re == 0.0 and line_4041_4061.terminal1.V.im == 0.0 then 0.0 else (line_4041_4061.terminal1.V.re ^ 2.0 + line_4041_4061.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4289};
  modelica_real tmp350;
  modelica_real tmp351;
  modelica_real tmp352;
  modelica_boolean tmp353;
  modelica_real tmp354;
  modelica_boolean tmp355;
  modelica_real tmp356;
  tmp355 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */);
  if(tmp355)
  {
    tmp353 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) == 0.0));
    if(tmp353)
    {
      tmp354 = 0.0;
    }
    else
    {
      tmp350 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */);
      tmp351 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */);
      tmp352 = (tmp350 * tmp350) + (tmp351 * tmp351);
      if(tmp352 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp352, 0.5);
      }
      tmp354 = sqrt(tmp352);
    }
    tmp356 = tmp354;
  }
  else
  {
    tmp356 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3313]] /* trafo_g13_4041.U2Pu variable */) = tmp356;
  threadData->lastEquationSolved = 4289;
}

/*
equation index: 4290
type: SIMPLE_ASSIGN
g13.uPu.re = if g13.running.value then g13.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1606]] /* g13.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4290;
}

/*
equation index: 4291
type: SIMPLE_ASSIGN
g13.iStatorPu.im = if g13.running.value then g13.rTfoPu * g13.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4291;
}

/*
equation index: 4292
type: SIMPLE_ASSIGN
$DER.g13.lambdaDPu = if g13.running.value then g13.RDPPu * g13.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* der(g13.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1483]] /* g13.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* g13.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4292;
}

/*
equation index: 4293
type: SIMPLE_ASSIGN
$DER.g13.lambdaQ1Pu = if g13.running.value then g13.RQ1PPu * g13.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* der(g13.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1484]] /* g13.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1582]] /* g13.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4293;
}

/*
equation index: 4294
type: SIMPLE_ASSIGN
$DER.g13.lambdaQ2Pu = if g13.running.value then g13.RQ2PPu * g13.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* der(g13.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1485]] /* g13.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* g13.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4294;
}

/*
equation index: 4295
type: SIMPLE_ASSIGN
g13.iStatorPu.re = if g13.running.value then g13.rTfoPu * g13.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4295;
}

/*
equation index: 4296
type: SIMPLE_ASSIGN
g13.IStatorPu = if g13.running.value then if g13.iStatorPu.re == 0.0 and g13.iStatorPu.im == 0.0 then 0.0 else (g13.iStatorPu.re ^ 2.0 + g13.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4296};
  modelica_real tmp357;
  modelica_real tmp358;
  modelica_real tmp359;
  modelica_boolean tmp360;
  modelica_real tmp361;
  modelica_boolean tmp362;
  modelica_real tmp363;
  tmp362 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp362)
  {
    tmp360 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */) == 0.0));
    if(tmp360)
    {
      tmp361 = 0.0;
    }
    else
    {
      tmp357 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */);
      tmp358 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */);
      tmp359 = (tmp357 * tmp357) + (tmp358 * tmp358);
      if(tmp359 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp359, 0.5);
      }
      tmp361 = sqrt(tmp359);
    }
    tmp363 = tmp361;
  }
  else
  {
    tmp363 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1566]] /* g13.IStatorPu variable */) = tmp363;
  threadData->lastEquationSolved = 4296;
}

/*
equation index: 4297
type: SIMPLE_ASSIGN
g13.uStatorPu.re = if g13.running.value then (g13.terminal.V.re + (-100.0) * (g13.terminal.i.re * g13.RTfoPu - g13.terminal.i.im * g13.XTfoPu) / g13.SNom) / g13.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* g13.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* g13.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */),"g13.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */),"g13.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4297;
}

/*
equation index: 4298
type: SIMPLE_ASSIGN
g13.cePu = if g13.running.value then g13.lambdaqPu * g13.idPu - g13.lambdadPu * g13.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1577]] /* g13.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1593]] /* g13.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1592]] /* g13.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4298;
}

/*
equation index: 4299
type: SIMPLE_ASSIGN
g13.PePu = if g13.running.value then g13.cePu * g13.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1570]] /* g13.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1577]] /* g13.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4299;
}

/*
equation index: 4300
type: SIMPLE_ASSIGN
g13.thetaInternal.value = if g13.running.value then Modelica.Math.atan3(g13.udPu, g13.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1604]] /* g13.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1609]] /* g13.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1611]] /* g13.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4300;
}

/*
equation index: 4301
type: SIMPLE_ASSIGN
g13.uStatorPu.im = if g13.running.value then (g13.terminal.V.im + (-100.0) * (g13.terminal.i.re * g13.XTfoPu + g13.terminal.i.im * g13.RTfoPu) / g13.SNom) / g13.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* g13.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* g13.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */),"g13.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */),"g13.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4301;
}

/*
equation index: 4302
type: SIMPLE_ASSIGN
g13.sStatorPu.im = if g13.running.value then g13.uStatorPu.im * g13.iStatorPu.re - g13.uStatorPu.re * g13.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1597]] /* g13.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4302;
}

/*
equation index: 4303
type: SIMPLE_ASSIGN
g13.QStatorPu = if g13.running.value then -g13.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1574]] /* g13.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1597]] /* g13.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4303;
}

/*
equation index: 4304
type: SIMPLE_ASSIGN
g13.QStatorPuQNom = if g13.running.value then 100.0 * g13.QStatorPu / g13.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1575]] /* g13.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1574]] /* g13.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* g13.QNomAlt PARAM */),"g13.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4304;
}

/*
equation index: 4305
type: SIMPLE_ASSIGN
g13.sStatorPu.re = if g13.running.value then g13.uStatorPu.re * g13.iStatorPu.re + g13.uStatorPu.im * g13.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1598]] /* g13.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4305;
}

/*
equation index: 4306
type: SIMPLE_ASSIGN
g13.QGenPu = if g13.running.value then g13.terminal.V.re * g13.terminal.i.im - g13.terminal.V.im * g13.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1573]] /* g13.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4306;
}

/*
equation index: 4307
type: SIMPLE_ASSIGN
g13.QGen = if g13.running.value then 100.0 * g13.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1572]] /* g13.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1573]] /* g13.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4307;
}

/*
equation index: 4308
type: SIMPLE_ASSIGN
g13.UPu = if g13.running.value then (g13.terminal.V.re ^ 2.0 + g13.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4308};
  modelica_real tmp364;
  modelica_real tmp365;
  modelica_real tmp366;
  modelica_boolean tmp367;
  modelica_real tmp368;
  tmp367 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp367)
  {
    tmp364 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */);
    tmp365 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */);
    tmp366 = (tmp364 * tmp364) + (tmp365 * tmp365);
    if(tmp366 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp366, 0.5);
    }
    tmp368 = sqrt(tmp366);
  }
  else
  {
    tmp368 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1576]] /* g13.UPu variable */) = tmp368;
  threadData->lastEquationSolved = 4308;
}

/*
equation index: 4309
type: SIMPLE_ASSIGN
g13.uPu.im = if g13.running.value then g13.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1605]] /* g13.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4309;
}

/*
equation index: 4310
type: SIMPLE_ASSIGN
trafo_g13_4041.U1Pu = if trafo_g13_4041.running.value then if g13.terminal.V.re == 0.0 and g13.terminal.V.im == 0.0 then 0.0 else (g13.terminal.V.re ^ 2.0 + g13.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4310};
  modelica_real tmp369;
  modelica_real tmp370;
  modelica_real tmp371;
  modelica_boolean tmp372;
  modelica_real tmp373;
  modelica_boolean tmp374;
  modelica_real tmp375;
  tmp374 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[964]] /* trafo_g13_4041.running.value DISCRETE */);
  if(tmp374)
  {
    tmp372 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) == 0.0));
    if(tmp372)
    {
      tmp373 = 0.0;
    }
    else
    {
      tmp369 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */);
      tmp370 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */);
      tmp371 = (tmp369 * tmp369) + (tmp370 * tmp370);
      if(tmp371 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp371, 0.5);
      }
      tmp373 = sqrt(tmp371);
    }
    tmp375 = tmp373;
  }
  else
  {
    tmp375 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3312]] /* trafo_g13_4041.U1Pu variable */) = tmp375;
  threadData->lastEquationSolved = 4310;
}

/*
equation index: 4311
type: SIMPLE_ASSIGN
trafo_g13_4041.Q1Pu = g13.terminal.V.re * g13.terminal.i.im - g13.terminal.V.im * g13.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3310]] /* trafo_g13_4041.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4311;
}

/*
equation index: 4312
type: SIMPLE_ASSIGN
trafo_g13_4041.P1Pu = (-g13.terminal.V.re) * g13.terminal.i.re - g13.terminal.V.im * g13.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3308]] /* trafo_g13_4041.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4312;
}

/*
equation index: 4313
type: SIMPLE_ASSIGN
bus_BG13.UPhase = Modelica.Math.atan3(g13.terminal.V.im, g13.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* bus_BG13.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4313;
}

/*
equation index: 4314
type: SIMPLE_ASSIGN
bus_BG13.UPu = if g13.terminal.V.re == 0.0 and g13.terminal.V.im == 0.0 then 0.0 else (g13.terminal.V.re ^ 2.0 + g13.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4314};
  modelica_real tmp376;
  modelica_real tmp377;
  modelica_real tmp378;
  modelica_boolean tmp379;
  modelica_real tmp380;
  tmp379 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) == 0.0));
  if(tmp379)
  {
    tmp380 = 0.0;
  }
  else
  {
    tmp376 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */);
    tmp377 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */);
    tmp378 = (tmp376 * tmp376) + (tmp377 * tmp377);
    if(tmp378 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp378, 0.5);
    }
    tmp380 = sqrt(tmp378);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* bus_BG13.UPu variable */) = tmp380;
  threadData->lastEquationSolved = 4314;
}

/*
equation index: 4315
type: SIMPLE_ASSIGN
bus_BG13.U = bus_BG13.UPu * bus_BG13.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* bus_BG13.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* bus_BG13.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* bus_BG13.UNom PARAM */));
  threadData->lastEquationSolved = 4315;
}

/*
equation index: 4316
type: SIMPLE_ASSIGN
trafo_g13_4041.Q2Pu = line_4041_4061.terminal1.V.im * trafo_g13_4041.terminal2.i.re - line_4041_4061.terminal1.V.re * trafo_g13_4041.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3311]] /* trafo_g13_4041.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* trafo_g13_4041.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* trafo_g13_4041.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4316;
}

/*
equation index: 4317
type: SIMPLE_ASSIGN
trafo_g13_4041.P2Pu = line_4041_4061.terminal1.V.re * trafo_g13_4041.terminal2.i.re + line_4041_4061.terminal1.V.im * trafo_g13_4041.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3309]] /* trafo_g13_4041.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* trafo_g13_4041.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* trafo_g13_4041.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4317;
}

/*
equation index: 4318
type: SIMPLE_ASSIGN
trafo_41_4041.U2Pu = if trafo_41_4041.running.value then if line_4041_4061.terminal1.V.re == 0.0 and line_4041_4061.terminal1.V.im == 0.0 then 0.0 else (line_4041_4061.terminal1.V.re ^ 2.0 + line_4041_4061.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4318};
  modelica_real tmp381;
  modelica_real tmp382;
  modelica_real tmp383;
  modelica_boolean tmp384;
  modelica_real tmp385;
  modelica_boolean tmp386;
  modelica_real tmp387;
  tmp386 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[916]] /* trafo_41_4041.running.value DISCRETE */);
  if(tmp386)
  {
    tmp384 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) == 0.0));
    if(tmp384)
    {
      tmp385 = 0.0;
    }
    else
    {
      tmp381 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */);
      tmp382 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */);
      tmp383 = (tmp381 * tmp381) + (tmp382 * tmp382);
      if(tmp383 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp383, 0.5);
      }
      tmp385 = sqrt(tmp383);
    }
    tmp387 = tmp385;
  }
  else
  {
    tmp387 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3159]] /* trafo_41_4041.U2Pu variable */) = tmp387;
  threadData->lastEquationSolved = 4318;
}

/*
equation index: 4319
type: SIMPLE_ASSIGN
bus_4041.UPu = shunt_4041.UPu
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* bus_4041.UPu variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2961]] /* shunt_4041.UPu variable */);
  threadData->lastEquationSolved = 4319;
}

/*
equation index: 4320
type: SIMPLE_ASSIGN
bus_4041.U = bus_4041.UPu * bus_4041.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* bus_4041.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* bus_4041.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* bus_4041.UNom PARAM */));
  threadData->lastEquationSolved = 4320;
}

/*
equation index: 4321
type: SIMPLE_ASSIGN
line_4031_4041b.Q2Pu = line_4041_4061.terminal1.V.im * line_4031_4041b.terminal2.i.re - line_4041_4061.terminal1.V.re * line_4031_4041b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2577]] /* line_4031_4041b.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2583]] /* line_4031_4041b.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2582]] /* line_4031_4041b.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4321;
}

/*
equation index: 4322
type: SIMPLE_ASSIGN
line_4031_4041b.P2Pu = line_4041_4061.terminal1.V.re * line_4031_4041b.terminal2.i.re + line_4041_4061.terminal1.V.im * line_4031_4041b.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2575]] /* line_4031_4041b.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2583]] /* line_4031_4041b.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2582]] /* line_4031_4041b.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4322;
}

/*
equation index: 4323
type: SIMPLE_ASSIGN
line_4031_4041a.Q1Pu = line_4031_4041b.terminal1.V.im * line_4031_4041a.terminal1.i.re - line_4031_4041b.terminal1.V.re * line_4031_4041a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2568]] /* line_4031_4041a.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* line_4031_4041a.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* line_4031_4041a.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4323;
}

/*
equation index: 4324
type: SIMPLE_ASSIGN
line_4031_4041a.P1Pu = line_4031_4041b.terminal1.V.re * line_4031_4041a.terminal1.i.re + line_4031_4041b.terminal1.V.im * line_4031_4041a.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2566]] /* line_4031_4041a.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2571]] /* line_4031_4041a.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2570]] /* line_4031_4041a.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4324;
}

/*
equation index: 4325
type: SIMPLE_ASSIGN
line_4031_4041a.Q2Pu = line_4041_4061.terminal1.V.im * line_4031_4041a.terminal2.i.re - line_4041_4061.terminal1.V.re * line_4031_4041a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2569]] /* line_4031_4041a.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* line_4031_4041a.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* line_4031_4041a.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4325;
}

/*
equation index: 4326
type: SIMPLE_ASSIGN
line_4031_4041a.P2Pu = line_4041_4061.terminal1.V.re * line_4031_4041a.terminal2.i.re + line_4041_4061.terminal1.V.im * line_4031_4041a.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2567]] /* line_4031_4041a.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* line_4031_4041a.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* line_4031_4041a.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4326;
}

/*
equation index: 4327
type: SIMPLE_ASSIGN
bus_4041.UPhase = Modelica.Math.atan3(line_4041_4061.terminal1.V.im, line_4041_4061.terminal1.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* bus_4041.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4327;
}

/*
equation index: 4328
type: SIMPLE_ASSIGN
trafo_41_4041.Q2Pu = line_4041_4061.terminal1.V.im * trafo_41_4041.terminal2.i.re - line_4041_4061.terminal1.V.re * trafo_41_4041.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3157]] /* trafo_41_4041.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3163]] /* trafo_41_4041.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3162]] /* trafo_41_4041.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4328;
}

/*
equation index: 4329
type: SIMPLE_ASSIGN
trafo_41_4041.P2Pu = line_4041_4061.terminal1.V.re * trafo_41_4041.terminal2.i.re + line_4041_4061.terminal1.V.im * trafo_41_4041.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3155]] /* trafo_41_4041.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3163]] /* trafo_41_4041.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3162]] /* trafo_41_4041.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4329;
}

/*
equation index: 4330
type: SIMPLE_ASSIGN
trafo_61_4061.U2Pu = if trafo_61_4061.running.value then if line_4061_4062.terminal1.V.re == 0.0 and line_4061_4062.terminal1.V.im == 0.0 then 0.0 else (line_4061_4062.terminal1.V.re ^ 2.0 + line_4061_4062.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4330};
  modelica_real tmp388;
  modelica_real tmp389;
  modelica_real tmp390;
  modelica_boolean tmp391;
  modelica_real tmp392;
  modelica_boolean tmp393;
  modelica_real tmp394;
  tmp393 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */);
  if(tmp393)
  {
    tmp391 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) == 0.0));
    if(tmp391)
    {
      tmp392 = 0.0;
    }
    else
    {
      tmp388 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */);
      tmp389 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */);
      tmp390 = (tmp388 * tmp388) + (tmp389 * tmp389);
      if(tmp390 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp390, 0.5);
      }
      tmp392 = sqrt(tmp390);
    }
    tmp394 = tmp392;
  }
  else
  {
    tmp394 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3239]] /* trafo_61_4061.U2Pu variable */) = tmp394;
  threadData->lastEquationSolved = 4330;
}

/*
equation index: 4331
type: SIMPLE_ASSIGN
trafo_61_4061.U1Pu = if trafo_61_4061.running.value then if load_61.terminal.V.re == 0.0 and load_61.terminal.V.im == 0.0 then 0.0 else (load_61.terminal.V.re ^ 2.0 + load_61.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4331};
  modelica_real tmp395;
  modelica_real tmp396;
  modelica_real tmp397;
  modelica_boolean tmp398;
  modelica_real tmp399;
  modelica_boolean tmp400;
  modelica_real tmp401;
  tmp400 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[940]] /* trafo_61_4061.running.value DISCRETE */);
  if(tmp400)
  {
    tmp398 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) == 0.0));
    if(tmp398)
    {
      tmp399 = 0.0;
    }
    else
    {
      tmp395 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */);
      tmp396 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */);
      tmp397 = (tmp395 * tmp395) + (tmp396 * tmp396);
      if(tmp397 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp397, 0.5);
      }
      tmp399 = sqrt(tmp397);
    }
    tmp401 = tmp399;
  }
  else
  {
    tmp401 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3238]] /* trafo_61_4061.U1Pu variable */) = tmp401;
  threadData->lastEquationSolved = 4331;
}

/*
equation index: 4332
type: SIMPLE_ASSIGN
load_61.UPu.value = if load_61.running.value then (load_61.terminal.V.re ^ 2.0 + load_61.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4332};
  modelica_real tmp402;
  modelica_real tmp403;
  modelica_real tmp404;
  modelica_boolean tmp405;
  modelica_real tmp406;
  tmp405 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[816]] /* load_61.running.value DISCRETE */);
  if(tmp405)
  {
    tmp402 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */);
    tmp403 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */);
    tmp404 = (tmp402 * tmp402) + (tmp403 * tmp403);
    if(tmp404 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp404, 0.5);
    }
    tmp406 = sqrt(tmp404);
  }
  else
  {
    tmp406 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2893]] /* load_61.UPu.value variable */) = tmp406;
  threadData->lastEquationSolved = 4332;
}

/*
equation index: 4333
type: SIMPLE_ASSIGN
trafo_61_4061.Q1Pu = load_61.terminal.V.im * trafo_61_4061.terminal1.i.re - load_61.terminal.V.re * trafo_61_4061.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3236]] /* trafo_61_4061.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4333;
}

/*
equation index: 4334
type: SIMPLE_ASSIGN
trafo_61_4061.P1Pu = load_61.terminal.V.re * trafo_61_4061.terminal1.i.re + load_61.terminal.V.im * trafo_61_4061.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3234]] /* trafo_61_4061.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3241]] /* trafo_61_4061.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3240]] /* trafo_61_4061.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4334;
}

/*
equation index: 4335
type: SIMPLE_ASSIGN
bus_B61.UPhase = Modelica.Math.atan3(load_61.terminal.V.im, load_61.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[886]] /* bus_B61.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4335;
}

/*
equation index: 4336
type: SIMPLE_ASSIGN
bus_B61.UPu = if load_61.terminal.V.re == 0.0 and load_61.terminal.V.im == 0.0 then 0.0 else (load_61.terminal.V.re ^ 2.0 + load_61.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4336};
  modelica_real tmp407;
  modelica_real tmp408;
  modelica_real tmp409;
  modelica_boolean tmp410;
  modelica_real tmp411;
  tmp410 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) == 0.0));
  if(tmp410)
  {
    tmp411 = 0.0;
  }
  else
  {
    tmp407 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */);
    tmp408 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */);
    tmp409 = (tmp407 * tmp407) + (tmp408 * tmp408);
    if(tmp409 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, 0.5);
    }
    tmp411 = sqrt(tmp409);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* bus_B61.UPu variable */) = tmp411;
  threadData->lastEquationSolved = 4336;
}

/*
equation index: 4337
type: SIMPLE_ASSIGN
bus_B61.U = bus_B61.UPu * bus_B61.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[885]] /* bus_B61.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* bus_B61.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[193]] /* bus_B61.UNom PARAM */));
  threadData->lastEquationSolved = 4337;
}

/*
equation index: 4338
type: SIMPLE_ASSIGN
trafo_61_4061.Q2Pu = line_4061_4062.terminal1.V.im * trafo_61_4061.terminal2.i.re - line_4061_4062.terminal1.V.re * trafo_61_4061.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3237]] /* trafo_61_4061.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* trafo_61_4061.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3242]] /* trafo_61_4061.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4338;
}

/*
equation index: 4339
type: SIMPLE_ASSIGN
trafo_61_4061.P2Pu = line_4061_4062.terminal1.V.re * trafo_61_4061.terminal2.i.re + line_4061_4062.terminal1.V.im * trafo_61_4061.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3235]] /* trafo_61_4061.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* trafo_61_4061.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3242]] /* trafo_61_4061.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4339;
}

/*
equation index: 4340
type: SIMPLE_ASSIGN
line_4041_4061.Q1Pu = line_4041_4061.terminal1.V.im * line_4041_4061.terminal1.i.re - line_4041_4061.terminal1.V.re * line_4041_4061.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2612]] /* line_4041_4061.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2617]] /* line_4041_4061.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2616]] /* line_4041_4061.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4340;
}

/*
equation index: 4341
type: SIMPLE_ASSIGN
line_4041_4061.P1Pu = line_4041_4061.terminal1.V.re * line_4041_4061.terminal1.i.re + line_4041_4061.terminal1.V.im * line_4041_4061.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2610]] /* line_4041_4061.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2617]] /* line_4041_4061.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2616]] /* line_4041_4061.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4341;
}

/*
equation index: 4342
type: SIMPLE_ASSIGN
line_4061_4062.Q1Pu = line_4061_4062.terminal1.V.im * line_4061_4062.terminal1.i.re - line_4061_4062.terminal1.V.re * line_4061_4062.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2724]] /* line_4061_4062.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* line_4061_4062.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* line_4061_4062.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4342;
}

/*
equation index: 4343
type: SIMPLE_ASSIGN
line_4061_4062.P1Pu = line_4061_4062.terminal1.V.re * line_4061_4062.terminal1.i.re + line_4061_4062.terminal1.V.im * line_4061_4062.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2722]] /* line_4061_4062.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2729]] /* line_4061_4062.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2728]] /* line_4061_4062.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4343;
}

/*
equation index: 4344
type: SIMPLE_ASSIGN
trafo_5_1045.U1Pu = if trafo_5_1045.running.value then if load_05.terminal.V.re == 0.0 and load_05.terminal.V.im == 0.0 then 0.0 else (load_05.terminal.V.re ^ 2.0 + load_05.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4344};
  modelica_real tmp412;
  modelica_real tmp413;
  modelica_real tmp414;
  modelica_boolean tmp415;
  modelica_real tmp416;
  modelica_boolean tmp417;
  modelica_real tmp418;
  tmp417 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[937]] /* trafo_5_1045.running.value DISCRETE */);
  if(tmp417)
  {
    tmp415 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) == 0.0));
    if(tmp415)
    {
      tmp416 = 0.0;
    }
    else
    {
      tmp412 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */);
      tmp413 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */);
      tmp414 = (tmp412 * tmp412) + (tmp413 * tmp413);
      if(tmp414 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp414, 0.5);
      }
      tmp416 = sqrt(tmp414);
    }
    tmp418 = tmp416;
  }
  else
  {
    tmp418 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3228]] /* trafo_5_1045.U1Pu variable */) = tmp418;
  threadData->lastEquationSolved = 4344;
}

/*
equation index: 4345
type: SIMPLE_ASSIGN
trafo_5_1045.Q1Pu = load_05.terminal.V.im * trafo_5_1045.terminal1.i.re - load_05.terminal.V.re * trafo_5_1045.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3226]] /* trafo_5_1045.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4345;
}

/*
equation index: 4346
type: SIMPLE_ASSIGN
trafo_5_1045.P1Pu = load_05.terminal.V.re * trafo_5_1045.terminal1.i.re + load_05.terminal.V.im * trafo_5_1045.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3224]] /* trafo_5_1045.P1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3231]] /* trafo_5_1045.terminal1.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3230]] /* trafo_5_1045.terminal1.i.im variable */));
  threadData->lastEquationSolved = 4346;
}

/*
equation index: 4347
type: SIMPLE_ASSIGN
g06.iStatorPu.im = if g06.running.value then g06.rTfoPu * g06.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4347;
}

/*
equation index: 4348
type: SIMPLE_ASSIGN
g06.uPu.re = if g06.running.value then g06.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1284]] /* g06.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4348;
}

/*
equation index: 4349
type: SIMPLE_ASSIGN
g06.UPu = if g06.running.value then (g06.terminal.V.re ^ 2.0 + g06.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4349};
  modelica_real tmp419;
  modelica_real tmp420;
  modelica_real tmp421;
  modelica_boolean tmp422;
  modelica_real tmp423;
  tmp422 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp422)
  {
    tmp419 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */);
    tmp420 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */);
    tmp421 = (tmp419 * tmp419) + (tmp420 * tmp420);
    if(tmp421 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp421, 0.5);
    }
    tmp423 = sqrt(tmp421);
  }
  else
  {
    tmp423 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* g06.UPu variable */) = tmp423;
  threadData->lastEquationSolved = 4349;
}

/*
equation index: 4350
type: SIMPLE_ASSIGN
g06.uPu.im = if g06.running.value then g06.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* g06.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4350;
}

/*
equation index: 4351
type: SIMPLE_ASSIGN
trafo_g6_1042.U1Pu = if trafo_g6_1042.running.value then if g06.terminal.V.re == 0.0 and g06.terminal.V.im == 0.0 then 0.0 else (g06.terminal.V.re ^ 2.0 + g06.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4351};
  modelica_real tmp424;
  modelica_real tmp425;
  modelica_real tmp426;
  modelica_boolean tmp427;
  modelica_real tmp428;
  modelica_boolean tmp429;
  modelica_real tmp430;
  tmp429 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1003]] /* trafo_g6_1042.running.value DISCRETE */);
  if(tmp429)
  {
    tmp427 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) == 0.0));
    if(tmp427)
    {
      tmp428 = 0.0;
    }
    else
    {
      tmp424 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */);
      tmp425 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */);
      tmp426 = (tmp424 * tmp424) + (tmp425 * tmp425);
      if(tmp426 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp426, 0.5);
      }
      tmp428 = sqrt(tmp426);
    }
    tmp430 = tmp428;
  }
  else
  {
    tmp430 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3418]] /* trafo_g6_1042.U1Pu variable */) = tmp430;
  threadData->lastEquationSolved = 4351;
}

/*
equation index: 4352
type: SIMPLE_ASSIGN
bus_BG06.UPhase = Modelica.Math.atan3(g06.terminal.V.im, g06.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* bus_BG06.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4352;
}

/*
equation index: 4353
type: SIMPLE_ASSIGN
bus_BG06.UPu = if g06.terminal.V.re == 0.0 and g06.terminal.V.im == 0.0 then 0.0 else (g06.terminal.V.re ^ 2.0 + g06.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4353};
  modelica_real tmp431;
  modelica_real tmp432;
  modelica_real tmp433;
  modelica_boolean tmp434;
  modelica_real tmp435;
  tmp434 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) == 0.0));
  if(tmp434)
  {
    tmp435 = 0.0;
  }
  else
  {
    tmp431 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */);
    tmp432 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */);
    tmp433 = (tmp431 * tmp431) + (tmp432 * tmp432);
    if(tmp433 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp433, 0.5);
    }
    tmp435 = sqrt(tmp433);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* bus_BG06.UPu variable */) = tmp435;
  threadData->lastEquationSolved = 4353;
}

/*
equation index: 4354
type: SIMPLE_ASSIGN
bus_BG06.U = bus_BG06.UPu * bus_BG06.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* bus_BG06.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* bus_BG06.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[203]] /* bus_BG06.UNom PARAM */));
  threadData->lastEquationSolved = 4354;
}

/*
equation index: 4355
type: SIMPLE_ASSIGN
g06.thetaInternal.value = if g06.running.value then Modelica.Math.atan3(g06.udPu, g06.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1282]] /* g06.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1287]] /* g06.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1289]] /* g06.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4355;
}

/*
equation index: 4356
type: SIMPLE_ASSIGN
g06.cePu = if g06.running.value then g06.lambdaqPu * g06.idPu - g06.lambdadPu * g06.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* g06.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* g06.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* g06.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4356;
}

/*
equation index: 4357
type: SIMPLE_ASSIGN
g06.PePu = if g06.running.value then g06.cePu * g06.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1248]] /* g06.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* g06.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4357;
}

/*
equation index: 4358
type: SIMPLE_ASSIGN
$DER.g06.lambdaDPu = if g06.running.value then g06.RDPPu * g06.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* der(g06.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* g06.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* g06.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4358;
}

/*
equation index: 4359
type: SIMPLE_ASSIGN
$DER.g06.lambdaQ2Pu = if g06.running.value then g06.RQ2PPu * g06.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* der(g06.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* g06.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* g06.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4359;
}

/*
equation index: 4360
type: SIMPLE_ASSIGN
$DER.g06.lambdaQ1Pu = if g06.running.value then g06.RQ1PPu * g06.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* der(g06.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* g06.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* g06.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4360;
}

/*
equation index: 4361
type: SIMPLE_ASSIGN
g06.iStatorPu.re = if g06.running.value then g06.rTfoPu * g06.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4361;
}

/*
equation index: 4362
type: SIMPLE_ASSIGN
g06.IStatorPu = if g06.running.value then if g06.iStatorPu.re == 0.0 and g06.iStatorPu.im == 0.0 then 0.0 else (g06.iStatorPu.re ^ 2.0 + g06.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4362};
  modelica_real tmp436;
  modelica_real tmp437;
  modelica_real tmp438;
  modelica_boolean tmp439;
  modelica_real tmp440;
  modelica_boolean tmp441;
  modelica_real tmp442;
  tmp441 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp441)
  {
    tmp439 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */) == 0.0));
    if(tmp439)
    {
      tmp440 = 0.0;
    }
    else
    {
      tmp436 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */);
      tmp437 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */);
      tmp438 = (tmp436 * tmp436) + (tmp437 * tmp437);
      if(tmp438 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp438, 0.5);
      }
      tmp440 = sqrt(tmp438);
    }
    tmp442 = tmp440;
  }
  else
  {
    tmp442 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* g06.IStatorPu variable */) = tmp442;
  threadData->lastEquationSolved = 4362;
}

/*
equation index: 4363
type: SIMPLE_ASSIGN
g06.uStatorPu.im = if g06.running.value then (g06.terminal.V.im + (-100.0) * (g06.terminal.i.re * g06.XTfoPu + g06.terminal.i.im * g06.RTfoPu) / g06.SNom) / g06.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* g06.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* g06.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */),"g06.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */),"g06.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4363;
}

/*
equation index: 4364
type: SIMPLE_ASSIGN
g06.uStatorPu.re = if g06.running.value then (g06.terminal.V.re + (-100.0) * (g06.terminal.i.re * g06.RTfoPu - g06.terminal.i.im * g06.XTfoPu) / g06.SNom) / g06.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* g06.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* g06.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */),"g06.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */),"g06.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4364;
}

/*
equation index: 4365
type: SIMPLE_ASSIGN
g06.sStatorPu.im = if g06.running.value then g06.uStatorPu.im * g06.iStatorPu.re - g06.uStatorPu.re * g06.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* g06.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4365;
}

/*
equation index: 4366
type: SIMPLE_ASSIGN
g06.QStatorPu = if g06.running.value then -g06.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* g06.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* g06.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4366;
}

/*
equation index: 4367
type: SIMPLE_ASSIGN
g06.QStatorPuQNom = if g06.running.value then 100.0 * g06.QStatorPu / g06.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1253]] /* g06.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* g06.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[769]] /* g06.QNomAlt PARAM */),"g06.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4367;
}

/*
equation index: 4368
type: SIMPLE_ASSIGN
g06.sStatorPu.re = if g06.running.value then g06.uStatorPu.re * g06.iStatorPu.re + g06.uStatorPu.im * g06.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* g06.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4368;
}

/*
equation index: 4369
type: SIMPLE_ASSIGN
g06.QGenPu = if g06.running.value then g06.terminal.V.re * g06.terminal.i.im - g06.terminal.V.im * g06.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* g06.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4369;
}

/*
equation index: 4370
type: SIMPLE_ASSIGN
g06.QGen = if g06.running.value then 100.0 * g06.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* g06.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* g06.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4370;
}

/*
equation index: 4371
type: SIMPLE_ASSIGN
trafo_g6_1042.Q1Pu = g06.terminal.V.re * g06.terminal.i.im - g06.terminal.V.im * g06.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3416]] /* trafo_g6_1042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4371;
}

/*
equation index: 4372
type: SIMPLE_ASSIGN
trafo_g6_1042.P1Pu = (-g06.terminal.V.re) * g06.terminal.i.re - g06.terminal.V.im * g06.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3414]] /* trafo_g6_1042.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4372;
}

/*
equation index: 4373
type: SIMPLE_ASSIGN
trafo_g14_4042.U2Pu = if trafo_g14_4042.running.value then if line_4042_4043.terminal1.V.re == 0.0 and line_4042_4043.terminal1.V.im == 0.0 then 0.0 else (line_4042_4043.terminal1.V.re ^ 2.0 + line_4042_4043.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4373};
  modelica_real tmp443;
  modelica_real tmp444;
  modelica_real tmp445;
  modelica_boolean tmp446;
  modelica_real tmp447;
  modelica_boolean tmp448;
  modelica_real tmp449;
  tmp448 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */);
  if(tmp448)
  {
    tmp446 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) == 0.0));
    if(tmp446)
    {
      tmp447 = 0.0;
    }
    else
    {
      tmp443 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */);
      tmp444 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */);
      tmp445 = (tmp443 * tmp443) + (tmp444 * tmp444);
      if(tmp445 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp445, 0.5);
      }
      tmp447 = sqrt(tmp445);
    }
    tmp449 = tmp447;
  }
  else
  {
    tmp449 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3321]] /* trafo_g14_4042.U2Pu variable */) = tmp449;
  threadData->lastEquationSolved = 4373;
}

/*
equation index: 4374
type: SIMPLE_ASSIGN
$DER.g14.lambdaDPu = if g14.running.value then g14.RDPPu * g14.iDPu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* der(g14.lambdaDPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1584]] /* g14.RDPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1627]] /* g14.iDPu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4374;
}

/*
equation index: 4375
type: SIMPLE_ASSIGN
g14.iStatorPu.re = if g14.running.value then g14.rTfoPu * g14.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 4375;
}

/*
equation index: 4376
type: SIMPLE_ASSIGN
g14.iStatorPu.im = if g14.running.value then g14.rTfoPu * g14.terminal.i.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 4376;
}

/*
equation index: 4377
type: SIMPLE_ASSIGN
g14.IStatorPu = if g14.running.value then if g14.iStatorPu.re == 0.0 and g14.iStatorPu.im == 0.0 then 0.0 else (g14.iStatorPu.re ^ 2.0 + g14.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4377};
  modelica_real tmp450;
  modelica_real tmp451;
  modelica_real tmp452;
  modelica_boolean tmp453;
  modelica_real tmp454;
  modelica_boolean tmp455;
  modelica_real tmp456;
  tmp455 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp455)
  {
    tmp453 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */) == 0.0));
    if(tmp453)
    {
      tmp454 = 0.0;
    }
    else
    {
      tmp450 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */);
      tmp451 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */);
      tmp452 = (tmp450 * tmp450) + (tmp451 * tmp451);
      if(tmp452 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp452, 0.5);
      }
      tmp454 = sqrt(tmp452);
    }
    tmp456 = tmp454;
  }
  else
  {
    tmp456 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1612]] /* g14.IStatorPu variable */) = tmp456;
  threadData->lastEquationSolved = 4377;
}

/*
equation index: 4378
type: SIMPLE_ASSIGN
g14.uStatorPu.re = if g14.running.value then (g14.terminal.V.re + (-100.0) * (g14.terminal.i.re * g14.RTfoPu - g14.terminal.i.im * g14.XTfoPu) / g14.SNom) / g14.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* g14.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* g14.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */),"g14.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */),"g14.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4378;
}

/*
equation index: 4379
type: SIMPLE_ASSIGN
g14.uPu.re = if g14.running.value then g14.terminal.V.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1652]] /* g14.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 4379;
}

/*
equation index: 4380
type: SIMPLE_ASSIGN
$DER.g14.lambdaQ2Pu = if g14.running.value then g14.RQ2PPu * g14.iQ2Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* der(g14.lambdaQ2Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1586]] /* g14.RQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1629]] /* g14.iQ2Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4380;
}

/*
equation index: 4381
type: SIMPLE_ASSIGN
$DER.g14.lambdaQ1Pu = if g14.running.value then g14.RQ1PPu * g14.iQ1Pu / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* der(g14.lambdaQ1Pu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* g14.RQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1628]] /* g14.iQ1Pu variable */)),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 4381;
}

/*
equation index: 4382
type: SIMPLE_ASSIGN
g14.cePu = if g14.running.value then g14.lambdaqPu * g14.idPu - g14.lambdadPu * g14.iqPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1623]] /* g14.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* g14.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* g14.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 4382;
}

/*
equation index: 4383
type: SIMPLE_ASSIGN
g14.PePu = if g14.running.value then g14.cePu * g14.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1616]] /* g14.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1623]] /* g14.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 4383;
}

/*
equation index: 4384
type: SIMPLE_ASSIGN
g14.thetaInternal.value = if g14.running.value then Modelica.Math.atan3(g14.udPu, g14.uqPu, 0.0) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1650]] /* g14.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* g14.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* g14.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 4384;
}

/*
equation index: 4385
type: SIMPLE_ASSIGN
g14.uStatorPu.im = if g14.running.value then (g14.terminal.V.im + (-100.0) * (g14.terminal.i.re * g14.XTfoPu + g14.terminal.i.im * g14.RTfoPu) / g14.SNom) / g14.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) + (-100.0) * (DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* g14.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* g14.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */),"g14.SNom",equationIndexes)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */),"g14.rTfoPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 4385;
}

/*
equation index: 4386
type: SIMPLE_ASSIGN
g14.sStatorPu.im = if g14.running.value then g14.uStatorPu.im * g14.iStatorPu.re - g14.uStatorPu.re * g14.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1643]] /* g14.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 4386;
}

/*
equation index: 4387
type: SIMPLE_ASSIGN
g14.QStatorPu = if g14.running.value then -g14.sStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1620]] /* g14.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1643]] /* g14.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4387;
}

/*
equation index: 4388
type: SIMPLE_ASSIGN
g14.QStatorPuQNom = if g14.running.value then 100.0 * g14.QStatorPu / g14.QNomAlt else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1621]] /* g14.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(100.0) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1620]] /* g14.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1581]] /* g14.QNomAlt PARAM */),"g14.QNomAlt",equationIndexes)):0.0);
  threadData->lastEquationSolved = 4388;
}

/*
equation index: 4389
type: SIMPLE_ASSIGN
g14.sStatorPu.re = if g14.running.value then g14.uStatorPu.re * g14.iStatorPu.re + g14.uStatorPu.im * g14.iStatorPu.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1644]] /* g14.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 4389;
}

/*
equation index: 4390
type: SIMPLE_ASSIGN
g14.QGenPu = if g14.running.value then g14.terminal.V.re * g14.terminal.i.im - g14.terminal.V.im * g14.terminal.i.re else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1619]] /* g14.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 4390;
}

/*
equation index: 4391
type: SIMPLE_ASSIGN
g14.QGen = if g14.running.value then 100.0 * g14.QGenPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1618]] /* g14.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1619]] /* g14.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 4391;
}

/*
equation index: 4392
type: SIMPLE_ASSIGN
g14.UPu = if g14.running.value then (g14.terminal.V.re ^ 2.0 + g14.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4392};
  modelica_real tmp457;
  modelica_real tmp458;
  modelica_real tmp459;
  modelica_boolean tmp460;
  modelica_real tmp461;
  tmp460 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp460)
  {
    tmp457 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */);
    tmp458 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */);
    tmp459 = (tmp457 * tmp457) + (tmp458 * tmp458);
    if(tmp459 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp459, 0.5);
    }
    tmp461 = sqrt(tmp459);
  }
  else
  {
    tmp461 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1622]] /* g14.UPu variable */) = tmp461;
  threadData->lastEquationSolved = 4392;
}

/*
equation index: 4393
type: SIMPLE_ASSIGN
g14.uPu.im = if g14.running.value then g14.terminal.V.im else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1651]] /* g14.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 4393;
}

/*
equation index: 4394
type: SIMPLE_ASSIGN
trafo_g14_4042.U1Pu = if trafo_g14_4042.running.value then if g14.terminal.V.re == 0.0 and g14.terminal.V.im == 0.0 then 0.0 else (g14.terminal.V.re ^ 2.0 + g14.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4394};
  modelica_real tmp462;
  modelica_real tmp463;
  modelica_real tmp464;
  modelica_boolean tmp465;
  modelica_real tmp466;
  modelica_boolean tmp467;
  modelica_real tmp468;
  tmp467 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[967]] /* trafo_g14_4042.running.value DISCRETE */);
  if(tmp467)
  {
    tmp465 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) == 0.0));
    if(tmp465)
    {
      tmp466 = 0.0;
    }
    else
    {
      tmp462 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */);
      tmp463 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */);
      tmp464 = (tmp462 * tmp462) + (tmp463 * tmp463);
      if(tmp464 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp464, 0.5);
      }
      tmp466 = sqrt(tmp464);
    }
    tmp468 = tmp466;
  }
  else
  {
    tmp468 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3320]] /* trafo_g14_4042.U1Pu variable */) = tmp468;
  threadData->lastEquationSolved = 4394;
}

/*
equation index: 4395
type: SIMPLE_ASSIGN
trafo_g14_4042.Q1Pu = g14.terminal.V.re * g14.terminal.i.im - g14.terminal.V.im * g14.terminal.i.re
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3318]] /* trafo_g14_4042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)));
  threadData->lastEquationSolved = 4395;
}

/*
equation index: 4396
type: SIMPLE_ASSIGN
trafo_g14_4042.P1Pu = (-g14.terminal.V.re) * g14.terminal.i.re - g14.terminal.V.im * g14.terminal.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3316]] /* trafo_g14_4042.P1Pu variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)));
  threadData->lastEquationSolved = 4396;
}

/*
equation index: 4397
type: SIMPLE_ASSIGN
bus_BG14.UPhase = Modelica.Math.atan3(g14.terminal.V.im, g14.terminal.V.re, 0.0)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* bus_BG14.UPhase variable */) = omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */), 0.0);
  threadData->lastEquationSolved = 4397;
}

/*
equation index: 4398
type: SIMPLE_ASSIGN
bus_BG14.UPu = if g14.terminal.V.re == 0.0 and g14.terminal.V.im == 0.0 then 0.0 else (g14.terminal.V.re ^ 2.0 + g14.terminal.V.im ^ 2.0) ^ 0.5
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4398};
  modelica_real tmp469;
  modelica_real tmp470;
  modelica_real tmp471;
  modelica_boolean tmp472;
  modelica_real tmp473;
  tmp472 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) == 0.0));
  if(tmp472)
  {
    tmp473 = 0.0;
  }
  else
  {
    tmp469 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */);
    tmp470 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */);
    tmp471 = (tmp469 * tmp469) + (tmp470 * tmp470);
    if(tmp471 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp471, 0.5);
    }
    tmp473 = sqrt(tmp471);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* bus_BG14.UPu variable */) = tmp473;
  threadData->lastEquationSolved = 4398;
}

/*
equation index: 4399
type: SIMPLE_ASSIGN
bus_BG14.U = bus_BG14.UPu * bus_BG14.UNom
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[975]] /* bus_BG14.U variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* bus_BG14.UPu variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[211]] /* bus_BG14.UNom PARAM */));
  threadData->lastEquationSolved = 4399;
}

/*
equation index: 4400
type: SIMPLE_ASSIGN
trafo_g14_4042.Q2Pu = line_4042_4043.terminal1.V.im * trafo_g14_4042.terminal2.i.re - line_4042_4043.terminal1.V.re * trafo_g14_4042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3319]] /* trafo_g14_4042.Q2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3323]] /* trafo_g14_4042.terminal2.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3322]] /* trafo_g14_4042.terminal2.i.im variable */)));
  threadData->lastEquationSolved = 4400;
}

/*
equation index: 4401
type: SIMPLE_ASSIGN
trafo_g14_4042.P2Pu = line_4042_4043.terminal1.V.re * trafo_g14_4042.terminal2.i.re + line_4042_4043.terminal1.V.im * trafo_g14_4042.terminal2.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3317]] /* trafo_g14_4042.P2Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3323]] /* trafo_g14_4042.terminal2.i.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3322]] /* trafo_g14_4042.terminal2.i.im variable */));
  threadData->lastEquationSolved = 4401;
}

/*
equation index: 4402
type: SIMPLE_ASSIGN
trafo_42_4042.U2Pu = if trafo_42_4042.running.value then if line_4042_4043.terminal1.V.re == 0.0 and line_4042_4043.terminal1.V.im == 0.0 then 0.0 else (line_4042_4043.terminal1.V.re ^ 2.0 + line_4042_4043.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4402};
  modelica_real tmp474;
  modelica_real tmp475;
  modelica_real tmp476;
  modelica_boolean tmp477;
  modelica_real tmp478;
  modelica_boolean tmp479;
  modelica_real tmp480;
  tmp479 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */);
  if(tmp479)
  {
    tmp477 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) == 0.0));
    if(tmp477)
    {
      tmp478 = 0.0;
    }
    else
    {
      tmp474 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */);
      tmp475 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */);
      tmp476 = (tmp474 * tmp474) + (tmp475 * tmp475);
      if(tmp476 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp476, 0.5);
      }
      tmp478 = sqrt(tmp476);
    }
    tmp480 = tmp478;
  }
  else
  {
    tmp480 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3169]] /* trafo_42_4042.U2Pu variable */) = tmp480;
  threadData->lastEquationSolved = 4402;
}

/*
equation index: 4403
type: SIMPLE_ASSIGN
trafo_42_4042.U1Pu = if trafo_42_4042.running.value then if load_42.terminal.V.re == 0.0 and load_42.terminal.V.im == 0.0 then 0.0 else (load_42.terminal.V.re ^ 2.0 + load_42.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4403};
  modelica_real tmp481;
  modelica_real tmp482;
  modelica_real tmp483;
  modelica_boolean tmp484;
  modelica_real tmp485;
  modelica_boolean tmp486;
  modelica_real tmp487;
  tmp486 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[919]] /* trafo_42_4042.running.value DISCRETE */);
  if(tmp486)
  {
    tmp484 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) == 0.0));
    if(tmp484)
    {
      tmp485 = 0.0;
    }
    else
    {
      tmp481 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */);
      tmp482 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */);
      tmp483 = (tmp481 * tmp481) + (tmp482 * tmp482);
      if(tmp483 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp483, 0.5);
      }
      tmp485 = sqrt(tmp483);
    }
    tmp487 = tmp485;
  }
  else
  {
    tmp487 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3168]] /* trafo_42_4042.U1Pu variable */) = tmp487;
  threadData->lastEquationSolved = 4403;
}

/*
equation index: 4404
type: SIMPLE_ASSIGN
trafo_42_4042.Q1Pu = load_42.terminal.V.im * trafo_42_4042.terminal1.i.re - load_42.terminal.V.re * trafo_42_4042.terminal1.i.im
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_4404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3166]] /* trafo_42_4042.Q1Pu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* trafo_42_4042.terminal1.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* trafo_42_4042.terminal1.i.im variable */)));
  threadData->lastEquationSolved = 4404;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_4(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[458])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_1833,
    MyNordic_initialized_TestCase_initialized_eqFunction_1834,
    MyNordic_initialized_TestCase_initialized_eqFunction_1835,
    MyNordic_initialized_TestCase_initialized_eqFunction_1836,
    MyNordic_initialized_TestCase_initialized_eqFunction_1837,
    MyNordic_initialized_TestCase_initialized_eqFunction_1838,
    MyNordic_initialized_TestCase_initialized_eqFunction_1839,
    MyNordic_initialized_TestCase_initialized_eqFunction_1840,
    MyNordic_initialized_TestCase_initialized_eqFunction_1841,
    MyNordic_initialized_TestCase_initialized_eqFunction_1842,
    MyNordic_initialized_TestCase_initialized_eqFunction_1843,
    MyNordic_initialized_TestCase_initialized_eqFunction_1844,
    MyNordic_initialized_TestCase_initialized_eqFunction_1845,
    MyNordic_initialized_TestCase_initialized_eqFunction_1846,
    MyNordic_initialized_TestCase_initialized_eqFunction_1847,
    MyNordic_initialized_TestCase_initialized_eqFunction_1848,
    MyNordic_initialized_TestCase_initialized_eqFunction_1849,
    MyNordic_initialized_TestCase_initialized_eqFunction_1850,
    MyNordic_initialized_TestCase_initialized_eqFunction_1851,
    MyNordic_initialized_TestCase_initialized_eqFunction_1852,
    MyNordic_initialized_TestCase_initialized_eqFunction_1853,
    MyNordic_initialized_TestCase_initialized_eqFunction_1854,
    MyNordic_initialized_TestCase_initialized_eqFunction_1855,
    MyNordic_initialized_TestCase_initialized_eqFunction_1856,
    MyNordic_initialized_TestCase_initialized_eqFunction_1857,
    MyNordic_initialized_TestCase_initialized_eqFunction_1858,
    MyNordic_initialized_TestCase_initialized_eqFunction_1859,
    MyNordic_initialized_TestCase_initialized_eqFunction_1860,
    MyNordic_initialized_TestCase_initialized_eqFunction_1861,
    MyNordic_initialized_TestCase_initialized_eqFunction_1862,
    MyNordic_initialized_TestCase_initialized_eqFunction_1863,
    MyNordic_initialized_TestCase_initialized_eqFunction_1864,
    MyNordic_initialized_TestCase_initialized_eqFunction_1865,
    MyNordic_initialized_TestCase_initialized_eqFunction_1866,
    MyNordic_initialized_TestCase_initialized_eqFunction_1867,
    MyNordic_initialized_TestCase_initialized_eqFunction_1868,
    MyNordic_initialized_TestCase_initialized_eqFunction_1869,
    MyNordic_initialized_TestCase_initialized_eqFunction_1870,
    MyNordic_initialized_TestCase_initialized_eqFunction_1871,
    MyNordic_initialized_TestCase_initialized_eqFunction_1872,
    MyNordic_initialized_TestCase_initialized_eqFunction_1873,
    MyNordic_initialized_TestCase_initialized_eqFunction_1874,
    MyNordic_initialized_TestCase_initialized_eqFunction_1875,
    MyNordic_initialized_TestCase_initialized_eqFunction_1876,
    MyNordic_initialized_TestCase_initialized_eqFunction_1877,
    MyNordic_initialized_TestCase_initialized_eqFunction_1878,
    MyNordic_initialized_TestCase_initialized_eqFunction_1879,
    MyNordic_initialized_TestCase_initialized_eqFunction_1880,
    MyNordic_initialized_TestCase_initialized_eqFunction_1881,
    MyNordic_initialized_TestCase_initialized_eqFunction_1882,
    MyNordic_initialized_TestCase_initialized_eqFunction_1883,
    MyNordic_initialized_TestCase_initialized_eqFunction_1884,
    MyNordic_initialized_TestCase_initialized_eqFunction_1885,
    MyNordic_initialized_TestCase_initialized_eqFunction_1886,
    MyNordic_initialized_TestCase_initialized_eqFunction_1887,
    MyNordic_initialized_TestCase_initialized_eqFunction_1888,
    MyNordic_initialized_TestCase_initialized_eqFunction_1889,
    MyNordic_initialized_TestCase_initialized_eqFunction_1890,
    MyNordic_initialized_TestCase_initialized_eqFunction_1891,
    MyNordic_initialized_TestCase_initialized_eqFunction_1892,
    MyNordic_initialized_TestCase_initialized_eqFunction_1893,
    MyNordic_initialized_TestCase_initialized_eqFunction_1894,
    MyNordic_initialized_TestCase_initialized_eqFunction_1895,
    MyNordic_initialized_TestCase_initialized_eqFunction_1896,
    MyNordic_initialized_TestCase_initialized_eqFunction_1897,
    MyNordic_initialized_TestCase_initialized_eqFunction_1898,
    MyNordic_initialized_TestCase_initialized_eqFunction_1899,
    MyNordic_initialized_TestCase_initialized_eqFunction_1900,
    MyNordic_initialized_TestCase_initialized_eqFunction_1901,
    MyNordic_initialized_TestCase_initialized_eqFunction_1902,
    MyNordic_initialized_TestCase_initialized_eqFunction_1903,
    MyNordic_initialized_TestCase_initialized_eqFunction_1904,
    MyNordic_initialized_TestCase_initialized_eqFunction_1905,
    MyNordic_initialized_TestCase_initialized_eqFunction_1906,
    MyNordic_initialized_TestCase_initialized_eqFunction_1907,
    MyNordic_initialized_TestCase_initialized_eqFunction_1908,
    MyNordic_initialized_TestCase_initialized_eqFunction_1909,
    MyNordic_initialized_TestCase_initialized_eqFunction_1910,
    MyNordic_initialized_TestCase_initialized_eqFunction_1911,
    MyNordic_initialized_TestCase_initialized_eqFunction_1912,
    MyNordic_initialized_TestCase_initialized_eqFunction_1913,
    MyNordic_initialized_TestCase_initialized_eqFunction_1914,
    MyNordic_initialized_TestCase_initialized_eqFunction_1915,
    MyNordic_initialized_TestCase_initialized_eqFunction_1916,
    MyNordic_initialized_TestCase_initialized_eqFunction_1917,
    MyNordic_initialized_TestCase_initialized_eqFunction_1918,
    MyNordic_initialized_TestCase_initialized_eqFunction_1919,
    MyNordic_initialized_TestCase_initialized_eqFunction_1920,
    MyNordic_initialized_TestCase_initialized_eqFunction_1921,
    MyNordic_initialized_TestCase_initialized_eqFunction_1922,
    MyNordic_initialized_TestCase_initialized_eqFunction_1923,
    MyNordic_initialized_TestCase_initialized_eqFunction_1924,
    MyNordic_initialized_TestCase_initialized_eqFunction_1925,
    MyNordic_initialized_TestCase_initialized_eqFunction_1926,
    MyNordic_initialized_TestCase_initialized_eqFunction_1927,
    MyNordic_initialized_TestCase_initialized_eqFunction_1928,
    MyNordic_initialized_TestCase_initialized_eqFunction_1929,
    MyNordic_initialized_TestCase_initialized_eqFunction_1930,
    MyNordic_initialized_TestCase_initialized_eqFunction_1931,
    MyNordic_initialized_TestCase_initialized_eqFunction_1932,
    MyNordic_initialized_TestCase_initialized_eqFunction_1933,
    MyNordic_initialized_TestCase_initialized_eqFunction_1934,
    MyNordic_initialized_TestCase_initialized_eqFunction_1935,
    MyNordic_initialized_TestCase_initialized_eqFunction_1936,
    MyNordic_initialized_TestCase_initialized_eqFunction_1937,
    MyNordic_initialized_TestCase_initialized_eqFunction_1938,
    MyNordic_initialized_TestCase_initialized_eqFunction_1939,
    MyNordic_initialized_TestCase_initialized_eqFunction_1940,
    MyNordic_initialized_TestCase_initialized_eqFunction_1941,
    MyNordic_initialized_TestCase_initialized_eqFunction_1942,
    MyNordic_initialized_TestCase_initialized_eqFunction_1943,
    MyNordic_initialized_TestCase_initialized_eqFunction_1944,
    MyNordic_initialized_TestCase_initialized_eqFunction_1945,
    MyNordic_initialized_TestCase_initialized_eqFunction_1946,
    MyNordic_initialized_TestCase_initialized_eqFunction_1947,
    MyNordic_initialized_TestCase_initialized_eqFunction_1948,
    MyNordic_initialized_TestCase_initialized_eqFunction_1949,
    MyNordic_initialized_TestCase_initialized_eqFunction_1950,
    MyNordic_initialized_TestCase_initialized_eqFunction_1951,
    MyNordic_initialized_TestCase_initialized_eqFunction_1952,
    MyNordic_initialized_TestCase_initialized_eqFunction_1953,
    MyNordic_initialized_TestCase_initialized_eqFunction_1954,
    MyNordic_initialized_TestCase_initialized_eqFunction_1955,
    MyNordic_initialized_TestCase_initialized_eqFunction_1956,
    MyNordic_initialized_TestCase_initialized_eqFunction_1957,
    MyNordic_initialized_TestCase_initialized_eqFunction_1958,
    MyNordic_initialized_TestCase_initialized_eqFunction_4073,
    MyNordic_initialized_TestCase_initialized_eqFunction_4074,
    MyNordic_initialized_TestCase_initialized_eqFunction_4075,
    MyNordic_initialized_TestCase_initialized_eqFunction_4076,
    MyNordic_initialized_TestCase_initialized_eqFunction_4077,
    MyNordic_initialized_TestCase_initialized_eqFunction_4078,
    MyNordic_initialized_TestCase_initialized_eqFunction_4079,
    MyNordic_initialized_TestCase_initialized_eqFunction_4080,
    MyNordic_initialized_TestCase_initialized_eqFunction_4081,
    MyNordic_initialized_TestCase_initialized_eqFunction_4082,
    MyNordic_initialized_TestCase_initialized_eqFunction_4083,
    MyNordic_initialized_TestCase_initialized_eqFunction_4084,
    MyNordic_initialized_TestCase_initialized_eqFunction_4085,
    MyNordic_initialized_TestCase_initialized_eqFunction_4086,
    MyNordic_initialized_TestCase_initialized_eqFunction_4087,
    MyNordic_initialized_TestCase_initialized_eqFunction_4088,
    MyNordic_initialized_TestCase_initialized_eqFunction_4089,
    MyNordic_initialized_TestCase_initialized_eqFunction_4090,
    MyNordic_initialized_TestCase_initialized_eqFunction_4091,
    MyNordic_initialized_TestCase_initialized_eqFunction_4092,
    MyNordic_initialized_TestCase_initialized_eqFunction_4093,
    MyNordic_initialized_TestCase_initialized_eqFunction_4094,
    MyNordic_initialized_TestCase_initialized_eqFunction_4095,
    MyNordic_initialized_TestCase_initialized_eqFunction_4096,
    MyNordic_initialized_TestCase_initialized_eqFunction_4097,
    MyNordic_initialized_TestCase_initialized_eqFunction_4098,
    MyNordic_initialized_TestCase_initialized_eqFunction_4099,
    MyNordic_initialized_TestCase_initialized_eqFunction_4100,
    MyNordic_initialized_TestCase_initialized_eqFunction_4101,
    MyNordic_initialized_TestCase_initialized_eqFunction_4102,
    MyNordic_initialized_TestCase_initialized_eqFunction_4103,
    MyNordic_initialized_TestCase_initialized_eqFunction_4104,
    MyNordic_initialized_TestCase_initialized_eqFunction_4105,
    MyNordic_initialized_TestCase_initialized_eqFunction_4106,
    MyNordic_initialized_TestCase_initialized_eqFunction_4107,
    MyNordic_initialized_TestCase_initialized_eqFunction_4108,
    MyNordic_initialized_TestCase_initialized_eqFunction_4109,
    MyNordic_initialized_TestCase_initialized_eqFunction_4110,
    MyNordic_initialized_TestCase_initialized_eqFunction_4111,
    MyNordic_initialized_TestCase_initialized_eqFunction_4112,
    MyNordic_initialized_TestCase_initialized_eqFunction_4113,
    MyNordic_initialized_TestCase_initialized_eqFunction_4114,
    MyNordic_initialized_TestCase_initialized_eqFunction_4115,
    MyNordic_initialized_TestCase_initialized_eqFunction_4116,
    MyNordic_initialized_TestCase_initialized_eqFunction_4117,
    MyNordic_initialized_TestCase_initialized_eqFunction_4118,
    MyNordic_initialized_TestCase_initialized_eqFunction_4119,
    MyNordic_initialized_TestCase_initialized_eqFunction_4120,
    MyNordic_initialized_TestCase_initialized_eqFunction_4121,
    MyNordic_initialized_TestCase_initialized_eqFunction_4122,
    MyNordic_initialized_TestCase_initialized_eqFunction_4123,
    MyNordic_initialized_TestCase_initialized_eqFunction_4124,
    MyNordic_initialized_TestCase_initialized_eqFunction_4125,
    MyNordic_initialized_TestCase_initialized_eqFunction_4126,
    MyNordic_initialized_TestCase_initialized_eqFunction_4127,
    MyNordic_initialized_TestCase_initialized_eqFunction_4128,
    MyNordic_initialized_TestCase_initialized_eqFunction_4129,
    MyNordic_initialized_TestCase_initialized_eqFunction_4130,
    MyNordic_initialized_TestCase_initialized_eqFunction_4131,
    MyNordic_initialized_TestCase_initialized_eqFunction_4132,
    MyNordic_initialized_TestCase_initialized_eqFunction_4133,
    MyNordic_initialized_TestCase_initialized_eqFunction_4134,
    MyNordic_initialized_TestCase_initialized_eqFunction_4135,
    MyNordic_initialized_TestCase_initialized_eqFunction_4136,
    MyNordic_initialized_TestCase_initialized_eqFunction_4137,
    MyNordic_initialized_TestCase_initialized_eqFunction_4138,
    MyNordic_initialized_TestCase_initialized_eqFunction_4139,
    MyNordic_initialized_TestCase_initialized_eqFunction_4140,
    MyNordic_initialized_TestCase_initialized_eqFunction_4141,
    MyNordic_initialized_TestCase_initialized_eqFunction_4142,
    MyNordic_initialized_TestCase_initialized_eqFunction_4143,
    MyNordic_initialized_TestCase_initialized_eqFunction_4144,
    MyNordic_initialized_TestCase_initialized_eqFunction_4145,
    MyNordic_initialized_TestCase_initialized_eqFunction_4146,
    MyNordic_initialized_TestCase_initialized_eqFunction_4147,
    MyNordic_initialized_TestCase_initialized_eqFunction_4148,
    MyNordic_initialized_TestCase_initialized_eqFunction_4149,
    MyNordic_initialized_TestCase_initialized_eqFunction_4150,
    MyNordic_initialized_TestCase_initialized_eqFunction_4151,
    MyNordic_initialized_TestCase_initialized_eqFunction_4152,
    MyNordic_initialized_TestCase_initialized_eqFunction_4153,
    MyNordic_initialized_TestCase_initialized_eqFunction_4154,
    MyNordic_initialized_TestCase_initialized_eqFunction_4155,
    MyNordic_initialized_TestCase_initialized_eqFunction_4156,
    MyNordic_initialized_TestCase_initialized_eqFunction_4157,
    MyNordic_initialized_TestCase_initialized_eqFunction_4158,
    MyNordic_initialized_TestCase_initialized_eqFunction_4159,
    MyNordic_initialized_TestCase_initialized_eqFunction_4160,
    MyNordic_initialized_TestCase_initialized_eqFunction_4161,
    MyNordic_initialized_TestCase_initialized_eqFunction_4162,
    MyNordic_initialized_TestCase_initialized_eqFunction_4163,
    MyNordic_initialized_TestCase_initialized_eqFunction_4164,
    MyNordic_initialized_TestCase_initialized_eqFunction_4165,
    MyNordic_initialized_TestCase_initialized_eqFunction_4166,
    MyNordic_initialized_TestCase_initialized_eqFunction_4167,
    MyNordic_initialized_TestCase_initialized_eqFunction_4168,
    MyNordic_initialized_TestCase_initialized_eqFunction_4169,
    MyNordic_initialized_TestCase_initialized_eqFunction_4170,
    MyNordic_initialized_TestCase_initialized_eqFunction_4171,
    MyNordic_initialized_TestCase_initialized_eqFunction_4172,
    MyNordic_initialized_TestCase_initialized_eqFunction_4173,
    MyNordic_initialized_TestCase_initialized_eqFunction_4174,
    MyNordic_initialized_TestCase_initialized_eqFunction_4175,
    MyNordic_initialized_TestCase_initialized_eqFunction_4176,
    MyNordic_initialized_TestCase_initialized_eqFunction_4177,
    MyNordic_initialized_TestCase_initialized_eqFunction_4178,
    MyNordic_initialized_TestCase_initialized_eqFunction_4179,
    MyNordic_initialized_TestCase_initialized_eqFunction_4180,
    MyNordic_initialized_TestCase_initialized_eqFunction_4181,
    MyNordic_initialized_TestCase_initialized_eqFunction_4182,
    MyNordic_initialized_TestCase_initialized_eqFunction_4183,
    MyNordic_initialized_TestCase_initialized_eqFunction_4184,
    MyNordic_initialized_TestCase_initialized_eqFunction_4185,
    MyNordic_initialized_TestCase_initialized_eqFunction_4186,
    MyNordic_initialized_TestCase_initialized_eqFunction_4187,
    MyNordic_initialized_TestCase_initialized_eqFunction_4188,
    MyNordic_initialized_TestCase_initialized_eqFunction_4189,
    MyNordic_initialized_TestCase_initialized_eqFunction_4190,
    MyNordic_initialized_TestCase_initialized_eqFunction_4191,
    MyNordic_initialized_TestCase_initialized_eqFunction_4192,
    MyNordic_initialized_TestCase_initialized_eqFunction_4193,
    MyNordic_initialized_TestCase_initialized_eqFunction_4194,
    MyNordic_initialized_TestCase_initialized_eqFunction_4195,
    MyNordic_initialized_TestCase_initialized_eqFunction_4196,
    MyNordic_initialized_TestCase_initialized_eqFunction_4197,
    MyNordic_initialized_TestCase_initialized_eqFunction_4198,
    MyNordic_initialized_TestCase_initialized_eqFunction_4199,
    MyNordic_initialized_TestCase_initialized_eqFunction_4200,
    MyNordic_initialized_TestCase_initialized_eqFunction_4201,
    MyNordic_initialized_TestCase_initialized_eqFunction_4202,
    MyNordic_initialized_TestCase_initialized_eqFunction_4203,
    MyNordic_initialized_TestCase_initialized_eqFunction_4204,
    MyNordic_initialized_TestCase_initialized_eqFunction_4205,
    MyNordic_initialized_TestCase_initialized_eqFunction_4206,
    MyNordic_initialized_TestCase_initialized_eqFunction_4207,
    MyNordic_initialized_TestCase_initialized_eqFunction_4208,
    MyNordic_initialized_TestCase_initialized_eqFunction_4209,
    MyNordic_initialized_TestCase_initialized_eqFunction_4210,
    MyNordic_initialized_TestCase_initialized_eqFunction_4211,
    MyNordic_initialized_TestCase_initialized_eqFunction_4212,
    MyNordic_initialized_TestCase_initialized_eqFunction_4213,
    MyNordic_initialized_TestCase_initialized_eqFunction_4214,
    MyNordic_initialized_TestCase_initialized_eqFunction_4215,
    MyNordic_initialized_TestCase_initialized_eqFunction_4216,
    MyNordic_initialized_TestCase_initialized_eqFunction_4217,
    MyNordic_initialized_TestCase_initialized_eqFunction_4218,
    MyNordic_initialized_TestCase_initialized_eqFunction_4219,
    MyNordic_initialized_TestCase_initialized_eqFunction_4220,
    MyNordic_initialized_TestCase_initialized_eqFunction_4221,
    MyNordic_initialized_TestCase_initialized_eqFunction_4222,
    MyNordic_initialized_TestCase_initialized_eqFunction_4223,
    MyNordic_initialized_TestCase_initialized_eqFunction_4224,
    MyNordic_initialized_TestCase_initialized_eqFunction_4225,
    MyNordic_initialized_TestCase_initialized_eqFunction_4226,
    MyNordic_initialized_TestCase_initialized_eqFunction_4227,
    MyNordic_initialized_TestCase_initialized_eqFunction_4228,
    MyNordic_initialized_TestCase_initialized_eqFunction_4229,
    MyNordic_initialized_TestCase_initialized_eqFunction_4230,
    MyNordic_initialized_TestCase_initialized_eqFunction_4231,
    MyNordic_initialized_TestCase_initialized_eqFunction_4232,
    MyNordic_initialized_TestCase_initialized_eqFunction_4233,
    MyNordic_initialized_TestCase_initialized_eqFunction_4234,
    MyNordic_initialized_TestCase_initialized_eqFunction_4235,
    MyNordic_initialized_TestCase_initialized_eqFunction_4236,
    MyNordic_initialized_TestCase_initialized_eqFunction_4237,
    MyNordic_initialized_TestCase_initialized_eqFunction_4238,
    MyNordic_initialized_TestCase_initialized_eqFunction_4239,
    MyNordic_initialized_TestCase_initialized_eqFunction_4240,
    MyNordic_initialized_TestCase_initialized_eqFunction_4241,
    MyNordic_initialized_TestCase_initialized_eqFunction_4242,
    MyNordic_initialized_TestCase_initialized_eqFunction_4243,
    MyNordic_initialized_TestCase_initialized_eqFunction_4244,
    MyNordic_initialized_TestCase_initialized_eqFunction_4245,
    MyNordic_initialized_TestCase_initialized_eqFunction_4246,
    MyNordic_initialized_TestCase_initialized_eqFunction_4247,
    MyNordic_initialized_TestCase_initialized_eqFunction_4248,
    MyNordic_initialized_TestCase_initialized_eqFunction_4249,
    MyNordic_initialized_TestCase_initialized_eqFunction_4250,
    MyNordic_initialized_TestCase_initialized_eqFunction_4251,
    MyNordic_initialized_TestCase_initialized_eqFunction_4252,
    MyNordic_initialized_TestCase_initialized_eqFunction_4253,
    MyNordic_initialized_TestCase_initialized_eqFunction_4254,
    MyNordic_initialized_TestCase_initialized_eqFunction_4255,
    MyNordic_initialized_TestCase_initialized_eqFunction_4256,
    MyNordic_initialized_TestCase_initialized_eqFunction_4257,
    MyNordic_initialized_TestCase_initialized_eqFunction_4258,
    MyNordic_initialized_TestCase_initialized_eqFunction_4259,
    MyNordic_initialized_TestCase_initialized_eqFunction_4260,
    MyNordic_initialized_TestCase_initialized_eqFunction_4261,
    MyNordic_initialized_TestCase_initialized_eqFunction_4262,
    MyNordic_initialized_TestCase_initialized_eqFunction_4263,
    MyNordic_initialized_TestCase_initialized_eqFunction_4264,
    MyNordic_initialized_TestCase_initialized_eqFunction_4265,
    MyNordic_initialized_TestCase_initialized_eqFunction_4266,
    MyNordic_initialized_TestCase_initialized_eqFunction_4267,
    MyNordic_initialized_TestCase_initialized_eqFunction_4268,
    MyNordic_initialized_TestCase_initialized_eqFunction_4269,
    MyNordic_initialized_TestCase_initialized_eqFunction_4270,
    MyNordic_initialized_TestCase_initialized_eqFunction_4271,
    MyNordic_initialized_TestCase_initialized_eqFunction_4272,
    MyNordic_initialized_TestCase_initialized_eqFunction_4273,
    MyNordic_initialized_TestCase_initialized_eqFunction_4274,
    MyNordic_initialized_TestCase_initialized_eqFunction_4275,
    MyNordic_initialized_TestCase_initialized_eqFunction_4276,
    MyNordic_initialized_TestCase_initialized_eqFunction_4277,
    MyNordic_initialized_TestCase_initialized_eqFunction_4278,
    MyNordic_initialized_TestCase_initialized_eqFunction_4279,
    MyNordic_initialized_TestCase_initialized_eqFunction_4280,
    MyNordic_initialized_TestCase_initialized_eqFunction_4281,
    MyNordic_initialized_TestCase_initialized_eqFunction_4282,
    MyNordic_initialized_TestCase_initialized_eqFunction_4283,
    MyNordic_initialized_TestCase_initialized_eqFunction_4284,
    MyNordic_initialized_TestCase_initialized_eqFunction_4285,
    MyNordic_initialized_TestCase_initialized_eqFunction_4286,
    MyNordic_initialized_TestCase_initialized_eqFunction_4287,
    MyNordic_initialized_TestCase_initialized_eqFunction_4288,
    MyNordic_initialized_TestCase_initialized_eqFunction_4289,
    MyNordic_initialized_TestCase_initialized_eqFunction_4290,
    MyNordic_initialized_TestCase_initialized_eqFunction_4291,
    MyNordic_initialized_TestCase_initialized_eqFunction_4292,
    MyNordic_initialized_TestCase_initialized_eqFunction_4293,
    MyNordic_initialized_TestCase_initialized_eqFunction_4294,
    MyNordic_initialized_TestCase_initialized_eqFunction_4295,
    MyNordic_initialized_TestCase_initialized_eqFunction_4296,
    MyNordic_initialized_TestCase_initialized_eqFunction_4297,
    MyNordic_initialized_TestCase_initialized_eqFunction_4298,
    MyNordic_initialized_TestCase_initialized_eqFunction_4299,
    MyNordic_initialized_TestCase_initialized_eqFunction_4300,
    MyNordic_initialized_TestCase_initialized_eqFunction_4301,
    MyNordic_initialized_TestCase_initialized_eqFunction_4302,
    MyNordic_initialized_TestCase_initialized_eqFunction_4303,
    MyNordic_initialized_TestCase_initialized_eqFunction_4304,
    MyNordic_initialized_TestCase_initialized_eqFunction_4305,
    MyNordic_initialized_TestCase_initialized_eqFunction_4306,
    MyNordic_initialized_TestCase_initialized_eqFunction_4307,
    MyNordic_initialized_TestCase_initialized_eqFunction_4308,
    MyNordic_initialized_TestCase_initialized_eqFunction_4309,
    MyNordic_initialized_TestCase_initialized_eqFunction_4310,
    MyNordic_initialized_TestCase_initialized_eqFunction_4311,
    MyNordic_initialized_TestCase_initialized_eqFunction_4312,
    MyNordic_initialized_TestCase_initialized_eqFunction_4313,
    MyNordic_initialized_TestCase_initialized_eqFunction_4314,
    MyNordic_initialized_TestCase_initialized_eqFunction_4315,
    MyNordic_initialized_TestCase_initialized_eqFunction_4316,
    MyNordic_initialized_TestCase_initialized_eqFunction_4317,
    MyNordic_initialized_TestCase_initialized_eqFunction_4318,
    MyNordic_initialized_TestCase_initialized_eqFunction_4319,
    MyNordic_initialized_TestCase_initialized_eqFunction_4320,
    MyNordic_initialized_TestCase_initialized_eqFunction_4321,
    MyNordic_initialized_TestCase_initialized_eqFunction_4322,
    MyNordic_initialized_TestCase_initialized_eqFunction_4323,
    MyNordic_initialized_TestCase_initialized_eqFunction_4324,
    MyNordic_initialized_TestCase_initialized_eqFunction_4325,
    MyNordic_initialized_TestCase_initialized_eqFunction_4326,
    MyNordic_initialized_TestCase_initialized_eqFunction_4327,
    MyNordic_initialized_TestCase_initialized_eqFunction_4328,
    MyNordic_initialized_TestCase_initialized_eqFunction_4329,
    MyNordic_initialized_TestCase_initialized_eqFunction_4330,
    MyNordic_initialized_TestCase_initialized_eqFunction_4331,
    MyNordic_initialized_TestCase_initialized_eqFunction_4332,
    MyNordic_initialized_TestCase_initialized_eqFunction_4333,
    MyNordic_initialized_TestCase_initialized_eqFunction_4334,
    MyNordic_initialized_TestCase_initialized_eqFunction_4335,
    MyNordic_initialized_TestCase_initialized_eqFunction_4336,
    MyNordic_initialized_TestCase_initialized_eqFunction_4337,
    MyNordic_initialized_TestCase_initialized_eqFunction_4338,
    MyNordic_initialized_TestCase_initialized_eqFunction_4339,
    MyNordic_initialized_TestCase_initialized_eqFunction_4340,
    MyNordic_initialized_TestCase_initialized_eqFunction_4341,
    MyNordic_initialized_TestCase_initialized_eqFunction_4342,
    MyNordic_initialized_TestCase_initialized_eqFunction_4343,
    MyNordic_initialized_TestCase_initialized_eqFunction_4344,
    MyNordic_initialized_TestCase_initialized_eqFunction_4345,
    MyNordic_initialized_TestCase_initialized_eqFunction_4346,
    MyNordic_initialized_TestCase_initialized_eqFunction_4347,
    MyNordic_initialized_TestCase_initialized_eqFunction_4348,
    MyNordic_initialized_TestCase_initialized_eqFunction_4349,
    MyNordic_initialized_TestCase_initialized_eqFunction_4350,
    MyNordic_initialized_TestCase_initialized_eqFunction_4351,
    MyNordic_initialized_TestCase_initialized_eqFunction_4352,
    MyNordic_initialized_TestCase_initialized_eqFunction_4353,
    MyNordic_initialized_TestCase_initialized_eqFunction_4354,
    MyNordic_initialized_TestCase_initialized_eqFunction_4355,
    MyNordic_initialized_TestCase_initialized_eqFunction_4356,
    MyNordic_initialized_TestCase_initialized_eqFunction_4357,
    MyNordic_initialized_TestCase_initialized_eqFunction_4358,
    MyNordic_initialized_TestCase_initialized_eqFunction_4359,
    MyNordic_initialized_TestCase_initialized_eqFunction_4360,
    MyNordic_initialized_TestCase_initialized_eqFunction_4361,
    MyNordic_initialized_TestCase_initialized_eqFunction_4362,
    MyNordic_initialized_TestCase_initialized_eqFunction_4363,
    MyNordic_initialized_TestCase_initialized_eqFunction_4364,
    MyNordic_initialized_TestCase_initialized_eqFunction_4365,
    MyNordic_initialized_TestCase_initialized_eqFunction_4366,
    MyNordic_initialized_TestCase_initialized_eqFunction_4367,
    MyNordic_initialized_TestCase_initialized_eqFunction_4368,
    MyNordic_initialized_TestCase_initialized_eqFunction_4369,
    MyNordic_initialized_TestCase_initialized_eqFunction_4370,
    MyNordic_initialized_TestCase_initialized_eqFunction_4371,
    MyNordic_initialized_TestCase_initialized_eqFunction_4372,
    MyNordic_initialized_TestCase_initialized_eqFunction_4373,
    MyNordic_initialized_TestCase_initialized_eqFunction_4374,
    MyNordic_initialized_TestCase_initialized_eqFunction_4375,
    MyNordic_initialized_TestCase_initialized_eqFunction_4376,
    MyNordic_initialized_TestCase_initialized_eqFunction_4377,
    MyNordic_initialized_TestCase_initialized_eqFunction_4378,
    MyNordic_initialized_TestCase_initialized_eqFunction_4379,
    MyNordic_initialized_TestCase_initialized_eqFunction_4380,
    MyNordic_initialized_TestCase_initialized_eqFunction_4381,
    MyNordic_initialized_TestCase_initialized_eqFunction_4382,
    MyNordic_initialized_TestCase_initialized_eqFunction_4383,
    MyNordic_initialized_TestCase_initialized_eqFunction_4384,
    MyNordic_initialized_TestCase_initialized_eqFunction_4385,
    MyNordic_initialized_TestCase_initialized_eqFunction_4386,
    MyNordic_initialized_TestCase_initialized_eqFunction_4387,
    MyNordic_initialized_TestCase_initialized_eqFunction_4388,
    MyNordic_initialized_TestCase_initialized_eqFunction_4389,
    MyNordic_initialized_TestCase_initialized_eqFunction_4390,
    MyNordic_initialized_TestCase_initialized_eqFunction_4391,
    MyNordic_initialized_TestCase_initialized_eqFunction_4392,
    MyNordic_initialized_TestCase_initialized_eqFunction_4393,
    MyNordic_initialized_TestCase_initialized_eqFunction_4394,
    MyNordic_initialized_TestCase_initialized_eqFunction_4395,
    MyNordic_initialized_TestCase_initialized_eqFunction_4396,
    MyNordic_initialized_TestCase_initialized_eqFunction_4397,
    MyNordic_initialized_TestCase_initialized_eqFunction_4398,
    MyNordic_initialized_TestCase_initialized_eqFunction_4399,
    MyNordic_initialized_TestCase_initialized_eqFunction_4400,
    MyNordic_initialized_TestCase_initialized_eqFunction_4401,
    MyNordic_initialized_TestCase_initialized_eqFunction_4402,
    MyNordic_initialized_TestCase_initialized_eqFunction_4403,
    MyNordic_initialized_TestCase_initialized_eqFunction_4404
  };
  
  for (int id = 0; id < 458; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif