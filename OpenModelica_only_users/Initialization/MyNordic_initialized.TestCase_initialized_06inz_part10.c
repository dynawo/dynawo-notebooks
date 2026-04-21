#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 6695
type: SIMPLE_ASSIGN
vrNordic_g02.min1.y = if vrNordic_g02.switch.y < vrNordic_g02.add.y then vrNordic_g02.switch.y else vrNordic_g02.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6695};
  modelica_boolean tmp2197;
  tmp2197 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3492]] /* vrNordic_g02.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3490]] /* vrNordic_g02.min1.y variable */) = (tmp2197?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3492]] /* vrNordic_g02.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */));
  threadData->lastEquationSolved = 6695;
}

/*
equation index: 6696
type: SIMPLE_ASSIGN
vrNordic_g02.kMulDU.y = vrNordic_g02.kMulDU.k * vrNordic_g02.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3480]] /* vrNordic_g02.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4220]] /* vrNordic_g02.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3490]] /* vrNordic_g02.min1.y variable */));
  threadData->lastEquationSolved = 6696;
}

/*
equation index: 6697
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.y = (vrNordic_g02.leadLag.bb[2] - vrNordic_g02.leadLag.d * vrNordic_g02.leadLag.a[2]) * vrNordic_g02.leadLag.x[1] + vrNordic_g02.leadLag.d * vrNordic_g02.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3482]] /* vrNordic_g02.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4229]] /* vrNordic_g02.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4230]] /* vrNordic_g02.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4224]] /* vrNordic_g02.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3481]] /* vrNordic_g02.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4230]] /* vrNordic_g02.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3480]] /* vrNordic_g02.kMulDU.y variable */));
  threadData->lastEquationSolved = 6697;
}

/*
equation index: 6698
type: SIMPLE_ASSIGN
$DER.vrNordic_g02.leadLag.x_scaled[1] = (vrNordic_g02.leadLag.a_end * vrNordic_g02.kMulDU.y - vrNordic_g02.leadLag.a[2] * vrNordic_g02.leadLag.x_scaled[1]) / vrNordic_g02.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* der(vrNordic_g02.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4225]] /* vrNordic_g02.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3480]] /* vrNordic_g02.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4224]] /* vrNordic_g02.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* vrNordic_g02.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4223]] /* vrNordic_g02.leadLag.a[1] PARAM */),"vrNordic_g02.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6698;
}

/*
equation index: 6699
type: SIMPLE_ASSIGN
vrNordic_g02.limIntegrator.y = vrNordic_g02.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4263]] /* vrNordic_g02.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6699;
}

/*
equation index: 6700
type: SIMPLE_ASSIGN
vrNordic_g02.feedback1.y = vrNordic_g02.leadLag.y - vrNordic_g02.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3477]] /* vrNordic_g02.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3482]] /* vrNordic_g02.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6700;
}

/*
equation index: 6701
type: SIMPLE_ASSIGN
vrNordic_g02.gain.y = vrNordic_g02.gain.k * vrNordic_g02.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4217]] /* vrNordic_g02.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3477]] /* vrNordic_g02.feedback1.y variable */));
  threadData->lastEquationSolved = 6701;
}

/*
equation index: 6702
type: SIMPLE_ASSIGN
$DER.vrNordic_g02.limIntegrator.y = if vrNordic_g02.limIntegrator.y < vrNordic_g02.limIntegrator.outMin and vrNordic_g02.limIntegrator.k * vrNordic_g02.gain.y < 0.0 or vrNordic_g02.limIntegrator.y > vrNordic_g02.limIntegrator.outMax and vrNordic_g02.limIntegrator.k * vrNordic_g02.gain.y > 0.0 then 0.0 else vrNordic_g02.limIntegrator.k * vrNordic_g02.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6702};
  modelica_boolean tmp2198;
  modelica_boolean tmp2199;
  modelica_boolean tmp2200;
  modelica_boolean tmp2201;
  tmp2198 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4262]] /* vrNordic_g02.limIntegrator.outMin PARAM */));
  tmp2199 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)),0.0);
  tmp2200 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4261]] /* vrNordic_g02.limIntegrator.outMax PARAM */));
  tmp2201 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* der(vrNordic_g02.limIntegrator.y) STATE_DER */) = (((tmp2198 && tmp2199) || (tmp2200 && tmp2201))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)));
  threadData->lastEquationSolved = 6702;
}

/*
equation index: 6703
type: SIMPLE_ASSIGN
g02.ufPu = if g02.running.value then vrNordic_g02.limIntegrator.y * g02.Kuf * g02.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* g02.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* g02.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6703;
}

/*
equation index: 6704
type: SIMPLE_ASSIGN
$DER.g02.lambdafPu = if g02.running.value then (g02.RfPPu * g02.ifPu - g02.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* der(g02.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* g02.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* g02.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6704;
}

/*
equation index: 6705
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limIntegrator.y = goverNordic_g01.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2282]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6705;
}

/*
equation index: 6706
type: SIMPLE_ASSIGN
goverNordic_g01.govInt.y = goverNordic_g01.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6706};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* goverNordic_g01.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2267]] /* goverNordic_g01.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6706;
}

/*
equation index: 6707
type: SIMPLE_ASSIGN
goverNordic_g01.govOut.y = goverNordic_g01.govOut.k1 * goverNordic_g01.govKp.y + goverNordic_g01.govOut.k2 * goverNordic_g01.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1941]] /* goverNordic_g01.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2270]] /* goverNordic_g01.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1940]] /* goverNordic_g01.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2271]] /* goverNordic_g01.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* goverNordic_g01.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6707;
}

/*
equation index: 6708
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.feedback.y = goverNordic_g01.govOut.y - goverNordic_g01.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1943]] /* goverNordic_g01.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1941]] /* goverNordic_g01.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6708;
}

/*
equation index: 6709
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.gain.y = goverNordic_g01.limRateLimFirstOrder.gain.k * goverNordic_g01.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1944]] /* goverNordic_g01.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2278]] /* goverNordic_g01.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1943]] /* goverNordic_g01.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6709;
}

/*
equation index: 6710
type: SIMPLE_ASSIGN
goverNordic_g01.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g01.limRateLimFirstOrder.gain.y > goverNordic_g01.limRateLimFirstOrder.limiter.uMax then goverNordic_g01.limRateLimFirstOrder.limiter.uMax else if goverNordic_g01.limRateLimFirstOrder.gain.y < goverNordic_g01.limRateLimFirstOrder.limiter.uMin then goverNordic_g01.limRateLimFirstOrder.limiter.uMin else goverNordic_g01.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6710};
  modelica_boolean tmp2202;
  modelica_boolean tmp2203;
  modelica_boolean tmp2204;
  modelica_real tmp2205;
  tmp2202 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1944]] /* goverNordic_g01.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp2204 = (modelica_boolean)tmp2202;
  if(tmp2204)
  {
    tmp2205 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp2203 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1944]] /* goverNordic_g01.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp2205 = (tmp2203?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1944]] /* goverNordic_g01.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */) = tmp2205;
  threadData->lastEquationSolved = 6710;
}

/*
equation index: 6711
type: SIMPLE_ASSIGN
$DER.goverNordic_g01.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g01.limRateLimFirstOrder.limIntegrator.y < goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g01.limRateLimFirstOrder.limIntegrator.k * goverNordic_g01.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g01.limRateLimFirstOrder.limIntegrator.y > goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g01.limRateLimFirstOrder.limIntegrator.k * goverNordic_g01.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g01.limRateLimFirstOrder.limIntegrator.k * goverNordic_g01.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6711};
  modelica_boolean tmp2206;
  modelica_boolean tmp2207;
  modelica_boolean tmp2208;
  modelica_boolean tmp2209;
  tmp2206 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp2207 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp2208 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp2209 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(goverNordic_g01.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp2206 && tmp2207) || (tmp2208 && tmp2209))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6711;
}

/*
equation index: 6712
type: SIMPLE_ASSIGN
goverNordic_g01.waterFlow.y = goverNordic_g01.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* goverNordic_g01.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2288]] /* goverNordic_g01.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6712;
}

/*
equation index: 6713
type: SIMPLE_ASSIGN
goverNordic_g01.flowDivGateOpening.y = goverNordic_g01.waterFlow.y / goverNordic_g01.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1937]] /* goverNordic_g01.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* goverNordic_g01.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g01.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6713;
}

/*
equation index: 6714
type: SIMPLE_ASSIGN
goverNordic_g01.headWater.y = goverNordic_g01.flowDivGateOpening.y ^ goverNordic_g01.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6714};
  modelica_real tmp2210;
  modelica_real tmp2211;
  modelica_real tmp2212;
  modelica_real tmp2213;
  modelica_real tmp2214;
  modelica_real tmp2215;
  modelica_real tmp2216;
  tmp2210 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1937]] /* goverNordic_g01.flowDivGateOpening.y variable */);
  tmp2211 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2272]] /* goverNordic_g01.headWater.N PARAM */);
  if(tmp2210 < 0.0 && tmp2211 != 0.0)
  {
    tmp2213 = modf(tmp2211, &tmp2214);
    
    if(tmp2213 > 0.5)
    {
      tmp2213 -= 1.0;
      tmp2214 += 1.0;
    }
    else if(tmp2213 < -0.5)
    {
      tmp2213 += 1.0;
      tmp2214 -= 1.0;
    }
    
    if(fabs(tmp2213) < 1e-10)
      tmp2212 = pow(tmp2210, tmp2214);
    else
    {
      tmp2216 = modf(1.0/tmp2211, &tmp2215);
      if(tmp2216 > 0.5)
      {
        tmp2216 -= 1.0;
        tmp2215 += 1.0;
      }
      else if(tmp2216 < -0.5)
      {
        tmp2216 += 1.0;
        tmp2215 -= 1.0;
      }
      if(fabs(tmp2216) < 1e-10 && ((unsigned long)tmp2215 & 1))
      {
        tmp2212 = -pow(-tmp2210, tmp2213)*pow(tmp2210, tmp2214);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2210, tmp2211);
      }
    }
  }
  else
  {
    tmp2212 = pow(tmp2210, tmp2211);
  }
  if(isnan(tmp2212) || isinf(tmp2212))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2210, tmp2211);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1942]] /* goverNordic_g01.headWater.y variable */) = tmp2212;
  threadData->lastEquationSolved = 6714;
}

/*
equation index: 6715
type: SIMPLE_ASSIGN
g01.PmPu = goverNordic_g01.waterFlow.y * goverNordic_g01.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* g01.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* goverNordic_g01.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1942]] /* goverNordic_g01.headWater.y variable */));
  threadData->lastEquationSolved = 6715;
}

/*
equation index: 6716
type: SIMPLE_ASSIGN
g01.cmPu = if g01.running.value then g01.PmPu / g01.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* g01.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* g01.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */),"g01.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6716;
}

/*
equation index: 6717
type: SIMPLE_ASSIGN
$DER.g01.omegaPu = if g01.running.value then 0.5 * (g01.cmPu * g01.PNomTurb / g01.SNom - g01.DPu * (g01.omegaPu - omegaCOI) - g01.cePu) / g01.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* der(g01.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* g01.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* g01.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */),"g01.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[222]] /* g01.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* g01.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* g01.H PARAM */),"g01.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6717;
}

/*
equation index: 6718
type: SIMPLE_ASSIGN
goverNordic_g01.dH.y = goverNordic_g01.const2.k - goverNordic_g01.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1933]] /* goverNordic_g01.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2260]] /* goverNordic_g01.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1942]] /* goverNordic_g01.headWater.y variable */);
  threadData->lastEquationSolved = 6718;
}

/*
equation index: 6719
type: SIMPLE_ASSIGN
$DER.goverNordic_g01.waterFlow.y = goverNordic_g01.waterFlow.k * goverNordic_g01.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* der(goverNordic_g01.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2287]] /* goverNordic_g01.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1933]] /* goverNordic_g01.dH.y variable */));
  threadData->lastEquationSolved = 6719;
}

/*
equation index: 6720
type: SIMPLE_ASSIGN
vrNordic_g01.timer.y = vrNordic_g01.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4198]] /* vrNordic_g01.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6720;
}

/*
equation index: 6721
type: SIMPLE_ASSIGN
$DER.vrNordic_g01.timer.y = if vrNordic_g01.timer.y < vrNordic_g01.timer.outMin and vrNordic_g01.timer.k * vrNordic_g01.overExcitationLimitation.y < 0.0 or vrNordic_g01.timer.y > vrNordic_g01.timer.outMax and vrNordic_g01.timer.k * vrNordic_g01.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g01.timer.k * vrNordic_g01.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6721};
  modelica_boolean tmp2217;
  modelica_boolean tmp2218;
  modelica_boolean tmp2219;
  modelica_boolean tmp2220;
  tmp2217 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4197]] /* vrNordic_g01.timer.outMin PARAM */));
  tmp2218 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)),0.0);
  tmp2219 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4196]] /* vrNordic_g01.timer.outMax PARAM */));
  tmp2220 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* der(vrNordic_g01.timer.y) STATE_DER */) = (((tmp2217 && tmp2218) || (tmp2219 && tmp2220))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6721;
}

/*
equation index: 6722
type: SIMPLE_ASSIGN
vrNordic_g01.greaterEqualThreshold.y = vrNordic_g01.timer.y >= vrNordic_g01.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6722};
  modelica_boolean tmp2221;
  tmp2221 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4140]] /* vrNordic_g01.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1015]] /* vrNordic_g01.greaterEqualThreshold.y DISCRETE */) = tmp2221;
  threadData->lastEquationSolved = 6722;
}

/*
equation index: 6723
type: SIMPLE_ASSIGN
vrNordic_g01.switch.y = if vrNordic_g01.greaterEqualThreshold.y then vrNordic_g01.gain1.y else vrNordic_g01.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3468]] /* vrNordic_g01.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1015]] /* vrNordic_g01.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3455]] /* vrNordic_g01.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */));
  threadData->lastEquationSolved = 6723;
}

/*
equation index: 6724
type: SIMPLE_ASSIGN
vrNordic_g01.min1.y = if vrNordic_g01.switch.y < vrNordic_g01.add.y then vrNordic_g01.switch.y else vrNordic_g01.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6724};
  modelica_boolean tmp2222;
  tmp2222 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3468]] /* vrNordic_g01.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3466]] /* vrNordic_g01.min1.y variable */) = (tmp2222?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3468]] /* vrNordic_g01.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */));
  threadData->lastEquationSolved = 6724;
}

/*
equation index: 6725
type: SIMPLE_ASSIGN
vrNordic_g01.kMulDU.y = vrNordic_g01.kMulDU.k * vrNordic_g01.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3456]] /* vrNordic_g01.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4141]] /* vrNordic_g01.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3466]] /* vrNordic_g01.min1.y variable */));
  threadData->lastEquationSolved = 6725;
}

/*
equation index: 6726
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.y = (vrNordic_g01.leadLag.bb[2] - vrNordic_g01.leadLag.d * vrNordic_g01.leadLag.a[2]) * vrNordic_g01.leadLag.x[1] + vrNordic_g01.leadLag.d * vrNordic_g01.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3458]] /* vrNordic_g01.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4150]] /* vrNordic_g01.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4151]] /* vrNordic_g01.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4145]] /* vrNordic_g01.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3457]] /* vrNordic_g01.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4151]] /* vrNordic_g01.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3456]] /* vrNordic_g01.kMulDU.y variable */));
  threadData->lastEquationSolved = 6726;
}

/*
equation index: 6727
type: SIMPLE_ASSIGN
$DER.vrNordic_g01.leadLag.x_scaled[1] = (vrNordic_g01.leadLag.a_end * vrNordic_g01.kMulDU.y - vrNordic_g01.leadLag.a[2] * vrNordic_g01.leadLag.x_scaled[1]) / vrNordic_g01.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* der(vrNordic_g01.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4146]] /* vrNordic_g01.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3456]] /* vrNordic_g01.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4145]] /* vrNordic_g01.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* vrNordic_g01.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4144]] /* vrNordic_g01.leadLag.a[1] PARAM */),"vrNordic_g01.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6727;
}

/*
equation index: 6728
type: SIMPLE_ASSIGN
vrNordic_g01.limIntegrator.y = vrNordic_g01.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4184]] /* vrNordic_g01.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6728;
}

/*
equation index: 6729
type: SIMPLE_ASSIGN
vrNordic_g01.feedback1.y = vrNordic_g01.leadLag.y - vrNordic_g01.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3453]] /* vrNordic_g01.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3458]] /* vrNordic_g01.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6729;
}

/*
equation index: 6730
type: SIMPLE_ASSIGN
vrNordic_g01.gain.y = vrNordic_g01.gain.k * vrNordic_g01.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4138]] /* vrNordic_g01.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3453]] /* vrNordic_g01.feedback1.y variable */));
  threadData->lastEquationSolved = 6730;
}

/*
equation index: 6731
type: SIMPLE_ASSIGN
$DER.vrNordic_g01.limIntegrator.y = if vrNordic_g01.limIntegrator.y < vrNordic_g01.limIntegrator.outMin and vrNordic_g01.limIntegrator.k * vrNordic_g01.gain.y < 0.0 or vrNordic_g01.limIntegrator.y > vrNordic_g01.limIntegrator.outMax and vrNordic_g01.limIntegrator.k * vrNordic_g01.gain.y > 0.0 then 0.0 else vrNordic_g01.limIntegrator.k * vrNordic_g01.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6731};
  modelica_boolean tmp2223;
  modelica_boolean tmp2224;
  modelica_boolean tmp2225;
  modelica_boolean tmp2226;
  tmp2223 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4183]] /* vrNordic_g01.limIntegrator.outMin PARAM */));
  tmp2224 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)),0.0);
  tmp2225 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4182]] /* vrNordic_g01.limIntegrator.outMax PARAM */));
  tmp2226 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* der(vrNordic_g01.limIntegrator.y) STATE_DER */) = (((tmp2223 && tmp2224) || (tmp2225 && tmp2226))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)));
  threadData->lastEquationSolved = 6731;
}

/*
equation index: 6732
type: SIMPLE_ASSIGN
g01.ufPu = if g01.running.value then vrNordic_g01.limIntegrator.y * g01.Kuf * g01.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* g01.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* g01.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6732;
}

/*
equation index: 6733
type: SIMPLE_ASSIGN
$DER.g01.lambdafPu = if g01.running.value then (g01.RfPPu * g01.ifPu - g01.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* der(g01.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* g01.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* g01.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6733;
}

/*
equation index: 6734
type: SIMPLE_ASSIGN
$PRE.g01.state = $START.g01.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6734};
  (data->simulationInfo->integerVarsPre[1] /* g01.state DISCRETE */) = (data->modelData->integerVarsData[1] /* g01.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6734;
}

/*
equation index: 6735
type: SIMPLE_ASSIGN
g01.state = $PRE.g01.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6735};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* g01.state DISCRETE */) = (data->simulationInfo->integerVarsPre[1] /* g01.state DISCRETE */);
  threadData->lastEquationSolved = 6735;
}

/*
equation index: 6736
type: SIMPLE_ASSIGN
g01.converter.u = Integer(g01.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6736};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* g01.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* g01.state DISCRETE */)));
  threadData->lastEquationSolved = 6736;
}

/*
equation index: 6737
type: SIMPLE_ASSIGN
g01.genState = (*Real*)(g01.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* g01.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* g01.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6737;
}

/*
equation index: 6738
type: SIMPLE_ASSIGN
$PRE.g02.state = $START.g02.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6738};
  (data->simulationInfo->integerVarsPre[3] /* g02.state DISCRETE */) = (data->modelData->integerVarsData[3] /* g02.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6738;
}

/*
equation index: 6739
type: SIMPLE_ASSIGN
g02.state = $PRE.g02.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6739};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[3]] /* g02.state DISCRETE */) = (data->simulationInfo->integerVarsPre[3] /* g02.state DISCRETE */);
  threadData->lastEquationSolved = 6739;
}

/*
equation index: 6740
type: SIMPLE_ASSIGN
g02.converter.u = Integer(g02.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6740};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* g02.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[3]] /* g02.state DISCRETE */)));
  threadData->lastEquationSolved = 6740;
}

/*
equation index: 6741
type: SIMPLE_ASSIGN
g02.genState = (*Real*)(g02.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* g02.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* g02.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6741;
}

/*
equation index: 6742
type: SIMPLE_ASSIGN
$PRE.g03.state = $START.g03.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6742};
  (data->simulationInfo->integerVarsPre[5] /* g03.state DISCRETE */) = (data->modelData->integerVarsData[5] /* g03.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6742;
}

/*
equation index: 6743
type: SIMPLE_ASSIGN
g03.state = $PRE.g03.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6743};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[5]] /* g03.state DISCRETE */) = (data->simulationInfo->integerVarsPre[5] /* g03.state DISCRETE */);
  threadData->lastEquationSolved = 6743;
}

/*
equation index: 6744
type: SIMPLE_ASSIGN
g03.converter.u = Integer(g03.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6744};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[4]] /* g03.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[5]] /* g03.state DISCRETE */)));
  threadData->lastEquationSolved = 6744;
}

/*
equation index: 6745
type: SIMPLE_ASSIGN
g03.genState = (*Real*)(g03.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* g03.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[4]] /* g03.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6745;
}

/*
equation index: 6746
type: SIMPLE_ASSIGN
$PRE.g04.state = $START.g04.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6746};
  (data->simulationInfo->integerVarsPre[7] /* g04.state DISCRETE */) = (data->modelData->integerVarsData[7] /* g04.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6746;
}

/*
equation index: 6747
type: SIMPLE_ASSIGN
g04.state = $PRE.g04.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6747};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[7]] /* g04.state DISCRETE */) = (data->simulationInfo->integerVarsPre[7] /* g04.state DISCRETE */);
  threadData->lastEquationSolved = 6747;
}

/*
equation index: 6748
type: SIMPLE_ASSIGN
g04.converter.u = Integer(g04.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6748};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[6]] /* g04.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[7]] /* g04.state DISCRETE */)));
  threadData->lastEquationSolved = 6748;
}

/*
equation index: 6749
type: SIMPLE_ASSIGN
g04.genState = (*Real*)(g04.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1166]] /* g04.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[6]] /* g04.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6749;
}

/*
equation index: 6750
type: SIMPLE_ASSIGN
$PRE.g05.state = $START.g05.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6750};
  (data->simulationInfo->integerVarsPre[9] /* g05.state DISCRETE */) = (data->modelData->integerVarsData[9] /* g05.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6750;
}

/*
equation index: 6751
type: SIMPLE_ASSIGN
g05.state = $PRE.g05.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6751};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* g05.state DISCRETE */) = (data->simulationInfo->integerVarsPre[9] /* g05.state DISCRETE */);
  threadData->lastEquationSolved = 6751;
}

/*
equation index: 6752
type: SIMPLE_ASSIGN
g05.converter.u = Integer(g05.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6752};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[8]] /* g05.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* g05.state DISCRETE */)));
  threadData->lastEquationSolved = 6752;
}

/*
equation index: 6753
type: SIMPLE_ASSIGN
g05.genState = (*Real*)(g05.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* g05.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[8]] /* g05.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6753;
}

/*
equation index: 6754
type: SIMPLE_ASSIGN
$PRE.g06.state = $START.g06.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6754};
  (data->simulationInfo->integerVarsPre[11] /* g06.state DISCRETE */) = (data->modelData->integerVarsData[11] /* g06.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6754;
}

/*
equation index: 6755
type: SIMPLE_ASSIGN
g06.state = $PRE.g06.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6755};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[11]] /* g06.state DISCRETE */) = (data->simulationInfo->integerVarsPre[11] /* g06.state DISCRETE */);
  threadData->lastEquationSolved = 6755;
}

/*
equation index: 6756
type: SIMPLE_ASSIGN
g06.converter.u = Integer(g06.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6756};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[10]] /* g06.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[11]] /* g06.state DISCRETE */)));
  threadData->lastEquationSolved = 6756;
}

/*
equation index: 6757
type: SIMPLE_ASSIGN
g06.genState = (*Real*)(g06.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1258]] /* g06.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[10]] /* g06.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6757;
}

/*
equation index: 6758
type: SIMPLE_ASSIGN
$PRE.g07.state = $START.g07.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6758};
  (data->simulationInfo->integerVarsPre[13] /* g07.state DISCRETE */) = (data->modelData->integerVarsData[13] /* g07.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6758;
}

/*
equation index: 6759
type: SIMPLE_ASSIGN
g07.state = $PRE.g07.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6759};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[13]] /* g07.state DISCRETE */) = (data->simulationInfo->integerVarsPre[13] /* g07.state DISCRETE */);
  threadData->lastEquationSolved = 6759;
}

/*
equation index: 6760
type: SIMPLE_ASSIGN
g07.converter.u = Integer(g07.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6760};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* g07.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[13]] /* g07.state DISCRETE */)));
  threadData->lastEquationSolved = 6760;
}

/*
equation index: 6761
type: SIMPLE_ASSIGN
g07.genState = (*Real*)(g07.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1304]] /* g07.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* g07.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6761;
}

/*
equation index: 6762
type: SIMPLE_ASSIGN
$PRE.g08.state = $START.g08.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6762};
  (data->simulationInfo->integerVarsPre[15] /* g08.state DISCRETE */) = (data->modelData->integerVarsData[15] /* g08.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6762;
}

/*
equation index: 6763
type: SIMPLE_ASSIGN
g08.state = $PRE.g08.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6763};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* g08.state DISCRETE */) = (data->simulationInfo->integerVarsPre[15] /* g08.state DISCRETE */);
  threadData->lastEquationSolved = 6763;
}

/*
equation index: 6764
type: SIMPLE_ASSIGN
g08.converter.u = Integer(g08.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6764};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[14]] /* g08.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* g08.state DISCRETE */)));
  threadData->lastEquationSolved = 6764;
}

/*
equation index: 6765
type: SIMPLE_ASSIGN
g08.genState = (*Real*)(g08.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1350]] /* g08.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[14]] /* g08.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6765;
}

/*
equation index: 6766
type: SIMPLE_ASSIGN
$PRE.g09.state = $START.g09.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6766};
  (data->simulationInfo->integerVarsPre[17] /* g09.state DISCRETE */) = (data->modelData->integerVarsData[17] /* g09.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6766;
}

/*
equation index: 6767
type: SIMPLE_ASSIGN
g09.state = $PRE.g09.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6767};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[17]] /* g09.state DISCRETE */) = (data->simulationInfo->integerVarsPre[17] /* g09.state DISCRETE */);
  threadData->lastEquationSolved = 6767;
}

/*
equation index: 6768
type: SIMPLE_ASSIGN
g09.converter.u = Integer(g09.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6768};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[16]] /* g09.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[17]] /* g09.state DISCRETE */)));
  threadData->lastEquationSolved = 6768;
}

