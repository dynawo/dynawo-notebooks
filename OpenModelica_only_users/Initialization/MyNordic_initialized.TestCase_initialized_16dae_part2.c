#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 14700
type: SIMPLE_ASSIGN
goverNordic_g07.dH.y = goverNordic_g07.const2.k - goverNordic_g07.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2041]] /* goverNordic_g07.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2476]] /* goverNordic_g07.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2050]] /* goverNordic_g07.headWater.y variable */);
  threadData->lastEquationSolved = 14700;
}
/*
equation index: 14701
type: SIMPLE_ASSIGN
$DAEres80 = goverNordic_g07.waterFlow.k * goverNordic_g07.dH.y - der(goverNordic_g07.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14701};
  (data->simulationInfo->daeModeData->residualVars[80]) /* $DAEres80 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2503]] /* goverNordic_g07.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2041]] /* goverNordic_g07.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[467]] /* der(goverNordic_g07.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14701;
}
/*
equation index: 14702
type: SIMPLE_ASSIGN
goverNordic_g07.dOmega.y = goverNordic_g07.const1.k - g07.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2042]] /* goverNordic_g07.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2475]] /* goverNordic_g07.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14702;
}
/*
equation index: 14703
type: SIMPLE_ASSIGN
goverNordic_g07.dP.y = goverNordic_g07.const.k - goverNordic_g07.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2044]] /* goverNordic_g07.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2474]] /* goverNordic_g07.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* goverNordic_g07.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14703;
}
/*
equation index: 14704
type: SIMPLE_ASSIGN
goverNordic_g07.dOmegaPlusDroop.y = goverNordic_g07.dOmegaPlusDroop.k1 * goverNordic_g07.dOmega.y + goverNordic_g07.dOmegaPlusDroop.k2 * goverNordic_g07.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2043]] /* goverNordic_g07.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2477]] /* goverNordic_g07.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2042]] /* goverNordic_g07.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2478]] /* goverNordic_g07.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2044]] /* goverNordic_g07.dP.y variable */));
  threadData->lastEquationSolved = 14704;
}
/*
equation index: 14705
type: SIMPLE_ASSIGN
goverNordic_g07.govKi.y = goverNordic_g07.govKi.k * goverNordic_g07.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2047]] /* goverNordic_g07.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2484]] /* goverNordic_g07.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2043]] /* goverNordic_g07.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14705;
}
/*
equation index: 14706
type: SIMPLE_ASSIGN
$DAEres78 = goverNordic_g07.govInt.k * goverNordic_g07.govKi.y - der(goverNordic_g07.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14706};
  (data->simulationInfo->daeModeData->residualVars[78]) /* $DAEres78 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2482]] /* goverNordic_g07.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2047]] /* goverNordic_g07.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[465]] /* der(goverNordic_g07.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14706;
}
/*
equation index: 14707
type: SIMPLE_ASSIGN
goverNordic_g07.govKp.y = goverNordic_g07.govKp.k * goverNordic_g07.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2048]] /* goverNordic_g07.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2485]] /* goverNordic_g07.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2043]] /* goverNordic_g07.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14707;
}
/*
equation index: 14708
type: SIMPLE_ASSIGN
goverNordic_g07.govOut.y = goverNordic_g07.govOut.k1 * goverNordic_g07.govKp.y + goverNordic_g07.govOut.k2 * goverNordic_g07.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2049]] /* goverNordic_g07.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2486]] /* goverNordic_g07.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2048]] /* goverNordic_g07.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2487]] /* goverNordic_g07.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* goverNordic_g07.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14708;
}
/*
equation index: 14709
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.feedback.y = goverNordic_g07.govOut.y - goverNordic_g07.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2051]] /* goverNordic_g07.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2049]] /* goverNordic_g07.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14709;
}
/*
equation index: 14710
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.gain.y = goverNordic_g07.limRateLimFirstOrder.gain.k * goverNordic_g07.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2052]] /* goverNordic_g07.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2494]] /* goverNordic_g07.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2051]] /* goverNordic_g07.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14710;
}
/*
equation index: 14711
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g07.limRateLimFirstOrder.gain.y > goverNordic_g07.limRateLimFirstOrder.limiter.uMax then goverNordic_g07.limRateLimFirstOrder.limiter.uMax else if goverNordic_g07.limRateLimFirstOrder.gain.y < goverNordic_g07.limRateLimFirstOrder.limiter.uMin then goverNordic_g07.limRateLimFirstOrder.limiter.uMin else goverNordic_g07.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14711};
  modelica_boolean tmp566;
  modelica_boolean tmp567;
  modelica_boolean tmp568;
  modelica_real tmp569;
  tmp566 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2052]] /* goverNordic_g07.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp568 = (modelica_boolean)tmp566;
  if(tmp568)
  {
    tmp569 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp567 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2052]] /* goverNordic_g07.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp569 = (tmp567?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2052]] /* goverNordic_g07.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */) = tmp569;
  threadData->lastEquationSolved = 14711;
}
/*
equation index: 14712
type: SIMPLE_ASSIGN
$DAEres79 = (if goverNordic_g07.limRateLimFirstOrder.limIntegrator.y < goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g07.limRateLimFirstOrder.limIntegrator.k * goverNordic_g07.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g07.limRateLimFirstOrder.limIntegrator.y > goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g07.limRateLimFirstOrder.limIntegrator.k * goverNordic_g07.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g07.limRateLimFirstOrder.limIntegrator.k * goverNordic_g07.limRateLimFirstOrder.limiter.y) - der(goverNordic_g07.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14712};
  modelica_boolean tmp570;
  modelica_real tmp571;
  modelica_real tmp572;
  modelica_boolean tmp573;
  modelica_real tmp574;
  modelica_real tmp575;
  modelica_boolean tmp576;
  modelica_real tmp577;
  modelica_real tmp578;
  modelica_boolean tmp579;
  modelica_real tmp580;
  modelica_real tmp581;
  tmp571 = 1.0;
  tmp572 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2497]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp570, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2497]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp571, tmp572, 336, Less, LessZC);
  tmp574 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp575 = 0.0;
  relationhysteresis(data, &tmp573, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp574, tmp575, 337, Less, LessZC);
  tmp577 = 1.0;
  tmp578 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp576, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp577, tmp578, 338, Greater, GreaterZC);
  tmp580 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp581 = 0.0;
  relationhysteresis(data, &tmp579, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp580, tmp581, 339, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[79]) /* $DAEres79 DAE_RESIDUAL_VAR */ = (((tmp570 && tmp573) || (tmp576 && tmp579))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* der(goverNordic_g07.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14712;
}
/*
equation index: 14713
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.x[1] = vrNordic_g08.leadLag1.x_scaled[1] / vrNordic_g08.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3627]] /* vrNordic_g08.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* vrNordic_g08.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4712]] /* vrNordic_g08.leadLag1.a_end PARAM */),"vrNordic_g08.leadLag1.a_end");
  threadData->lastEquationSolved = 14713;
}
/*
equation index: 14714
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.x[1] = vrNordic_g08.leadLag2.x_scaled[1] / vrNordic_g08.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3629]] /* vrNordic_g08.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* vrNordic_g08.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4725]] /* vrNordic_g08.leadLag2.a_end PARAM */),"vrNordic_g08.leadLag2.a_end");
  threadData->lastEquationSolved = 14714;
}
/*
equation index: 14715
type: SIMPLE_ASSIGN
vrNordic_g08.greaterEqualThreshold.y = vrNordic_g08.timer.y >= vrNordic_g08.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14715};
  modelica_boolean tmp582;
  modelica_real tmp583;
  modelica_real tmp584;
  tmp583 = 1.0;
  tmp584 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4693]] /* vrNordic_g08.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp582, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4693]] /* vrNordic_g08.greaterEqualThreshold.threshold PARAM */), tmp583, tmp584, 341, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1036]] /* vrNordic_g08.greaterEqualThreshold.y DISCRETE */) = tmp582;
  threadData->lastEquationSolved = 14715;
}
/*
equation index: 14716
type: SIMPLE_ASSIGN
vrNordic_g08.dOmega.y = g08.omegaPu - vrNordic_g08.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3618]] /* vrNordic_g08.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4684]] /* vrNordic_g08.const.k PARAM */);
  threadData->lastEquationSolved = 14716;
}
/*
equation index: 14717
type: SIMPLE_ASSIGN
vrNordic_g08.derivative.y = if vrNordic_g08.derivative.zeroGain then 0.0 else vrNordic_g08.derivative.k / vrNordic_g08.derivative.T * (vrNordic_g08.dOmega.y - vrNordic_g08.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3620]] /* vrNordic_g08.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[938]] /* vrNordic_g08.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4688]] /* vrNordic_g08.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4687]] /* vrNordic_g08.derivative.T PARAM */),"vrNordic_g08.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3618]] /* vrNordic_g08.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* vrNordic_g08.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14717;
}
/*
equation index: 14718
type: SIMPLE_ASSIGN
$DAEres75 = vrNordic_g08.leadLag1.a_end * vrNordic_g08.derivative.y + (-vrNordic_g08.leadLag1.a[2]) * vrNordic_g08.leadLag1.x_scaled[1] - der(vrNordic_g08.leadLag1.x_scaled[1]) * vrNordic_g08.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14718};
  (data->simulationInfo->daeModeData->residualVars[75]) /* $DAEres75 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4712]] /* vrNordic_g08.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3620]] /* vrNordic_g08.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4711]] /* vrNordic_g08.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* vrNordic_g08.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* der(vrNordic_g08.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4710]] /* vrNordic_g08.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14718;
}
/*
equation index: 14719
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.y = (vrNordic_g08.leadLag1.bb[2] - vrNordic_g08.leadLag1.d * vrNordic_g08.leadLag1.a[2]) * vrNordic_g08.leadLag1.x[1] + vrNordic_g08.leadLag1.d * vrNordic_g08.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3628]] /* vrNordic_g08.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4716]] /* vrNordic_g08.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4717]] /* vrNordic_g08.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4711]] /* vrNordic_g08.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3627]] /* vrNordic_g08.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4717]] /* vrNordic_g08.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3620]] /* vrNordic_g08.derivative.y variable */));
  threadData->lastEquationSolved = 14719;
}
/*
equation index: 14720
type: SIMPLE_ASSIGN
$DAEres76 = vrNordic_g08.leadLag2.a_end * vrNordic_g08.leadLag1.y + (-vrNordic_g08.leadLag2.a[2]) * vrNordic_g08.leadLag2.x_scaled[1] - der(vrNordic_g08.leadLag2.x_scaled[1]) * vrNordic_g08.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14720};
  (data->simulationInfo->daeModeData->residualVars[76]) /* $DAEres76 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4725]] /* vrNordic_g08.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3628]] /* vrNordic_g08.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4724]] /* vrNordic_g08.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* vrNordic_g08.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* der(vrNordic_g08.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4723]] /* vrNordic_g08.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14720;
}
/*
equation index: 14721
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.y = (vrNordic_g08.leadLag2.bb[2] - vrNordic_g08.leadLag2.d * vrNordic_g08.leadLag2.a[2]) * vrNordic_g08.leadLag2.x[1] + vrNordic_g08.leadLag2.d * vrNordic_g08.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3630]] /* vrNordic_g08.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4729]] /* vrNordic_g08.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4730]] /* vrNordic_g08.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4724]] /* vrNordic_g08.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3629]] /* vrNordic_g08.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4730]] /* vrNordic_g08.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3628]] /* vrNordic_g08.leadLag1.y variable */));
  threadData->lastEquationSolved = 14721;
}
/*
equation index: 14722
type: SIMPLE_ASSIGN
vrNordic_g08.limiter.y = smooth(0, if vrNordic_g08.leadLag2.y > vrNordic_g08.limiter.uMax then vrNordic_g08.limiter.uMax else if vrNordic_g08.leadLag2.y < vrNordic_g08.limiter.uMin then vrNordic_g08.limiter.uMin else vrNordic_g08.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14722};
  modelica_boolean tmp585;
  modelica_boolean tmp586;
  modelica_boolean tmp587;
  modelica_real tmp588;
  tmp585 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3630]] /* vrNordic_g08.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4738]] /* vrNordic_g08.limiter.uMax PARAM */));
  tmp587 = (modelica_boolean)tmp585;
  if(tmp587)
  {
    tmp588 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4738]] /* vrNordic_g08.limiter.uMax PARAM */);
  }
  else
  {
    tmp586 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3630]] /* vrNordic_g08.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4739]] /* vrNordic_g08.limiter.uMin PARAM */));
    tmp588 = (tmp586?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4739]] /* vrNordic_g08.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3630]] /* vrNordic_g08.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3633]] /* vrNordic_g08.limiter.y variable */) = tmp588;
  threadData->lastEquationSolved = 14722;
}
/*
equation index: 14723
type: SIMPLE_ASSIGN
$DAEres77 = (if vrNordic_g08.derivative.zeroGain then 0.0 else (vrNordic_g08.dOmega.y - vrNordic_g08.derivative.x) / vrNordic_g08.derivative.T) - der(vrNordic_g08.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14723};
  (data->simulationInfo->daeModeData->residualVars[77]) /* $DAEres77 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[938]] /* vrNordic_g08.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3618]] /* vrNordic_g08.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* vrNordic_g08.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4687]] /* vrNordic_g08.derivative.T PARAM */),"vrNordic_g08.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* der(vrNordic_g08.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14723;
}
/*
equation index: 14724
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.x[1] = vrNordic_g08.leadLag.x_scaled[1] / vrNordic_g08.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3625]] /* vrNordic_g08.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* vrNordic_g08.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4699]] /* vrNordic_g08.leadLag.a_end PARAM */),"vrNordic_g08.leadLag.a_end");
  threadData->lastEquationSolved = 14724;
}
/*
equation index: 14725
type: SIMPLE_ASSIGN
goverNordic_g08.flowDivGateOpening.y = goverNordic_g08.waterFlow.y / goverNordic_g08.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2063]] /* goverNordic_g08.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* goverNordic_g08.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g08.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14725;
}
/*
equation index: 14726
type: SIMPLE_ASSIGN
goverNordic_g08.headWater.y = goverNordic_g08.flowDivGateOpening.y ^ goverNordic_g08.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14726};
  modelica_real tmp589;
  modelica_real tmp590;
  modelica_real tmp591;
  modelica_real tmp592;
  modelica_real tmp593;
  modelica_real tmp594;
  modelica_real tmp595;
  tmp589 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2063]] /* goverNordic_g08.flowDivGateOpening.y variable */);
  tmp590 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2524]] /* goverNordic_g08.headWater.N PARAM */);
  if(tmp589 < 0.0 && tmp590 != 0.0)
  {
    tmp592 = modf(tmp590, &tmp593);
    
    if(tmp592 > 0.5)
    {
      tmp592 -= 1.0;
      tmp593 += 1.0;
    }
    else if(tmp592 < -0.5)
    {
      tmp592 += 1.0;
      tmp593 -= 1.0;
    }
    
    if(fabs(tmp592) < 1e-10)
      tmp591 = pow(tmp589, tmp593);
    else
    {
      tmp595 = modf(1.0/tmp590, &tmp594);
      if(tmp595 > 0.5)
      {
        tmp595 -= 1.0;
        tmp594 += 1.0;
      }
      else if(tmp595 < -0.5)
      {
        tmp595 += 1.0;
        tmp594 -= 1.0;
      }
      if(fabs(tmp595) < 1e-10 && ((unsigned long)tmp594 & 1))
      {
        tmp591 = -pow(-tmp589, tmp592)*pow(tmp589, tmp593);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp589, tmp590);
      }
    }
  }
  else
  {
    tmp591 = pow(tmp589, tmp590);
  }
  if(isnan(tmp591) || isinf(tmp591))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp589, tmp590);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2068]] /* goverNordic_g08.headWater.y variable */) = tmp591;
  threadData->lastEquationSolved = 14726;
}
/*
equation index: 14727
type: SIMPLE_ASSIGN
g08.PmPu = goverNordic_g08.waterFlow.y * goverNordic_g08.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* g08.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* goverNordic_g08.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2068]] /* goverNordic_g08.headWater.y variable */));
  threadData->lastEquationSolved = 14727;
}
/*
equation index: 14728
type: SIMPLE_ASSIGN
goverNordic_g08.dH.y = goverNordic_g08.const2.k - goverNordic_g08.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2059]] /* goverNordic_g08.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2512]] /* goverNordic_g08.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2068]] /* goverNordic_g08.headWater.y variable */);
  threadData->lastEquationSolved = 14728;
}
/*
equation index: 14729
type: SIMPLE_ASSIGN
$DAEres74 = goverNordic_g08.waterFlow.k * goverNordic_g08.dH.y - der(goverNordic_g08.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14729};
  (data->simulationInfo->daeModeData->residualVars[74]) /* $DAEres74 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2539]] /* goverNordic_g08.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2059]] /* goverNordic_g08.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* der(goverNordic_g08.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14729;
}
/*
equation index: 14730
type: SIMPLE_ASSIGN
goverNordic_g08.dOmega.y = goverNordic_g08.const1.k - g08.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2060]] /* goverNordic_g08.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2511]] /* goverNordic_g08.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14730;
}
/*
equation index: 14731
type: SIMPLE_ASSIGN
goverNordic_g08.dP.y = goverNordic_g08.const.k - goverNordic_g08.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2062]] /* goverNordic_g08.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2510]] /* goverNordic_g08.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* goverNordic_g08.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14731;
}
/*
equation index: 14732
type: SIMPLE_ASSIGN
goverNordic_g08.dOmegaPlusDroop.y = goverNordic_g08.dOmegaPlusDroop.k1 * goverNordic_g08.dOmega.y + goverNordic_g08.dOmegaPlusDroop.k2 * goverNordic_g08.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2061]] /* goverNordic_g08.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2513]] /* goverNordic_g08.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2060]] /* goverNordic_g08.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* goverNordic_g08.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2062]] /* goverNordic_g08.dP.y variable */));
  threadData->lastEquationSolved = 14732;
}
/*
equation index: 14733
type: SIMPLE_ASSIGN
goverNordic_g08.govKi.y = goverNordic_g08.govKi.k * goverNordic_g08.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2065]] /* goverNordic_g08.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2520]] /* goverNordic_g08.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2061]] /* goverNordic_g08.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14733;
}
/*
equation index: 14734
type: SIMPLE_ASSIGN
$DAEres72 = goverNordic_g08.govInt.k * goverNordic_g08.govKi.y - der(goverNordic_g08.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14734};
  (data->simulationInfo->daeModeData->residualVars[72]) /* $DAEres72 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2518]] /* goverNordic_g08.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2065]] /* goverNordic_g08.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* der(goverNordic_g08.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14734;
}
/*
equation index: 14735
type: SIMPLE_ASSIGN
goverNordic_g08.govKp.y = goverNordic_g08.govKp.k * goverNordic_g08.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2066]] /* goverNordic_g08.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* goverNordic_g08.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2061]] /* goverNordic_g08.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14735;
}
/*
equation index: 14736
type: SIMPLE_ASSIGN
goverNordic_g08.govOut.y = goverNordic_g08.govOut.k1 * goverNordic_g08.govKp.y + goverNordic_g08.govOut.k2 * goverNordic_g08.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2067]] /* goverNordic_g08.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2522]] /* goverNordic_g08.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2066]] /* goverNordic_g08.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2523]] /* goverNordic_g08.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* goverNordic_g08.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14736;
}
/*
equation index: 14737
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.feedback.y = goverNordic_g08.govOut.y - goverNordic_g08.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2069]] /* goverNordic_g08.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2067]] /* goverNordic_g08.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14737;
}
/*
equation index: 14738
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.gain.y = goverNordic_g08.limRateLimFirstOrder.gain.k * goverNordic_g08.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2070]] /* goverNordic_g08.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2530]] /* goverNordic_g08.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2069]] /* goverNordic_g08.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14738;
}
/*
equation index: 14739
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g08.limRateLimFirstOrder.gain.y > goverNordic_g08.limRateLimFirstOrder.limiter.uMax then goverNordic_g08.limRateLimFirstOrder.limiter.uMax else if goverNordic_g08.limRateLimFirstOrder.gain.y < goverNordic_g08.limRateLimFirstOrder.limiter.uMin then goverNordic_g08.limRateLimFirstOrder.limiter.uMin else goverNordic_g08.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14739};
  modelica_boolean tmp596;
  modelica_boolean tmp597;
  modelica_boolean tmp598;
  modelica_real tmp599;
  tmp596 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2070]] /* goverNordic_g08.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp598 = (modelica_boolean)tmp596;
  if(tmp598)
  {
    tmp599 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp597 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2070]] /* goverNordic_g08.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2536]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp599 = (tmp597?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2536]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2070]] /* goverNordic_g08.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */) = tmp599;
  threadData->lastEquationSolved = 14739;
}
/*
equation index: 14740
type: SIMPLE_ASSIGN
$DAEres73 = (if goverNordic_g08.limRateLimFirstOrder.limIntegrator.y < goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g08.limRateLimFirstOrder.limIntegrator.k * goverNordic_g08.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g08.limRateLimFirstOrder.limIntegrator.y > goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g08.limRateLimFirstOrder.limIntegrator.k * goverNordic_g08.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g08.limRateLimFirstOrder.limIntegrator.k * goverNordic_g08.limRateLimFirstOrder.limiter.y) - der(goverNordic_g08.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14740};
  modelica_boolean tmp600;
  modelica_real tmp601;
  modelica_real tmp602;
  modelica_boolean tmp603;
  modelica_real tmp604;
  modelica_real tmp605;
  modelica_boolean tmp606;
  modelica_real tmp607;
  modelica_real tmp608;
  modelica_boolean tmp609;
  modelica_real tmp610;
  modelica_real tmp611;
  tmp601 = 1.0;
  tmp602 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp600, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp601, tmp602, 352, Less, LessZC);
  tmp604 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp605 = 0.0;
  relationhysteresis(data, &tmp603, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp604, tmp605, 353, Less, LessZC);
  tmp607 = 1.0;
  tmp608 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp606, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp607, tmp608, 354, Greater, GreaterZC);
  tmp610 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp611 = 0.0;
  relationhysteresis(data, &tmp609, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp610, tmp611, 355, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[73]) /* $DAEres73 DAE_RESIDUAL_VAR */ = (((tmp600 && tmp603) || (tmp606 && tmp609))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(goverNordic_g08.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14740;
}
/*
equation index: 14741
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.x[1] = vrNordic_g09.leadLag1.x_scaled[1] / vrNordic_g09.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3651]] /* vrNordic_g09.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* vrNordic_g09.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4791]] /* vrNordic_g09.leadLag1.a_end PARAM */),"vrNordic_g09.leadLag1.a_end");
  threadData->lastEquationSolved = 14741;
}
/*
equation index: 14742
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.x[1] = vrNordic_g09.leadLag2.x_scaled[1] / vrNordic_g09.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3653]] /* vrNordic_g09.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* vrNordic_g09.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4804]] /* vrNordic_g09.leadLag2.a_end PARAM */),"vrNordic_g09.leadLag2.a_end");
  threadData->lastEquationSolved = 14742;
}
/*
equation index: 14743
type: SIMPLE_ASSIGN
vrNordic_g09.greaterEqualThreshold.y = vrNordic_g09.timer.y >= vrNordic_g09.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14743};
  modelica_boolean tmp612;
  modelica_real tmp613;
  modelica_real tmp614;
  tmp613 = 1.0;
  tmp614 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4772]] /* vrNordic_g09.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp612, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4772]] /* vrNordic_g09.greaterEqualThreshold.threshold PARAM */), tmp613, tmp614, 357, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1039]] /* vrNordic_g09.greaterEqualThreshold.y DISCRETE */) = tmp612;
  threadData->lastEquationSolved = 14743;
}
/*
equation index: 14744
type: SIMPLE_ASSIGN
vrNordic_g09.dOmega.y = g09.omegaPu - vrNordic_g09.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3642]] /* vrNordic_g09.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4763]] /* vrNordic_g09.const.k PARAM */);
  threadData->lastEquationSolved = 14744;
}
/*
equation index: 14745
type: SIMPLE_ASSIGN
vrNordic_g09.derivative.y = if vrNordic_g09.derivative.zeroGain then 0.0 else vrNordic_g09.derivative.k / vrNordic_g09.derivative.T * (vrNordic_g09.dOmega.y - vrNordic_g09.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3644]] /* vrNordic_g09.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[949]] /* vrNordic_g09.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4767]] /* vrNordic_g09.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4766]] /* vrNordic_g09.derivative.T PARAM */),"vrNordic_g09.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3642]] /* vrNordic_g09.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* vrNordic_g09.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14745;
}
/*
equation index: 14746
type: SIMPLE_ASSIGN
$DAEres69 = vrNordic_g09.leadLag1.a_end * vrNordic_g09.derivative.y + (-vrNordic_g09.leadLag1.a[2]) * vrNordic_g09.leadLag1.x_scaled[1] - der(vrNordic_g09.leadLag1.x_scaled[1]) * vrNordic_g09.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14746};
  (data->simulationInfo->daeModeData->residualVars[69]) /* $DAEres69 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4791]] /* vrNordic_g09.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3644]] /* vrNordic_g09.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4790]] /* vrNordic_g09.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* vrNordic_g09.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* der(vrNordic_g09.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4789]] /* vrNordic_g09.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14746;
}
/*
equation index: 14747
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.y = (vrNordic_g09.leadLag1.bb[2] - vrNordic_g09.leadLag1.d * vrNordic_g09.leadLag1.a[2]) * vrNordic_g09.leadLag1.x[1] + vrNordic_g09.leadLag1.d * vrNordic_g09.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3652]] /* vrNordic_g09.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4795]] /* vrNordic_g09.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4796]] /* vrNordic_g09.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4790]] /* vrNordic_g09.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3651]] /* vrNordic_g09.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4796]] /* vrNordic_g09.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3644]] /* vrNordic_g09.derivative.y variable */));
  threadData->lastEquationSolved = 14747;
}
/*
equation index: 14748
type: SIMPLE_ASSIGN
$DAEres70 = vrNordic_g09.leadLag2.a_end * vrNordic_g09.leadLag1.y + (-vrNordic_g09.leadLag2.a[2]) * vrNordic_g09.leadLag2.x_scaled[1] - der(vrNordic_g09.leadLag2.x_scaled[1]) * vrNordic_g09.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14748};
  (data->simulationInfo->daeModeData->residualVars[70]) /* $DAEres70 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4804]] /* vrNordic_g09.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3652]] /* vrNordic_g09.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4803]] /* vrNordic_g09.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* vrNordic_g09.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* der(vrNordic_g09.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4802]] /* vrNordic_g09.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14748;
}
/*
equation index: 14749
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.y = (vrNordic_g09.leadLag2.bb[2] - vrNordic_g09.leadLag2.d * vrNordic_g09.leadLag2.a[2]) * vrNordic_g09.leadLag2.x[1] + vrNordic_g09.leadLag2.d * vrNordic_g09.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3654]] /* vrNordic_g09.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4808]] /* vrNordic_g09.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4809]] /* vrNordic_g09.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4803]] /* vrNordic_g09.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3653]] /* vrNordic_g09.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4809]] /* vrNordic_g09.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3652]] /* vrNordic_g09.leadLag1.y variable */));
  threadData->lastEquationSolved = 14749;
}
/*
equation index: 14750
type: SIMPLE_ASSIGN
vrNordic_g09.limiter.y = smooth(0, if vrNordic_g09.leadLag2.y > vrNordic_g09.limiter.uMax then vrNordic_g09.limiter.uMax else if vrNordic_g09.leadLag2.y < vrNordic_g09.limiter.uMin then vrNordic_g09.limiter.uMin else vrNordic_g09.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14750};
  modelica_boolean tmp615;
  modelica_boolean tmp616;
  modelica_boolean tmp617;
  modelica_real tmp618;
  tmp615 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3654]] /* vrNordic_g09.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4817]] /* vrNordic_g09.limiter.uMax PARAM */));
  tmp617 = (modelica_boolean)tmp615;
  if(tmp617)
  {
    tmp618 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4817]] /* vrNordic_g09.limiter.uMax PARAM */);
  }
  else
  {
    tmp616 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3654]] /* vrNordic_g09.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4818]] /* vrNordic_g09.limiter.uMin PARAM */));
    tmp618 = (tmp616?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4818]] /* vrNordic_g09.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3654]] /* vrNordic_g09.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3657]] /* vrNordic_g09.limiter.y variable */) = tmp618;
  threadData->lastEquationSolved = 14750;
}
/*
equation index: 14751
type: SIMPLE_ASSIGN
$DAEres71 = (if vrNordic_g09.derivative.zeroGain then 0.0 else (vrNordic_g09.dOmega.y - vrNordic_g09.derivative.x) / vrNordic_g09.derivative.T) - der(vrNordic_g09.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14751};
  (data->simulationInfo->daeModeData->residualVars[71]) /* $DAEres71 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[949]] /* vrNordic_g09.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3642]] /* vrNordic_g09.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* vrNordic_g09.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4766]] /* vrNordic_g09.derivative.T PARAM */),"vrNordic_g09.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[568]] /* der(vrNordic_g09.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14751;
}
/*
equation index: 14752
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.x[1] = vrNordic_g09.leadLag.x_scaled[1] / vrNordic_g09.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3649]] /* vrNordic_g09.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* vrNordic_g09.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4778]] /* vrNordic_g09.leadLag.a_end PARAM */),"vrNordic_g09.leadLag.a_end");
  threadData->lastEquationSolved = 14752;
}
/*
equation index: 14753
type: SIMPLE_ASSIGN
goverNordic_g09.flowDivGateOpening.y = goverNordic_g09.waterFlow.y / goverNordic_g09.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2081]] /* goverNordic_g09.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* goverNordic_g09.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g09.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14753;
}
/*
equation index: 14754
type: SIMPLE_ASSIGN
goverNordic_g09.headWater.y = goverNordic_g09.flowDivGateOpening.y ^ goverNordic_g09.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14754};
  modelica_real tmp619;
  modelica_real tmp620;
  modelica_real tmp621;
  modelica_real tmp622;
  modelica_real tmp623;
  modelica_real tmp624;
  modelica_real tmp625;
  tmp619 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2081]] /* goverNordic_g09.flowDivGateOpening.y variable */);
  tmp620 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2560]] /* goverNordic_g09.headWater.N PARAM */);
  if(tmp619 < 0.0 && tmp620 != 0.0)
  {
    tmp622 = modf(tmp620, &tmp623);
    
    if(tmp622 > 0.5)
    {
      tmp622 -= 1.0;
      tmp623 += 1.0;
    }
    else if(tmp622 < -0.5)
    {
      tmp622 += 1.0;
      tmp623 -= 1.0;
    }
    
    if(fabs(tmp622) < 1e-10)
      tmp621 = pow(tmp619, tmp623);
    else
    {
      tmp625 = modf(1.0/tmp620, &tmp624);
      if(tmp625 > 0.5)
      {
        tmp625 -= 1.0;
        tmp624 += 1.0;
      }
      else if(tmp625 < -0.5)
      {
        tmp625 += 1.0;
        tmp624 -= 1.0;
      }
      if(fabs(tmp625) < 1e-10 && ((unsigned long)tmp624 & 1))
      {
        tmp621 = -pow(-tmp619, tmp622)*pow(tmp619, tmp623);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp619, tmp620);
      }
    }
  }
  else
  {
    tmp621 = pow(tmp619, tmp620);
  }
  if(isnan(tmp621) || isinf(tmp621))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp619, tmp620);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2086]] /* goverNordic_g09.headWater.y variable */) = tmp621;
  threadData->lastEquationSolved = 14754;
}
/*
equation index: 14755
type: SIMPLE_ASSIGN
g09.PmPu = goverNordic_g09.waterFlow.y * goverNordic_g09.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1387]] /* g09.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* goverNordic_g09.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2086]] /* goverNordic_g09.headWater.y variable */));
  threadData->lastEquationSolved = 14755;
}
/*
equation index: 14756
type: SIMPLE_ASSIGN
goverNordic_g09.dH.y = goverNordic_g09.const2.k - goverNordic_g09.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2077]] /* goverNordic_g09.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2548]] /* goverNordic_g09.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2086]] /* goverNordic_g09.headWater.y variable */);
  threadData->lastEquationSolved = 14756;
}
/*
equation index: 14757
type: SIMPLE_ASSIGN
$DAEres68 = goverNordic_g09.waterFlow.k * goverNordic_g09.dH.y - der(goverNordic_g09.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14757};
  (data->simulationInfo->daeModeData->residualVars[68]) /* $DAEres68 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2575]] /* goverNordic_g09.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2077]] /* goverNordic_g09.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* der(goverNordic_g09.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14757;
}
/*
equation index: 14758
type: SIMPLE_ASSIGN
goverNordic_g09.dOmega.y = goverNordic_g09.const1.k - g09.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2078]] /* goverNordic_g09.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2547]] /* goverNordic_g09.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14758;
}
/*
equation index: 14759
type: SIMPLE_ASSIGN
goverNordic_g09.dP.y = goverNordic_g09.const.k - goverNordic_g09.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2080]] /* goverNordic_g09.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2546]] /* goverNordic_g09.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* goverNordic_g09.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14759;
}
/*
equation index: 14760
type: SIMPLE_ASSIGN
goverNordic_g09.dOmegaPlusDroop.y = goverNordic_g09.dOmegaPlusDroop.k1 * goverNordic_g09.dOmega.y + goverNordic_g09.dOmegaPlusDroop.k2 * goverNordic_g09.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2079]] /* goverNordic_g09.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2549]] /* goverNordic_g09.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2078]] /* goverNordic_g09.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2550]] /* goverNordic_g09.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2080]] /* goverNordic_g09.dP.y variable */));
  threadData->lastEquationSolved = 14760;
}
/*
equation index: 14761
type: SIMPLE_ASSIGN
goverNordic_g09.govKi.y = goverNordic_g09.govKi.k * goverNordic_g09.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2083]] /* goverNordic_g09.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2556]] /* goverNordic_g09.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2079]] /* goverNordic_g09.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14761;
}
/*
equation index: 14762
type: SIMPLE_ASSIGN
$DAEres66 = goverNordic_g09.govInt.k * goverNordic_g09.govKi.y - der(goverNordic_g09.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14762};
  (data->simulationInfo->daeModeData->residualVars[66]) /* $DAEres66 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2554]] /* goverNordic_g09.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2083]] /* goverNordic_g09.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* der(goverNordic_g09.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14762;
}
/*
equation index: 14763
type: SIMPLE_ASSIGN
goverNordic_g09.govKp.y = goverNordic_g09.govKp.k * goverNordic_g09.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2084]] /* goverNordic_g09.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2557]] /* goverNordic_g09.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2079]] /* goverNordic_g09.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14763;
}
/*
equation index: 14764
type: SIMPLE_ASSIGN
goverNordic_g09.govOut.y = goverNordic_g09.govOut.k1 * goverNordic_g09.govKp.y + goverNordic_g09.govOut.k2 * goverNordic_g09.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2085]] /* goverNordic_g09.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2558]] /* goverNordic_g09.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2084]] /* goverNordic_g09.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2559]] /* goverNordic_g09.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* goverNordic_g09.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14764;
}
/*
equation index: 14765
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.feedback.y = goverNordic_g09.govOut.y - goverNordic_g09.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2087]] /* goverNordic_g09.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2085]] /* goverNordic_g09.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14765;
}
/*
equation index: 14766
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.gain.y = goverNordic_g09.limRateLimFirstOrder.gain.k * goverNordic_g09.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2088]] /* goverNordic_g09.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2566]] /* goverNordic_g09.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2087]] /* goverNordic_g09.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14766;
}
/*
equation index: 14767
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g09.limRateLimFirstOrder.gain.y > goverNordic_g09.limRateLimFirstOrder.limiter.uMax then goverNordic_g09.limRateLimFirstOrder.limiter.uMax else if goverNordic_g09.limRateLimFirstOrder.gain.y < goverNordic_g09.limRateLimFirstOrder.limiter.uMin then goverNordic_g09.limRateLimFirstOrder.limiter.uMin else goverNordic_g09.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14767};
  modelica_boolean tmp626;
  modelica_boolean tmp627;
  modelica_boolean tmp628;
  modelica_real tmp629;
  tmp626 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2088]] /* goverNordic_g09.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp628 = (modelica_boolean)tmp626;
  if(tmp628)
  {
    tmp629 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp627 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2088]] /* goverNordic_g09.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp629 = (tmp627?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2088]] /* goverNordic_g09.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */) = tmp629;
  threadData->lastEquationSolved = 14767;
}
/*
equation index: 14768
type: SIMPLE_ASSIGN
$DAEres67 = (if goverNordic_g09.limRateLimFirstOrder.limIntegrator.y < goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g09.limRateLimFirstOrder.limIntegrator.k * goverNordic_g09.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g09.limRateLimFirstOrder.limIntegrator.y > goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g09.limRateLimFirstOrder.limIntegrator.k * goverNordic_g09.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g09.limRateLimFirstOrder.limIntegrator.k * goverNordic_g09.limRateLimFirstOrder.limiter.y) - der(goverNordic_g09.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14768};
  modelica_boolean tmp630;
  modelica_real tmp631;
  modelica_real tmp632;
  modelica_boolean tmp633;
  modelica_real tmp634;
  modelica_real tmp635;
  modelica_boolean tmp636;
  modelica_real tmp637;
  modelica_real tmp638;
  modelica_boolean tmp639;
  modelica_real tmp640;
  modelica_real tmp641;
  tmp631 = 1.0;
  tmp632 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp630, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp631, tmp632, 368, Less, LessZC);
  tmp634 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp635 = 0.0;
  relationhysteresis(data, &tmp633, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp634, tmp635, 369, Less, LessZC);
  tmp637 = 1.0;
  tmp638 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp636, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp637, tmp638, 370, Greater, GreaterZC);
  tmp640 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp641 = 0.0;
  relationhysteresis(data, &tmp639, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp640, tmp641, 371, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[67]) /* $DAEres67 DAE_RESIDUAL_VAR */ = (((tmp630 && tmp633) || (tmp636 && tmp639))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* der(goverNordic_g09.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14768;
}
/*
equation index: 14769
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.x[1] = vrNordic_g10.leadLag1.x_scaled[1] / vrNordic_g10.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3675]] /* vrNordic_g10.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* vrNordic_g10.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4870]] /* vrNordic_g10.leadLag1.a_end PARAM */),"vrNordic_g10.leadLag1.a_end");
  threadData->lastEquationSolved = 14769;
}
/*
equation index: 14770
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.x[1] = vrNordic_g10.leadLag2.x_scaled[1] / vrNordic_g10.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3677]] /* vrNordic_g10.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* vrNordic_g10.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4883]] /* vrNordic_g10.leadLag2.a_end PARAM */),"vrNordic_g10.leadLag2.a_end");
  threadData->lastEquationSolved = 14770;
}
/*
equation index: 14771
type: SIMPLE_ASSIGN
vrNordic_g10.greaterEqualThreshold.y = vrNordic_g10.timer.y >= vrNordic_g10.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14771};
  modelica_boolean tmp642;
  modelica_real tmp643;
  modelica_real tmp644;
  tmp643 = 1.0;
  tmp644 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4851]] /* vrNordic_g10.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp642, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4851]] /* vrNordic_g10.greaterEqualThreshold.threshold PARAM */), tmp643, tmp644, 373, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1042]] /* vrNordic_g10.greaterEqualThreshold.y DISCRETE */) = tmp642;
  threadData->lastEquationSolved = 14771;
}
/*
equation index: 14772
type: SIMPLE_ASSIGN
vrNordic_g10.dOmega.y = g10.omegaPu - vrNordic_g10.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3666]] /* vrNordic_g10.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4842]] /* vrNordic_g10.const.k PARAM */);
  threadData->lastEquationSolved = 14772;
}
/*
equation index: 14773
type: SIMPLE_ASSIGN
vrNordic_g10.derivative.y = if vrNordic_g10.derivative.zeroGain then 0.0 else vrNordic_g10.derivative.k / vrNordic_g10.derivative.T * (vrNordic_g10.dOmega.y - vrNordic_g10.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3668]] /* vrNordic_g10.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[960]] /* vrNordic_g10.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4846]] /* vrNordic_g10.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4845]] /* vrNordic_g10.derivative.T PARAM */),"vrNordic_g10.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3666]] /* vrNordic_g10.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* vrNordic_g10.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14773;
}
/*
equation index: 14774
type: SIMPLE_ASSIGN
$DAEres63 = vrNordic_g10.leadLag1.a_end * vrNordic_g10.derivative.y + (-vrNordic_g10.leadLag1.a[2]) * vrNordic_g10.leadLag1.x_scaled[1] - der(vrNordic_g10.leadLag1.x_scaled[1]) * vrNordic_g10.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14774};
  (data->simulationInfo->daeModeData->residualVars[63]) /* $DAEres63 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4870]] /* vrNordic_g10.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3668]] /* vrNordic_g10.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4869]] /* vrNordic_g10.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* vrNordic_g10.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* der(vrNordic_g10.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4868]] /* vrNordic_g10.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14774;
}
/*
equation index: 14775
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.y = (vrNordic_g10.leadLag1.bb[2] - vrNordic_g10.leadLag1.d * vrNordic_g10.leadLag1.a[2]) * vrNordic_g10.leadLag1.x[1] + vrNordic_g10.leadLag1.d * vrNordic_g10.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3676]] /* vrNordic_g10.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4874]] /* vrNordic_g10.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4875]] /* vrNordic_g10.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4869]] /* vrNordic_g10.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3675]] /* vrNordic_g10.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4875]] /* vrNordic_g10.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3668]] /* vrNordic_g10.derivative.y variable */));
  threadData->lastEquationSolved = 14775;
}
/*
equation index: 14776
type: SIMPLE_ASSIGN
$DAEres64 = vrNordic_g10.leadLag2.a_end * vrNordic_g10.leadLag1.y + (-vrNordic_g10.leadLag2.a[2]) * vrNordic_g10.leadLag2.x_scaled[1] - der(vrNordic_g10.leadLag2.x_scaled[1]) * vrNordic_g10.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14776};
  (data->simulationInfo->daeModeData->residualVars[64]) /* $DAEres64 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4883]] /* vrNordic_g10.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3676]] /* vrNordic_g10.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4882]] /* vrNordic_g10.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* vrNordic_g10.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[577]] /* der(vrNordic_g10.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4881]] /* vrNordic_g10.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14776;
}
/*
equation index: 14777
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.y = (vrNordic_g10.leadLag2.bb[2] - vrNordic_g10.leadLag2.d * vrNordic_g10.leadLag2.a[2]) * vrNordic_g10.leadLag2.x[1] + vrNordic_g10.leadLag2.d * vrNordic_g10.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3678]] /* vrNordic_g10.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4887]] /* vrNordic_g10.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4888]] /* vrNordic_g10.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4882]] /* vrNordic_g10.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3677]] /* vrNordic_g10.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4888]] /* vrNordic_g10.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3676]] /* vrNordic_g10.leadLag1.y variable */));
  threadData->lastEquationSolved = 14777;
}
/*
equation index: 14778
type: SIMPLE_ASSIGN
vrNordic_g10.limiter.y = smooth(0, if vrNordic_g10.leadLag2.y > vrNordic_g10.limiter.uMax then vrNordic_g10.limiter.uMax else if vrNordic_g10.leadLag2.y < vrNordic_g10.limiter.uMin then vrNordic_g10.limiter.uMin else vrNordic_g10.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14778};
  modelica_boolean tmp645;
  modelica_boolean tmp646;
  modelica_boolean tmp647;
  modelica_real tmp648;
  tmp645 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3678]] /* vrNordic_g10.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4896]] /* vrNordic_g10.limiter.uMax PARAM */));
  tmp647 = (modelica_boolean)tmp645;
  if(tmp647)
  {
    tmp648 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4896]] /* vrNordic_g10.limiter.uMax PARAM */);
  }
  else
  {
    tmp646 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3678]] /* vrNordic_g10.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4897]] /* vrNordic_g10.limiter.uMin PARAM */));
    tmp648 = (tmp646?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4897]] /* vrNordic_g10.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3678]] /* vrNordic_g10.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3681]] /* vrNordic_g10.limiter.y variable */) = tmp648;
  threadData->lastEquationSolved = 14778;
}
/*
equation index: 14779
type: SIMPLE_ASSIGN
$DAEres65 = (if vrNordic_g10.derivative.zeroGain then 0.0 else (vrNordic_g10.dOmega.y - vrNordic_g10.derivative.x) / vrNordic_g10.derivative.T) - der(vrNordic_g10.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14779};
  (data->simulationInfo->daeModeData->residualVars[65]) /* $DAEres65 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[960]] /* vrNordic_g10.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3666]] /* vrNordic_g10.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* vrNordic_g10.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4845]] /* vrNordic_g10.derivative.T PARAM */),"vrNordic_g10.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* der(vrNordic_g10.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14779;
}
/*
equation index: 14780
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.x[1] = vrNordic_g10.leadLag.x_scaled[1] / vrNordic_g10.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14780};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3673]] /* vrNordic_g10.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* vrNordic_g10.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4857]] /* vrNordic_g10.leadLag.a_end PARAM */),"vrNordic_g10.leadLag.a_end");
  threadData->lastEquationSolved = 14780;
}
/*
equation index: 14781
type: SIMPLE_ASSIGN
goverNordic_g10.flowDivGateOpening.y = goverNordic_g10.waterFlow.y / goverNordic_g10.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2099]] /* goverNordic_g10.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* goverNordic_g10.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g10.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14781;
}
/*
equation index: 14782
type: SIMPLE_ASSIGN
goverNordic_g10.headWater.y = goverNordic_g10.flowDivGateOpening.y ^ goverNordic_g10.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14782};
  modelica_real tmp649;
  modelica_real tmp650;
  modelica_real tmp651;
  modelica_real tmp652;
  modelica_real tmp653;
  modelica_real tmp654;
  modelica_real tmp655;
  tmp649 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2099]] /* goverNordic_g10.flowDivGateOpening.y variable */);
  tmp650 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2596]] /* goverNordic_g10.headWater.N PARAM */);
  if(tmp649 < 0.0 && tmp650 != 0.0)
  {
    tmp652 = modf(tmp650, &tmp653);
    
    if(tmp652 > 0.5)
    {
      tmp652 -= 1.0;
      tmp653 += 1.0;
    }
    else if(tmp652 < -0.5)
    {
      tmp652 += 1.0;
      tmp653 -= 1.0;
    }
    
    if(fabs(tmp652) < 1e-10)
      tmp651 = pow(tmp649, tmp653);
    else
    {
      tmp655 = modf(1.0/tmp650, &tmp654);
      if(tmp655 > 0.5)
      {
        tmp655 -= 1.0;
        tmp654 += 1.0;
      }
      else if(tmp655 < -0.5)
      {
        tmp655 += 1.0;
        tmp654 -= 1.0;
      }
      if(fabs(tmp655) < 1e-10 && ((unsigned long)tmp654 & 1))
      {
        tmp651 = -pow(-tmp649, tmp652)*pow(tmp649, tmp653);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp649, tmp650);
      }
    }
  }
  else
  {
    tmp651 = pow(tmp649, tmp650);
  }
  if(isnan(tmp651) || isinf(tmp651))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp649, tmp650);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2104]] /* goverNordic_g10.headWater.y variable */) = tmp651;
  threadData->lastEquationSolved = 14782;
}
/*
equation index: 14783
type: SIMPLE_ASSIGN
g10.PmPu = goverNordic_g10.waterFlow.y * goverNordic_g10.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14783};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1433]] /* g10.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* goverNordic_g10.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2104]] /* goverNordic_g10.headWater.y variable */));
  threadData->lastEquationSolved = 14783;
}
/*
equation index: 14784
type: SIMPLE_ASSIGN
goverNordic_g10.dH.y = goverNordic_g10.const2.k - goverNordic_g10.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14784};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2095]] /* goverNordic_g10.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2584]] /* goverNordic_g10.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2104]] /* goverNordic_g10.headWater.y variable */);
  threadData->lastEquationSolved = 14784;
}
/*
equation index: 14785
type: SIMPLE_ASSIGN
$DAEres62 = goverNordic_g10.waterFlow.k * goverNordic_g10.dH.y - der(goverNordic_g10.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14785};
  (data->simulationInfo->daeModeData->residualVars[62]) /* $DAEres62 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2611]] /* goverNordic_g10.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2095]] /* goverNordic_g10.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* der(goverNordic_g10.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14785;
}
/*
equation index: 14786
type: SIMPLE_ASSIGN
goverNordic_g10.dOmega.y = goverNordic_g10.const1.k - g10.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14786};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2096]] /* goverNordic_g10.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2583]] /* goverNordic_g10.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14786;
}
/*
equation index: 14787
type: SIMPLE_ASSIGN
goverNordic_g10.dP.y = goverNordic_g10.const.k - goverNordic_g10.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14787};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2098]] /* goverNordic_g10.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* goverNordic_g10.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* goverNordic_g10.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14787;
}
/*
equation index: 14788
type: SIMPLE_ASSIGN
goverNordic_g10.dOmegaPlusDroop.y = goverNordic_g10.dOmegaPlusDroop.k1 * goverNordic_g10.dOmega.y + goverNordic_g10.dOmegaPlusDroop.k2 * goverNordic_g10.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14788};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2097]] /* goverNordic_g10.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2585]] /* goverNordic_g10.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2096]] /* goverNordic_g10.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2586]] /* goverNordic_g10.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2098]] /* goverNordic_g10.dP.y variable */));
  threadData->lastEquationSolved = 14788;
}
/*
equation index: 14789
type: SIMPLE_ASSIGN
goverNordic_g10.govKi.y = goverNordic_g10.govKi.k * goverNordic_g10.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2101]] /* goverNordic_g10.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2592]] /* goverNordic_g10.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2097]] /* goverNordic_g10.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14789;
}
/*
equation index: 14790
type: SIMPLE_ASSIGN
$DAEres60 = goverNordic_g10.govInt.k * goverNordic_g10.govKi.y - der(goverNordic_g10.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14790};
  (data->simulationInfo->daeModeData->residualVars[60]) /* $DAEres60 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2590]] /* goverNordic_g10.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2101]] /* goverNordic_g10.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* der(goverNordic_g10.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14790;
}
/*
equation index: 14791
type: SIMPLE_ASSIGN
goverNordic_g10.govKp.y = goverNordic_g10.govKp.k * goverNordic_g10.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2102]] /* goverNordic_g10.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2593]] /* goverNordic_g10.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2097]] /* goverNordic_g10.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14791;
}
/*
equation index: 14792
type: SIMPLE_ASSIGN
goverNordic_g10.govOut.y = goverNordic_g10.govOut.k1 * goverNordic_g10.govKp.y + goverNordic_g10.govOut.k2 * goverNordic_g10.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14792};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2103]] /* goverNordic_g10.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2594]] /* goverNordic_g10.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2102]] /* goverNordic_g10.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2595]] /* goverNordic_g10.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* goverNordic_g10.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14792;
}
/*
equation index: 14793
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.feedback.y = goverNordic_g10.govOut.y - goverNordic_g10.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2105]] /* goverNordic_g10.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2103]] /* goverNordic_g10.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14793;
}
/*
equation index: 14794
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.gain.y = goverNordic_g10.limRateLimFirstOrder.gain.k * goverNordic_g10.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2106]] /* goverNordic_g10.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2602]] /* goverNordic_g10.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2105]] /* goverNordic_g10.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14794;
}
/*
equation index: 14795
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g10.limRateLimFirstOrder.gain.y > goverNordic_g10.limRateLimFirstOrder.limiter.uMax then goverNordic_g10.limRateLimFirstOrder.limiter.uMax else if goverNordic_g10.limRateLimFirstOrder.gain.y < goverNordic_g10.limRateLimFirstOrder.limiter.uMin then goverNordic_g10.limRateLimFirstOrder.limiter.uMin else goverNordic_g10.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14795};
  modelica_boolean tmp656;
  modelica_boolean tmp657;
  modelica_boolean tmp658;
  modelica_real tmp659;
  tmp656 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2106]] /* goverNordic_g10.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2607]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp658 = (modelica_boolean)tmp656;
  if(tmp658)
  {
    tmp659 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2607]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp657 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2106]] /* goverNordic_g10.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2608]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp659 = (tmp657?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2608]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2106]] /* goverNordic_g10.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */) = tmp659;
  threadData->lastEquationSolved = 14795;
}
/*
equation index: 14796
type: SIMPLE_ASSIGN
$DAEres61 = (if goverNordic_g10.limRateLimFirstOrder.limIntegrator.y < goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g10.limRateLimFirstOrder.limIntegrator.k * goverNordic_g10.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g10.limRateLimFirstOrder.limIntegrator.y > goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g10.limRateLimFirstOrder.limIntegrator.k * goverNordic_g10.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g10.limRateLimFirstOrder.limIntegrator.k * goverNordic_g10.limRateLimFirstOrder.limiter.y) - der(goverNordic_g10.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14796};
  modelica_boolean tmp660;
  modelica_real tmp661;
  modelica_real tmp662;
  modelica_boolean tmp663;
  modelica_real tmp664;
  modelica_real tmp665;
  modelica_boolean tmp666;
  modelica_real tmp667;
  modelica_real tmp668;
  modelica_boolean tmp669;
  modelica_real tmp670;
  modelica_real tmp671;
  tmp661 = 1.0;
  tmp662 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp660, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp661, tmp662, 384, Less, LessZC);
  tmp664 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp665 = 0.0;
  relationhysteresis(data, &tmp663, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp664, tmp665, 385, Less, LessZC);
  tmp667 = 1.0;
  tmp668 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2604]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp666, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2604]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp667, tmp668, 386, Greater, GreaterZC);
  tmp670 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp671 = 0.0;
  relationhysteresis(data, &tmp669, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp670, tmp671, 387, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[61]) /* $DAEres61 DAE_RESIDUAL_VAR */ = (((tmp660 && tmp663) || (tmp666 && tmp669))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* der(goverNordic_g10.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14796;
}
/*
equation index: 14797
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.x[1] = vrNordic_g11.leadLag1.x_scaled[1] / vrNordic_g11.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3699]] /* vrNordic_g11.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* vrNordic_g11.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4949]] /* vrNordic_g11.leadLag1.a_end PARAM */),"vrNordic_g11.leadLag1.a_end");
  threadData->lastEquationSolved = 14797;
}
/*
equation index: 14798
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.x[1] = vrNordic_g11.leadLag2.x_scaled[1] / vrNordic_g11.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3701]] /* vrNordic_g11.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* vrNordic_g11.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4962]] /* vrNordic_g11.leadLag2.a_end PARAM */),"vrNordic_g11.leadLag2.a_end");
  threadData->lastEquationSolved = 14798;
}
/*
equation index: 14799
type: SIMPLE_ASSIGN
vrNordic_g11.greaterEqualThreshold.y = vrNordic_g11.timer.y >= vrNordic_g11.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14799};
  modelica_boolean tmp672;
  modelica_real tmp673;
  modelica_real tmp674;
  tmp673 = 1.0;
  tmp674 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4930]] /* vrNordic_g11.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp672, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4930]] /* vrNordic_g11.greaterEqualThreshold.threshold PARAM */), tmp673, tmp674, 389, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1045]] /* vrNordic_g11.greaterEqualThreshold.y DISCRETE */) = tmp672;
  threadData->lastEquationSolved = 14799;
}
/*
equation index: 14800
type: SIMPLE_ASSIGN
vrNordic_g11.dOmega.y = g11.omegaPu - vrNordic_g11.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3690]] /* vrNordic_g11.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4921]] /* vrNordic_g11.const.k PARAM */);
  threadData->lastEquationSolved = 14800;
}
/*
equation index: 14801
type: SIMPLE_ASSIGN
vrNordic_g11.derivative.y = if vrNordic_g11.derivative.zeroGain then 0.0 else vrNordic_g11.derivative.k / vrNordic_g11.derivative.T * (vrNordic_g11.dOmega.y - vrNordic_g11.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3692]] /* vrNordic_g11.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[971]] /* vrNordic_g11.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4925]] /* vrNordic_g11.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4924]] /* vrNordic_g11.derivative.T PARAM */),"vrNordic_g11.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3690]] /* vrNordic_g11.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* vrNordic_g11.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14801;
}
/*
equation index: 14802
type: SIMPLE_ASSIGN
$DAEres57 = vrNordic_g11.leadLag1.a_end * vrNordic_g11.derivative.y + (-vrNordic_g11.leadLag1.a[2]) * vrNordic_g11.leadLag1.x_scaled[1] - der(vrNordic_g11.leadLag1.x_scaled[1]) * vrNordic_g11.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14802};
  (data->simulationInfo->daeModeData->residualVars[57]) /* $DAEres57 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4949]] /* vrNordic_g11.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3692]] /* vrNordic_g11.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4948]] /* vrNordic_g11.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* vrNordic_g11.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[582]] /* der(vrNordic_g11.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4947]] /* vrNordic_g11.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14802;
}
/*
equation index: 14803
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.y = (vrNordic_g11.leadLag1.bb[2] - vrNordic_g11.leadLag1.d * vrNordic_g11.leadLag1.a[2]) * vrNordic_g11.leadLag1.x[1] + vrNordic_g11.leadLag1.d * vrNordic_g11.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14803};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3700]] /* vrNordic_g11.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4953]] /* vrNordic_g11.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4954]] /* vrNordic_g11.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4948]] /* vrNordic_g11.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3699]] /* vrNordic_g11.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4954]] /* vrNordic_g11.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3692]] /* vrNordic_g11.derivative.y variable */));
  threadData->lastEquationSolved = 14803;
}
/*
equation index: 14804
type: SIMPLE_ASSIGN
$DAEres58 = vrNordic_g11.leadLag2.a_end * vrNordic_g11.leadLag1.y + (-vrNordic_g11.leadLag2.a[2]) * vrNordic_g11.leadLag2.x_scaled[1] - der(vrNordic_g11.leadLag2.x_scaled[1]) * vrNordic_g11.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14804};
  (data->simulationInfo->daeModeData->residualVars[58]) /* $DAEres58 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4962]] /* vrNordic_g11.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3700]] /* vrNordic_g11.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4961]] /* vrNordic_g11.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* vrNordic_g11.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* der(vrNordic_g11.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4960]] /* vrNordic_g11.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14804;
}
/*
equation index: 14805
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.y = (vrNordic_g11.leadLag2.bb[2] - vrNordic_g11.leadLag2.d * vrNordic_g11.leadLag2.a[2]) * vrNordic_g11.leadLag2.x[1] + vrNordic_g11.leadLag2.d * vrNordic_g11.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3702]] /* vrNordic_g11.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4966]] /* vrNordic_g11.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4967]] /* vrNordic_g11.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4961]] /* vrNordic_g11.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3701]] /* vrNordic_g11.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4967]] /* vrNordic_g11.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3700]] /* vrNordic_g11.leadLag1.y variable */));
  threadData->lastEquationSolved = 14805;
}
/*
equation index: 14806
type: SIMPLE_ASSIGN
vrNordic_g11.limiter.y = smooth(0, if vrNordic_g11.leadLag2.y > vrNordic_g11.limiter.uMax then vrNordic_g11.limiter.uMax else if vrNordic_g11.leadLag2.y < vrNordic_g11.limiter.uMin then vrNordic_g11.limiter.uMin else vrNordic_g11.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14806};
  modelica_boolean tmp675;
  modelica_boolean tmp676;
  modelica_boolean tmp677;
  modelica_real tmp678;
  tmp675 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3702]] /* vrNordic_g11.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4975]] /* vrNordic_g11.limiter.uMax PARAM */));
  tmp677 = (modelica_boolean)tmp675;
  if(tmp677)
  {
    tmp678 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4975]] /* vrNordic_g11.limiter.uMax PARAM */);
  }
  else
  {
    tmp676 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3702]] /* vrNordic_g11.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4976]] /* vrNordic_g11.limiter.uMin PARAM */));
    tmp678 = (tmp676?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4976]] /* vrNordic_g11.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3702]] /* vrNordic_g11.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3705]] /* vrNordic_g11.limiter.y variable */) = tmp678;
  threadData->lastEquationSolved = 14806;
}
/*
equation index: 14807
type: SIMPLE_ASSIGN
$DAEres59 = (if vrNordic_g11.derivative.zeroGain then 0.0 else (vrNordic_g11.dOmega.y - vrNordic_g11.derivative.x) / vrNordic_g11.derivative.T) - der(vrNordic_g11.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14807};
  (data->simulationInfo->daeModeData->residualVars[59]) /* $DAEres59 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[971]] /* vrNordic_g11.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3690]] /* vrNordic_g11.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* vrNordic_g11.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4924]] /* vrNordic_g11.derivative.T PARAM */),"vrNordic_g11.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* der(vrNordic_g11.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14807;
}
/*
equation index: 14808
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.x[1] = vrNordic_g11.leadLag.x_scaled[1] / vrNordic_g11.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3697]] /* vrNordic_g11.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* vrNordic_g11.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4936]] /* vrNordic_g11.leadLag.a_end PARAM */),"vrNordic_g11.leadLag.a_end");
  threadData->lastEquationSolved = 14808;
}
/*
equation index: 14809
type: SIMPLE_ASSIGN
goverNordic_g11.flowDivGateOpening.y = goverNordic_g11.waterFlow.y / goverNordic_g11.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2117]] /* goverNordic_g11.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* goverNordic_g11.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g11.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14809;
}
/*
equation index: 14810
type: SIMPLE_ASSIGN
goverNordic_g11.headWater.y = goverNordic_g11.flowDivGateOpening.y ^ goverNordic_g11.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14810};
  modelica_real tmp679;
  modelica_real tmp680;
  modelica_real tmp681;
  modelica_real tmp682;
  modelica_real tmp683;
  modelica_real tmp684;
  modelica_real tmp685;
  tmp679 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2117]] /* goverNordic_g11.flowDivGateOpening.y variable */);
  tmp680 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2632]] /* goverNordic_g11.headWater.N PARAM */);
  if(tmp679 < 0.0 && tmp680 != 0.0)
  {
    tmp682 = modf(tmp680, &tmp683);
    
    if(tmp682 > 0.5)
    {
      tmp682 -= 1.0;
      tmp683 += 1.0;
    }
    else if(tmp682 < -0.5)
    {
      tmp682 += 1.0;
      tmp683 -= 1.0;
    }
    
    if(fabs(tmp682) < 1e-10)
      tmp681 = pow(tmp679, tmp683);
    else
    {
      tmp685 = modf(1.0/tmp680, &tmp684);
      if(tmp685 > 0.5)
      {
        tmp685 -= 1.0;
        tmp684 += 1.0;
      }
      else if(tmp685 < -0.5)
      {
        tmp685 += 1.0;
        tmp684 -= 1.0;
      }
      if(fabs(tmp685) < 1e-10 && ((unsigned long)tmp684 & 1))
      {
        tmp681 = -pow(-tmp679, tmp682)*pow(tmp679, tmp683);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp679, tmp680);
      }
    }
  }
  else
  {
    tmp681 = pow(tmp679, tmp680);
  }
  if(isnan(tmp681) || isinf(tmp681))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp679, tmp680);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2122]] /* goverNordic_g11.headWater.y variable */) = tmp681;
  threadData->lastEquationSolved = 14810;
}
/*
equation index: 14811
type: SIMPLE_ASSIGN
g11.PmPu = goverNordic_g11.waterFlow.y * goverNordic_g11.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1479]] /* g11.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* goverNordic_g11.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2122]] /* goverNordic_g11.headWater.y variable */));
  threadData->lastEquationSolved = 14811;
}
/*
equation index: 14812
type: SIMPLE_ASSIGN
goverNordic_g11.dH.y = goverNordic_g11.const2.k - goverNordic_g11.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2113]] /* goverNordic_g11.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* goverNordic_g11.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2122]] /* goverNordic_g11.headWater.y variable */);
  threadData->lastEquationSolved = 14812;
}
/*
equation index: 14813
type: SIMPLE_ASSIGN
$DAEres56 = goverNordic_g11.waterFlow.k * goverNordic_g11.dH.y - der(goverNordic_g11.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14813};
  (data->simulationInfo->daeModeData->residualVars[56]) /* $DAEres56 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2647]] /* goverNordic_g11.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2113]] /* goverNordic_g11.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* der(goverNordic_g11.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14813;
}
/*
equation index: 14814
type: SIMPLE_ASSIGN
goverNordic_g11.dOmega.y = goverNordic_g11.const1.k - g11.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2114]] /* goverNordic_g11.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* goverNordic_g11.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14814;
}
/*
equation index: 14815
type: SIMPLE_ASSIGN
goverNordic_g11.dP.y = goverNordic_g11.const.k - goverNordic_g11.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2116]] /* goverNordic_g11.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* goverNordic_g11.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* goverNordic_g11.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14815;
}
/*
equation index: 14816
type: SIMPLE_ASSIGN
goverNordic_g11.dOmegaPlusDroop.y = goverNordic_g11.dOmegaPlusDroop.k1 * goverNordic_g11.dOmega.y + goverNordic_g11.dOmegaPlusDroop.k2 * goverNordic_g11.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2115]] /* goverNordic_g11.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2621]] /* goverNordic_g11.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2114]] /* goverNordic_g11.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2622]] /* goverNordic_g11.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2116]] /* goverNordic_g11.dP.y variable */));
  threadData->lastEquationSolved = 14816;
}
/*
equation index: 14817
type: SIMPLE_ASSIGN
goverNordic_g11.govKi.y = goverNordic_g11.govKi.k * goverNordic_g11.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2119]] /* goverNordic_g11.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* goverNordic_g11.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2115]] /* goverNordic_g11.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14817;
}
/*
equation index: 14818
type: SIMPLE_ASSIGN
$DAEres54 = goverNordic_g11.govInt.k * goverNordic_g11.govKi.y - der(goverNordic_g11.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14818};
  (data->simulationInfo->daeModeData->residualVars[54]) /* $DAEres54 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2626]] /* goverNordic_g11.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2119]] /* goverNordic_g11.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* der(goverNordic_g11.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14818;
}
/*
equation index: 14819
type: SIMPLE_ASSIGN
goverNordic_g11.govKp.y = goverNordic_g11.govKp.k * goverNordic_g11.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14819};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2120]] /* goverNordic_g11.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2629]] /* goverNordic_g11.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2115]] /* goverNordic_g11.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14819;
}
/*
equation index: 14820
type: SIMPLE_ASSIGN
goverNordic_g11.govOut.y = goverNordic_g11.govOut.k1 * goverNordic_g11.govKp.y + goverNordic_g11.govOut.k2 * goverNordic_g11.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2121]] /* goverNordic_g11.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2630]] /* goverNordic_g11.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2120]] /* goverNordic_g11.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2631]] /* goverNordic_g11.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* goverNordic_g11.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14820;
}
/*
equation index: 14821
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.feedback.y = goverNordic_g11.govOut.y - goverNordic_g11.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2123]] /* goverNordic_g11.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2121]] /* goverNordic_g11.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14821;
}
/*
equation index: 14822
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.gain.y = goverNordic_g11.limRateLimFirstOrder.gain.k * goverNordic_g11.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2124]] /* goverNordic_g11.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2638]] /* goverNordic_g11.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2123]] /* goverNordic_g11.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14822;
}
/*
equation index: 14823
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g11.limRateLimFirstOrder.gain.y > goverNordic_g11.limRateLimFirstOrder.limiter.uMax then goverNordic_g11.limRateLimFirstOrder.limiter.uMax else if goverNordic_g11.limRateLimFirstOrder.gain.y < goverNordic_g11.limRateLimFirstOrder.limiter.uMin then goverNordic_g11.limRateLimFirstOrder.limiter.uMin else goverNordic_g11.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14823};
  modelica_boolean tmp686;
  modelica_boolean tmp687;
  modelica_boolean tmp688;
  modelica_real tmp689;
  tmp686 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2124]] /* goverNordic_g11.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp688 = (modelica_boolean)tmp686;
  if(tmp688)
  {
    tmp689 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp687 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2124]] /* goverNordic_g11.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp689 = (tmp687?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2124]] /* goverNordic_g11.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */) = tmp689;
  threadData->lastEquationSolved = 14823;
}
/*
equation index: 14824
type: SIMPLE_ASSIGN
$DAEres55 = (if goverNordic_g11.limRateLimFirstOrder.limIntegrator.y < goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g11.limRateLimFirstOrder.limIntegrator.k * goverNordic_g11.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g11.limRateLimFirstOrder.limIntegrator.y > goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g11.limRateLimFirstOrder.limIntegrator.k * goverNordic_g11.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g11.limRateLimFirstOrder.limIntegrator.k * goverNordic_g11.limRateLimFirstOrder.limiter.y) - der(goverNordic_g11.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14824};
  modelica_boolean tmp690;
  modelica_real tmp691;
  modelica_real tmp692;
  modelica_boolean tmp693;
  modelica_real tmp694;
  modelica_real tmp695;
  modelica_boolean tmp696;
  modelica_real tmp697;
  modelica_real tmp698;
  modelica_boolean tmp699;
  modelica_real tmp700;
  modelica_real tmp701;
  tmp691 = 1.0;
  tmp692 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp690, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp691, tmp692, 400, Less, LessZC);
  tmp694 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp695 = 0.0;
  relationhysteresis(data, &tmp693, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp694, tmp695, 401, Less, LessZC);
  tmp697 = 1.0;
  tmp698 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp696, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp697, tmp698, 402, Greater, GreaterZC);
  tmp700 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp701 = 0.0;
  relationhysteresis(data, &tmp699, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp700, tmp701, 403, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[55]) /* $DAEres55 DAE_RESIDUAL_VAR */ = (((tmp690 && tmp693) || (tmp696 && tmp699))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* der(goverNordic_g11.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14824;
}
/*
equation index: 14825
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.x[1] = vrNordic_g12.leadLag1.x_scaled[1] / vrNordic_g12.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14825};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3723]] /* vrNordic_g12.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* vrNordic_g12.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5028]] /* vrNordic_g12.leadLag1.a_end PARAM */),"vrNordic_g12.leadLag1.a_end");
  threadData->lastEquationSolved = 14825;
}
/*
equation index: 14826
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.x[1] = vrNordic_g12.leadLag2.x_scaled[1] / vrNordic_g12.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14826};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3725]] /* vrNordic_g12.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* vrNordic_g12.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5041]] /* vrNordic_g12.leadLag2.a_end PARAM */),"vrNordic_g12.leadLag2.a_end");
  threadData->lastEquationSolved = 14826;
}
/*
equation index: 14827
type: SIMPLE_ASSIGN
vrNordic_g12.greaterEqualThreshold.y = vrNordic_g12.timer.y >= vrNordic_g12.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14827};
  modelica_boolean tmp702;
  modelica_real tmp703;
  modelica_real tmp704;
  tmp703 = 1.0;
  tmp704 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5009]] /* vrNordic_g12.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp702, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5009]] /* vrNordic_g12.greaterEqualThreshold.threshold PARAM */), tmp703, tmp704, 405, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1048]] /* vrNordic_g12.greaterEqualThreshold.y DISCRETE */) = tmp702;
  threadData->lastEquationSolved = 14827;
}
/*
equation index: 14828
type: SIMPLE_ASSIGN
vrNordic_g12.dOmega.y = g12.omegaPu - vrNordic_g12.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3714]] /* vrNordic_g12.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5000]] /* vrNordic_g12.const.k PARAM */);
  threadData->lastEquationSolved = 14828;
}
/*
equation index: 14829
type: SIMPLE_ASSIGN
vrNordic_g12.derivative.y = if vrNordic_g12.derivative.zeroGain then 0.0 else vrNordic_g12.derivative.k / vrNordic_g12.derivative.T * (vrNordic_g12.dOmega.y - vrNordic_g12.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3716]] /* vrNordic_g12.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[982]] /* vrNordic_g12.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5004]] /* vrNordic_g12.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5003]] /* vrNordic_g12.derivative.T PARAM */),"vrNordic_g12.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3714]] /* vrNordic_g12.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* vrNordic_g12.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14829;
}
/*
equation index: 14830
type: SIMPLE_ASSIGN
$DAEres51 = vrNordic_g12.leadLag1.a_end * vrNordic_g12.derivative.y + (-vrNordic_g12.leadLag1.a[2]) * vrNordic_g12.leadLag1.x_scaled[1] - der(vrNordic_g12.leadLag1.x_scaled[1]) * vrNordic_g12.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14830};
  (data->simulationInfo->daeModeData->residualVars[51]) /* $DAEres51 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5028]] /* vrNordic_g12.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3716]] /* vrNordic_g12.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5027]] /* vrNordic_g12.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* vrNordic_g12.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* der(vrNordic_g12.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5026]] /* vrNordic_g12.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14830;
}
/*
equation index: 14831
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.y = (vrNordic_g12.leadLag1.bb[2] - vrNordic_g12.leadLag1.d * vrNordic_g12.leadLag1.a[2]) * vrNordic_g12.leadLag1.x[1] + vrNordic_g12.leadLag1.d * vrNordic_g12.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3724]] /* vrNordic_g12.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5032]] /* vrNordic_g12.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5033]] /* vrNordic_g12.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5027]] /* vrNordic_g12.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3723]] /* vrNordic_g12.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5033]] /* vrNordic_g12.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3716]] /* vrNordic_g12.derivative.y variable */));
  threadData->lastEquationSolved = 14831;
}
/*
equation index: 14832
type: SIMPLE_ASSIGN
$DAEres52 = vrNordic_g12.leadLag2.a_end * vrNordic_g12.leadLag1.y + (-vrNordic_g12.leadLag2.a[2]) * vrNordic_g12.leadLag2.x_scaled[1] - der(vrNordic_g12.leadLag2.x_scaled[1]) * vrNordic_g12.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14832};
  (data->simulationInfo->daeModeData->residualVars[52]) /* $DAEres52 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5041]] /* vrNordic_g12.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3724]] /* vrNordic_g12.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5040]] /* vrNordic_g12.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* vrNordic_g12.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* der(vrNordic_g12.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5039]] /* vrNordic_g12.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14832;
}
/*
equation index: 14833
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.y = (vrNordic_g12.leadLag2.bb[2] - vrNordic_g12.leadLag2.d * vrNordic_g12.leadLag2.a[2]) * vrNordic_g12.leadLag2.x[1] + vrNordic_g12.leadLag2.d * vrNordic_g12.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3726]] /* vrNordic_g12.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5045]] /* vrNordic_g12.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5046]] /* vrNordic_g12.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5040]] /* vrNordic_g12.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3725]] /* vrNordic_g12.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5046]] /* vrNordic_g12.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3724]] /* vrNordic_g12.leadLag1.y variable */));
  threadData->lastEquationSolved = 14833;
}
/*
equation index: 14834
type: SIMPLE_ASSIGN
vrNordic_g12.limiter.y = smooth(0, if vrNordic_g12.leadLag2.y > vrNordic_g12.limiter.uMax then vrNordic_g12.limiter.uMax else if vrNordic_g12.leadLag2.y < vrNordic_g12.limiter.uMin then vrNordic_g12.limiter.uMin else vrNordic_g12.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14834};
  modelica_boolean tmp705;
  modelica_boolean tmp706;
  modelica_boolean tmp707;
  modelica_real tmp708;
  tmp705 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3726]] /* vrNordic_g12.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5054]] /* vrNordic_g12.limiter.uMax PARAM */));
  tmp707 = (modelica_boolean)tmp705;
  if(tmp707)
  {
    tmp708 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5054]] /* vrNordic_g12.limiter.uMax PARAM */);
  }
  else
  {
    tmp706 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3726]] /* vrNordic_g12.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5055]] /* vrNordic_g12.limiter.uMin PARAM */));
    tmp708 = (tmp706?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5055]] /* vrNordic_g12.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3726]] /* vrNordic_g12.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3729]] /* vrNordic_g12.limiter.y variable */) = tmp708;
  threadData->lastEquationSolved = 14834;
}
/*
equation index: 14835
type: SIMPLE_ASSIGN
$DAEres53 = (if vrNordic_g12.derivative.zeroGain then 0.0 else (vrNordic_g12.dOmega.y - vrNordic_g12.derivative.x) / vrNordic_g12.derivative.T) - der(vrNordic_g12.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14835};
  (data->simulationInfo->daeModeData->residualVars[53]) /* $DAEres53 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[982]] /* vrNordic_g12.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3714]] /* vrNordic_g12.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* vrNordic_g12.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5003]] /* vrNordic_g12.derivative.T PARAM */),"vrNordic_g12.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* der(vrNordic_g12.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14835;
}
/*
equation index: 14836
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.x[1] = vrNordic_g12.leadLag.x_scaled[1] / vrNordic_g12.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3721]] /* vrNordic_g12.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* vrNordic_g12.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5015]] /* vrNordic_g12.leadLag.a_end PARAM */),"vrNordic_g12.leadLag.a_end");
  threadData->lastEquationSolved = 14836;
}
/*
equation index: 14837
type: SIMPLE_ASSIGN
goverNordic_g12.flowDivGateOpening.y = goverNordic_g12.waterFlow.y / goverNordic_g12.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2135]] /* goverNordic_g12.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* goverNordic_g12.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g12.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14837;
}
/*
equation index: 14838
type: SIMPLE_ASSIGN
goverNordic_g12.headWater.y = goverNordic_g12.flowDivGateOpening.y ^ goverNordic_g12.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14838};
  modelica_real tmp709;
  modelica_real tmp710;
  modelica_real tmp711;
  modelica_real tmp712;
  modelica_real tmp713;
  modelica_real tmp714;
  modelica_real tmp715;
  tmp709 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2135]] /* goverNordic_g12.flowDivGateOpening.y variable */);
  tmp710 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2668]] /* goverNordic_g12.headWater.N PARAM */);
  if(tmp709 < 0.0 && tmp710 != 0.0)
  {
    tmp712 = modf(tmp710, &tmp713);
    
    if(tmp712 > 0.5)
    {
      tmp712 -= 1.0;
      tmp713 += 1.0;
    }
    else if(tmp712 < -0.5)
    {
      tmp712 += 1.0;
      tmp713 -= 1.0;
    }
    
    if(fabs(tmp712) < 1e-10)
      tmp711 = pow(tmp709, tmp713);
    else
    {
      tmp715 = modf(1.0/tmp710, &tmp714);
      if(tmp715 > 0.5)
      {
        tmp715 -= 1.0;
        tmp714 += 1.0;
      }
      else if(tmp715 < -0.5)
      {
        tmp715 += 1.0;
        tmp714 -= 1.0;
      }
      if(fabs(tmp715) < 1e-10 && ((unsigned long)tmp714 & 1))
      {
        tmp711 = -pow(-tmp709, tmp712)*pow(tmp709, tmp713);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp709, tmp710);
      }
    }
  }
  else
  {
    tmp711 = pow(tmp709, tmp710);
  }
  if(isnan(tmp711) || isinf(tmp711))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp709, tmp710);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2140]] /* goverNordic_g12.headWater.y variable */) = tmp711;
  threadData->lastEquationSolved = 14838;
}
/*
equation index: 14839
type: SIMPLE_ASSIGN
g12.PmPu = goverNordic_g12.waterFlow.y * goverNordic_g12.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1525]] /* g12.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* goverNordic_g12.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2140]] /* goverNordic_g12.headWater.y variable */));
  threadData->lastEquationSolved = 14839;
}
/*
equation index: 14840
type: SIMPLE_ASSIGN
goverNordic_g12.dH.y = goverNordic_g12.const2.k - goverNordic_g12.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2131]] /* goverNordic_g12.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2656]] /* goverNordic_g12.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2140]] /* goverNordic_g12.headWater.y variable */);
  threadData->lastEquationSolved = 14840;
}
/*
equation index: 14841
type: SIMPLE_ASSIGN
$DAEres50 = goverNordic_g12.waterFlow.k * goverNordic_g12.dH.y - der(goverNordic_g12.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14841};
  (data->simulationInfo->daeModeData->residualVars[50]) /* $DAEres50 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* goverNordic_g12.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2131]] /* goverNordic_g12.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* der(goverNordic_g12.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14841;
}
/*
equation index: 14842
type: SIMPLE_ASSIGN
goverNordic_g12.dOmega.y = goverNordic_g12.const1.k - g12.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2132]] /* goverNordic_g12.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2655]] /* goverNordic_g12.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14842;
}
/*
equation index: 14843
type: SIMPLE_ASSIGN
goverNordic_g12.dP.y = goverNordic_g12.const.k - goverNordic_g12.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2134]] /* goverNordic_g12.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2654]] /* goverNordic_g12.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* goverNordic_g12.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14843;
}
/*
equation index: 14844
type: SIMPLE_ASSIGN
goverNordic_g12.dOmegaPlusDroop.y = goverNordic_g12.dOmegaPlusDroop.k1 * goverNordic_g12.dOmega.y + goverNordic_g12.dOmegaPlusDroop.k2 * goverNordic_g12.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14844};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2133]] /* goverNordic_g12.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2657]] /* goverNordic_g12.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2132]] /* goverNordic_g12.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2658]] /* goverNordic_g12.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2134]] /* goverNordic_g12.dP.y variable */));
  threadData->lastEquationSolved = 14844;
}
/*
equation index: 14845
type: SIMPLE_ASSIGN
goverNordic_g12.govKi.y = goverNordic_g12.govKi.k * goverNordic_g12.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2137]] /* goverNordic_g12.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2664]] /* goverNordic_g12.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2133]] /* goverNordic_g12.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14845;
}
/*
equation index: 14846
type: SIMPLE_ASSIGN
$DAEres48 = goverNordic_g12.govInt.k * goverNordic_g12.govKi.y - der(goverNordic_g12.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14846};
  (data->simulationInfo->daeModeData->residualVars[48]) /* $DAEres48 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2662]] /* goverNordic_g12.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2137]] /* goverNordic_g12.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* der(goverNordic_g12.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14846;
}
/*
equation index: 14847
type: SIMPLE_ASSIGN
goverNordic_g12.govKp.y = goverNordic_g12.govKp.k * goverNordic_g12.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14847};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2138]] /* goverNordic_g12.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2665]] /* goverNordic_g12.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2133]] /* goverNordic_g12.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14847;
}
/*
equation index: 14848
type: SIMPLE_ASSIGN
goverNordic_g12.govOut.y = goverNordic_g12.govOut.k1 * goverNordic_g12.govKp.y + goverNordic_g12.govOut.k2 * goverNordic_g12.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14848};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2139]] /* goverNordic_g12.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2666]] /* goverNordic_g12.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2138]] /* goverNordic_g12.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2667]] /* goverNordic_g12.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* goverNordic_g12.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14848;
}
/*
equation index: 14849
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.feedback.y = goverNordic_g12.govOut.y - goverNordic_g12.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2141]] /* goverNordic_g12.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2139]] /* goverNordic_g12.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14849;
}
/*
equation index: 14850
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.gain.y = goverNordic_g12.limRateLimFirstOrder.gain.k * goverNordic_g12.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2142]] /* goverNordic_g12.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2674]] /* goverNordic_g12.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2141]] /* goverNordic_g12.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14850;
}
/*
equation index: 14851
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g12.limRateLimFirstOrder.gain.y > goverNordic_g12.limRateLimFirstOrder.limiter.uMax then goverNordic_g12.limRateLimFirstOrder.limiter.uMax else if goverNordic_g12.limRateLimFirstOrder.gain.y < goverNordic_g12.limRateLimFirstOrder.limiter.uMin then goverNordic_g12.limRateLimFirstOrder.limiter.uMin else goverNordic_g12.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14851};
  modelica_boolean tmp716;
  modelica_boolean tmp717;
  modelica_boolean tmp718;
  modelica_real tmp719;
  tmp716 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2142]] /* goverNordic_g12.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp718 = (modelica_boolean)tmp716;
  if(tmp718)
  {
    tmp719 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp717 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2142]] /* goverNordic_g12.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp719 = (tmp717?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2142]] /* goverNordic_g12.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */) = tmp719;
  threadData->lastEquationSolved = 14851;
}
/*
equation index: 14852
type: SIMPLE_ASSIGN
$DAEres49 = (if goverNordic_g12.limRateLimFirstOrder.limIntegrator.y < goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g12.limRateLimFirstOrder.limIntegrator.k * goverNordic_g12.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g12.limRateLimFirstOrder.limIntegrator.y > goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g12.limRateLimFirstOrder.limIntegrator.k * goverNordic_g12.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g12.limRateLimFirstOrder.limIntegrator.k * goverNordic_g12.limRateLimFirstOrder.limiter.y) - der(goverNordic_g12.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14852};
  modelica_boolean tmp720;
  modelica_real tmp721;
  modelica_real tmp722;
  modelica_boolean tmp723;
  modelica_real tmp724;
  modelica_real tmp725;
  modelica_boolean tmp726;
  modelica_real tmp727;
  modelica_real tmp728;
  modelica_boolean tmp729;
  modelica_real tmp730;
  modelica_real tmp731;
  tmp721 = 1.0;
  tmp722 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp720, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp721, tmp722, 416, Less, LessZC);
  tmp724 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp725 = 0.0;
  relationhysteresis(data, &tmp723, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp724, tmp725, 417, Less, LessZC);
  tmp727 = 1.0;
  tmp728 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp726, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp727, tmp728, 418, Greater, GreaterZC);
  tmp730 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp731 = 0.0;
  relationhysteresis(data, &tmp729, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp730, tmp731, 419, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[49]) /* $DAEres49 DAE_RESIDUAL_VAR */ = (((tmp720 && tmp723) || (tmp726 && tmp729))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* der(goverNordic_g12.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14852;
}
/*
equation index: 14853
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.x[1] = vrNordic_g13.leadLag1.x_scaled[1] / vrNordic_g13.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3747]] /* vrNordic_g13.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* vrNordic_g13.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5107]] /* vrNordic_g13.leadLag1.a_end PARAM */),"vrNordic_g13.leadLag1.a_end");
  threadData->lastEquationSolved = 14853;
}
/*
equation index: 14854
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.x[1] = vrNordic_g13.leadLag2.x_scaled[1] / vrNordic_g13.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3749]] /* vrNordic_g13.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* vrNordic_g13.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5120]] /* vrNordic_g13.leadLag2.a_end PARAM */),"vrNordic_g13.leadLag2.a_end");
  threadData->lastEquationSolved = 14854;
}
/*
equation index: 14855
type: SIMPLE_ASSIGN
vrNordic_g13.greaterEqualThreshold.y = vrNordic_g13.timer.y >= vrNordic_g13.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14855};
  modelica_boolean tmp732;
  modelica_real tmp733;
  modelica_real tmp734;
  tmp733 = 1.0;
  tmp734 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5088]] /* vrNordic_g13.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp732, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5088]] /* vrNordic_g13.greaterEqualThreshold.threshold PARAM */), tmp733, tmp734, 421, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1051]] /* vrNordic_g13.greaterEqualThreshold.y DISCRETE */) = tmp732;
  threadData->lastEquationSolved = 14855;
}
/*
equation index: 14856
type: SIMPLE_ASSIGN
vrNordic_g13.dOmega.y = g13.omegaPu - vrNordic_g13.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3738]] /* vrNordic_g13.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5079]] /* vrNordic_g13.const.k PARAM */);
  threadData->lastEquationSolved = 14856;
}
/*
equation index: 14857
type: SIMPLE_ASSIGN
vrNordic_g13.derivative.y = if vrNordic_g13.derivative.zeroGain then 0.0 else vrNordic_g13.derivative.k / vrNordic_g13.derivative.T * (vrNordic_g13.dOmega.y - vrNordic_g13.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3740]] /* vrNordic_g13.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[993]] /* vrNordic_g13.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5083]] /* vrNordic_g13.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5082]] /* vrNordic_g13.derivative.T PARAM */),"vrNordic_g13.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3738]] /* vrNordic_g13.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* vrNordic_g13.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14857;
}
/*
equation index: 14858
type: SIMPLE_ASSIGN
$DAEres45 = vrNordic_g13.leadLag1.a_end * vrNordic_g13.derivative.y + (-vrNordic_g13.leadLag1.a[2]) * vrNordic_g13.leadLag1.x_scaled[1] - der(vrNordic_g13.leadLag1.x_scaled[1]) * vrNordic_g13.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14858};
  (data->simulationInfo->daeModeData->residualVars[45]) /* $DAEres45 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5107]] /* vrNordic_g13.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3740]] /* vrNordic_g13.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5106]] /* vrNordic_g13.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* vrNordic_g13.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* der(vrNordic_g13.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5105]] /* vrNordic_g13.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14858;
}
/*
equation index: 14859
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.y = (vrNordic_g13.leadLag1.bb[2] - vrNordic_g13.leadLag1.d * vrNordic_g13.leadLag1.a[2]) * vrNordic_g13.leadLag1.x[1] + vrNordic_g13.leadLag1.d * vrNordic_g13.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3748]] /* vrNordic_g13.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5111]] /* vrNordic_g13.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5112]] /* vrNordic_g13.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5106]] /* vrNordic_g13.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3747]] /* vrNordic_g13.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5112]] /* vrNordic_g13.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3740]] /* vrNordic_g13.derivative.y variable */));
  threadData->lastEquationSolved = 14859;
}
/*
equation index: 14860
type: SIMPLE_ASSIGN
$DAEres46 = vrNordic_g13.leadLag2.a_end * vrNordic_g13.leadLag1.y + (-vrNordic_g13.leadLag2.a[2]) * vrNordic_g13.leadLag2.x_scaled[1] - der(vrNordic_g13.leadLag2.x_scaled[1]) * vrNordic_g13.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14860};
  (data->simulationInfo->daeModeData->residualVars[46]) /* $DAEres46 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5120]] /* vrNordic_g13.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3748]] /* vrNordic_g13.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5119]] /* vrNordic_g13.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* vrNordic_g13.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* der(vrNordic_g13.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5118]] /* vrNordic_g13.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14860;
}
/*
equation index: 14861
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.y = (vrNordic_g13.leadLag2.bb[2] - vrNordic_g13.leadLag2.d * vrNordic_g13.leadLag2.a[2]) * vrNordic_g13.leadLag2.x[1] + vrNordic_g13.leadLag2.d * vrNordic_g13.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3750]] /* vrNordic_g13.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5124]] /* vrNordic_g13.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5125]] /* vrNordic_g13.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5119]] /* vrNordic_g13.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3749]] /* vrNordic_g13.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5125]] /* vrNordic_g13.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3748]] /* vrNordic_g13.leadLag1.y variable */));
  threadData->lastEquationSolved = 14861;
}
/*
equation index: 14862
type: SIMPLE_ASSIGN
vrNordic_g13.limiter.y = smooth(0, if vrNordic_g13.leadLag2.y > vrNordic_g13.limiter.uMax then vrNordic_g13.limiter.uMax else if vrNordic_g13.leadLag2.y < vrNordic_g13.limiter.uMin then vrNordic_g13.limiter.uMin else vrNordic_g13.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14862};
  modelica_boolean tmp735;
  modelica_boolean tmp736;
  modelica_boolean tmp737;
  modelica_real tmp738;
  tmp735 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3750]] /* vrNordic_g13.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5133]] /* vrNordic_g13.limiter.uMax PARAM */));
  tmp737 = (modelica_boolean)tmp735;
  if(tmp737)
  {
    tmp738 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5133]] /* vrNordic_g13.limiter.uMax PARAM */);
  }
  else
  {
    tmp736 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3750]] /* vrNordic_g13.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5134]] /* vrNordic_g13.limiter.uMin PARAM */));
    tmp738 = (tmp736?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5134]] /* vrNordic_g13.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3750]] /* vrNordic_g13.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3753]] /* vrNordic_g13.limiter.y variable */) = tmp738;
  threadData->lastEquationSolved = 14862;
}
/*
equation index: 14863
type: SIMPLE_ASSIGN
$DAEres47 = (if vrNordic_g13.derivative.zeroGain then 0.0 else (vrNordic_g13.dOmega.y - vrNordic_g13.derivative.x) / vrNordic_g13.derivative.T) - der(vrNordic_g13.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14863};
  (data->simulationInfo->daeModeData->residualVars[47]) /* $DAEres47 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[993]] /* vrNordic_g13.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3738]] /* vrNordic_g13.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* vrNordic_g13.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5082]] /* vrNordic_g13.derivative.T PARAM */),"vrNordic_g13.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* der(vrNordic_g13.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14863;
}
/*
equation index: 14864
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.x[1] = vrNordic_g13.leadLag.x_scaled[1] / vrNordic_g13.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3745]] /* vrNordic_g13.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* vrNordic_g13.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5094]] /* vrNordic_g13.leadLag.a_end PARAM */),"vrNordic_g13.leadLag.a_end");
  threadData->lastEquationSolved = 14864;
}
/*
equation index: 14865
type: SIMPLE_ASSIGN
goverNordic_g13.flowDivGateOpening.y = goverNordic_g13.waterFlow.y / goverNordic_g13.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2153]] /* goverNordic_g13.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* goverNordic_g13.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g13.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14865;
}
/*
equation index: 14866
type: SIMPLE_ASSIGN
goverNordic_g13.headWater.y = goverNordic_g13.flowDivGateOpening.y ^ goverNordic_g13.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14866};
  modelica_real tmp739;
  modelica_real tmp740;
  modelica_real tmp741;
  modelica_real tmp742;
  modelica_real tmp743;
  modelica_real tmp744;
  modelica_real tmp745;
  tmp739 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2153]] /* goverNordic_g13.flowDivGateOpening.y variable */);
  tmp740 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* goverNordic_g13.headWater.N PARAM */);
  if(tmp739 < 0.0 && tmp740 != 0.0)
  {
    tmp742 = modf(tmp740, &tmp743);
    
    if(tmp742 > 0.5)
    {
      tmp742 -= 1.0;
      tmp743 += 1.0;
    }
    else if(tmp742 < -0.5)
    {
      tmp742 += 1.0;
      tmp743 -= 1.0;
    }
    
    if(fabs(tmp742) < 1e-10)
      tmp741 = pow(tmp739, tmp743);
    else
    {
      tmp745 = modf(1.0/tmp740, &tmp744);
      if(tmp745 > 0.5)
      {
        tmp745 -= 1.0;
        tmp744 += 1.0;
      }
      else if(tmp745 < -0.5)
      {
        tmp745 += 1.0;
        tmp744 -= 1.0;
      }
      if(fabs(tmp745) < 1e-10 && ((unsigned long)tmp744 & 1))
      {
        tmp741 = -pow(-tmp739, tmp742)*pow(tmp739, tmp743);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp739, tmp740);
      }
    }
  }
  else
  {
    tmp741 = pow(tmp739, tmp740);
  }
  if(isnan(tmp741) || isinf(tmp741))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp739, tmp740);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2158]] /* goverNordic_g13.headWater.y variable */) = tmp741;
  threadData->lastEquationSolved = 14866;
}
/*
equation index: 14867
type: SIMPLE_ASSIGN
g13.PmPu = goverNordic_g13.waterFlow.y * goverNordic_g13.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1571]] /* g13.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* goverNordic_g13.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2158]] /* goverNordic_g13.headWater.y variable */));
  threadData->lastEquationSolved = 14867;
}
/*
equation index: 14868
type: SIMPLE_ASSIGN
goverNordic_g13.dH.y = goverNordic_g13.const2.k - goverNordic_g13.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14868};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2149]] /* goverNordic_g13.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2692]] /* goverNordic_g13.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2158]] /* goverNordic_g13.headWater.y variable */);
  threadData->lastEquationSolved = 14868;
}
/*
equation index: 14869
type: SIMPLE_ASSIGN
$DAEres44 = goverNordic_g13.waterFlow.k * goverNordic_g13.dH.y - der(goverNordic_g13.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14869};
  (data->simulationInfo->daeModeData->residualVars[44]) /* $DAEres44 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2719]] /* goverNordic_g13.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2149]] /* goverNordic_g13.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* der(goverNordic_g13.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14869;
}
/*
equation index: 14870
type: SIMPLE_ASSIGN
goverNordic_g13.dOmega.y = goverNordic_g13.const1.k - g13.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2150]] /* goverNordic_g13.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2691]] /* goverNordic_g13.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14870;
}
/*
equation index: 14871
type: SIMPLE_ASSIGN
goverNordic_g13.dP.y = goverNordic_g13.const.k - goverNordic_g13.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14871};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2152]] /* goverNordic_g13.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* goverNordic_g13.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* goverNordic_g13.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14871;
}
/*
equation index: 14872
type: SIMPLE_ASSIGN
goverNordic_g13.dOmegaPlusDroop.y = goverNordic_g13.dOmegaPlusDroop.k1 * goverNordic_g13.dOmega.y + goverNordic_g13.dOmegaPlusDroop.k2 * goverNordic_g13.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2151]] /* goverNordic_g13.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2693]] /* goverNordic_g13.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2150]] /* goverNordic_g13.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2694]] /* goverNordic_g13.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2152]] /* goverNordic_g13.dP.y variable */));
  threadData->lastEquationSolved = 14872;
}
/*
equation index: 14873
type: SIMPLE_ASSIGN
goverNordic_g13.govKi.y = goverNordic_g13.govKi.k * goverNordic_g13.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14873};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2155]] /* goverNordic_g13.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* goverNordic_g13.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2151]] /* goverNordic_g13.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14873;
}
/*
equation index: 14874
type: SIMPLE_ASSIGN
$DAEres42 = goverNordic_g13.govInt.k * goverNordic_g13.govKi.y - der(goverNordic_g13.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14874};
  (data->simulationInfo->daeModeData->residualVars[42]) /* $DAEres42 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* goverNordic_g13.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2155]] /* goverNordic_g13.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* der(goverNordic_g13.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14874;
}
/*
equation index: 14875
type: SIMPLE_ASSIGN
goverNordic_g13.govKp.y = goverNordic_g13.govKp.k * goverNordic_g13.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2156]] /* goverNordic_g13.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2701]] /* goverNordic_g13.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2151]] /* goverNordic_g13.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14875;
}
/*
equation index: 14876
type: SIMPLE_ASSIGN
goverNordic_g13.govOut.y = goverNordic_g13.govOut.k1 * goverNordic_g13.govKp.y + goverNordic_g13.govOut.k2 * goverNordic_g13.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2157]] /* goverNordic_g13.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2702]] /* goverNordic_g13.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2156]] /* goverNordic_g13.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2703]] /* goverNordic_g13.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* goverNordic_g13.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14876;
}
/*
equation index: 14877
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.feedback.y = goverNordic_g13.govOut.y - goverNordic_g13.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14877};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2159]] /* goverNordic_g13.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2157]] /* goverNordic_g13.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14877;
}
/*
equation index: 14878
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.gain.y = goverNordic_g13.limRateLimFirstOrder.gain.k * goverNordic_g13.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2160]] /* goverNordic_g13.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2710]] /* goverNordic_g13.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2159]] /* goverNordic_g13.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14878;
}
/*
equation index: 14879
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g13.limRateLimFirstOrder.gain.y > goverNordic_g13.limRateLimFirstOrder.limiter.uMax then goverNordic_g13.limRateLimFirstOrder.limiter.uMax else if goverNordic_g13.limRateLimFirstOrder.gain.y < goverNordic_g13.limRateLimFirstOrder.limiter.uMin then goverNordic_g13.limRateLimFirstOrder.limiter.uMin else goverNordic_g13.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14879};
  modelica_boolean tmp746;
  modelica_boolean tmp747;
  modelica_boolean tmp748;
  modelica_real tmp749;
  tmp746 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2160]] /* goverNordic_g13.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp748 = (modelica_boolean)tmp746;
  if(tmp748)
  {
    tmp749 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp747 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2160]] /* goverNordic_g13.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp749 = (tmp747?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2160]] /* goverNordic_g13.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */) = tmp749;
  threadData->lastEquationSolved = 14879;
}
/*
equation index: 14880
type: SIMPLE_ASSIGN
$DAEres43 = (if goverNordic_g13.limRateLimFirstOrder.limIntegrator.y < goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g13.limRateLimFirstOrder.limIntegrator.k * goverNordic_g13.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g13.limRateLimFirstOrder.limIntegrator.y > goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g13.limRateLimFirstOrder.limIntegrator.k * goverNordic_g13.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g13.limRateLimFirstOrder.limIntegrator.k * goverNordic_g13.limRateLimFirstOrder.limiter.y) - der(goverNordic_g13.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14880};
  modelica_boolean tmp750;
  modelica_real tmp751;
  modelica_real tmp752;
  modelica_boolean tmp753;
  modelica_real tmp754;
  modelica_real tmp755;
  modelica_boolean tmp756;
  modelica_real tmp757;
  modelica_real tmp758;
  modelica_boolean tmp759;
  modelica_real tmp760;
  modelica_real tmp761;
  tmp751 = 1.0;
  tmp752 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp750, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp751, tmp752, 432, Less, LessZC);
  tmp754 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp755 = 0.0;
  relationhysteresis(data, &tmp753, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp754, tmp755, 433, Less, LessZC);
  tmp757 = 1.0;
  tmp758 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp756, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp757, tmp758, 434, Greater, GreaterZC);
  tmp760 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp761 = 0.0;
  relationhysteresis(data, &tmp759, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp760, tmp761, 435, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[43]) /* $DAEres43 DAE_RESIDUAL_VAR */ = (((tmp750 && tmp753) || (tmp756 && tmp759))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* der(goverNordic_g13.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14880;
}
/*
equation index: 14881
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.x[1] = vrNordic_g14.leadLag1.x_scaled[1] / vrNordic_g14.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3771]] /* vrNordic_g14.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* vrNordic_g14.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5186]] /* vrNordic_g14.leadLag1.a_end PARAM */),"vrNordic_g14.leadLag1.a_end");
  threadData->lastEquationSolved = 14881;
}
/*
equation index: 14882
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.x[1] = vrNordic_g14.leadLag2.x_scaled[1] / vrNordic_g14.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14882};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3773]] /* vrNordic_g14.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* vrNordic_g14.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5199]] /* vrNordic_g14.leadLag2.a_end PARAM */),"vrNordic_g14.leadLag2.a_end");
  threadData->lastEquationSolved = 14882;
}
/*
equation index: 14883
type: SIMPLE_ASSIGN
vrNordic_g14.greaterEqualThreshold.y = vrNordic_g14.timer.y >= vrNordic_g14.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14883};
  modelica_boolean tmp762;
  modelica_real tmp763;
  modelica_real tmp764;
  tmp763 = 1.0;
  tmp764 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5167]] /* vrNordic_g14.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp762, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5167]] /* vrNordic_g14.greaterEqualThreshold.threshold PARAM */), tmp763, tmp764, 437, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1054]] /* vrNordic_g14.greaterEqualThreshold.y DISCRETE */) = tmp762;
  threadData->lastEquationSolved = 14883;
}
/*
equation index: 14884
type: SIMPLE_ASSIGN
vrNordic_g14.dOmega.y = g14.omegaPu - vrNordic_g14.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3762]] /* vrNordic_g14.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5158]] /* vrNordic_g14.const.k PARAM */);
  threadData->lastEquationSolved = 14884;
}
/*
equation index: 14885
type: SIMPLE_ASSIGN
vrNordic_g14.derivative.y = if vrNordic_g14.derivative.zeroGain then 0.0 else vrNordic_g14.derivative.k / vrNordic_g14.derivative.T * (vrNordic_g14.dOmega.y - vrNordic_g14.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3764]] /* vrNordic_g14.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1004]] /* vrNordic_g14.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5162]] /* vrNordic_g14.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5161]] /* vrNordic_g14.derivative.T PARAM */),"vrNordic_g14.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3762]] /* vrNordic_g14.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* vrNordic_g14.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14885;
}
/*
equation index: 14886
type: SIMPLE_ASSIGN
$DAEres39 = vrNordic_g14.leadLag1.a_end * vrNordic_g14.derivative.y + (-vrNordic_g14.leadLag1.a[2]) * vrNordic_g14.leadLag1.x_scaled[1] - der(vrNordic_g14.leadLag1.x_scaled[1]) * vrNordic_g14.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14886};
  (data->simulationInfo->daeModeData->residualVars[39]) /* $DAEres39 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5186]] /* vrNordic_g14.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3764]] /* vrNordic_g14.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5185]] /* vrNordic_g14.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* vrNordic_g14.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* der(vrNordic_g14.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5184]] /* vrNordic_g14.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14886;
}
/*
equation index: 14887
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.y = (vrNordic_g14.leadLag1.bb[2] - vrNordic_g14.leadLag1.d * vrNordic_g14.leadLag1.a[2]) * vrNordic_g14.leadLag1.x[1] + vrNordic_g14.leadLag1.d * vrNordic_g14.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3772]] /* vrNordic_g14.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5190]] /* vrNordic_g14.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5191]] /* vrNordic_g14.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5185]] /* vrNordic_g14.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3771]] /* vrNordic_g14.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5191]] /* vrNordic_g14.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3764]] /* vrNordic_g14.derivative.y variable */));
  threadData->lastEquationSolved = 14887;
}
/*
equation index: 14888
type: SIMPLE_ASSIGN
$DAEres40 = vrNordic_g14.leadLag2.a_end * vrNordic_g14.leadLag1.y + (-vrNordic_g14.leadLag2.a[2]) * vrNordic_g14.leadLag2.x_scaled[1] - der(vrNordic_g14.leadLag2.x_scaled[1]) * vrNordic_g14.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14888};
  (data->simulationInfo->daeModeData->residualVars[40]) /* $DAEres40 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5199]] /* vrNordic_g14.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3772]] /* vrNordic_g14.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5198]] /* vrNordic_g14.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* vrNordic_g14.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* der(vrNordic_g14.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5197]] /* vrNordic_g14.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14888;
}
/*
equation index: 14889
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.y = (vrNordic_g14.leadLag2.bb[2] - vrNordic_g14.leadLag2.d * vrNordic_g14.leadLag2.a[2]) * vrNordic_g14.leadLag2.x[1] + vrNordic_g14.leadLag2.d * vrNordic_g14.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14889};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3774]] /* vrNordic_g14.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5203]] /* vrNordic_g14.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5204]] /* vrNordic_g14.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5198]] /* vrNordic_g14.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3773]] /* vrNordic_g14.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5204]] /* vrNordic_g14.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3772]] /* vrNordic_g14.leadLag1.y variable */));
  threadData->lastEquationSolved = 14889;
}
/*
equation index: 14890
type: SIMPLE_ASSIGN
vrNordic_g14.limiter.y = smooth(0, if vrNordic_g14.leadLag2.y > vrNordic_g14.limiter.uMax then vrNordic_g14.limiter.uMax else if vrNordic_g14.leadLag2.y < vrNordic_g14.limiter.uMin then vrNordic_g14.limiter.uMin else vrNordic_g14.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14890};
  modelica_boolean tmp765;
  modelica_boolean tmp766;
  modelica_boolean tmp767;
  modelica_real tmp768;
  tmp765 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3774]] /* vrNordic_g14.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5212]] /* vrNordic_g14.limiter.uMax PARAM */));
  tmp767 = (modelica_boolean)tmp765;
  if(tmp767)
  {
    tmp768 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5212]] /* vrNordic_g14.limiter.uMax PARAM */);
  }
  else
  {
    tmp766 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3774]] /* vrNordic_g14.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5213]] /* vrNordic_g14.limiter.uMin PARAM */));
    tmp768 = (tmp766?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5213]] /* vrNordic_g14.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3774]] /* vrNordic_g14.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3777]] /* vrNordic_g14.limiter.y variable */) = tmp768;
  threadData->lastEquationSolved = 14890;
}
/*
equation index: 14891
type: SIMPLE_ASSIGN
$DAEres41 = (if vrNordic_g14.derivative.zeroGain then 0.0 else (vrNordic_g14.dOmega.y - vrNordic_g14.derivative.x) / vrNordic_g14.derivative.T) - der(vrNordic_g14.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14891};
  (data->simulationInfo->daeModeData->residualVars[41]) /* $DAEres41 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1004]] /* vrNordic_g14.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3762]] /* vrNordic_g14.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* vrNordic_g14.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5161]] /* vrNordic_g14.derivative.T PARAM */),"vrNordic_g14.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* der(vrNordic_g14.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14891;
}
/*
equation index: 14892
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.x[1] = vrNordic_g14.leadLag.x_scaled[1] / vrNordic_g14.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3769]] /* vrNordic_g14.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* vrNordic_g14.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5173]] /* vrNordic_g14.leadLag.a_end PARAM */),"vrNordic_g14.leadLag.a_end");
  threadData->lastEquationSolved = 14892;
}
/*
equation index: 14893
type: SIMPLE_ASSIGN
goverNordic_g14.flowDivGateOpening.y = goverNordic_g14.waterFlow.y / goverNordic_g14.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2171]] /* goverNordic_g14.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* goverNordic_g14.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g14.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14893;
}
/*
equation index: 14894
type: SIMPLE_ASSIGN
goverNordic_g14.headWater.y = goverNordic_g14.flowDivGateOpening.y ^ goverNordic_g14.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14894};
  modelica_real tmp769;
  modelica_real tmp770;
  modelica_real tmp771;
  modelica_real tmp772;
  modelica_real tmp773;
  modelica_real tmp774;
  modelica_real tmp775;
  tmp769 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2171]] /* goverNordic_g14.flowDivGateOpening.y variable */);
  tmp770 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2740]] /* goverNordic_g14.headWater.N PARAM */);
  if(tmp769 < 0.0 && tmp770 != 0.0)
  {
    tmp772 = modf(tmp770, &tmp773);
    
    if(tmp772 > 0.5)
    {
      tmp772 -= 1.0;
      tmp773 += 1.0;
    }
    else if(tmp772 < -0.5)
    {
      tmp772 += 1.0;
      tmp773 -= 1.0;
    }
    
    if(fabs(tmp772) < 1e-10)
      tmp771 = pow(tmp769, tmp773);
    else
    {
      tmp775 = modf(1.0/tmp770, &tmp774);
      if(tmp775 > 0.5)
      {
        tmp775 -= 1.0;
        tmp774 += 1.0;
      }
      else if(tmp775 < -0.5)
      {
        tmp775 += 1.0;
        tmp774 -= 1.0;
      }
      if(fabs(tmp775) < 1e-10 && ((unsigned long)tmp774 & 1))
      {
        tmp771 = -pow(-tmp769, tmp772)*pow(tmp769, tmp773);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp769, tmp770);
      }
    }
  }
  else
  {
    tmp771 = pow(tmp769, tmp770);
  }
  if(isnan(tmp771) || isinf(tmp771))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp769, tmp770);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2176]] /* goverNordic_g14.headWater.y variable */) = tmp771;
  threadData->lastEquationSolved = 14894;
}
/*
equation index: 14895
type: SIMPLE_ASSIGN
g14.PmPu = goverNordic_g14.waterFlow.y * goverNordic_g14.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1617]] /* g14.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* goverNordic_g14.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2176]] /* goverNordic_g14.headWater.y variable */));
  threadData->lastEquationSolved = 14895;
}
/*
equation index: 14896
type: SIMPLE_ASSIGN
goverNordic_g14.dH.y = goverNordic_g14.const2.k - goverNordic_g14.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2167]] /* goverNordic_g14.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* goverNordic_g14.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2176]] /* goverNordic_g14.headWater.y variable */);
  threadData->lastEquationSolved = 14896;
}
/*
equation index: 14897
type: SIMPLE_ASSIGN
$DAEres38 = goverNordic_g14.waterFlow.k * goverNordic_g14.dH.y - der(goverNordic_g14.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14897};
  (data->simulationInfo->daeModeData->residualVars[38]) /* $DAEres38 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2755]] /* goverNordic_g14.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2167]] /* goverNordic_g14.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* der(goverNordic_g14.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14897;
}
/*
equation index: 14898
type: SIMPLE_ASSIGN
goverNordic_g14.dOmega.y = goverNordic_g14.const1.k - g14.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14898};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2168]] /* goverNordic_g14.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2727]] /* goverNordic_g14.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14898;
}
/*
equation index: 14899
type: SIMPLE_ASSIGN
goverNordic_g14.dP.y = goverNordic_g14.const.k - goverNordic_g14.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2170]] /* goverNordic_g14.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2726]] /* goverNordic_g14.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* goverNordic_g14.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14899;
}
/*
equation index: 14900
type: SIMPLE_ASSIGN
goverNordic_g14.dOmegaPlusDroop.y = goverNordic_g14.dOmegaPlusDroop.k1 * goverNordic_g14.dOmega.y + goverNordic_g14.dOmegaPlusDroop.k2 * goverNordic_g14.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2169]] /* goverNordic_g14.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2729]] /* goverNordic_g14.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2168]] /* goverNordic_g14.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2730]] /* goverNordic_g14.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2170]] /* goverNordic_g14.dP.y variable */));
  threadData->lastEquationSolved = 14900;
}
/*
equation index: 14901
type: SIMPLE_ASSIGN
goverNordic_g14.govKi.y = goverNordic_g14.govKi.k * goverNordic_g14.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2173]] /* goverNordic_g14.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2736]] /* goverNordic_g14.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2169]] /* goverNordic_g14.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14901;
}
/*
equation index: 14902
type: SIMPLE_ASSIGN
$DAEres36 = goverNordic_g14.govInt.k * goverNordic_g14.govKi.y - der(goverNordic_g14.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14902};
  (data->simulationInfo->daeModeData->residualVars[36]) /* $DAEres36 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2734]] /* goverNordic_g14.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2173]] /* goverNordic_g14.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* der(goverNordic_g14.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14902;
}
/*
equation index: 14903
type: SIMPLE_ASSIGN
goverNordic_g14.govKp.y = goverNordic_g14.govKp.k * goverNordic_g14.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2174]] /* goverNordic_g14.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2737]] /* goverNordic_g14.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2169]] /* goverNordic_g14.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14903;
}
/*
equation index: 14904
type: SIMPLE_ASSIGN
goverNordic_g14.govOut.y = goverNordic_g14.govOut.k1 * goverNordic_g14.govKp.y + goverNordic_g14.govOut.k2 * goverNordic_g14.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2175]] /* goverNordic_g14.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2738]] /* goverNordic_g14.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2174]] /* goverNordic_g14.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2739]] /* goverNordic_g14.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* goverNordic_g14.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14904;
}
/*
equation index: 14905
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.feedback.y = goverNordic_g14.govOut.y - goverNordic_g14.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2177]] /* goverNordic_g14.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2175]] /* goverNordic_g14.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14905;
}
/*
equation index: 14906
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.gain.y = goverNordic_g14.limRateLimFirstOrder.gain.k * goverNordic_g14.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2178]] /* goverNordic_g14.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* goverNordic_g14.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2177]] /* goverNordic_g14.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14906;
}
/*
equation index: 14907
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g14.limRateLimFirstOrder.gain.y > goverNordic_g14.limRateLimFirstOrder.limiter.uMax then goverNordic_g14.limRateLimFirstOrder.limiter.uMax else if goverNordic_g14.limRateLimFirstOrder.gain.y < goverNordic_g14.limRateLimFirstOrder.limiter.uMin then goverNordic_g14.limRateLimFirstOrder.limiter.uMin else goverNordic_g14.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14907};
  modelica_boolean tmp776;
  modelica_boolean tmp777;
  modelica_boolean tmp778;
  modelica_real tmp779;
  tmp776 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2178]] /* goverNordic_g14.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp778 = (modelica_boolean)tmp776;
  if(tmp778)
  {
    tmp779 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp777 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2178]] /* goverNordic_g14.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp779 = (tmp777?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2178]] /* goverNordic_g14.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */) = tmp779;
  threadData->lastEquationSolved = 14907;
}
/*
equation index: 14908
type: SIMPLE_ASSIGN
$DAEres37 = (if goverNordic_g14.limRateLimFirstOrder.limIntegrator.y < goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g14.limRateLimFirstOrder.limIntegrator.k * goverNordic_g14.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g14.limRateLimFirstOrder.limIntegrator.y > goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g14.limRateLimFirstOrder.limIntegrator.k * goverNordic_g14.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g14.limRateLimFirstOrder.limIntegrator.k * goverNordic_g14.limRateLimFirstOrder.limiter.y) - der(goverNordic_g14.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14908};
  modelica_boolean tmp780;
  modelica_real tmp781;
  modelica_real tmp782;
  modelica_boolean tmp783;
  modelica_real tmp784;
  modelica_real tmp785;
  modelica_boolean tmp786;
  modelica_real tmp787;
  modelica_real tmp788;
  modelica_boolean tmp789;
  modelica_real tmp790;
  modelica_real tmp791;
  tmp781 = 1.0;
  tmp782 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp780, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp781, tmp782, 448, Less, LessZC);
  tmp784 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp785 = 0.0;
  relationhysteresis(data, &tmp783, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp784, tmp785, 449, Less, LessZC);
  tmp787 = 1.0;
  tmp788 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp786, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp787, tmp788, 450, Greater, GreaterZC);
  tmp790 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp791 = 0.0;
  relationhysteresis(data, &tmp789, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp790, tmp791, 451, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[37]) /* $DAEres37 DAE_RESIDUAL_VAR */ = (((tmp780 && tmp783) || (tmp786 && tmp789))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* der(goverNordic_g14.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14908;
}
/*
equation index: 14909
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.x[1] = vrNordic_g15.leadLag1.x_scaled[1] / vrNordic_g15.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3795]] /* vrNordic_g15.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* vrNordic_g15.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5265]] /* vrNordic_g15.leadLag1.a_end PARAM */),"vrNordic_g15.leadLag1.a_end");
  threadData->lastEquationSolved = 14909;
}
/*
equation index: 14910
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.x[1] = vrNordic_g15.leadLag2.x_scaled[1] / vrNordic_g15.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14910};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3797]] /* vrNordic_g15.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* vrNordic_g15.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5278]] /* vrNordic_g15.leadLag2.a_end PARAM */),"vrNordic_g15.leadLag2.a_end");
  threadData->lastEquationSolved = 14910;
}
/*
equation index: 14911
type: SIMPLE_ASSIGN
vrNordic_g15.greaterEqualThreshold.y = vrNordic_g15.timer.y >= vrNordic_g15.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14911};
  modelica_boolean tmp792;
  modelica_real tmp793;
  modelica_real tmp794;
  tmp793 = 1.0;
  tmp794 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5246]] /* vrNordic_g15.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp792, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5246]] /* vrNordic_g15.greaterEqualThreshold.threshold PARAM */), tmp793, tmp794, 453, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1057]] /* vrNordic_g15.greaterEqualThreshold.y DISCRETE */) = tmp792;
  threadData->lastEquationSolved = 14911;
}
/*
equation index: 14912
type: SIMPLE_ASSIGN
vrNordic_g15.dOmega.y = g15.omegaPu - vrNordic_g15.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3786]] /* vrNordic_g15.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5237]] /* vrNordic_g15.const.k PARAM */);
  threadData->lastEquationSolved = 14912;
}
/*
equation index: 14913
type: SIMPLE_ASSIGN
vrNordic_g15.derivative.y = if vrNordic_g15.derivative.zeroGain then 0.0 else vrNordic_g15.derivative.k / vrNordic_g15.derivative.T * (vrNordic_g15.dOmega.y - vrNordic_g15.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3788]] /* vrNordic_g15.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1015]] /* vrNordic_g15.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5241]] /* vrNordic_g15.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5240]] /* vrNordic_g15.derivative.T PARAM */),"vrNordic_g15.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3786]] /* vrNordic_g15.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* vrNordic_g15.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14913;
}
/*
equation index: 14914
type: SIMPLE_ASSIGN
$DAEres33 = vrNordic_g15.leadLag1.a_end * vrNordic_g15.derivative.y + (-vrNordic_g15.leadLag1.a[2]) * vrNordic_g15.leadLag1.x_scaled[1] - der(vrNordic_g15.leadLag1.x_scaled[1]) * vrNordic_g15.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14914};
  (data->simulationInfo->daeModeData->residualVars[33]) /* $DAEres33 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5265]] /* vrNordic_g15.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3788]] /* vrNordic_g15.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5264]] /* vrNordic_g15.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* vrNordic_g15.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* der(vrNordic_g15.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5263]] /* vrNordic_g15.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14914;
}
/*
equation index: 14915
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.y = (vrNordic_g15.leadLag1.bb[2] - vrNordic_g15.leadLag1.d * vrNordic_g15.leadLag1.a[2]) * vrNordic_g15.leadLag1.x[1] + vrNordic_g15.leadLag1.d * vrNordic_g15.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14915};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3796]] /* vrNordic_g15.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5269]] /* vrNordic_g15.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5270]] /* vrNordic_g15.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5264]] /* vrNordic_g15.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3795]] /* vrNordic_g15.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5270]] /* vrNordic_g15.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3788]] /* vrNordic_g15.derivative.y variable */));
  threadData->lastEquationSolved = 14915;
}
/*
equation index: 14916
type: SIMPLE_ASSIGN
$DAEres34 = vrNordic_g15.leadLag2.a_end * vrNordic_g15.leadLag1.y + (-vrNordic_g15.leadLag2.a[2]) * vrNordic_g15.leadLag2.x_scaled[1] - der(vrNordic_g15.leadLag2.x_scaled[1]) * vrNordic_g15.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14916};
  (data->simulationInfo->daeModeData->residualVars[34]) /* $DAEres34 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5278]] /* vrNordic_g15.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3796]] /* vrNordic_g15.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5277]] /* vrNordic_g15.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* vrNordic_g15.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* der(vrNordic_g15.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5276]] /* vrNordic_g15.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14916;
}
/*
equation index: 14917
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.y = (vrNordic_g15.leadLag2.bb[2] - vrNordic_g15.leadLag2.d * vrNordic_g15.leadLag2.a[2]) * vrNordic_g15.leadLag2.x[1] + vrNordic_g15.leadLag2.d * vrNordic_g15.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3798]] /* vrNordic_g15.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5282]] /* vrNordic_g15.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5283]] /* vrNordic_g15.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5277]] /* vrNordic_g15.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3797]] /* vrNordic_g15.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5283]] /* vrNordic_g15.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3796]] /* vrNordic_g15.leadLag1.y variable */));
  threadData->lastEquationSolved = 14917;
}
/*
equation index: 14918
type: SIMPLE_ASSIGN
vrNordic_g15.limiter.y = smooth(0, if vrNordic_g15.leadLag2.y > vrNordic_g15.limiter.uMax then vrNordic_g15.limiter.uMax else if vrNordic_g15.leadLag2.y < vrNordic_g15.limiter.uMin then vrNordic_g15.limiter.uMin else vrNordic_g15.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14918};
  modelica_boolean tmp795;
  modelica_boolean tmp796;
  modelica_boolean tmp797;
  modelica_real tmp798;
  tmp795 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3798]] /* vrNordic_g15.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5291]] /* vrNordic_g15.limiter.uMax PARAM */));
  tmp797 = (modelica_boolean)tmp795;
  if(tmp797)
  {
    tmp798 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5291]] /* vrNordic_g15.limiter.uMax PARAM */);
  }
  else
  {
    tmp796 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3798]] /* vrNordic_g15.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5292]] /* vrNordic_g15.limiter.uMin PARAM */));
    tmp798 = (tmp796?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5292]] /* vrNordic_g15.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3798]] /* vrNordic_g15.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3801]] /* vrNordic_g15.limiter.y variable */) = tmp798;
  threadData->lastEquationSolved = 14918;
}
/*
equation index: 14919
type: SIMPLE_ASSIGN
$DAEres35 = (if vrNordic_g15.derivative.zeroGain then 0.0 else (vrNordic_g15.dOmega.y - vrNordic_g15.derivative.x) / vrNordic_g15.derivative.T) - der(vrNordic_g15.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14919};
  (data->simulationInfo->daeModeData->residualVars[35]) /* $DAEres35 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1015]] /* vrNordic_g15.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3786]] /* vrNordic_g15.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* vrNordic_g15.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5240]] /* vrNordic_g15.derivative.T PARAM */),"vrNordic_g15.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* der(vrNordic_g15.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14919;
}
/*
equation index: 14920
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.x[1] = vrNordic_g15.leadLag.x_scaled[1] / vrNordic_g15.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3793]] /* vrNordic_g15.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* vrNordic_g15.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5252]] /* vrNordic_g15.leadLag.a_end PARAM */),"vrNordic_g15.leadLag.a_end");
  threadData->lastEquationSolved = 14920;
}
/*
equation index: 14921
type: SIMPLE_ASSIGN
goverNordic_g15.flowDivGateOpening.y = goverNordic_g15.waterFlow.y / goverNordic_g15.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14921};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2189]] /* goverNordic_g15.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* goverNordic_g15.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g15.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14921;
}
/*
equation index: 14922
type: SIMPLE_ASSIGN
goverNordic_g15.headWater.y = goverNordic_g15.flowDivGateOpening.y ^ goverNordic_g15.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14922};
  modelica_real tmp799;
  modelica_real tmp800;
  modelica_real tmp801;
  modelica_real tmp802;
  modelica_real tmp803;
  modelica_real tmp804;
  modelica_real tmp805;
  tmp799 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2189]] /* goverNordic_g15.flowDivGateOpening.y variable */);
  tmp800 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2776]] /* goverNordic_g15.headWater.N PARAM */);
  if(tmp799 < 0.0 && tmp800 != 0.0)
  {
    tmp802 = modf(tmp800, &tmp803);
    
    if(tmp802 > 0.5)
    {
      tmp802 -= 1.0;
      tmp803 += 1.0;
    }
    else if(tmp802 < -0.5)
    {
      tmp802 += 1.0;
      tmp803 -= 1.0;
    }
    
    if(fabs(tmp802) < 1e-10)
      tmp801 = pow(tmp799, tmp803);
    else
    {
      tmp805 = modf(1.0/tmp800, &tmp804);
      if(tmp805 > 0.5)
      {
        tmp805 -= 1.0;
        tmp804 += 1.0;
      }
      else if(tmp805 < -0.5)
      {
        tmp805 += 1.0;
        tmp804 -= 1.0;
      }
      if(fabs(tmp805) < 1e-10 && ((unsigned long)tmp804 & 1))
      {
        tmp801 = -pow(-tmp799, tmp802)*pow(tmp799, tmp803);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp799, tmp800);
      }
    }
  }
  else
  {
    tmp801 = pow(tmp799, tmp800);
  }
  if(isnan(tmp801) || isinf(tmp801))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp799, tmp800);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2194]] /* goverNordic_g15.headWater.y variable */) = tmp801;
  threadData->lastEquationSolved = 14922;
}
/*
equation index: 14923
type: SIMPLE_ASSIGN
g15.PmPu = goverNordic_g15.waterFlow.y * goverNordic_g15.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1663]] /* g15.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* goverNordic_g15.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2194]] /* goverNordic_g15.headWater.y variable */));
  threadData->lastEquationSolved = 14923;
}
/*
equation index: 14924
type: SIMPLE_ASSIGN
goverNordic_g15.dH.y = goverNordic_g15.const2.k - goverNordic_g15.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14924};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2185]] /* goverNordic_g15.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* goverNordic_g15.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2194]] /* goverNordic_g15.headWater.y variable */);
  threadData->lastEquationSolved = 14924;
}
/*
equation index: 14925
type: SIMPLE_ASSIGN
$DAEres32 = goverNordic_g15.waterFlow.k * goverNordic_g15.dH.y - der(goverNordic_g15.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14925};
  (data->simulationInfo->daeModeData->residualVars[32]) /* $DAEres32 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2791]] /* goverNordic_g15.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2185]] /* goverNordic_g15.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* der(goverNordic_g15.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14925;
}
/*
equation index: 14926
type: SIMPLE_ASSIGN
goverNordic_g15.dOmega.y = goverNordic_g15.const1.k - g15.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2186]] /* goverNordic_g15.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2763]] /* goverNordic_g15.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14926;
}
/*
equation index: 14927
type: SIMPLE_ASSIGN
goverNordic_g15.dP.y = goverNordic_g15.const.k - goverNordic_g15.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2188]] /* goverNordic_g15.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2762]] /* goverNordic_g15.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* goverNordic_g15.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14927;
}
/*
equation index: 14928
type: SIMPLE_ASSIGN
goverNordic_g15.dOmegaPlusDroop.y = goverNordic_g15.dOmegaPlusDroop.k1 * goverNordic_g15.dOmega.y + goverNordic_g15.dOmegaPlusDroop.k2 * goverNordic_g15.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2187]] /* goverNordic_g15.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2765]] /* goverNordic_g15.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2186]] /* goverNordic_g15.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* goverNordic_g15.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2188]] /* goverNordic_g15.dP.y variable */));
  threadData->lastEquationSolved = 14928;
}
/*
equation index: 14929
type: SIMPLE_ASSIGN
goverNordic_g15.govKi.y = goverNordic_g15.govKi.k * goverNordic_g15.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2191]] /* goverNordic_g15.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2772]] /* goverNordic_g15.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2187]] /* goverNordic_g15.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14929;
}
/*
equation index: 14930
type: SIMPLE_ASSIGN
$DAEres30 = goverNordic_g15.govInt.k * goverNordic_g15.govKi.y - der(goverNordic_g15.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14930};
  (data->simulationInfo->daeModeData->residualVars[30]) /* $DAEres30 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2770]] /* goverNordic_g15.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2191]] /* goverNordic_g15.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[497]] /* der(goverNordic_g15.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14930;
}
/*
equation index: 14931
type: SIMPLE_ASSIGN
goverNordic_g15.govKp.y = goverNordic_g15.govKp.k * goverNordic_g15.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2192]] /* goverNordic_g15.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2773]] /* goverNordic_g15.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2187]] /* goverNordic_g15.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14931;
}
/*
equation index: 14932
type: SIMPLE_ASSIGN
goverNordic_g15.govOut.y = goverNordic_g15.govOut.k1 * goverNordic_g15.govKp.y + goverNordic_g15.govOut.k2 * goverNordic_g15.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14932};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2193]] /* goverNordic_g15.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* goverNordic_g15.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2192]] /* goverNordic_g15.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2775]] /* goverNordic_g15.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* goverNordic_g15.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14932;
}
/*
equation index: 14933
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.feedback.y = goverNordic_g15.govOut.y - goverNordic_g15.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2195]] /* goverNordic_g15.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2193]] /* goverNordic_g15.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14933;
}
/*
equation index: 14934
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.gain.y = goverNordic_g15.limRateLimFirstOrder.gain.k * goverNordic_g15.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2196]] /* goverNordic_g15.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2782]] /* goverNordic_g15.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2195]] /* goverNordic_g15.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14934;
}
/*
equation index: 14935
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g15.limRateLimFirstOrder.gain.y > goverNordic_g15.limRateLimFirstOrder.limiter.uMax then goverNordic_g15.limRateLimFirstOrder.limiter.uMax else if goverNordic_g15.limRateLimFirstOrder.gain.y < goverNordic_g15.limRateLimFirstOrder.limiter.uMin then goverNordic_g15.limRateLimFirstOrder.limiter.uMin else goverNordic_g15.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14935};
  modelica_boolean tmp806;
  modelica_boolean tmp807;
  modelica_boolean tmp808;
  modelica_real tmp809;
  tmp806 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2196]] /* goverNordic_g15.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp808 = (modelica_boolean)tmp806;
  if(tmp808)
  {
    tmp809 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp807 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2196]] /* goverNordic_g15.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp809 = (tmp807?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2196]] /* goverNordic_g15.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */) = tmp809;
  threadData->lastEquationSolved = 14935;
}
/*
equation index: 14936
type: SIMPLE_ASSIGN
$DAEres31 = (if goverNordic_g15.limRateLimFirstOrder.limIntegrator.y < goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g15.limRateLimFirstOrder.limIntegrator.k * goverNordic_g15.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g15.limRateLimFirstOrder.limIntegrator.y > goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g15.limRateLimFirstOrder.limIntegrator.k * goverNordic_g15.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g15.limRateLimFirstOrder.limIntegrator.k * goverNordic_g15.limRateLimFirstOrder.limiter.y) - der(goverNordic_g15.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14936};
  modelica_boolean tmp810;
  modelica_real tmp811;
  modelica_real tmp812;
  modelica_boolean tmp813;
  modelica_real tmp814;
  modelica_real tmp815;
  modelica_boolean tmp816;
  modelica_real tmp817;
  modelica_real tmp818;
  modelica_boolean tmp819;
  modelica_real tmp820;
  modelica_real tmp821;
  tmp811 = 1.0;
  tmp812 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp810, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp811, tmp812, 464, Less, LessZC);
  tmp814 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp815 = 0.0;
  relationhysteresis(data, &tmp813, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp814, tmp815, 465, Less, LessZC);
  tmp817 = 1.0;
  tmp818 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp816, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp817, tmp818, 466, Greater, GreaterZC);
  tmp820 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp821 = 0.0;
  relationhysteresis(data, &tmp819, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp820, tmp821, 467, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[31]) /* $DAEres31 DAE_RESIDUAL_VAR */ = (((tmp810 && tmp813) || (tmp816 && tmp819))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* der(goverNordic_g15.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14936;
}
/*
equation index: 14937
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.x[1] = vrNordic_g16.leadLag1.x_scaled[1] / vrNordic_g16.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14937};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3819]] /* vrNordic_g16.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* vrNordic_g16.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5344]] /* vrNordic_g16.leadLag1.a_end PARAM */),"vrNordic_g16.leadLag1.a_end");
  threadData->lastEquationSolved = 14937;
}
/*
equation index: 14938
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.x[1] = vrNordic_g16.leadLag2.x_scaled[1] / vrNordic_g16.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14938};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3821]] /* vrNordic_g16.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* vrNordic_g16.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5357]] /* vrNordic_g16.leadLag2.a_end PARAM */),"vrNordic_g16.leadLag2.a_end");
  threadData->lastEquationSolved = 14938;
}
/*
equation index: 14939
type: SIMPLE_ASSIGN
vrNordic_g16.greaterEqualThreshold.y = vrNordic_g16.timer.y >= vrNordic_g16.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14939};
  modelica_boolean tmp822;
  modelica_real tmp823;
  modelica_real tmp824;
  tmp823 = 1.0;
  tmp824 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5325]] /* vrNordic_g16.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp822, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5325]] /* vrNordic_g16.greaterEqualThreshold.threshold PARAM */), tmp823, tmp824, 469, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1060]] /* vrNordic_g16.greaterEqualThreshold.y DISCRETE */) = tmp822;
  threadData->lastEquationSolved = 14939;
}
/*
equation index: 14940
type: SIMPLE_ASSIGN
vrNordic_g16.dOmega.y = g16.omegaPu - vrNordic_g16.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3810]] /* vrNordic_g16.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5316]] /* vrNordic_g16.const.k PARAM */);
  threadData->lastEquationSolved = 14940;
}
/*
equation index: 14941
type: SIMPLE_ASSIGN
vrNordic_g16.derivative.y = if vrNordic_g16.derivative.zeroGain then 0.0 else vrNordic_g16.derivative.k / vrNordic_g16.derivative.T * (vrNordic_g16.dOmega.y - vrNordic_g16.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14941};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3812]] /* vrNordic_g16.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1026]] /* vrNordic_g16.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5320]] /* vrNordic_g16.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5319]] /* vrNordic_g16.derivative.T PARAM */),"vrNordic_g16.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3810]] /* vrNordic_g16.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* vrNordic_g16.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14941;
}
/*
equation index: 14942
type: SIMPLE_ASSIGN
$DAEres27 = vrNordic_g16.leadLag1.a_end * vrNordic_g16.derivative.y + (-vrNordic_g16.leadLag1.a[2]) * vrNordic_g16.leadLag1.x_scaled[1] - der(vrNordic_g16.leadLag1.x_scaled[1]) * vrNordic_g16.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14942};
  (data->simulationInfo->daeModeData->residualVars[27]) /* $DAEres27 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5344]] /* vrNordic_g16.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3812]] /* vrNordic_g16.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5343]] /* vrNordic_g16.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* vrNordic_g16.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* der(vrNordic_g16.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5342]] /* vrNordic_g16.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14942;
}
/*
equation index: 14943
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.y = (vrNordic_g16.leadLag1.bb[2] - vrNordic_g16.leadLag1.d * vrNordic_g16.leadLag1.a[2]) * vrNordic_g16.leadLag1.x[1] + vrNordic_g16.leadLag1.d * vrNordic_g16.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14943};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3820]] /* vrNordic_g16.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5348]] /* vrNordic_g16.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5349]] /* vrNordic_g16.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5343]] /* vrNordic_g16.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3819]] /* vrNordic_g16.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5349]] /* vrNordic_g16.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3812]] /* vrNordic_g16.derivative.y variable */));
  threadData->lastEquationSolved = 14943;
}
/*
equation index: 14944
type: SIMPLE_ASSIGN
$DAEres28 = vrNordic_g16.leadLag2.a_end * vrNordic_g16.leadLag1.y + (-vrNordic_g16.leadLag2.a[2]) * vrNordic_g16.leadLag2.x_scaled[1] - der(vrNordic_g16.leadLag2.x_scaled[1]) * vrNordic_g16.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14944};
  (data->simulationInfo->daeModeData->residualVars[28]) /* $DAEres28 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5357]] /* vrNordic_g16.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3820]] /* vrNordic_g16.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5356]] /* vrNordic_g16.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* vrNordic_g16.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* der(vrNordic_g16.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5355]] /* vrNordic_g16.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14944;
}
/*
equation index: 14945
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.y = (vrNordic_g16.leadLag2.bb[2] - vrNordic_g16.leadLag2.d * vrNordic_g16.leadLag2.a[2]) * vrNordic_g16.leadLag2.x[1] + vrNordic_g16.leadLag2.d * vrNordic_g16.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3822]] /* vrNordic_g16.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5361]] /* vrNordic_g16.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5362]] /* vrNordic_g16.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5356]] /* vrNordic_g16.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3821]] /* vrNordic_g16.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5362]] /* vrNordic_g16.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3820]] /* vrNordic_g16.leadLag1.y variable */));
  threadData->lastEquationSolved = 14945;
}
/*
equation index: 14946
type: SIMPLE_ASSIGN
vrNordic_g16.limiter.y = smooth(0, if vrNordic_g16.leadLag2.y > vrNordic_g16.limiter.uMax then vrNordic_g16.limiter.uMax else if vrNordic_g16.leadLag2.y < vrNordic_g16.limiter.uMin then vrNordic_g16.limiter.uMin else vrNordic_g16.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14946};
  modelica_boolean tmp825;
  modelica_boolean tmp826;
  modelica_boolean tmp827;
  modelica_real tmp828;
  tmp825 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3822]] /* vrNordic_g16.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5370]] /* vrNordic_g16.limiter.uMax PARAM */));
  tmp827 = (modelica_boolean)tmp825;
  if(tmp827)
  {
    tmp828 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5370]] /* vrNordic_g16.limiter.uMax PARAM */);
  }
  else
  {
    tmp826 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3822]] /* vrNordic_g16.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5371]] /* vrNordic_g16.limiter.uMin PARAM */));
    tmp828 = (tmp826?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5371]] /* vrNordic_g16.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3822]] /* vrNordic_g16.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3825]] /* vrNordic_g16.limiter.y variable */) = tmp828;
  threadData->lastEquationSolved = 14946;
}
/*
equation index: 14947
type: SIMPLE_ASSIGN
$DAEres29 = (if vrNordic_g16.derivative.zeroGain then 0.0 else (vrNordic_g16.dOmega.y - vrNordic_g16.derivative.x) / vrNordic_g16.derivative.T) - der(vrNordic_g16.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14947};
  (data->simulationInfo->daeModeData->residualVars[29]) /* $DAEres29 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1026]] /* vrNordic_g16.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3810]] /* vrNordic_g16.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* vrNordic_g16.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5319]] /* vrNordic_g16.derivative.T PARAM */),"vrNordic_g16.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* der(vrNordic_g16.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14947;
}
/*
equation index: 14948
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.x[1] = vrNordic_g16.leadLag.x_scaled[1] / vrNordic_g16.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14948};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3817]] /* vrNordic_g16.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* vrNordic_g16.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5331]] /* vrNordic_g16.leadLag.a_end PARAM */),"vrNordic_g16.leadLag.a_end");
  threadData->lastEquationSolved = 14948;
}
/*
equation index: 14949
type: SIMPLE_ASSIGN
goverNordic_g16.flowDivGateOpening.y = goverNordic_g16.waterFlow.y / goverNordic_g16.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14949};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2207]] /* goverNordic_g16.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* goverNordic_g16.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g16.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14949;
}
/*
equation index: 14950
type: SIMPLE_ASSIGN
goverNordic_g16.headWater.y = goverNordic_g16.flowDivGateOpening.y ^ goverNordic_g16.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14950};
  modelica_real tmp829;
  modelica_real tmp830;
  modelica_real tmp831;
  modelica_real tmp832;
  modelica_real tmp833;
  modelica_real tmp834;
  modelica_real tmp835;
  tmp829 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2207]] /* goverNordic_g16.flowDivGateOpening.y variable */);
  tmp830 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2812]] /* goverNordic_g16.headWater.N PARAM */);
  if(tmp829 < 0.0 && tmp830 != 0.0)
  {
    tmp832 = modf(tmp830, &tmp833);
    
    if(tmp832 > 0.5)
    {
      tmp832 -= 1.0;
      tmp833 += 1.0;
    }
    else if(tmp832 < -0.5)
    {
      tmp832 += 1.0;
      tmp833 -= 1.0;
    }
    
    if(fabs(tmp832) < 1e-10)
      tmp831 = pow(tmp829, tmp833);
    else
    {
      tmp835 = modf(1.0/tmp830, &tmp834);
      if(tmp835 > 0.5)
      {
        tmp835 -= 1.0;
        tmp834 += 1.0;
      }
      else if(tmp835 < -0.5)
      {
        tmp835 += 1.0;
        tmp834 -= 1.0;
      }
      if(fabs(tmp835) < 1e-10 && ((unsigned long)tmp834 & 1))
      {
        tmp831 = -pow(-tmp829, tmp832)*pow(tmp829, tmp833);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp829, tmp830);
      }
    }
  }
  else
  {
    tmp831 = pow(tmp829, tmp830);
  }
  if(isnan(tmp831) || isinf(tmp831))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp829, tmp830);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* goverNordic_g16.headWater.y variable */) = tmp831;
  threadData->lastEquationSolved = 14950;
}
/*
equation index: 14951
type: SIMPLE_ASSIGN
g16.PmPu = goverNordic_g16.waterFlow.y * goverNordic_g16.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14951};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* g16.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* goverNordic_g16.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* goverNordic_g16.headWater.y variable */));
  threadData->lastEquationSolved = 14951;
}
/*
equation index: 14952
type: SIMPLE_ASSIGN
goverNordic_g16.dH.y = goverNordic_g16.const2.k - goverNordic_g16.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14952};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2203]] /* goverNordic_g16.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2800]] /* goverNordic_g16.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* goverNordic_g16.headWater.y variable */);
  threadData->lastEquationSolved = 14952;
}
/*
equation index: 14953
type: SIMPLE_ASSIGN
$DAEres26 = goverNordic_g16.waterFlow.k * goverNordic_g16.dH.y - der(goverNordic_g16.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14953};
  (data->simulationInfo->daeModeData->residualVars[26]) /* $DAEres26 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2827]] /* goverNordic_g16.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2203]] /* goverNordic_g16.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* der(goverNordic_g16.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14953;
}
/*
equation index: 14954
type: SIMPLE_ASSIGN
goverNordic_g16.dOmega.y = goverNordic_g16.const1.k - g16.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14954};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2204]] /* goverNordic_g16.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2799]] /* goverNordic_g16.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14954;
}
/*
equation index: 14955
type: SIMPLE_ASSIGN
goverNordic_g16.dP.y = goverNordic_g16.const.k - goverNordic_g16.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14955};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2206]] /* goverNordic_g16.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* goverNordic_g16.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* goverNordic_g16.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14955;
}
/*
equation index: 14956
type: SIMPLE_ASSIGN
goverNordic_g16.dOmegaPlusDroop.y = goverNordic_g16.dOmegaPlusDroop.k1 * goverNordic_g16.dOmega.y + goverNordic_g16.dOmegaPlusDroop.k2 * goverNordic_g16.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14956};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2205]] /* goverNordic_g16.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2801]] /* goverNordic_g16.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2204]] /* goverNordic_g16.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2802]] /* goverNordic_g16.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2206]] /* goverNordic_g16.dP.y variable */));
  threadData->lastEquationSolved = 14956;
}
/*
equation index: 14957
type: SIMPLE_ASSIGN
goverNordic_g16.govKi.y = goverNordic_g16.govKi.k * goverNordic_g16.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14957};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2209]] /* goverNordic_g16.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* goverNordic_g16.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2205]] /* goverNordic_g16.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14957;
}
/*
equation index: 14958
type: SIMPLE_ASSIGN
$DAEres24 = goverNordic_g16.govInt.k * goverNordic_g16.govKi.y - der(goverNordic_g16.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14958};
  (data->simulationInfo->daeModeData->residualVars[24]) /* $DAEres24 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2806]] /* goverNordic_g16.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2209]] /* goverNordic_g16.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* der(goverNordic_g16.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14958;
}
/*
equation index: 14959
type: SIMPLE_ASSIGN
goverNordic_g16.govKp.y = goverNordic_g16.govKp.k * goverNordic_g16.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2210]] /* goverNordic_g16.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* goverNordic_g16.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2205]] /* goverNordic_g16.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14959;
}
/*
equation index: 14960
type: SIMPLE_ASSIGN
goverNordic_g16.govOut.y = goverNordic_g16.govOut.k1 * goverNordic_g16.govKp.y + goverNordic_g16.govOut.k2 * goverNordic_g16.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14960};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2211]] /* goverNordic_g16.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* goverNordic_g16.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2210]] /* goverNordic_g16.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* goverNordic_g16.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* goverNordic_g16.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14960;
}
/*
equation index: 14961
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.feedback.y = goverNordic_g16.govOut.y - goverNordic_g16.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14961};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2213]] /* goverNordic_g16.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2211]] /* goverNordic_g16.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14961;
}
/*
equation index: 14962
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.gain.y = goverNordic_g16.limRateLimFirstOrder.gain.k * goverNordic_g16.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14962};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2214]] /* goverNordic_g16.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2818]] /* goverNordic_g16.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2213]] /* goverNordic_g16.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14962;
}
/*
equation index: 14963
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g16.limRateLimFirstOrder.gain.y > goverNordic_g16.limRateLimFirstOrder.limiter.uMax then goverNordic_g16.limRateLimFirstOrder.limiter.uMax else if goverNordic_g16.limRateLimFirstOrder.gain.y < goverNordic_g16.limRateLimFirstOrder.limiter.uMin then goverNordic_g16.limRateLimFirstOrder.limiter.uMin else goverNordic_g16.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14963};
  modelica_boolean tmp836;
  modelica_boolean tmp837;
  modelica_boolean tmp838;
  modelica_real tmp839;
  tmp836 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2214]] /* goverNordic_g16.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp838 = (modelica_boolean)tmp836;
  if(tmp838)
  {
    tmp839 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp837 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2214]] /* goverNordic_g16.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp839 = (tmp837?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2214]] /* goverNordic_g16.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */) = tmp839;
  threadData->lastEquationSolved = 14963;
}
/*
equation index: 14964
type: SIMPLE_ASSIGN
$DAEres25 = (if goverNordic_g16.limRateLimFirstOrder.limIntegrator.y < goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g16.limRateLimFirstOrder.limIntegrator.k * goverNordic_g16.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g16.limRateLimFirstOrder.limIntegrator.y > goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g16.limRateLimFirstOrder.limIntegrator.k * goverNordic_g16.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g16.limRateLimFirstOrder.limIntegrator.k * goverNordic_g16.limRateLimFirstOrder.limiter.y) - der(goverNordic_g16.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14964};
  modelica_boolean tmp840;
  modelica_real tmp841;
  modelica_real tmp842;
  modelica_boolean tmp843;
  modelica_real tmp844;
  modelica_real tmp845;
  modelica_boolean tmp846;
  modelica_real tmp847;
  modelica_real tmp848;
  modelica_boolean tmp849;
  modelica_real tmp850;
  modelica_real tmp851;
  tmp841 = 1.0;
  tmp842 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp840, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp841, tmp842, 480, Less, LessZC);
  tmp844 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp845 = 0.0;
  relationhysteresis(data, &tmp843, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp844, tmp845, 481, Less, LessZC);
  tmp847 = 1.0;
  tmp848 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp846, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp847, tmp848, 482, Greater, GreaterZC);
  tmp850 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp851 = 0.0;
  relationhysteresis(data, &tmp849, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp850, tmp851, 483, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[25]) /* $DAEres25 DAE_RESIDUAL_VAR */ = (((tmp840 && tmp843) || (tmp846 && tmp849))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[502]] /* der(goverNordic_g16.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14964;
}
/*
equation index: 14965
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.x[1] = vrNordic_g17.leadLag1.x_scaled[1] / vrNordic_g17.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3843]] /* vrNordic_g17.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* vrNordic_g17.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5423]] /* vrNordic_g17.leadLag1.a_end PARAM */),"vrNordic_g17.leadLag1.a_end");
  threadData->lastEquationSolved = 14965;
}
/*
equation index: 14966
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.x[1] = vrNordic_g17.leadLag2.x_scaled[1] / vrNordic_g17.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3845]] /* vrNordic_g17.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* vrNordic_g17.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5436]] /* vrNordic_g17.leadLag2.a_end PARAM */),"vrNordic_g17.leadLag2.a_end");
  threadData->lastEquationSolved = 14966;
}
/*
equation index: 14967
type: SIMPLE_ASSIGN
vrNordic_g17.greaterEqualThreshold.y = vrNordic_g17.timer.y >= vrNordic_g17.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14967};
  modelica_boolean tmp852;
  modelica_real tmp853;
  modelica_real tmp854;
  tmp853 = 1.0;
  tmp854 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5404]] /* vrNordic_g17.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp852, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5404]] /* vrNordic_g17.greaterEqualThreshold.threshold PARAM */), tmp853, tmp854, 485, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1063]] /* vrNordic_g17.greaterEqualThreshold.y DISCRETE */) = tmp852;
  threadData->lastEquationSolved = 14967;
}
/*
equation index: 14968
type: SIMPLE_ASSIGN
vrNordic_g17.dOmega.y = g17.omegaPu - vrNordic_g17.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3834]] /* vrNordic_g17.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5395]] /* vrNordic_g17.const.k PARAM */);
  threadData->lastEquationSolved = 14968;
}
/*
equation index: 14969
type: SIMPLE_ASSIGN
vrNordic_g17.derivative.y = if vrNordic_g17.derivative.zeroGain then 0.0 else vrNordic_g17.derivative.k / vrNordic_g17.derivative.T * (vrNordic_g17.dOmega.y - vrNordic_g17.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3836]] /* vrNordic_g17.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1037]] /* vrNordic_g17.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5399]] /* vrNordic_g17.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5398]] /* vrNordic_g17.derivative.T PARAM */),"vrNordic_g17.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3834]] /* vrNordic_g17.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* vrNordic_g17.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14969;
}
/*
equation index: 14970
type: SIMPLE_ASSIGN
$DAEres21 = vrNordic_g17.leadLag1.a_end * vrNordic_g17.derivative.y + (-vrNordic_g17.leadLag1.a[2]) * vrNordic_g17.leadLag1.x_scaled[1] - der(vrNordic_g17.leadLag1.x_scaled[1]) * vrNordic_g17.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14970};
  (data->simulationInfo->daeModeData->residualVars[21]) /* $DAEres21 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5423]] /* vrNordic_g17.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3836]] /* vrNordic_g17.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5422]] /* vrNordic_g17.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* vrNordic_g17.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* der(vrNordic_g17.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5421]] /* vrNordic_g17.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14970;
}
/*
equation index: 14971
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.y = (vrNordic_g17.leadLag1.bb[2] - vrNordic_g17.leadLag1.d * vrNordic_g17.leadLag1.a[2]) * vrNordic_g17.leadLag1.x[1] + vrNordic_g17.leadLag1.d * vrNordic_g17.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3844]] /* vrNordic_g17.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5427]] /* vrNordic_g17.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5428]] /* vrNordic_g17.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5422]] /* vrNordic_g17.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3843]] /* vrNordic_g17.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5428]] /* vrNordic_g17.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3836]] /* vrNordic_g17.derivative.y variable */));
  threadData->lastEquationSolved = 14971;
}
/*
equation index: 14972
type: SIMPLE_ASSIGN
$DAEres22 = vrNordic_g17.leadLag2.a_end * vrNordic_g17.leadLag1.y + (-vrNordic_g17.leadLag2.a[2]) * vrNordic_g17.leadLag2.x_scaled[1] - der(vrNordic_g17.leadLag2.x_scaled[1]) * vrNordic_g17.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14972};
  (data->simulationInfo->daeModeData->residualVars[22]) /* $DAEres22 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5436]] /* vrNordic_g17.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3844]] /* vrNordic_g17.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5435]] /* vrNordic_g17.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* vrNordic_g17.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* der(vrNordic_g17.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5434]] /* vrNordic_g17.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 14972;
}
/*
equation index: 14973
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.y = (vrNordic_g17.leadLag2.bb[2] - vrNordic_g17.leadLag2.d * vrNordic_g17.leadLag2.a[2]) * vrNordic_g17.leadLag2.x[1] + vrNordic_g17.leadLag2.d * vrNordic_g17.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* vrNordic_g17.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5440]] /* vrNordic_g17.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5441]] /* vrNordic_g17.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5435]] /* vrNordic_g17.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3845]] /* vrNordic_g17.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5441]] /* vrNordic_g17.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3844]] /* vrNordic_g17.leadLag1.y variable */));
  threadData->lastEquationSolved = 14973;
}
/*
equation index: 14974
type: SIMPLE_ASSIGN
vrNordic_g17.limiter.y = smooth(0, if vrNordic_g17.leadLag2.y > vrNordic_g17.limiter.uMax then vrNordic_g17.limiter.uMax else if vrNordic_g17.leadLag2.y < vrNordic_g17.limiter.uMin then vrNordic_g17.limiter.uMin else vrNordic_g17.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14974};
  modelica_boolean tmp855;
  modelica_boolean tmp856;
  modelica_boolean tmp857;
  modelica_real tmp858;
  tmp855 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* vrNordic_g17.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5449]] /* vrNordic_g17.limiter.uMax PARAM */));
  tmp857 = (modelica_boolean)tmp855;
  if(tmp857)
  {
    tmp858 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5449]] /* vrNordic_g17.limiter.uMax PARAM */);
  }
  else
  {
    tmp856 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* vrNordic_g17.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5450]] /* vrNordic_g17.limiter.uMin PARAM */));
    tmp858 = (tmp856?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5450]] /* vrNordic_g17.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* vrNordic_g17.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3849]] /* vrNordic_g17.limiter.y variable */) = tmp858;
  threadData->lastEquationSolved = 14974;
}
/*
equation index: 14975
type: SIMPLE_ASSIGN
$DAEres23 = (if vrNordic_g17.derivative.zeroGain then 0.0 else (vrNordic_g17.dOmega.y - vrNordic_g17.derivative.x) / vrNordic_g17.derivative.T) - der(vrNordic_g17.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14975};
  (data->simulationInfo->daeModeData->residualVars[23]) /* $DAEres23 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1037]] /* vrNordic_g17.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3834]] /* vrNordic_g17.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* vrNordic_g17.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5398]] /* vrNordic_g17.derivative.T PARAM */),"vrNordic_g17.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* der(vrNordic_g17.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 14975;
}
/*
equation index: 14976
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.x[1] = vrNordic_g17.leadLag.x_scaled[1] / vrNordic_g17.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3841]] /* vrNordic_g17.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* vrNordic_g17.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5410]] /* vrNordic_g17.leadLag.a_end PARAM */),"vrNordic_g17.leadLag.a_end");
  threadData->lastEquationSolved = 14976;
}
/*
equation index: 14977
type: SIMPLE_ASSIGN
goverNordic_g17.flowDivGateOpening.y = goverNordic_g17.waterFlow.y / goverNordic_g17.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2225]] /* goverNordic_g17.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* goverNordic_g17.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g17.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 14977;
}
/*
equation index: 14978
type: SIMPLE_ASSIGN
goverNordic_g17.headWater.y = goverNordic_g17.flowDivGateOpening.y ^ goverNordic_g17.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14978};
  modelica_real tmp859;
  modelica_real tmp860;
  modelica_real tmp861;
  modelica_real tmp862;
  modelica_real tmp863;
  modelica_real tmp864;
  modelica_real tmp865;
  tmp859 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2225]] /* goverNordic_g17.flowDivGateOpening.y variable */);
  tmp860 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2848]] /* goverNordic_g17.headWater.N PARAM */);
  if(tmp859 < 0.0 && tmp860 != 0.0)
  {
    tmp862 = modf(tmp860, &tmp863);
    
    if(tmp862 > 0.5)
    {
      tmp862 -= 1.0;
      tmp863 += 1.0;
    }
    else if(tmp862 < -0.5)
    {
      tmp862 += 1.0;
      tmp863 -= 1.0;
    }
    
    if(fabs(tmp862) < 1e-10)
      tmp861 = pow(tmp859, tmp863);
    else
    {
      tmp865 = modf(1.0/tmp860, &tmp864);
      if(tmp865 > 0.5)
      {
        tmp865 -= 1.0;
        tmp864 += 1.0;
      }
      else if(tmp865 < -0.5)
      {
        tmp865 += 1.0;
        tmp864 -= 1.0;
      }
      if(fabs(tmp865) < 1e-10 && ((unsigned long)tmp864 & 1))
      {
        tmp861 = -pow(-tmp859, tmp862)*pow(tmp859, tmp863);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp859, tmp860);
      }
    }
  }
  else
  {
    tmp861 = pow(tmp859, tmp860);
  }
  if(isnan(tmp861) || isinf(tmp861))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp859, tmp860);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2230]] /* goverNordic_g17.headWater.y variable */) = tmp861;
  threadData->lastEquationSolved = 14978;
}
/*
equation index: 14979
type: SIMPLE_ASSIGN
g17.PmPu = goverNordic_g17.waterFlow.y * goverNordic_g17.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1755]] /* g17.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* goverNordic_g17.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2230]] /* goverNordic_g17.headWater.y variable */));
  threadData->lastEquationSolved = 14979;
}
/*
equation index: 14980
type: SIMPLE_ASSIGN
goverNordic_g17.dH.y = goverNordic_g17.const2.k - goverNordic_g17.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2221]] /* goverNordic_g17.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* goverNordic_g17.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2230]] /* goverNordic_g17.headWater.y variable */);
  threadData->lastEquationSolved = 14980;
}
/*
equation index: 14981
type: SIMPLE_ASSIGN
$DAEres20 = goverNordic_g17.waterFlow.k * goverNordic_g17.dH.y - der(goverNordic_g17.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14981};
  (data->simulationInfo->daeModeData->residualVars[20]) /* $DAEres20 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2863]] /* goverNordic_g17.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2221]] /* goverNordic_g17.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[507]] /* der(goverNordic_g17.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 14981;
}
/*
equation index: 14982
type: SIMPLE_ASSIGN
goverNordic_g17.dOmega.y = goverNordic_g17.const1.k - g17.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14982};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2222]] /* goverNordic_g17.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2835]] /* goverNordic_g17.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 14982;
}
/*
equation index: 14983
type: SIMPLE_ASSIGN
goverNordic_g17.dP.y = goverNordic_g17.const.k - goverNordic_g17.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2224]] /* goverNordic_g17.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* goverNordic_g17.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* goverNordic_g17.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 14983;
}
/*
equation index: 14984
type: SIMPLE_ASSIGN
goverNordic_g17.dOmegaPlusDroop.y = goverNordic_g17.dOmegaPlusDroop.k1 * goverNordic_g17.dOmega.y + goverNordic_g17.dOmegaPlusDroop.k2 * goverNordic_g17.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2223]] /* goverNordic_g17.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2837]] /* goverNordic_g17.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2222]] /* goverNordic_g17.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2838]] /* goverNordic_g17.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2224]] /* goverNordic_g17.dP.y variable */));
  threadData->lastEquationSolved = 14984;
}
/*
equation index: 14985
type: SIMPLE_ASSIGN
goverNordic_g17.govKi.y = goverNordic_g17.govKi.k * goverNordic_g17.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2227]] /* goverNordic_g17.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* goverNordic_g17.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2223]] /* goverNordic_g17.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14985;
}
/*
equation index: 14986
type: SIMPLE_ASSIGN
$DAEres18 = goverNordic_g17.govInt.k * goverNordic_g17.govKi.y - der(goverNordic_g17.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14986};
  (data->simulationInfo->daeModeData->residualVars[18]) /* $DAEres18 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2842]] /* goverNordic_g17.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2227]] /* goverNordic_g17.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* der(goverNordic_g17.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 14986;
}
/*
equation index: 14987
type: SIMPLE_ASSIGN
goverNordic_g17.govKp.y = goverNordic_g17.govKp.k * goverNordic_g17.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2228]] /* goverNordic_g17.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* goverNordic_g17.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2223]] /* goverNordic_g17.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 14987;
}
/*
equation index: 14988
type: SIMPLE_ASSIGN
goverNordic_g17.govOut.y = goverNordic_g17.govOut.k1 * goverNordic_g17.govKp.y + goverNordic_g17.govOut.k2 * goverNordic_g17.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2229]] /* goverNordic_g17.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2846]] /* goverNordic_g17.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2228]] /* goverNordic_g17.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2847]] /* goverNordic_g17.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* goverNordic_g17.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 14988;
}
/*
equation index: 14989
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.feedback.y = goverNordic_g17.govOut.y - goverNordic_g17.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2231]] /* goverNordic_g17.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2229]] /* goverNordic_g17.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 14989;
}
/*
equation index: 14990
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.gain.y = goverNordic_g17.limRateLimFirstOrder.gain.k * goverNordic_g17.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14990};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2232]] /* goverNordic_g17.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2854]] /* goverNordic_g17.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2231]] /* goverNordic_g17.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 14990;
}
/*
equation index: 14991
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g17.limRateLimFirstOrder.gain.y > goverNordic_g17.limRateLimFirstOrder.limiter.uMax then goverNordic_g17.limRateLimFirstOrder.limiter.uMax else if goverNordic_g17.limRateLimFirstOrder.gain.y < goverNordic_g17.limRateLimFirstOrder.limiter.uMin then goverNordic_g17.limRateLimFirstOrder.limiter.uMin else goverNordic_g17.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14991};
  modelica_boolean tmp866;
  modelica_boolean tmp867;
  modelica_boolean tmp868;
  modelica_real tmp869;
  tmp866 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2232]] /* goverNordic_g17.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp868 = (modelica_boolean)tmp866;
  if(tmp868)
  {
    tmp869 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp867 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2232]] /* goverNordic_g17.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2860]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp869 = (tmp867?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2860]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2232]] /* goverNordic_g17.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */) = tmp869;
  threadData->lastEquationSolved = 14991;
}
/*
equation index: 14992
type: SIMPLE_ASSIGN
$DAEres19 = (if goverNordic_g17.limRateLimFirstOrder.limIntegrator.y < goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g17.limRateLimFirstOrder.limIntegrator.k * goverNordic_g17.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g17.limRateLimFirstOrder.limIntegrator.y > goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g17.limRateLimFirstOrder.limIntegrator.k * goverNordic_g17.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g17.limRateLimFirstOrder.limIntegrator.k * goverNordic_g17.limRateLimFirstOrder.limiter.y) - der(goverNordic_g17.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14992};
  modelica_boolean tmp870;
  modelica_real tmp871;
  modelica_real tmp872;
  modelica_boolean tmp873;
  modelica_real tmp874;
  modelica_real tmp875;
  modelica_boolean tmp876;
  modelica_real tmp877;
  modelica_real tmp878;
  modelica_boolean tmp879;
  modelica_real tmp880;
  modelica_real tmp881;
  tmp871 = 1.0;
  tmp872 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp870, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp871, tmp872, 496, Less, LessZC);
  tmp874 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp875 = 0.0;
  relationhysteresis(data, &tmp873, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp874, tmp875, 497, Less, LessZC);
  tmp877 = 1.0;
  tmp878 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2856]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp876, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2856]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp877, tmp878, 498, Greater, GreaterZC);
  tmp880 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp881 = 0.0;
  relationhysteresis(data, &tmp879, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp880, tmp881, 499, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[19]) /* $DAEres19 DAE_RESIDUAL_VAR */ = (((tmp870 && tmp873) || (tmp876 && tmp879))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[506]] /* der(goverNordic_g17.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 14992;
}
/*
equation index: 14993
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.x[1] = vrNordic_g18.leadLag1.x_scaled[1] / vrNordic_g18.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3867]] /* vrNordic_g18.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* vrNordic_g18.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5502]] /* vrNordic_g18.leadLag1.a_end PARAM */),"vrNordic_g18.leadLag1.a_end");
  threadData->lastEquationSolved = 14993;
}
/*
equation index: 14994
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.x[1] = vrNordic_g18.leadLag2.x_scaled[1] / vrNordic_g18.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3869]] /* vrNordic_g18.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* vrNordic_g18.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5515]] /* vrNordic_g18.leadLag2.a_end PARAM */),"vrNordic_g18.leadLag2.a_end");
  threadData->lastEquationSolved = 14994;
}
/*
equation index: 14995
type: SIMPLE_ASSIGN
vrNordic_g18.greaterEqualThreshold.y = vrNordic_g18.timer.y >= vrNordic_g18.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14995};
  modelica_boolean tmp882;
  modelica_real tmp883;
  modelica_real tmp884;
  tmp883 = 1.0;
  tmp884 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5483]] /* vrNordic_g18.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp882, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5483]] /* vrNordic_g18.greaterEqualThreshold.threshold PARAM */), tmp883, tmp884, 501, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1066]] /* vrNordic_g18.greaterEqualThreshold.y DISCRETE */) = tmp882;
  threadData->lastEquationSolved = 14995;
}
/*
equation index: 14996
type: SIMPLE_ASSIGN
vrNordic_g18.dOmega.y = g18.omegaPu - vrNordic_g18.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3858]] /* vrNordic_g18.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5474]] /* vrNordic_g18.const.k PARAM */);
  threadData->lastEquationSolved = 14996;
}
/*
equation index: 14997
type: SIMPLE_ASSIGN
vrNordic_g18.derivative.y = if vrNordic_g18.derivative.zeroGain then 0.0 else vrNordic_g18.derivative.k / vrNordic_g18.derivative.T * (vrNordic_g18.dOmega.y - vrNordic_g18.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3860]] /* vrNordic_g18.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1048]] /* vrNordic_g18.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5478]] /* vrNordic_g18.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5477]] /* vrNordic_g18.derivative.T PARAM */),"vrNordic_g18.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3858]] /* vrNordic_g18.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* vrNordic_g18.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 14997;
}
/*
equation index: 14998
type: SIMPLE_ASSIGN
$DAEres15 = vrNordic_g18.leadLag1.a_end * vrNordic_g18.derivative.y + (-vrNordic_g18.leadLag1.a[2]) * vrNordic_g18.leadLag1.x_scaled[1] - der(vrNordic_g18.leadLag1.x_scaled[1]) * vrNordic_g18.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14998};
  (data->simulationInfo->daeModeData->residualVars[15]) /* $DAEres15 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5502]] /* vrNordic_g18.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3860]] /* vrNordic_g18.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5501]] /* vrNordic_g18.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* vrNordic_g18.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* der(vrNordic_g18.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5500]] /* vrNordic_g18.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 14998;
}
/*
equation index: 14999
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.y = (vrNordic_g18.leadLag1.bb[2] - vrNordic_g18.leadLag1.d * vrNordic_g18.leadLag1.a[2]) * vrNordic_g18.leadLag1.x[1] + vrNordic_g18.leadLag1.d * vrNordic_g18.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_14999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3868]] /* vrNordic_g18.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5506]] /* vrNordic_g18.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5507]] /* vrNordic_g18.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5501]] /* vrNordic_g18.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3867]] /* vrNordic_g18.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5507]] /* vrNordic_g18.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3860]] /* vrNordic_g18.derivative.y variable */));
  threadData->lastEquationSolved = 14999;
}
/*
equation index: 15000
type: SIMPLE_ASSIGN
$DAEres16 = vrNordic_g18.leadLag2.a_end * vrNordic_g18.leadLag1.y + (-vrNordic_g18.leadLag2.a[2]) * vrNordic_g18.leadLag2.x_scaled[1] - der(vrNordic_g18.leadLag2.x_scaled[1]) * vrNordic_g18.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15000};
  (data->simulationInfo->daeModeData->residualVars[16]) /* $DAEres16 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5515]] /* vrNordic_g18.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3868]] /* vrNordic_g18.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5514]] /* vrNordic_g18.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* vrNordic_g18.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* der(vrNordic_g18.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5513]] /* vrNordic_g18.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 15000;
}
/*
equation index: 15001
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.y = (vrNordic_g18.leadLag2.bb[2] - vrNordic_g18.leadLag2.d * vrNordic_g18.leadLag2.a[2]) * vrNordic_g18.leadLag2.x[1] + vrNordic_g18.leadLag2.d * vrNordic_g18.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3870]] /* vrNordic_g18.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5519]] /* vrNordic_g18.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5520]] /* vrNordic_g18.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5514]] /* vrNordic_g18.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3869]] /* vrNordic_g18.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5520]] /* vrNordic_g18.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3868]] /* vrNordic_g18.leadLag1.y variable */));
  threadData->lastEquationSolved = 15001;
}
/*
equation index: 15002
type: SIMPLE_ASSIGN
vrNordic_g18.limiter.y = smooth(0, if vrNordic_g18.leadLag2.y > vrNordic_g18.limiter.uMax then vrNordic_g18.limiter.uMax else if vrNordic_g18.leadLag2.y < vrNordic_g18.limiter.uMin then vrNordic_g18.limiter.uMin else vrNordic_g18.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15002};
  modelica_boolean tmp885;
  modelica_boolean tmp886;
  modelica_boolean tmp887;
  modelica_real tmp888;
  tmp885 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3870]] /* vrNordic_g18.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5528]] /* vrNordic_g18.limiter.uMax PARAM */));
  tmp887 = (modelica_boolean)tmp885;
  if(tmp887)
  {
    tmp888 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5528]] /* vrNordic_g18.limiter.uMax PARAM */);
  }
  else
  {
    tmp886 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3870]] /* vrNordic_g18.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5529]] /* vrNordic_g18.limiter.uMin PARAM */));
    tmp888 = (tmp886?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5529]] /* vrNordic_g18.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3870]] /* vrNordic_g18.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3873]] /* vrNordic_g18.limiter.y variable */) = tmp888;
  threadData->lastEquationSolved = 15002;
}
/*
equation index: 15003
type: SIMPLE_ASSIGN
$DAEres17 = (if vrNordic_g18.derivative.zeroGain then 0.0 else (vrNordic_g18.dOmega.y - vrNordic_g18.derivative.x) / vrNordic_g18.derivative.T) - der(vrNordic_g18.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15003};
  (data->simulationInfo->daeModeData->residualVars[17]) /* $DAEres17 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1048]] /* vrNordic_g18.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3858]] /* vrNordic_g18.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* vrNordic_g18.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5477]] /* vrNordic_g18.derivative.T PARAM */),"vrNordic_g18.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* der(vrNordic_g18.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 15003;
}
/*
equation index: 15004
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.x[1] = vrNordic_g18.leadLag.x_scaled[1] / vrNordic_g18.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3865]] /* vrNordic_g18.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* vrNordic_g18.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5489]] /* vrNordic_g18.leadLag.a_end PARAM */),"vrNordic_g18.leadLag.a_end");
  threadData->lastEquationSolved = 15004;
}
/*
equation index: 15005
type: SIMPLE_ASSIGN
goverNordic_g18.flowDivGateOpening.y = goverNordic_g18.waterFlow.y / goverNordic_g18.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2243]] /* goverNordic_g18.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* goverNordic_g18.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g18.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 15005;
}
/*
equation index: 15006
type: SIMPLE_ASSIGN
goverNordic_g18.headWater.y = goverNordic_g18.flowDivGateOpening.y ^ goverNordic_g18.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15006};
  modelica_real tmp889;
  modelica_real tmp890;
  modelica_real tmp891;
  modelica_real tmp892;
  modelica_real tmp893;
  modelica_real tmp894;
  modelica_real tmp895;
  tmp889 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2243]] /* goverNordic_g18.flowDivGateOpening.y variable */);
  tmp890 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2884]] /* goverNordic_g18.headWater.N PARAM */);
  if(tmp889 < 0.0 && tmp890 != 0.0)
  {
    tmp892 = modf(tmp890, &tmp893);
    
    if(tmp892 > 0.5)
    {
      tmp892 -= 1.0;
      tmp893 += 1.0;
    }
    else if(tmp892 < -0.5)
    {
      tmp892 += 1.0;
      tmp893 -= 1.0;
    }
    
    if(fabs(tmp892) < 1e-10)
      tmp891 = pow(tmp889, tmp893);
    else
    {
      tmp895 = modf(1.0/tmp890, &tmp894);
      if(tmp895 > 0.5)
      {
        tmp895 -= 1.0;
        tmp894 += 1.0;
      }
      else if(tmp895 < -0.5)
      {
        tmp895 += 1.0;
        tmp894 -= 1.0;
      }
      if(fabs(tmp895) < 1e-10 && ((unsigned long)tmp894 & 1))
      {
        tmp891 = -pow(-tmp889, tmp892)*pow(tmp889, tmp893);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp889, tmp890);
      }
    }
  }
  else
  {
    tmp891 = pow(tmp889, tmp890);
  }
  if(isnan(tmp891) || isinf(tmp891))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp889, tmp890);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2248]] /* goverNordic_g18.headWater.y variable */) = tmp891;
  threadData->lastEquationSolved = 15006;
}
/*
equation index: 15007
type: SIMPLE_ASSIGN
g18.PmPu = goverNordic_g18.waterFlow.y * goverNordic_g18.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1801]] /* g18.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* goverNordic_g18.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2248]] /* goverNordic_g18.headWater.y variable */));
  threadData->lastEquationSolved = 15007;
}
/*
equation index: 15008
type: SIMPLE_ASSIGN
goverNordic_g18.dH.y = goverNordic_g18.const2.k - goverNordic_g18.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2239]] /* goverNordic_g18.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2872]] /* goverNordic_g18.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2248]] /* goverNordic_g18.headWater.y variable */);
  threadData->lastEquationSolved = 15008;
}
/*
equation index: 15009
type: SIMPLE_ASSIGN
$DAEres14 = goverNordic_g18.waterFlow.k * goverNordic_g18.dH.y - der(goverNordic_g18.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15009};
  (data->simulationInfo->daeModeData->residualVars[14]) /* $DAEres14 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2899]] /* goverNordic_g18.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2239]] /* goverNordic_g18.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* der(goverNordic_g18.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 15009;
}
/*
equation index: 15010
type: SIMPLE_ASSIGN
goverNordic_g18.dOmega.y = goverNordic_g18.const1.k - g18.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15010};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2240]] /* goverNordic_g18.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2871]] /* goverNordic_g18.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 15010;
}
/*
equation index: 15011
type: SIMPLE_ASSIGN
goverNordic_g18.dP.y = goverNordic_g18.const.k - goverNordic_g18.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15011};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2242]] /* goverNordic_g18.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2870]] /* goverNordic_g18.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* goverNordic_g18.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 15011;
}
/*
equation index: 15012
type: SIMPLE_ASSIGN
goverNordic_g18.dOmegaPlusDroop.y = goverNordic_g18.dOmegaPlusDroop.k1 * goverNordic_g18.dOmega.y + goverNordic_g18.dOmegaPlusDroop.k2 * goverNordic_g18.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15012};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2241]] /* goverNordic_g18.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2873]] /* goverNordic_g18.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2240]] /* goverNordic_g18.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* goverNordic_g18.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2242]] /* goverNordic_g18.dP.y variable */));
  threadData->lastEquationSolved = 15012;
}
/*
equation index: 15013
type: SIMPLE_ASSIGN
goverNordic_g18.govKi.y = goverNordic_g18.govKi.k * goverNordic_g18.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15013};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2245]] /* goverNordic_g18.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2880]] /* goverNordic_g18.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2241]] /* goverNordic_g18.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 15013;
}
/*
equation index: 15014
type: SIMPLE_ASSIGN
$DAEres12 = goverNordic_g18.govInt.k * goverNordic_g18.govKi.y - der(goverNordic_g18.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15014};
  (data->simulationInfo->daeModeData->residualVars[12]) /* $DAEres12 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2878]] /* goverNordic_g18.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2245]] /* goverNordic_g18.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* der(goverNordic_g18.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 15014;
}
/*
equation index: 15015
type: SIMPLE_ASSIGN
goverNordic_g18.govKp.y = goverNordic_g18.govKp.k * goverNordic_g18.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2246]] /* goverNordic_g18.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2881]] /* goverNordic_g18.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2241]] /* goverNordic_g18.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 15015;
}
/*
equation index: 15016
type: SIMPLE_ASSIGN
goverNordic_g18.govOut.y = goverNordic_g18.govOut.k1 * goverNordic_g18.govKp.y + goverNordic_g18.govOut.k2 * goverNordic_g18.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15016};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2247]] /* goverNordic_g18.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2882]] /* goverNordic_g18.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2246]] /* goverNordic_g18.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2883]] /* goverNordic_g18.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* goverNordic_g18.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 15016;
}
/*
equation index: 15017
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.feedback.y = goverNordic_g18.govOut.y - goverNordic_g18.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15017};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2249]] /* goverNordic_g18.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2247]] /* goverNordic_g18.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15017;
}
/*
equation index: 15018
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.gain.y = goverNordic_g18.limRateLimFirstOrder.gain.k * goverNordic_g18.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15018};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2250]] /* goverNordic_g18.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2890]] /* goverNordic_g18.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2249]] /* goverNordic_g18.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 15018;
}
/*
equation index: 15019
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g18.limRateLimFirstOrder.gain.y > goverNordic_g18.limRateLimFirstOrder.limiter.uMax then goverNordic_g18.limRateLimFirstOrder.limiter.uMax else if goverNordic_g18.limRateLimFirstOrder.gain.y < goverNordic_g18.limRateLimFirstOrder.limiter.uMin then goverNordic_g18.limRateLimFirstOrder.limiter.uMin else goverNordic_g18.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15019};
  modelica_boolean tmp896;
  modelica_boolean tmp897;
  modelica_boolean tmp898;
  modelica_real tmp899;
  tmp896 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2250]] /* goverNordic_g18.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp898 = (modelica_boolean)tmp896;
  if(tmp898)
  {
    tmp899 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp897 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2250]] /* goverNordic_g18.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp899 = (tmp897?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2250]] /* goverNordic_g18.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */) = tmp899;
  threadData->lastEquationSolved = 15019;
}
/*
equation index: 15020
type: SIMPLE_ASSIGN
$DAEres13 = (if goverNordic_g18.limRateLimFirstOrder.limIntegrator.y < goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g18.limRateLimFirstOrder.limIntegrator.k * goverNordic_g18.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g18.limRateLimFirstOrder.limIntegrator.y > goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g18.limRateLimFirstOrder.limIntegrator.k * goverNordic_g18.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g18.limRateLimFirstOrder.limIntegrator.k * goverNordic_g18.limRateLimFirstOrder.limiter.y) - der(goverNordic_g18.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15020};
  modelica_boolean tmp900;
  modelica_real tmp901;
  modelica_real tmp902;
  modelica_boolean tmp903;
  modelica_real tmp904;
  modelica_real tmp905;
  modelica_boolean tmp906;
  modelica_real tmp907;
  modelica_real tmp908;
  modelica_boolean tmp909;
  modelica_real tmp910;
  modelica_real tmp911;
  tmp901 = 1.0;
  tmp902 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp900, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp901, tmp902, 512, Less, LessZC);
  tmp904 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp905 = 0.0;
  relationhysteresis(data, &tmp903, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp904, tmp905, 513, Less, LessZC);
  tmp907 = 1.0;
  tmp908 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp906, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp907, tmp908, 514, Greater, GreaterZC);
  tmp910 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp911 = 0.0;
  relationhysteresis(data, &tmp909, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp910, tmp911, 515, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[13]) /* $DAEres13 DAE_RESIDUAL_VAR */ = (((tmp900 && tmp903) || (tmp906 && tmp909))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* der(goverNordic_g18.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15020;
}
/*
equation index: 15021
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.x[1] = vrNordic_g19.leadLag1.x_scaled[1] / vrNordic_g19.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15021};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3891]] /* vrNordic_g19.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* vrNordic_g19.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5581]] /* vrNordic_g19.leadLag1.a_end PARAM */),"vrNordic_g19.leadLag1.a_end");
  threadData->lastEquationSolved = 15021;
}
/*
equation index: 15022
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.x[1] = vrNordic_g19.leadLag2.x_scaled[1] / vrNordic_g19.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15022};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* vrNordic_g19.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* vrNordic_g19.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5594]] /* vrNordic_g19.leadLag2.a_end PARAM */),"vrNordic_g19.leadLag2.a_end");
  threadData->lastEquationSolved = 15022;
}
/*
equation index: 15023
type: SIMPLE_ASSIGN
vrNordic_g19.greaterEqualThreshold.y = vrNordic_g19.timer.y >= vrNordic_g19.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15023};
  modelica_boolean tmp912;
  modelica_real tmp913;
  modelica_real tmp914;
  tmp913 = 1.0;
  tmp914 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5562]] /* vrNordic_g19.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp912, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5562]] /* vrNordic_g19.greaterEqualThreshold.threshold PARAM */), tmp913, tmp914, 517, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1069]] /* vrNordic_g19.greaterEqualThreshold.y DISCRETE */) = tmp912;
  threadData->lastEquationSolved = 15023;
}
/*
equation index: 15024
type: SIMPLE_ASSIGN
vrNordic_g19.dOmega.y = g19.omegaPu - vrNordic_g19.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15024};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3882]] /* vrNordic_g19.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5553]] /* vrNordic_g19.const.k PARAM */);
  threadData->lastEquationSolved = 15024;
}
/*
equation index: 15025
type: SIMPLE_ASSIGN
vrNordic_g19.derivative.y = if vrNordic_g19.derivative.zeroGain then 0.0 else vrNordic_g19.derivative.k / vrNordic_g19.derivative.T * (vrNordic_g19.dOmega.y - vrNordic_g19.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3884]] /* vrNordic_g19.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1059]] /* vrNordic_g19.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5557]] /* vrNordic_g19.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5556]] /* vrNordic_g19.derivative.T PARAM */),"vrNordic_g19.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3882]] /* vrNordic_g19.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* vrNordic_g19.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 15025;
}
/*
equation index: 15026
type: SIMPLE_ASSIGN
$DAEres9 = vrNordic_g19.leadLag1.a_end * vrNordic_g19.derivative.y + (-vrNordic_g19.leadLag1.a[2]) * vrNordic_g19.leadLag1.x_scaled[1] - der(vrNordic_g19.leadLag1.x_scaled[1]) * vrNordic_g19.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15026};
  (data->simulationInfo->daeModeData->residualVars[9]) /* $DAEres9 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5581]] /* vrNordic_g19.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3884]] /* vrNordic_g19.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5580]] /* vrNordic_g19.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* vrNordic_g19.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* der(vrNordic_g19.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5579]] /* vrNordic_g19.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 15026;
}
/*
equation index: 15027
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.y = (vrNordic_g19.leadLag1.bb[2] - vrNordic_g19.leadLag1.d * vrNordic_g19.leadLag1.a[2]) * vrNordic_g19.leadLag1.x[1] + vrNordic_g19.leadLag1.d * vrNordic_g19.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* vrNordic_g19.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5585]] /* vrNordic_g19.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5586]] /* vrNordic_g19.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5580]] /* vrNordic_g19.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3891]] /* vrNordic_g19.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5586]] /* vrNordic_g19.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3884]] /* vrNordic_g19.derivative.y variable */));
  threadData->lastEquationSolved = 15027;
}
/*
equation index: 15028
type: SIMPLE_ASSIGN
$DAEres10 = vrNordic_g19.leadLag2.a_end * vrNordic_g19.leadLag1.y + (-vrNordic_g19.leadLag2.a[2]) * vrNordic_g19.leadLag2.x_scaled[1] - der(vrNordic_g19.leadLag2.x_scaled[1]) * vrNordic_g19.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15028};
  (data->simulationInfo->daeModeData->residualVars[10]) /* $DAEres10 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5594]] /* vrNordic_g19.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* vrNordic_g19.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5593]] /* vrNordic_g19.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* vrNordic_g19.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* der(vrNordic_g19.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5592]] /* vrNordic_g19.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 15028;
}
/*
equation index: 15029
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.y = (vrNordic_g19.leadLag2.bb[2] - vrNordic_g19.leadLag2.d * vrNordic_g19.leadLag2.a[2]) * vrNordic_g19.leadLag2.x[1] + vrNordic_g19.leadLag2.d * vrNordic_g19.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* vrNordic_g19.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5598]] /* vrNordic_g19.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5599]] /* vrNordic_g19.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5593]] /* vrNordic_g19.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* vrNordic_g19.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5599]] /* vrNordic_g19.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* vrNordic_g19.leadLag1.y variable */));
  threadData->lastEquationSolved = 15029;
}
/*
equation index: 15030
type: SIMPLE_ASSIGN
vrNordic_g19.limiter.y = smooth(0, if vrNordic_g19.leadLag2.y > vrNordic_g19.limiter.uMax then vrNordic_g19.limiter.uMax else if vrNordic_g19.leadLag2.y < vrNordic_g19.limiter.uMin then vrNordic_g19.limiter.uMin else vrNordic_g19.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15030};
  modelica_boolean tmp915;
  modelica_boolean tmp916;
  modelica_boolean tmp917;
  modelica_real tmp918;
  tmp915 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* vrNordic_g19.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5607]] /* vrNordic_g19.limiter.uMax PARAM */));
  tmp917 = (modelica_boolean)tmp915;
  if(tmp917)
  {
    tmp918 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5607]] /* vrNordic_g19.limiter.uMax PARAM */);
  }
  else
  {
    tmp916 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* vrNordic_g19.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5608]] /* vrNordic_g19.limiter.uMin PARAM */));
    tmp918 = (tmp916?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5608]] /* vrNordic_g19.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* vrNordic_g19.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* vrNordic_g19.limiter.y variable */) = tmp918;
  threadData->lastEquationSolved = 15030;
}
/*
equation index: 15031
type: SIMPLE_ASSIGN
$DAEres11 = (if vrNordic_g19.derivative.zeroGain then 0.0 else (vrNordic_g19.dOmega.y - vrNordic_g19.derivative.x) / vrNordic_g19.derivative.T) - der(vrNordic_g19.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15031};
  (data->simulationInfo->daeModeData->residualVars[11]) /* $DAEres11 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1059]] /* vrNordic_g19.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3882]] /* vrNordic_g19.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* vrNordic_g19.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5556]] /* vrNordic_g19.derivative.T PARAM */),"vrNordic_g19.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* der(vrNordic_g19.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 15031;
}
/*
equation index: 15032
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.x[1] = vrNordic_g19.leadLag.x_scaled[1] / vrNordic_g19.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3889]] /* vrNordic_g19.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* vrNordic_g19.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5568]] /* vrNordic_g19.leadLag.a_end PARAM */),"vrNordic_g19.leadLag.a_end");
  threadData->lastEquationSolved = 15032;
}
/*
equation index: 15033
type: SIMPLE_ASSIGN
goverNordic_g19.flowDivGateOpening.y = goverNordic_g19.waterFlow.y / goverNordic_g19.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2261]] /* goverNordic_g19.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* goverNordic_g19.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g19.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 15033;
}
/*
equation index: 15034
type: SIMPLE_ASSIGN
goverNordic_g19.headWater.y = goverNordic_g19.flowDivGateOpening.y ^ goverNordic_g19.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15034};
  modelica_real tmp919;
  modelica_real tmp920;
  modelica_real tmp921;
  modelica_real tmp922;
  modelica_real tmp923;
  modelica_real tmp924;
  modelica_real tmp925;
  tmp919 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2261]] /* goverNordic_g19.flowDivGateOpening.y variable */);
  tmp920 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2920]] /* goverNordic_g19.headWater.N PARAM */);
  if(tmp919 < 0.0 && tmp920 != 0.0)
  {
    tmp922 = modf(tmp920, &tmp923);
    
    if(tmp922 > 0.5)
    {
      tmp922 -= 1.0;
      tmp923 += 1.0;
    }
    else if(tmp922 < -0.5)
    {
      tmp922 += 1.0;
      tmp923 -= 1.0;
    }
    
    if(fabs(tmp922) < 1e-10)
      tmp921 = pow(tmp919, tmp923);
    else
    {
      tmp925 = modf(1.0/tmp920, &tmp924);
      if(tmp925 > 0.5)
      {
        tmp925 -= 1.0;
        tmp924 += 1.0;
      }
      else if(tmp925 < -0.5)
      {
        tmp925 += 1.0;
        tmp924 -= 1.0;
      }
      if(fabs(tmp925) < 1e-10 && ((unsigned long)tmp924 & 1))
      {
        tmp921 = -pow(-tmp919, tmp922)*pow(tmp919, tmp923);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp919, tmp920);
      }
    }
  }
  else
  {
    tmp921 = pow(tmp919, tmp920);
  }
  if(isnan(tmp921) || isinf(tmp921))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp919, tmp920);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2266]] /* goverNordic_g19.headWater.y variable */) = tmp921;
  threadData->lastEquationSolved = 15034;
}
/*
equation index: 15035
type: SIMPLE_ASSIGN
g19.PmPu = goverNordic_g19.waterFlow.y * goverNordic_g19.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15035};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1847]] /* g19.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* goverNordic_g19.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2266]] /* goverNordic_g19.headWater.y variable */));
  threadData->lastEquationSolved = 15035;
}
/*
equation index: 15036
type: SIMPLE_ASSIGN
goverNordic_g19.dH.y = goverNordic_g19.const2.k - goverNordic_g19.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15036};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2257]] /* goverNordic_g19.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* goverNordic_g19.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2266]] /* goverNordic_g19.headWater.y variable */);
  threadData->lastEquationSolved = 15036;
}
/*
equation index: 15037
type: SIMPLE_ASSIGN
$DAEres8 = goverNordic_g19.waterFlow.k * goverNordic_g19.dH.y - der(goverNordic_g19.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15037};
  (data->simulationInfo->daeModeData->residualVars[8]) /* $DAEres8 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2935]] /* goverNordic_g19.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2257]] /* goverNordic_g19.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* der(goverNordic_g19.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 15037;
}
/*
equation index: 15038
type: SIMPLE_ASSIGN
goverNordic_g19.dOmega.y = goverNordic_g19.const1.k - g19.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2258]] /* goverNordic_g19.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2907]] /* goverNordic_g19.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 15038;
}
/*
equation index: 15039
type: SIMPLE_ASSIGN
goverNordic_g19.dP.y = goverNordic_g19.const.k - goverNordic_g19.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15039};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2260]] /* goverNordic_g19.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* goverNordic_g19.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* goverNordic_g19.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 15039;
}
/*
equation index: 15040
type: SIMPLE_ASSIGN
goverNordic_g19.dOmegaPlusDroop.y = goverNordic_g19.dOmegaPlusDroop.k1 * goverNordic_g19.dOmega.y + goverNordic_g19.dOmegaPlusDroop.k2 * goverNordic_g19.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15040};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2259]] /* goverNordic_g19.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2909]] /* goverNordic_g19.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2258]] /* goverNordic_g19.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* goverNordic_g19.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2260]] /* goverNordic_g19.dP.y variable */));
  threadData->lastEquationSolved = 15040;
}
/*
equation index: 15041
type: SIMPLE_ASSIGN
goverNordic_g19.govKi.y = goverNordic_g19.govKi.k * goverNordic_g19.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15041};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2263]] /* goverNordic_g19.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2916]] /* goverNordic_g19.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2259]] /* goverNordic_g19.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 15041;
}
/*
equation index: 15042
type: SIMPLE_ASSIGN
$DAEres6 = goverNordic_g19.govInt.k * goverNordic_g19.govKi.y - der(goverNordic_g19.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15042};
  (data->simulationInfo->daeModeData->residualVars[6]) /* $DAEres6 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* goverNordic_g19.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2263]] /* goverNordic_g19.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* der(goverNordic_g19.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 15042;
}
/*
equation index: 15043
type: SIMPLE_ASSIGN
goverNordic_g19.govKp.y = goverNordic_g19.govKp.k * goverNordic_g19.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15043};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2264]] /* goverNordic_g19.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2917]] /* goverNordic_g19.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2259]] /* goverNordic_g19.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 15043;
}
/*
equation index: 15044
type: SIMPLE_ASSIGN
goverNordic_g19.govOut.y = goverNordic_g19.govOut.k1 * goverNordic_g19.govKp.y + goverNordic_g19.govOut.k2 * goverNordic_g19.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15044};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2265]] /* goverNordic_g19.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2918]] /* goverNordic_g19.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2264]] /* goverNordic_g19.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2919]] /* goverNordic_g19.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* goverNordic_g19.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 15044;
}
/*
equation index: 15045
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.feedback.y = goverNordic_g19.govOut.y - goverNordic_g19.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15045};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2267]] /* goverNordic_g19.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2265]] /* goverNordic_g19.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15045;
}
/*
equation index: 15046
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.gain.y = goverNordic_g19.limRateLimFirstOrder.gain.k * goverNordic_g19.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15046};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* goverNordic_g19.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2926]] /* goverNordic_g19.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2267]] /* goverNordic_g19.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 15046;
}
/*
equation index: 15047
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g19.limRateLimFirstOrder.gain.y > goverNordic_g19.limRateLimFirstOrder.limiter.uMax then goverNordic_g19.limRateLimFirstOrder.limiter.uMax else if goverNordic_g19.limRateLimFirstOrder.gain.y < goverNordic_g19.limRateLimFirstOrder.limiter.uMin then goverNordic_g19.limRateLimFirstOrder.limiter.uMin else goverNordic_g19.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15047};
  modelica_boolean tmp926;
  modelica_boolean tmp927;
  modelica_boolean tmp928;
  modelica_real tmp929;
  tmp926 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* goverNordic_g19.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp928 = (modelica_boolean)tmp926;
  if(tmp928)
  {
    tmp929 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp927 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* goverNordic_g19.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp929 = (tmp927?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* goverNordic_g19.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */) = tmp929;
  threadData->lastEquationSolved = 15047;
}
/*
equation index: 15048
type: SIMPLE_ASSIGN
$DAEres7 = (if goverNordic_g19.limRateLimFirstOrder.limIntegrator.y < goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g19.limRateLimFirstOrder.limIntegrator.k * goverNordic_g19.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g19.limRateLimFirstOrder.limIntegrator.y > goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g19.limRateLimFirstOrder.limIntegrator.k * goverNordic_g19.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g19.limRateLimFirstOrder.limIntegrator.k * goverNordic_g19.limRateLimFirstOrder.limiter.y) - der(goverNordic_g19.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15048};
  modelica_boolean tmp930;
  modelica_real tmp931;
  modelica_real tmp932;
  modelica_boolean tmp933;
  modelica_real tmp934;
  modelica_real tmp935;
  modelica_boolean tmp936;
  modelica_real tmp937;
  modelica_real tmp938;
  modelica_boolean tmp939;
  modelica_real tmp940;
  modelica_real tmp941;
  tmp931 = 1.0;
  tmp932 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp930, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp931, tmp932, 528, Less, LessZC);
  tmp934 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp935 = 0.0;
  relationhysteresis(data, &tmp933, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp934, tmp935, 529, Less, LessZC);
  tmp937 = 1.0;
  tmp938 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp936, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp937, tmp938, 530, Greater, GreaterZC);
  tmp940 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp941 = 0.0;
  relationhysteresis(data, &tmp939, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp940, tmp941, 531, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[7]) /* $DAEres7 DAE_RESIDUAL_VAR */ = (((tmp930 && tmp933) || (tmp936 && tmp939))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* der(goverNordic_g19.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15048;
}
/*
equation index: 15049
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.x[1] = vrNordic_g20.leadLag1.x_scaled[1] / vrNordic_g20.leadLag1.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3915]] /* vrNordic_g20.leadLag1.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* vrNordic_g20.leadLag1.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5660]] /* vrNordic_g20.leadLag1.a_end PARAM */),"vrNordic_g20.leadLag1.a_end");
  threadData->lastEquationSolved = 15049;
}
/*
equation index: 15050
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.x[1] = vrNordic_g20.leadLag2.x_scaled[1] / vrNordic_g20.leadLag2.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15050};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3917]] /* vrNordic_g20.leadLag2.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* vrNordic_g20.leadLag2.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5673]] /* vrNordic_g20.leadLag2.a_end PARAM */),"vrNordic_g20.leadLag2.a_end");
  threadData->lastEquationSolved = 15050;
}
/*
equation index: 15051
type: SIMPLE_ASSIGN
vrNordic_g20.greaterEqualThreshold.y = vrNordic_g20.timer.y >= vrNordic_g20.greaterEqualThreshold.threshold
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15051};
  modelica_boolean tmp942;
  modelica_real tmp943;
  modelica_real tmp944;
  tmp943 = 1.0;
  tmp944 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5641]] /* vrNordic_g20.greaterEqualThreshold.threshold PARAM */));
  relationhysteresis(data, &tmp942, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5641]] /* vrNordic_g20.greaterEqualThreshold.threshold PARAM */), tmp943, tmp944, 533, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1072]] /* vrNordic_g20.greaterEqualThreshold.y DISCRETE */) = tmp942;
  threadData->lastEquationSolved = 15051;
}
/*
equation index: 15052
type: SIMPLE_ASSIGN
vrNordic_g20.dOmega.y = g20.omegaPu - vrNordic_g20.const.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15052};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3906]] /* vrNordic_g20.dOmega.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5632]] /* vrNordic_g20.const.k PARAM */);
  threadData->lastEquationSolved = 15052;
}
/*
equation index: 15053
type: SIMPLE_ASSIGN
vrNordic_g20.derivative.y = if vrNordic_g20.derivative.zeroGain then 0.0 else vrNordic_g20.derivative.k / vrNordic_g20.derivative.T * (vrNordic_g20.dOmega.y - vrNordic_g20.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15053};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3908]] /* vrNordic_g20.derivative.y variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1070]] /* vrNordic_g20.derivative.zeroGain PARAM */)?0.0:(DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5636]] /* vrNordic_g20.derivative.k PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5635]] /* vrNordic_g20.derivative.T PARAM */),"vrNordic_g20.derivative.T")) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3906]] /* vrNordic_g20.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* vrNordic_g20.derivative.x STATE(1) */)));
  threadData->lastEquationSolved = 15053;
}
/*
equation index: 15054
type: SIMPLE_ASSIGN
$DAEres3 = vrNordic_g20.leadLag1.a_end * vrNordic_g20.derivative.y + (-vrNordic_g20.leadLag1.a[2]) * vrNordic_g20.leadLag1.x_scaled[1] - der(vrNordic_g20.leadLag1.x_scaled[1]) * vrNordic_g20.leadLag1.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15054};
  (data->simulationInfo->daeModeData->residualVars[3]) /* $DAEres3 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5660]] /* vrNordic_g20.leadLag1.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3908]] /* vrNordic_g20.derivative.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5659]] /* vrNordic_g20.leadLag1.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* vrNordic_g20.leadLag1.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* der(vrNordic_g20.leadLag1.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5658]] /* vrNordic_g20.leadLag1.a[1] PARAM */)));
  threadData->lastEquationSolved = 15054;
}
/*
equation index: 15055
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.y = (vrNordic_g20.leadLag1.bb[2] - vrNordic_g20.leadLag1.d * vrNordic_g20.leadLag1.a[2]) * vrNordic_g20.leadLag1.x[1] + vrNordic_g20.leadLag1.d * vrNordic_g20.derivative.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15055};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3916]] /* vrNordic_g20.leadLag1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5664]] /* vrNordic_g20.leadLag1.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5665]] /* vrNordic_g20.leadLag1.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5659]] /* vrNordic_g20.leadLag1.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3915]] /* vrNordic_g20.leadLag1.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5665]] /* vrNordic_g20.leadLag1.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3908]] /* vrNordic_g20.derivative.y variable */));
  threadData->lastEquationSolved = 15055;
}
/*
equation index: 15056
type: SIMPLE_ASSIGN
$DAEres4 = vrNordic_g20.leadLag2.a_end * vrNordic_g20.leadLag1.y + (-vrNordic_g20.leadLag2.a[2]) * vrNordic_g20.leadLag2.x_scaled[1] - der(vrNordic_g20.leadLag2.x_scaled[1]) * vrNordic_g20.leadLag2.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15056};
  (data->simulationInfo->daeModeData->residualVars[4]) /* $DAEres4 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5673]] /* vrNordic_g20.leadLag2.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3916]] /* vrNordic_g20.leadLag1.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5672]] /* vrNordic_g20.leadLag2.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* vrNordic_g20.leadLag2.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* der(vrNordic_g20.leadLag2.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5671]] /* vrNordic_g20.leadLag2.a[1] PARAM */)));
  threadData->lastEquationSolved = 15056;
}
/*
equation index: 15057
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.y = (vrNordic_g20.leadLag2.bb[2] - vrNordic_g20.leadLag2.d * vrNordic_g20.leadLag2.a[2]) * vrNordic_g20.leadLag2.x[1] + vrNordic_g20.leadLag2.d * vrNordic_g20.leadLag1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15057};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3918]] /* vrNordic_g20.leadLag2.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5677]] /* vrNordic_g20.leadLag2.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5678]] /* vrNordic_g20.leadLag2.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5672]] /* vrNordic_g20.leadLag2.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3917]] /* vrNordic_g20.leadLag2.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5678]] /* vrNordic_g20.leadLag2.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3916]] /* vrNordic_g20.leadLag1.y variable */));
  threadData->lastEquationSolved = 15057;
}
/*
equation index: 15058
type: SIMPLE_ASSIGN
vrNordic_g20.limiter.y = smooth(0, if vrNordic_g20.leadLag2.y > vrNordic_g20.limiter.uMax then vrNordic_g20.limiter.uMax else if vrNordic_g20.leadLag2.y < vrNordic_g20.limiter.uMin then vrNordic_g20.limiter.uMin else vrNordic_g20.leadLag2.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15058};
  modelica_boolean tmp945;
  modelica_boolean tmp946;
  modelica_boolean tmp947;
  modelica_real tmp948;
  tmp945 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3918]] /* vrNordic_g20.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5686]] /* vrNordic_g20.limiter.uMax PARAM */));
  tmp947 = (modelica_boolean)tmp945;
  if(tmp947)
  {
    tmp948 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5686]] /* vrNordic_g20.limiter.uMax PARAM */);
  }
  else
  {
    tmp946 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3918]] /* vrNordic_g20.leadLag2.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5687]] /* vrNordic_g20.limiter.uMin PARAM */));
    tmp948 = (tmp946?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5687]] /* vrNordic_g20.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3918]] /* vrNordic_g20.leadLag2.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3921]] /* vrNordic_g20.limiter.y variable */) = tmp948;
  threadData->lastEquationSolved = 15058;
}
/*
equation index: 15059
type: SIMPLE_ASSIGN
$DAEres5 = (if vrNordic_g20.derivative.zeroGain then 0.0 else (vrNordic_g20.dOmega.y - vrNordic_g20.derivative.x) / vrNordic_g20.derivative.T) - der(vrNordic_g20.derivative.x)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15059};
  (data->simulationInfo->daeModeData->residualVars[5]) /* $DAEres5 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1070]] /* vrNordic_g20.derivative.zeroGain PARAM */)?0.0:DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3906]] /* vrNordic_g20.dOmega.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* vrNordic_g20.derivative.x STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5635]] /* vrNordic_g20.derivative.T PARAM */),"vrNordic_g20.derivative.T")) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* der(vrNordic_g20.derivative.x) STATE_DER */);
  threadData->lastEquationSolved = 15059;
}
/*
equation index: 15060
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.x[1] = vrNordic_g20.leadLag.x_scaled[1] / vrNordic_g20.leadLag.a_end
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15060};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3913]] /* vrNordic_g20.leadLag.x[1] variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* vrNordic_g20.leadLag.x_scaled[1] STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5647]] /* vrNordic_g20.leadLag.a_end PARAM */),"vrNordic_g20.leadLag.a_end");
  threadData->lastEquationSolved = 15060;
}
/*
equation index: 15061
type: SIMPLE_ASSIGN
goverNordic_g20.flowDivGateOpening.y = goverNordic_g20.waterFlow.y / goverNordic_g20.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2279]] /* goverNordic_g20.flowDivGateOpening.y variable */) = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* goverNordic_g20.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g20.limRateLimFirstOrder.limIntegrator.y");
  threadData->lastEquationSolved = 15061;
}
/*
equation index: 15062
type: SIMPLE_ASSIGN
goverNordic_g20.headWater.y = goverNordic_g20.flowDivGateOpening.y ^ goverNordic_g20.headWater.N
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15062};
  modelica_real tmp949;
  modelica_real tmp950;
  modelica_real tmp951;
  modelica_real tmp952;
  modelica_real tmp953;
  modelica_real tmp954;
  modelica_real tmp955;
  tmp949 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2279]] /* goverNordic_g20.flowDivGateOpening.y variable */);
  tmp950 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2956]] /* goverNordic_g20.headWater.N PARAM */);
  if(tmp949 < 0.0 && tmp950 != 0.0)
  {
    tmp952 = modf(tmp950, &tmp953);
    
    if(tmp952 > 0.5)
    {
      tmp952 -= 1.0;
      tmp953 += 1.0;
    }
    else if(tmp952 < -0.5)
    {
      tmp952 += 1.0;
      tmp953 -= 1.0;
    }
    
    if(fabs(tmp952) < 1e-10)
      tmp951 = pow(tmp949, tmp953);
    else
    {
      tmp955 = modf(1.0/tmp950, &tmp954);
      if(tmp955 > 0.5)
      {
        tmp955 -= 1.0;
        tmp954 += 1.0;
      }
      else if(tmp955 < -0.5)
      {
        tmp955 += 1.0;
        tmp954 -= 1.0;
      }
      if(fabs(tmp955) < 1e-10 && ((unsigned long)tmp954 & 1))
      {
        tmp951 = -pow(-tmp949, tmp952)*pow(tmp949, tmp953);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp949, tmp950);
      }
    }
  }
  else
  {
    tmp951 = pow(tmp949, tmp950);
  }
  if(isnan(tmp951) || isinf(tmp951))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp949, tmp950);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2284]] /* goverNordic_g20.headWater.y variable */) = tmp951;
  threadData->lastEquationSolved = 15062;
}
/*
equation index: 15063
type: SIMPLE_ASSIGN
g20.PmPu = goverNordic_g20.waterFlow.y * goverNordic_g20.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15063};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1893]] /* g20.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* goverNordic_g20.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2284]] /* goverNordic_g20.headWater.y variable */));
  threadData->lastEquationSolved = 15063;
}
/*
equation index: 15064
type: SIMPLE_ASSIGN
goverNordic_g20.dH.y = goverNordic_g20.const2.k - goverNordic_g20.headWater.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2275]] /* goverNordic_g20.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2944]] /* goverNordic_g20.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2284]] /* goverNordic_g20.headWater.y variable */);
  threadData->lastEquationSolved = 15064;
}
/*
equation index: 15065
type: SIMPLE_ASSIGN
$DAEres2 = goverNordic_g20.waterFlow.k * goverNordic_g20.dH.y - der(goverNordic_g20.waterFlow.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15065};
  (data->simulationInfo->daeModeData->residualVars[2]) /* $DAEres2 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* goverNordic_g20.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2275]] /* goverNordic_g20.dH.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* der(goverNordic_g20.waterFlow.y) STATE_DER */);
  threadData->lastEquationSolved = 15065;
}
/*
equation index: 15066
type: SIMPLE_ASSIGN
goverNordic_g20.dOmega.y = goverNordic_g20.const1.k - g20.omegaPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15066};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2276]] /* goverNordic_g20.dOmega.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2943]] /* goverNordic_g20.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */);
  threadData->lastEquationSolved = 15066;
}
/*
equation index: 15067
type: SIMPLE_ASSIGN
goverNordic_g20.dP.y = goverNordic_g20.const.k - goverNordic_g20.firstOrder1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2278]] /* goverNordic_g20.dP.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2942]] /* goverNordic_g20.const.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* goverNordic_g20.firstOrder1.y STATE(1) */);
  threadData->lastEquationSolved = 15067;
}
/*
equation index: 15068
type: SIMPLE_ASSIGN
goverNordic_g20.dOmegaPlusDroop.y = goverNordic_g20.dOmegaPlusDroop.k1 * goverNordic_g20.dOmega.y + goverNordic_g20.dOmegaPlusDroop.k2 * goverNordic_g20.dP.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15068};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2277]] /* goverNordic_g20.dOmegaPlusDroop.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2945]] /* goverNordic_g20.dOmegaPlusDroop.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2276]] /* goverNordic_g20.dOmega.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2946]] /* goverNordic_g20.dOmegaPlusDroop.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2278]] /* goverNordic_g20.dP.y variable */));
  threadData->lastEquationSolved = 15068;
}
/*
equation index: 15069
type: SIMPLE_ASSIGN
goverNordic_g20.govKi.y = goverNordic_g20.govKi.k * goverNordic_g20.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15069};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2281]] /* goverNordic_g20.govKi.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2952]] /* goverNordic_g20.govKi.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2277]] /* goverNordic_g20.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 15069;
}
/*
equation index: 15070
type: SIMPLE_ASSIGN
$DAEres0 = goverNordic_g20.govInt.k * goverNordic_g20.govKi.y - der(goverNordic_g20.govInt.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15070};
  (data->simulationInfo->daeModeData->residualVars[0]) /* $DAEres0 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2950]] /* goverNordic_g20.govInt.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2281]] /* goverNordic_g20.govKi.y variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* der(goverNordic_g20.govInt.y) STATE_DER */);
  threadData->lastEquationSolved = 15070;
}
/*
equation index: 15071
type: SIMPLE_ASSIGN
goverNordic_g20.govKp.y = goverNordic_g20.govKp.k * goverNordic_g20.dOmegaPlusDroop.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15071};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2282]] /* goverNordic_g20.govKp.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2953]] /* goverNordic_g20.govKp.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2277]] /* goverNordic_g20.dOmegaPlusDroop.y variable */));
  threadData->lastEquationSolved = 15071;
}
/*
equation index: 15072
type: SIMPLE_ASSIGN
goverNordic_g20.govOut.y = goverNordic_g20.govOut.k1 * goverNordic_g20.govKp.y + goverNordic_g20.govOut.k2 * goverNordic_g20.govInt.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2283]] /* goverNordic_g20.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2954]] /* goverNordic_g20.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2282]] /* goverNordic_g20.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2955]] /* goverNordic_g20.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* goverNordic_g20.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 15072;
}
/*
equation index: 15073
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.feedback.y = goverNordic_g20.govOut.y - goverNordic_g20.limRateLimFirstOrder.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2285]] /* goverNordic_g20.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2283]] /* goverNordic_g20.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15073;
}
/*
equation index: 15074
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.gain.y = goverNordic_g20.limRateLimFirstOrder.gain.k * goverNordic_g20.limRateLimFirstOrder.feedback.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2286]] /* goverNordic_g20.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2962]] /* goverNordic_g20.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2285]] /* goverNordic_g20.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 15074;
}
/*
equation index: 15075
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g20.limRateLimFirstOrder.gain.y > goverNordic_g20.limRateLimFirstOrder.limiter.uMax then goverNordic_g20.limRateLimFirstOrder.limiter.uMax else if goverNordic_g20.limRateLimFirstOrder.gain.y < goverNordic_g20.limRateLimFirstOrder.limiter.uMin then goverNordic_g20.limRateLimFirstOrder.limiter.uMin else goverNordic_g20.limRateLimFirstOrder.gain.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15075};
  modelica_boolean tmp956;
  modelica_boolean tmp957;
  modelica_boolean tmp958;
  modelica_real tmp959;
  tmp956 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2286]] /* goverNordic_g20.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp958 = (modelica_boolean)tmp956;
  if(tmp958)
  {
    tmp959 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp957 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2286]] /* goverNordic_g20.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp959 = (tmp957?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2286]] /* goverNordic_g20.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */) = tmp959;
  threadData->lastEquationSolved = 15075;
}
/*
equation index: 15076
type: SIMPLE_ASSIGN
$DAEres1 = (if goverNordic_g20.limRateLimFirstOrder.limIntegrator.y < goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g20.limRateLimFirstOrder.limIntegrator.k * goverNordic_g20.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g20.limRateLimFirstOrder.limIntegrator.y > goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g20.limRateLimFirstOrder.limIntegrator.k * goverNordic_g20.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g20.limRateLimFirstOrder.limIntegrator.k * goverNordic_g20.limRateLimFirstOrder.limiter.y) - der(goverNordic_g20.limRateLimFirstOrder.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15076};
  modelica_boolean tmp960;
  modelica_real tmp961;
  modelica_real tmp962;
  modelica_boolean tmp963;
  modelica_real tmp964;
  modelica_real tmp965;
  modelica_boolean tmp966;
  modelica_real tmp967;
  modelica_real tmp968;
  modelica_boolean tmp969;
  modelica_real tmp970;
  modelica_real tmp971;
  tmp961 = 1.0;
  tmp962 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp960, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp961, tmp962, 544, Less, LessZC);
  tmp964 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp965 = 0.0;
  relationhysteresis(data, &tmp963, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp964, tmp965, 545, Less, LessZC);
  tmp967 = 1.0;
  tmp968 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp966, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp967, tmp968, 546, Greater, GreaterZC);
  tmp970 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp971 = 0.0;
  relationhysteresis(data, &tmp969, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp970, tmp971, 547, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1]) /* $DAEres1 DAE_RESIDUAL_VAR */ = (((tmp960 && tmp963) || (tmp966 && tmp969))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* der(goverNordic_g20.limRateLimFirstOrder.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15076;
}
/*
equation index: 15077
type: SIMPLE_ASSIGN
omegaCOI = (g01.omegaPu * g01.H * g01.SNom + g02.omegaPu * g02.H * g02.SNom + g03.omegaPu * g03.H * g03.SNom + g04.omegaPu * g04.H * g04.SNom + g05.omegaPu * g05.H * g05.SNom + g06.omegaPu * g06.H * g06.SNom + g07.omegaPu * g07.H * g07.SNom + g08.omegaPu * g08.H * g08.SNom + g09.omegaPu * g09.H * g09.SNom + g10.omegaPu * g10.H * g10.SNom + g11.omegaPu * g11.H * g11.SNom + g12.omegaPu * g12.H * g12.SNom + g13.omegaPu * g13.H * g13.SNom + g14.omegaPu * g14.H * g14.SNom + g15.omegaPu * g15.H * g15.SNom + g16.omegaPu * g16.H * g16.SNom + g17.omegaPu * g17.H * g17.SNom + g18.omegaPu * g18.H * g18.SNom + g19.omegaPu * g19.H * g19.SNom + g20.omegaPu * g20.H * g20.SNom) / (g01.SNom * g01.H + g02.SNom * g02.H + g03.SNom * g03.H + g04.SNom * g04.H + g05.SNom * g05.H + g06.SNom * g06.H + g07.SNom * g07.H + g08.SNom * g08.H + g09.SNom * g09.H + g10.SNom * g10.H + g11.SNom * g11.H + g12.SNom * g12.H + g13.SNom * g13.H + g14.SNom * g14.H + g15.SNom * g15.H + g16.SNom * g16.H + g17.SNom * g17.H + g18.SNom * g18.H + g19.SNom * g19.H + g20.SNom * g20.H)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) = DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* g01.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* g02.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* g03.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* g04.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[628]] /* g05.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* g06.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* g07.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[935]] /* g08.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* g09.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1137]] /* g10.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* g11.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* g12.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* g13.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* g14.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* g15.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* g16.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* g17.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* g18.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2056]] /* g19.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* g20.H PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */))),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* g01.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* g02.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* g03.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* g04.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[628]] /* g05.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* g06.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* g07.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[935]] /* g08.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* g09.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1137]] /* g10.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* g11.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* g12.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* g13.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* g14.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* g15.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* g16.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* g17.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* g18.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2056]] /* g19.H PARAM */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* g20.H PARAM */)),"g01.SNom * g01.H + g02.SNom * g02.H + g03.SNom * g03.H + g04.SNom * g04.H + g05.SNom * g05.H + g06.SNom * g06.H + g07.SNom * g07.H + g08.SNom * g08.H + g09.SNom * g09.H + g10.SNom * g10.H + g11.SNom * g11.H + g12.SNom * g12.H + g13.SNom * g13.H + g14.SNom * g14.H + g15.SNom * g15.H + g16.SNom * g16.H + g17.SNom * g17.H + g18.SNom * g18.H + g19.SNom * g19.H + g20.SNom * g20.H");
  threadData->lastEquationSolved = 15077;
}
/*
equation index: 15078
type: SIMPLE_ASSIGN
$whenCondition1 = time >= disconnection.tEvent
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15078};
  modelica_boolean tmp972;
  modelica_real tmp973;
  modelica_real tmp974;
  tmp973 = 1.0;
  tmp974 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* disconnection.tEvent PARAM */));
  relationhysteresis(data, &tmp972, data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* disconnection.tEvent PARAM */), tmp973, tmp974, 548, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = tmp972;
  threadData->lastEquationSolved = 15078;
}
/*
equation index: 15079
type: WHEN

when {$whenCondition1} then
  disconnection.state1.value = disconnection.stateEvent1;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15079};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[469]] /* disconnection.state1.value DISCRETE */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[0]] /* disconnection.stateEvent1 PARAM */);
  }
  threadData->lastEquationSolved = 15079;
}
/*
equation index: 15080
type: SIMPLE_ASSIGN
$whenCondition368 = disconnection.state1.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15080};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[298]] /* $whenCondition368 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[469]] /* disconnection.state1.value DISCRETE */);
  threadData->lastEquationSolved = 15080;
}
/*
equation index: 15081
type: SIMPLE_ASSIGN
$whenCondition367 = not disconnection.state1.value and not pre(line_4032_4044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15081};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[297]] /* $whenCondition367 DISCRETE */) = ((!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[469]] /* disconnection.state1.value DISCRETE */)) && (!(data->simulationInfo->booleanVarsPre[709] /* line_4032_4044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15081;
}
/*
equation index: 15082
type: WHEN

when {$whenCondition368} then
  line_4032_4044.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15082};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[298]] /* $whenCondition368 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[298] /* $whenCondition368 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[297]] /* $whenCondition367 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[297] /* $whenCondition367 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15082;
}
/*
equation index: 15084
type: SIMPLE_ASSIGN
$whenCondition370 = not line_4032_4044.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15084};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[301]] /* $whenCondition370 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */));
  threadData->lastEquationSolved = 15084;
}
/*
equation index: 15085
type: SIMPLE_ASSIGN
$whenCondition369 = line_4032_4044.running.value and not pre(line_4032_4044.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15085};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[299]] /* $whenCondition369 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[709] /* line_4032_4044.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15085;
}
/*
equation index: 15086
type: WHEN

when {$whenCondition370} then
  line_4032_4044.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15086};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[301]] /* $whenCondition370 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[301] /* $whenCondition370 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[73]] /* line_4032_4044.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[299]] /* $whenCondition369 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[299] /* $whenCondition369 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[73]] /* line_4032_4044.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15086;
}
/*
equation index: 15088
type: SIMPLE_ASSIGN
$DAEres655 = if line_4032_4044.running.value then 0.006 * (line_4032_4044.terminal1.i.im + (-1.1988320000000001) * line_4032_4044.terminal1.V.re - line_4032_4044.YPu.re * line_4032_4044.terminal1.V.im) + 0.05 * (line_4032_4044.terminal1.i.re + 1.1988320000000001 * line_4032_4044.terminal1.V.im - line_4032_4044.YPu.re * line_4032_4044.terminal1.V.re) - (line_4032_4044.terminal1.V.im - line_4044_4045a.terminal1.V.im) else line_4032_4044.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15088};
  (data->simulationInfo->daeModeData->residualVars[655]) /* $DAEres655 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2598]] /* line_4032_4044.terminal1.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* line_4032_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)))) + (0.05) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2599]] /* line_4032_4044.terminal1.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* line_4032_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2600]] /* line_4032_4044.terminal2.i.im variable */));
  threadData->lastEquationSolved = 15088;
}
/*
equation index: 15089
type: SIMPLE_ASSIGN
$DAEres1006 = if line_4032_4044.running.value then 0.006 * (line_4032_4044.terminal1.i.re + 1.1988320000000001 * line_4032_4044.terminal1.V.im - line_4032_4044.YPu.re * line_4032_4044.terminal1.V.re) + (-0.05) * (line_4032_4044.terminal1.i.im + (-1.1988320000000001) * line_4032_4044.terminal1.V.re - line_4032_4044.YPu.re * line_4032_4044.terminal1.V.im) - (line_4032_4044.terminal1.V.re - line_4044_4045a.terminal1.V.re) else line_4032_4044.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15089};
  (data->simulationInfo->daeModeData->residualVars[1006]) /* $DAEres1006 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2599]] /* line_4032_4044.terminal1.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* line_4032_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)))) + (-0.05) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2598]] /* line_4032_4044.terminal1.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* line_4032_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2601]] /* line_4032_4044.terminal2.i.re variable */));
  threadData->lastEquationSolved = 15089;
}
/*
equation index: 15090
type: SIMPLE_ASSIGN
$DAEres1007 = if line_4032_4044.running.value then 0.006 * (line_4032_4044.terminal2.i.im + (-1.1988320000000001) * line_4044_4045a.terminal1.V.re - line_4032_4044.YPu.re * line_4044_4045a.terminal1.V.im) + 0.05 * (line_4032_4044.terminal2.i.re + 1.1988320000000001 * line_4044_4045a.terminal1.V.im - line_4032_4044.YPu.re * line_4044_4045a.terminal1.V.re) - (line_4044_4045a.terminal1.V.im - line_4032_4044.terminal1.V.im) else line_4032_4044.terminal1.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15090};
  (data->simulationInfo->daeModeData->residualVars[1007]) /* $DAEres1007 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2600]] /* line_4032_4044.terminal2.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* line_4032_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) + (0.05) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2601]] /* line_4032_4044.terminal2.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* line_4032_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2598]] /* line_4032_4044.terminal1.i.im variable */));
  threadData->lastEquationSolved = 15090;
}
/*
equation index: 15091
type: SIMPLE_ASSIGN
$DAEres1008 = if line_4032_4044.running.value then 0.006 * (line_4032_4044.terminal2.i.re + 1.1988320000000001 * line_4044_4045a.terminal1.V.im - line_4032_4044.YPu.re * line_4044_4045a.terminal1.V.re) + (-0.05) * (line_4032_4044.terminal2.i.im + (-1.1988320000000001) * line_4044_4045a.terminal1.V.re - line_4032_4044.YPu.re * line_4044_4045a.terminal1.V.im) - (line_4044_4045a.terminal1.V.re - line_4032_4044.terminal1.V.re) else line_4032_4044.terminal1.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15091};
  (data->simulationInfo->daeModeData->residualVars[1008]) /* $DAEres1008 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[709]] /* line_4032_4044.running.value DISCRETE */)?(0.006) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2601]] /* line_4032_4044.terminal2.i.re variable */) + (1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* line_4032_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)))) + (-0.05) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2600]] /* line_4032_4044.terminal2.i.im variable */) + (-1.1988320000000001) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3242]] /* line_4032_4044.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */)))) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2599]] /* line_4032_4044.terminal1.i.re variable */));
  threadData->lastEquationSolved = 15091;
}
/*
equation index: 15092
type: SIMPLE_ASSIGN
$whenCondition3 = time >= nodeFault.tEnd
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15092};
  modelica_boolean tmp975;
  modelica_real tmp976;
  modelica_real tmp977;
  tmp976 = 1.0;
  tmp977 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* nodeFault.tEnd PARAM */));
  relationhysteresis(data, &tmp975, data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* nodeFault.tEnd PARAM */), tmp976, tmp977, 549, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[222]] /* $whenCondition3 DISCRETE */) = tmp975;
  threadData->lastEquationSolved = 15092;
}
/*
equation index: 15093
type: SIMPLE_ASSIGN
$whenCondition2 = time >= nodeFault.tBegin
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15093};
  modelica_boolean tmp978;
  modelica_real tmp979;
  modelica_real tmp980;
  tmp979 = 1.0;
  tmp980 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3569]] /* nodeFault.tBegin PARAM */));
  relationhysteresis(data, &tmp978, data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3569]] /* nodeFault.tBegin PARAM */), tmp979, tmp980, 550, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[111]] /* $whenCondition2 DISCRETE */) = tmp978;
  threadData->lastEquationSolved = 15093;
}
/*
equation index: 15094
type: WHEN

when {$whenCondition3} then
  nodeFault.nodeFault.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15094};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[222]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[222] /* $whenCondition3 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[831]] /* nodeFault.nodeFault.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[111]] /* $whenCondition2 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[111] /* $whenCondition2 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[831]] /* nodeFault.nodeFault.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15094;
}
/*
equation index: 15096
type: SIMPLE_ASSIGN
$DAEres1012 = if nodeFault.nodeFault.value then line_4032_4044.terminal1.V.re - (nodeFault.ZPu.re * nodeFault.terminal.i.re - nodeFault.ZPu.im * nodeFault.terminal.i.im) else nodeFault.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15096};
  (data->simulationInfo->daeModeData->residualVars[1012]) /* $DAEres1012 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[831]] /* nodeFault.nodeFault.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3568]] /* nodeFault.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2927]] /* nodeFault.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3567]] /* nodeFault.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2926]] /* nodeFault.terminal.i.im variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2927]] /* nodeFault.terminal.i.re variable */));
  threadData->lastEquationSolved = 15096;
}
/*
equation index: 15097
type: SIMPLE_ASSIGN
$DAEres1013 = if nodeFault.nodeFault.value then line_4032_4044.terminal1.V.im - (nodeFault.ZPu.re * nodeFault.terminal.i.im + nodeFault.ZPu.im * nodeFault.terminal.i.re) else nodeFault.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15097};
  (data->simulationInfo->daeModeData->residualVars[1013]) /* $DAEres1013 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[831]] /* nodeFault.nodeFault.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3568]] /* nodeFault.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2926]] /* nodeFault.terminal.i.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3567]] /* nodeFault.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2927]] /* nodeFault.terminal.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2926]] /* nodeFault.terminal.i.im variable */));
  threadData->lastEquationSolved = 15097;
}
/*
equation index: 15098
type: SIMPLE_ASSIGN
$whenCondition4 = not pre(g20.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15098};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[333]] /* $whenCondition4 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[546] /* g20.running.value DISCRETE */));
  threadData->lastEquationSolved = 15098;
}
/*
equation index: 15099
type: WHEN

when {} then
  g20.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15099};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[333]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[333] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15099;
}
/*
equation index: 15101
type: SIMPLE_ASSIGN
$whenCondition6 = not g20.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15101};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[425]] /* $whenCondition6 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */));
  threadData->lastEquationSolved = 15101;
}
/*
equation index: 15102
type: SIMPLE_ASSIGN
$whenCondition5 = g20.running.value and not pre(g20.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15102};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[414]] /* $whenCondition5 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[546] /* g20.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15102;
}
/*
equation index: 15103
type: WHEN

when {$whenCondition6} then
  g20.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15103};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[425]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[425] /* $whenCondition6 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[39]] /* g20.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[414]] /* $whenCondition5 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[414] /* $whenCondition5 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[39]] /* g20.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15103;
}
/*
equation index: 15105
type: SIMPLE_ASSIGN
g20.converter.u = Integer(g20.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15105};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[38]] /* g20.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[39]] /* g20.state DISCRETE */)));
  threadData->lastEquationSolved = 15105;
}
/*
equation index: 15106
type: SIMPLE_ASSIGN
g20.genState = (*Real*)(g20.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1902]] /* g20.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[38]] /* g20.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15106;
}
/*
equation index: 15107
type: SIMPLE_ASSIGN
$DAEres120 = if g20.running.value then der(g20.theta) - 314.1592653589793 * (g20.omegaPu - omegaCOI) else der(g20.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15107};
  (data->simulationInfo->daeModeData->residualVars[120]) /* $DAEres120 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* der(g20.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* der(g20.theta) STATE_DER */));
  threadData->lastEquationSolved = 15107;
}
/*
equation index: 15108
type: SIMPLE_ASSIGN
g20.cmPu = if g20.running.value then g20.PmPu / g20.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1900]] /* g20.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1893]] /* g20.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */),"g20.omegaPu"):0.0);
  threadData->lastEquationSolved = 15108;
}
/*
equation index: 15109
type: SIMPLE_ASSIGN
g20.ufPu = if g20.running.value then vrNordic_g20.limIntegrator.y * g20.Kuf * g20.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1930]] /* g20.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2163]] /* g20.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15109;
}
/*
equation index: 15110
type: SIMPLE_ASSIGN
$DAEres553 = if g20.running.value then g20.mqsPu - g20.MqPPu / (1.0 + g20.mq * g20.lambdaAirGapPu ^ g20.nq) else g20.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15110};
  modelica_real tmp981;
  modelica_real tmp982;
  modelica_real tmp983;
  modelica_real tmp984;
  modelica_real tmp985;
  modelica_real tmp986;
  modelica_real tmp987;
  modelica_boolean tmp988;
  modelica_real tmp989;
  tmp988 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp988)
  {
    tmp981 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1913]] /* g20.lambdaAirGapPu variable */);
    tmp982 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2232]] /* g20.nq PARAM */);
    if(tmp981 < 0.0 && tmp982 != 0.0)
    {
      tmp984 = modf(tmp982, &tmp985);
      
      if(tmp984 > 0.5)
      {
        tmp984 -= 1.0;
        tmp985 += 1.0;
      }
      else if(tmp984 < -0.5)
      {
        tmp984 += 1.0;
        tmp985 -= 1.0;
      }
      
      if(fabs(tmp984) < 1e-10)
        tmp983 = pow(tmp981, tmp985);
      else
      {
        tmp987 = modf(1.0/tmp982, &tmp986);
        if(tmp987 > 0.5)
        {
          tmp987 -= 1.0;
          tmp986 += 1.0;
        }
        else if(tmp987 < -0.5)
        {
          tmp987 += 1.0;
          tmp986 -= 1.0;
        }
        if(fabs(tmp987) < 1e-10 && ((unsigned long)tmp986 & 1))
        {
          tmp983 = -pow(-tmp981, tmp984)*pow(tmp981, tmp985);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp981, tmp982);
        }
      }
    }
    else
    {
      tmp983 = pow(tmp981, tmp982);
    }
    if(isnan(tmp983) || isinf(tmp983))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp981, tmp982);
    }
    tmp989 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1918]] /* g20.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2185]] /* g20.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2230]] /* g20.mq PARAM */)) * (tmp983),"1.0 + g20.mq * g20.lambdaAirGapPu ^ g20.nq"));
  }
  else
  {
    tmp989 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1918]] /* g20.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[553]) /* $DAEres553 DAE_RESIDUAL_VAR */ = tmp989;
  threadData->lastEquationSolved = 15110;
}
/*
equation index: 15111
type: SIMPLE_ASSIGN
$DAEres554 = if g20.running.value then g20.mdsPu - g20.MdPPu / (1.0 + g20.md * g20.lambdaAirGapPu ^ g20.nd) else g20.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15111};
  modelica_real tmp990;
  modelica_real tmp991;
  modelica_real tmp992;
  modelica_real tmp993;
  modelica_real tmp994;
  modelica_real tmp995;
  modelica_real tmp996;
  modelica_boolean tmp997;
  modelica_real tmp998;
  tmp997 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp997)
  {
    tmp990 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1913]] /* g20.lambdaAirGapPu variable */);
    tmp991 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2231]] /* g20.nd PARAM */);
    if(tmp990 < 0.0 && tmp991 != 0.0)
    {
      tmp993 = modf(tmp991, &tmp994);
      
      if(tmp993 > 0.5)
      {
        tmp993 -= 1.0;
        tmp994 += 1.0;
      }
      else if(tmp993 < -0.5)
      {
        tmp993 += 1.0;
        tmp994 -= 1.0;
      }
      
      if(fabs(tmp993) < 1e-10)
        tmp992 = pow(tmp990, tmp994);
      else
      {
        tmp996 = modf(1.0/tmp991, &tmp995);
        if(tmp996 > 0.5)
        {
          tmp996 -= 1.0;
          tmp995 += 1.0;
        }
        else if(tmp996 < -0.5)
        {
          tmp996 += 1.0;
          tmp995 -= 1.0;
        }
        if(fabs(tmp996) < 1e-10 && ((unsigned long)tmp995 & 1))
        {
          tmp992 = -pow(-tmp990, tmp993)*pow(tmp990, tmp994);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp990, tmp991);
        }
      }
    }
    else
    {
      tmp992 = pow(tmp990, tmp991);
    }
    if(isnan(tmp992) || isinf(tmp992))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp990, tmp991);
    }
    tmp998 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1916]] /* g20.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2179]] /* g20.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2229]] /* g20.md PARAM */)) * (tmp992),"1.0 + g20.md * g20.lambdaAirGapPu ^ g20.nd"));
  }
  else
  {
    tmp998 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1916]] /* g20.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[554]) /* $DAEres554 DAE_RESIDUAL_VAR */ = tmp998;
  threadData->lastEquationSolved = 15111;
}
/*
equation index: 15112
type: SIMPLE_ASSIGN
$DAEres555 = if g20.running.value then g20.lambdaAirGapPu - sqrt(g20.lambdaADPu ^ 2.0 + g20.lambdaAQPu ^ 2.0) else g20.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15112};
  modelica_real tmp999;
  modelica_real tmp1000;
  modelica_real tmp1001;
  modelica_boolean tmp1002;
  modelica_real tmp1003;
  tmp1002 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp1002)
  {
    tmp999 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1911]] /* g20.lambdaADPu variable */);
    tmp1000 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1912]] /* g20.lambdaAQPu variable */);
    tmp1001 = (tmp999 * tmp999) + (tmp1000 * tmp1000);
    if(!(tmp1001 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g20.lambdaADPu ^ 2.0 + g20.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1001);
      }
    }
    tmp1003 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1913]] /* g20.lambdaAirGapPu variable */) - sqrt(tmp1001);
  }
  else
  {
    tmp1003 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1913]] /* g20.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[555]) /* $DAEres555 DAE_RESIDUAL_VAR */ = tmp1003;
  threadData->lastEquationSolved = 15112;
}
/*
equation index: 15113
type: SIMPLE_ASSIGN
$DAEres556 = if g20.running.value then g20.cos2Eta - (g20.lambdaADPu / g20.lambdaAirGapPu) ^ 2.0 else g20.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15113};
  modelica_real tmp1004;
  modelica_boolean tmp1005;
  modelica_real tmp1006;
  tmp1005 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp1005)
  {
    tmp1004 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1911]] /* g20.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1913]] /* g20.lambdaAirGapPu variable */),"g20.lambdaAirGapPu");
    tmp1006 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1901]] /* g20.cos2Eta variable */) - ((tmp1004 * tmp1004));
  }
  else
  {
    tmp1006 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1901]] /* g20.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[556]) /* $DAEres556 DAE_RESIDUAL_VAR */ = tmp1006;
  threadData->lastEquationSolved = 15113;
}
/*
equation index: 15114
type: SIMPLE_ASSIGN
$DAEres557 = if g20.running.value then g20.miPu - (g20.mdsPu * g20.cos2Eta + g20.mqsPu * g20.sin2Eta) else g20.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15114};
  (data->simulationInfo->daeModeData->residualVars[557]) /* $DAEres557 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1917]] /* g20.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1916]] /* g20.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1901]] /* g20.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1918]] /* g20.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1921]] /* g20.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1917]] /* g20.miPu variable */));
  threadData->lastEquationSolved = 15114;
}
/*
equation index: 15115
type: SIMPLE_ASSIGN
$DAEres558 = if g20.running.value then g20.MqSatPPu - (g20.miPu - g20.MsalPu * g20.cos2Eta) else g20.MqSatPPu - g20.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15115};
  (data->simulationInfo->daeModeData->residualVars[558]) /* $DAEres558 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1917]] /* g20.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2189]] /* g20.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1901]] /* g20.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2185]] /* g20.MqPPu PARAM */));
  threadData->lastEquationSolved = 15115;
}
/*
equation index: 15116
type: SIMPLE_ASSIGN
$DAEres559 = if g20.running.value then g20.lambdaQ2Pu - (g20.MqSatPPu * (g20.iqPu + g20.iQ1Pu) + (g20.MqSatPPu + g20.LQ2PPu) * g20.iQ2Pu) else g20.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15116};
  (data->simulationInfo->daeModeData->residualVars[559]) /* $DAEres559 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* g20.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* g20.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2166]] /* g20.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* g20.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* g20.iQ2Pu variable */));
  threadData->lastEquationSolved = 15116;
}
/*
equation index: 15117
type: SIMPLE_ASSIGN
$DAEres560 = if g20.running.value then g20.lambdaQ1Pu - (g20.MqSatPPu * g20.iqPu + (g20.MqSatPPu + g20.LQ1PPu) * g20.iQ1Pu + g20.MqSatPPu * g20.iQ2Pu) else g20.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15117};
  (data->simulationInfo->daeModeData->residualVars[560]) /* $DAEres560 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* g20.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* g20.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* g20.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* g20.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* g20.iQ1Pu variable */));
  threadData->lastEquationSolved = 15117;
}
/*
equation index: 15118
type: SIMPLE_ASSIGN
$DAEres561 = if g20.running.value then g20.uqPu - ((g20.RaPPu + g20.RTfoPu) * g20.iqPu + g20.omegaPu * g20.lambdadPu) else g20.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15118};
  (data->simulationInfo->daeModeData->residualVars[561]) /* $DAEres561 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1931]] /* g20.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2205]] /* g20.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2204]] /* g20.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* g20.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1915]] /* g20.lambdaqPu variable */));
  threadData->lastEquationSolved = 15118;
}
/*
equation index: 15119
type: SIMPLE_ASSIGN
$DAEres562 = if g20.running.value then g20.lambdaqPu - ((g20.MqSatPPu + g20.LqPPu + g20.XTfoPu) * g20.iqPu + g20.MqSatPPu * (g20.iQ1Pu + g20.iQ2Pu)) else g20.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15119};
  (data->simulationInfo->daeModeData->residualVars[562]) /* $DAEres562 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1915]] /* g20.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2178]] /* g20.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2224]] /* g20.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* g20.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* g20.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1903]] /* g20.iDPu variable */));
  threadData->lastEquationSolved = 15119;
}
/*
equation index: 15120
type: SIMPLE_ASSIGN
$DAEres563 = if g20.running.value then g20.lambdaAQPu - g20.MqSatPPu * (g20.iqPu + g20.iQ1Pu + g20.iQ2Pu) else g20.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15120};
  (data->simulationInfo->daeModeData->residualVars[563]) /* $DAEres563 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1912]] /* g20.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1890]] /* g20.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* g20.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* g20.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1912]] /* g20.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15120;
}
/*
equation index: 15121
type: SIMPLE_ASSIGN
$DAEres564 = if g20.running.value then g20.sin2Eta - (g20.lambdaAQPu / g20.lambdaAirGapPu) ^ 2.0 else g20.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15121};
  modelica_real tmp1007;
  modelica_boolean tmp1008;
  modelica_real tmp1009;
  tmp1008 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp1008)
  {
    tmp1007 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1912]] /* g20.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1913]] /* g20.lambdaAirGapPu variable */),"g20.lambdaAirGapPu");
    tmp1009 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1921]] /* g20.sin2Eta variable */) - ((tmp1007 * tmp1007));
  }
  else
  {
    tmp1009 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1921]] /* g20.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[564]) /* $DAEres564 DAE_RESIDUAL_VAR */ = tmp1009;
  threadData->lastEquationSolved = 15121;
}
/*
equation index: 15122
type: SIMPLE_ASSIGN
$DAEres565 = if g20.running.value then g20.MdSatPPu - (g20.miPu + g20.MsalPu * g20.sin2Eta) else g20.MdSatPPu - g20.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15122};
  (data->simulationInfo->daeModeData->residualVars[565]) /* $DAEres565 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1917]] /* g20.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2189]] /* g20.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1921]] /* g20.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2179]] /* g20.MdPPu PARAM */));
  threadData->lastEquationSolved = 15122;
}
/*
equation index: 15123
type: SIMPLE_ASSIGN
$DAEres566 = if g20.running.value then g20.lambdaADPu - g20.MdSatPPu * (g20.idPu + g20.ifPu + g20.iDPu) else g20.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15123};
  (data->simulationInfo->daeModeData->residualVars[566]) /* $DAEres566 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1911]] /* g20.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1903]] /* g20.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1911]] /* g20.lambdaADPu variable */));
  threadData->lastEquationSolved = 15123;
}
/*
equation index: 15124
type: SIMPLE_ASSIGN
$DAEres567 = if g20.running.value then g20.udPu - ((g20.RaPPu + g20.RTfoPu) * g20.idPu - g20.omegaPu * g20.lambdaqPu) else g20.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15124};
  (data->simulationInfo->daeModeData->residualVars[567]) /* $DAEres567 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1929]] /* g20.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2205]] /* g20.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2204]] /* g20.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1915]] /* g20.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* g20.lambdadPu variable */));
  threadData->lastEquationSolved = 15124;
}
/*
equation index: 15125
type: SIMPLE_ASSIGN
$DAEres568 = if g20.running.value then g20.lambdaDPu - (g20.MdSatPPu * g20.idPu + (g20.MdSatPPu + g20.MrcPPu) * g20.ifPu + (g20.MdSatPPu + g20.LDPPu + g20.MrcPPu) * g20.iDPu) else g20.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15125};
  (data->simulationInfo->daeModeData->residualVars[568]) /* $DAEres568 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* g20.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2188]] /* g20.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* g20.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2188]] /* g20.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1903]] /* g20.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */));
  threadData->lastEquationSolved = 15125;
}
/*
equation index: 15126
type: SIMPLE_ASSIGN
$DAEres569 = if g20.running.value then g20.lambdadPu - ((g20.MdSatPPu + g20.LdPPu + g20.XTfoPu) * g20.idPu + g20.MdSatPPu * (g20.ifPu + g20.iDPu)) else g20.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15126};
  (data->simulationInfo->daeModeData->residualVars[569]) /* $DAEres569 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* g20.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2176]] /* g20.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2224]] /* g20.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1903]] /* g20.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */));
  threadData->lastEquationSolved = 15126;
}
/*
equation index: 15127
type: SIMPLE_ASSIGN
$DAEres570 = if g20.running.value then g20.lambdafPu - (g20.MdSatPPu * g20.idPu + (g20.MdSatPPu + g20.LfPPu + g20.MrcPPu) * g20.ifPu + (g20.MdSatPPu + g20.MrcPPu) * g20.iDPu) else g20.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15127};
  (data->simulationInfo->daeModeData->residualVars[570]) /* $DAEres570 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* g20.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2177]] /* g20.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2188]] /* g20.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1889]] /* g20.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2188]] /* g20.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1903]] /* g20.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */));
  threadData->lastEquationSolved = 15127;
}
/*
equation index: 15128
type: SIMPLE_ASSIGN
$DAEres572 = if g20.running.value then 100.0 * g20.terminal.i.im / g20.SNom - (sin(g20.theta) * g20.iqPu - cos(g20.theta) * g20.idPu) else g20.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15128};
  (data->simulationInfo->daeModeData->residualVars[572]) /* $DAEres572 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */),"g20.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* g20.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* g20.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */));
  threadData->lastEquationSolved = 15128;
}
/*
equation index: 15129
type: SIMPLE_ASSIGN
$DAEres573 = if g20.running.value then 100.0 * g20.terminal.i.re / g20.SNom - (sin(g20.theta) * g20.idPu + cos(g20.theta) * g20.iqPu) else g20.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15129};
  (data->simulationInfo->daeModeData->residualVars[573]) /* $DAEres573 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */),"g20.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* g20.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* g20.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */));
  threadData->lastEquationSolved = 15129;
}
/*
equation index: 15130
type: SIMPLE_ASSIGN
$DAEres575 = if g20.running.value then trafo_g20_4072.terminal1.V.re - (sin(g20.theta) * g20.udPu + cos(g20.theta) * g20.uqPu) else g20.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15130};
  (data->simulationInfo->daeModeData->residualVars[575]) /* $DAEres575 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* g20.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1929]] /* g20.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* g20.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1931]] /* g20.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1929]] /* g20.udPu variable */));
  threadData->lastEquationSolved = 15130;
}
/*
equation index: 15131
type: SIMPLE_ASSIGN
$DAEres576 = if g20.running.value then trafo_g20_4072.terminal1.V.im - (sin(g20.theta) * g20.uqPu - cos(g20.theta) * g20.udPu) else g20.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15131};
  (data->simulationInfo->daeModeData->residualVars[576]) /* $DAEres576 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* g20.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1931]] /* g20.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* g20.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1929]] /* g20.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1931]] /* g20.uqPu variable */));
  threadData->lastEquationSolved = 15131;
}
/*
equation index: 15132
type: SIMPLE_ASSIGN
g20.uPu.im = if g20.running.value then trafo_g20_4072.terminal1.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1925]] /* g20.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */):0.0);
  threadData->lastEquationSolved = 15132;
}
/*
equation index: 15133
type: SIMPLE_ASSIGN
g20.iStatorPu.re = if g20.running.value then g20.rTfoPu * g20.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15133;
}
/*
equation index: 15134
type: SIMPLE_ASSIGN
$DAEres1284 = if g20.running.value then (-g20.RDPPu) * g20.iDPu - 0.0031830988618379067 * der(g20.lambdaDPu) else der(g20.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15134};
  (data->simulationInfo->daeModeData->residualVars[1284]) /* $DAEres1284 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2200]] /* g20.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1903]] /* g20.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* der(g20.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* der(g20.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15134;
}
/*
equation index: 15135
type: SIMPLE_ASSIGN
$DAEres1285 = if g20.running.value then (-g20.RQ2PPu) * g20.iQ2Pu - 0.0031830988618379067 * der(g20.lambdaQ2Pu) else der(g20.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15135};
  (data->simulationInfo->daeModeData->residualVars[1285]) /* $DAEres1285 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2202]] /* g20.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* g20.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* der(g20.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* der(g20.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15135;
}
/*
equation index: 15136
type: SIMPLE_ASSIGN
$DAEres1286 = if g20.running.value then (-g20.RQ1PPu) * g20.iQ1Pu - 0.0031830988618379067 * der(g20.lambdaQ1Pu) else der(g20.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15136};
  (data->simulationInfo->daeModeData->residualVars[1286]) /* $DAEres1286 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2201]] /* g20.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* g20.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* der(g20.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* der(g20.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15136;
}
/*
equation index: 15137
type: SIMPLE_ASSIGN
vrNordic_g20.IrPu = if g20.running.value then g20.RfPPu * g20.ifPu / (g20.rTfoPu * g20.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* vrNordic_g20.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* g20.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2163]] /* g20.Kuf PARAM */)),"g20.rTfoPu * g20.Kuf")):0.0);
  threadData->lastEquationSolved = 15137;
}
/*
equation index: 15138
type: SIMPLE_ASSIGN
vrNordic_g20.dIf.y = vrNordic_g20.IrPu - vrNordic_g20.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* vrNordic_g20.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5634]] /* vrNordic_g20.const2.k PARAM */);
  threadData->lastEquationSolved = 15138;
}
/*
equation index: 15139
type: SIMPLE_ASSIGN
vrNordic_g20.gain1.y = vrNordic_g20.gain1.k * vrNordic_g20.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3911]] /* vrNordic_g20.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5640]] /* vrNordic_g20.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */));
  threadData->lastEquationSolved = 15139;
}
/*
equation index: 15140
type: SIMPLE_ASSIGN
vrNordic_g20.overExcitationLimitation.y = if vrNordic_g20.dIf.y < -0.1 then -1.0 else if vrNordic_g20.dIf.y < 0.0 then 0.0 else if vrNordic_g20.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g20.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15140};
  modelica_boolean tmp1010;
  modelica_real tmp1011;
  modelica_real tmp1012;
  modelica_boolean tmp1013;
  modelica_real tmp1014;
  modelica_real tmp1015;
  modelica_boolean tmp1016;
  modelica_boolean tmp1017;
  modelica_real tmp1018;
  modelica_boolean tmp1019;
  modelica_real tmp1020;
  tmp1011 = 1.0;
  tmp1012 = 0.1;
  relationhysteresis(data, &tmp1010, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */), -0.1, tmp1011, tmp1012, 534, Less, LessZC);
  tmp1019 = (modelica_boolean)tmp1010;
  if(tmp1019)
  {
    tmp1020 = -1.0;
  }
  else
  {
    tmp1014 = 1.0;
    tmp1015 = 0.0;
    relationhysteresis(data, &tmp1013, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */), 0.0, tmp1014, tmp1015, 535, Less, LessZC);
    tmp1017 = (modelica_boolean)tmp1013;
    if(tmp1017)
    {
      tmp1018 = 0.0;
    }
    else
    {
      tmp1016 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5688]] /* vrNordic_g20.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1018 = (tmp1016?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */));
    }
    tmp1020 = tmp1018;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */) = tmp1020;
  threadData->lastEquationSolved = 15140;
}
/*
equation index: 15141
type: SIMPLE_ASSIGN
$DAEres1287 = (if vrNordic_g20.timer.y < vrNordic_g20.timer.outMin and vrNordic_g20.timer.k * vrNordic_g20.overExcitationLimitation.y < 0.0 or vrNordic_g20.timer.y > vrNordic_g20.timer.outMax and vrNordic_g20.timer.k * vrNordic_g20.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g20.timer.k * vrNordic_g20.overExcitationLimitation.y) - der(vrNordic_g20.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15141};
  modelica_boolean tmp1021;
  modelica_real tmp1022;
  modelica_real tmp1023;
  modelica_boolean tmp1024;
  modelica_real tmp1025;
  modelica_real tmp1026;
  modelica_boolean tmp1027;
  modelica_real tmp1028;
  modelica_real tmp1029;
  modelica_boolean tmp1030;
  modelica_real tmp1031;
  modelica_real tmp1032;
  tmp1022 = 1.0;
  tmp1023 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5698]] /* vrNordic_g20.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1021, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5698]] /* vrNordic_g20.timer.outMin PARAM */), tmp1022, tmp1023, 540, Less, LessZC);
  tmp1025 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */))) * (1.0);
  tmp1026 = 0.0;
  relationhysteresis(data, &tmp1024, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)), 0.0, tmp1025, tmp1026, 541, Less, LessZC);
  tmp1028 = 1.0;
  tmp1029 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5697]] /* vrNordic_g20.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1027, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5697]] /* vrNordic_g20.timer.outMax PARAM */), tmp1028, tmp1029, 542, Greater, GreaterZC);
  tmp1031 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */))) * (1.0);
  tmp1032 = 0.0;
  relationhysteresis(data, &tmp1030, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)), 0.0, tmp1031, tmp1032, 543, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1287]) /* $DAEres1287 DAE_RESIDUAL_VAR */ = (((tmp1021 && tmp1024) || (tmp1027 && tmp1030))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* der(vrNordic_g20.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15141;
}
/*
equation index: 15142
type: SIMPLE_ASSIGN
$DAEres1288 = if g20.running.value then g20.ufPu - (g20.RfPPu * g20.ifPu + 0.0031830988618379067 * der(g20.lambdafPu)) else der(g20.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15142};
  (data->simulationInfo->daeModeData->residualVars[1288]) /* $DAEres1288 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1930]] /* g20.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* g20.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* g20.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* der(g20.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* der(g20.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15142;
}
/*
equation index: 15143
type: SIMPLE_ASSIGN
g20.cePu = if g20.running.value then g20.lambdaqPu * g20.idPu - g20.lambdadPu * g20.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1899]] /* g20.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1915]] /* g20.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* g20.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* g20.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1910]] /* g20.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15143;
}
/*
equation index: 15144
type: SIMPLE_ASSIGN
g20.PePu = if g20.running.value then g20.cePu * g20.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1892]] /* g20.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1899]] /* g20.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15144;
}
/*
equation index: 15145
type: SIMPLE_ASSIGN
$DAEres1289 = if g20.running.value then 2.0 * g20.H * der(g20.omegaPu) - (g20.cmPu * g20.PNomTurb / g20.SNom + g20.DPu * (omegaCOI - g20.omegaPu) - g20.cePu) else der(g20.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15145};
  (data->simulationInfo->daeModeData->residualVars[1289]) /* $DAEres1289 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* g20.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* der(g20.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1900]] /* g20.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2193]] /* g20.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */),"g20.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* g20.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* g20.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1899]] /* g20.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* der(g20.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15145;
}
/*
equation index: 15146
type: SIMPLE_ASSIGN
g20.thetaInternal.value = if g20.running.value then Modelica.Math.atan3(g20.udPu, g20.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1924]] /* g20.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1929]] /* g20.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1931]] /* g20.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15146;
}
/*
equation index: 15147
type: SIMPLE_ASSIGN
g20.uStatorPu.im = if g20.running.value then (trafo_g20_4072.terminal1.V.im + (-100.0) * (g20.terminal.i.re * g20.XTfoPu + g20.terminal.i.im * g20.RTfoPu) / g20.SNom) / g20.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2224]] /* g20.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2204]] /* g20.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */),"g20.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */),"g20.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15147;
}
/*
equation index: 15148
type: SIMPLE_ASSIGN
g20.iStatorPu.im = if g20.running.value then g20.rTfoPu * g20.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15148;
}
/*
equation index: 15149
type: SIMPLE_ASSIGN
g20.IStatorPu = if g20.running.value then if g20.iStatorPu.re == 0.0 and g20.iStatorPu.im == 0.0 then 0.0 else (g20.iStatorPu.re ^ 2.0 + g20.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15149};
  modelica_real tmp1033;
  modelica_real tmp1034;
  modelica_real tmp1035;
  modelica_boolean tmp1036;
  modelica_real tmp1037;
  modelica_boolean tmp1038;
  modelica_real tmp1039;
  tmp1038 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp1038)
  {
    tmp1036 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */) == 0.0));
    if(tmp1036)
    {
      tmp1037 = 0.0;
    }
    else
    {
      tmp1033 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */);
      tmp1034 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */);
      tmp1035 = (tmp1033 * tmp1033) + (tmp1034 * tmp1034);
      if(tmp1035 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1035, 0.5);
      }
      tmp1037 = sqrt(tmp1035);
    }
    tmp1039 = tmp1037;
  }
  else
  {
    tmp1039 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1888]] /* g20.IStatorPu variable */) = tmp1039;
  threadData->lastEquationSolved = 15149;
}
/*
equation index: 15150
type: SIMPLE_ASSIGN
g20.uPu.re = if g20.running.value then trafo_g20_4072.terminal1.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1926]] /* g20.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */):0.0);
  threadData->lastEquationSolved = 15150;
}
/*
equation index: 15151
type: SIMPLE_ASSIGN
g20.UPu = if g20.running.value then (trafo_g20_4072.terminal1.V.re ^ 2.0 + trafo_g20_4072.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15151};
  modelica_real tmp1040;
  modelica_real tmp1041;
  modelica_real tmp1042;
  modelica_boolean tmp1043;
  modelica_real tmp1044;
  tmp1043 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp1043)
  {
    tmp1040 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */);
    tmp1041 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */);
    tmp1042 = (tmp1040 * tmp1040) + (tmp1041 * tmp1041);
    if(tmp1042 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1042, 0.5);
    }
    tmp1044 = sqrt(tmp1042);
  }
  else
  {
    tmp1044 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1898]] /* g20.UPu variable */) = tmp1044;
  threadData->lastEquationSolved = 15151;
}
/*
equation index: 15152
type: SIMPLE_ASSIGN
goverNordic_g20.PGenPu = if g20.running.value then (-trafo_g20_4072.terminal1.V.re) * g20.terminal.i.re - trafo_g20_4072.terminal1.V.im * g20.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2274]] /* goverNordic_g20.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15152;
}
/*
equation index: 15153
type: SIMPLE_ASSIGN
goverNordic_g20.perUnitP.y = goverNordic_g20.perUnitP.k * goverNordic_g20.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2290]] /* goverNordic_g20.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* goverNordic_g20.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2274]] /* goverNordic_g20.PGenPu variable */));
  threadData->lastEquationSolved = 15153;
}
/*
equation index: 15154
type: SIMPLE_ASSIGN
$DAEres1290 = goverNordic_g20.firstOrder1.k * goverNordic_g20.perUnitP.y + (-goverNordic_g20.firstOrder1.y) - der(goverNordic_g20.firstOrder1.y) * goverNordic_g20.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15154};
  (data->simulationInfo->daeModeData->residualVars[1290]) /* $DAEres1290 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2948]] /* goverNordic_g20.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2290]] /* goverNordic_g20.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* goverNordic_g20.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* der(goverNordic_g20.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2947]] /* goverNordic_g20.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15154;
}
/*
equation index: 15155
type: SIMPLE_ASSIGN
g20.PGen = if g20.running.value then 100.0 * goverNordic_g20.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1891]] /* g20.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2274]] /* goverNordic_g20.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15155;
}
/*
equation index: 15156
type: SIMPLE_ASSIGN
g20.QGenPu = if g20.running.value then trafo_g20_4072.terminal1.V.re * g20.terminal.i.im - trafo_g20_4072.terminal1.V.im * g20.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1895]] /* g20.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15156;
}
/*
equation index: 15157
type: SIMPLE_ASSIGN
g20.QGen = if g20.running.value then 100.0 * g20.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1894]] /* g20.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1895]] /* g20.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15157;
}
/*
equation index: 15158
type: SIMPLE_ASSIGN
g20.uStatorPu.re = if g20.running.value then (trafo_g20_4072.terminal1.V.re + (-100.0) * (g20.terminal.i.re * g20.RTfoPu - g20.terminal.i.im * g20.XTfoPu) / g20.SNom) / g20.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2204]] /* g20.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2224]] /* g20.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* g20.SNom PARAM */),"g20.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* g20.rTfoPu PARAM */),"g20.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15158;
}
/*
equation index: 15159
type: SIMPLE_ASSIGN
g20.sStatorPu.re = if g20.running.value then g20.uStatorPu.re * g20.iStatorPu.re + g20.uStatorPu.im * g20.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1920]] /* g20.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15159;
}
/*
equation index: 15160
type: SIMPLE_ASSIGN
g20.sStatorPu.im = if g20.running.value then g20.uStatorPu.im * g20.iStatorPu.re - g20.uStatorPu.re * g20.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1919]] /* g20.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15160;
}
/*
equation index: 15161
type: SIMPLE_ASSIGN
g20.QStatorPu = if g20.running.value then -g20.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1896]] /* g20.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1919]] /* g20.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15161;
}
/*
equation index: 15162
type: SIMPLE_ASSIGN
g20.QStatorPuQNom = if g20.running.value then 100.0 * g20.QStatorPu / g20.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1897]] /* g20.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1896]] /* g20.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2197]] /* g20.QNomAlt PARAM */),"g20.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15162;
}
/*
equation index: 15163
type: SIMPLE_ASSIGN
vrNordic_g20.UsPu = if g20.running.value then if g20.uStatorPu.re == 0.0 and g20.uStatorPu.im == 0.0 then 0.0 else (g20.uStatorPu.re ^ 2.0 + g20.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15163};
  modelica_real tmp1045;
  modelica_real tmp1046;
  modelica_real tmp1047;
  modelica_boolean tmp1048;
  modelica_real tmp1049;
  modelica_boolean tmp1050;
  modelica_real tmp1051;
  tmp1050 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[546]] /* g20.running.value DISCRETE */);
  if(tmp1050)
  {
    tmp1048 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */) == 0.0));
    if(tmp1048)
    {
      tmp1049 = 0.0;
    }
    else
    {
      tmp1045 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */);
      tmp1046 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */);
      tmp1047 = (tmp1045 * tmp1045) + (tmp1046 * tmp1046);
      if(tmp1047 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1047, 0.5);
      }
      tmp1049 = sqrt(tmp1047);
    }
    tmp1051 = tmp1049;
  }
  else
  {
    tmp1051 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* vrNordic_g20.UsPu variable */) = tmp1051;
  threadData->lastEquationSolved = 15163;
}
/*
equation index: 15164
type: SIMPLE_ASSIGN
vrNordic_g20.dU.y = vrNordic_g20.const1.k - vrNordic_g20.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3907]] /* vrNordic_g20.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5633]] /* vrNordic_g20.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* vrNordic_g20.UsPu variable */);
  threadData->lastEquationSolved = 15164;
}
/*
equation index: 15165
type: SIMPLE_ASSIGN
vrNordic_g20.add.y = vrNordic_g20.add.k1 * vrNordic_g20.dU.y + vrNordic_g20.add.k2 * vrNordic_g20.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5630]] /* vrNordic_g20.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3907]] /* vrNordic_g20.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5631]] /* vrNordic_g20.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3921]] /* vrNordic_g20.limiter.y variable */));
  threadData->lastEquationSolved = 15165;
}
/*
equation index: 15166
type: SIMPLE_ASSIGN
vrNordic_g20.switch.y = if vrNordic_g20.greaterEqualThreshold.y then vrNordic_g20.gain1.y else vrNordic_g20.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3924]] /* vrNordic_g20.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1072]] /* vrNordic_g20.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3911]] /* vrNordic_g20.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */));
  threadData->lastEquationSolved = 15166;
}
/*
equation index: 15167
type: SIMPLE_ASSIGN
vrNordic_g20.min1.y = if vrNordic_g20.switch.y < vrNordic_g20.add.y then vrNordic_g20.switch.y else vrNordic_g20.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15167};
  modelica_boolean tmp1052;
  modelica_real tmp1053;
  modelica_real tmp1054;
  tmp1053 = 1.0;
  tmp1054 = 1.0;
  relationhysteresis(data, &tmp1052, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3924]] /* vrNordic_g20.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */), tmp1053, tmp1054, 532, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3922]] /* vrNordic_g20.min1.y variable */) = (tmp1052?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3924]] /* vrNordic_g20.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */));
  threadData->lastEquationSolved = 15167;
}
/*
equation index: 15168
type: SIMPLE_ASSIGN
vrNordic_g20.kMulDU.y = vrNordic_g20.kMulDU.k * vrNordic_g20.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3912]] /* vrNordic_g20.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5642]] /* vrNordic_g20.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3922]] /* vrNordic_g20.min1.y variable */));
  threadData->lastEquationSolved = 15168;
}
/*
equation index: 15169
type: SIMPLE_ASSIGN
$DAEres1291 = vrNordic_g20.leadLag.a_end * vrNordic_g20.kMulDU.y + (-vrNordic_g20.leadLag.a[2]) * vrNordic_g20.leadLag.x_scaled[1] - der(vrNordic_g20.leadLag.x_scaled[1]) * vrNordic_g20.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15169};
  (data->simulationInfo->daeModeData->residualVars[1291]) /* $DAEres1291 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5647]] /* vrNordic_g20.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3912]] /* vrNordic_g20.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5646]] /* vrNordic_g20.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* vrNordic_g20.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* der(vrNordic_g20.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5645]] /* vrNordic_g20.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15169;
}
/*
equation index: 15170
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.y = (vrNordic_g20.leadLag.bb[2] - vrNordic_g20.leadLag.d * vrNordic_g20.leadLag.a[2]) * vrNordic_g20.leadLag.x[1] + vrNordic_g20.leadLag.d * vrNordic_g20.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3914]] /* vrNordic_g20.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5651]] /* vrNordic_g20.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5652]] /* vrNordic_g20.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5646]] /* vrNordic_g20.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3913]] /* vrNordic_g20.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5652]] /* vrNordic_g20.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3912]] /* vrNordic_g20.kMulDU.y variable */));
  threadData->lastEquationSolved = 15170;
}
/*
equation index: 15171
type: SIMPLE_ASSIGN
vrNordic_g20.feedback1.y = vrNordic_g20.leadLag.y - vrNordic_g20.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3909]] /* vrNordic_g20.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3914]] /* vrNordic_g20.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15171;
}
/*
equation index: 15172
type: SIMPLE_ASSIGN
vrNordic_g20.gain.y = vrNordic_g20.gain.k * vrNordic_g20.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5639]] /* vrNordic_g20.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3909]] /* vrNordic_g20.feedback1.y variable */));
  threadData->lastEquationSolved = 15172;
}
/*
equation index: 15173
type: SIMPLE_ASSIGN
$DAEres1292 = (if vrNordic_g20.limIntegrator.y < vrNordic_g20.limIntegrator.outMin and vrNordic_g20.limIntegrator.k * vrNordic_g20.gain.y < 0.0 or vrNordic_g20.limIntegrator.y > vrNordic_g20.limIntegrator.outMax and vrNordic_g20.limIntegrator.k * vrNordic_g20.gain.y > 0.0 then 0.0 else vrNordic_g20.limIntegrator.k * vrNordic_g20.gain.y) - der(vrNordic_g20.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15173};
  modelica_boolean tmp1055;
  modelica_real tmp1056;
  modelica_real tmp1057;
  modelica_boolean tmp1058;
  modelica_real tmp1059;
  modelica_real tmp1060;
  modelica_boolean tmp1061;
  modelica_real tmp1062;
  modelica_real tmp1063;
  modelica_boolean tmp1064;
  modelica_real tmp1065;
  modelica_real tmp1066;
  tmp1056 = 1.0;
  tmp1057 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5684]] /* vrNordic_g20.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1055, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5684]] /* vrNordic_g20.limIntegrator.outMin PARAM */), tmp1056, tmp1057, 536, Less, LessZC);
  tmp1059 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */))) * (1.0);
  tmp1060 = 0.0;
  relationhysteresis(data, &tmp1058, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)), 0.0, tmp1059, tmp1060, 537, Less, LessZC);
  tmp1062 = 1.0;
  tmp1063 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5683]] /* vrNordic_g20.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1061, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5683]] /* vrNordic_g20.limIntegrator.outMax PARAM */), tmp1062, tmp1063, 538, Greater, GreaterZC);
  tmp1065 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */))) * (1.0);
  tmp1066 = 0.0;
  relationhysteresis(data, &tmp1064, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)), 0.0, tmp1065, tmp1066, 539, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1292]) /* $DAEres1292 DAE_RESIDUAL_VAR */ = (((tmp1055 && tmp1058) || (tmp1061 && tmp1064))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* der(vrNordic_g20.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15173;
}
/*
equation index: 15174
type: SIMPLE_ASSIGN
$whenCondition7 = not pre(g19.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15174};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[436]] /* $whenCondition7 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[542] /* g19.running.value DISCRETE */));
  threadData->lastEquationSolved = 15174;
}
/*
equation index: 15175
type: WHEN

when {} then
  g19.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15175};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[436]] /* $whenCondition7 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[436] /* $whenCondition7 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15175;
}
/*
equation index: 15177
type: SIMPLE_ASSIGN
$whenCondition9 = not g19.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15177};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[458]] /* $whenCondition9 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */));
  threadData->lastEquationSolved = 15177;
}
/*
equation index: 15178
type: SIMPLE_ASSIGN
$whenCondition8 = g19.running.value and not pre(g19.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15178};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[447]] /* $whenCondition8 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[542] /* g19.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15178;
}
/*
equation index: 15179
type: WHEN

when {$whenCondition9} then
  g19.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15179};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[458]] /* $whenCondition9 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[458] /* $whenCondition9 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* g19.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[447]] /* $whenCondition8 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[447] /* $whenCondition8 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* g19.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15179;
}
/*
equation index: 15181
type: SIMPLE_ASSIGN
g19.converter.u = Integer(g19.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15181};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[36]] /* g19.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* g19.state DISCRETE */)));
  threadData->lastEquationSolved = 15181;
}
/*
equation index: 15182
type: SIMPLE_ASSIGN
g19.genState = (*Real*)(g19.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1856]] /* g19.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[36]] /* g19.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15182;
}
/*
equation index: 15183
type: SIMPLE_ASSIGN
$DAEres121 = if g19.running.value then der(g19.theta) - 314.1592653589793 * (g19.omegaPu - omegaCOI) else der(g19.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15183};
  (data->simulationInfo->daeModeData->residualVars[121]) /* $DAEres121 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* der(g19.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* der(g19.theta) STATE_DER */));
  threadData->lastEquationSolved = 15183;
}
/*
equation index: 15184
type: SIMPLE_ASSIGN
g19.cmPu = if g19.running.value then g19.PmPu / g19.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1854]] /* g19.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1847]] /* g19.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */),"g19.omegaPu"):0.0);
  threadData->lastEquationSolved = 15184;
}
/*
equation index: 15185
type: SIMPLE_ASSIGN
g19.ufPu = if g19.running.value then vrNordic_g19.limIntegrator.y * g19.Kuf * g19.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1886]] /* g19.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2062]] /* g19.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15185;
}
#if defined(__cplusplus)
}
#endif