/*
equation index: 6769
type: SIMPLE_ASSIGN
g09.genState = (*Real*)(g09.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1396]] /* g09.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[16]] /* g09.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6769;
}

/*
equation index: 6770
type: SIMPLE_ASSIGN
$PRE.g10.state = $START.g10.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6770};
  (data->simulationInfo->integerVarsPre[19] /* g10.state DISCRETE */) = (data->modelData->integerVarsData[19] /* g10.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6770;
}

/*
equation index: 6771
type: SIMPLE_ASSIGN
g10.state = $PRE.g10.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6771};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[19]] /* g10.state DISCRETE */) = (data->simulationInfo->integerVarsPre[19] /* g10.state DISCRETE */);
  threadData->lastEquationSolved = 6771;
}

/*
equation index: 6772
type: SIMPLE_ASSIGN
g10.converter.u = Integer(g10.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6772};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[18]] /* g10.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[19]] /* g10.state DISCRETE */)));
  threadData->lastEquationSolved = 6772;
}

/*
equation index: 6773
type: SIMPLE_ASSIGN
g10.genState = (*Real*)(g10.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1442]] /* g10.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[18]] /* g10.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6773;
}

/*
equation index: 6774
type: SIMPLE_ASSIGN
$PRE.g11.state = $START.g11.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6774};
  (data->simulationInfo->integerVarsPre[21] /* g11.state DISCRETE */) = (data->modelData->integerVarsData[21] /* g11.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6774;
}

/*
equation index: 6775
type: SIMPLE_ASSIGN
g11.state = $PRE.g11.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6775};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* g11.state DISCRETE */) = (data->simulationInfo->integerVarsPre[21] /* g11.state DISCRETE */);
  threadData->lastEquationSolved = 6775;
}

/*
equation index: 6776
type: SIMPLE_ASSIGN
g11.converter.u = Integer(g11.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6776};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* g11.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* g11.state DISCRETE */)));
  threadData->lastEquationSolved = 6776;
}

/*
equation index: 6777
type: SIMPLE_ASSIGN
g11.genState = (*Real*)(g11.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1488]] /* g11.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* g11.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6777;
}

/*
equation index: 6778
type: SIMPLE_ASSIGN
$PRE.g12.state = $START.g12.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6778};
  (data->simulationInfo->integerVarsPre[23] /* g12.state DISCRETE */) = (data->modelData->integerVarsData[23] /* g12.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6778;
}

/*
equation index: 6779
type: SIMPLE_ASSIGN
g12.state = $PRE.g12.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6779};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* g12.state DISCRETE */) = (data->simulationInfo->integerVarsPre[23] /* g12.state DISCRETE */);
  threadData->lastEquationSolved = 6779;
}

/*
equation index: 6780
type: SIMPLE_ASSIGN
g12.converter.u = Integer(g12.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6780};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* g12.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* g12.state DISCRETE */)));
  threadData->lastEquationSolved = 6780;
}

/*
equation index: 6781
type: SIMPLE_ASSIGN
g12.genState = (*Real*)(g12.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1534]] /* g12.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* g12.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6781;
}

/*
equation index: 6782
type: SIMPLE_ASSIGN
$PRE.g13.state = $START.g13.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6782};
  (data->simulationInfo->integerVarsPre[25] /* g13.state DISCRETE */) = (data->modelData->integerVarsData[25] /* g13.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6782;
}

/*
equation index: 6783
type: SIMPLE_ASSIGN
g13.state = $PRE.g13.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6783};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* g13.state DISCRETE */) = (data->simulationInfo->integerVarsPre[25] /* g13.state DISCRETE */);
  threadData->lastEquationSolved = 6783;
}

/*
equation index: 6784
type: SIMPLE_ASSIGN
g13.converter.u = Integer(g13.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6784};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* g13.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* g13.state DISCRETE */)));
  threadData->lastEquationSolved = 6784;
}

/*
equation index: 6785
type: SIMPLE_ASSIGN
g13.genState = (*Real*)(g13.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6785};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1580]] /* g13.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* g13.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6785;
}

/*
equation index: 6786
type: SIMPLE_ASSIGN
$PRE.g14.state = $START.g14.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6786};
  (data->simulationInfo->integerVarsPre[27] /* g14.state DISCRETE */) = (data->modelData->integerVarsData[27] /* g14.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6786;
}

/*
equation index: 6787
type: SIMPLE_ASSIGN
g14.state = $PRE.g14.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6787};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* g14.state DISCRETE */) = (data->simulationInfo->integerVarsPre[27] /* g14.state DISCRETE */);
  threadData->lastEquationSolved = 6787;
}

/*
equation index: 6788
type: SIMPLE_ASSIGN
g14.converter.u = Integer(g14.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6788};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* g14.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* g14.state DISCRETE */)));
  threadData->lastEquationSolved = 6788;
}

/*
equation index: 6789
type: SIMPLE_ASSIGN
g14.genState = (*Real*)(g14.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1626]] /* g14.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* g14.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6789;
}

/*
equation index: 6790
type: SIMPLE_ASSIGN
$PRE.g15.state = $START.g15.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6790};
  (data->simulationInfo->integerVarsPre[29] /* g15.state DISCRETE */) = (data->modelData->integerVarsData[29] /* g15.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6790;
}

/*
equation index: 6791
type: SIMPLE_ASSIGN
g15.state = $PRE.g15.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6791};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* g15.state DISCRETE */) = (data->simulationInfo->integerVarsPre[29] /* g15.state DISCRETE */);
  threadData->lastEquationSolved = 6791;
}

/*
equation index: 6792
type: SIMPLE_ASSIGN
g15.converter.u = Integer(g15.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6792};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* g15.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* g15.state DISCRETE */)));
  threadData->lastEquationSolved = 6792;
}

/*
equation index: 6793
type: SIMPLE_ASSIGN
g15.genState = (*Real*)(g15.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1672]] /* g15.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* g15.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6793;
}

/*
equation index: 6794
type: SIMPLE_ASSIGN
$PRE.g16.state = $START.g16.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6794};
  (data->simulationInfo->integerVarsPre[31] /* g16.state DISCRETE */) = (data->modelData->integerVarsData[31] /* g16.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6794;
}

/*
equation index: 6795
type: SIMPLE_ASSIGN
g16.state = $PRE.g16.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6795};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* g16.state DISCRETE */) = (data->simulationInfo->integerVarsPre[31] /* g16.state DISCRETE */);
  threadData->lastEquationSolved = 6795;
}

/*
equation index: 6796
type: SIMPLE_ASSIGN
g16.converter.u = Integer(g16.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6796};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[30]] /* g16.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* g16.state DISCRETE */)));
  threadData->lastEquationSolved = 6796;
}

/*
equation index: 6797
type: SIMPLE_ASSIGN
g16.genState = (*Real*)(g16.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1718]] /* g16.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[30]] /* g16.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6797;
}

/*
equation index: 6798
type: SIMPLE_ASSIGN
$PRE.g17.state = $START.g17.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6798};
  (data->simulationInfo->integerVarsPre[33] /* g17.state DISCRETE */) = (data->modelData->integerVarsData[33] /* g17.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6798;
}

/*
equation index: 6799
type: SIMPLE_ASSIGN
g17.state = $PRE.g17.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6799};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[33]] /* g17.state DISCRETE */) = (data->simulationInfo->integerVarsPre[33] /* g17.state DISCRETE */);
  threadData->lastEquationSolved = 6799;
}

/*
equation index: 6800
type: SIMPLE_ASSIGN
g17.converter.u = Integer(g17.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6800};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[32]] /* g17.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[33]] /* g17.state DISCRETE */)));
  threadData->lastEquationSolved = 6800;
}

/*
equation index: 6801
type: SIMPLE_ASSIGN
g17.genState = (*Real*)(g17.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* g17.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[32]] /* g17.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6801;
}

/*
equation index: 6802
type: SIMPLE_ASSIGN
$PRE.g18.state = $START.g18.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6802};
  (data->simulationInfo->integerVarsPre[35] /* g18.state DISCRETE */) = (data->modelData->integerVarsData[35] /* g18.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6802;
}

/*
equation index: 6803
type: SIMPLE_ASSIGN
g18.state = $PRE.g18.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6803};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* g18.state DISCRETE */) = (data->simulationInfo->integerVarsPre[35] /* g18.state DISCRETE */);
  threadData->lastEquationSolved = 6803;
}

/*
equation index: 6804
type: SIMPLE_ASSIGN
g18.converter.u = Integer(g18.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6804};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[34]] /* g18.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* g18.state DISCRETE */)));
  threadData->lastEquationSolved = 6804;
}

/*
equation index: 6805
type: SIMPLE_ASSIGN
g18.genState = (*Real*)(g18.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1810]] /* g18.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[34]] /* g18.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6805;
}

/*
equation index: 6806
type: SIMPLE_ASSIGN
$PRE.g19.state = $START.g19.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6806};
  (data->simulationInfo->integerVarsPre[37] /* g19.state DISCRETE */) = (data->modelData->integerVarsData[37] /* g19.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6806;
}

/*
equation index: 6807
type: SIMPLE_ASSIGN
g19.state = $PRE.g19.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6807};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* g19.state DISCRETE */) = (data->simulationInfo->integerVarsPre[37] /* g19.state DISCRETE */);
  threadData->lastEquationSolved = 6807;
}

/*
equation index: 6808
type: SIMPLE_ASSIGN
g19.converter.u = Integer(g19.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6808};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[36]] /* g19.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* g19.state DISCRETE */)));
  threadData->lastEquationSolved = 6808;
}

/*
equation index: 6809
type: SIMPLE_ASSIGN
g19.genState = (*Real*)(g19.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1856]] /* g19.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[36]] /* g19.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6809;
}

/*
equation index: 6810
type: SIMPLE_ASSIGN
$PRE.g20.state = $START.g20.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6810};
  (data->simulationInfo->integerVarsPre[39] /* g20.state DISCRETE */) = (data->modelData->integerVarsData[39] /* g20.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6810;
}

/*
equation index: 6811
type: SIMPLE_ASSIGN
g20.state = $PRE.g20.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6811};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[39]] /* g20.state DISCRETE */) = (data->simulationInfo->integerVarsPre[39] /* g20.state DISCRETE */);
  threadData->lastEquationSolved = 6811;
}

/*
equation index: 6812
type: SIMPLE_ASSIGN
g20.converter.u = Integer(g20.state)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6812};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[38]] /* g20.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[39]] /* g20.state DISCRETE */)));
  threadData->lastEquationSolved = 6812;
}

/*
equation index: 6813
type: SIMPLE_ASSIGN
g20.genState = (*Real*)(g20.converter.u)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1902]] /* g20.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[38]] /* g20.converter.u DISCRETE */));
  threadData->lastEquationSolved = 6813;
}

/*
equation index: 6814
type: SIMPLE_ASSIGN
$whenCondition1 = time >= disconnection.tEvent
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6814};
  modelica_boolean tmp2227;
  tmp2227 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* disconnection.tEvent PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = tmp2227;
  threadData->lastEquationSolved = 6814;
}

/*
equation index: 6815
type: SIMPLE_ASSIGN
$whenCondition3 = time >= nodeFault.tEnd
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6815};
  modelica_boolean tmp2228;
  tmp2228 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* nodeFault.tEnd PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[222]] /* $whenCondition3 DISCRETE */) = tmp2228;
  threadData->lastEquationSolved = 6815;
}

/*
equation index: 6816
type: SIMPLE_ASSIGN
$whenCondition2 = time >= nodeFault.tBegin
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6816};
  modelica_boolean tmp2229;
  tmp2229 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3569]] /* nodeFault.tBegin PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[111]] /* $whenCondition2 DISCRETE */) = tmp2229;
  threadData->lastEquationSolved = 6816;
}

/*
equation index: 6817
type: SIMPLE_ASSIGN
$PRE.trafo_g20_4072.state = $START.trafo_g20_4072.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6817};
  (data->simulationInfo->integerVarsPre[166] /* trafo_g20_4072.state DISCRETE */) = (data->modelData->integerVarsData[166] /* trafo_g20_4072.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6817;
}

/*
equation index: 6818
type: SIMPLE_ASSIGN
trafo_g20_4072.state = $PRE.trafo_g20_4072.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6818};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[166]] /* trafo_g20_4072.state DISCRETE */) = (data->simulationInfo->integerVarsPre[166] /* trafo_g20_4072.state DISCRETE */);
  threadData->lastEquationSolved = 6818;
}

/*
equation index: 6819
type: SIMPLE_ASSIGN
$PRE.trafo_g19_4071.state = $START.trafo_g19_4071.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6819};
  (data->simulationInfo->integerVarsPre[164] /* trafo_g19_4071.state DISCRETE */) = (data->modelData->integerVarsData[164] /* trafo_g19_4071.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6819;
}

/*
equation index: 6820
type: SIMPLE_ASSIGN
trafo_g19_4071.state = $PRE.trafo_g19_4071.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6820};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[164]] /* trafo_g19_4071.state DISCRETE */) = (data->simulationInfo->integerVarsPre[164] /* trafo_g19_4071.state DISCRETE */);
  threadData->lastEquationSolved = 6820;
}

/*
equation index: 6821
type: SIMPLE_ASSIGN
$PRE.trafo_g18_4063.state = $START.trafo_g18_4063.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6821};
  (data->simulationInfo->integerVarsPre[163] /* trafo_g18_4063.state DISCRETE */) = (data->modelData->integerVarsData[163] /* trafo_g18_4063.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6821;
}

/*
equation index: 6822
type: SIMPLE_ASSIGN
trafo_g18_4063.state = $PRE.trafo_g18_4063.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6822};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[163]] /* trafo_g18_4063.state DISCRETE */) = (data->simulationInfo->integerVarsPre[163] /* trafo_g18_4063.state DISCRETE */);
  threadData->lastEquationSolved = 6822;
}

/*
equation index: 6823
type: SIMPLE_ASSIGN
$PRE.trafo_g17_4062.state = $START.trafo_g17_4062.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6823};
  (data->simulationInfo->integerVarsPre[162] /* trafo_g17_4062.state DISCRETE */) = (data->modelData->integerVarsData[162] /* trafo_g17_4062.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6823;
}

/*
equation index: 6824
type: SIMPLE_ASSIGN
trafo_g17_4062.state = $PRE.trafo_g17_4062.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6824};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[162]] /* trafo_g17_4062.state DISCRETE */) = (data->simulationInfo->integerVarsPre[162] /* trafo_g17_4062.state DISCRETE */);
  threadData->lastEquationSolved = 6824;
}

/*
equation index: 6825
type: SIMPLE_ASSIGN
$PRE.trafo_g16_4051.state = $START.trafo_g16_4051.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6825};
  (data->simulationInfo->integerVarsPre[161] /* trafo_g16_4051.state DISCRETE */) = (data->modelData->integerVarsData[161] /* trafo_g16_4051.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6825;
}

/*
equation index: 6826
type: SIMPLE_ASSIGN
trafo_g16_4051.state = $PRE.trafo_g16_4051.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6826};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[161]] /* trafo_g16_4051.state DISCRETE */) = (data->simulationInfo->integerVarsPre[161] /* trafo_g16_4051.state DISCRETE */);
  threadData->lastEquationSolved = 6826;
}

/*
equation index: 6827
type: SIMPLE_ASSIGN
$PRE.trafo_g15_4047.state = $START.trafo_g15_4047.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6827};
  (data->simulationInfo->integerVarsPre[160] /* trafo_g15_4047.state DISCRETE */) = (data->modelData->integerVarsData[160] /* trafo_g15_4047.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6827;
}

/*
equation index: 6828
type: SIMPLE_ASSIGN
trafo_g15_4047.state = $PRE.trafo_g15_4047.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6828};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[160]] /* trafo_g15_4047.state DISCRETE */) = (data->simulationInfo->integerVarsPre[160] /* trafo_g15_4047.state DISCRETE */);
  threadData->lastEquationSolved = 6828;
}

/*
equation index: 6829
type: SIMPLE_ASSIGN
$PRE.trafo_g14_4042.state = $START.trafo_g14_4042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6829};
  (data->simulationInfo->integerVarsPre[159] /* trafo_g14_4042.state DISCRETE */) = (data->modelData->integerVarsData[159] /* trafo_g14_4042.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6829;
}

/*
equation index: 6830
type: SIMPLE_ASSIGN
trafo_g14_4042.state = $PRE.trafo_g14_4042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6830};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[159]] /* trafo_g14_4042.state DISCRETE */) = (data->simulationInfo->integerVarsPre[159] /* trafo_g14_4042.state DISCRETE */);
  threadData->lastEquationSolved = 6830;
}

/*
equation index: 6831
type: SIMPLE_ASSIGN
$PRE.trafo_g13_4041.state = $START.trafo_g13_4041.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6831};
  (data->simulationInfo->integerVarsPre[158] /* trafo_g13_4041.state DISCRETE */) = (data->modelData->integerVarsData[158] /* trafo_g13_4041.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6831;
}

/*
equation index: 6832
type: SIMPLE_ASSIGN
trafo_g13_4041.state = $PRE.trafo_g13_4041.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6832};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[158]] /* trafo_g13_4041.state DISCRETE */) = (data->simulationInfo->integerVarsPre[158] /* trafo_g13_4041.state DISCRETE */);
  threadData->lastEquationSolved = 6832;
}

/*
equation index: 6833
type: SIMPLE_ASSIGN
$PRE.trafo_g12_4031.state = $START.trafo_g12_4031.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6833};
  (data->simulationInfo->integerVarsPre[157] /* trafo_g12_4031.state DISCRETE */) = (data->modelData->integerVarsData[157] /* trafo_g12_4031.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6833;
}

/*
equation index: 6834
type: SIMPLE_ASSIGN
trafo_g12_4031.state = $PRE.trafo_g12_4031.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6834};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[157]] /* trafo_g12_4031.state DISCRETE */) = (data->simulationInfo->integerVarsPre[157] /* trafo_g12_4031.state DISCRETE */);
  threadData->lastEquationSolved = 6834;
}

/*
equation index: 6835
type: SIMPLE_ASSIGN
$PRE.trafo_g11_4021.state = $START.trafo_g11_4021.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6835};
  (data->simulationInfo->integerVarsPre[156] /* trafo_g11_4021.state DISCRETE */) = (data->modelData->integerVarsData[156] /* trafo_g11_4021.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6835;
}

/*
equation index: 6836
type: SIMPLE_ASSIGN
trafo_g11_4021.state = $PRE.trafo_g11_4021.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6836};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[156]] /* trafo_g11_4021.state DISCRETE */) = (data->simulationInfo->integerVarsPre[156] /* trafo_g11_4021.state DISCRETE */);
  threadData->lastEquationSolved = 6836;
}

/*
equation index: 6837
type: SIMPLE_ASSIGN
$PRE.trafo_g10_4012.state = $START.trafo_g10_4012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6837};
  (data->simulationInfo->integerVarsPre[155] /* trafo_g10_4012.state DISCRETE */) = (data->modelData->integerVarsData[155] /* trafo_g10_4012.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6837;
}

/*
equation index: 6838
type: SIMPLE_ASSIGN
trafo_g10_4012.state = $PRE.trafo_g10_4012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6838};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[155]] /* trafo_g10_4012.state DISCRETE */) = (data->simulationInfo->integerVarsPre[155] /* trafo_g10_4012.state DISCRETE */);
  threadData->lastEquationSolved = 6838;
}

/*
equation index: 6839
type: SIMPLE_ASSIGN
$PRE.trafo_g9_4011.state = $START.trafo_g9_4011.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6839};
  (data->simulationInfo->integerVarsPre[174] /* trafo_g9_4011.state DISCRETE */) = (data->modelData->integerVarsData[174] /* trafo_g9_4011.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6839;
}

/*
equation index: 6840
type: SIMPLE_ASSIGN
trafo_g9_4011.state = $PRE.trafo_g9_4011.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6840};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[174]] /* trafo_g9_4011.state DISCRETE */) = (data->simulationInfo->integerVarsPre[174] /* trafo_g9_4011.state DISCRETE */);
  threadData->lastEquationSolved = 6840;
}

/*
equation index: 6841
type: SIMPLE_ASSIGN
$PRE.trafo_g8_2032.state = $START.trafo_g8_2032.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6841};
  (data->simulationInfo->integerVarsPre[173] /* trafo_g8_2032.state DISCRETE */) = (data->modelData->integerVarsData[173] /* trafo_g8_2032.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6841;
}

/*
equation index: 6842
type: SIMPLE_ASSIGN
trafo_g8_2032.state = $PRE.trafo_g8_2032.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6842};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[173]] /* trafo_g8_2032.state DISCRETE */) = (data->simulationInfo->integerVarsPre[173] /* trafo_g8_2032.state DISCRETE */);
  threadData->lastEquationSolved = 6842;
}

/*
equation index: 6843
type: SIMPLE_ASSIGN
$PRE.trafo_g7_1043.state = $START.trafo_g7_1043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6843};
  (data->simulationInfo->integerVarsPre[172] /* trafo_g7_1043.state DISCRETE */) = (data->modelData->integerVarsData[172] /* trafo_g7_1043.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6843;
}

/*
equation index: 6844
type: SIMPLE_ASSIGN
trafo_g7_1043.state = $PRE.trafo_g7_1043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6844};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[172]] /* trafo_g7_1043.state DISCRETE */) = (data->simulationInfo->integerVarsPre[172] /* trafo_g7_1043.state DISCRETE */);
  threadData->lastEquationSolved = 6844;
}

/*
equation index: 6845
type: SIMPLE_ASSIGN
$PRE.trafo_g6_1042.state = $START.trafo_g6_1042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6845};
  (data->simulationInfo->integerVarsPre[171] /* trafo_g6_1042.state DISCRETE */) = (data->modelData->integerVarsData[171] /* trafo_g6_1042.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6845;
}

/*
equation index: 6846
type: SIMPLE_ASSIGN
trafo_g6_1042.state = $PRE.trafo_g6_1042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6846};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[171]] /* trafo_g6_1042.state DISCRETE */) = (data->simulationInfo->integerVarsPre[171] /* trafo_g6_1042.state DISCRETE */);
  threadData->lastEquationSolved = 6846;
}

/*
equation index: 6847
type: SIMPLE_ASSIGN
$PRE.trafo_g5_1022.state = $START.trafo_g5_1022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6847};
  (data->simulationInfo->integerVarsPre[170] /* trafo_g5_1022.state DISCRETE */) = (data->modelData->integerVarsData[170] /* trafo_g5_1022.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6847;
}

/*
equation index: 6848
type: SIMPLE_ASSIGN
trafo_g5_1022.state = $PRE.trafo_g5_1022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6848};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[170]] /* trafo_g5_1022.state DISCRETE */) = (data->simulationInfo->integerVarsPre[170] /* trafo_g5_1022.state DISCRETE */);
  threadData->lastEquationSolved = 6848;
}

/*
equation index: 6849
type: SIMPLE_ASSIGN
$PRE.trafo_g4_1021.state = $START.trafo_g4_1021.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6849};
  (data->simulationInfo->integerVarsPre[169] /* trafo_g4_1021.state DISCRETE */) = (data->modelData->integerVarsData[169] /* trafo_g4_1021.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6849;
}

/*
equation index: 6850
type: SIMPLE_ASSIGN
trafo_g4_1021.state = $PRE.trafo_g4_1021.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6850};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[169]] /* trafo_g4_1021.state DISCRETE */) = (data->simulationInfo->integerVarsPre[169] /* trafo_g4_1021.state DISCRETE */);
  threadData->lastEquationSolved = 6850;
}

/*
equation index: 6851
type: SIMPLE_ASSIGN
$PRE.trafo_g3_1014.state = $START.trafo_g3_1014.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6851};
  (data->simulationInfo->integerVarsPre[168] /* trafo_g3_1014.state DISCRETE */) = (data->modelData->integerVarsData[168] /* trafo_g3_1014.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6851;
}

/*
equation index: 6852
type: SIMPLE_ASSIGN
trafo_g3_1014.state = $PRE.trafo_g3_1014.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6852};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[168]] /* trafo_g3_1014.state DISCRETE */) = (data->simulationInfo->integerVarsPre[168] /* trafo_g3_1014.state DISCRETE */);
  threadData->lastEquationSolved = 6852;
}

/*
equation index: 6853
type: SIMPLE_ASSIGN
$PRE.trafo_g2_1013.state = $START.trafo_g2_1013.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6853};
  (data->simulationInfo->integerVarsPre[167] /* trafo_g2_1013.state DISCRETE */) = (data->modelData->integerVarsData[167] /* trafo_g2_1013.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6853;
}

/*
equation index: 6854
type: SIMPLE_ASSIGN
trafo_g2_1013.state = $PRE.trafo_g2_1013.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6854};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[167]] /* trafo_g2_1013.state DISCRETE */) = (data->simulationInfo->integerVarsPre[167] /* trafo_g2_1013.state DISCRETE */);
  threadData->lastEquationSolved = 6854;
}

/*
equation index: 6855
type: SIMPLE_ASSIGN
$PRE.trafo_g1_1012.state = $START.trafo_g1_1012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6855};
  (data->simulationInfo->integerVarsPre[165] /* trafo_g1_1012.state DISCRETE */) = (data->modelData->integerVarsData[165] /* trafo_g1_1012.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6855;
}

/*
equation index: 6856
type: SIMPLE_ASSIGN
trafo_g1_1012.state = $PRE.trafo_g1_1012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6856};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[165]] /* trafo_g1_1012.state DISCRETE */) = (data->simulationInfo->integerVarsPre[165] /* trafo_g1_1012.state DISCRETE */);
  threadData->lastEquationSolved = 6856;
}

/*
equation index: 6857
type: SIMPLE_ASSIGN
$PRE.trafo_2031_4031.state = $START.trafo_2031_4031.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6857};
  (data->simulationInfo->integerVarsPre[136] /* trafo_2031_4031.state DISCRETE */) = (data->modelData->integerVarsData[136] /* trafo_2031_4031.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6857;
}

/*
equation index: 6858
type: SIMPLE_ASSIGN
trafo_2031_4031.state = $PRE.trafo_2031_4031.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6858};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[136]] /* trafo_2031_4031.state DISCRETE */) = (data->simulationInfo->integerVarsPre[136] /* trafo_2031_4031.state DISCRETE */);
  threadData->lastEquationSolved = 6858;
}

/*
equation index: 6859
type: SIMPLE_ASSIGN
$PRE.trafo_1045_4045b.state = $START.trafo_1045_4045b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6859};
  (data->simulationInfo->integerVarsPre[131] /* trafo_1045_4045b.state DISCRETE */) = (data->modelData->integerVarsData[131] /* trafo_1045_4045b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6859;
}

/*
equation index: 6860
type: SIMPLE_ASSIGN
trafo_1045_4045b.state = $PRE.trafo_1045_4045b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6860};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[131]] /* trafo_1045_4045b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[131] /* trafo_1045_4045b.state DISCRETE */);
  threadData->lastEquationSolved = 6860;
}

/*
equation index: 6861
type: SIMPLE_ASSIGN
$PRE.trafo_1045_4045a.state = $START.trafo_1045_4045a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6861};
  (data->simulationInfo->integerVarsPre[130] /* trafo_1045_4045a.state DISCRETE */) = (data->modelData->integerVarsData[130] /* trafo_1045_4045a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6861;
}

/*
equation index: 6862
type: SIMPLE_ASSIGN
trafo_1045_4045a.state = $PRE.trafo_1045_4045a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6862};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[130]] /* trafo_1045_4045a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[130] /* trafo_1045_4045a.state DISCRETE */);
  threadData->lastEquationSolved = 6862;
}

/*
equation index: 6863
type: SIMPLE_ASSIGN
$PRE.trafo_1044_4044b.state = $START.trafo_1044_4044b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6863};
  (data->simulationInfo->integerVarsPre[129] /* trafo_1044_4044b.state DISCRETE */) = (data->modelData->integerVarsData[129] /* trafo_1044_4044b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6863;
}

/*
equation index: 6864
type: SIMPLE_ASSIGN
trafo_1044_4044b.state = $PRE.trafo_1044_4044b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6864};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[129]] /* trafo_1044_4044b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[129] /* trafo_1044_4044b.state DISCRETE */);
  threadData->lastEquationSolved = 6864;
}

/*
equation index: 6865
type: SIMPLE_ASSIGN
$PRE.trafo_1044_4044a.state = $START.trafo_1044_4044a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6865};
  (data->simulationInfo->integerVarsPre[128] /* trafo_1044_4044a.state DISCRETE */) = (data->modelData->integerVarsData[128] /* trafo_1044_4044a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6865;
}

/*
equation index: 6866
type: SIMPLE_ASSIGN
trafo_1044_4044a.state = $PRE.trafo_1044_4044a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6866};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[128]] /* trafo_1044_4044a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[128] /* trafo_1044_4044a.state DISCRETE */);
  threadData->lastEquationSolved = 6866;
}

/*
equation index: 6867
type: SIMPLE_ASSIGN
$PRE.trafo_1022_4022.state = $START.trafo_1022_4022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6867};
  (data->simulationInfo->integerVarsPre[127] /* trafo_1022_4022.state DISCRETE */) = (data->modelData->integerVarsData[127] /* trafo_1022_4022.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6867;
}

/*
equation index: 6868
type: SIMPLE_ASSIGN
trafo_1022_4022.state = $PRE.trafo_1022_4022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6868};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[127]] /* trafo_1022_4022.state DISCRETE */) = (data->simulationInfo->integerVarsPre[127] /* trafo_1022_4022.state DISCRETE */);
  threadData->lastEquationSolved = 6868;
}

/*
equation index: 6869
type: SIMPLE_ASSIGN
$PRE.trafo_1012_4012.state = $START.trafo_1012_4012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6869};
  (data->simulationInfo->integerVarsPre[126] /* trafo_1012_4012.state DISCRETE */) = (data->modelData->integerVarsData[126] /* trafo_1012_4012.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6869;
}

/*
equation index: 6870
type: SIMPLE_ASSIGN
trafo_1012_4012.state = $PRE.trafo_1012_4012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6870};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[126]] /* trafo_1012_4012.state DISCRETE */) = (data->simulationInfo->integerVarsPre[126] /* trafo_1012_4012.state DISCRETE */);
  threadData->lastEquationSolved = 6870;
}

/*
equation index: 6871
type: SIMPLE_ASSIGN
$PRE.trafo_1011_4011.state = $START.trafo_1011_4011.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6871};
  (data->simulationInfo->integerVarsPre[125] /* trafo_1011_4011.state DISCRETE */) = (data->modelData->integerVarsData[125] /* trafo_1011_4011.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6871;
}

/*
equation index: 6872
type: SIMPLE_ASSIGN
trafo_1011_4011.state = $PRE.trafo_1011_4011.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6872};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[125]] /* trafo_1011_4011.state DISCRETE */) = (data->simulationInfo->integerVarsPre[125] /* trafo_1011_4011.state DISCRETE */);
  threadData->lastEquationSolved = 6872;
}

/*
equation index: 6873
type: SIMPLE_ASSIGN
$PRE.trafo_72_4072.state = $START.trafo_72_4072.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6873};
  (data->simulationInfo->integerVarsPre[154] /* trafo_72_4072.state DISCRETE */) = (data->modelData->integerVarsData[154] /* trafo_72_4072.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6873;
}

/*
equation index: 6874
type: SIMPLE_ASSIGN
trafo_72_4072.state = $PRE.trafo_72_4072.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6874};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[154]] /* trafo_72_4072.state DISCRETE */) = (data->simulationInfo->integerVarsPre[154] /* trafo_72_4072.state DISCRETE */);
  threadData->lastEquationSolved = 6874;
}

/*
equation index: 6875
type: SIMPLE_ASSIGN
$PRE.trafo_71_4071.state = $START.trafo_71_4071.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6875};
  (data->simulationInfo->integerVarsPre[153] /* trafo_71_4071.state DISCRETE */) = (data->modelData->integerVarsData[153] /* trafo_71_4071.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6875;
}

/*
equation index: 6876
type: SIMPLE_ASSIGN
trafo_71_4071.state = $PRE.trafo_71_4071.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6876};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[153]] /* trafo_71_4071.state DISCRETE */) = (data->simulationInfo->integerVarsPre[153] /* trafo_71_4071.state DISCRETE */);
  threadData->lastEquationSolved = 6876;
}

/*
equation index: 6877
type: SIMPLE_ASSIGN
$PRE.trafo_63_4063.state = $START.trafo_63_4063.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6877};
  (data->simulationInfo->integerVarsPre[152] /* trafo_63_4063.state DISCRETE */) = (data->modelData->integerVarsData[152] /* trafo_63_4063.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6877;
}

/*
equation index: 6878
type: SIMPLE_ASSIGN
trafo_63_4063.state = $PRE.trafo_63_4063.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6878};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[152]] /* trafo_63_4063.state DISCRETE */) = (data->simulationInfo->integerVarsPre[152] /* trafo_63_4063.state DISCRETE */);
  threadData->lastEquationSolved = 6878;
}

/*
equation index: 6879
type: SIMPLE_ASSIGN
$PRE.trafo_62_4062.state = $START.trafo_62_4062.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6879};
  (data->simulationInfo->integerVarsPre[151] /* trafo_62_4062.state DISCRETE */) = (data->modelData->integerVarsData[151] /* trafo_62_4062.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6879;
}

/*
equation index: 6880
type: SIMPLE_ASSIGN
trafo_62_4062.state = $PRE.trafo_62_4062.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6880};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[151]] /* trafo_62_4062.state DISCRETE */) = (data->simulationInfo->integerVarsPre[151] /* trafo_62_4062.state DISCRETE */);
  threadData->lastEquationSolved = 6880;
}

/*
equation index: 6881
type: SIMPLE_ASSIGN
$PRE.trafo_61_4061.state = $START.trafo_61_4061.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6881};
  (data->simulationInfo->integerVarsPre[150] /* trafo_61_4061.state DISCRETE */) = (data->modelData->integerVarsData[150] /* trafo_61_4061.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6881;
}

/*
equation index: 6882
type: SIMPLE_ASSIGN
trafo_61_4061.state = $PRE.trafo_61_4061.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6882};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[150]] /* trafo_61_4061.state DISCRETE */) = (data->simulationInfo->integerVarsPre[150] /* trafo_61_4061.state DISCRETE */);
  threadData->lastEquationSolved = 6882;
}

/*
equation index: 6883
type: SIMPLE_ASSIGN
$PRE.trafo_51_4051.state = $START.trafo_51_4051.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6883};
  (data->simulationInfo->integerVarsPre[148] /* trafo_51_4051.state DISCRETE */) = (data->modelData->integerVarsData[148] /* trafo_51_4051.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6883;
}

/*
equation index: 6884
type: SIMPLE_ASSIGN
trafo_51_4051.state = $PRE.trafo_51_4051.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6884};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[148]] /* trafo_51_4051.state DISCRETE */) = (data->simulationInfo->integerVarsPre[148] /* trafo_51_4051.state DISCRETE */);
  threadData->lastEquationSolved = 6884;
}

/*
equation index: 6885
type: SIMPLE_ASSIGN
$PRE.trafo_47_4047.state = $START.trafo_47_4047.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6885};
  (data->simulationInfo->integerVarsPre[146] /* trafo_47_4047.state DISCRETE */) = (data->modelData->integerVarsData[146] /* trafo_47_4047.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6885;
}

/*
equation index: 6886
type: SIMPLE_ASSIGN
trafo_47_4047.state = $PRE.trafo_47_4047.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6886};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[146]] /* trafo_47_4047.state DISCRETE */) = (data->simulationInfo->integerVarsPre[146] /* trafo_47_4047.state DISCRETE */);
  threadData->lastEquationSolved = 6886;
}

/*
equation index: 6887
type: SIMPLE_ASSIGN
$PRE.trafo_46_4046.state = $START.trafo_46_4046.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6887};
  (data->simulationInfo->integerVarsPre[145] /* trafo_46_4046.state DISCRETE */) = (data->modelData->integerVarsData[145] /* trafo_46_4046.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6887;
}

/*
equation index: 6888
type: SIMPLE_ASSIGN
trafo_46_4046.state = $PRE.trafo_46_4046.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6888};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[145]] /* trafo_46_4046.state DISCRETE */) = (data->simulationInfo->integerVarsPre[145] /* trafo_46_4046.state DISCRETE */);
  threadData->lastEquationSolved = 6888;
}

/*
equation index: 6889
type: SIMPLE_ASSIGN
$PRE.trafo_43_4043.state = $START.trafo_43_4043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6889};
  (data->simulationInfo->integerVarsPre[144] /* trafo_43_4043.state DISCRETE */) = (data->modelData->integerVarsData[144] /* trafo_43_4043.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6889;
}

/*
equation index: 6890
type: SIMPLE_ASSIGN
trafo_43_4043.state = $PRE.trafo_43_4043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6890};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[144]] /* trafo_43_4043.state DISCRETE */) = (data->simulationInfo->integerVarsPre[144] /* trafo_43_4043.state DISCRETE */);
  threadData->lastEquationSolved = 6890;
}

/*
equation index: 6891
type: SIMPLE_ASSIGN
$PRE.trafo_42_4042.state = $START.trafo_42_4042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6891};
  (data->simulationInfo->integerVarsPre[143] /* trafo_42_4042.state DISCRETE */) = (data->modelData->integerVarsData[143] /* trafo_42_4042.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6891;
}

/*
equation index: 6892
type: SIMPLE_ASSIGN
trafo_42_4042.state = $PRE.trafo_42_4042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6892};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[143]] /* trafo_42_4042.state DISCRETE */) = (data->simulationInfo->integerVarsPre[143] /* trafo_42_4042.state DISCRETE */);
  threadData->lastEquationSolved = 6892;
}

/*
equation index: 6893
type: SIMPLE_ASSIGN
$PRE.trafo_41_4041.state = $START.trafo_41_4041.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6893};
  (data->simulationInfo->integerVarsPre[142] /* trafo_41_4041.state DISCRETE */) = (data->modelData->integerVarsData[142] /* trafo_41_4041.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6893;
}

/*
equation index: 6894
type: SIMPLE_ASSIGN
trafo_41_4041.state = $PRE.trafo_41_4041.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6894};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[142]] /* trafo_41_4041.state DISCRETE */) = (data->simulationInfo->integerVarsPre[142] /* trafo_41_4041.state DISCRETE */);
  threadData->lastEquationSolved = 6894;
}

/*
equation index: 6895
type: SIMPLE_ASSIGN
$PRE.trafo_32_2032.state = $START.trafo_32_2032.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6895};
  (data->simulationInfo->integerVarsPre[140] /* trafo_32_2032.state DISCRETE */) = (data->modelData->integerVarsData[140] /* trafo_32_2032.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6895;
}

/*
equation index: 6896
type: SIMPLE_ASSIGN
trafo_32_2032.state = $PRE.trafo_32_2032.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6896};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[140]] /* trafo_32_2032.state DISCRETE */) = (data->simulationInfo->integerVarsPre[140] /* trafo_32_2032.state DISCRETE */);
  threadData->lastEquationSolved = 6896;
}

/*
equation index: 6897
type: SIMPLE_ASSIGN
$PRE.trafo_31_2031.state = $START.trafo_31_2031.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6897};
  (data->simulationInfo->integerVarsPre[139] /* trafo_31_2031.state DISCRETE */) = (data->modelData->integerVarsData[139] /* trafo_31_2031.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6897;
}

/*
equation index: 6898
type: SIMPLE_ASSIGN
trafo_31_2031.state = $PRE.trafo_31_2031.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6898};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[139]] /* trafo_31_2031.state DISCRETE */) = (data->simulationInfo->integerVarsPre[139] /* trafo_31_2031.state DISCRETE */);
  threadData->lastEquationSolved = 6898;
}

/*
equation index: 6899
type: SIMPLE_ASSIGN
$PRE.trafo_22_1022.state = $START.trafo_22_1022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6899};
  (data->simulationInfo->integerVarsPre[137] /* trafo_22_1022.state DISCRETE */) = (data->modelData->integerVarsData[137] /* trafo_22_1022.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6899;
}

/*
equation index: 6900
type: SIMPLE_ASSIGN
trafo_22_1022.state = $PRE.trafo_22_1022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6900};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[137]] /* trafo_22_1022.state DISCRETE */) = (data->simulationInfo->integerVarsPre[137] /* trafo_22_1022.state DISCRETE */);
  threadData->lastEquationSolved = 6900;
}

/*
equation index: 6901
type: SIMPLE_ASSIGN
$PRE.trafo_13_1013.state = $START.trafo_13_1013.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6901};
  (data->simulationInfo->integerVarsPre[134] /* trafo_13_1013.state DISCRETE */) = (data->modelData->integerVarsData[134] /* trafo_13_1013.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6901;
}

/*
equation index: 6902
type: SIMPLE_ASSIGN
trafo_13_1013.state = $PRE.trafo_13_1013.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6902};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[134]] /* trafo_13_1013.state DISCRETE */) = (data->simulationInfo->integerVarsPre[134] /* trafo_13_1013.state DISCRETE */);
  threadData->lastEquationSolved = 6902;
}

/*
equation index: 6903
type: SIMPLE_ASSIGN
$PRE.trafo_12_1012.state = $START.trafo_12_1012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6903};
  (data->simulationInfo->integerVarsPre[133] /* trafo_12_1012.state DISCRETE */) = (data->modelData->integerVarsData[133] /* trafo_12_1012.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6903;
}

/*
equation index: 6904
type: SIMPLE_ASSIGN
trafo_12_1012.state = $PRE.trafo_12_1012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6904};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[133]] /* trafo_12_1012.state DISCRETE */) = (data->simulationInfo->integerVarsPre[133] /* trafo_12_1012.state DISCRETE */);
  threadData->lastEquationSolved = 6904;
}

/*
equation index: 6905
type: SIMPLE_ASSIGN
$PRE.trafo_11_1011.state = $START.trafo_11_1011.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6905};
  (data->simulationInfo->integerVarsPre[132] /* trafo_11_1011.state DISCRETE */) = (data->modelData->integerVarsData[132] /* trafo_11_1011.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6905;
}

/*
equation index: 6906
type: SIMPLE_ASSIGN
trafo_11_1011.state = $PRE.trafo_11_1011.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6906};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[132]] /* trafo_11_1011.state DISCRETE */) = (data->simulationInfo->integerVarsPre[132] /* trafo_11_1011.state DISCRETE */);
  threadData->lastEquationSolved = 6906;
}

/*
equation index: 6907
type: SIMPLE_ASSIGN
$PRE.trafo_5_1045.state = $START.trafo_5_1045.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6907};
  (data->simulationInfo->integerVarsPre[149] /* trafo_5_1045.state DISCRETE */) = (data->modelData->integerVarsData[149] /* trafo_5_1045.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6907;
}

/*
equation index: 6908
type: SIMPLE_ASSIGN
trafo_5_1045.state = $PRE.trafo_5_1045.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6908};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[149]] /* trafo_5_1045.state DISCRETE */) = (data->simulationInfo->integerVarsPre[149] /* trafo_5_1045.state DISCRETE */);
  threadData->lastEquationSolved = 6908;
}

/*
equation index: 6909
type: SIMPLE_ASSIGN
$PRE.trafo_4_1044.state = $START.trafo_4_1044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6909};
  (data->simulationInfo->integerVarsPre[147] /* trafo_4_1044.state DISCRETE */) = (data->modelData->integerVarsData[147] /* trafo_4_1044.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6909;
}

/*
equation index: 6910
type: SIMPLE_ASSIGN
trafo_4_1044.state = $PRE.trafo_4_1044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6910};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[147]] /* trafo_4_1044.state DISCRETE */) = (data->simulationInfo->integerVarsPre[147] /* trafo_4_1044.state DISCRETE */);
  threadData->lastEquationSolved = 6910;
}

/*
equation index: 6911
type: SIMPLE_ASSIGN
$PRE.trafo_3_1043.state = $START.trafo_3_1043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6911};
  (data->simulationInfo->integerVarsPre[141] /* trafo_3_1043.state DISCRETE */) = (data->modelData->integerVarsData[141] /* trafo_3_1043.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6911;
}

/*
equation index: 6912
type: SIMPLE_ASSIGN
trafo_3_1043.state = $PRE.trafo_3_1043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6912};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[141]] /* trafo_3_1043.state DISCRETE */) = (data->simulationInfo->integerVarsPre[141] /* trafo_3_1043.state DISCRETE */);
  threadData->lastEquationSolved = 6912;
}

/*
equation index: 6913
type: SIMPLE_ASSIGN
$PRE.trafo_2_1042.state = $START.trafo_2_1042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6913};
  (data->simulationInfo->integerVarsPre[138] /* trafo_2_1042.state DISCRETE */) = (data->modelData->integerVarsData[138] /* trafo_2_1042.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6913;
}

/*
equation index: 6914
type: SIMPLE_ASSIGN
trafo_2_1042.state = $PRE.trafo_2_1042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6914};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[138]] /* trafo_2_1042.state DISCRETE */) = (data->simulationInfo->integerVarsPre[138] /* trafo_2_1042.state DISCRETE */);
  threadData->lastEquationSolved = 6914;
}

/*
equation index: 6915
type: SIMPLE_ASSIGN
$PRE.trafo_1_1041.state = $START.trafo_1_1041.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6915};
  (data->simulationInfo->integerVarsPre[135] /* trafo_1_1041.state DISCRETE */) = (data->modelData->integerVarsData[135] /* trafo_1_1041.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6915;
}

/*
equation index: 6916
type: SIMPLE_ASSIGN
trafo_1_1041.state = $PRE.trafo_1_1041.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6916};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[135]] /* trafo_1_1041.state DISCRETE */) = (data->simulationInfo->integerVarsPre[135] /* trafo_1_1041.state DISCRETE */);
  threadData->lastEquationSolved = 6916;
}

/*
equation index: 6917
type: SIMPLE_ASSIGN
$PRE.shunt_4071.state = $START.shunt_4071.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6917};
  (data->simulationInfo->integerVarsPre[124] /* shunt_4071.state DISCRETE */) = (data->modelData->integerVarsData[124] /* shunt_4071.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6917;
}

/*
equation index: 6918
type: SIMPLE_ASSIGN
shunt_4071.state = $PRE.shunt_4071.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6918};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[124]] /* shunt_4071.state DISCRETE */) = (data->simulationInfo->integerVarsPre[124] /* shunt_4071.state DISCRETE */);
  threadData->lastEquationSolved = 6918;
}

/*
equation index: 6919
type: SIMPLE_ASSIGN
$PRE.shunt_4051.state = $START.shunt_4051.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6919};
  (data->simulationInfo->integerVarsPre[123] /* shunt_4051.state DISCRETE */) = (data->modelData->integerVarsData[123] /* shunt_4051.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6919;
}

/*
equation index: 6920
type: SIMPLE_ASSIGN
shunt_4051.state = $PRE.shunt_4051.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6920};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[123]] /* shunt_4051.state DISCRETE */) = (data->simulationInfo->integerVarsPre[123] /* shunt_4051.state DISCRETE */);
  threadData->lastEquationSolved = 6920;
}

/*
equation index: 6921
type: SIMPLE_ASSIGN
$PRE.shunt_4046.state = $START.shunt_4046.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6921};
  (data->simulationInfo->integerVarsPre[122] /* shunt_4046.state DISCRETE */) = (data->modelData->integerVarsData[122] /* shunt_4046.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6921;
}

/*
equation index: 6922
type: SIMPLE_ASSIGN
shunt_4046.state = $PRE.shunt_4046.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6922};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[122]] /* shunt_4046.state DISCRETE */) = (data->simulationInfo->integerVarsPre[122] /* shunt_4046.state DISCRETE */);
  threadData->lastEquationSolved = 6922;
}

/*
equation index: 6923
type: SIMPLE_ASSIGN
$PRE.shunt_4043.state = $START.shunt_4043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6923};
  (data->simulationInfo->integerVarsPre[121] /* shunt_4043.state DISCRETE */) = (data->modelData->integerVarsData[121] /* shunt_4043.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6923;
}

/*
equation index: 6924
type: SIMPLE_ASSIGN
shunt_4043.state = $PRE.shunt_4043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6924};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[121]] /* shunt_4043.state DISCRETE */) = (data->simulationInfo->integerVarsPre[121] /* shunt_4043.state DISCRETE */);
  threadData->lastEquationSolved = 6924;
}

/*
equation index: 6925
type: SIMPLE_ASSIGN
$PRE.shunt_4041.state = $START.shunt_4041.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6925};
  (data->simulationInfo->integerVarsPre[120] /* shunt_4041.state DISCRETE */) = (data->modelData->integerVarsData[120] /* shunt_4041.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6925;
}

/*
equation index: 6926
type: SIMPLE_ASSIGN
shunt_4041.state = $PRE.shunt_4041.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6926};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[120]] /* shunt_4041.state DISCRETE */) = (data->simulationInfo->integerVarsPre[120] /* shunt_4041.state DISCRETE */);
  threadData->lastEquationSolved = 6926;
}

/*
equation index: 6927
type: SIMPLE_ASSIGN
$PRE.shunt_4012.state = $START.shunt_4012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6927};
  (data->simulationInfo->integerVarsPre[119] /* shunt_4012.state DISCRETE */) = (data->modelData->integerVarsData[119] /* shunt_4012.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6927;
}

/*
equation index: 6928
type: SIMPLE_ASSIGN
shunt_4012.state = $PRE.shunt_4012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6928};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[119]] /* shunt_4012.state DISCRETE */) = (data->simulationInfo->integerVarsPre[119] /* shunt_4012.state DISCRETE */);
  threadData->lastEquationSolved = 6928;
}

/*
equation index: 6929
type: SIMPLE_ASSIGN
$PRE.shunt_1045.state = $START.shunt_1045.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6929};
  (data->simulationInfo->integerVarsPre[118] /* shunt_1045.state DISCRETE */) = (data->modelData->integerVarsData[118] /* shunt_1045.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6929;
}

/*
equation index: 6930
type: SIMPLE_ASSIGN
shunt_1045.state = $PRE.shunt_1045.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6930};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[118]] /* shunt_1045.state DISCRETE */) = (data->simulationInfo->integerVarsPre[118] /* shunt_1045.state DISCRETE */);
  threadData->lastEquationSolved = 6930;
}

/*
equation index: 6931
type: SIMPLE_ASSIGN
$PRE.shunt_1044.state = $START.shunt_1044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6931};
  (data->simulationInfo->integerVarsPre[117] /* shunt_1044.state DISCRETE */) = (data->modelData->integerVarsData[117] /* shunt_1044.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6931;
}

/*
equation index: 6932
type: SIMPLE_ASSIGN
shunt_1044.state = $PRE.shunt_1044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6932};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[117]] /* shunt_1044.state DISCRETE */) = (data->simulationInfo->integerVarsPre[117] /* shunt_1044.state DISCRETE */);
  threadData->lastEquationSolved = 6932;
}

/*
equation index: 6933
type: SIMPLE_ASSIGN
$PRE.shunt_1043.state = $START.shunt_1043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6933};
  (data->simulationInfo->integerVarsPre[116] /* shunt_1043.state DISCRETE */) = (data->modelData->integerVarsData[116] /* shunt_1043.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6933;
}

/*
equation index: 6934
type: SIMPLE_ASSIGN
shunt_1043.state = $PRE.shunt_1043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6934};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[116]] /* shunt_1043.state DISCRETE */) = (data->simulationInfo->integerVarsPre[116] /* shunt_1043.state DISCRETE */);
  threadData->lastEquationSolved = 6934;
}

/*
equation index: 6935
type: SIMPLE_ASSIGN
$PRE.shunt_1041.state = $START.shunt_1041.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6935};
  (data->simulationInfo->integerVarsPre[115] /* shunt_1041.state DISCRETE */) = (data->modelData->integerVarsData[115] /* shunt_1041.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6935;
}

/*
equation index: 6936
type: SIMPLE_ASSIGN
shunt_1041.state = $PRE.shunt_1041.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6936};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[115]] /* shunt_1041.state DISCRETE */) = (data->simulationInfo->integerVarsPre[115] /* shunt_1041.state DISCRETE */);
  threadData->lastEquationSolved = 6936;
}

/*
equation index: 6937
type: SIMPLE_ASSIGN
$PRE.shunt_1022.state = $START.shunt_1022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6937};
  (data->simulationInfo->integerVarsPre[114] /* shunt_1022.state DISCRETE */) = (data->modelData->integerVarsData[114] /* shunt_1022.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6937;
}

/*
equation index: 6938
type: SIMPLE_ASSIGN
shunt_1022.state = $PRE.shunt_1022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6938};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[114]] /* shunt_1022.state DISCRETE */) = (data->simulationInfo->integerVarsPre[114] /* shunt_1022.state DISCRETE */);
  threadData->lastEquationSolved = 6938;
}

/*
equation index: 6939
type: SIMPLE_ASSIGN
$PRE.load_72.state = $START.load_72.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6939};
  (data->simulationInfo->integerVarsPre[113] /* load_72.state DISCRETE */) = (data->modelData->integerVarsData[113] /* load_72.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6939;
}

/*
equation index: 6940
type: SIMPLE_ASSIGN
load_72.state = $PRE.load_72.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6940};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[113]] /* load_72.state DISCRETE */) = (data->simulationInfo->integerVarsPre[113] /* load_72.state DISCRETE */);
  threadData->lastEquationSolved = 6940;
}

/*
equation index: 6941
type: SIMPLE_ASSIGN
$PRE.load_71.state = $START.load_71.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6941};
  (data->simulationInfo->integerVarsPre[112] /* load_71.state DISCRETE */) = (data->modelData->integerVarsData[112] /* load_71.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6941;
}

/*
equation index: 6942
type: SIMPLE_ASSIGN
load_71.state = $PRE.load_71.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6942};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[112]] /* load_71.state DISCRETE */) = (data->simulationInfo->integerVarsPre[112] /* load_71.state DISCRETE */);
  threadData->lastEquationSolved = 6942;
}

/*
equation index: 6943
type: SIMPLE_ASSIGN
$PRE.load_63.state = $START.load_63.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6943};
  (data->simulationInfo->integerVarsPre[111] /* load_63.state DISCRETE */) = (data->modelData->integerVarsData[111] /* load_63.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6943;
}

/*
equation index: 6944
type: SIMPLE_ASSIGN
load_63.state = $PRE.load_63.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6944};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[111]] /* load_63.state DISCRETE */) = (data->simulationInfo->integerVarsPre[111] /* load_63.state DISCRETE */);
  threadData->lastEquationSolved = 6944;
}

/*
equation index: 6945
type: SIMPLE_ASSIGN
$PRE.load_62.state = $START.load_62.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6945};
  (data->simulationInfo->integerVarsPre[110] /* load_62.state DISCRETE */) = (data->modelData->integerVarsData[110] /* load_62.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6945;
}

/*
equation index: 6946
type: SIMPLE_ASSIGN
load_62.state = $PRE.load_62.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6946};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[110]] /* load_62.state DISCRETE */) = (data->simulationInfo->integerVarsPre[110] /* load_62.state DISCRETE */);
  threadData->lastEquationSolved = 6946;
}

/*
equation index: 6947
type: SIMPLE_ASSIGN
$PRE.load_61.state = $START.load_61.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6947};
  (data->simulationInfo->integerVarsPre[109] /* load_61.state DISCRETE */) = (data->modelData->integerVarsData[109] /* load_61.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6947;
}

/*
equation index: 6948
type: SIMPLE_ASSIGN
load_61.state = $PRE.load_61.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6948};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[109]] /* load_61.state DISCRETE */) = (data->simulationInfo->integerVarsPre[109] /* load_61.state DISCRETE */);
  threadData->lastEquationSolved = 6948;
}

/*
equation index: 6949
type: SIMPLE_ASSIGN
$PRE.load_51.state = $START.load_51.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6949};
  (data->simulationInfo->integerVarsPre[108] /* load_51.state DISCRETE */) = (data->modelData->integerVarsData[108] /* load_51.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6949;
}

/*
equation index: 6950
type: SIMPLE_ASSIGN
load_51.state = $PRE.load_51.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6950};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[108]] /* load_51.state DISCRETE */) = (data->simulationInfo->integerVarsPre[108] /* load_51.state DISCRETE */);
  threadData->lastEquationSolved = 6950;
}

/*
equation index: 6951
type: SIMPLE_ASSIGN
$PRE.load_47.state = $START.load_47.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6951};
  (data->simulationInfo->integerVarsPre[107] /* load_47.state DISCRETE */) = (data->modelData->integerVarsData[107] /* load_47.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6951;
}

/*
equation index: 6952
type: SIMPLE_ASSIGN
load_47.state = $PRE.load_47.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6952};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[107]] /* load_47.state DISCRETE */) = (data->simulationInfo->integerVarsPre[107] /* load_47.state DISCRETE */);
  threadData->lastEquationSolved = 6952;
}

/*
equation index: 6953
type: SIMPLE_ASSIGN
$PRE.load_46.state = $START.load_46.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6953};
  (data->simulationInfo->integerVarsPre[106] /* load_46.state DISCRETE */) = (data->modelData->integerVarsData[106] /* load_46.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6953;
}

/*
equation index: 6954
type: SIMPLE_ASSIGN
load_46.state = $PRE.load_46.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6954};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[106]] /* load_46.state DISCRETE */) = (data->simulationInfo->integerVarsPre[106] /* load_46.state DISCRETE */);
  threadData->lastEquationSolved = 6954;
}

/*
equation index: 6955
type: SIMPLE_ASSIGN
$PRE.load_43.state = $START.load_43.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6955};
  (data->simulationInfo->integerVarsPre[105] /* load_43.state DISCRETE */) = (data->modelData->integerVarsData[105] /* load_43.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6955;
}

/*
equation index: 6956
type: SIMPLE_ASSIGN
load_43.state = $PRE.load_43.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6956};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[105]] /* load_43.state DISCRETE */) = (data->simulationInfo->integerVarsPre[105] /* load_43.state DISCRETE */);
  threadData->lastEquationSolved = 6956;
}

/*
equation index: 6957
type: SIMPLE_ASSIGN
$PRE.load_42.state = $START.load_42.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6957};
  (data->simulationInfo->integerVarsPre[104] /* load_42.state DISCRETE */) = (data->modelData->integerVarsData[104] /* load_42.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6957;
}

/*
equation index: 6958
type: SIMPLE_ASSIGN
load_42.state = $PRE.load_42.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6958};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[104]] /* load_42.state DISCRETE */) = (data->simulationInfo->integerVarsPre[104] /* load_42.state DISCRETE */);
  threadData->lastEquationSolved = 6958;
}

/*
equation index: 6959
type: SIMPLE_ASSIGN
$PRE.load_41.state = $START.load_41.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6959};
  (data->simulationInfo->integerVarsPre[103] /* load_41.state DISCRETE */) = (data->modelData->integerVarsData[103] /* load_41.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6959;
}

/*
equation index: 6960
type: SIMPLE_ASSIGN
load_41.state = $PRE.load_41.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6960};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[103]] /* load_41.state DISCRETE */) = (data->simulationInfo->integerVarsPre[103] /* load_41.state DISCRETE */);
  threadData->lastEquationSolved = 6960;
}

/*
equation index: 6961
type: SIMPLE_ASSIGN
$PRE.load_32.state = $START.load_32.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6961};
  (data->simulationInfo->integerVarsPre[102] /* load_32.state DISCRETE */) = (data->modelData->integerVarsData[102] /* load_32.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6961;
}

/*
equation index: 6962
type: SIMPLE_ASSIGN
load_32.state = $PRE.load_32.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6962};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[102]] /* load_32.state DISCRETE */) = (data->simulationInfo->integerVarsPre[102] /* load_32.state DISCRETE */);
  threadData->lastEquationSolved = 6962;
}

/*
equation index: 6963
type: SIMPLE_ASSIGN
$PRE.load_31.state = $START.load_31.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6963};
  (data->simulationInfo->integerVarsPre[101] /* load_31.state DISCRETE */) = (data->modelData->integerVarsData[101] /* load_31.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6963;
}

/*
equation index: 6964
type: SIMPLE_ASSIGN
load_31.state = $PRE.load_31.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6964};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[101]] /* load_31.state DISCRETE */) = (data->simulationInfo->integerVarsPre[101] /* load_31.state DISCRETE */);
  threadData->lastEquationSolved = 6964;
}

/*
equation index: 6965
type: SIMPLE_ASSIGN
$PRE.load_22.state = $START.load_22.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6965};
  (data->simulationInfo->integerVarsPre[100] /* load_22.state DISCRETE */) = (data->modelData->integerVarsData[100] /* load_22.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6965;
}

/*
equation index: 6966
type: SIMPLE_ASSIGN
load_22.state = $PRE.load_22.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6966};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[100]] /* load_22.state DISCRETE */) = (data->simulationInfo->integerVarsPre[100] /* load_22.state DISCRETE */);
  threadData->lastEquationSolved = 6966;
}

/*
equation index: 6967
type: SIMPLE_ASSIGN
$PRE.load_13.state = $START.load_13.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6967};
  (data->simulationInfo->integerVarsPre[99] /* load_13.state DISCRETE */) = (data->modelData->integerVarsData[99] /* load_13.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6967;
}

/*
equation index: 6968
type: SIMPLE_ASSIGN
load_13.state = $PRE.load_13.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6968};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[99]] /* load_13.state DISCRETE */) = (data->simulationInfo->integerVarsPre[99] /* load_13.state DISCRETE */);
  threadData->lastEquationSolved = 6968;
}

/*
equation index: 6969
type: SIMPLE_ASSIGN
$PRE.load_12.state = $START.load_12.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6969};
  (data->simulationInfo->integerVarsPre[98] /* load_12.state DISCRETE */) = (data->modelData->integerVarsData[98] /* load_12.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6969;
}

/*
equation index: 6970
type: SIMPLE_ASSIGN
load_12.state = $PRE.load_12.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6970};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[98]] /* load_12.state DISCRETE */) = (data->simulationInfo->integerVarsPre[98] /* load_12.state DISCRETE */);
  threadData->lastEquationSolved = 6970;
}

/*
equation index: 6971
type: SIMPLE_ASSIGN
$PRE.load_11.state = $START.load_11.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6971};
  (data->simulationInfo->integerVarsPre[97] /* load_11.state DISCRETE */) = (data->modelData->integerVarsData[97] /* load_11.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6971;
}

/*
equation index: 6972
type: SIMPLE_ASSIGN
load_11.state = $PRE.load_11.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6972};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[97]] /* load_11.state DISCRETE */) = (data->simulationInfo->integerVarsPre[97] /* load_11.state DISCRETE */);
  threadData->lastEquationSolved = 6972;
}

/*
equation index: 6973
type: SIMPLE_ASSIGN
$PRE.load_05.state = $START.load_05.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6973};
  (data->simulationInfo->integerVarsPre[96] /* load_05.state DISCRETE */) = (data->modelData->integerVarsData[96] /* load_05.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6973;
}

/*
equation index: 6974
type: SIMPLE_ASSIGN
load_05.state = $PRE.load_05.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6974};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[96]] /* load_05.state DISCRETE */) = (data->simulationInfo->integerVarsPre[96] /* load_05.state DISCRETE */);
  threadData->lastEquationSolved = 6974;
}

/*
equation index: 6975
type: SIMPLE_ASSIGN
$PRE.load_04.state = $START.load_04.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6975};
  (data->simulationInfo->integerVarsPre[95] /* load_04.state DISCRETE */) = (data->modelData->integerVarsData[95] /* load_04.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6975;
}

/*
equation index: 6976
type: SIMPLE_ASSIGN
load_04.state = $PRE.load_04.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6976};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[95]] /* load_04.state DISCRETE */) = (data->simulationInfo->integerVarsPre[95] /* load_04.state DISCRETE */);
  threadData->lastEquationSolved = 6976;
}

/*
equation index: 6977
type: SIMPLE_ASSIGN
$PRE.load_03.state = $START.load_03.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6977};
  (data->simulationInfo->integerVarsPre[94] /* load_03.state DISCRETE */) = (data->modelData->integerVarsData[94] /* load_03.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6977;
}

/*
equation index: 6978
type: SIMPLE_ASSIGN
load_03.state = $PRE.load_03.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6978};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[94]] /* load_03.state DISCRETE */) = (data->simulationInfo->integerVarsPre[94] /* load_03.state DISCRETE */);
  threadData->lastEquationSolved = 6978;
}

/*
equation index: 6979
type: SIMPLE_ASSIGN
$PRE.load_02.state = $START.load_02.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6979};
  (data->simulationInfo->integerVarsPre[93] /* load_02.state DISCRETE */) = (data->modelData->integerVarsData[93] /* load_02.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6979;
}

/*
equation index: 6980
type: SIMPLE_ASSIGN
load_02.state = $PRE.load_02.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6980};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[93]] /* load_02.state DISCRETE */) = (data->simulationInfo->integerVarsPre[93] /* load_02.state DISCRETE */);
  threadData->lastEquationSolved = 6980;
}

/*
equation index: 6981
type: SIMPLE_ASSIGN
$PRE.load_01.state = $START.load_01.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6981};
  (data->simulationInfo->integerVarsPre[92] /* load_01.state DISCRETE */) = (data->modelData->integerVarsData[92] /* load_01.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6981;
}

/*
equation index: 6982
type: SIMPLE_ASSIGN
load_01.state = $PRE.load_01.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6982};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[92]] /* load_01.state DISCRETE */) = (data->simulationInfo->integerVarsPre[92] /* load_01.state DISCRETE */);
  threadData->lastEquationSolved = 6982;
}

/*
equation index: 6983
type: SIMPLE_ASSIGN
$PRE.line_4071_4072b.state = $START.line_4071_4072b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6983};
  (data->simulationInfo->integerVarsPre[91] /* line_4071_4072b.state DISCRETE */) = (data->modelData->integerVarsData[91] /* line_4071_4072b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6983;
}

/*
equation index: 6984
type: SIMPLE_ASSIGN
line_4071_4072b.state = $PRE.line_4071_4072b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6984};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[91]] /* line_4071_4072b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[91] /* line_4071_4072b.state DISCRETE */);
  threadData->lastEquationSolved = 6984;
}

/*
equation index: 6985
type: SIMPLE_ASSIGN
$PRE.line_4071_4072a.state = $START.line_4071_4072a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6985};
  (data->simulationInfo->integerVarsPre[90] /* line_4071_4072a.state DISCRETE */) = (data->modelData->integerVarsData[90] /* line_4071_4072a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6985;
}

/*
equation index: 6986
type: SIMPLE_ASSIGN
line_4071_4072a.state = $PRE.line_4071_4072a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6986};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[90]] /* line_4071_4072a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[90] /* line_4071_4072a.state DISCRETE */);
  threadData->lastEquationSolved = 6986;
}

/*
equation index: 6987
type: SIMPLE_ASSIGN
$PRE.line_4062_4063b.state = $START.line_4062_4063b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6987};
  (data->simulationInfo->integerVarsPre[89] /* line_4062_4063b.state DISCRETE */) = (data->modelData->integerVarsData[89] /* line_4062_4063b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6987;
}

/*
equation index: 6988
type: SIMPLE_ASSIGN
line_4062_4063b.state = $PRE.line_4062_4063b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6988};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[89]] /* line_4062_4063b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[89] /* line_4062_4063b.state DISCRETE */);
  threadData->lastEquationSolved = 6988;
}

/*
equation index: 6989
type: SIMPLE_ASSIGN
$PRE.line_4062_4063a.state = $START.line_4062_4063a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6989};
  (data->simulationInfo->integerVarsPre[88] /* line_4062_4063a.state DISCRETE */) = (data->modelData->integerVarsData[88] /* line_4062_4063a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6989;
}

/*
equation index: 6990
type: SIMPLE_ASSIGN
line_4062_4063a.state = $PRE.line_4062_4063a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6990};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[88]] /* line_4062_4063a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[88] /* line_4062_4063a.state DISCRETE */);
  threadData->lastEquationSolved = 6990;
}

/*
equation index: 6991
type: SIMPLE_ASSIGN
$PRE.line_4061_4062.state = $START.line_4061_4062.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6991};
  (data->simulationInfo->integerVarsPre[87] /* line_4061_4062.state DISCRETE */) = (data->modelData->integerVarsData[87] /* line_4061_4062.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6991;
}

/*
equation index: 6992
type: SIMPLE_ASSIGN
line_4061_4062.state = $PRE.line_4061_4062.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6992};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[87]] /* line_4061_4062.state DISCRETE */) = (data->simulationInfo->integerVarsPre[87] /* line_4061_4062.state DISCRETE */);
  threadData->lastEquationSolved = 6992;
}

/*
equation index: 6993
type: SIMPLE_ASSIGN
$PRE.line_4046_4047.state = $START.line_4046_4047.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6993};
  (data->simulationInfo->integerVarsPre[86] /* line_4046_4047.state DISCRETE */) = (data->modelData->integerVarsData[86] /* line_4046_4047.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6993;
}

/*
equation index: 6994
type: SIMPLE_ASSIGN
line_4046_4047.state = $PRE.line_4046_4047.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6994};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[86]] /* line_4046_4047.state DISCRETE */) = (data->simulationInfo->integerVarsPre[86] /* line_4046_4047.state DISCRETE */);
  threadData->lastEquationSolved = 6994;
}

/*
equation index: 6995
type: SIMPLE_ASSIGN
$PRE.line_4045_4062.state = $START.line_4045_4062.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6995};
  (data->simulationInfo->integerVarsPre[85] /* line_4045_4062.state DISCRETE */) = (data->modelData->integerVarsData[85] /* line_4045_4062.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6995;
}

/*
equation index: 6996
type: SIMPLE_ASSIGN
line_4045_4062.state = $PRE.line_4045_4062.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6996};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[85]] /* line_4045_4062.state DISCRETE */) = (data->simulationInfo->integerVarsPre[85] /* line_4045_4062.state DISCRETE */);
  threadData->lastEquationSolved = 6996;
}

/*
equation index: 6997
type: SIMPLE_ASSIGN
$PRE.line_4045_4051b.state = $START.line_4045_4051b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6997};
  (data->simulationInfo->integerVarsPre[84] /* line_4045_4051b.state DISCRETE */) = (data->modelData->integerVarsData[84] /* line_4045_4051b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6997;
}

/*
equation index: 6998
type: SIMPLE_ASSIGN
line_4045_4051b.state = $PRE.line_4045_4051b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6998};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[84]] /* line_4045_4051b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[84] /* line_4045_4051b.state DISCRETE */);
  threadData->lastEquationSolved = 6998;
}

/*
equation index: 6999
type: SIMPLE_ASSIGN
$PRE.line_4045_4051a.state = $START.line_4045_4051a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6999};
  (data->simulationInfo->integerVarsPre[83] /* line_4045_4051a.state DISCRETE */) = (data->modelData->integerVarsData[83] /* line_4045_4051a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 6999;
}

/*
equation index: 7000
type: SIMPLE_ASSIGN
line_4045_4051a.state = $PRE.line_4045_4051a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7000};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[83]] /* line_4045_4051a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[83] /* line_4045_4051a.state DISCRETE */);
  threadData->lastEquationSolved = 7000;
}

/*
equation index: 7001
type: SIMPLE_ASSIGN
$PRE.line_4044_4045b.state = $START.line_4044_4045b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7001};
  (data->simulationInfo->integerVarsPre[82] /* line_4044_4045b.state DISCRETE */) = (data->modelData->integerVarsData[82] /* line_4044_4045b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7001;
}

/*
equation index: 7002
type: SIMPLE_ASSIGN
line_4044_4045b.state = $PRE.line_4044_4045b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7002};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[82]] /* line_4044_4045b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[82] /* line_4044_4045b.state DISCRETE */);
  threadData->lastEquationSolved = 7002;
}

/*
equation index: 7003
type: SIMPLE_ASSIGN
$PRE.line_4044_4045a.state = $START.line_4044_4045a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7003};
  (data->simulationInfo->integerVarsPre[81] /* line_4044_4045a.state DISCRETE */) = (data->modelData->integerVarsData[81] /* line_4044_4045a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7003;
}

/*
equation index: 7004
type: SIMPLE_ASSIGN
line_4044_4045a.state = $PRE.line_4044_4045a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7004};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[81]] /* line_4044_4045a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[81] /* line_4044_4045a.state DISCRETE */);
  threadData->lastEquationSolved = 7004;
}

/*
equation index: 7005
type: SIMPLE_ASSIGN
$PRE.line_4043_4047.state = $START.line_4043_4047.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7005};
  (data->simulationInfo->integerVarsPre[80] /* line_4043_4047.state DISCRETE */) = (data->modelData->integerVarsData[80] /* line_4043_4047.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7005;
}

/*
equation index: 7006
type: SIMPLE_ASSIGN
line_4043_4047.state = $PRE.line_4043_4047.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7006};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[80]] /* line_4043_4047.state DISCRETE */) = (data->simulationInfo->integerVarsPre[80] /* line_4043_4047.state DISCRETE */);
  threadData->lastEquationSolved = 7006;
}

/*
equation index: 7007
type: SIMPLE_ASSIGN
$PRE.line_4043_4046.state = $START.line_4043_4046.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7007};
  (data->simulationInfo->integerVarsPre[79] /* line_4043_4046.state DISCRETE */) = (data->modelData->integerVarsData[79] /* line_4043_4046.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7007;
}

/*
equation index: 7008
type: SIMPLE_ASSIGN
line_4043_4046.state = $PRE.line_4043_4046.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7008};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[79]] /* line_4043_4046.state DISCRETE */) = (data->simulationInfo->integerVarsPre[79] /* line_4043_4046.state DISCRETE */);
  threadData->lastEquationSolved = 7008;
}

/*
equation index: 7009
type: SIMPLE_ASSIGN
$PRE.line_4043_4044.state = $START.line_4043_4044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7009};
  (data->simulationInfo->integerVarsPre[78] /* line_4043_4044.state DISCRETE */) = (data->modelData->integerVarsData[78] /* line_4043_4044.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7009;
}

/*
equation index: 7010
type: SIMPLE_ASSIGN
line_4043_4044.state = $PRE.line_4043_4044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7010};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[78]] /* line_4043_4044.state DISCRETE */) = (data->simulationInfo->integerVarsPre[78] /* line_4043_4044.state DISCRETE */);
  threadData->lastEquationSolved = 7010;
}

/*
equation index: 7011
type: SIMPLE_ASSIGN
$PRE.line_4042_4044.state = $START.line_4042_4044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7011};
  (data->simulationInfo->integerVarsPre[77] /* line_4042_4044.state DISCRETE */) = (data->modelData->integerVarsData[77] /* line_4042_4044.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7011;
}

/*
equation index: 7012
type: SIMPLE_ASSIGN
line_4042_4044.state = $PRE.line_4042_4044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7012};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[77]] /* line_4042_4044.state DISCRETE */) = (data->simulationInfo->integerVarsPre[77] /* line_4042_4044.state DISCRETE */);
  threadData->lastEquationSolved = 7012;
}

/*
equation index: 7013
type: SIMPLE_ASSIGN
$PRE.line_4042_4043.state = $START.line_4042_4043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7013};
  (data->simulationInfo->integerVarsPre[76] /* line_4042_4043.state DISCRETE */) = (data->modelData->integerVarsData[76] /* line_4042_4043.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7013;
}

/*
equation index: 7014
type: SIMPLE_ASSIGN
line_4042_4043.state = $PRE.line_4042_4043.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7014};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[76]] /* line_4042_4043.state DISCRETE */) = (data->simulationInfo->integerVarsPre[76] /* line_4042_4043.state DISCRETE */);
  threadData->lastEquationSolved = 7014;
}

/*
equation index: 7015
type: SIMPLE_ASSIGN
$PRE.line_4041_4061.state = $START.line_4041_4061.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7015};
  (data->simulationInfo->integerVarsPre[75] /* line_4041_4061.state DISCRETE */) = (data->modelData->integerVarsData[75] /* line_4041_4061.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7015;
}

/*
equation index: 7016
type: SIMPLE_ASSIGN
line_4041_4061.state = $PRE.line_4041_4061.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7016};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[75]] /* line_4041_4061.state DISCRETE */) = (data->simulationInfo->integerVarsPre[75] /* line_4041_4061.state DISCRETE */);
  threadData->lastEquationSolved = 7016;
}

/*
equation index: 7017
type: SIMPLE_ASSIGN
$PRE.line_4041_4044.state = $START.line_4041_4044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7017};
  (data->simulationInfo->integerVarsPre[74] /* line_4041_4044.state DISCRETE */) = (data->modelData->integerVarsData[74] /* line_4041_4044.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7017;
}

/*
equation index: 7018
type: SIMPLE_ASSIGN
line_4041_4044.state = $PRE.line_4041_4044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7018};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[74]] /* line_4041_4044.state DISCRETE */) = (data->simulationInfo->integerVarsPre[74] /* line_4041_4044.state DISCRETE */);
  threadData->lastEquationSolved = 7018;
}

/*
equation index: 7019
type: SIMPLE_ASSIGN
$PRE.line_4032_4044.state = $START.line_4032_4044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7019};
  (data->simulationInfo->integerVarsPre[73] /* line_4032_4044.state DISCRETE */) = (data->modelData->integerVarsData[73] /* line_4032_4044.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7019;
}

/*
equation index: 7020
type: SIMPLE_ASSIGN
line_4032_4044.state = $PRE.line_4032_4044.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7020};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[73]] /* line_4032_4044.state DISCRETE */) = (data->simulationInfo->integerVarsPre[73] /* line_4032_4044.state DISCRETE */);
  threadData->lastEquationSolved = 7020;
}

/*
equation index: 7021
type: SIMPLE_ASSIGN
$PRE.line_4032_4042.state = $START.line_4032_4042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7021};
  (data->simulationInfo->integerVarsPre[72] /* line_4032_4042.state DISCRETE */) = (data->modelData->integerVarsData[72] /* line_4032_4042.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7021;
}

/*
equation index: 7022
type: SIMPLE_ASSIGN
line_4032_4042.state = $PRE.line_4032_4042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7022};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[72]] /* line_4032_4042.state DISCRETE */) = (data->simulationInfo->integerVarsPre[72] /* line_4032_4042.state DISCRETE */);
  threadData->lastEquationSolved = 7022;
}

/*
equation index: 7023
type: SIMPLE_ASSIGN
$PRE.line_4031_4041b.state = $START.line_4031_4041b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7023};
  (data->simulationInfo->integerVarsPre[71] /* line_4031_4041b.state DISCRETE */) = (data->modelData->integerVarsData[71] /* line_4031_4041b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7023;
}

/*
equation index: 7024
type: SIMPLE_ASSIGN
line_4031_4041b.state = $PRE.line_4031_4041b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7024};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[71]] /* line_4031_4041b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[71] /* line_4031_4041b.state DISCRETE */);
  threadData->lastEquationSolved = 7024;
}

/*
equation index: 7025
type: SIMPLE_ASSIGN
$PRE.line_4031_4041a.state = $START.line_4031_4041a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7025};
  (data->simulationInfo->integerVarsPre[70] /* line_4031_4041a.state DISCRETE */) = (data->modelData->integerVarsData[70] /* line_4031_4041a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7025;
}

/*
equation index: 7026
type: SIMPLE_ASSIGN
line_4031_4041a.state = $PRE.line_4031_4041a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7026};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[70]] /* line_4031_4041a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[70] /* line_4031_4041a.state DISCRETE */);
  threadData->lastEquationSolved = 7026;
}

/*
equation index: 7027
type: SIMPLE_ASSIGN
$PRE.line_4031_4032.state = $START.line_4031_4032.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7027};
  (data->simulationInfo->integerVarsPre[69] /* line_4031_4032.state DISCRETE */) = (data->modelData->integerVarsData[69] /* line_4031_4032.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7027;
}

/*
equation index: 7028
type: SIMPLE_ASSIGN
line_4031_4032.state = $PRE.line_4031_4032.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7028};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[69]] /* line_4031_4032.state DISCRETE */) = (data->simulationInfo->integerVarsPre[69] /* line_4031_4032.state DISCRETE */);
  threadData->lastEquationSolved = 7028;
}

/*
equation index: 7029
type: SIMPLE_ASSIGN
$PRE.line_4022_4031b.state = $START.line_4022_4031b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7029};
  (data->simulationInfo->integerVarsPre[68] /* line_4022_4031b.state DISCRETE */) = (data->modelData->integerVarsData[68] /* line_4022_4031b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7029;
}

/*
equation index: 7030
type: SIMPLE_ASSIGN
line_4022_4031b.state = $PRE.line_4022_4031b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7030};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[68]] /* line_4022_4031b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[68] /* line_4022_4031b.state DISCRETE */);
  threadData->lastEquationSolved = 7030;
}

/*
equation index: 7031
type: SIMPLE_ASSIGN
$PRE.line_4022_4031a.state = $START.line_4022_4031a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7031};
  (data->simulationInfo->integerVarsPre[67] /* line_4022_4031a.state DISCRETE */) = (data->modelData->integerVarsData[67] /* line_4022_4031a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7031;
}

/*
equation index: 7032
type: SIMPLE_ASSIGN
line_4022_4031a.state = $PRE.line_4022_4031a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7032};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[67]] /* line_4022_4031a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[67] /* line_4022_4031a.state DISCRETE */);
  threadData->lastEquationSolved = 7032;
}

/*
equation index: 7033
type: SIMPLE_ASSIGN
$PRE.line_4021_4042.state = $START.line_4021_4042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7033};
  (data->simulationInfo->integerVarsPre[66] /* line_4021_4042.state DISCRETE */) = (data->modelData->integerVarsData[66] /* line_4021_4042.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7033;
}

/*
equation index: 7034
type: SIMPLE_ASSIGN
line_4021_4042.state = $PRE.line_4021_4042.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7034};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[66]] /* line_4021_4042.state DISCRETE */) = (data->simulationInfo->integerVarsPre[66] /* line_4021_4042.state DISCRETE */);
  threadData->lastEquationSolved = 7034;
}

/*
equation index: 7035
type: SIMPLE_ASSIGN
$PRE.line_4021_4032.state = $START.line_4021_4032.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7035};
  (data->simulationInfo->integerVarsPre[65] /* line_4021_4032.state DISCRETE */) = (data->modelData->integerVarsData[65] /* line_4021_4032.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7035;
}

/*
equation index: 7036
type: SIMPLE_ASSIGN
line_4021_4032.state = $PRE.line_4021_4032.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7036};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[65]] /* line_4021_4032.state DISCRETE */) = (data->simulationInfo->integerVarsPre[65] /* line_4021_4032.state DISCRETE */);
  threadData->lastEquationSolved = 7036;
}

/*
equation index: 7037
type: SIMPLE_ASSIGN
$PRE.line_4012_4071.state = $START.line_4012_4071.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7037};
  (data->simulationInfo->integerVarsPre[64] /* line_4012_4071.state DISCRETE */) = (data->modelData->integerVarsData[64] /* line_4012_4071.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7037;
}

/*
equation index: 7038
type: SIMPLE_ASSIGN
line_4012_4071.state = $PRE.line_4012_4071.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7038};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[64]] /* line_4012_4071.state DISCRETE */) = (data->simulationInfo->integerVarsPre[64] /* line_4012_4071.state DISCRETE */);
  threadData->lastEquationSolved = 7038;
}

/*
equation index: 7039
type: SIMPLE_ASSIGN
$PRE.line_4012_4022.state = $START.line_4012_4022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7039};
  (data->simulationInfo->integerVarsPre[63] /* line_4012_4022.state DISCRETE */) = (data->modelData->integerVarsData[63] /* line_4012_4022.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7039;
}

/*
equation index: 7040
type: SIMPLE_ASSIGN
line_4012_4022.state = $PRE.line_4012_4022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7040};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[63]] /* line_4012_4022.state DISCRETE */) = (data->simulationInfo->integerVarsPre[63] /* line_4012_4022.state DISCRETE */);
  threadData->lastEquationSolved = 7040;
}

/*
equation index: 7041
type: SIMPLE_ASSIGN
$PRE.line_4011_4071.state = $START.line_4011_4071.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7041};
  (data->simulationInfo->integerVarsPre[62] /* line_4011_4071.state DISCRETE */) = (data->modelData->integerVarsData[62] /* line_4011_4071.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7041;
}

/*
equation index: 7042
type: SIMPLE_ASSIGN
line_4011_4071.state = $PRE.line_4011_4071.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7042};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[62]] /* line_4011_4071.state DISCRETE */) = (data->simulationInfo->integerVarsPre[62] /* line_4011_4071.state DISCRETE */);
  threadData->lastEquationSolved = 7042;
}

/*
equation index: 7043
type: SIMPLE_ASSIGN
$PRE.line_4011_4022.state = $START.line_4011_4022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7043};
  (data->simulationInfo->integerVarsPre[61] /* line_4011_4022.state DISCRETE */) = (data->modelData->integerVarsData[61] /* line_4011_4022.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7043;
}

/*
equation index: 7044
type: SIMPLE_ASSIGN
line_4011_4022.state = $PRE.line_4011_4022.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7044};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[61]] /* line_4011_4022.state DISCRETE */) = (data->simulationInfo->integerVarsPre[61] /* line_4011_4022.state DISCRETE */);
  threadData->lastEquationSolved = 7044;
}

/*
equation index: 7045
type: SIMPLE_ASSIGN
$PRE.line_4011_4021.state = $START.line_4011_4021.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7045};
  (data->simulationInfo->integerVarsPre[60] /* line_4011_4021.state DISCRETE */) = (data->modelData->integerVarsData[60] /* line_4011_4021.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7045;
}

/*
equation index: 7046
type: SIMPLE_ASSIGN
line_4011_4021.state = $PRE.line_4011_4021.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7046};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[60]] /* line_4011_4021.state DISCRETE */) = (data->simulationInfo->integerVarsPre[60] /* line_4011_4021.state DISCRETE */);
  threadData->lastEquationSolved = 7046;
}

/*
equation index: 7047
type: SIMPLE_ASSIGN
$PRE.line_4011_4012.state = $START.line_4011_4012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7047};
  (data->simulationInfo->integerVarsPre[59] /* line_4011_4012.state DISCRETE */) = (data->modelData->integerVarsData[59] /* line_4011_4012.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7047;
}

/*
equation index: 7048
type: SIMPLE_ASSIGN
line_4011_4012.state = $PRE.line_4011_4012.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7048};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[59]] /* line_4011_4012.state DISCRETE */) = (data->simulationInfo->integerVarsPre[59] /* line_4011_4012.state DISCRETE */);
  threadData->lastEquationSolved = 7048;
}

/*
equation index: 7049
type: SIMPLE_ASSIGN
$PRE.line_2031_2032b.state = $START.line_2031_2032b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7049};
  (data->simulationInfo->integerVarsPre[58] /* line_2031_2032b.state DISCRETE */) = (data->modelData->integerVarsData[58] /* line_2031_2032b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7049;
}

/*
equation index: 7050
type: SIMPLE_ASSIGN
line_2031_2032b.state = $PRE.line_2031_2032b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7050};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[58]] /* line_2031_2032b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[58] /* line_2031_2032b.state DISCRETE */);
  threadData->lastEquationSolved = 7050;
}

/*
equation index: 7051
type: SIMPLE_ASSIGN
$PRE.line_2031_2032a.state = $START.line_2031_2032a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7051};
  (data->simulationInfo->integerVarsPre[57] /* line_2031_2032a.state DISCRETE */) = (data->modelData->integerVarsData[57] /* line_2031_2032a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7051;
}

/*
equation index: 7052
type: SIMPLE_ASSIGN
line_2031_2032a.state = $PRE.line_2031_2032a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7052};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[57]] /* line_2031_2032a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[57] /* line_2031_2032a.state DISCRETE */);
  threadData->lastEquationSolved = 7052;
}

/*
equation index: 7053
type: SIMPLE_ASSIGN
$PRE.line_1043_1044b.state = $START.line_1043_1044b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7053};
  (data->simulationInfo->integerVarsPre[56] /* line_1043_1044b.state DISCRETE */) = (data->modelData->integerVarsData[56] /* line_1043_1044b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7053;
}

/*
equation index: 7054
type: SIMPLE_ASSIGN
line_1043_1044b.state = $PRE.line_1043_1044b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7054};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[56]] /* line_1043_1044b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[56] /* line_1043_1044b.state DISCRETE */);
  threadData->lastEquationSolved = 7054;
}

/*
equation index: 7055
type: SIMPLE_ASSIGN
$PRE.line_1043_1044a.state = $START.line_1043_1044a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7055};
  (data->simulationInfo->integerVarsPre[55] /* line_1043_1044a.state DISCRETE */) = (data->modelData->integerVarsData[55] /* line_1043_1044a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7055;
}

/*
equation index: 7056
type: SIMPLE_ASSIGN
line_1043_1044a.state = $PRE.line_1043_1044a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7056};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[55]] /* line_1043_1044a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[55] /* line_1043_1044a.state DISCRETE */);
  threadData->lastEquationSolved = 7056;
}

/*
equation index: 7057
type: SIMPLE_ASSIGN
$PRE.line_1042_1045.state = $START.line_1042_1045.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7057};
  (data->simulationInfo->integerVarsPre[54] /* line_1042_1045.state DISCRETE */) = (data->modelData->integerVarsData[54] /* line_1042_1045.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7057;
}

/*
equation index: 7058
type: SIMPLE_ASSIGN
line_1042_1045.state = $PRE.line_1042_1045.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7058};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[54]] /* line_1042_1045.state DISCRETE */) = (data->simulationInfo->integerVarsPre[54] /* line_1042_1045.state DISCRETE */);
  threadData->lastEquationSolved = 7058;
}

/*
equation index: 7059
type: SIMPLE_ASSIGN
$PRE.line_1042_1044b.state = $START.line_1042_1044b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7059};
  (data->simulationInfo->integerVarsPre[53] /* line_1042_1044b.state DISCRETE */) = (data->modelData->integerVarsData[53] /* line_1042_1044b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7059;
}

/*
equation index: 7060
type: SIMPLE_ASSIGN
line_1042_1044b.state = $PRE.line_1042_1044b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7060};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[53]] /* line_1042_1044b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[53] /* line_1042_1044b.state DISCRETE */);
  threadData->lastEquationSolved = 7060;
}

/*
equation index: 7061
type: SIMPLE_ASSIGN
$PRE.line_1042_1044a.state = $START.line_1042_1044a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7061};
  (data->simulationInfo->integerVarsPre[52] /* line_1042_1044a.state DISCRETE */) = (data->modelData->integerVarsData[52] /* line_1042_1044a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7061;
}

/*
equation index: 7062
type: SIMPLE_ASSIGN
line_1042_1044a.state = $PRE.line_1042_1044a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7062};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[52]] /* line_1042_1044a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[52] /* line_1042_1044a.state DISCRETE */);
  threadData->lastEquationSolved = 7062;
}

/*
equation index: 7063
type: SIMPLE_ASSIGN
$PRE.line_1041_1045b.state = $START.line_1041_1045b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7063};
  (data->simulationInfo->integerVarsPre[51] /* line_1041_1045b.state DISCRETE */) = (data->modelData->integerVarsData[51] /* line_1041_1045b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7063;
}

/*
equation index: 7064
type: SIMPLE_ASSIGN
line_1041_1045b.state = $PRE.line_1041_1045b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7064};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[51]] /* line_1041_1045b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[51] /* line_1041_1045b.state DISCRETE */);
  threadData->lastEquationSolved = 7064;
}

/*
equation index: 7065
type: SIMPLE_ASSIGN
$PRE.line_1041_1045a.state = $START.line_1041_1045a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7065};
  (data->simulationInfo->integerVarsPre[50] /* line_1041_1045a.state DISCRETE */) = (data->modelData->integerVarsData[50] /* line_1041_1045a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7065;
}

/*
equation index: 7066
type: SIMPLE_ASSIGN
line_1041_1045a.state = $PRE.line_1041_1045a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7066};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[50]] /* line_1041_1045a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[50] /* line_1041_1045a.state DISCRETE */);
  threadData->lastEquationSolved = 7066;
}

/*
equation index: 7067
type: SIMPLE_ASSIGN
$PRE.line_1041_1043b.state = $START.line_1041_1043b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7067};
  (data->simulationInfo->integerVarsPre[49] /* line_1041_1043b.state DISCRETE */) = (data->modelData->integerVarsData[49] /* line_1041_1043b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7067;
}

/*
equation index: 7068
type: SIMPLE_ASSIGN
line_1041_1043b.state = $PRE.line_1041_1043b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7068};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[49]] /* line_1041_1043b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[49] /* line_1041_1043b.state DISCRETE */);
  threadData->lastEquationSolved = 7068;
}

/*
equation index: 7069
type: SIMPLE_ASSIGN
$PRE.line_1041_1043a.state = $START.line_1041_1043a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7069};
  (data->simulationInfo->integerVarsPre[48] /* line_1041_1043a.state DISCRETE */) = (data->modelData->integerVarsData[48] /* line_1041_1043a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7069;
}

/*
equation index: 7070
type: SIMPLE_ASSIGN
line_1041_1043a.state = $PRE.line_1041_1043a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7070};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[48]] /* line_1041_1043a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[48] /* line_1041_1043a.state DISCRETE */);
  threadData->lastEquationSolved = 7070;
}

/*
equation index: 7071
type: SIMPLE_ASSIGN
$PRE.line_1021_1022b.state = $START.line_1021_1022b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7071};
  (data->simulationInfo->integerVarsPre[47] /* line_1021_1022b.state DISCRETE */) = (data->modelData->integerVarsData[47] /* line_1021_1022b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7071;
}

/*
equation index: 7072
type: SIMPLE_ASSIGN
line_1021_1022b.state = $PRE.line_1021_1022b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7072};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[47]] /* line_1021_1022b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[47] /* line_1021_1022b.state DISCRETE */);
  threadData->lastEquationSolved = 7072;
}

/*
equation index: 7073
type: SIMPLE_ASSIGN
$PRE.line_1021_1022a.state = $START.line_1021_1022a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7073};
  (data->simulationInfo->integerVarsPre[46] /* line_1021_1022a.state DISCRETE */) = (data->modelData->integerVarsData[46] /* line_1021_1022a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7073;
}

/*
equation index: 7074
type: SIMPLE_ASSIGN
line_1021_1022a.state = $PRE.line_1021_1022a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7074};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[46]] /* line_1021_1022a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[46] /* line_1021_1022a.state DISCRETE */);
  threadData->lastEquationSolved = 7074;
}

/*
equation index: 7075
type: SIMPLE_ASSIGN
$PRE.line_1013_1014b.state = $START.line_1013_1014b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7075};
  (data->simulationInfo->integerVarsPre[45] /* line_1013_1014b.state DISCRETE */) = (data->modelData->integerVarsData[45] /* line_1013_1014b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7075;
}

/*
equation index: 7076
type: SIMPLE_ASSIGN
line_1013_1014b.state = $PRE.line_1013_1014b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7076};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[45]] /* line_1013_1014b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[45] /* line_1013_1014b.state DISCRETE */);
  threadData->lastEquationSolved = 7076;
}

/*
equation index: 7077
type: SIMPLE_ASSIGN
$PRE.line_1013_1014a.state = $START.line_1013_1014a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7077};
  (data->simulationInfo->integerVarsPre[44] /* line_1013_1014a.state DISCRETE */) = (data->modelData->integerVarsData[44] /* line_1013_1014a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7077;
}

/*
equation index: 7078
type: SIMPLE_ASSIGN
line_1013_1014a.state = $PRE.line_1013_1014a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7078};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[44]] /* line_1013_1014a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[44] /* line_1013_1014a.state DISCRETE */);
  threadData->lastEquationSolved = 7078;
}

/*
equation index: 7079
type: SIMPLE_ASSIGN
$PRE.line_1012_1014b.state = $START.line_1012_1014b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7079};
  (data->simulationInfo->integerVarsPre[43] /* line_1012_1014b.state DISCRETE */) = (data->modelData->integerVarsData[43] /* line_1012_1014b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7079;
}

/*
equation index: 7080
type: SIMPLE_ASSIGN
line_1012_1014b.state = $PRE.line_1012_1014b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7080};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[43]] /* line_1012_1014b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[43] /* line_1012_1014b.state DISCRETE */);
  threadData->lastEquationSolved = 7080;
}

/*
equation index: 7081
type: SIMPLE_ASSIGN
$PRE.line_1012_1014a.state = $START.line_1012_1014a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7081};
  (data->simulationInfo->integerVarsPre[42] /* line_1012_1014a.state DISCRETE */) = (data->modelData->integerVarsData[42] /* line_1012_1014a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7081;
}

/*
equation index: 7082
type: SIMPLE_ASSIGN
line_1012_1014a.state = $PRE.line_1012_1014a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7082};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[42]] /* line_1012_1014a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[42] /* line_1012_1014a.state DISCRETE */);
  threadData->lastEquationSolved = 7082;
}

/*
equation index: 7083
type: SIMPLE_ASSIGN
$PRE.line_1011_1013b.state = $START.line_1011_1013b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7083};
  (data->simulationInfo->integerVarsPre[41] /* line_1011_1013b.state DISCRETE */) = (data->modelData->integerVarsData[41] /* line_1011_1013b.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7083;
}

/*
equation index: 7084
type: SIMPLE_ASSIGN
line_1011_1013b.state = $PRE.line_1011_1013b.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7084};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[41]] /* line_1011_1013b.state DISCRETE */) = (data->simulationInfo->integerVarsPre[41] /* line_1011_1013b.state DISCRETE */);
  threadData->lastEquationSolved = 7084;
}

/*
equation index: 7085
type: SIMPLE_ASSIGN
$PRE.line_1011_1013a.state = $START.line_1011_1013a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7085};
  (data->simulationInfo->integerVarsPre[40] /* line_1011_1013a.state DISCRETE */) = (data->modelData->integerVarsData[40] /* line_1011_1013a.state DISCRETE */).attribute .start;
  threadData->lastEquationSolved = 7085;
}

/*
equation index: 7086
type: SIMPLE_ASSIGN
line_1011_1013a.state = $PRE.line_1011_1013a.state
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7086};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[40]] /* line_1011_1013a.state DISCRETE */) = (data->simulationInfo->integerVarsPre[40] /* line_1011_1013a.state DISCRETE */);
  threadData->lastEquationSolved = 7086;
}

/*
equation index: 7146
type: ALGORITHM

  assert(g01.SNom <> g01.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7146};
  static const MMC_DEFSTRINGLIT(tmp2230,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2231 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* g01.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g01.SNom <> g01.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2230)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2230)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7146;
}

/*
equation index: 7145
type: ALGORITHM

  assert(g02.SNom <> g02.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7145};
  static const MMC_DEFSTRINGLIT(tmp2232,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2233 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* g02.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g02.SNom <> g02.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2232)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2232)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7145;
}

/*
equation index: 7144
type: ALGORITHM

  assert(g03.SNom <> g03.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7144};
  static const MMC_DEFSTRINGLIT(tmp2234,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2235 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[461]] /* g03.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g03.SNom <> g03.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2234)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2234)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7144;
}

/*
equation index: 7143
type: ALGORITHM

  assert(g04.SNom <> g04.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7143};
  static const MMC_DEFSTRINGLIT(tmp2236,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2237 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* g04.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g04.SNom <> g04.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2236)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2236)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7143;
}

/*
equation index: 7142
type: ALGORITHM

  assert(g05.SNom <> g05.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7142};
  static const MMC_DEFSTRINGLIT(tmp2238,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2239 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* g05.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g05.SNom <> g05.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2238)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2238)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7142;
}

/*
equation index: 7141
type: ALGORITHM

  assert(g06.SNom <> g06.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7141};
  static const MMC_DEFSTRINGLIT(tmp2240,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2241 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* g06.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g06.SNom <> g06.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2240)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2240)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7141;
}

/*
equation index: 7140
type: ALGORITHM

  assert(g07.SNom <> g07.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7140};
  static const MMC_DEFSTRINGLIT(tmp2242,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2243 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[867]] /* g07.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g07.SNom <> g07.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2242)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2242)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7140;
}

/*
equation index: 7139
type: ALGORITHM

  assert(g08.SNom <> g08.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7139};
  static const MMC_DEFSTRINGLIT(tmp2244,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2245 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* g08.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g08.SNom <> g08.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2244)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2244)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7139;
}

/*
equation index: 7138
type: ALGORITHM

  assert(g09.SNom <> g09.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7138};
  static const MMC_DEFSTRINGLIT(tmp2246,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2247 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* g09.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g09.SNom <> g09.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2246)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2246)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7138;
}

/*
equation index: 7137
type: ALGORITHM

  assert(g10.SNom <> g10.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7137};
  static const MMC_DEFSTRINGLIT(tmp2248,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2249 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* g10.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g10.SNom <> g10.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2248)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2248)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7137;
}

/*
equation index: 7136
type: ALGORITHM

  assert(g11.SNom <> g11.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7136};
  static const MMC_DEFSTRINGLIT(tmp2250,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2251 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* g11.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g11.SNom <> g11.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2250)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2250)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7136;
}

/*
equation index: 7135
type: ALGORITHM

  assert(g12.SNom <> g12.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7135};
  static const MMC_DEFSTRINGLIT(tmp2252,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2253 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* g12.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g12.SNom <> g12.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2252)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2252)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7135;
}

/*
equation index: 7134
type: ALGORITHM

  assert(g13.SNom <> g13.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7134};
  static const MMC_DEFSTRINGLIT(tmp2254,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2255 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1475]] /* g13.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g13.SNom <> g13.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2254)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2254)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7134;
}

/*
equation index: 7133
type: ALGORITHM

  assert(g14.SNom <> g14.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7133};
  static const MMC_DEFSTRINGLIT(tmp2256,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2257 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1576]] /* g14.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g14.SNom <> g14.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2256)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2256)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7133;
}

/*
equation index: 7132
type: ALGORITHM

  assert(g15.SNom <> g15.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7132};
  static const MMC_DEFSTRINGLIT(tmp2258,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2259 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* g15.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g15.SNom <> g15.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2258)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2258)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7132;
}

/*
equation index: 7131
type: ALGORITHM

  assert(g16.SNom <> g16.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7131};
  static const MMC_DEFSTRINGLIT(tmp2260,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2261 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* g16.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g16.SNom <> g16.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2260)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2260)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7131;
}

/*
equation index: 7130
type: ALGORITHM

  assert(g17.SNom <> g17.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7130};
  static const MMC_DEFSTRINGLIT(tmp2262,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2263 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1885]] /* g17.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g17.SNom <> g17.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2262)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2262)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7130;
}

/*
equation index: 7129
type: ALGORITHM

  assert(g18.SNom <> g18.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7129};
  static const MMC_DEFSTRINGLIT(tmp2264,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2265 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1988]] /* g18.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g18.SNom <> g18.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2264)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2264)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7129;
}

/*
equation index: 7128
type: ALGORITHM

  assert(g19.SNom <> g19.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7128};
  static const MMC_DEFSTRINGLIT(tmp2266,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2267 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2091]] /* g19.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g19.SNom <> g19.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2266)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2266)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7128;
}

/*
equation index: 7127
type: ALGORITHM

  assert(g20.SNom <> g20.PNomAlt, "The alternator nominal active power should be different from the nominal apparent power");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7127};
  static const MMC_DEFSTRINGLIT(tmp2268,87,"The alternator nominal active power should be different from the nominal apparent power");
  static int tmp2269 = 0;
  {
    if(!((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */) != (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2192]] /* g20.PNomAlt PARAM */)))
    {
      {
        const char* assert_cond = "(g20.SNom <> g20.PNomAlt)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2268)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Machines/OmegaRef/BaseClasses/BaseGeneratorSynchronous.mo",133,3,133,117,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2268)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7127;
}

/*
equation index: 7126
type: ALGORITHM

  assert(vrNordic_g01.limiter.uMax >= vrNordic_g01.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g01.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g01.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7126};
  modelica_boolean tmp2270;
  static const MMC_DEFSTRINGLIT(tmp2271,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2272;
  modelica_metatype tmpMeta2273;
  static const MMC_DEFSTRINGLIT(tmp2274,11,") < uMin (=");
  modelica_metatype tmpMeta2275;
  modelica_string tmp2276;
  modelica_metatype tmpMeta2277;
  modelica_metatype tmpMeta2278;
  static int tmp2279 = 0;
  {
    tmp2270 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4185]] /* vrNordic_g01.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4186]] /* vrNordic_g01.limiter.uMin PARAM */));
    if(!tmp2270)
    {
      tmp2272 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4185]] /* vrNordic_g01.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2273 = stringAppend(MMC_REFSTRINGLIT(tmp2271),tmp2272);
      tmpMeta2275 = stringAppend(tmpMeta2273,MMC_REFSTRINGLIT(tmp2274));
      tmp2276 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4186]] /* vrNordic_g01.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2277 = stringAppend(tmpMeta2275,tmp2276);
      tmpMeta2278 = stringAppend(tmpMeta2277,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g01.limiter.uMax >= vrNordic_g01.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2278));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2278));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7126;
}

/*
equation index: 7125
type: ALGORITHM

  assert(goverNordic_g01.limRateLimFirstOrder.limiter.uMax >= goverNordic_g01.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g01.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g01.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7125};
  modelica_boolean tmp2280;
  static const MMC_DEFSTRINGLIT(tmp2281,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2282;
  modelica_metatype tmpMeta2283;
  static const MMC_DEFSTRINGLIT(tmp2284,11,") < uMin (=");
  modelica_metatype tmpMeta2285;
  modelica_string tmp2286;
  modelica_metatype tmpMeta2287;
  modelica_metatype tmpMeta2288;
  static int tmp2289 = 0;
  {
    tmp2280 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2280)
    {
      tmp2282 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2283 = stringAppend(MMC_REFSTRINGLIT(tmp2281),tmp2282);
      tmpMeta2285 = stringAppend(tmpMeta2283,MMC_REFSTRINGLIT(tmp2284));
      tmp2286 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* goverNordic_g01.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2287 = stringAppend(tmpMeta2285,tmp2286);
      tmpMeta2288 = stringAppend(tmpMeta2287,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g01.limRateLimFirstOrder.limiter.uMax >= goverNordic_g01.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2288));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2288));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7125;
}

/*
equation index: 7124
type: ALGORITHM

  assert(vrNordic_g02.limiter.uMax >= vrNordic_g02.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g02.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g02.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7124};
  modelica_boolean tmp2290;
  static const MMC_DEFSTRINGLIT(tmp2291,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2292;
  modelica_metatype tmpMeta2293;
  static const MMC_DEFSTRINGLIT(tmp2294,11,") < uMin (=");
  modelica_metatype tmpMeta2295;
  modelica_string tmp2296;
  modelica_metatype tmpMeta2297;
  modelica_metatype tmpMeta2298;
  static int tmp2299 = 0;
  {
    tmp2290 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4264]] /* vrNordic_g02.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4265]] /* vrNordic_g02.limiter.uMin PARAM */));
    if(!tmp2290)
    {
      tmp2292 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4264]] /* vrNordic_g02.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2293 = stringAppend(MMC_REFSTRINGLIT(tmp2291),tmp2292);
      tmpMeta2295 = stringAppend(tmpMeta2293,MMC_REFSTRINGLIT(tmp2294));
      tmp2296 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4265]] /* vrNordic_g02.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2297 = stringAppend(tmpMeta2295,tmp2296);
      tmpMeta2298 = stringAppend(tmpMeta2297,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g02.limiter.uMax >= vrNordic_g02.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2298));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2298));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7124;
}

/*
equation index: 7123
type: ALGORITHM

  assert(goverNordic_g02.limRateLimFirstOrder.limiter.uMax >= goverNordic_g02.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g02.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g02.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7123};
  modelica_boolean tmp2300;
  static const MMC_DEFSTRINGLIT(tmp2301,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2302;
  modelica_metatype tmpMeta2303;
  static const MMC_DEFSTRINGLIT(tmp2304,11,") < uMin (=");
  modelica_metatype tmpMeta2305;
  modelica_string tmp2306;
  modelica_metatype tmpMeta2307;
  modelica_metatype tmpMeta2308;
  static int tmp2309 = 0;
  {
    tmp2300 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2319]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2320]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2300)
    {
      tmp2302 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2319]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2303 = stringAppend(MMC_REFSTRINGLIT(tmp2301),tmp2302);
      tmpMeta2305 = stringAppend(tmpMeta2303,MMC_REFSTRINGLIT(tmp2304));
      tmp2306 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2320]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2307 = stringAppend(tmpMeta2305,tmp2306);
      tmpMeta2308 = stringAppend(tmpMeta2307,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g02.limRateLimFirstOrder.limiter.uMax >= goverNordic_g02.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2308));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2308));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7123;
}

/*
equation index: 7122
type: ALGORITHM

  assert(vrNordic_g03.limiter.uMax >= vrNordic_g03.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g03.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g03.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7122};
  modelica_boolean tmp2310;
  static const MMC_DEFSTRINGLIT(tmp2311,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2312;
  modelica_metatype tmpMeta2313;
  static const MMC_DEFSTRINGLIT(tmp2314,11,") < uMin (=");
  modelica_metatype tmpMeta2315;
  modelica_string tmp2316;
  modelica_metatype tmpMeta2317;
  modelica_metatype tmpMeta2318;
  static int tmp2319 = 0;
  {
    tmp2310 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4343]] /* vrNordic_g03.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4344]] /* vrNordic_g03.limiter.uMin PARAM */));
    if(!tmp2310)
    {
      tmp2312 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4343]] /* vrNordic_g03.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2313 = stringAppend(MMC_REFSTRINGLIT(tmp2311),tmp2312);
      tmpMeta2315 = stringAppend(tmpMeta2313,MMC_REFSTRINGLIT(tmp2314));
      tmp2316 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4344]] /* vrNordic_g03.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2317 = stringAppend(tmpMeta2315,tmp2316);
      tmpMeta2318 = stringAppend(tmpMeta2317,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g03.limiter.uMax >= vrNordic_g03.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2318));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2318));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7122;
}

/*
equation index: 7121
type: ALGORITHM

  assert(goverNordic_g03.limRateLimFirstOrder.limiter.uMax >= goverNordic_g03.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g03.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g03.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7121};
  modelica_boolean tmp2320;
  static const MMC_DEFSTRINGLIT(tmp2321,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2322;
  modelica_metatype tmpMeta2323;
  static const MMC_DEFSTRINGLIT(tmp2324,11,") < uMin (=");
  modelica_metatype tmpMeta2325;
  modelica_string tmp2326;
  modelica_metatype tmpMeta2327;
  modelica_metatype tmpMeta2328;
  static int tmp2329 = 0;
  {
    tmp2320 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2320)
    {
      tmp2322 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2323 = stringAppend(MMC_REFSTRINGLIT(tmp2321),tmp2322);
      tmpMeta2325 = stringAppend(tmpMeta2323,MMC_REFSTRINGLIT(tmp2324));
      tmp2326 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2327 = stringAppend(tmpMeta2325,tmp2326);
      tmpMeta2328 = stringAppend(tmpMeta2327,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g03.limRateLimFirstOrder.limiter.uMax >= goverNordic_g03.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2328));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2328));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7121;
}

/*
equation index: 7120
type: ALGORITHM

  assert(vrNordic_g04.limiter.uMax >= vrNordic_g04.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g04.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g04.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7120};
  modelica_boolean tmp2330;
  static const MMC_DEFSTRINGLIT(tmp2331,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2332;
  modelica_metatype tmpMeta2333;
  static const MMC_DEFSTRINGLIT(tmp2334,11,") < uMin (=");
  modelica_metatype tmpMeta2335;
  modelica_string tmp2336;
  modelica_metatype tmpMeta2337;
  modelica_metatype tmpMeta2338;
  static int tmp2339 = 0;
  {
    tmp2330 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4422]] /* vrNordic_g04.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4423]] /* vrNordic_g04.limiter.uMin PARAM */));
    if(!tmp2330)
    {
      tmp2332 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4422]] /* vrNordic_g04.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2333 = stringAppend(MMC_REFSTRINGLIT(tmp2331),tmp2332);
      tmpMeta2335 = stringAppend(tmpMeta2333,MMC_REFSTRINGLIT(tmp2334));
      tmp2336 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4423]] /* vrNordic_g04.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2337 = stringAppend(tmpMeta2335,tmp2336);
      tmpMeta2338 = stringAppend(tmpMeta2337,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g04.limiter.uMax >= vrNordic_g04.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2338));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2338));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7120;
}

/*
equation index: 7119
type: ALGORITHM

  assert(goverNordic_g04.limRateLimFirstOrder.limiter.uMax >= goverNordic_g04.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g04.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g04.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7119};
  modelica_boolean tmp2340;
  static const MMC_DEFSTRINGLIT(tmp2341,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2342;
  modelica_metatype tmpMeta2343;
  static const MMC_DEFSTRINGLIT(tmp2344,11,") < uMin (=");
  modelica_metatype tmpMeta2345;
  modelica_string tmp2346;
  modelica_metatype tmpMeta2347;
  modelica_metatype tmpMeta2348;
  static int tmp2349 = 0;
  {
    tmp2340 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2340)
    {
      tmp2342 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2343 = stringAppend(MMC_REFSTRINGLIT(tmp2341),tmp2342);
      tmpMeta2345 = stringAppend(tmpMeta2343,MMC_REFSTRINGLIT(tmp2344));
      tmp2346 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2347 = stringAppend(tmpMeta2345,tmp2346);
      tmpMeta2348 = stringAppend(tmpMeta2347,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g04.limRateLimFirstOrder.limiter.uMax >= goverNordic_g04.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2348));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2348));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7119;
}

/*
equation index: 7118
type: ALGORITHM

  assert(vrNordic_g05.limiter.uMax >= vrNordic_g05.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g05.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g05.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7118};
  modelica_boolean tmp2350;
  static const MMC_DEFSTRINGLIT(tmp2351,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2352;
  modelica_metatype tmpMeta2353;
  static const MMC_DEFSTRINGLIT(tmp2354,11,") < uMin (=");
  modelica_metatype tmpMeta2355;
  modelica_string tmp2356;
  modelica_metatype tmpMeta2357;
  modelica_metatype tmpMeta2358;
  static int tmp2359 = 0;
  {
    tmp2350 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4501]] /* vrNordic_g05.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4502]] /* vrNordic_g05.limiter.uMin PARAM */));
    if(!tmp2350)
    {
      tmp2352 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4501]] /* vrNordic_g05.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2353 = stringAppend(MMC_REFSTRINGLIT(tmp2351),tmp2352);
      tmpMeta2355 = stringAppend(tmpMeta2353,MMC_REFSTRINGLIT(tmp2354));
      tmp2356 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4502]] /* vrNordic_g05.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2357 = stringAppend(tmpMeta2355,tmp2356);
      tmpMeta2358 = stringAppend(tmpMeta2357,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g05.limiter.uMax >= vrNordic_g05.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2358));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2358));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7118;
}

/*
equation index: 7117
type: ALGORITHM

  assert(goverNordic_g05.limRateLimFirstOrder.limiter.uMax >= goverNordic_g05.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g05.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g05.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7117};
  modelica_boolean tmp2360;
  static const MMC_DEFSTRINGLIT(tmp2361,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2362;
  modelica_metatype tmpMeta2363;
  static const MMC_DEFSTRINGLIT(tmp2364,11,") < uMin (=");
  modelica_metatype tmpMeta2365;
  modelica_string tmp2366;
  modelica_metatype tmpMeta2367;
  modelica_metatype tmpMeta2368;
  static int tmp2369 = 0;
  {
    tmp2360 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2360)
    {
      tmp2362 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2363 = stringAppend(MMC_REFSTRINGLIT(tmp2361),tmp2362);
      tmpMeta2365 = stringAppend(tmpMeta2363,MMC_REFSTRINGLIT(tmp2364));
      tmp2366 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2367 = stringAppend(tmpMeta2365,tmp2366);
      tmpMeta2368 = stringAppend(tmpMeta2367,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g05.limRateLimFirstOrder.limiter.uMax >= goverNordic_g05.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2368));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2368));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7117;
}

/*
equation index: 7116
type: ALGORITHM

  assert(vrNordic_g06.limiter.uMax >= vrNordic_g06.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g06.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g06.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7116};
  modelica_boolean tmp2370;
  static const MMC_DEFSTRINGLIT(tmp2371,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2372;
  modelica_metatype tmpMeta2373;
  static const MMC_DEFSTRINGLIT(tmp2374,11,") < uMin (=");
  modelica_metatype tmpMeta2375;
  modelica_string tmp2376;
  modelica_metatype tmpMeta2377;
  modelica_metatype tmpMeta2378;
  static int tmp2379 = 0;
  {
    tmp2370 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4580]] /* vrNordic_g06.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4581]] /* vrNordic_g06.limiter.uMin PARAM */));
    if(!tmp2370)
    {
      tmp2372 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4580]] /* vrNordic_g06.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2373 = stringAppend(MMC_REFSTRINGLIT(tmp2371),tmp2372);
      tmpMeta2375 = stringAppend(tmpMeta2373,MMC_REFSTRINGLIT(tmp2374));
      tmp2376 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4581]] /* vrNordic_g06.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2377 = stringAppend(tmpMeta2375,tmp2376);
      tmpMeta2378 = stringAppend(tmpMeta2377,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g06.limiter.uMax >= vrNordic_g06.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2378));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2378));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7116;
}

/*
equation index: 7115
type: ALGORITHM

  assert(goverNordic_g06.limRateLimFirstOrder.limiter.uMax >= goverNordic_g06.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g06.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g06.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7115};
  modelica_boolean tmp2380;
  static const MMC_DEFSTRINGLIT(tmp2381,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2382;
  modelica_metatype tmpMeta2383;
  static const MMC_DEFSTRINGLIT(tmp2384,11,") < uMin (=");
  modelica_metatype tmpMeta2385;
  modelica_string tmp2386;
  modelica_metatype tmpMeta2387;
  modelica_metatype tmpMeta2388;
  static int tmp2389 = 0;
  {
    tmp2380 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2380)
    {
      tmp2382 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2383 = stringAppend(MMC_REFSTRINGLIT(tmp2381),tmp2382);
      tmpMeta2385 = stringAppend(tmpMeta2383,MMC_REFSTRINGLIT(tmp2384));
      tmp2386 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2387 = stringAppend(tmpMeta2385,tmp2386);
      tmpMeta2388 = stringAppend(tmpMeta2387,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g06.limRateLimFirstOrder.limiter.uMax >= goverNordic_g06.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2388));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2388));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7115;
}

/*
equation index: 7114
type: ALGORITHM

  assert(vrNordic_g07.limiter.uMax >= vrNordic_g07.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g07.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g07.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7114};
  modelica_boolean tmp2390;
  static const MMC_DEFSTRINGLIT(tmp2391,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2392;
  modelica_metatype tmpMeta2393;
  static const MMC_DEFSTRINGLIT(tmp2394,11,") < uMin (=");
  modelica_metatype tmpMeta2395;
  modelica_string tmp2396;
  modelica_metatype tmpMeta2397;
  modelica_metatype tmpMeta2398;
  static int tmp2399 = 0;
  {
    tmp2390 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4659]] /* vrNordic_g07.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4660]] /* vrNordic_g07.limiter.uMin PARAM */));
    if(!tmp2390)
    {
      tmp2392 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4659]] /* vrNordic_g07.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2393 = stringAppend(MMC_REFSTRINGLIT(tmp2391),tmp2392);
      tmpMeta2395 = stringAppend(tmpMeta2393,MMC_REFSTRINGLIT(tmp2394));
      tmp2396 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4660]] /* vrNordic_g07.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2397 = stringAppend(tmpMeta2395,tmp2396);
      tmpMeta2398 = stringAppend(tmpMeta2397,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g07.limiter.uMax >= vrNordic_g07.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2398));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2398));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7114;
}

/*
equation index: 7113
type: ALGORITHM

  assert(goverNordic_g07.limRateLimFirstOrder.limiter.uMax >= goverNordic_g07.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g07.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g07.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7113};
  modelica_boolean tmp2400;
  static const MMC_DEFSTRINGLIT(tmp2401,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2402;
  modelica_metatype tmpMeta2403;
  static const MMC_DEFSTRINGLIT(tmp2404,11,") < uMin (=");
  modelica_metatype tmpMeta2405;
  modelica_string tmp2406;
  modelica_metatype tmpMeta2407;
  modelica_metatype tmpMeta2408;
  static int tmp2409 = 0;
  {
    tmp2400 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2400)
    {
      tmp2402 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2403 = stringAppend(MMC_REFSTRINGLIT(tmp2401),tmp2402);
      tmpMeta2405 = stringAppend(tmpMeta2403,MMC_REFSTRINGLIT(tmp2404));
      tmp2406 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2407 = stringAppend(tmpMeta2405,tmp2406);
      tmpMeta2408 = stringAppend(tmpMeta2407,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g07.limRateLimFirstOrder.limiter.uMax >= goverNordic_g07.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2408));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2408));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7113;
}

/*
equation index: 7112
type: ALGORITHM

  assert(vrNordic_g08.limiter.uMax >= vrNordic_g08.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g08.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g08.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7112};
  modelica_boolean tmp2410;
  static const MMC_DEFSTRINGLIT(tmp2411,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2412;
  modelica_metatype tmpMeta2413;
  static const MMC_DEFSTRINGLIT(tmp2414,11,") < uMin (=");
  modelica_metatype tmpMeta2415;
  modelica_string tmp2416;
  modelica_metatype tmpMeta2417;
  modelica_metatype tmpMeta2418;
  static int tmp2419 = 0;
  {
    tmp2410 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4738]] /* vrNordic_g08.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4739]] /* vrNordic_g08.limiter.uMin PARAM */));
    if(!tmp2410)
    {
      tmp2412 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4738]] /* vrNordic_g08.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2413 = stringAppend(MMC_REFSTRINGLIT(tmp2411),tmp2412);
      tmpMeta2415 = stringAppend(tmpMeta2413,MMC_REFSTRINGLIT(tmp2414));
      tmp2416 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4739]] /* vrNordic_g08.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2417 = stringAppend(tmpMeta2415,tmp2416);
      tmpMeta2418 = stringAppend(tmpMeta2417,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g08.limiter.uMax >= vrNordic_g08.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2418));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2418));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7112;
}

/*
equation index: 7111
type: ALGORITHM

  assert(goverNordic_g08.limRateLimFirstOrder.limiter.uMax >= goverNordic_g08.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g08.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g08.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7111};
  modelica_boolean tmp2420;
  static const MMC_DEFSTRINGLIT(tmp2421,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2422;
  modelica_metatype tmpMeta2423;
  static const MMC_DEFSTRINGLIT(tmp2424,11,") < uMin (=");
  modelica_metatype tmpMeta2425;
  modelica_string tmp2426;
  modelica_metatype tmpMeta2427;
  modelica_metatype tmpMeta2428;
  static int tmp2429 = 0;
  {
    tmp2420 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2536]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2420)
    {
      tmp2422 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2423 = stringAppend(MMC_REFSTRINGLIT(tmp2421),tmp2422);
      tmpMeta2425 = stringAppend(tmpMeta2423,MMC_REFSTRINGLIT(tmp2424));
      tmp2426 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2536]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2427 = stringAppend(tmpMeta2425,tmp2426);
      tmpMeta2428 = stringAppend(tmpMeta2427,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g08.limRateLimFirstOrder.limiter.uMax >= goverNordic_g08.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2428));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2428));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7111;
}

/*
equation index: 7110
type: ALGORITHM

  assert(vrNordic_g09.limiter.uMax >= vrNordic_g09.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g09.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g09.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7110};
  modelica_boolean tmp2430;
  static const MMC_DEFSTRINGLIT(tmp2431,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2432;
  modelica_metatype tmpMeta2433;
  static const MMC_DEFSTRINGLIT(tmp2434,11,") < uMin (=");
  modelica_metatype tmpMeta2435;
  modelica_string tmp2436;
  modelica_metatype tmpMeta2437;
  modelica_metatype tmpMeta2438;
  static int tmp2439 = 0;
  {
    tmp2430 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4817]] /* vrNordic_g09.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4818]] /* vrNordic_g09.limiter.uMin PARAM */));
    if(!tmp2430)
    {
      tmp2432 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4817]] /* vrNordic_g09.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2433 = stringAppend(MMC_REFSTRINGLIT(tmp2431),tmp2432);
      tmpMeta2435 = stringAppend(tmpMeta2433,MMC_REFSTRINGLIT(tmp2434));
      tmp2436 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4818]] /* vrNordic_g09.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2437 = stringAppend(tmpMeta2435,tmp2436);
      tmpMeta2438 = stringAppend(tmpMeta2437,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g09.limiter.uMax >= vrNordic_g09.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2438));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2438));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7110;
}

/*
equation index: 7109
type: ALGORITHM

  assert(goverNordic_g09.limRateLimFirstOrder.limiter.uMax >= goverNordic_g09.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g09.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g09.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7109};
  modelica_boolean tmp2440;
  static const MMC_DEFSTRINGLIT(tmp2441,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2442;
  modelica_metatype tmpMeta2443;
  static const MMC_DEFSTRINGLIT(tmp2444,11,") < uMin (=");
  modelica_metatype tmpMeta2445;
  modelica_string tmp2446;
  modelica_metatype tmpMeta2447;
  modelica_metatype tmpMeta2448;
  static int tmp2449 = 0;
  {
    tmp2440 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2440)
    {
      tmp2442 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2443 = stringAppend(MMC_REFSTRINGLIT(tmp2441),tmp2442);
      tmpMeta2445 = stringAppend(tmpMeta2443,MMC_REFSTRINGLIT(tmp2444));
      tmp2446 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2447 = stringAppend(tmpMeta2445,tmp2446);
      tmpMeta2448 = stringAppend(tmpMeta2447,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g09.limRateLimFirstOrder.limiter.uMax >= goverNordic_g09.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2448));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2448));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7109;
}

/*
equation index: 7108
type: ALGORITHM

  assert(vrNordic_g10.limiter.uMax >= vrNordic_g10.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g10.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g10.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7108};
  modelica_boolean tmp2450;
  static const MMC_DEFSTRINGLIT(tmp2451,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2452;
  modelica_metatype tmpMeta2453;
  static const MMC_DEFSTRINGLIT(tmp2454,11,") < uMin (=");
  modelica_metatype tmpMeta2455;
  modelica_string tmp2456;
  modelica_metatype tmpMeta2457;
  modelica_metatype tmpMeta2458;
  static int tmp2459 = 0;
  {
    tmp2450 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4896]] /* vrNordic_g10.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4897]] /* vrNordic_g10.limiter.uMin PARAM */));
    if(!tmp2450)
    {
      tmp2452 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4896]] /* vrNordic_g10.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2453 = stringAppend(MMC_REFSTRINGLIT(tmp2451),tmp2452);
      tmpMeta2455 = stringAppend(tmpMeta2453,MMC_REFSTRINGLIT(tmp2454));
      tmp2456 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4897]] /* vrNordic_g10.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2457 = stringAppend(tmpMeta2455,tmp2456);
      tmpMeta2458 = stringAppend(tmpMeta2457,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g10.limiter.uMax >= vrNordic_g10.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2458));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2458));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7108;
}

/*
equation index: 7107
type: ALGORITHM

  assert(goverNordic_g10.limRateLimFirstOrder.limiter.uMax >= goverNordic_g10.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g10.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g10.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7107};
  modelica_boolean tmp2460;
  static const MMC_DEFSTRINGLIT(tmp2461,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2462;
  modelica_metatype tmpMeta2463;
  static const MMC_DEFSTRINGLIT(tmp2464,11,") < uMin (=");
  modelica_metatype tmpMeta2465;
  modelica_string tmp2466;
  modelica_metatype tmpMeta2467;
  modelica_metatype tmpMeta2468;
  static int tmp2469 = 0;
  {
    tmp2460 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2607]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2608]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2460)
    {
      tmp2462 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2607]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2463 = stringAppend(MMC_REFSTRINGLIT(tmp2461),tmp2462);
      tmpMeta2465 = stringAppend(tmpMeta2463,MMC_REFSTRINGLIT(tmp2464));
      tmp2466 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2608]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2467 = stringAppend(tmpMeta2465,tmp2466);
      tmpMeta2468 = stringAppend(tmpMeta2467,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g10.limRateLimFirstOrder.limiter.uMax >= goverNordic_g10.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2468));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2468));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7107;
}

/*
equation index: 7106
type: ALGORITHM

  assert(vrNordic_g11.limiter.uMax >= vrNordic_g11.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g11.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g11.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7106};
  modelica_boolean tmp2470;
  static const MMC_DEFSTRINGLIT(tmp2471,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2472;
  modelica_metatype tmpMeta2473;
  static const MMC_DEFSTRINGLIT(tmp2474,11,") < uMin (=");
  modelica_metatype tmpMeta2475;
  modelica_string tmp2476;
  modelica_metatype tmpMeta2477;
  modelica_metatype tmpMeta2478;
  static int tmp2479 = 0;
  {
    tmp2470 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4975]] /* vrNordic_g11.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4976]] /* vrNordic_g11.limiter.uMin PARAM */));
    if(!tmp2470)
    {
      tmp2472 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4975]] /* vrNordic_g11.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2473 = stringAppend(MMC_REFSTRINGLIT(tmp2471),tmp2472);
      tmpMeta2475 = stringAppend(tmpMeta2473,MMC_REFSTRINGLIT(tmp2474));
      tmp2476 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4976]] /* vrNordic_g11.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2477 = stringAppend(tmpMeta2475,tmp2476);
      tmpMeta2478 = stringAppend(tmpMeta2477,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g11.limiter.uMax >= vrNordic_g11.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2478));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2478));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7106;
}

/*
equation index: 7105
type: ALGORITHM

  assert(goverNordic_g11.limRateLimFirstOrder.limiter.uMax >= goverNordic_g11.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g11.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g11.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7105};
  modelica_boolean tmp2480;
  static const MMC_DEFSTRINGLIT(tmp2481,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2482;
  modelica_metatype tmpMeta2483;
  static const MMC_DEFSTRINGLIT(tmp2484,11,") < uMin (=");
  modelica_metatype tmpMeta2485;
  modelica_string tmp2486;
  modelica_metatype tmpMeta2487;
  modelica_metatype tmpMeta2488;
  static int tmp2489 = 0;
  {
    tmp2480 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2480)
    {
      tmp2482 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2483 = stringAppend(MMC_REFSTRINGLIT(tmp2481),tmp2482);
      tmpMeta2485 = stringAppend(tmpMeta2483,MMC_REFSTRINGLIT(tmp2484));
      tmp2486 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2487 = stringAppend(tmpMeta2485,tmp2486);
      tmpMeta2488 = stringAppend(tmpMeta2487,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g11.limRateLimFirstOrder.limiter.uMax >= goverNordic_g11.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2488));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2488));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7105;
}

/*
equation index: 7104
type: ALGORITHM

  assert(vrNordic_g12.limiter.uMax >= vrNordic_g12.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g12.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g12.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7104};
  modelica_boolean tmp2490;
  static const MMC_DEFSTRINGLIT(tmp2491,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2492;
  modelica_metatype tmpMeta2493;
  static const MMC_DEFSTRINGLIT(tmp2494,11,") < uMin (=");
  modelica_metatype tmpMeta2495;
  modelica_string tmp2496;
  modelica_metatype tmpMeta2497;
  modelica_metatype tmpMeta2498;
  static int tmp2499 = 0;
  {
    tmp2490 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5054]] /* vrNordic_g12.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5055]] /* vrNordic_g12.limiter.uMin PARAM */));
    if(!tmp2490)
    {
      tmp2492 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5054]] /* vrNordic_g12.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2493 = stringAppend(MMC_REFSTRINGLIT(tmp2491),tmp2492);
      tmpMeta2495 = stringAppend(tmpMeta2493,MMC_REFSTRINGLIT(tmp2494));
      tmp2496 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5055]] /* vrNordic_g12.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2497 = stringAppend(tmpMeta2495,tmp2496);
      tmpMeta2498 = stringAppend(tmpMeta2497,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g12.limiter.uMax >= vrNordic_g12.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2498));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2498));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7104;
}

/*
equation index: 7103
type: ALGORITHM

  assert(goverNordic_g12.limRateLimFirstOrder.limiter.uMax >= goverNordic_g12.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g12.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g12.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7103};
  modelica_boolean tmp2500;
  static const MMC_DEFSTRINGLIT(tmp2501,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2502;
  modelica_metatype tmpMeta2503;
  static const MMC_DEFSTRINGLIT(tmp2504,11,") < uMin (=");
  modelica_metatype tmpMeta2505;
  modelica_string tmp2506;
  modelica_metatype tmpMeta2507;
  modelica_metatype tmpMeta2508;
  static int tmp2509 = 0;
  {
    tmp2500 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2500)
    {
      tmp2502 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2503 = stringAppend(MMC_REFSTRINGLIT(tmp2501),tmp2502);
      tmpMeta2505 = stringAppend(tmpMeta2503,MMC_REFSTRINGLIT(tmp2504));
      tmp2506 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2507 = stringAppend(tmpMeta2505,tmp2506);
      tmpMeta2508 = stringAppend(tmpMeta2507,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g12.limRateLimFirstOrder.limiter.uMax >= goverNordic_g12.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2508));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2508));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7103;
}

/*
equation index: 7102
type: ALGORITHM

  assert(vrNordic_g13.limiter.uMax >= vrNordic_g13.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g13.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g13.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7102};
  modelica_boolean tmp2510;
  static const MMC_DEFSTRINGLIT(tmp2511,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2512;
  modelica_metatype tmpMeta2513;
  static const MMC_DEFSTRINGLIT(tmp2514,11,") < uMin (=");
  modelica_metatype tmpMeta2515;
  modelica_string tmp2516;
  modelica_metatype tmpMeta2517;
  modelica_metatype tmpMeta2518;
  static int tmp2519 = 0;
  {
    tmp2510 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5133]] /* vrNordic_g13.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5134]] /* vrNordic_g13.limiter.uMin PARAM */));
    if(!tmp2510)
    {
      tmp2512 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5133]] /* vrNordic_g13.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2513 = stringAppend(MMC_REFSTRINGLIT(tmp2511),tmp2512);
      tmpMeta2515 = stringAppend(tmpMeta2513,MMC_REFSTRINGLIT(tmp2514));
      tmp2516 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5134]] /* vrNordic_g13.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2517 = stringAppend(tmpMeta2515,tmp2516);
      tmpMeta2518 = stringAppend(tmpMeta2517,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g13.limiter.uMax >= vrNordic_g13.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2518));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2518));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7102;
}

/*
equation index: 7101
type: ALGORITHM

  assert(goverNordic_g13.limRateLimFirstOrder.limiter.uMax >= goverNordic_g13.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g13.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g13.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7101};
  modelica_boolean tmp2520;
  static const MMC_DEFSTRINGLIT(tmp2521,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2522;
  modelica_metatype tmpMeta2523;
  static const MMC_DEFSTRINGLIT(tmp2524,11,") < uMin (=");
  modelica_metatype tmpMeta2525;
  modelica_string tmp2526;
  modelica_metatype tmpMeta2527;
  modelica_metatype tmpMeta2528;
  static int tmp2529 = 0;
  {
    tmp2520 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2520)
    {
      tmp2522 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2523 = stringAppend(MMC_REFSTRINGLIT(tmp2521),tmp2522);
      tmpMeta2525 = stringAppend(tmpMeta2523,MMC_REFSTRINGLIT(tmp2524));
      tmp2526 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2527 = stringAppend(tmpMeta2525,tmp2526);
      tmpMeta2528 = stringAppend(tmpMeta2527,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g13.limRateLimFirstOrder.limiter.uMax >= goverNordic_g13.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2528));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2528));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7101;
}

/*
equation index: 7100
type: ALGORITHM

  assert(vrNordic_g14.limiter.uMax >= vrNordic_g14.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g14.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g14.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7100};
  modelica_boolean tmp2530;
  static const MMC_DEFSTRINGLIT(tmp2531,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2532;
  modelica_metatype tmpMeta2533;
  static const MMC_DEFSTRINGLIT(tmp2534,11,") < uMin (=");
  modelica_metatype tmpMeta2535;
  modelica_string tmp2536;
  modelica_metatype tmpMeta2537;
  modelica_metatype tmpMeta2538;
  static int tmp2539 = 0;
  {
    tmp2530 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5212]] /* vrNordic_g14.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5213]] /* vrNordic_g14.limiter.uMin PARAM */));
    if(!tmp2530)
    {
      tmp2532 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5212]] /* vrNordic_g14.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2533 = stringAppend(MMC_REFSTRINGLIT(tmp2531),tmp2532);
      tmpMeta2535 = stringAppend(tmpMeta2533,MMC_REFSTRINGLIT(tmp2534));
      tmp2536 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5213]] /* vrNordic_g14.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2537 = stringAppend(tmpMeta2535,tmp2536);
      tmpMeta2538 = stringAppend(tmpMeta2537,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g14.limiter.uMax >= vrNordic_g14.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2538));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2538));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7100;
}

/*
equation index: 7099
type: ALGORITHM

  assert(goverNordic_g14.limRateLimFirstOrder.limiter.uMax >= goverNordic_g14.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g14.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g14.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7099};
  modelica_boolean tmp2540;
  static const MMC_DEFSTRINGLIT(tmp2541,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2542;
  modelica_metatype tmpMeta2543;
  static const MMC_DEFSTRINGLIT(tmp2544,11,") < uMin (=");
  modelica_metatype tmpMeta2545;
  modelica_string tmp2546;
  modelica_metatype tmpMeta2547;
  modelica_metatype tmpMeta2548;
  static int tmp2549 = 0;
  {
    tmp2540 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2540)
    {
      tmp2542 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2543 = stringAppend(MMC_REFSTRINGLIT(tmp2541),tmp2542);
      tmpMeta2545 = stringAppend(tmpMeta2543,MMC_REFSTRINGLIT(tmp2544));
      tmp2546 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2547 = stringAppend(tmpMeta2545,tmp2546);
      tmpMeta2548 = stringAppend(tmpMeta2547,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g14.limRateLimFirstOrder.limiter.uMax >= goverNordic_g14.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2548));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2548));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7099;
}

/*
equation index: 7098
type: ALGORITHM

  assert(vrNordic_g15.limiter.uMax >= vrNordic_g15.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g15.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g15.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7098};
  modelica_boolean tmp2550;
  static const MMC_DEFSTRINGLIT(tmp2551,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2552;
  modelica_metatype tmpMeta2553;
  static const MMC_DEFSTRINGLIT(tmp2554,11,") < uMin (=");
  modelica_metatype tmpMeta2555;
  modelica_string tmp2556;
  modelica_metatype tmpMeta2557;
  modelica_metatype tmpMeta2558;
  static int tmp2559 = 0;
  {
    tmp2550 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5291]] /* vrNordic_g15.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5292]] /* vrNordic_g15.limiter.uMin PARAM */));
    if(!tmp2550)
    {
      tmp2552 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5291]] /* vrNordic_g15.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2553 = stringAppend(MMC_REFSTRINGLIT(tmp2551),tmp2552);
      tmpMeta2555 = stringAppend(tmpMeta2553,MMC_REFSTRINGLIT(tmp2554));
      tmp2556 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5292]] /* vrNordic_g15.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2557 = stringAppend(tmpMeta2555,tmp2556);
      tmpMeta2558 = stringAppend(tmpMeta2557,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g15.limiter.uMax >= vrNordic_g15.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2558));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2558));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7098;
}

/*
equation index: 7097
type: ALGORITHM

  assert(goverNordic_g15.limRateLimFirstOrder.limiter.uMax >= goverNordic_g15.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g15.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g15.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7097};
  modelica_boolean tmp2560;
  static const MMC_DEFSTRINGLIT(tmp2561,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2562;
  modelica_metatype tmpMeta2563;
  static const MMC_DEFSTRINGLIT(tmp2564,11,") < uMin (=");
  modelica_metatype tmpMeta2565;
  modelica_string tmp2566;
  modelica_metatype tmpMeta2567;
  modelica_metatype tmpMeta2568;
  static int tmp2569 = 0;
  {
    tmp2560 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2560)
    {
      tmp2562 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2563 = stringAppend(MMC_REFSTRINGLIT(tmp2561),tmp2562);
      tmpMeta2565 = stringAppend(tmpMeta2563,MMC_REFSTRINGLIT(tmp2564));
      tmp2566 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2567 = stringAppend(tmpMeta2565,tmp2566);
      tmpMeta2568 = stringAppend(tmpMeta2567,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g15.limRateLimFirstOrder.limiter.uMax >= goverNordic_g15.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2568));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2568));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7097;
}

/*
equation index: 7096
type: ALGORITHM

  assert(vrNordic_g16.limiter.uMax >= vrNordic_g16.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g16.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g16.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7096};
  modelica_boolean tmp2570;
  static const MMC_DEFSTRINGLIT(tmp2571,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2572;
  modelica_metatype tmpMeta2573;
  static const MMC_DEFSTRINGLIT(tmp2574,11,") < uMin (=");
  modelica_metatype tmpMeta2575;
  modelica_string tmp2576;
  modelica_metatype tmpMeta2577;
  modelica_metatype tmpMeta2578;
  static int tmp2579 = 0;
  {
    tmp2570 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5370]] /* vrNordic_g16.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5371]] /* vrNordic_g16.limiter.uMin PARAM */));
    if(!tmp2570)
    {
      tmp2572 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5370]] /* vrNordic_g16.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2573 = stringAppend(MMC_REFSTRINGLIT(tmp2571),tmp2572);
      tmpMeta2575 = stringAppend(tmpMeta2573,MMC_REFSTRINGLIT(tmp2574));
      tmp2576 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5371]] /* vrNordic_g16.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2577 = stringAppend(tmpMeta2575,tmp2576);
      tmpMeta2578 = stringAppend(tmpMeta2577,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g16.limiter.uMax >= vrNordic_g16.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2578));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2578));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7096;
}

/*
equation index: 7095
type: ALGORITHM

  assert(goverNordic_g16.limRateLimFirstOrder.limiter.uMax >= goverNordic_g16.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g16.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g16.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7095};
  modelica_boolean tmp2580;
  static const MMC_DEFSTRINGLIT(tmp2581,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2582;
  modelica_metatype tmpMeta2583;
  static const MMC_DEFSTRINGLIT(tmp2584,11,") < uMin (=");
  modelica_metatype tmpMeta2585;
  modelica_string tmp2586;
  modelica_metatype tmpMeta2587;
  modelica_metatype tmpMeta2588;
  static int tmp2589 = 0;
  {
    tmp2580 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2580)
    {
      tmp2582 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2583 = stringAppend(MMC_REFSTRINGLIT(tmp2581),tmp2582);
      tmpMeta2585 = stringAppend(tmpMeta2583,MMC_REFSTRINGLIT(tmp2584));
      tmp2586 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2587 = stringAppend(tmpMeta2585,tmp2586);
      tmpMeta2588 = stringAppend(tmpMeta2587,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g16.limRateLimFirstOrder.limiter.uMax >= goverNordic_g16.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2588));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2588));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7095;
}

/*
equation index: 7094
type: ALGORITHM

  assert(vrNordic_g17.limiter.uMax >= vrNordic_g17.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g17.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g17.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7094};
  modelica_boolean tmp2590;
  static const MMC_DEFSTRINGLIT(tmp2591,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2592;
  modelica_metatype tmpMeta2593;
  static const MMC_DEFSTRINGLIT(tmp2594,11,") < uMin (=");
  modelica_metatype tmpMeta2595;
  modelica_string tmp2596;
  modelica_metatype tmpMeta2597;
  modelica_metatype tmpMeta2598;
  static int tmp2599 = 0;
  {
    tmp2590 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5449]] /* vrNordic_g17.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5450]] /* vrNordic_g17.limiter.uMin PARAM */));
    if(!tmp2590)
    {
      tmp2592 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5449]] /* vrNordic_g17.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2593 = stringAppend(MMC_REFSTRINGLIT(tmp2591),tmp2592);
      tmpMeta2595 = stringAppend(tmpMeta2593,MMC_REFSTRINGLIT(tmp2594));
      tmp2596 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5450]] /* vrNordic_g17.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2597 = stringAppend(tmpMeta2595,tmp2596);
      tmpMeta2598 = stringAppend(tmpMeta2597,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g17.limiter.uMax >= vrNordic_g17.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2598));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2598));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7094;
}

/*
equation index: 7093
type: ALGORITHM

  assert(goverNordic_g17.limRateLimFirstOrder.limiter.uMax >= goverNordic_g17.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g17.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g17.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7093};
  modelica_boolean tmp2600;
  static const MMC_DEFSTRINGLIT(tmp2601,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2602;
  modelica_metatype tmpMeta2603;
  static const MMC_DEFSTRINGLIT(tmp2604,11,") < uMin (=");
  modelica_metatype tmpMeta2605;
  modelica_string tmp2606;
  modelica_metatype tmpMeta2607;
  modelica_metatype tmpMeta2608;
  static int tmp2609 = 0;
  {
    tmp2600 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2860]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2600)
    {
      tmp2602 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2603 = stringAppend(MMC_REFSTRINGLIT(tmp2601),tmp2602);
      tmpMeta2605 = stringAppend(tmpMeta2603,MMC_REFSTRINGLIT(tmp2604));
      tmp2606 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2860]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2607 = stringAppend(tmpMeta2605,tmp2606);
      tmpMeta2608 = stringAppend(tmpMeta2607,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g17.limRateLimFirstOrder.limiter.uMax >= goverNordic_g17.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2608));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2608));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7093;
}

/*
equation index: 7092
type: ALGORITHM

  assert(vrNordic_g18.limiter.uMax >= vrNordic_g18.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g18.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g18.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7092};
  modelica_boolean tmp2610;
  static const MMC_DEFSTRINGLIT(tmp2611,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2612;
  modelica_metatype tmpMeta2613;
  static const MMC_DEFSTRINGLIT(tmp2614,11,") < uMin (=");
  modelica_metatype tmpMeta2615;
  modelica_string tmp2616;
  modelica_metatype tmpMeta2617;
  modelica_metatype tmpMeta2618;
  static int tmp2619 = 0;
  {
    tmp2610 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5528]] /* vrNordic_g18.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5529]] /* vrNordic_g18.limiter.uMin PARAM */));
    if(!tmp2610)
    {
      tmp2612 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5528]] /* vrNordic_g18.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2613 = stringAppend(MMC_REFSTRINGLIT(tmp2611),tmp2612);
      tmpMeta2615 = stringAppend(tmpMeta2613,MMC_REFSTRINGLIT(tmp2614));
      tmp2616 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5529]] /* vrNordic_g18.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2617 = stringAppend(tmpMeta2615,tmp2616);
      tmpMeta2618 = stringAppend(tmpMeta2617,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g18.limiter.uMax >= vrNordic_g18.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2618));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2618));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7092;
}

/*
equation index: 7091
type: ALGORITHM

  assert(goverNordic_g18.limRateLimFirstOrder.limiter.uMax >= goverNordic_g18.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g18.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g18.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7091};
  modelica_boolean tmp2620;
  static const MMC_DEFSTRINGLIT(tmp2621,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2622;
  modelica_metatype tmpMeta2623;
  static const MMC_DEFSTRINGLIT(tmp2624,11,") < uMin (=");
  modelica_metatype tmpMeta2625;
  modelica_string tmp2626;
  modelica_metatype tmpMeta2627;
  modelica_metatype tmpMeta2628;
  static int tmp2629 = 0;
  {
    tmp2620 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2620)
    {
      tmp2622 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2623 = stringAppend(MMC_REFSTRINGLIT(tmp2621),tmp2622);
      tmpMeta2625 = stringAppend(tmpMeta2623,MMC_REFSTRINGLIT(tmp2624));
      tmp2626 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2627 = stringAppend(tmpMeta2625,tmp2626);
      tmpMeta2628 = stringAppend(tmpMeta2627,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g18.limRateLimFirstOrder.limiter.uMax >= goverNordic_g18.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2628));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2628));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7091;
}

/*
equation index: 7090
type: ALGORITHM

  assert(vrNordic_g19.limiter.uMax >= vrNordic_g19.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g19.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g19.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7090};
  modelica_boolean tmp2630;
  static const MMC_DEFSTRINGLIT(tmp2631,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2632;
  modelica_metatype tmpMeta2633;
  static const MMC_DEFSTRINGLIT(tmp2634,11,") < uMin (=");
  modelica_metatype tmpMeta2635;
  modelica_string tmp2636;
  modelica_metatype tmpMeta2637;
  modelica_metatype tmpMeta2638;
  static int tmp2639 = 0;
  {
    tmp2630 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5607]] /* vrNordic_g19.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5608]] /* vrNordic_g19.limiter.uMin PARAM */));
    if(!tmp2630)
    {
      tmp2632 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5607]] /* vrNordic_g19.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2633 = stringAppend(MMC_REFSTRINGLIT(tmp2631),tmp2632);
      tmpMeta2635 = stringAppend(tmpMeta2633,MMC_REFSTRINGLIT(tmp2634));
      tmp2636 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5608]] /* vrNordic_g19.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2637 = stringAppend(tmpMeta2635,tmp2636);
      tmpMeta2638 = stringAppend(tmpMeta2637,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g19.limiter.uMax >= vrNordic_g19.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2638));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2638));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7090;
}

/*
equation index: 7089
type: ALGORITHM

  assert(goverNordic_g19.limRateLimFirstOrder.limiter.uMax >= goverNordic_g19.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g19.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g19.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7089};
  modelica_boolean tmp2640;
  static const MMC_DEFSTRINGLIT(tmp2641,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2642;
  modelica_metatype tmpMeta2643;
  static const MMC_DEFSTRINGLIT(tmp2644,11,") < uMin (=");
  modelica_metatype tmpMeta2645;
  modelica_string tmp2646;
  modelica_metatype tmpMeta2647;
  modelica_metatype tmpMeta2648;
  static int tmp2649 = 0;
  {
    tmp2640 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2640)
    {
      tmp2642 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2643 = stringAppend(MMC_REFSTRINGLIT(tmp2641),tmp2642);
      tmpMeta2645 = stringAppend(tmpMeta2643,MMC_REFSTRINGLIT(tmp2644));
      tmp2646 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2647 = stringAppend(tmpMeta2645,tmp2646);
      tmpMeta2648 = stringAppend(tmpMeta2647,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g19.limRateLimFirstOrder.limiter.uMax >= goverNordic_g19.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2648));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2648));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7089;
}

/*
equation index: 7088
type: ALGORITHM

  assert(vrNordic_g20.limiter.uMax >= vrNordic_g20.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(vrNordic_g20.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(vrNordic_g20.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7088};
  modelica_boolean tmp2650;
  static const MMC_DEFSTRINGLIT(tmp2651,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2652;
  modelica_metatype tmpMeta2653;
  static const MMC_DEFSTRINGLIT(tmp2654,11,") < uMin (=");
  modelica_metatype tmpMeta2655;
  modelica_string tmp2656;
  modelica_metatype tmpMeta2657;
  modelica_metatype tmpMeta2658;
  static int tmp2659 = 0;
  {
    tmp2650 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5686]] /* vrNordic_g20.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5687]] /* vrNordic_g20.limiter.uMin PARAM */));
    if(!tmp2650)
    {
      tmp2652 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5686]] /* vrNordic_g20.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2653 = stringAppend(MMC_REFSTRINGLIT(tmp2651),tmp2652);
      tmpMeta2655 = stringAppend(tmpMeta2653,MMC_REFSTRINGLIT(tmp2654));
      tmp2656 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5687]] /* vrNordic_g20.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2657 = stringAppend(tmpMeta2655,tmp2656);
      tmpMeta2658 = stringAppend(tmpMeta2657,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(vrNordic_g20.limiter.uMax >= vrNordic_g20.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2658));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2658));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7088;
}

/*
equation index: 7087
type: ALGORITHM

  assert(goverNordic_g20.limRateLimFirstOrder.limiter.uMax >= goverNordic_g20.limRateLimFirstOrder.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(goverNordic_g20.limRateLimFirstOrder.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(goverNordic_g20.limRateLimFirstOrder.limiter.uMin, 6, 0, true) + ")");
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_7087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7087};
  modelica_boolean tmp2660;
  static const MMC_DEFSTRINGLIT(tmp2661,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2662;
  modelica_metatype tmpMeta2663;
  static const MMC_DEFSTRINGLIT(tmp2664,11,") < uMin (=");
  modelica_metatype tmpMeta2665;
  modelica_string tmp2666;
  modelica_metatype tmpMeta2667;
  modelica_metatype tmpMeta2668;
  static int tmp2669 = 0;
  {
    tmp2660 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMin PARAM */));
    if(!tmp2660)
    {
      tmp2662 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMax PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2663 = stringAppend(MMC_REFSTRINGLIT(tmp2661),tmp2662);
      tmpMeta2665 = stringAppend(tmpMeta2663,MMC_REFSTRINGLIT(tmp2664));
      tmp2666 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMin PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta2667 = stringAppend(tmpMeta2665,tmp2666);
      tmpMeta2668 = stringAppend(tmpMeta2667,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(goverNordic_g20.limRateLimFirstOrder.limiter.uMax >= goverNordic_g20.limRateLimFirstOrder.limiter.uMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2668));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica/Blocks/Nonlinear.mo",22,9,23,65,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2668));
        }
      }
    }
  }
  threadData->lastEquationSolved = 7087;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_10(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[452])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_6695,
    MyNordic_initialized_TestCase_initialized_eqFunction_6696,
    MyNordic_initialized_TestCase_initialized_eqFunction_6697,
    MyNordic_initialized_TestCase_initialized_eqFunction_6698,
    MyNordic_initialized_TestCase_initialized_eqFunction_6699,
    MyNordic_initialized_TestCase_initialized_eqFunction_6700,
    MyNordic_initialized_TestCase_initialized_eqFunction_6701,
    MyNordic_initialized_TestCase_initialized_eqFunction_6702,
    MyNordic_initialized_TestCase_initialized_eqFunction_6703,
    MyNordic_initialized_TestCase_initialized_eqFunction_6704,
    MyNordic_initialized_TestCase_initialized_eqFunction_6705,
    MyNordic_initialized_TestCase_initialized_eqFunction_6706,
    MyNordic_initialized_TestCase_initialized_eqFunction_6707,
    MyNordic_initialized_TestCase_initialized_eqFunction_6708,
    MyNordic_initialized_TestCase_initialized_eqFunction_6709,
    MyNordic_initialized_TestCase_initialized_eqFunction_6710,
    MyNordic_initialized_TestCase_initialized_eqFunction_6711,
    MyNordic_initialized_TestCase_initialized_eqFunction_6712,
    MyNordic_initialized_TestCase_initialized_eqFunction_6713,
    MyNordic_initialized_TestCase_initialized_eqFunction_6714,
    MyNordic_initialized_TestCase_initialized_eqFunction_6715,
    MyNordic_initialized_TestCase_initialized_eqFunction_6716,
    MyNordic_initialized_TestCase_initialized_eqFunction_6717,
    MyNordic_initialized_TestCase_initialized_eqFunction_6718,
    MyNordic_initialized_TestCase_initialized_eqFunction_6719,
    MyNordic_initialized_TestCase_initialized_eqFunction_6720,
    MyNordic_initialized_TestCase_initialized_eqFunction_6721,
    MyNordic_initialized_TestCase_initialized_eqFunction_6722,
    MyNordic_initialized_TestCase_initialized_eqFunction_6723,
    MyNordic_initialized_TestCase_initialized_eqFunction_6724,
    MyNordic_initialized_TestCase_initialized_eqFunction_6725,
    MyNordic_initialized_TestCase_initialized_eqFunction_6726,
    MyNordic_initialized_TestCase_initialized_eqFunction_6727,
    MyNordic_initialized_TestCase_initialized_eqFunction_6728,
    MyNordic_initialized_TestCase_initialized_eqFunction_6729,
    MyNordic_initialized_TestCase_initialized_eqFunction_6730,
    MyNordic_initialized_TestCase_initialized_eqFunction_6731,
    MyNordic_initialized_TestCase_initialized_eqFunction_6732,
    MyNordic_initialized_TestCase_initialized_eqFunction_6733,
    MyNordic_initialized_TestCase_initialized_eqFunction_6734,
    MyNordic_initialized_TestCase_initialized_eqFunction_6735,
    MyNordic_initialized_TestCase_initialized_eqFunction_6736,
    MyNordic_initialized_TestCase_initialized_eqFunction_6737,
    MyNordic_initialized_TestCase_initialized_eqFunction_6738,
    MyNordic_initialized_TestCase_initialized_eqFunction_6739,
    MyNordic_initialized_TestCase_initialized_eqFunction_6740,
    MyNordic_initialized_TestCase_initialized_eqFunction_6741,
    MyNordic_initialized_TestCase_initialized_eqFunction_6742,
    MyNordic_initialized_TestCase_initialized_eqFunction_6743,
    MyNordic_initialized_TestCase_initialized_eqFunction_6744,
    MyNordic_initialized_TestCase_initialized_eqFunction_6745,
    MyNordic_initialized_TestCase_initialized_eqFunction_6746,
    MyNordic_initialized_TestCase_initialized_eqFunction_6747,
    MyNordic_initialized_TestCase_initialized_eqFunction_6748,
    MyNordic_initialized_TestCase_initialized_eqFunction_6749,
    MyNordic_initialized_TestCase_initialized_eqFunction_6750,
    MyNordic_initialized_TestCase_initialized_eqFunction_6751,
    MyNordic_initialized_TestCase_initialized_eqFunction_6752,
    MyNordic_initialized_TestCase_initialized_eqFunction_6753,
    MyNordic_initialized_TestCase_initialized_eqFunction_6754,
    MyNordic_initialized_TestCase_initialized_eqFunction_6755,
    MyNordic_initialized_TestCase_initialized_eqFunction_6756,
    MyNordic_initialized_TestCase_initialized_eqFunction_6757,
    MyNordic_initialized_TestCase_initialized_eqFunction_6758,
    MyNordic_initialized_TestCase_initialized_eqFunction_6759,
    MyNordic_initialized_TestCase_initialized_eqFunction_6760,
    MyNordic_initialized_TestCase_initialized_eqFunction_6761,
    MyNordic_initialized_TestCase_initialized_eqFunction_6762,
    MyNordic_initialized_TestCase_initialized_eqFunction_6763,
    MyNordic_initialized_TestCase_initialized_eqFunction_6764,
    MyNordic_initialized_TestCase_initialized_eqFunction_6765,
    MyNordic_initialized_TestCase_initialized_eqFunction_6766,
    MyNordic_initialized_TestCase_initialized_eqFunction_6767,
    MyNordic_initialized_TestCase_initialized_eqFunction_6768,
    MyNordic_initialized_TestCase_initialized_eqFunction_6769,
    MyNordic_initialized_TestCase_initialized_eqFunction_6770,
    MyNordic_initialized_TestCase_initialized_eqFunction_6771,
    MyNordic_initialized_TestCase_initialized_eqFunction_6772,
    MyNordic_initialized_TestCase_initialized_eqFunction_6773,
    MyNordic_initialized_TestCase_initialized_eqFunction_6774,
    MyNordic_initialized_TestCase_initialized_eqFunction_6775,
    MyNordic_initialized_TestCase_initialized_eqFunction_6776,
    MyNordic_initialized_TestCase_initialized_eqFunction_6777,
    MyNordic_initialized_TestCase_initialized_eqFunction_6778,
    MyNordic_initialized_TestCase_initialized_eqFunction_6779,
    MyNordic_initialized_TestCase_initialized_eqFunction_6780,
    MyNordic_initialized_TestCase_initialized_eqFunction_6781,
    MyNordic_initialized_TestCase_initialized_eqFunction_6782,
    MyNordic_initialized_TestCase_initialized_eqFunction_6783,
    MyNordic_initialized_TestCase_initialized_eqFunction_6784,
    MyNordic_initialized_TestCase_initialized_eqFunction_6785,
    MyNordic_initialized_TestCase_initialized_eqFunction_6786,
    MyNordic_initialized_TestCase_initialized_eqFunction_6787,
    MyNordic_initialized_TestCase_initialized_eqFunction_6788,
    MyNordic_initialized_TestCase_initialized_eqFunction_6789,
    MyNordic_initialized_TestCase_initialized_eqFunction_6790,
    MyNordic_initialized_TestCase_initialized_eqFunction_6791,
    MyNordic_initialized_TestCase_initialized_eqFunction_6792,
    MyNordic_initialized_TestCase_initialized_eqFunction_6793,
    MyNordic_initialized_TestCase_initialized_eqFunction_6794,
    MyNordic_initialized_TestCase_initialized_eqFunction_6795,
    MyNordic_initialized_TestCase_initialized_eqFunction_6796,
    MyNordic_initialized_TestCase_initialized_eqFunction_6797,
    MyNordic_initialized_TestCase_initialized_eqFunction_6798,
    MyNordic_initialized_TestCase_initialized_eqFunction_6799,
    MyNordic_initialized_TestCase_initialized_eqFunction_6800,
    MyNordic_initialized_TestCase_initialized_eqFunction_6801,
    MyNordic_initialized_TestCase_initialized_eqFunction_6802,
    MyNordic_initialized_TestCase_initialized_eqFunction_6803,
    MyNordic_initialized_TestCase_initialized_eqFunction_6804,
    MyNordic_initialized_TestCase_initialized_eqFunction_6805,
    MyNordic_initialized_TestCase_initialized_eqFunction_6806,
    MyNordic_initialized_TestCase_initialized_eqFunction_6807,
    MyNordic_initialized_TestCase_initialized_eqFunction_6808,
    MyNordic_initialized_TestCase_initialized_eqFunction_6809,
    MyNordic_initialized_TestCase_initialized_eqFunction_6810,
    MyNordic_initialized_TestCase_initialized_eqFunction_6811,
    MyNordic_initialized_TestCase_initialized_eqFunction_6812,
    MyNordic_initialized_TestCase_initialized_eqFunction_6813,
    MyNordic_initialized_TestCase_initialized_eqFunction_6814,
    MyNordic_initialized_TestCase_initialized_eqFunction_6815,
    MyNordic_initialized_TestCase_initialized_eqFunction_6816,
    MyNordic_initialized_TestCase_initialized_eqFunction_6817,
    MyNordic_initialized_TestCase_initialized_eqFunction_6818,
    MyNordic_initialized_TestCase_initialized_eqFunction_6819,
    MyNordic_initialized_TestCase_initialized_eqFunction_6820,
    MyNordic_initialized_TestCase_initialized_eqFunction_6821,
    MyNordic_initialized_TestCase_initialized_eqFunction_6822,
    MyNordic_initialized_TestCase_initialized_eqFunction_6823,
    MyNordic_initialized_TestCase_initialized_eqFunction_6824,
    MyNordic_initialized_TestCase_initialized_eqFunction_6825,
    MyNordic_initialized_TestCase_initialized_eqFunction_6826,
    MyNordic_initialized_TestCase_initialized_eqFunction_6827,
    MyNordic_initialized_TestCase_initialized_eqFunction_6828,
    MyNordic_initialized_TestCase_initialized_eqFunction_6829,
    MyNordic_initialized_TestCase_initialized_eqFunction_6830,
    MyNordic_initialized_TestCase_initialized_eqFunction_6831,
    MyNordic_initialized_TestCase_initialized_eqFunction_6832,
    MyNordic_initialized_TestCase_initialized_eqFunction_6833,
    MyNordic_initialized_TestCase_initialized_eqFunction_6834,
    MyNordic_initialized_TestCase_initialized_eqFunction_6835,
    MyNordic_initialized_TestCase_initialized_eqFunction_6836,
    MyNordic_initialized_TestCase_initialized_eqFunction_6837,
    MyNordic_initialized_TestCase_initialized_eqFunction_6838,
    MyNordic_initialized_TestCase_initialized_eqFunction_6839,
    MyNordic_initialized_TestCase_initialized_eqFunction_6840,
    MyNordic_initialized_TestCase_initialized_eqFunction_6841,
    MyNordic_initialized_TestCase_initialized_eqFunction_6842,
    MyNordic_initialized_TestCase_initialized_eqFunction_6843,
    MyNordic_initialized_TestCase_initialized_eqFunction_6844,
    MyNordic_initialized_TestCase_initialized_eqFunction_6845,
    MyNordic_initialized_TestCase_initialized_eqFunction_6846,
    MyNordic_initialized_TestCase_initialized_eqFunction_6847,
    MyNordic_initialized_TestCase_initialized_eqFunction_6848,
    MyNordic_initialized_TestCase_initialized_eqFunction_6849,
    MyNordic_initialized_TestCase_initialized_eqFunction_6850,
    MyNordic_initialized_TestCase_initialized_eqFunction_6851,
    MyNordic_initialized_TestCase_initialized_eqFunction_6852,
    MyNordic_initialized_TestCase_initialized_eqFunction_6853,
    MyNordic_initialized_TestCase_initialized_eqFunction_6854,
    MyNordic_initialized_TestCase_initialized_eqFunction_6855,
    MyNordic_initialized_TestCase_initialized_eqFunction_6856,
    MyNordic_initialized_TestCase_initialized_eqFunction_6857,
    MyNordic_initialized_TestCase_initialized_eqFunction_6858,
    MyNordic_initialized_TestCase_initialized_eqFunction_6859,
    MyNordic_initialized_TestCase_initialized_eqFunction_6860,
    MyNordic_initialized_TestCase_initialized_eqFunction_6861,
    MyNordic_initialized_TestCase_initialized_eqFunction_6862,
    MyNordic_initialized_TestCase_initialized_eqFunction_6863,
    MyNordic_initialized_TestCase_initialized_eqFunction_6864,
    MyNordic_initialized_TestCase_initialized_eqFunction_6865,
    MyNordic_initialized_TestCase_initialized_eqFunction_6866,
    MyNordic_initialized_TestCase_initialized_eqFunction_6867,
    MyNordic_initialized_TestCase_initialized_eqFunction_6868,
    MyNordic_initialized_TestCase_initialized_eqFunction_6869,
    MyNordic_initialized_TestCase_initialized_eqFunction_6870,
    MyNordic_initialized_TestCase_initialized_eqFunction_6871,
    MyNordic_initialized_TestCase_initialized_eqFunction_6872,
    MyNordic_initialized_TestCase_initialized_eqFunction_6873,
    MyNordic_initialized_TestCase_initialized_eqFunction_6874,
    MyNordic_initialized_TestCase_initialized_eqFunction_6875,
    MyNordic_initialized_TestCase_initialized_eqFunction_6876,
    MyNordic_initialized_TestCase_initialized_eqFunction_6877,
    MyNordic_initialized_TestCase_initialized_eqFunction_6878,
    MyNordic_initialized_TestCase_initialized_eqFunction_6879,
    MyNordic_initialized_TestCase_initialized_eqFunction_6880,
    MyNordic_initialized_TestCase_initialized_eqFunction_6881,
    MyNordic_initialized_TestCase_initialized_eqFunction_6882,
    MyNordic_initialized_TestCase_initialized_eqFunction_6883,
    MyNordic_initialized_TestCase_initialized_eqFunction_6884,
    MyNordic_initialized_TestCase_initialized_eqFunction_6885,
    MyNordic_initialized_TestCase_initialized_eqFunction_6886,
    MyNordic_initialized_TestCase_initialized_eqFunction_6887,
    MyNordic_initialized_TestCase_initialized_eqFunction_6888,
    MyNordic_initialized_TestCase_initialized_eqFunction_6889,
    MyNordic_initialized_TestCase_initialized_eqFunction_6890,
    MyNordic_initialized_TestCase_initialized_eqFunction_6891,
    MyNordic_initialized_TestCase_initialized_eqFunction_6892,
    MyNordic_initialized_TestCase_initialized_eqFunction_6893,
    MyNordic_initialized_TestCase_initialized_eqFunction_6894,
    MyNordic_initialized_TestCase_initialized_eqFunction_6895,
    MyNordic_initialized_TestCase_initialized_eqFunction_6896,
    MyNordic_initialized_TestCase_initialized_eqFunction_6897,
    MyNordic_initialized_TestCase_initialized_eqFunction_6898,
    MyNordic_initialized_TestCase_initialized_eqFunction_6899,
    MyNordic_initialized_TestCase_initialized_eqFunction_6900,
    MyNordic_initialized_TestCase_initialized_eqFunction_6901,
    MyNordic_initialized_TestCase_initialized_eqFunction_6902,
    MyNordic_initialized_TestCase_initialized_eqFunction_6903,
    MyNordic_initialized_TestCase_initialized_eqFunction_6904,
    MyNordic_initialized_TestCase_initialized_eqFunction_6905,
    MyNordic_initialized_TestCase_initialized_eqFunction_6906,
    MyNordic_initialized_TestCase_initialized_eqFunction_6907,
    MyNordic_initialized_TestCase_initialized_eqFunction_6908,
    MyNordic_initialized_TestCase_initialized_eqFunction_6909,
    MyNordic_initialized_TestCase_initialized_eqFunction_6910,
    MyNordic_initialized_TestCase_initialized_eqFunction_6911,
    MyNordic_initialized_TestCase_initialized_eqFunction_6912,
    MyNordic_initialized_TestCase_initialized_eqFunction_6913,
    MyNordic_initialized_TestCase_initialized_eqFunction_6914,
    MyNordic_initialized_TestCase_initialized_eqFunction_6915,
    MyNordic_initialized_TestCase_initialized_eqFunction_6916,
    MyNordic_initialized_TestCase_initialized_eqFunction_6917,
    MyNordic_initialized_TestCase_initialized_eqFunction_6918,
    MyNordic_initialized_TestCase_initialized_eqFunction_6919,
    MyNordic_initialized_TestCase_initialized_eqFunction_6920,
    MyNordic_initialized_TestCase_initialized_eqFunction_6921,
    MyNordic_initialized_TestCase_initialized_eqFunction_6922,
    MyNordic_initialized_TestCase_initialized_eqFunction_6923,
    MyNordic_initialized_TestCase_initialized_eqFunction_6924,
    MyNordic_initialized_TestCase_initialized_eqFunction_6925,
    MyNordic_initialized_TestCase_initialized_eqFunction_6926,
    MyNordic_initialized_TestCase_initialized_eqFunction_6927,
    MyNordic_initialized_TestCase_initialized_eqFunction_6928,
    MyNordic_initialized_TestCase_initialized_eqFunction_6929,
    MyNordic_initialized_TestCase_initialized_eqFunction_6930,
    MyNordic_initialized_TestCase_initialized_eqFunction_6931,
    MyNordic_initialized_TestCase_initialized_eqFunction_6932,
    MyNordic_initialized_TestCase_initialized_eqFunction_6933,
    MyNordic_initialized_TestCase_initialized_eqFunction_6934,
    MyNordic_initialized_TestCase_initialized_eqFunction_6935,
    MyNordic_initialized_TestCase_initialized_eqFunction_6936,
    MyNordic_initialized_TestCase_initialized_eqFunction_6937,
    MyNordic_initialized_TestCase_initialized_eqFunction_6938,
    MyNordic_initialized_TestCase_initialized_eqFunction_6939,
    MyNordic_initialized_TestCase_initialized_eqFunction_6940,
    MyNordic_initialized_TestCase_initialized_eqFunction_6941,
    MyNordic_initialized_TestCase_initialized_eqFunction_6942,
    MyNordic_initialized_TestCase_initialized_eqFunction_6943,
    MyNordic_initialized_TestCase_initialized_eqFunction_6944,
    MyNordic_initialized_TestCase_initialized_eqFunction_6945,
    MyNordic_initialized_TestCase_initialized_eqFunction_6946,
    MyNordic_initialized_TestCase_initialized_eqFunction_6947,
    MyNordic_initialized_TestCase_initialized_eqFunction_6948,
    MyNordic_initialized_TestCase_initialized_eqFunction_6949,
    MyNordic_initialized_TestCase_initialized_eqFunction_6950,
    MyNordic_initialized_TestCase_initialized_eqFunction_6951,
    MyNordic_initialized_TestCase_initialized_eqFunction_6952,
    MyNordic_initialized_TestCase_initialized_eqFunction_6953,
    MyNordic_initialized_TestCase_initialized_eqFunction_6954,
    MyNordic_initialized_TestCase_initialized_eqFunction_6955,
    MyNordic_initialized_TestCase_initialized_eqFunction_6956,
    MyNordic_initialized_TestCase_initialized_eqFunction_6957,
    MyNordic_initialized_TestCase_initialized_eqFunction_6958,
    MyNordic_initialized_TestCase_initialized_eqFunction_6959,
    MyNordic_initialized_TestCase_initialized_eqFunction_6960,
    MyNordic_initialized_TestCase_initialized_eqFunction_6961,
    MyNordic_initialized_TestCase_initialized_eqFunction_6962,
    MyNordic_initialized_TestCase_initialized_eqFunction_6963,
    MyNordic_initialized_TestCase_initialized_eqFunction_6964,
    MyNordic_initialized_TestCase_initialized_eqFunction_6965,
    MyNordic_initialized_TestCase_initialized_eqFunction_6966,
    MyNordic_initialized_TestCase_initialized_eqFunction_6967,
    MyNordic_initialized_TestCase_initialized_eqFunction_6968,
    MyNordic_initialized_TestCase_initialized_eqFunction_6969,
    MyNordic_initialized_TestCase_initialized_eqFunction_6970,
    MyNordic_initialized_TestCase_initialized_eqFunction_6971,
    MyNordic_initialized_TestCase_initialized_eqFunction_6972,
    MyNordic_initialized_TestCase_initialized_eqFunction_6973,
    MyNordic_initialized_TestCase_initialized_eqFunction_6974,
    MyNordic_initialized_TestCase_initialized_eqFunction_6975,
    MyNordic_initialized_TestCase_initialized_eqFunction_6976,
    MyNordic_initialized_TestCase_initialized_eqFunction_6977,
    MyNordic_initialized_TestCase_initialized_eqFunction_6978,
    MyNordic_initialized_TestCase_initialized_eqFunction_6979,
    MyNordic_initialized_TestCase_initialized_eqFunction_6980,
    MyNordic_initialized_TestCase_initialized_eqFunction_6981,
    MyNordic_initialized_TestCase_initialized_eqFunction_6982,
    MyNordic_initialized_TestCase_initialized_eqFunction_6983,
    MyNordic_initialized_TestCase_initialized_eqFunction_6984,
    MyNordic_initialized_TestCase_initialized_eqFunction_6985,
    MyNordic_initialized_TestCase_initialized_eqFunction_6986,
    MyNordic_initialized_TestCase_initialized_eqFunction_6987,
    MyNordic_initialized_TestCase_initialized_eqFunction_6988,
    MyNordic_initialized_TestCase_initialized_eqFunction_6989,
    MyNordic_initialized_TestCase_initialized_eqFunction_6990,
    MyNordic_initialized_TestCase_initialized_eqFunction_6991,
    MyNordic_initialized_TestCase_initialized_eqFunction_6992,
    MyNordic_initialized_TestCase_initialized_eqFunction_6993,
    MyNordic_initialized_TestCase_initialized_eqFunction_6994,
    MyNordic_initialized_TestCase_initialized_eqFunction_6995,
    MyNordic_initialized_TestCase_initialized_eqFunction_6996,
    MyNordic_initialized_TestCase_initialized_eqFunction_6997,
    MyNordic_initialized_TestCase_initialized_eqFunction_6998,
    MyNordic_initialized_TestCase_initialized_eqFunction_6999,
    MyNordic_initialized_TestCase_initialized_eqFunction_7000,
    MyNordic_initialized_TestCase_initialized_eqFunction_7001,
    MyNordic_initialized_TestCase_initialized_eqFunction_7002,
    MyNordic_initialized_TestCase_initialized_eqFunction_7003,
    MyNordic_initialized_TestCase_initialized_eqFunction_7004,
    MyNordic_initialized_TestCase_initialized_eqFunction_7005,
    MyNordic_initialized_TestCase_initialized_eqFunction_7006,
    MyNordic_initialized_TestCase_initialized_eqFunction_7007,
    MyNordic_initialized_TestCase_initialized_eqFunction_7008,
    MyNordic_initialized_TestCase_initialized_eqFunction_7009,
    MyNordic_initialized_TestCase_initialized_eqFunction_7010,
    MyNordic_initialized_TestCase_initialized_eqFunction_7011,
    MyNordic_initialized_TestCase_initialized_eqFunction_7012,
    MyNordic_initialized_TestCase_initialized_eqFunction_7013,
    MyNordic_initialized_TestCase_initialized_eqFunction_7014,
    MyNordic_initialized_TestCase_initialized_eqFunction_7015,
    MyNordic_initialized_TestCase_initialized_eqFunction_7016,
    MyNordic_initialized_TestCase_initialized_eqFunction_7017,
    MyNordic_initialized_TestCase_initialized_eqFunction_7018,
    MyNordic_initialized_TestCase_initialized_eqFunction_7019,
    MyNordic_initialized_TestCase_initialized_eqFunction_7020,
    MyNordic_initialized_TestCase_initialized_eqFunction_7021,
    MyNordic_initialized_TestCase_initialized_eqFunction_7022,
    MyNordic_initialized_TestCase_initialized_eqFunction_7023,
    MyNordic_initialized_TestCase_initialized_eqFunction_7024,
    MyNordic_initialized_TestCase_initialized_eqFunction_7025,
    MyNordic_initialized_TestCase_initialized_eqFunction_7026,
    MyNordic_initialized_TestCase_initialized_eqFunction_7027,
    MyNordic_initialized_TestCase_initialized_eqFunction_7028,
    MyNordic_initialized_TestCase_initialized_eqFunction_7029,
    MyNordic_initialized_TestCase_initialized_eqFunction_7030,
    MyNordic_initialized_TestCase_initialized_eqFunction_7031,
    MyNordic_initialized_TestCase_initialized_eqFunction_7032,
    MyNordic_initialized_TestCase_initialized_eqFunction_7033,
    MyNordic_initialized_TestCase_initialized_eqFunction_7034,
    MyNordic_initialized_TestCase_initialized_eqFunction_7035,
    MyNordic_initialized_TestCase_initialized_eqFunction_7036,
    MyNordic_initialized_TestCase_initialized_eqFunction_7037,
    MyNordic_initialized_TestCase_initialized_eqFunction_7038,
    MyNordic_initialized_TestCase_initialized_eqFunction_7039,
    MyNordic_initialized_TestCase_initialized_eqFunction_7040,
    MyNordic_initialized_TestCase_initialized_eqFunction_7041,
    MyNordic_initialized_TestCase_initialized_eqFunction_7042,
    MyNordic_initialized_TestCase_initialized_eqFunction_7043,
    MyNordic_initialized_TestCase_initialized_eqFunction_7044,
    MyNordic_initialized_TestCase_initialized_eqFunction_7045,
    MyNordic_initialized_TestCase_initialized_eqFunction_7046,
    MyNordic_initialized_TestCase_initialized_eqFunction_7047,
    MyNordic_initialized_TestCase_initialized_eqFunction_7048,
    MyNordic_initialized_TestCase_initialized_eqFunction_7049,
    MyNordic_initialized_TestCase_initialized_eqFunction_7050,
    MyNordic_initialized_TestCase_initialized_eqFunction_7051,
    MyNordic_initialized_TestCase_initialized_eqFunction_7052,
    MyNordic_initialized_TestCase_initialized_eqFunction_7053,
    MyNordic_initialized_TestCase_initialized_eqFunction_7054,
    MyNordic_initialized_TestCase_initialized_eqFunction_7055,
    MyNordic_initialized_TestCase_initialized_eqFunction_7056,
    MyNordic_initialized_TestCase_initialized_eqFunction_7057,
    MyNordic_initialized_TestCase_initialized_eqFunction_7058,
    MyNordic_initialized_TestCase_initialized_eqFunction_7059,
    MyNordic_initialized_TestCase_initialized_eqFunction_7060,
    MyNordic_initialized_TestCase_initialized_eqFunction_7061,
    MyNordic_initialized_TestCase_initialized_eqFunction_7062,
    MyNordic_initialized_TestCase_initialized_eqFunction_7063,
    MyNordic_initialized_TestCase_initialized_eqFunction_7064,
    MyNordic_initialized_TestCase_initialized_eqFunction_7065,
    MyNordic_initialized_TestCase_initialized_eqFunction_7066,
    MyNordic_initialized_TestCase_initialized_eqFunction_7067,
    MyNordic_initialized_TestCase_initialized_eqFunction_7068,
    MyNordic_initialized_TestCase_initialized_eqFunction_7069,
    MyNordic_initialized_TestCase_initialized_eqFunction_7070,
    MyNordic_initialized_TestCase_initialized_eqFunction_7071,
    MyNordic_initialized_TestCase_initialized_eqFunction_7072,
    MyNordic_initialized_TestCase_initialized_eqFunction_7073,
    MyNordic_initialized_TestCase_initialized_eqFunction_7074,
    MyNordic_initialized_TestCase_initialized_eqFunction_7075,
    MyNordic_initialized_TestCase_initialized_eqFunction_7076,
    MyNordic_initialized_TestCase_initialized_eqFunction_7077,
    MyNordic_initialized_TestCase_initialized_eqFunction_7078,
    MyNordic_initialized_TestCase_initialized_eqFunction_7079,
    MyNordic_initialized_TestCase_initialized_eqFunction_7080,
    MyNordic_initialized_TestCase_initialized_eqFunction_7081,
    MyNordic_initialized_TestCase_initialized_eqFunction_7082,
    MyNordic_initialized_TestCase_initialized_eqFunction_7083,
    MyNordic_initialized_TestCase_initialized_eqFunction_7084,
    MyNordic_initialized_TestCase_initialized_eqFunction_7085,
    MyNordic_initialized_TestCase_initialized_eqFunction_7086,
    MyNordic_initialized_TestCase_initialized_eqFunction_7146,
    MyNordic_initialized_TestCase_initialized_eqFunction_7145,
    MyNordic_initialized_TestCase_initialized_eqFunction_7144,
    MyNordic_initialized_TestCase_initialized_eqFunction_7143,
    MyNordic_initialized_TestCase_initialized_eqFunction_7142,
    MyNordic_initialized_TestCase_initialized_eqFunction_7141,
    MyNordic_initialized_TestCase_initialized_eqFunction_7140,
    MyNordic_initialized_TestCase_initialized_eqFunction_7139,
    MyNordic_initialized_TestCase_initialized_eqFunction_7138,
    MyNordic_initialized_TestCase_initialized_eqFunction_7137,
    MyNordic_initialized_TestCase_initialized_eqFunction_7136,
    MyNordic_initialized_TestCase_initialized_eqFunction_7135,
    MyNordic_initialized_TestCase_initialized_eqFunction_7134,
    MyNordic_initialized_TestCase_initialized_eqFunction_7133,
    MyNordic_initialized_TestCase_initialized_eqFunction_7132,
    MyNordic_initialized_TestCase_initialized_eqFunction_7131,
    MyNordic_initialized_TestCase_initialized_eqFunction_7130,
    MyNordic_initialized_TestCase_initialized_eqFunction_7129,
    MyNordic_initialized_TestCase_initialized_eqFunction_7128,
    MyNordic_initialized_TestCase_initialized_eqFunction_7127,
    MyNordic_initialized_TestCase_initialized_eqFunction_7126,
    MyNordic_initialized_TestCase_initialized_eqFunction_7125,
    MyNordic_initialized_TestCase_initialized_eqFunction_7124,
    MyNordic_initialized_TestCase_initialized_eqFunction_7123,
    MyNordic_initialized_TestCase_initialized_eqFunction_7122,
    MyNordic_initialized_TestCase_initialized_eqFunction_7121,
    MyNordic_initialized_TestCase_initialized_eqFunction_7120,
    MyNordic_initialized_TestCase_initialized_eqFunction_7119,
    MyNordic_initialized_TestCase_initialized_eqFunction_7118,
    MyNordic_initialized_TestCase_initialized_eqFunction_7117,
    MyNordic_initialized_TestCase_initialized_eqFunction_7116,
    MyNordic_initialized_TestCase_initialized_eqFunction_7115,
    MyNordic_initialized_TestCase_initialized_eqFunction_7114,
    MyNordic_initialized_TestCase_initialized_eqFunction_7113,
    MyNordic_initialized_TestCase_initialized_eqFunction_7112,
    MyNordic_initialized_TestCase_initialized_eqFunction_7111,
    MyNordic_initialized_TestCase_initialized_eqFunction_7110,
    MyNordic_initialized_TestCase_initialized_eqFunction_7109,
    MyNordic_initialized_TestCase_initialized_eqFunction_7108,
    MyNordic_initialized_TestCase_initialized_eqFunction_7107,
    MyNordic_initialized_TestCase_initialized_eqFunction_7106,
    MyNordic_initialized_TestCase_initialized_eqFunction_7105,
    MyNordic_initialized_TestCase_initialized_eqFunction_7104,
    MyNordic_initialized_TestCase_initialized_eqFunction_7103,
    MyNordic_initialized_TestCase_initialized_eqFunction_7102,
    MyNordic_initialized_TestCase_initialized_eqFunction_7101,
    MyNordic_initialized_TestCase_initialized_eqFunction_7100,
    MyNordic_initialized_TestCase_initialized_eqFunction_7099,
    MyNordic_initialized_TestCase_initialized_eqFunction_7098,
    MyNordic_initialized_TestCase_initialized_eqFunction_7097,
    MyNordic_initialized_TestCase_initialized_eqFunction_7096,
    MyNordic_initialized_TestCase_initialized_eqFunction_7095,
    MyNordic_initialized_TestCase_initialized_eqFunction_7094,
    MyNordic_initialized_TestCase_initialized_eqFunction_7093,
    MyNordic_initialized_TestCase_initialized_eqFunction_7092,
    MyNordic_initialized_TestCase_initialized_eqFunction_7091,
    MyNordic_initialized_TestCase_initialized_eqFunction_7090,
    MyNordic_initialized_TestCase_initialized_eqFunction_7089,
    MyNordic_initialized_TestCase_initialized_eqFunction_7088,
    MyNordic_initialized_TestCase_initialized_eqFunction_7087
  };
  
  for (int id = 0; id < 452; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif