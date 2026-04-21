#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 6237
type: SIMPLE_ASSIGN
vrNordic_g18.gain.y = vrNordic_g18.gain.k * vrNordic_g18.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5481]] /* vrNordic_g18.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3861]] /* vrNordic_g18.feedback1.y variable */));
  threadData->lastEquationSolved = 6237;
}

/*
equation index: 6238
type: SIMPLE_ASSIGN
$DER.vrNordic_g18.limIntegrator.y = if vrNordic_g18.limIntegrator.y < vrNordic_g18.limIntegrator.outMin and vrNordic_g18.limIntegrator.k * vrNordic_g18.gain.y < 0.0 or vrNordic_g18.limIntegrator.y > vrNordic_g18.limIntegrator.outMax and vrNordic_g18.limIntegrator.k * vrNordic_g18.gain.y > 0.0 then 0.0 else vrNordic_g18.limIntegrator.k * vrNordic_g18.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6238};
  modelica_boolean tmp1798;
  modelica_boolean tmp1799;
  modelica_boolean tmp1800;
  modelica_boolean tmp1801;
  tmp1798 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5526]] /* vrNordic_g18.limIntegrator.outMin PARAM */));
  tmp1799 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)),0.0);
  tmp1800 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5525]] /* vrNordic_g18.limIntegrator.outMax PARAM */));
  tmp1801 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* der(vrNordic_g18.limIntegrator.y) STATE_DER */) = (((tmp1798 && tmp1799) || (tmp1800 && tmp1801))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)));
  threadData->lastEquationSolved = 6238;
}

/*
equation index: 6239
type: SIMPLE_ASSIGN
g18.ufPu = if g18.running.value then vrNordic_g18.limIntegrator.y * g18.Kuf * g18.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1840]] /* g18.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1959]] /* g18.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6239;
}

/*
equation index: 6240
type: SIMPLE_ASSIGN
$DER.g18.lambdafPu = if g18.running.value then (g18.RfPPu * g18.ifPu - g18.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* der(g18.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2002]] /* g18.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1840]] /* g18.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6240;
}

/*
equation index: 6241
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limIntegrator.y = goverNordic_g17.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2858]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6241;
}

/*
equation index: 6242
type: SIMPLE_ASSIGN
goverNordic_g17.govInt.y = goverNordic_g17.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* goverNordic_g17.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2843]] /* goverNordic_g17.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6242;
}

/*
equation index: 6243
type: SIMPLE_ASSIGN
goverNordic_g17.govOut.y = goverNordic_g17.govOut.k1 * goverNordic_g17.govKp.y + goverNordic_g17.govOut.k2 * goverNordic_g17.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2229]] /* goverNordic_g17.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2846]] /* goverNordic_g17.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2228]] /* goverNordic_g17.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2847]] /* goverNordic_g17.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* goverNordic_g17.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6243;
}

/*
equation index: 6244
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.feedback.y = goverNordic_g17.govOut.y - goverNordic_g17.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2231]] /* goverNordic_g17.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2229]] /* goverNordic_g17.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6244;
}

/*
equation index: 6245
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.gain.y = goverNordic_g17.limRateLimFirstOrder.gain.k * goverNordic_g17.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2232]] /* goverNordic_g17.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2854]] /* goverNordic_g17.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2231]] /* goverNordic_g17.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6245;
}

/*
equation index: 6246
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g17.limRateLimFirstOrder.gain.y > goverNordic_g17.limRateLimFirstOrder.limiter.uMax then goverNordic_g17.limRateLimFirstOrder.limiter.uMax else if goverNordic_g17.limRateLimFirstOrder.gain.y < goverNordic_g17.limRateLimFirstOrder.limiter.uMin then goverNordic_g17.limRateLimFirstOrder.limiter.uMin else goverNordic_g17.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6246};
  modelica_boolean tmp1802;
  modelica_boolean tmp1803;
  modelica_boolean tmp1804;
  modelica_real tmp1805;
  tmp1802 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2232]] /* goverNordic_g17.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1804 = (modelica_boolean)tmp1802;
  if(tmp1804)
  {
    tmp1805 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1803 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2232]] /* goverNordic_g17.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2860]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1805 = (tmp1803?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2860]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2232]] /* goverNordic_g17.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */) = tmp1805;
  threadData->lastEquationSolved = 6246;
}

/*
equation index: 6247
type: SIMPLE_ASSIGN
$DER.goverNordic_g17.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g17.limRateLimFirstOrder.limIntegrator.y < goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g17.limRateLimFirstOrder.limIntegrator.k * goverNordic_g17.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g17.limRateLimFirstOrder.limIntegrator.y > goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g17.limRateLimFirstOrder.limIntegrator.k * goverNordic_g17.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g17.limRateLimFirstOrder.limIntegrator.k * goverNordic_g17.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6247};
  modelica_boolean tmp1806;
  modelica_boolean tmp1807;
  modelica_boolean tmp1808;
  modelica_boolean tmp1809;
  tmp1806 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1807 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1808 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2856]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1809 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[506]] /* der(goverNordic_g17.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1806 && tmp1807) || (tmp1808 && tmp1809))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6247;
}

/*
equation index: 6248
type: SIMPLE_ASSIGN
goverNordic_g17.waterFlow.y = goverNordic_g17.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* goverNordic_g17.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2864]] /* goverNordic_g17.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6248;
}

/*
equation index: 6249
type: SIMPLE_ASSIGN
goverNordic_g17.flowDivGateOpening.y = goverNordic_g17.waterFlow.y / goverNordic_g17.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2225]] /* goverNordic_g17.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* goverNordic_g17.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g17.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6249;
}

/*
equation index: 6250
type: SIMPLE_ASSIGN
goverNordic_g17.headWater.y = goverNordic_g17.flowDivGateOpening.y ^ goverNordic_g17.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6250};
  modelica_real tmp1810;
  modelica_real tmp1811;
  modelica_real tmp1812;
  modelica_real tmp1813;
  modelica_real tmp1814;
  modelica_real tmp1815;
  modelica_real tmp1816;
  tmp1810 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2225]] /* goverNordic_g17.flowDivGateOpening.y variable */);
  tmp1811 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2848]] /* goverNordic_g17.headWater.N PARAM */);
  if(tmp1810 < 0.0 && tmp1811 != 0.0)
  {
    tmp1813 = modf(tmp1811, &tmp1814);
    
    if(tmp1813 > 0.5)
    {
      tmp1813 -= 1.0;
      tmp1814 += 1.0;
    }
    else if(tmp1813 < -0.5)
    {
      tmp1813 += 1.0;
      tmp1814 -= 1.0;
    }
    
    if(fabs(tmp1813) < 1e-10)
      tmp1812 = pow(tmp1810, tmp1814);
    else
    {
      tmp1816 = modf(1.0/tmp1811, &tmp1815);
      if(tmp1816 > 0.5)
      {
        tmp1816 -= 1.0;
        tmp1815 += 1.0;
      }
      else if(tmp1816 < -0.5)
      {
        tmp1816 += 1.0;
        tmp1815 -= 1.0;
      }
      if(fabs(tmp1816) < 1e-10 && ((unsigned long)tmp1815 & 1))
      {
        tmp1812 = -pow(-tmp1810, tmp1813)*pow(tmp1810, tmp1814);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1810, tmp1811);
      }
    }
  }
  else
  {
    tmp1812 = pow(tmp1810, tmp1811);
  }
  if(isnan(tmp1812) || isinf(tmp1812))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1810, tmp1811);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2230]] /* goverNordic_g17.headWater.y variable */) = tmp1812;
  threadData->lastEquationSolved = 6250;
}

/*
equation index: 6251
type: SIMPLE_ASSIGN
g17.PmPu = goverNordic_g17.waterFlow.y * goverNordic_g17.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1755]] /* g17.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* goverNordic_g17.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2230]] /* goverNordic_g17.headWater.y variable */));
  threadData->lastEquationSolved = 6251;
}

/*
equation index: 6252
type: SIMPLE_ASSIGN
g17.cmPu = if g17.running.value then g17.PmPu / g17.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1762]] /* g17.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1755]] /* g17.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */),"g17.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6252;
}

/*
equation index: 6253
type: SIMPLE_ASSIGN
$DER.g17.omegaPu = if g17.running.value then 0.5 * (g17.cmPu * g17.PNomTurb / g17.SNom - g17.DPu * (g17.omegaPu - omegaCOI) - g17.cePu) / g17.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* der(g17.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1762]] /* g17.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1886]] /* g17.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */),"g17.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* g17.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* g17.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* g17.H PARAM */),"g17.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6253;
}

/*
equation index: 6254
type: SIMPLE_ASSIGN
goverNordic_g17.dH.y = goverNordic_g17.const2.k - goverNordic_g17.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2221]] /* goverNordic_g17.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* goverNordic_g17.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2230]] /* goverNordic_g17.headWater.y variable */);
  threadData->lastEquationSolved = 6254;
}

/*
equation index: 6255
type: SIMPLE_ASSIGN
$DER.goverNordic_g17.waterFlow.y = goverNordic_g17.waterFlow.k * goverNordic_g17.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[507]] /* der(goverNordic_g17.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2863]] /* goverNordic_g17.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2221]] /* goverNordic_g17.dH.y variable */));
  threadData->lastEquationSolved = 6255;
}

/*
equation index: 6256
type: SIMPLE_ASSIGN
vrNordic_g17.timer.y = vrNordic_g17.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5462]] /* vrNordic_g17.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6256;
}

/*
equation index: 6257
type: SIMPLE_ASSIGN
$DER.vrNordic_g17.timer.y = if vrNordic_g17.timer.y < vrNordic_g17.timer.outMin and vrNordic_g17.timer.k * vrNordic_g17.overExcitationLimitation.y < 0.0 or vrNordic_g17.timer.y > vrNordic_g17.timer.outMax and vrNordic_g17.timer.k * vrNordic_g17.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g17.timer.k * vrNordic_g17.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6257};
  modelica_boolean tmp1817;
  modelica_boolean tmp1818;
  modelica_boolean tmp1819;
  modelica_boolean tmp1820;
  tmp1817 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5461]] /* vrNordic_g17.timer.outMin PARAM */));
  tmp1818 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)),0.0);
  tmp1819 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5460]] /* vrNordic_g17.timer.outMax PARAM */));
  tmp1820 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* der(vrNordic_g17.timer.y) STATE_DER */) = (((tmp1817 && tmp1818) || (tmp1819 && tmp1820))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6257;
}

/*
equation index: 6258
type: SIMPLE_ASSIGN
vrNordic_g17.greaterEqualThreshold.y = vrNordic_g17.timer.y >= vrNordic_g17.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6258};
  modelica_boolean tmp1821;
  tmp1821 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5404]] /* vrNordic_g17.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1063]] /* vrNordic_g17.greaterEqualThreshold.y DISCRETE */) = tmp1821;
  threadData->lastEquationSolved = 6258;
}

/*
equation index: 6259
type: SIMPLE_ASSIGN
vrNordic_g17.switch.y = if vrNordic_g17.greaterEqualThreshold.y then vrNordic_g17.gain1.y else vrNordic_g17.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* vrNordic_g17.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1063]] /* vrNordic_g17.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3839]] /* vrNordic_g17.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */));
  threadData->lastEquationSolved = 6259;
}

/*
equation index: 6260
type: SIMPLE_ASSIGN
vrNordic_g17.min1.y = if vrNordic_g17.switch.y < vrNordic_g17.add.y then vrNordic_g17.switch.y else vrNordic_g17.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6260};
  modelica_boolean tmp1822;
  tmp1822 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* vrNordic_g17.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3850]] /* vrNordic_g17.min1.y variable */) = (tmp1822?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* vrNordic_g17.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */));
  threadData->lastEquationSolved = 6260;
}

/*
equation index: 6261
type: SIMPLE_ASSIGN
vrNordic_g17.kMulDU.y = vrNordic_g17.kMulDU.k * vrNordic_g17.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3840]] /* vrNordic_g17.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5405]] /* vrNordic_g17.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3850]] /* vrNordic_g17.min1.y variable */));
  threadData->lastEquationSolved = 6261;
}

/*
equation index: 6262
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.y = (vrNordic_g17.leadLag.bb[2] - vrNordic_g17.leadLag.d * vrNordic_g17.leadLag.a[2]) * vrNordic_g17.leadLag.x[1] + vrNordic_g17.leadLag.d * vrNordic_g17.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3842]] /* vrNordic_g17.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5414]] /* vrNordic_g17.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5415]] /* vrNordic_g17.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5409]] /* vrNordic_g17.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3841]] /* vrNordic_g17.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5415]] /* vrNordic_g17.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3840]] /* vrNordic_g17.kMulDU.y variable */));
  threadData->lastEquationSolved = 6262;
}

/*
equation index: 6263
type: SIMPLE_ASSIGN
$DER.vrNordic_g17.leadLag.x_scaled[1] = (vrNordic_g17.leadLag.a_end * vrNordic_g17.kMulDU.y - vrNordic_g17.leadLag.a[2] * vrNordic_g17.leadLag.x_scaled[1]) / vrNordic_g17.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* der(vrNordic_g17.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5410]] /* vrNordic_g17.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3840]] /* vrNordic_g17.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5409]] /* vrNordic_g17.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* vrNordic_g17.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5408]] /* vrNordic_g17.leadLag.a[1] PARAM */),"vrNordic_g17.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6263;
}

/*
equation index: 6264
type: SIMPLE_ASSIGN
vrNordic_g17.limIntegrator.y = vrNordic_g17.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5448]] /* vrNordic_g17.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6264;
}

/*
equation index: 6265
type: SIMPLE_ASSIGN
vrNordic_g17.feedback1.y = vrNordic_g17.leadLag.y - vrNordic_g17.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3837]] /* vrNordic_g17.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3842]] /* vrNordic_g17.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6265;
}

/*
equation index: 6266
type: SIMPLE_ASSIGN
vrNordic_g17.gain.y = vrNordic_g17.gain.k * vrNordic_g17.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5402]] /* vrNordic_g17.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3837]] /* vrNordic_g17.feedback1.y variable */));
  threadData->lastEquationSolved = 6266;
}

/*
equation index: 6267
type: SIMPLE_ASSIGN
$DER.vrNordic_g17.limIntegrator.y = if vrNordic_g17.limIntegrator.y < vrNordic_g17.limIntegrator.outMin and vrNordic_g17.limIntegrator.k * vrNordic_g17.gain.y < 0.0 or vrNordic_g17.limIntegrator.y > vrNordic_g17.limIntegrator.outMax and vrNordic_g17.limIntegrator.k * vrNordic_g17.gain.y > 0.0 then 0.0 else vrNordic_g17.limIntegrator.k * vrNordic_g17.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6267};
  modelica_boolean tmp1823;
  modelica_boolean tmp1824;
  modelica_boolean tmp1825;
  modelica_boolean tmp1826;
  tmp1823 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5447]] /* vrNordic_g17.limIntegrator.outMin PARAM */));
  tmp1824 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)),0.0);
  tmp1825 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5446]] /* vrNordic_g17.limIntegrator.outMax PARAM */));
  tmp1826 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* der(vrNordic_g17.limIntegrator.y) STATE_DER */) = (((tmp1823 && tmp1824) || (tmp1825 && tmp1826))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)));
  threadData->lastEquationSolved = 6267;
}

/*
equation index: 6268
type: SIMPLE_ASSIGN
g17.ufPu = if g17.running.value then vrNordic_g17.limIntegrator.y * g17.Kuf * g17.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* g17.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1856]] /* g17.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6268;
}

/*
equation index: 6269
type: SIMPLE_ASSIGN
$DER.g17.lambdafPu = if g17.running.value then (g17.RfPPu * g17.ifPu - g17.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* der(g17.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1899]] /* g17.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* g17.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6269;
}

/*
equation index: 6270
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limIntegrator.y = goverNordic_g16.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2822]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6270;
}

/*
equation index: 6271
type: SIMPLE_ASSIGN
goverNordic_g16.govInt.y = goverNordic_g16.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* goverNordic_g16.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* goverNordic_g16.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6271;
}

/*
equation index: 6272
type: SIMPLE_ASSIGN
goverNordic_g16.govOut.y = goverNordic_g16.govOut.k1 * goverNordic_g16.govKp.y + goverNordic_g16.govOut.k2 * goverNordic_g16.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2211]] /* goverNordic_g16.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* goverNordic_g16.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2210]] /* goverNordic_g16.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* goverNordic_g16.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* goverNordic_g16.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6272;
}

/*
equation index: 6273
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.feedback.y = goverNordic_g16.govOut.y - goverNordic_g16.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2213]] /* goverNordic_g16.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2211]] /* goverNordic_g16.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6273;
}

/*
equation index: 6274
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.gain.y = goverNordic_g16.limRateLimFirstOrder.gain.k * goverNordic_g16.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2214]] /* goverNordic_g16.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2818]] /* goverNordic_g16.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2213]] /* goverNordic_g16.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6274;
}

/*
equation index: 6275
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g16.limRateLimFirstOrder.gain.y > goverNordic_g16.limRateLimFirstOrder.limiter.uMax then goverNordic_g16.limRateLimFirstOrder.limiter.uMax else if goverNordic_g16.limRateLimFirstOrder.gain.y < goverNordic_g16.limRateLimFirstOrder.limiter.uMin then goverNordic_g16.limRateLimFirstOrder.limiter.uMin else goverNordic_g16.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6275};
  modelica_boolean tmp1827;
  modelica_boolean tmp1828;
  modelica_boolean tmp1829;
  modelica_real tmp1830;
  tmp1827 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2214]] /* goverNordic_g16.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1829 = (modelica_boolean)tmp1827;
  if(tmp1829)
  {
    tmp1830 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1828 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2214]] /* goverNordic_g16.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1830 = (tmp1828?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2214]] /* goverNordic_g16.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */) = tmp1830;
  threadData->lastEquationSolved = 6275;
}

/*
equation index: 6276
type: SIMPLE_ASSIGN
$DER.goverNordic_g16.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g16.limRateLimFirstOrder.limIntegrator.y < goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g16.limRateLimFirstOrder.limIntegrator.k * goverNordic_g16.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g16.limRateLimFirstOrder.limIntegrator.y > goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g16.limRateLimFirstOrder.limIntegrator.k * goverNordic_g16.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g16.limRateLimFirstOrder.limIntegrator.k * goverNordic_g16.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6276};
  modelica_boolean tmp1831;
  modelica_boolean tmp1832;
  modelica_boolean tmp1833;
  modelica_boolean tmp1834;
  tmp1831 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1832 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1833 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1834 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[502]] /* der(goverNordic_g16.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1831 && tmp1832) || (tmp1833 && tmp1834))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6276;
}

/*
equation index: 6277
type: SIMPLE_ASSIGN
goverNordic_g16.waterFlow.y = goverNordic_g16.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* goverNordic_g16.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2828]] /* goverNordic_g16.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6277;
}

/*
equation index: 6278
type: SIMPLE_ASSIGN
goverNordic_g16.flowDivGateOpening.y = goverNordic_g16.waterFlow.y / goverNordic_g16.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2207]] /* goverNordic_g16.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* goverNordic_g16.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g16.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6278;
}

/*
equation index: 6279
type: SIMPLE_ASSIGN
goverNordic_g16.headWater.y = goverNordic_g16.flowDivGateOpening.y ^ goverNordic_g16.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6279};
  modelica_real tmp1835;
  modelica_real tmp1836;
  modelica_real tmp1837;
  modelica_real tmp1838;
  modelica_real tmp1839;
  modelica_real tmp1840;
  modelica_real tmp1841;
  tmp1835 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2207]] /* goverNordic_g16.flowDivGateOpening.y variable */);
  tmp1836 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2812]] /* goverNordic_g16.headWater.N PARAM */);
  if(tmp1835 < 0.0 && tmp1836 != 0.0)
  {
    tmp1838 = modf(tmp1836, &tmp1839);
    
    if(tmp1838 > 0.5)
    {
      tmp1838 -= 1.0;
      tmp1839 += 1.0;
    }
    else if(tmp1838 < -0.5)
    {
      tmp1838 += 1.0;
      tmp1839 -= 1.0;
    }
    
    if(fabs(tmp1838) < 1e-10)
      tmp1837 = pow(tmp1835, tmp1839);
    else
    {
      tmp1841 = modf(1.0/tmp1836, &tmp1840);
      if(tmp1841 > 0.5)
      {
        tmp1841 -= 1.0;
        tmp1840 += 1.0;
      }
      else if(tmp1841 < -0.5)
      {
        tmp1841 += 1.0;
        tmp1840 -= 1.0;
      }
      if(fabs(tmp1841) < 1e-10 && ((unsigned long)tmp1840 & 1))
      {
        tmp1837 = -pow(-tmp1835, tmp1838)*pow(tmp1835, tmp1839);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1835, tmp1836);
      }
    }
  }
  else
  {
    tmp1837 = pow(tmp1835, tmp1836);
  }
  if(isnan(tmp1837) || isinf(tmp1837))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1835, tmp1836);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* goverNordic_g16.headWater.y variable */) = tmp1837;
  threadData->lastEquationSolved = 6279;
}

/*
equation index: 6280
type: SIMPLE_ASSIGN
g16.PmPu = goverNordic_g16.waterFlow.y * goverNordic_g16.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* g16.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* goverNordic_g16.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* goverNordic_g16.headWater.y variable */));
  threadData->lastEquationSolved = 6280;
}

/*
equation index: 6281
type: SIMPLE_ASSIGN
g16.cmPu = if g16.running.value then g16.PmPu / g16.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1716]] /* g16.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* g16.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */),"g16.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6281;
}

/*
equation index: 6282
type: SIMPLE_ASSIGN
$DER.g16.omegaPu = if g16.running.value then 0.5 * (g16.cmPu * g16.PNomTurb / g16.SNom - g16.DPu * (g16.omegaPu - omegaCOI) - g16.cePu) / g16.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* der(g16.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1716]] /* g16.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* g16.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */),"g16.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1745]] /* g16.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1715]] /* g16.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* g16.H PARAM */),"g16.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6282;
}

/*
equation index: 6283
type: SIMPLE_ASSIGN
goverNordic_g16.dH.y = goverNordic_g16.const2.k - goverNordic_g16.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2203]] /* goverNordic_g16.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2800]] /* goverNordic_g16.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2212]] /* goverNordic_g16.headWater.y variable */);
  threadData->lastEquationSolved = 6283;
}

/*
equation index: 6284
type: SIMPLE_ASSIGN
$DER.goverNordic_g16.waterFlow.y = goverNordic_g16.waterFlow.k * goverNordic_g16.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* der(goverNordic_g16.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2827]] /* goverNordic_g16.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2203]] /* goverNordic_g16.dH.y variable */));
  threadData->lastEquationSolved = 6284;
}

/*
equation index: 6285
type: SIMPLE_ASSIGN
vrNordic_g16.timer.y = vrNordic_g16.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5383]] /* vrNordic_g16.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6285;
}

/*
equation index: 6286
type: SIMPLE_ASSIGN
$DER.vrNordic_g16.timer.y = if vrNordic_g16.timer.y < vrNordic_g16.timer.outMin and vrNordic_g16.timer.k * vrNordic_g16.overExcitationLimitation.y < 0.0 or vrNordic_g16.timer.y > vrNordic_g16.timer.outMax and vrNordic_g16.timer.k * vrNordic_g16.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g16.timer.k * vrNordic_g16.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6286};
  modelica_boolean tmp1842;
  modelica_boolean tmp1843;
  modelica_boolean tmp1844;
  modelica_boolean tmp1845;
  tmp1842 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5382]] /* vrNordic_g16.timer.outMin PARAM */));
  tmp1843 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)),0.0);
  tmp1844 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5381]] /* vrNordic_g16.timer.outMax PARAM */));
  tmp1845 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* der(vrNordic_g16.timer.y) STATE_DER */) = (((tmp1842 && tmp1843) || (tmp1844 && tmp1845))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6286;
}

/*
equation index: 6287
type: SIMPLE_ASSIGN
vrNordic_g16.greaterEqualThreshold.y = vrNordic_g16.timer.y >= vrNordic_g16.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6287};
  modelica_boolean tmp1846;
  tmp1846 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5325]] /* vrNordic_g16.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1060]] /* vrNordic_g16.greaterEqualThreshold.y DISCRETE */) = tmp1846;
  threadData->lastEquationSolved = 6287;
}

/*
equation index: 6288
type: SIMPLE_ASSIGN
vrNordic_g16.switch.y = if vrNordic_g16.greaterEqualThreshold.y then vrNordic_g16.gain1.y else vrNordic_g16.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3828]] /* vrNordic_g16.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1060]] /* vrNordic_g16.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3815]] /* vrNordic_g16.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */));
  threadData->lastEquationSolved = 6288;
}

/*
equation index: 6289
type: SIMPLE_ASSIGN
vrNordic_g16.min1.y = if vrNordic_g16.switch.y < vrNordic_g16.add.y then vrNordic_g16.switch.y else vrNordic_g16.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6289};
  modelica_boolean tmp1847;
  tmp1847 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3828]] /* vrNordic_g16.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3826]] /* vrNordic_g16.min1.y variable */) = (tmp1847?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3828]] /* vrNordic_g16.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */));
  threadData->lastEquationSolved = 6289;
}

/*
equation index: 6290
type: SIMPLE_ASSIGN
vrNordic_g16.kMulDU.y = vrNordic_g16.kMulDU.k * vrNordic_g16.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3816]] /* vrNordic_g16.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5326]] /* vrNordic_g16.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3826]] /* vrNordic_g16.min1.y variable */));
  threadData->lastEquationSolved = 6290;
}

/*
equation index: 6291
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.y = (vrNordic_g16.leadLag.bb[2] - vrNordic_g16.leadLag.d * vrNordic_g16.leadLag.a[2]) * vrNordic_g16.leadLag.x[1] + vrNordic_g16.leadLag.d * vrNordic_g16.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3818]] /* vrNordic_g16.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5335]] /* vrNordic_g16.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5336]] /* vrNordic_g16.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5330]] /* vrNordic_g16.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3817]] /* vrNordic_g16.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5336]] /* vrNordic_g16.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3816]] /* vrNordic_g16.kMulDU.y variable */));
  threadData->lastEquationSolved = 6291;
}

/*
equation index: 6292
type: SIMPLE_ASSIGN
$DER.vrNordic_g16.leadLag.x_scaled[1] = (vrNordic_g16.leadLag.a_end * vrNordic_g16.kMulDU.y - vrNordic_g16.leadLag.a[2] * vrNordic_g16.leadLag.x_scaled[1]) / vrNordic_g16.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* der(vrNordic_g16.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5331]] /* vrNordic_g16.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3816]] /* vrNordic_g16.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5330]] /* vrNordic_g16.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* vrNordic_g16.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5329]] /* vrNordic_g16.leadLag.a[1] PARAM */),"vrNordic_g16.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6292;
}

/*
equation index: 6293
type: SIMPLE_ASSIGN
vrNordic_g16.limIntegrator.y = vrNordic_g16.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5369]] /* vrNordic_g16.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6293;
}

/*
equation index: 6294
type: SIMPLE_ASSIGN
vrNordic_g16.feedback1.y = vrNordic_g16.leadLag.y - vrNordic_g16.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3813]] /* vrNordic_g16.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3818]] /* vrNordic_g16.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6294;
}

/*
equation index: 6295
type: SIMPLE_ASSIGN
vrNordic_g16.gain.y = vrNordic_g16.gain.k * vrNordic_g16.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5323]] /* vrNordic_g16.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3813]] /* vrNordic_g16.feedback1.y variable */));
  threadData->lastEquationSolved = 6295;
}

/*
equation index: 6296
type: SIMPLE_ASSIGN
$DER.vrNordic_g16.limIntegrator.y = if vrNordic_g16.limIntegrator.y < vrNordic_g16.limIntegrator.outMin and vrNordic_g16.limIntegrator.k * vrNordic_g16.gain.y < 0.0 or vrNordic_g16.limIntegrator.y > vrNordic_g16.limIntegrator.outMax and vrNordic_g16.limIntegrator.k * vrNordic_g16.gain.y > 0.0 then 0.0 else vrNordic_g16.limIntegrator.k * vrNordic_g16.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6296};
  modelica_boolean tmp1848;
  modelica_boolean tmp1849;
  modelica_boolean tmp1850;
  modelica_boolean tmp1851;
  tmp1848 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5368]] /* vrNordic_g16.limIntegrator.outMin PARAM */));
  tmp1849 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)),0.0);
  tmp1850 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5367]] /* vrNordic_g16.limIntegrator.outMax PARAM */));
  tmp1851 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* der(vrNordic_g16.limIntegrator.y) STATE_DER */) = (((tmp1848 && tmp1849) || (tmp1850 && tmp1851))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)));
  threadData->lastEquationSolved = 6296;
}

/*
equation index: 6297
type: SIMPLE_ASSIGN
g16.ufPu = if g16.running.value then vrNordic_g16.limIntegrator.y * g16.Kuf * g16.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* g16.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1753]] /* g16.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6297;
}

/*
equation index: 6298
type: SIMPLE_ASSIGN
$DER.g16.lambdafPu = if g16.running.value then (g16.RfPPu * g16.ifPu - g16.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* der(g16.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* g16.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* g16.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6298;
}

/*
equation index: 6299
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limIntegrator.y = goverNordic_g15.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6299;
}

/*
equation index: 6300
type: SIMPLE_ASSIGN
goverNordic_g15.govInt.y = goverNordic_g15.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* goverNordic_g15.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2771]] /* goverNordic_g15.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6300;
}

/*
equation index: 6301
type: SIMPLE_ASSIGN
goverNordic_g15.govOut.y = goverNordic_g15.govOut.k1 * goverNordic_g15.govKp.y + goverNordic_g15.govOut.k2 * goverNordic_g15.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2193]] /* goverNordic_g15.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* goverNordic_g15.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2192]] /* goverNordic_g15.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2775]] /* goverNordic_g15.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* goverNordic_g15.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6301;
}

/*
equation index: 6302
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.feedback.y = goverNordic_g15.govOut.y - goverNordic_g15.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2195]] /* goverNordic_g15.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2193]] /* goverNordic_g15.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6302;
}

/*
equation index: 6303
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.gain.y = goverNordic_g15.limRateLimFirstOrder.gain.k * goverNordic_g15.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2196]] /* goverNordic_g15.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2782]] /* goverNordic_g15.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2195]] /* goverNordic_g15.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6303;
}

/*
equation index: 6304
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g15.limRateLimFirstOrder.gain.y > goverNordic_g15.limRateLimFirstOrder.limiter.uMax then goverNordic_g15.limRateLimFirstOrder.limiter.uMax else if goverNordic_g15.limRateLimFirstOrder.gain.y < goverNordic_g15.limRateLimFirstOrder.limiter.uMin then goverNordic_g15.limRateLimFirstOrder.limiter.uMin else goverNordic_g15.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6304};
  modelica_boolean tmp1852;
  modelica_boolean tmp1853;
  modelica_boolean tmp1854;
  modelica_real tmp1855;
  tmp1852 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2196]] /* goverNordic_g15.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1854 = (modelica_boolean)tmp1852;
  if(tmp1854)
  {
    tmp1855 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1853 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2196]] /* goverNordic_g15.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1855 = (tmp1853?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2196]] /* goverNordic_g15.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */) = tmp1855;
  threadData->lastEquationSolved = 6304;
}

/*
equation index: 6305
type: SIMPLE_ASSIGN
$DER.goverNordic_g15.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g15.limRateLimFirstOrder.limIntegrator.y < goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g15.limRateLimFirstOrder.limIntegrator.k * goverNordic_g15.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g15.limRateLimFirstOrder.limIntegrator.y > goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g15.limRateLimFirstOrder.limIntegrator.k * goverNordic_g15.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g15.limRateLimFirstOrder.limIntegrator.k * goverNordic_g15.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6305};
  modelica_boolean tmp1856;
  modelica_boolean tmp1857;
  modelica_boolean tmp1858;
  modelica_boolean tmp1859;
  tmp1856 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1857 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1858 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1859 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* der(goverNordic_g15.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1856 && tmp1857) || (tmp1858 && tmp1859))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6305;
}

/*
equation index: 6306
type: SIMPLE_ASSIGN
goverNordic_g15.waterFlow.y = goverNordic_g15.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* goverNordic_g15.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* goverNordic_g15.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6306;
}

/*
equation index: 6307
type: SIMPLE_ASSIGN
goverNordic_g15.flowDivGateOpening.y = goverNordic_g15.waterFlow.y / goverNordic_g15.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2189]] /* goverNordic_g15.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* goverNordic_g15.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g15.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6307;
}

/*
equation index: 6308
type: SIMPLE_ASSIGN
goverNordic_g15.headWater.y = goverNordic_g15.flowDivGateOpening.y ^ goverNordic_g15.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6308};
  modelica_real tmp1860;
  modelica_real tmp1861;
  modelica_real tmp1862;
  modelica_real tmp1863;
  modelica_real tmp1864;
  modelica_real tmp1865;
  modelica_real tmp1866;
  tmp1860 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2189]] /* goverNordic_g15.flowDivGateOpening.y variable */);
  tmp1861 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2776]] /* goverNordic_g15.headWater.N PARAM */);
  if(tmp1860 < 0.0 && tmp1861 != 0.0)
  {
    tmp1863 = modf(tmp1861, &tmp1864);
    
    if(tmp1863 > 0.5)
    {
      tmp1863 -= 1.0;
      tmp1864 += 1.0;
    }
    else if(tmp1863 < -0.5)
    {
      tmp1863 += 1.0;
      tmp1864 -= 1.0;
    }
    
    if(fabs(tmp1863) < 1e-10)
      tmp1862 = pow(tmp1860, tmp1864);
    else
    {
      tmp1866 = modf(1.0/tmp1861, &tmp1865);
      if(tmp1866 > 0.5)
      {
        tmp1866 -= 1.0;
        tmp1865 += 1.0;
      }
      else if(tmp1866 < -0.5)
      {
        tmp1866 += 1.0;
        tmp1865 -= 1.0;
      }
      if(fabs(tmp1866) < 1e-10 && ((unsigned long)tmp1865 & 1))
      {
        tmp1862 = -pow(-tmp1860, tmp1863)*pow(tmp1860, tmp1864);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1860, tmp1861);
      }
    }
  }
  else
  {
    tmp1862 = pow(tmp1860, tmp1861);
  }
  if(isnan(tmp1862) || isinf(tmp1862))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1860, tmp1861);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2194]] /* goverNordic_g15.headWater.y variable */) = tmp1862;
  threadData->lastEquationSolved = 6308;
}

/*
equation index: 6309
type: SIMPLE_ASSIGN
g15.PmPu = goverNordic_g15.waterFlow.y * goverNordic_g15.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1663]] /* g15.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* goverNordic_g15.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2194]] /* goverNordic_g15.headWater.y variable */));
  threadData->lastEquationSolved = 6309;
}

/*
equation index: 6310
type: SIMPLE_ASSIGN
g15.cmPu = if g15.running.value then g15.PmPu / g15.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1670]] /* g15.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1663]] /* g15.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */),"g15.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6310;
}

/*
equation index: 6311
type: SIMPLE_ASSIGN
$DER.g15.omegaPu = if g15.running.value then 0.5 * (g15.cmPu * g15.PNomTurb / g15.SNom - g15.DPu * (g15.omegaPu - omegaCOI) - g15.cePu) / g15.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* der(g15.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1670]] /* g15.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* g15.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */),"g15.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* g15.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* g15.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* g15.H PARAM */),"g15.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6311;
}

/*
equation index: 6312
type: SIMPLE_ASSIGN
goverNordic_g15.dH.y = goverNordic_g15.const2.k - goverNordic_g15.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2185]] /* goverNordic_g15.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* goverNordic_g15.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2194]] /* goverNordic_g15.headWater.y variable */);
  threadData->lastEquationSolved = 6312;
}

/*
equation index: 6313
type: SIMPLE_ASSIGN
$DER.goverNordic_g15.waterFlow.y = goverNordic_g15.waterFlow.k * goverNordic_g15.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* der(goverNordic_g15.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2791]] /* goverNordic_g15.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2185]] /* goverNordic_g15.dH.y variable */));
  threadData->lastEquationSolved = 6313;
}

/*
equation index: 6314
type: SIMPLE_ASSIGN
vrNordic_g15.timer.y = vrNordic_g15.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5304]] /* vrNordic_g15.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6314;
}

/*
equation index: 6315
type: SIMPLE_ASSIGN
$DER.vrNordic_g15.timer.y = if vrNordic_g15.timer.y < vrNordic_g15.timer.outMin and vrNordic_g15.timer.k * vrNordic_g15.overExcitationLimitation.y < 0.0 or vrNordic_g15.timer.y > vrNordic_g15.timer.outMax and vrNordic_g15.timer.k * vrNordic_g15.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g15.timer.k * vrNordic_g15.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6315};
  modelica_boolean tmp1867;
  modelica_boolean tmp1868;
  modelica_boolean tmp1869;
  modelica_boolean tmp1870;
  tmp1867 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5303]] /* vrNordic_g15.timer.outMin PARAM */));
  tmp1868 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)),0.0);
  tmp1869 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5302]] /* vrNordic_g15.timer.outMax PARAM */));
  tmp1870 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* der(vrNordic_g15.timer.y) STATE_DER */) = (((tmp1867 && tmp1868) || (tmp1869 && tmp1870))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6315;
}

/*
equation index: 6316
type: SIMPLE_ASSIGN
vrNordic_g15.greaterEqualThreshold.y = vrNordic_g15.timer.y >= vrNordic_g15.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6316};
  modelica_boolean tmp1871;
  tmp1871 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5246]] /* vrNordic_g15.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1057]] /* vrNordic_g15.greaterEqualThreshold.y DISCRETE */) = tmp1871;
  threadData->lastEquationSolved = 6316;
}

/*
equation index: 6317
type: SIMPLE_ASSIGN
vrNordic_g15.switch.y = if vrNordic_g15.greaterEqualThreshold.y then vrNordic_g15.gain1.y else vrNordic_g15.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3804]] /* vrNordic_g15.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1057]] /* vrNordic_g15.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3791]] /* vrNordic_g15.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */));
  threadData->lastEquationSolved = 6317;
}

/*
equation index: 6318
type: SIMPLE_ASSIGN
vrNordic_g15.min1.y = if vrNordic_g15.switch.y < vrNordic_g15.add.y then vrNordic_g15.switch.y else vrNordic_g15.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6318};
  modelica_boolean tmp1872;
  tmp1872 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3804]] /* vrNordic_g15.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3802]] /* vrNordic_g15.min1.y variable */) = (tmp1872?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3804]] /* vrNordic_g15.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */));
  threadData->lastEquationSolved = 6318;
}

/*
equation index: 6319
type: SIMPLE_ASSIGN
vrNordic_g15.kMulDU.y = vrNordic_g15.kMulDU.k * vrNordic_g15.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3792]] /* vrNordic_g15.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5247]] /* vrNordic_g15.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3802]] /* vrNordic_g15.min1.y variable */));
  threadData->lastEquationSolved = 6319;
}

/*
equation index: 6320
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.y = (vrNordic_g15.leadLag.bb[2] - vrNordic_g15.leadLag.d * vrNordic_g15.leadLag.a[2]) * vrNordic_g15.leadLag.x[1] + vrNordic_g15.leadLag.d * vrNordic_g15.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3794]] /* vrNordic_g15.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5256]] /* vrNordic_g15.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5257]] /* vrNordic_g15.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5251]] /* vrNordic_g15.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3793]] /* vrNordic_g15.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5257]] /* vrNordic_g15.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3792]] /* vrNordic_g15.kMulDU.y variable */));
  threadData->lastEquationSolved = 6320;
}

/*
equation index: 6321
type: SIMPLE_ASSIGN
$DER.vrNordic_g15.leadLag.x_scaled[1] = (vrNordic_g15.leadLag.a_end * vrNordic_g15.kMulDU.y - vrNordic_g15.leadLag.a[2] * vrNordic_g15.leadLag.x_scaled[1]) / vrNordic_g15.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* der(vrNordic_g15.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5252]] /* vrNordic_g15.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3792]] /* vrNordic_g15.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5251]] /* vrNordic_g15.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* vrNordic_g15.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5250]] /* vrNordic_g15.leadLag.a[1] PARAM */),"vrNordic_g15.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6321;
}

/*
equation index: 6322
type: SIMPLE_ASSIGN
vrNordic_g15.limIntegrator.y = vrNordic_g15.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5290]] /* vrNordic_g15.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6322;
}

/*
equation index: 6323
type: SIMPLE_ASSIGN
vrNordic_g15.feedback1.y = vrNordic_g15.leadLag.y - vrNordic_g15.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3789]] /* vrNordic_g15.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3794]] /* vrNordic_g15.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6323;
}

/*
equation index: 6324
type: SIMPLE_ASSIGN
vrNordic_g15.gain.y = vrNordic_g15.gain.k * vrNordic_g15.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5244]] /* vrNordic_g15.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3789]] /* vrNordic_g15.feedback1.y variable */));
  threadData->lastEquationSolved = 6324;
}

/*
equation index: 6325
type: SIMPLE_ASSIGN
$DER.vrNordic_g15.limIntegrator.y = if vrNordic_g15.limIntegrator.y < vrNordic_g15.limIntegrator.outMin and vrNordic_g15.limIntegrator.k * vrNordic_g15.gain.y < 0.0 or vrNordic_g15.limIntegrator.y > vrNordic_g15.limIntegrator.outMax and vrNordic_g15.limIntegrator.k * vrNordic_g15.gain.y > 0.0 then 0.0 else vrNordic_g15.limIntegrator.k * vrNordic_g15.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6325};
  modelica_boolean tmp1873;
  modelica_boolean tmp1874;
  modelica_boolean tmp1875;
  modelica_boolean tmp1876;
  tmp1873 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5289]] /* vrNordic_g15.limIntegrator.outMin PARAM */));
  tmp1874 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)),0.0);
  tmp1875 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5288]] /* vrNordic_g15.limIntegrator.outMax PARAM */));
  tmp1876 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* der(vrNordic_g15.limIntegrator.y) STATE_DER */) = (((tmp1873 && tmp1874) || (tmp1875 && tmp1876))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)));
  threadData->lastEquationSolved = 6325;
}

/*
equation index: 6326
type: SIMPLE_ASSIGN
g15.ufPu = if g15.running.value then vrNordic_g15.limIntegrator.y * g15.Kuf * g15.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1702]] /* g15.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1650]] /* g15.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6326;
}

/*
equation index: 6327
type: SIMPLE_ASSIGN
$DER.g15.lambdafPu = if g15.running.value then (g15.RfPPu * g15.ifPu - g15.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* der(g15.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* g15.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1702]] /* g15.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6327;
}

/*
equation index: 6328
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limIntegrator.y = goverNordic_g14.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6328;
}

/*
equation index: 6329
type: SIMPLE_ASSIGN
goverNordic_g14.govInt.y = goverNordic_g14.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* goverNordic_g14.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2735]] /* goverNordic_g14.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6329;
}

/*
equation index: 6330
type: SIMPLE_ASSIGN
goverNordic_g14.govOut.y = goverNordic_g14.govOut.k1 * goverNordic_g14.govKp.y + goverNordic_g14.govOut.k2 * goverNordic_g14.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2175]] /* goverNordic_g14.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2738]] /* goverNordic_g14.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2174]] /* goverNordic_g14.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2739]] /* goverNordic_g14.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* goverNordic_g14.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6330;
}

/*
equation index: 6331
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.feedback.y = goverNordic_g14.govOut.y - goverNordic_g14.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2177]] /* goverNordic_g14.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2175]] /* goverNordic_g14.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6331;
}

/*
equation index: 6332
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.gain.y = goverNordic_g14.limRateLimFirstOrder.gain.k * goverNordic_g14.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2178]] /* goverNordic_g14.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* goverNordic_g14.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2177]] /* goverNordic_g14.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6332;
}

/*
equation index: 6333
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g14.limRateLimFirstOrder.gain.y > goverNordic_g14.limRateLimFirstOrder.limiter.uMax then goverNordic_g14.limRateLimFirstOrder.limiter.uMax else if goverNordic_g14.limRateLimFirstOrder.gain.y < goverNordic_g14.limRateLimFirstOrder.limiter.uMin then goverNordic_g14.limRateLimFirstOrder.limiter.uMin else goverNordic_g14.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6333};
  modelica_boolean tmp1877;
  modelica_boolean tmp1878;
  modelica_boolean tmp1879;
  modelica_real tmp1880;
  tmp1877 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2178]] /* goverNordic_g14.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1879 = (modelica_boolean)tmp1877;
  if(tmp1879)
  {
    tmp1880 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1878 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2178]] /* goverNordic_g14.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1880 = (tmp1878?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2178]] /* goverNordic_g14.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */) = tmp1880;
  threadData->lastEquationSolved = 6333;
}

/*
equation index: 6334
type: SIMPLE_ASSIGN
$DER.goverNordic_g14.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g14.limRateLimFirstOrder.limIntegrator.y < goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g14.limRateLimFirstOrder.limIntegrator.k * goverNordic_g14.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g14.limRateLimFirstOrder.limIntegrator.y > goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g14.limRateLimFirstOrder.limIntegrator.k * goverNordic_g14.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g14.limRateLimFirstOrder.limIntegrator.k * goverNordic_g14.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6334};
  modelica_boolean tmp1881;
  modelica_boolean tmp1882;
  modelica_boolean tmp1883;
  modelica_boolean tmp1884;
  tmp1881 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1882 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1883 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1884 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* der(goverNordic_g14.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1881 && tmp1882) || (tmp1883 && tmp1884))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6334;
}

/*
equation index: 6335
type: SIMPLE_ASSIGN
goverNordic_g14.waterFlow.y = goverNordic_g14.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* goverNordic_g14.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2756]] /* goverNordic_g14.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6335;
}

/*
equation index: 6336
type: SIMPLE_ASSIGN
goverNordic_g14.flowDivGateOpening.y = goverNordic_g14.waterFlow.y / goverNordic_g14.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2171]] /* goverNordic_g14.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* goverNordic_g14.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g14.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6336;
}

/*
equation index: 6337
type: SIMPLE_ASSIGN
goverNordic_g14.headWater.y = goverNordic_g14.flowDivGateOpening.y ^ goverNordic_g14.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6337};
  modelica_real tmp1885;
  modelica_real tmp1886;
  modelica_real tmp1887;
  modelica_real tmp1888;
  modelica_real tmp1889;
  modelica_real tmp1890;
  modelica_real tmp1891;
  tmp1885 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2171]] /* goverNordic_g14.flowDivGateOpening.y variable */);
  tmp1886 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2740]] /* goverNordic_g14.headWater.N PARAM */);
  if(tmp1885 < 0.0 && tmp1886 != 0.0)
  {
    tmp1888 = modf(tmp1886, &tmp1889);
    
    if(tmp1888 > 0.5)
    {
      tmp1888 -= 1.0;
      tmp1889 += 1.0;
    }
    else if(tmp1888 < -0.5)
    {
      tmp1888 += 1.0;
      tmp1889 -= 1.0;
    }
    
    if(fabs(tmp1888) < 1e-10)
      tmp1887 = pow(tmp1885, tmp1889);
    else
    {
      tmp1891 = modf(1.0/tmp1886, &tmp1890);
      if(tmp1891 > 0.5)
      {
        tmp1891 -= 1.0;
        tmp1890 += 1.0;
      }
      else if(tmp1891 < -0.5)
      {
        tmp1891 += 1.0;
        tmp1890 -= 1.0;
      }
      if(fabs(tmp1891) < 1e-10 && ((unsigned long)tmp1890 & 1))
      {
        tmp1887 = -pow(-tmp1885, tmp1888)*pow(tmp1885, tmp1889);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1885, tmp1886);
      }
    }
  }
  else
  {
    tmp1887 = pow(tmp1885, tmp1886);
  }
  if(isnan(tmp1887) || isinf(tmp1887))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1885, tmp1886);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2176]] /* goverNordic_g14.headWater.y variable */) = tmp1887;
  threadData->lastEquationSolved = 6337;
}

/*
equation index: 6338
type: SIMPLE_ASSIGN
g14.PmPu = goverNordic_g14.waterFlow.y * goverNordic_g14.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1617]] /* g14.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* goverNordic_g14.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2176]] /* goverNordic_g14.headWater.y variable */));
  threadData->lastEquationSolved = 6338;
}

/*
equation index: 6339
type: SIMPLE_ASSIGN
g14.cmPu = if g14.running.value then g14.PmPu / g14.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1624]] /* g14.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1617]] /* g14.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */),"g14.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6339;
}

/*
equation index: 6340
type: SIMPLE_ASSIGN
$DER.g14.omegaPu = if g14.running.value then 0.5 * (g14.cmPu * g14.PNomTurb / g14.SNom - g14.DPu * (g14.omegaPu - omegaCOI) - g14.cePu) / g14.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* der(g14.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1624]] /* g14.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1577]] /* g14.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */),"g14.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1539]] /* g14.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1623]] /* g14.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* g14.H PARAM */),"g14.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6340;
}

/*
equation index: 6341
type: SIMPLE_ASSIGN
goverNordic_g14.dH.y = goverNordic_g14.const2.k - goverNordic_g14.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2167]] /* goverNordic_g14.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* goverNordic_g14.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2176]] /* goverNordic_g14.headWater.y variable */);
  threadData->lastEquationSolved = 6341;
}

/*
equation index: 6342
type: SIMPLE_ASSIGN
$DER.goverNordic_g14.waterFlow.y = goverNordic_g14.waterFlow.k * goverNordic_g14.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* der(goverNordic_g14.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2755]] /* goverNordic_g14.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2167]] /* goverNordic_g14.dH.y variable */));
  threadData->lastEquationSolved = 6342;
}

/*
equation index: 6343
type: SIMPLE_ASSIGN
vrNordic_g14.timer.y = vrNordic_g14.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5225]] /* vrNordic_g14.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6343;
}

/*
equation index: 6344
type: SIMPLE_ASSIGN
$DER.vrNordic_g14.timer.y = if vrNordic_g14.timer.y < vrNordic_g14.timer.outMin and vrNordic_g14.timer.k * vrNordic_g14.overExcitationLimitation.y < 0.0 or vrNordic_g14.timer.y > vrNordic_g14.timer.outMax and vrNordic_g14.timer.k * vrNordic_g14.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g14.timer.k * vrNordic_g14.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6344};
  modelica_boolean tmp1892;
  modelica_boolean tmp1893;
  modelica_boolean tmp1894;
  modelica_boolean tmp1895;
  tmp1892 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5224]] /* vrNordic_g14.timer.outMin PARAM */));
  tmp1893 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)),0.0);
  tmp1894 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5223]] /* vrNordic_g14.timer.outMax PARAM */));
  tmp1895 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* der(vrNordic_g14.timer.y) STATE_DER */) = (((tmp1892 && tmp1893) || (tmp1894 && tmp1895))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6344;
}

/*
equation index: 6345
type: SIMPLE_ASSIGN
vrNordic_g14.greaterEqualThreshold.y = vrNordic_g14.timer.y >= vrNordic_g14.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6345};
  modelica_boolean tmp1896;
  tmp1896 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5167]] /* vrNordic_g14.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1054]] /* vrNordic_g14.greaterEqualThreshold.y DISCRETE */) = tmp1896;
  threadData->lastEquationSolved = 6345;
}

/*
equation index: 6346
type: SIMPLE_ASSIGN
vrNordic_g14.switch.y = if vrNordic_g14.greaterEqualThreshold.y then vrNordic_g14.gain1.y else vrNordic_g14.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3780]] /* vrNordic_g14.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1054]] /* vrNordic_g14.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3767]] /* vrNordic_g14.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */));
  threadData->lastEquationSolved = 6346;
}

/*
equation index: 6347
type: SIMPLE_ASSIGN
vrNordic_g14.min1.y = if vrNordic_g14.switch.y < vrNordic_g14.add.y then vrNordic_g14.switch.y else vrNordic_g14.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6347};
  modelica_boolean tmp1897;
  tmp1897 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3780]] /* vrNordic_g14.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3778]] /* vrNordic_g14.min1.y variable */) = (tmp1897?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3780]] /* vrNordic_g14.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */));
  threadData->lastEquationSolved = 6347;
}

/*
equation index: 6348
type: SIMPLE_ASSIGN
vrNordic_g14.kMulDU.y = vrNordic_g14.kMulDU.k * vrNordic_g14.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3768]] /* vrNordic_g14.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5168]] /* vrNordic_g14.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3778]] /* vrNordic_g14.min1.y variable */));
  threadData->lastEquationSolved = 6348;
}

/*
equation index: 6349
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.y = (vrNordic_g14.leadLag.bb[2] - vrNordic_g14.leadLag.d * vrNordic_g14.leadLag.a[2]) * vrNordic_g14.leadLag.x[1] + vrNordic_g14.leadLag.d * vrNordic_g14.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3770]] /* vrNordic_g14.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5177]] /* vrNordic_g14.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5178]] /* vrNordic_g14.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5172]] /* vrNordic_g14.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3769]] /* vrNordic_g14.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5178]] /* vrNordic_g14.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3768]] /* vrNordic_g14.kMulDU.y variable */));
  threadData->lastEquationSolved = 6349;
}

/*
equation index: 6350
type: SIMPLE_ASSIGN
$DER.vrNordic_g14.leadLag.x_scaled[1] = (vrNordic_g14.leadLag.a_end * vrNordic_g14.kMulDU.y - vrNordic_g14.leadLag.a[2] * vrNordic_g14.leadLag.x_scaled[1]) / vrNordic_g14.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* der(vrNordic_g14.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5173]] /* vrNordic_g14.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3768]] /* vrNordic_g14.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5172]] /* vrNordic_g14.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* vrNordic_g14.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5171]] /* vrNordic_g14.leadLag.a[1] PARAM */),"vrNordic_g14.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6350;
}

/*
equation index: 6351
type: SIMPLE_ASSIGN
vrNordic_g14.limIntegrator.y = vrNordic_g14.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5211]] /* vrNordic_g14.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6351;
}

/*
equation index: 6352
type: SIMPLE_ASSIGN
vrNordic_g14.feedback1.y = vrNordic_g14.leadLag.y - vrNordic_g14.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3765]] /* vrNordic_g14.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3770]] /* vrNordic_g14.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6352;
}

/*
equation index: 6353
type: SIMPLE_ASSIGN
vrNordic_g14.gain.y = vrNordic_g14.gain.k * vrNordic_g14.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5165]] /* vrNordic_g14.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3765]] /* vrNordic_g14.feedback1.y variable */));
  threadData->lastEquationSolved = 6353;
}

/*
equation index: 6354
type: SIMPLE_ASSIGN
$DER.vrNordic_g14.limIntegrator.y = if vrNordic_g14.limIntegrator.y < vrNordic_g14.limIntegrator.outMin and vrNordic_g14.limIntegrator.k * vrNordic_g14.gain.y < 0.0 or vrNordic_g14.limIntegrator.y > vrNordic_g14.limIntegrator.outMax and vrNordic_g14.limIntegrator.k * vrNordic_g14.gain.y > 0.0 then 0.0 else vrNordic_g14.limIntegrator.k * vrNordic_g14.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6354};
  modelica_boolean tmp1898;
  modelica_boolean tmp1899;
  modelica_boolean tmp1900;
  modelica_boolean tmp1901;
  tmp1898 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5210]] /* vrNordic_g14.limIntegrator.outMin PARAM */));
  tmp1899 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)),0.0);
  tmp1900 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5209]] /* vrNordic_g14.limIntegrator.outMax PARAM */));
  tmp1901 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* der(vrNordic_g14.limIntegrator.y) STATE_DER */) = (((tmp1898 && tmp1899) || (tmp1900 && tmp1901))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)));
  threadData->lastEquationSolved = 6354;
}

/*
equation index: 6355
type: SIMPLE_ASSIGN
g14.ufPu = if g14.running.value then vrNordic_g14.limIntegrator.y * g14.Kuf * g14.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1656]] /* g14.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1547]] /* g14.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6355;
}

/*
equation index: 6356
type: SIMPLE_ASSIGN
$DER.g14.lambdafPu = if g14.running.value then (g14.RfPPu * g14.ifPu - g14.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* der(g14.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1590]] /* g14.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1656]] /* g14.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6356;
}

/*
equation index: 6357
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limIntegrator.y = goverNordic_g13.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2714]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6357;
}

/*
equation index: 6358
type: SIMPLE_ASSIGN
goverNordic_g13.govInt.y = goverNordic_g13.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* goverNordic_g13.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2699]] /* goverNordic_g13.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6358;
}

/*
equation index: 6359
type: SIMPLE_ASSIGN
goverNordic_g13.govOut.y = goverNordic_g13.govOut.k1 * goverNordic_g13.govKp.y + goverNordic_g13.govOut.k2 * goverNordic_g13.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2157]] /* goverNordic_g13.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2702]] /* goverNordic_g13.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2156]] /* goverNordic_g13.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2703]] /* goverNordic_g13.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* goverNordic_g13.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6359;
}

/*
equation index: 6360
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.feedback.y = goverNordic_g13.govOut.y - goverNordic_g13.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2159]] /* goverNordic_g13.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2157]] /* goverNordic_g13.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6360;
}

/*
equation index: 6361
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.gain.y = goverNordic_g13.limRateLimFirstOrder.gain.k * goverNordic_g13.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2160]] /* goverNordic_g13.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2710]] /* goverNordic_g13.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2159]] /* goverNordic_g13.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6361;
}

/*
equation index: 6362
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g13.limRateLimFirstOrder.gain.y > goverNordic_g13.limRateLimFirstOrder.limiter.uMax then goverNordic_g13.limRateLimFirstOrder.limiter.uMax else if goverNordic_g13.limRateLimFirstOrder.gain.y < goverNordic_g13.limRateLimFirstOrder.limiter.uMin then goverNordic_g13.limRateLimFirstOrder.limiter.uMin else goverNordic_g13.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6362};
  modelica_boolean tmp1902;
  modelica_boolean tmp1903;
  modelica_boolean tmp1904;
  modelica_real tmp1905;
  tmp1902 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2160]] /* goverNordic_g13.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1904 = (modelica_boolean)tmp1902;
  if(tmp1904)
  {
    tmp1905 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1903 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2160]] /* goverNordic_g13.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1905 = (tmp1903?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2160]] /* goverNordic_g13.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */) = tmp1905;
  threadData->lastEquationSolved = 6362;
}

/*
equation index: 6363
type: SIMPLE_ASSIGN
$DER.goverNordic_g13.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g13.limRateLimFirstOrder.limIntegrator.y < goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g13.limRateLimFirstOrder.limIntegrator.k * goverNordic_g13.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g13.limRateLimFirstOrder.limIntegrator.y > goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g13.limRateLimFirstOrder.limIntegrator.k * goverNordic_g13.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g13.limRateLimFirstOrder.limIntegrator.k * goverNordic_g13.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6363};
  modelica_boolean tmp1906;
  modelica_boolean tmp1907;
  modelica_boolean tmp1908;
  modelica_boolean tmp1909;
  tmp1906 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1907 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1908 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1909 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* der(goverNordic_g13.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1906 && tmp1907) || (tmp1908 && tmp1909))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6363;
}

/*
equation index: 6364
type: SIMPLE_ASSIGN
goverNordic_g13.waterFlow.y = goverNordic_g13.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* goverNordic_g13.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* goverNordic_g13.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6364;
}

/*
equation index: 6365
type: SIMPLE_ASSIGN
goverNordic_g13.flowDivGateOpening.y = goverNordic_g13.waterFlow.y / goverNordic_g13.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2153]] /* goverNordic_g13.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* goverNordic_g13.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g13.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6365;
}

/*
equation index: 6366
type: SIMPLE_ASSIGN
goverNordic_g13.headWater.y = goverNordic_g13.flowDivGateOpening.y ^ goverNordic_g13.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6366};
  modelica_real tmp1910;
  modelica_real tmp1911;
  modelica_real tmp1912;
  modelica_real tmp1913;
  modelica_real tmp1914;
  modelica_real tmp1915;
  modelica_real tmp1916;
  tmp1910 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2153]] /* goverNordic_g13.flowDivGateOpening.y variable */);
  tmp1911 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* goverNordic_g13.headWater.N PARAM */);
  if(tmp1910 < 0.0 && tmp1911 != 0.0)
  {
    tmp1913 = modf(tmp1911, &tmp1914);
    
    if(tmp1913 > 0.5)
    {
      tmp1913 -= 1.0;
      tmp1914 += 1.0;
    }
    else if(tmp1913 < -0.5)
    {
      tmp1913 += 1.0;
      tmp1914 -= 1.0;
    }
    
    if(fabs(tmp1913) < 1e-10)
      tmp1912 = pow(tmp1910, tmp1914);
    else
    {
      tmp1916 = modf(1.0/tmp1911, &tmp1915);
      if(tmp1916 > 0.5)
      {
        tmp1916 -= 1.0;
        tmp1915 += 1.0;
      }
      else if(tmp1916 < -0.5)
      {
        tmp1916 += 1.0;
        tmp1915 -= 1.0;
      }
      if(fabs(tmp1916) < 1e-10 && ((unsigned long)tmp1915 & 1))
      {
        tmp1912 = -pow(-tmp1910, tmp1913)*pow(tmp1910, tmp1914);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1910, tmp1911);
      }
    }
  }
  else
  {
    tmp1912 = pow(tmp1910, tmp1911);
  }
  if(isnan(tmp1912) || isinf(tmp1912))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1910, tmp1911);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2158]] /* goverNordic_g13.headWater.y variable */) = tmp1912;
  threadData->lastEquationSolved = 6366;
}

/*
equation index: 6367
type: SIMPLE_ASSIGN
g13.PmPu = goverNordic_g13.waterFlow.y * goverNordic_g13.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1571]] /* g13.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* goverNordic_g13.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2158]] /* goverNordic_g13.headWater.y variable */));
  threadData->lastEquationSolved = 6367;
}

/*
equation index: 6368
type: SIMPLE_ASSIGN
g13.cmPu = if g13.running.value then g13.PmPu / g13.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1578]] /* g13.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1571]] /* g13.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */),"g13.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6368;
}

/*
equation index: 6369
type: SIMPLE_ASSIGN
$DER.g13.omegaPu = if g13.running.value then 0.5 * (g13.cmPu * g13.PNomTurb / g13.SNom - g13.DPu * (g13.omegaPu - omegaCOI) - g13.cePu) / g13.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* der(g13.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1578]] /* g13.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1476]] /* g13.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */),"g13.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* g13.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1577]] /* g13.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* g13.H PARAM */),"g13.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6369;
}

/*
equation index: 6370
type: SIMPLE_ASSIGN
goverNordic_g13.dH.y = goverNordic_g13.const2.k - goverNordic_g13.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2149]] /* goverNordic_g13.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2692]] /* goverNordic_g13.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2158]] /* goverNordic_g13.headWater.y variable */);
  threadData->lastEquationSolved = 6370;
}

/*
equation index: 6371
type: SIMPLE_ASSIGN
$DER.goverNordic_g13.waterFlow.y = goverNordic_g13.waterFlow.k * goverNordic_g13.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* der(goverNordic_g13.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2719]] /* goverNordic_g13.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2149]] /* goverNordic_g13.dH.y variable */));
  threadData->lastEquationSolved = 6371;
}

/*
equation index: 6372
type: SIMPLE_ASSIGN
vrNordic_g13.timer.y = vrNordic_g13.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5146]] /* vrNordic_g13.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6372;
}

/*
equation index: 6373
type: SIMPLE_ASSIGN
$DER.vrNordic_g13.timer.y = if vrNordic_g13.timer.y < vrNordic_g13.timer.outMin and vrNordic_g13.timer.k * vrNordic_g13.overExcitationLimitation.y < 0.0 or vrNordic_g13.timer.y > vrNordic_g13.timer.outMax and vrNordic_g13.timer.k * vrNordic_g13.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g13.timer.k * vrNordic_g13.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6373};
  modelica_boolean tmp1917;
  modelica_boolean tmp1918;
  modelica_boolean tmp1919;
  modelica_boolean tmp1920;
  tmp1917 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5145]] /* vrNordic_g13.timer.outMin PARAM */));
  tmp1918 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)),0.0);
  tmp1919 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5144]] /* vrNordic_g13.timer.outMax PARAM */));
  tmp1920 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* der(vrNordic_g13.timer.y) STATE_DER */) = (((tmp1917 && tmp1918) || (tmp1919 && tmp1920))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6373;
}

/*
equation index: 6374
type: SIMPLE_ASSIGN
vrNordic_g13.greaterEqualThreshold.y = vrNordic_g13.timer.y >= vrNordic_g13.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6374};
  modelica_boolean tmp1921;
  tmp1921 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5088]] /* vrNordic_g13.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1051]] /* vrNordic_g13.greaterEqualThreshold.y DISCRETE */) = tmp1921;
  threadData->lastEquationSolved = 6374;
}

/*
equation index: 6375
type: SIMPLE_ASSIGN
vrNordic_g13.switch.y = if vrNordic_g13.greaterEqualThreshold.y then vrNordic_g13.gain1.y else vrNordic_g13.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vrNordic_g13.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1051]] /* vrNordic_g13.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3743]] /* vrNordic_g13.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */));
  threadData->lastEquationSolved = 6375;
}

/*
equation index: 6376
type: SIMPLE_ASSIGN
vrNordic_g13.min1.y = if vrNordic_g13.switch.y < vrNordic_g13.add.y then vrNordic_g13.switch.y else vrNordic_g13.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6376};
  modelica_boolean tmp1922;
  tmp1922 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vrNordic_g13.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3754]] /* vrNordic_g13.min1.y variable */) = (tmp1922?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vrNordic_g13.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */));
  threadData->lastEquationSolved = 6376;
}

/*
equation index: 6377
type: SIMPLE_ASSIGN
vrNordic_g13.kMulDU.y = vrNordic_g13.kMulDU.k * vrNordic_g13.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3744]] /* vrNordic_g13.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5089]] /* vrNordic_g13.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3754]] /* vrNordic_g13.min1.y variable */));
  threadData->lastEquationSolved = 6377;
}

/*
equation index: 6378
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.y = (vrNordic_g13.leadLag.bb[2] - vrNordic_g13.leadLag.d * vrNordic_g13.leadLag.a[2]) * vrNordic_g13.leadLag.x[1] + vrNordic_g13.leadLag.d * vrNordic_g13.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3746]] /* vrNordic_g13.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5098]] /* vrNordic_g13.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5099]] /* vrNordic_g13.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5093]] /* vrNordic_g13.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3745]] /* vrNordic_g13.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5099]] /* vrNordic_g13.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3744]] /* vrNordic_g13.kMulDU.y variable */));
  threadData->lastEquationSolved = 6378;
}

/*
equation index: 6379
type: SIMPLE_ASSIGN
$DER.vrNordic_g13.leadLag.x_scaled[1] = (vrNordic_g13.leadLag.a_end * vrNordic_g13.kMulDU.y - vrNordic_g13.leadLag.a[2] * vrNordic_g13.leadLag.x_scaled[1]) / vrNordic_g13.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* der(vrNordic_g13.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5094]] /* vrNordic_g13.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3744]] /* vrNordic_g13.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5093]] /* vrNordic_g13.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* vrNordic_g13.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5092]] /* vrNordic_g13.leadLag.a[1] PARAM */),"vrNordic_g13.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6379;
}

/*
equation index: 6380
type: SIMPLE_ASSIGN
vrNordic_g13.limIntegrator.y = vrNordic_g13.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5132]] /* vrNordic_g13.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6380;
}

/*
equation index: 6381
type: SIMPLE_ASSIGN
vrNordic_g13.feedback1.y = vrNordic_g13.leadLag.y - vrNordic_g13.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3741]] /* vrNordic_g13.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3746]] /* vrNordic_g13.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6381;
}

/*
equation index: 6382
type: SIMPLE_ASSIGN
vrNordic_g13.gain.y = vrNordic_g13.gain.k * vrNordic_g13.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5086]] /* vrNordic_g13.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3741]] /* vrNordic_g13.feedback1.y variable */));
  threadData->lastEquationSolved = 6382;
}

/*
equation index: 6383
type: SIMPLE_ASSIGN
$DER.vrNordic_g13.limIntegrator.y = if vrNordic_g13.limIntegrator.y < vrNordic_g13.limIntegrator.outMin and vrNordic_g13.limIntegrator.k * vrNordic_g13.gain.y < 0.0 or vrNordic_g13.limIntegrator.y > vrNordic_g13.limIntegrator.outMax and vrNordic_g13.limIntegrator.k * vrNordic_g13.gain.y > 0.0 then 0.0 else vrNordic_g13.limIntegrator.k * vrNordic_g13.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6383};
  modelica_boolean tmp1923;
  modelica_boolean tmp1924;
  modelica_boolean tmp1925;
  modelica_boolean tmp1926;
  tmp1923 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5131]] /* vrNordic_g13.limIntegrator.outMin PARAM */));
  tmp1924 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)),0.0);
  tmp1925 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5130]] /* vrNordic_g13.limIntegrator.outMax PARAM */));
  tmp1926 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* der(vrNordic_g13.limIntegrator.y) STATE_DER */) = (((tmp1923 && tmp1924) || (tmp1925 && tmp1926))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)));
  threadData->lastEquationSolved = 6383;
}

/*
equation index: 6384
type: SIMPLE_ASSIGN
g13.ufPu = if g13.running.value then vrNordic_g13.limIntegrator.y * g13.Kuf * g13.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1610]] /* g13.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* g13.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6384;
}

/*
equation index: 6385
type: SIMPLE_ASSIGN
$DER.g13.lambdafPu = if g13.running.value then (g13.RfPPu * g13.ifPu - g13.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* der(g13.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* g13.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1610]] /* g13.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6385;
}

/*
equation index: 6386
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limIntegrator.y = goverNordic_g12.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2678]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6386;
}

/*
equation index: 6387
type: SIMPLE_ASSIGN
goverNordic_g12.govInt.y = goverNordic_g12.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* goverNordic_g12.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* goverNordic_g12.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6387;
}

/*
equation index: 6388
type: SIMPLE_ASSIGN
goverNordic_g12.govOut.y = goverNordic_g12.govOut.k1 * goverNordic_g12.govKp.y + goverNordic_g12.govOut.k2 * goverNordic_g12.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2139]] /* goverNordic_g12.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2666]] /* goverNordic_g12.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2138]] /* goverNordic_g12.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2667]] /* goverNordic_g12.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* goverNordic_g12.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6388;
}

/*
equation index: 6389
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.feedback.y = goverNordic_g12.govOut.y - goverNordic_g12.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2141]] /* goverNordic_g12.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2139]] /* goverNordic_g12.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6389;
}

/*
equation index: 6390
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.gain.y = goverNordic_g12.limRateLimFirstOrder.gain.k * goverNordic_g12.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2142]] /* goverNordic_g12.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2674]] /* goverNordic_g12.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2141]] /* goverNordic_g12.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6390;
}

/*
equation index: 6391
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g12.limRateLimFirstOrder.gain.y > goverNordic_g12.limRateLimFirstOrder.limiter.uMax then goverNordic_g12.limRateLimFirstOrder.limiter.uMax else if goverNordic_g12.limRateLimFirstOrder.gain.y < goverNordic_g12.limRateLimFirstOrder.limiter.uMin then goverNordic_g12.limRateLimFirstOrder.limiter.uMin else goverNordic_g12.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6391};
  modelica_boolean tmp1927;
  modelica_boolean tmp1928;
  modelica_boolean tmp1929;
  modelica_real tmp1930;
  tmp1927 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2142]] /* goverNordic_g12.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1929 = (modelica_boolean)tmp1927;
  if(tmp1929)
  {
    tmp1930 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1928 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2142]] /* goverNordic_g12.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1930 = (tmp1928?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2142]] /* goverNordic_g12.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */) = tmp1930;
  threadData->lastEquationSolved = 6391;
}

/*
equation index: 6392
type: SIMPLE_ASSIGN
$DER.goverNordic_g12.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g12.limRateLimFirstOrder.limIntegrator.y < goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g12.limRateLimFirstOrder.limIntegrator.k * goverNordic_g12.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g12.limRateLimFirstOrder.limIntegrator.y > goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g12.limRateLimFirstOrder.limIntegrator.k * goverNordic_g12.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g12.limRateLimFirstOrder.limIntegrator.k * goverNordic_g12.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6392};
  modelica_boolean tmp1931;
  modelica_boolean tmp1932;
  modelica_boolean tmp1933;
  modelica_boolean tmp1934;
  tmp1931 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1932 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1933 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1934 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* der(goverNordic_g12.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1931 && tmp1932) || (tmp1933 && tmp1934))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6392;
}

/*
equation index: 6393
type: SIMPLE_ASSIGN
goverNordic_g12.waterFlow.y = goverNordic_g12.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* goverNordic_g12.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* goverNordic_g12.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6393;
}

/*
equation index: 6394
type: SIMPLE_ASSIGN
goverNordic_g12.flowDivGateOpening.y = goverNordic_g12.waterFlow.y / goverNordic_g12.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2135]] /* goverNordic_g12.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* goverNordic_g12.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g12.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6394;
}

/*
equation index: 6395
type: SIMPLE_ASSIGN
goverNordic_g12.headWater.y = goverNordic_g12.flowDivGateOpening.y ^ goverNordic_g12.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6395};
  modelica_real tmp1935;
  modelica_real tmp1936;
  modelica_real tmp1937;
  modelica_real tmp1938;
  modelica_real tmp1939;
  modelica_real tmp1940;
  modelica_real tmp1941;
  tmp1935 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2135]] /* goverNordic_g12.flowDivGateOpening.y variable */);
  tmp1936 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2668]] /* goverNordic_g12.headWater.N PARAM */);
  if(tmp1935 < 0.0 && tmp1936 != 0.0)
  {
    tmp1938 = modf(tmp1936, &tmp1939);
    
    if(tmp1938 > 0.5)
    {
      tmp1938 -= 1.0;
      tmp1939 += 1.0;
    }
    else if(tmp1938 < -0.5)
    {
      tmp1938 += 1.0;
      tmp1939 -= 1.0;
    }
    
    if(fabs(tmp1938) < 1e-10)
      tmp1937 = pow(tmp1935, tmp1939);
    else
    {
      tmp1941 = modf(1.0/tmp1936, &tmp1940);
      if(tmp1941 > 0.5)
      {
        tmp1941 -= 1.0;
        tmp1940 += 1.0;
      }
      else if(tmp1941 < -0.5)
      {
        tmp1941 += 1.0;
        tmp1940 -= 1.0;
      }
      if(fabs(tmp1941) < 1e-10 && ((unsigned long)tmp1940 & 1))
      {
        tmp1937 = -pow(-tmp1935, tmp1938)*pow(tmp1935, tmp1939);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1935, tmp1936);
      }
    }
  }
  else
  {
    tmp1937 = pow(tmp1935, tmp1936);
  }
  if(isnan(tmp1937) || isinf(tmp1937))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1935, tmp1936);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2140]] /* goverNordic_g12.headWater.y variable */) = tmp1937;
  threadData->lastEquationSolved = 6395;
}

/*
equation index: 6396
type: SIMPLE_ASSIGN
g12.PmPu = goverNordic_g12.waterFlow.y * goverNordic_g12.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1525]] /* g12.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* goverNordic_g12.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2140]] /* goverNordic_g12.headWater.y variable */));
  threadData->lastEquationSolved = 6396;
}

/*
equation index: 6397
type: SIMPLE_ASSIGN
g12.cmPu = if g12.running.value then g12.PmPu / g12.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1532]] /* g12.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1525]] /* g12.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */),"g12.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6397;
}

/*
equation index: 6398
type: SIMPLE_ASSIGN
$DER.g12.omegaPu = if g12.running.value then 0.5 * (g12.cmPu * g12.PNomTurb / g12.SNom - g12.DPu * (g12.omegaPu - omegaCOI) - g12.cePu) / g12.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* der(g12.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1532]] /* g12.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* g12.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */),"g12.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* g12.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1531]] /* g12.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* g12.H PARAM */),"g12.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6398;
}

/*
equation index: 6399
type: SIMPLE_ASSIGN
goverNordic_g12.dH.y = goverNordic_g12.const2.k - goverNordic_g12.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2131]] /* goverNordic_g12.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2656]] /* goverNordic_g12.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2140]] /* goverNordic_g12.headWater.y variable */);
  threadData->lastEquationSolved = 6399;
}

/*
equation index: 6400
type: SIMPLE_ASSIGN
$DER.goverNordic_g12.waterFlow.y = goverNordic_g12.waterFlow.k * goverNordic_g12.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* der(goverNordic_g12.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* goverNordic_g12.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2131]] /* goverNordic_g12.dH.y variable */));
  threadData->lastEquationSolved = 6400;
}

/*
equation index: 6401
type: SIMPLE_ASSIGN
vrNordic_g12.timer.y = vrNordic_g12.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5067]] /* vrNordic_g12.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6401;
}

/*
equation index: 6402
type: SIMPLE_ASSIGN
$DER.vrNordic_g12.timer.y = if vrNordic_g12.timer.y < vrNordic_g12.timer.outMin and vrNordic_g12.timer.k * vrNordic_g12.overExcitationLimitation.y < 0.0 or vrNordic_g12.timer.y > vrNordic_g12.timer.outMax and vrNordic_g12.timer.k * vrNordic_g12.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g12.timer.k * vrNordic_g12.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6402};
  modelica_boolean tmp1942;
  modelica_boolean tmp1943;
  modelica_boolean tmp1944;
  modelica_boolean tmp1945;
  tmp1942 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5066]] /* vrNordic_g12.timer.outMin PARAM */));
  tmp1943 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)),0.0);
  tmp1944 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5065]] /* vrNordic_g12.timer.outMax PARAM */));
  tmp1945 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* der(vrNordic_g12.timer.y) STATE_DER */) = (((tmp1942 && tmp1943) || (tmp1944 && tmp1945))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6402;
}

/*
equation index: 6403
type: SIMPLE_ASSIGN
vrNordic_g12.greaterEqualThreshold.y = vrNordic_g12.timer.y >= vrNordic_g12.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6403};
  modelica_boolean tmp1946;
  tmp1946 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5009]] /* vrNordic_g12.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1048]] /* vrNordic_g12.greaterEqualThreshold.y DISCRETE */) = tmp1946;
  threadData->lastEquationSolved = 6403;
}

/*
equation index: 6404
type: SIMPLE_ASSIGN
vrNordic_g12.switch.y = if vrNordic_g12.greaterEqualThreshold.y then vrNordic_g12.gain1.y else vrNordic_g12.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3732]] /* vrNordic_g12.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1048]] /* vrNordic_g12.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3719]] /* vrNordic_g12.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */));
  threadData->lastEquationSolved = 6404;
}

/*
equation index: 6405
type: SIMPLE_ASSIGN
vrNordic_g12.min1.y = if vrNordic_g12.switch.y < vrNordic_g12.add.y then vrNordic_g12.switch.y else vrNordic_g12.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6405};
  modelica_boolean tmp1947;
  tmp1947 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3732]] /* vrNordic_g12.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3730]] /* vrNordic_g12.min1.y variable */) = (tmp1947?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3732]] /* vrNordic_g12.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */));
  threadData->lastEquationSolved = 6405;
}

/*
equation index: 6406
type: SIMPLE_ASSIGN
vrNordic_g12.kMulDU.y = vrNordic_g12.kMulDU.k * vrNordic_g12.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3720]] /* vrNordic_g12.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5010]] /* vrNordic_g12.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3730]] /* vrNordic_g12.min1.y variable */));
  threadData->lastEquationSolved = 6406;
}

/*
equation index: 6407
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.y = (vrNordic_g12.leadLag.bb[2] - vrNordic_g12.leadLag.d * vrNordic_g12.leadLag.a[2]) * vrNordic_g12.leadLag.x[1] + vrNordic_g12.leadLag.d * vrNordic_g12.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vrNordic_g12.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5019]] /* vrNordic_g12.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5020]] /* vrNordic_g12.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5014]] /* vrNordic_g12.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3721]] /* vrNordic_g12.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5020]] /* vrNordic_g12.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3720]] /* vrNordic_g12.kMulDU.y variable */));
  threadData->lastEquationSolved = 6407;
}

/*
equation index: 6408
type: SIMPLE_ASSIGN
$DER.vrNordic_g12.leadLag.x_scaled[1] = (vrNordic_g12.leadLag.a_end * vrNordic_g12.kMulDU.y - vrNordic_g12.leadLag.a[2] * vrNordic_g12.leadLag.x_scaled[1]) / vrNordic_g12.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* der(vrNordic_g12.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5015]] /* vrNordic_g12.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3720]] /* vrNordic_g12.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5014]] /* vrNordic_g12.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* vrNordic_g12.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5013]] /* vrNordic_g12.leadLag.a[1] PARAM */),"vrNordic_g12.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6408;
}

/*
equation index: 6409
type: SIMPLE_ASSIGN
vrNordic_g12.limIntegrator.y = vrNordic_g12.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5053]] /* vrNordic_g12.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6409;
}

/*
equation index: 6410
type: SIMPLE_ASSIGN
vrNordic_g12.feedback1.y = vrNordic_g12.leadLag.y - vrNordic_g12.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3717]] /* vrNordic_g12.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vrNordic_g12.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6410;
}

/*
equation index: 6411
type: SIMPLE_ASSIGN
vrNordic_g12.gain.y = vrNordic_g12.gain.k * vrNordic_g12.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5007]] /* vrNordic_g12.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3717]] /* vrNordic_g12.feedback1.y variable */));
  threadData->lastEquationSolved = 6411;
}

/*
equation index: 6412
type: SIMPLE_ASSIGN
$DER.vrNordic_g12.limIntegrator.y = if vrNordic_g12.limIntegrator.y < vrNordic_g12.limIntegrator.outMin and vrNordic_g12.limIntegrator.k * vrNordic_g12.gain.y < 0.0 or vrNordic_g12.limIntegrator.y > vrNordic_g12.limIntegrator.outMax and vrNordic_g12.limIntegrator.k * vrNordic_g12.gain.y > 0.0 then 0.0 else vrNordic_g12.limIntegrator.k * vrNordic_g12.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6412};
  modelica_boolean tmp1948;
  modelica_boolean tmp1949;
  modelica_boolean tmp1950;
  modelica_boolean tmp1951;
  tmp1948 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5052]] /* vrNordic_g12.limIntegrator.outMin PARAM */));
  tmp1949 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)),0.0);
  tmp1950 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5051]] /* vrNordic_g12.limIntegrator.outMax PARAM */));
  tmp1951 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* der(vrNordic_g12.limIntegrator.y) STATE_DER */) = (((tmp1948 && tmp1949) || (tmp1950 && tmp1951))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)));
  threadData->lastEquationSolved = 6412;
}

/*
equation index: 6413
type: SIMPLE_ASSIGN
g12.ufPu = if g12.running.value then vrNordic_g12.limIntegrator.y * g12.Kuf * g12.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1564]] /* g12.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* g12.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6413;
}

/*
equation index: 6414
type: SIMPLE_ASSIGN
$DER.g12.lambdafPu = if g12.running.value then (g12.RfPPu * g12.ifPu - g12.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(g12.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* g12.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1564]] /* g12.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6414;
}

/*
equation index: 6415
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limIntegrator.y = goverNordic_g11.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2642]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6415;
}

/*
equation index: 6416
type: SIMPLE_ASSIGN
goverNordic_g11.govInt.y = goverNordic_g11.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* goverNordic_g11.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2627]] /* goverNordic_g11.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6416;
}

/*
equation index: 6417
type: SIMPLE_ASSIGN
goverNordic_g11.govOut.y = goverNordic_g11.govOut.k1 * goverNordic_g11.govKp.y + goverNordic_g11.govOut.k2 * goverNordic_g11.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2121]] /* goverNordic_g11.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2630]] /* goverNordic_g11.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2120]] /* goverNordic_g11.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2631]] /* goverNordic_g11.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* goverNordic_g11.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6417;
}

/*
equation index: 6418
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.feedback.y = goverNordic_g11.govOut.y - goverNordic_g11.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2123]] /* goverNordic_g11.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2121]] /* goverNordic_g11.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6418;
}

/*
equation index: 6419
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.gain.y = goverNordic_g11.limRateLimFirstOrder.gain.k * goverNordic_g11.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2124]] /* goverNordic_g11.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2638]] /* goverNordic_g11.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2123]] /* goverNordic_g11.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6419;
}

/*
equation index: 6420
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g11.limRateLimFirstOrder.gain.y > goverNordic_g11.limRateLimFirstOrder.limiter.uMax then goverNordic_g11.limRateLimFirstOrder.limiter.uMax else if goverNordic_g11.limRateLimFirstOrder.gain.y < goverNordic_g11.limRateLimFirstOrder.limiter.uMin then goverNordic_g11.limRateLimFirstOrder.limiter.uMin else goverNordic_g11.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6420};
  modelica_boolean tmp1952;
  modelica_boolean tmp1953;
  modelica_boolean tmp1954;
  modelica_real tmp1955;
  tmp1952 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2124]] /* goverNordic_g11.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1954 = (modelica_boolean)tmp1952;
  if(tmp1954)
  {
    tmp1955 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1953 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2124]] /* goverNordic_g11.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1955 = (tmp1953?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2124]] /* goverNordic_g11.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */) = tmp1955;
  threadData->lastEquationSolved = 6420;
}

/*
equation index: 6421
type: SIMPLE_ASSIGN
$DER.goverNordic_g11.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g11.limRateLimFirstOrder.limIntegrator.y < goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g11.limRateLimFirstOrder.limIntegrator.k * goverNordic_g11.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g11.limRateLimFirstOrder.limIntegrator.y > goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g11.limRateLimFirstOrder.limIntegrator.k * goverNordic_g11.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g11.limRateLimFirstOrder.limIntegrator.k * goverNordic_g11.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6421};
  modelica_boolean tmp1956;
  modelica_boolean tmp1957;
  modelica_boolean tmp1958;
  modelica_boolean tmp1959;
  tmp1956 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1957 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1958 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1959 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* der(goverNordic_g11.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1956 && tmp1957) || (tmp1958 && tmp1959))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6421;
}

/*
equation index: 6422
type: SIMPLE_ASSIGN
goverNordic_g11.waterFlow.y = goverNordic_g11.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* goverNordic_g11.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* goverNordic_g11.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6422;
}

/*
equation index: 6423
type: SIMPLE_ASSIGN
goverNordic_g11.flowDivGateOpening.y = goverNordic_g11.waterFlow.y / goverNordic_g11.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2117]] /* goverNordic_g11.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* goverNordic_g11.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g11.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6423;
}

/*
equation index: 6424
type: SIMPLE_ASSIGN
goverNordic_g11.headWater.y = goverNordic_g11.flowDivGateOpening.y ^ goverNordic_g11.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6424};
  modelica_real tmp1960;
  modelica_real tmp1961;
  modelica_real tmp1962;
  modelica_real tmp1963;
  modelica_real tmp1964;
  modelica_real tmp1965;
  modelica_real tmp1966;
  tmp1960 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2117]] /* goverNordic_g11.flowDivGateOpening.y variable */);
  tmp1961 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2632]] /* goverNordic_g11.headWater.N PARAM */);
  if(tmp1960 < 0.0 && tmp1961 != 0.0)
  {
    tmp1963 = modf(tmp1961, &tmp1964);
    
    if(tmp1963 > 0.5)
    {
      tmp1963 -= 1.0;
      tmp1964 += 1.0;
    }
    else if(tmp1963 < -0.5)
    {
      tmp1963 += 1.0;
      tmp1964 -= 1.0;
    }
    
    if(fabs(tmp1963) < 1e-10)
      tmp1962 = pow(tmp1960, tmp1964);
    else
    {
      tmp1966 = modf(1.0/tmp1961, &tmp1965);
      if(tmp1966 > 0.5)
      {
        tmp1966 -= 1.0;
        tmp1965 += 1.0;
      }
      else if(tmp1966 < -0.5)
      {
        tmp1966 += 1.0;
        tmp1965 -= 1.0;
      }
      if(fabs(tmp1966) < 1e-10 && ((unsigned long)tmp1965 & 1))
      {
        tmp1962 = -pow(-tmp1960, tmp1963)*pow(tmp1960, tmp1964);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1960, tmp1961);
      }
    }
  }
  else
  {
    tmp1962 = pow(tmp1960, tmp1961);
  }
  if(isnan(tmp1962) || isinf(tmp1962))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1960, tmp1961);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2122]] /* goverNordic_g11.headWater.y variable */) = tmp1962;
  threadData->lastEquationSolved = 6424;
}

/*
equation index: 6425
type: SIMPLE_ASSIGN
g11.PmPu = goverNordic_g11.waterFlow.y * goverNordic_g11.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1479]] /* g11.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* goverNordic_g11.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2122]] /* goverNordic_g11.headWater.y variable */));
  threadData->lastEquationSolved = 6425;
}

/*
equation index: 6426
type: SIMPLE_ASSIGN
g11.cmPu = if g11.running.value then g11.PmPu / g11.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1486]] /* g11.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1479]] /* g11.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */),"g11.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6426;
}

/*
equation index: 6427
type: SIMPLE_ASSIGN
$DER.g11.omegaPu = if g11.running.value then 0.5 * (g11.cmPu * g11.PNomTurb / g11.SNom - g11.DPu * (g11.omegaPu - omegaCOI) - g11.cePu) / g11.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* der(g11.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1486]] /* g11.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1274]] /* g11.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */),"g11.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* g11.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1485]] /* g11.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* g11.H PARAM */),"g11.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6427;
}

/*
equation index: 6428
type: SIMPLE_ASSIGN
goverNordic_g11.dH.y = goverNordic_g11.const2.k - goverNordic_g11.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2113]] /* goverNordic_g11.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* goverNordic_g11.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2122]] /* goverNordic_g11.headWater.y variable */);
  threadData->lastEquationSolved = 6428;
}

/*
equation index: 6429
type: SIMPLE_ASSIGN
$DER.goverNordic_g11.waterFlow.y = goverNordic_g11.waterFlow.k * goverNordic_g11.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* der(goverNordic_g11.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2647]] /* goverNordic_g11.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2113]] /* goverNordic_g11.dH.y variable */));
  threadData->lastEquationSolved = 6429;
}

/*
equation index: 6430
type: SIMPLE_ASSIGN
vrNordic_g11.timer.y = vrNordic_g11.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6430};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4988]] /* vrNordic_g11.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6430;
}

/*
equation index: 6431
type: SIMPLE_ASSIGN
$DER.vrNordic_g11.timer.y = if vrNordic_g11.timer.y < vrNordic_g11.timer.outMin and vrNordic_g11.timer.k * vrNordic_g11.overExcitationLimitation.y < 0.0 or vrNordic_g11.timer.y > vrNordic_g11.timer.outMax and vrNordic_g11.timer.k * vrNordic_g11.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g11.timer.k * vrNordic_g11.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6431};
  modelica_boolean tmp1967;
  modelica_boolean tmp1968;
  modelica_boolean tmp1969;
  modelica_boolean tmp1970;
  tmp1967 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4987]] /* vrNordic_g11.timer.outMin PARAM */));
  tmp1968 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)),0.0);
  tmp1969 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4986]] /* vrNordic_g11.timer.outMax PARAM */));
  tmp1970 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* der(vrNordic_g11.timer.y) STATE_DER */) = (((tmp1967 && tmp1968) || (tmp1969 && tmp1970))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6431;
}

/*
equation index: 6432
type: SIMPLE_ASSIGN
vrNordic_g11.greaterEqualThreshold.y = vrNordic_g11.timer.y >= vrNordic_g11.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6432};
  modelica_boolean tmp1971;
  tmp1971 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4930]] /* vrNordic_g11.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1045]] /* vrNordic_g11.greaterEqualThreshold.y DISCRETE */) = tmp1971;
  threadData->lastEquationSolved = 6432;
}

/*
equation index: 6433
type: SIMPLE_ASSIGN
vrNordic_g11.switch.y = if vrNordic_g11.greaterEqualThreshold.y then vrNordic_g11.gain1.y else vrNordic_g11.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3708]] /* vrNordic_g11.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1045]] /* vrNordic_g11.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3695]] /* vrNordic_g11.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */));
  threadData->lastEquationSolved = 6433;
}

/*
equation index: 6434
type: SIMPLE_ASSIGN
vrNordic_g11.min1.y = if vrNordic_g11.switch.y < vrNordic_g11.add.y then vrNordic_g11.switch.y else vrNordic_g11.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6434};
  modelica_boolean tmp1972;
  tmp1972 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3708]] /* vrNordic_g11.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3706]] /* vrNordic_g11.min1.y variable */) = (tmp1972?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3708]] /* vrNordic_g11.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */));
  threadData->lastEquationSolved = 6434;
}

/*
equation index: 6435
type: SIMPLE_ASSIGN
vrNordic_g11.kMulDU.y = vrNordic_g11.kMulDU.k * vrNordic_g11.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6435};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3696]] /* vrNordic_g11.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4931]] /* vrNordic_g11.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3706]] /* vrNordic_g11.min1.y variable */));
  threadData->lastEquationSolved = 6435;
}

/*
equation index: 6436
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.y = (vrNordic_g11.leadLag.bb[2] - vrNordic_g11.leadLag.d * vrNordic_g11.leadLag.a[2]) * vrNordic_g11.leadLag.x[1] + vrNordic_g11.leadLag.d * vrNordic_g11.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3698]] /* vrNordic_g11.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4940]] /* vrNordic_g11.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4941]] /* vrNordic_g11.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4935]] /* vrNordic_g11.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3697]] /* vrNordic_g11.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4941]] /* vrNordic_g11.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3696]] /* vrNordic_g11.kMulDU.y variable */));
  threadData->lastEquationSolved = 6436;
}

/*
equation index: 6437
type: SIMPLE_ASSIGN
$DER.vrNordic_g11.leadLag.x_scaled[1] = (vrNordic_g11.leadLag.a_end * vrNordic_g11.kMulDU.y - vrNordic_g11.leadLag.a[2] * vrNordic_g11.leadLag.x_scaled[1]) / vrNordic_g11.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[581]] /* der(vrNordic_g11.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4936]] /* vrNordic_g11.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3696]] /* vrNordic_g11.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4935]] /* vrNordic_g11.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* vrNordic_g11.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4934]] /* vrNordic_g11.leadLag.a[1] PARAM */),"vrNordic_g11.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6437;
}

/*
equation index: 6438
type: SIMPLE_ASSIGN
vrNordic_g11.limIntegrator.y = vrNordic_g11.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6438};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4974]] /* vrNordic_g11.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6438;
}

/*
equation index: 6439
type: SIMPLE_ASSIGN
vrNordic_g11.feedback1.y = vrNordic_g11.leadLag.y - vrNordic_g11.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3693]] /* vrNordic_g11.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3698]] /* vrNordic_g11.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6439;
}

/*
equation index: 6440
type: SIMPLE_ASSIGN
vrNordic_g11.gain.y = vrNordic_g11.gain.k * vrNordic_g11.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4928]] /* vrNordic_g11.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3693]] /* vrNordic_g11.feedback1.y variable */));
  threadData->lastEquationSolved = 6440;
}

/*
equation index: 6441
type: SIMPLE_ASSIGN
$DER.vrNordic_g11.limIntegrator.y = if vrNordic_g11.limIntegrator.y < vrNordic_g11.limIntegrator.outMin and vrNordic_g11.limIntegrator.k * vrNordic_g11.gain.y < 0.0 or vrNordic_g11.limIntegrator.y > vrNordic_g11.limIntegrator.outMax and vrNordic_g11.limIntegrator.k * vrNordic_g11.gain.y > 0.0 then 0.0 else vrNordic_g11.limIntegrator.k * vrNordic_g11.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6441};
  modelica_boolean tmp1973;
  modelica_boolean tmp1974;
  modelica_boolean tmp1975;
  modelica_boolean tmp1976;
  tmp1973 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4973]] /* vrNordic_g11.limIntegrator.outMin PARAM */));
  tmp1974 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)),0.0);
  tmp1975 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4972]] /* vrNordic_g11.limIntegrator.outMax PARAM */));
  tmp1976 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* der(vrNordic_g11.limIntegrator.y) STATE_DER */) = (((tmp1973 && tmp1974) || (tmp1975 && tmp1976))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)));
  threadData->lastEquationSolved = 6441;
}

/*
equation index: 6442
type: SIMPLE_ASSIGN
g11.ufPu = if g11.running.value then vrNordic_g11.limIntegrator.y * g11.Kuf * g11.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1518]] /* g11.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* g11.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6442;
}

/*
equation index: 6443
type: SIMPLE_ASSIGN
$DER.g11.lambdafPu = if g11.running.value then (g11.RfPPu * g11.ifPu - g11.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* der(g11.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* g11.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1518]] /* g11.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6443;
}

/*
equation index: 6444
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limIntegrator.y = goverNordic_g10.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2606]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6444;
}

/*
equation index: 6445
type: SIMPLE_ASSIGN
goverNordic_g10.govInt.y = goverNordic_g10.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* goverNordic_g10.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2591]] /* goverNordic_g10.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6445;
}

/*
equation index: 6446
type: SIMPLE_ASSIGN
goverNordic_g10.govOut.y = goverNordic_g10.govOut.k1 * goverNordic_g10.govKp.y + goverNordic_g10.govOut.k2 * goverNordic_g10.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2103]] /* goverNordic_g10.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2594]] /* goverNordic_g10.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2102]] /* goverNordic_g10.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2595]] /* goverNordic_g10.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* goverNordic_g10.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6446;
}

/*
equation index: 6447
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.feedback.y = goverNordic_g10.govOut.y - goverNordic_g10.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2105]] /* goverNordic_g10.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2103]] /* goverNordic_g10.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6447;
}

/*
equation index: 6448
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.gain.y = goverNordic_g10.limRateLimFirstOrder.gain.k * goverNordic_g10.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2106]] /* goverNordic_g10.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2602]] /* goverNordic_g10.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2105]] /* goverNordic_g10.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6448;
}

/*
equation index: 6449
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g10.limRateLimFirstOrder.gain.y > goverNordic_g10.limRateLimFirstOrder.limiter.uMax then goverNordic_g10.limRateLimFirstOrder.limiter.uMax else if goverNordic_g10.limRateLimFirstOrder.gain.y < goverNordic_g10.limRateLimFirstOrder.limiter.uMin then goverNordic_g10.limRateLimFirstOrder.limiter.uMin else goverNordic_g10.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6449};
  modelica_boolean tmp1977;
  modelica_boolean tmp1978;
  modelica_boolean tmp1979;
  modelica_real tmp1980;
  tmp1977 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2106]] /* goverNordic_g10.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2607]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp1979 = (modelica_boolean)tmp1977;
  if(tmp1979)
  {
    tmp1980 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2607]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp1978 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2106]] /* goverNordic_g10.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2608]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp1980 = (tmp1978?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2608]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2106]] /* goverNordic_g10.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */) = tmp1980;
  threadData->lastEquationSolved = 6449;
}

/*
equation index: 6450
type: SIMPLE_ASSIGN
$DER.goverNordic_g10.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g10.limRateLimFirstOrder.limIntegrator.y < goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g10.limRateLimFirstOrder.limIntegrator.k * goverNordic_g10.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g10.limRateLimFirstOrder.limIntegrator.y > goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g10.limRateLimFirstOrder.limIntegrator.k * goverNordic_g10.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g10.limRateLimFirstOrder.limIntegrator.k * goverNordic_g10.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6450};
  modelica_boolean tmp1981;
  modelica_boolean tmp1982;
  modelica_boolean tmp1983;
  modelica_boolean tmp1984;
  tmp1981 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp1982 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp1983 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2604]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp1984 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* der(goverNordic_g10.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp1981 && tmp1982) || (tmp1983 && tmp1984))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6450;
}

/*
equation index: 6451
type: SIMPLE_ASSIGN
goverNordic_g10.waterFlow.y = goverNordic_g10.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* goverNordic_g10.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2612]] /* goverNordic_g10.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6451;
}

/*
equation index: 6452
type: SIMPLE_ASSIGN
goverNordic_g10.flowDivGateOpening.y = goverNordic_g10.waterFlow.y / goverNordic_g10.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2099]] /* goverNordic_g10.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* goverNordic_g10.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g10.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6452;
}

/*
equation index: 6453
type: SIMPLE_ASSIGN
goverNordic_g10.headWater.y = goverNordic_g10.flowDivGateOpening.y ^ goverNordic_g10.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6453};
  modelica_real tmp1985;
  modelica_real tmp1986;
  modelica_real tmp1987;
  modelica_real tmp1988;
  modelica_real tmp1989;
  modelica_real tmp1990;
  modelica_real tmp1991;
  tmp1985 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2099]] /* goverNordic_g10.flowDivGateOpening.y variable */);
  tmp1986 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2596]] /* goverNordic_g10.headWater.N PARAM */);
  if(tmp1985 < 0.0 && tmp1986 != 0.0)
  {
    tmp1988 = modf(tmp1986, &tmp1989);
    
    if(tmp1988 > 0.5)
    {
      tmp1988 -= 1.0;
      tmp1989 += 1.0;
    }
    else if(tmp1988 < -0.5)
    {
      tmp1988 += 1.0;
      tmp1989 -= 1.0;
    }
    
    if(fabs(tmp1988) < 1e-10)
      tmp1987 = pow(tmp1985, tmp1989);
    else
    {
      tmp1991 = modf(1.0/tmp1986, &tmp1990);
      if(tmp1991 > 0.5)
      {
        tmp1991 -= 1.0;
        tmp1990 += 1.0;
      }
      else if(tmp1991 < -0.5)
      {
        tmp1991 += 1.0;
        tmp1990 -= 1.0;
      }
      if(fabs(tmp1991) < 1e-10 && ((unsigned long)tmp1990 & 1))
      {
        tmp1987 = -pow(-tmp1985, tmp1988)*pow(tmp1985, tmp1989);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1985, tmp1986);
      }
    }
  }
  else
  {
    tmp1987 = pow(tmp1985, tmp1986);
  }
  if(isnan(tmp1987) || isinf(tmp1987))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1985, tmp1986);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2104]] /* goverNordic_g10.headWater.y variable */) = tmp1987;
  threadData->lastEquationSolved = 6453;
}

/*
equation index: 6454
type: SIMPLE_ASSIGN
g10.PmPu = goverNordic_g10.waterFlow.y * goverNordic_g10.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1433]] /* g10.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* goverNordic_g10.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2104]] /* goverNordic_g10.headWater.y variable */));
  threadData->lastEquationSolved = 6454;
}

/*
equation index: 6455
type: SIMPLE_ASSIGN
g10.cmPu = if g10.running.value then g10.PmPu / g10.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6455};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1440]] /* g10.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1433]] /* g10.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */),"g10.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6455;
}

/*
equation index: 6456
type: SIMPLE_ASSIGN
$DER.g10.omegaPu = if g10.running.value then 0.5 * (g10.cmPu * g10.PNomTurb / g10.SNom - g10.DPu * (g10.omegaPu - omegaCOI) - g10.cePu) / g10.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* der(g10.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1440]] /* g10.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* g10.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */),"g10.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* g10.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1439]] /* g10.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1137]] /* g10.H PARAM */),"g10.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6456;
}

/*
equation index: 6457
type: SIMPLE_ASSIGN
goverNordic_g10.dH.y = goverNordic_g10.const2.k - goverNordic_g10.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2095]] /* goverNordic_g10.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2584]] /* goverNordic_g10.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2104]] /* goverNordic_g10.headWater.y variable */);
  threadData->lastEquationSolved = 6457;
}

/*
equation index: 6458
type: SIMPLE_ASSIGN
$DER.goverNordic_g10.waterFlow.y = goverNordic_g10.waterFlow.k * goverNordic_g10.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* der(goverNordic_g10.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2611]] /* goverNordic_g10.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2095]] /* goverNordic_g10.dH.y variable */));
  threadData->lastEquationSolved = 6458;
}

/*
equation index: 6459
type: SIMPLE_ASSIGN
vrNordic_g10.timer.y = vrNordic_g10.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4909]] /* vrNordic_g10.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6459;
}

/*
equation index: 6460
type: SIMPLE_ASSIGN
$DER.vrNordic_g10.timer.y = if vrNordic_g10.timer.y < vrNordic_g10.timer.outMin and vrNordic_g10.timer.k * vrNordic_g10.overExcitationLimitation.y < 0.0 or vrNordic_g10.timer.y > vrNordic_g10.timer.outMax and vrNordic_g10.timer.k * vrNordic_g10.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g10.timer.k * vrNordic_g10.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6460};
  modelica_boolean tmp1992;
  modelica_boolean tmp1993;
  modelica_boolean tmp1994;
  modelica_boolean tmp1995;
  tmp1992 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4908]] /* vrNordic_g10.timer.outMin PARAM */));
  tmp1993 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)),0.0);
  tmp1994 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4907]] /* vrNordic_g10.timer.outMax PARAM */));
  tmp1995 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[579]] /* der(vrNordic_g10.timer.y) STATE_DER */) = (((tmp1992 && tmp1993) || (tmp1994 && tmp1995))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6460;
}

/*
equation index: 6461
type: SIMPLE_ASSIGN
vrNordic_g10.greaterEqualThreshold.y = vrNordic_g10.timer.y >= vrNordic_g10.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6461};
  modelica_boolean tmp1996;
  tmp1996 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4851]] /* vrNordic_g10.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1042]] /* vrNordic_g10.greaterEqualThreshold.y DISCRETE */) = tmp1996;
  threadData->lastEquationSolved = 6461;
}

/*
equation index: 6462
type: SIMPLE_ASSIGN
vrNordic_g10.switch.y = if vrNordic_g10.greaterEqualThreshold.y then vrNordic_g10.gain1.y else vrNordic_g10.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* vrNordic_g10.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1042]] /* vrNordic_g10.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3671]] /* vrNordic_g10.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */));
  threadData->lastEquationSolved = 6462;
}

/*
equation index: 6463
type: SIMPLE_ASSIGN
vrNordic_g10.min1.y = if vrNordic_g10.switch.y < vrNordic_g10.add.y then vrNordic_g10.switch.y else vrNordic_g10.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6463};
  modelica_boolean tmp1997;
  tmp1997 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* vrNordic_g10.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3682]] /* vrNordic_g10.min1.y variable */) = (tmp1997?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* vrNordic_g10.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */));
  threadData->lastEquationSolved = 6463;
}

/*
equation index: 6464
type: SIMPLE_ASSIGN
vrNordic_g10.kMulDU.y = vrNordic_g10.kMulDU.k * vrNordic_g10.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3672]] /* vrNordic_g10.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4852]] /* vrNordic_g10.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3682]] /* vrNordic_g10.min1.y variable */));
  threadData->lastEquationSolved = 6464;
}

/*
equation index: 6465
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.y = (vrNordic_g10.leadLag.bb[2] - vrNordic_g10.leadLag.d * vrNordic_g10.leadLag.a[2]) * vrNordic_g10.leadLag.x[1] + vrNordic_g10.leadLag.d * vrNordic_g10.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6465};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3674]] /* vrNordic_g10.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4861]] /* vrNordic_g10.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4862]] /* vrNordic_g10.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4856]] /* vrNordic_g10.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3673]] /* vrNordic_g10.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4862]] /* vrNordic_g10.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3672]] /* vrNordic_g10.kMulDU.y variable */));
  threadData->lastEquationSolved = 6465;
}

/*
equation index: 6466
type: SIMPLE_ASSIGN
$DER.vrNordic_g10.leadLag.x_scaled[1] = (vrNordic_g10.leadLag.a_end * vrNordic_g10.kMulDU.y - vrNordic_g10.leadLag.a[2] * vrNordic_g10.leadLag.x_scaled[1]) / vrNordic_g10.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* der(vrNordic_g10.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4857]] /* vrNordic_g10.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3672]] /* vrNordic_g10.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4856]] /* vrNordic_g10.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* vrNordic_g10.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4855]] /* vrNordic_g10.leadLag.a[1] PARAM */),"vrNordic_g10.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6466;
}

/*
equation index: 6467
type: SIMPLE_ASSIGN
vrNordic_g10.limIntegrator.y = vrNordic_g10.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4895]] /* vrNordic_g10.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6467;
}

/*
equation index: 6468
type: SIMPLE_ASSIGN
vrNordic_g10.feedback1.y = vrNordic_g10.leadLag.y - vrNordic_g10.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3669]] /* vrNordic_g10.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3674]] /* vrNordic_g10.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6468;
}

/*
equation index: 6469
type: SIMPLE_ASSIGN
vrNordic_g10.gain.y = vrNordic_g10.gain.k * vrNordic_g10.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4849]] /* vrNordic_g10.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3669]] /* vrNordic_g10.feedback1.y variable */));
  threadData->lastEquationSolved = 6469;
}

/*
equation index: 6470
type: SIMPLE_ASSIGN
$DER.vrNordic_g10.limIntegrator.y = if vrNordic_g10.limIntegrator.y < vrNordic_g10.limIntegrator.outMin and vrNordic_g10.limIntegrator.k * vrNordic_g10.gain.y < 0.0 or vrNordic_g10.limIntegrator.y > vrNordic_g10.limIntegrator.outMax and vrNordic_g10.limIntegrator.k * vrNordic_g10.gain.y > 0.0 then 0.0 else vrNordic_g10.limIntegrator.k * vrNordic_g10.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6470};
  modelica_boolean tmp1998;
  modelica_boolean tmp1999;
  modelica_boolean tmp2000;
  modelica_boolean tmp2001;
  tmp1998 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4894]] /* vrNordic_g10.limIntegrator.outMin PARAM */));
  tmp1999 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)),0.0);
  tmp2000 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4893]] /* vrNordic_g10.limIntegrator.outMax PARAM */));
  tmp2001 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[578]] /* der(vrNordic_g10.limIntegrator.y) STATE_DER */) = (((tmp1998 && tmp1999) || (tmp2000 && tmp2001))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)));
  threadData->lastEquationSolved = 6470;
}

/*
equation index: 6471
type: SIMPLE_ASSIGN
g10.ufPu = if g10.running.value then vrNordic_g10.limIntegrator.y * g10.Kuf * g10.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1472]] /* g10.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* g10.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6471;
}

/*
equation index: 6472
type: SIMPLE_ASSIGN
$DER.g10.lambdafPu = if g10.running.value then (g10.RfPPu * g10.ifPu - g10.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* der(g10.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* g10.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1472]] /* g10.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6472;
}

/*
equation index: 6473
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limIntegrator.y = goverNordic_g09.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2570]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6473;
}

/*
equation index: 6474
type: SIMPLE_ASSIGN
goverNordic_g09.govInt.y = goverNordic_g09.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* goverNordic_g09.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2555]] /* goverNordic_g09.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6474;
}

/*
equation index: 6475
type: SIMPLE_ASSIGN
goverNordic_g09.govOut.y = goverNordic_g09.govOut.k1 * goverNordic_g09.govKp.y + goverNordic_g09.govOut.k2 * goverNordic_g09.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2085]] /* goverNordic_g09.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2558]] /* goverNordic_g09.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2084]] /* goverNordic_g09.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2559]] /* goverNordic_g09.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* goverNordic_g09.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6475;
}

/*
equation index: 6476
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.feedback.y = goverNordic_g09.govOut.y - goverNordic_g09.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2087]] /* goverNordic_g09.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2085]] /* goverNordic_g09.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6476;
}

/*
equation index: 6477
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.gain.y = goverNordic_g09.limRateLimFirstOrder.gain.k * goverNordic_g09.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2088]] /* goverNordic_g09.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2566]] /* goverNordic_g09.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2087]] /* goverNordic_g09.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6477;
}

/*
equation index: 6478
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g09.limRateLimFirstOrder.gain.y > goverNordic_g09.limRateLimFirstOrder.limiter.uMax then goverNordic_g09.limRateLimFirstOrder.limiter.uMax else if goverNordic_g09.limRateLimFirstOrder.gain.y < goverNordic_g09.limRateLimFirstOrder.limiter.uMin then goverNordic_g09.limRateLimFirstOrder.limiter.uMin else goverNordic_g09.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6478};
  modelica_boolean tmp2002;
  modelica_boolean tmp2003;
  modelica_boolean tmp2004;
  modelica_real tmp2005;
  tmp2002 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2088]] /* goverNordic_g09.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp2004 = (modelica_boolean)tmp2002;
  if(tmp2004)
  {
    tmp2005 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp2003 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2088]] /* goverNordic_g09.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp2005 = (tmp2003?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2088]] /* goverNordic_g09.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */) = tmp2005;
  threadData->lastEquationSolved = 6478;
}

/*
equation index: 6479
type: SIMPLE_ASSIGN
$DER.goverNordic_g09.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g09.limRateLimFirstOrder.limIntegrator.y < goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g09.limRateLimFirstOrder.limIntegrator.k * goverNordic_g09.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g09.limRateLimFirstOrder.limIntegrator.y > goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g09.limRateLimFirstOrder.limIntegrator.k * goverNordic_g09.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g09.limRateLimFirstOrder.limIntegrator.k * goverNordic_g09.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6479};
  modelica_boolean tmp2006;
  modelica_boolean tmp2007;
  modelica_boolean tmp2008;
  modelica_boolean tmp2009;
  tmp2006 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp2007 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp2008 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp2009 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* der(goverNordic_g09.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp2006 && tmp2007) || (tmp2008 && tmp2009))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6479;
}

/*
equation index: 6480
type: SIMPLE_ASSIGN
goverNordic_g09.waterFlow.y = goverNordic_g09.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* goverNordic_g09.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2576]] /* goverNordic_g09.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6480;
}

/*
equation index: 6481
type: SIMPLE_ASSIGN
goverNordic_g09.flowDivGateOpening.y = goverNordic_g09.waterFlow.y / goverNordic_g09.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2081]] /* goverNordic_g09.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* goverNordic_g09.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g09.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6481;
}

/*
equation index: 6482
type: SIMPLE_ASSIGN
goverNordic_g09.headWater.y = goverNordic_g09.flowDivGateOpening.y ^ goverNordic_g09.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6482};
  modelica_real tmp2010;
  modelica_real tmp2011;
  modelica_real tmp2012;
  modelica_real tmp2013;
  modelica_real tmp2014;
  modelica_real tmp2015;
  modelica_real tmp2016;
  tmp2010 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2081]] /* goverNordic_g09.flowDivGateOpening.y variable */);
  tmp2011 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2560]] /* goverNordic_g09.headWater.N PARAM */);
  if(tmp2010 < 0.0 && tmp2011 != 0.0)
  {
    tmp2013 = modf(tmp2011, &tmp2014);
    
    if(tmp2013 > 0.5)
    {
      tmp2013 -= 1.0;
      tmp2014 += 1.0;
    }
    else if(tmp2013 < -0.5)
    {
      tmp2013 += 1.0;
      tmp2014 -= 1.0;
    }
    
    if(fabs(tmp2013) < 1e-10)
      tmp2012 = pow(tmp2010, tmp2014);
    else
    {
      tmp2016 = modf(1.0/tmp2011, &tmp2015);
      if(tmp2016 > 0.5)
      {
        tmp2016 -= 1.0;
        tmp2015 += 1.0;
      }
      else if(tmp2016 < -0.5)
      {
        tmp2016 += 1.0;
        tmp2015 -= 1.0;
      }
      if(fabs(tmp2016) < 1e-10 && ((unsigned long)tmp2015 & 1))
      {
        tmp2012 = -pow(-tmp2010, tmp2013)*pow(tmp2010, tmp2014);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2010, tmp2011);
      }
    }
  }
  else
  {
    tmp2012 = pow(tmp2010, tmp2011);
  }
  if(isnan(tmp2012) || isinf(tmp2012))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2010, tmp2011);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2086]] /* goverNordic_g09.headWater.y variable */) = tmp2012;
  threadData->lastEquationSolved = 6482;
}

/*
equation index: 6483
type: SIMPLE_ASSIGN
g09.PmPu = goverNordic_g09.waterFlow.y * goverNordic_g09.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1387]] /* g09.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* goverNordic_g09.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2086]] /* goverNordic_g09.headWater.y variable */));
  threadData->lastEquationSolved = 6483;
}

/*
equation index: 6484
type: SIMPLE_ASSIGN
g09.cmPu = if g09.running.value then g09.PmPu / g09.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1394]] /* g09.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1387]] /* g09.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */),"g09.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6484;
}

/*
equation index: 6485
type: SIMPLE_ASSIGN
$DER.g09.omegaPu = if g09.running.value then 0.5 * (g09.cmPu * g09.PNomTurb / g09.SNom - g09.DPu * (g09.omegaPu - omegaCOI) - g09.cePu) / g09.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* der(g09.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1394]] /* g09.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* g09.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */),"g09.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1034]] /* g09.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1393]] /* g09.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* g09.H PARAM */),"g09.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6485;
}

/*
equation index: 6486
type: SIMPLE_ASSIGN
goverNordic_g09.dH.y = goverNordic_g09.const2.k - goverNordic_g09.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2077]] /* goverNordic_g09.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2548]] /* goverNordic_g09.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2086]] /* goverNordic_g09.headWater.y variable */);
  threadData->lastEquationSolved = 6486;
}

/*
equation index: 6487
type: SIMPLE_ASSIGN
$DER.goverNordic_g09.waterFlow.y = goverNordic_g09.waterFlow.k * goverNordic_g09.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* der(goverNordic_g09.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2575]] /* goverNordic_g09.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2077]] /* goverNordic_g09.dH.y variable */));
  threadData->lastEquationSolved = 6487;
}

/*
equation index: 6488
type: SIMPLE_ASSIGN
vrNordic_g09.timer.y = vrNordic_g09.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4830]] /* vrNordic_g09.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6488;
}

/*
equation index: 6489
type: SIMPLE_ASSIGN
$DER.vrNordic_g09.timer.y = if vrNordic_g09.timer.y < vrNordic_g09.timer.outMin and vrNordic_g09.timer.k * vrNordic_g09.overExcitationLimitation.y < 0.0 or vrNordic_g09.timer.y > vrNordic_g09.timer.outMax and vrNordic_g09.timer.k * vrNordic_g09.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g09.timer.k * vrNordic_g09.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6489};
  modelica_boolean tmp2017;
  modelica_boolean tmp2018;
  modelica_boolean tmp2019;
  modelica_boolean tmp2020;
  tmp2017 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4829]] /* vrNordic_g09.timer.outMin PARAM */));
  tmp2018 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)),0.0);
  tmp2019 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4828]] /* vrNordic_g09.timer.outMax PARAM */));
  tmp2020 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* der(vrNordic_g09.timer.y) STATE_DER */) = (((tmp2017 && tmp2018) || (tmp2019 && tmp2020))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6489;
}

/*
equation index: 6490
type: SIMPLE_ASSIGN
vrNordic_g09.greaterEqualThreshold.y = vrNordic_g09.timer.y >= vrNordic_g09.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6490};
  modelica_boolean tmp2021;
  tmp2021 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4772]] /* vrNordic_g09.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1039]] /* vrNordic_g09.greaterEqualThreshold.y DISCRETE */) = tmp2021;
  threadData->lastEquationSolved = 6490;
}

/*
equation index: 6491
type: SIMPLE_ASSIGN
vrNordic_g09.switch.y = if vrNordic_g09.greaterEqualThreshold.y then vrNordic_g09.gain1.y else vrNordic_g09.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3660]] /* vrNordic_g09.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1039]] /* vrNordic_g09.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3647]] /* vrNordic_g09.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */));
  threadData->lastEquationSolved = 6491;
}

/*
equation index: 6492
type: SIMPLE_ASSIGN
vrNordic_g09.min1.y = if vrNordic_g09.switch.y < vrNordic_g09.add.y then vrNordic_g09.switch.y else vrNordic_g09.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6492};
  modelica_boolean tmp2022;
  tmp2022 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3660]] /* vrNordic_g09.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3658]] /* vrNordic_g09.min1.y variable */) = (tmp2022?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3660]] /* vrNordic_g09.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */));
  threadData->lastEquationSolved = 6492;
}

/*
equation index: 6493
type: SIMPLE_ASSIGN
vrNordic_g09.kMulDU.y = vrNordic_g09.kMulDU.k * vrNordic_g09.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6493};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3648]] /* vrNordic_g09.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4773]] /* vrNordic_g09.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3658]] /* vrNordic_g09.min1.y variable */));
  threadData->lastEquationSolved = 6493;
}

/*
equation index: 6494
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.y = (vrNordic_g09.leadLag.bb[2] - vrNordic_g09.leadLag.d * vrNordic_g09.leadLag.a[2]) * vrNordic_g09.leadLag.x[1] + vrNordic_g09.leadLag.d * vrNordic_g09.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6494};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3650]] /* vrNordic_g09.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4782]] /* vrNordic_g09.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4783]] /* vrNordic_g09.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4777]] /* vrNordic_g09.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3649]] /* vrNordic_g09.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4783]] /* vrNordic_g09.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3648]] /* vrNordic_g09.kMulDU.y variable */));
  threadData->lastEquationSolved = 6494;
}

/*
equation index: 6495
type: SIMPLE_ASSIGN
$DER.vrNordic_g09.leadLag.x_scaled[1] = (vrNordic_g09.leadLag.a_end * vrNordic_g09.kMulDU.y - vrNordic_g09.leadLag.a[2] * vrNordic_g09.leadLag.x_scaled[1]) / vrNordic_g09.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6495};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* der(vrNordic_g09.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4778]] /* vrNordic_g09.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3648]] /* vrNordic_g09.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4777]] /* vrNordic_g09.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* vrNordic_g09.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4776]] /* vrNordic_g09.leadLag.a[1] PARAM */),"vrNordic_g09.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6495;
}

/*
equation index: 6496
type: SIMPLE_ASSIGN
vrNordic_g09.limIntegrator.y = vrNordic_g09.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6496};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4816]] /* vrNordic_g09.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6496;
}

/*
equation index: 6497
type: SIMPLE_ASSIGN
vrNordic_g09.feedback1.y = vrNordic_g09.leadLag.y - vrNordic_g09.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3645]] /* vrNordic_g09.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3650]] /* vrNordic_g09.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6497;
}

/*
equation index: 6498
type: SIMPLE_ASSIGN
vrNordic_g09.gain.y = vrNordic_g09.gain.k * vrNordic_g09.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6498};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4770]] /* vrNordic_g09.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3645]] /* vrNordic_g09.feedback1.y variable */));
  threadData->lastEquationSolved = 6498;
}

/*
equation index: 6499
type: SIMPLE_ASSIGN
$DER.vrNordic_g09.limIntegrator.y = if vrNordic_g09.limIntegrator.y < vrNordic_g09.limIntegrator.outMin and vrNordic_g09.limIntegrator.k * vrNordic_g09.gain.y < 0.0 or vrNordic_g09.limIntegrator.y > vrNordic_g09.limIntegrator.outMax and vrNordic_g09.limIntegrator.k * vrNordic_g09.gain.y > 0.0 then 0.0 else vrNordic_g09.limIntegrator.k * vrNordic_g09.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6499};
  modelica_boolean tmp2023;
  modelica_boolean tmp2024;
  modelica_boolean tmp2025;
  modelica_boolean tmp2026;
  tmp2023 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4815]] /* vrNordic_g09.limIntegrator.outMin PARAM */));
  tmp2024 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)),0.0);
  tmp2025 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4814]] /* vrNordic_g09.limIntegrator.outMax PARAM */));
  tmp2026 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* der(vrNordic_g09.limIntegrator.y) STATE_DER */) = (((tmp2023 && tmp2024) || (tmp2025 && tmp2026))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)));
  threadData->lastEquationSolved = 6499;
}

/*
equation index: 6500
type: SIMPLE_ASSIGN
g09.ufPu = if g09.running.value then vrNordic_g09.limIntegrator.y * g09.Kuf * g09.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1426]] /* g09.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* g09.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6500;
}

/*
equation index: 6501
type: SIMPLE_ASSIGN
$DER.g09.lambdafPu = if g09.running.value then (g09.RfPPu * g09.ifPu - g09.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* der(g09.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* g09.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1426]] /* g09.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6501;
}

/*
equation index: 6502
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limIntegrator.y = goverNordic_g08.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2534]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6502;
}

/*
equation index: 6503
type: SIMPLE_ASSIGN
goverNordic_g08.govInt.y = goverNordic_g08.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* goverNordic_g08.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* goverNordic_g08.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6503;
}

/*
equation index: 6504
type: SIMPLE_ASSIGN
goverNordic_g08.govOut.y = goverNordic_g08.govOut.k1 * goverNordic_g08.govKp.y + goverNordic_g08.govOut.k2 * goverNordic_g08.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6504};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2067]] /* goverNordic_g08.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2522]] /* goverNordic_g08.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2066]] /* goverNordic_g08.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2523]] /* goverNordic_g08.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* goverNordic_g08.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6504;
}

/*
equation index: 6505
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.feedback.y = goverNordic_g08.govOut.y - goverNordic_g08.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2069]] /* goverNordic_g08.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2067]] /* goverNordic_g08.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6505;
}

/*
equation index: 6506
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.gain.y = goverNordic_g08.limRateLimFirstOrder.gain.k * goverNordic_g08.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2070]] /* goverNordic_g08.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2530]] /* goverNordic_g08.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2069]] /* goverNordic_g08.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6506;
}

/*
equation index: 6507
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g08.limRateLimFirstOrder.gain.y > goverNordic_g08.limRateLimFirstOrder.limiter.uMax then goverNordic_g08.limRateLimFirstOrder.limiter.uMax else if goverNordic_g08.limRateLimFirstOrder.gain.y < goverNordic_g08.limRateLimFirstOrder.limiter.uMin then goverNordic_g08.limRateLimFirstOrder.limiter.uMin else goverNordic_g08.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6507};
  modelica_boolean tmp2027;
  modelica_boolean tmp2028;
  modelica_boolean tmp2029;
  modelica_real tmp2030;
  tmp2027 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2070]] /* goverNordic_g08.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp2029 = (modelica_boolean)tmp2027;
  if(tmp2029)
  {
    tmp2030 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp2028 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2070]] /* goverNordic_g08.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2536]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp2030 = (tmp2028?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2536]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2070]] /* goverNordic_g08.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */) = tmp2030;
  threadData->lastEquationSolved = 6507;
}

/*
equation index: 6508
type: SIMPLE_ASSIGN
$DER.goverNordic_g08.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g08.limRateLimFirstOrder.limIntegrator.y < goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g08.limRateLimFirstOrder.limIntegrator.k * goverNordic_g08.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g08.limRateLimFirstOrder.limIntegrator.y > goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g08.limRateLimFirstOrder.limIntegrator.k * goverNordic_g08.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g08.limRateLimFirstOrder.limIntegrator.k * goverNordic_g08.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6508};
  modelica_boolean tmp2031;
  modelica_boolean tmp2032;
  modelica_boolean tmp2033;
  modelica_boolean tmp2034;
  tmp2031 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp2032 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp2033 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp2034 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(goverNordic_g08.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp2031 && tmp2032) || (tmp2033 && tmp2034))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6508;
}

/*
equation index: 6509
type: SIMPLE_ASSIGN
goverNordic_g08.waterFlow.y = goverNordic_g08.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* goverNordic_g08.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2540]] /* goverNordic_g08.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6509;
}

/*
equation index: 6510
type: SIMPLE_ASSIGN
goverNordic_g08.flowDivGateOpening.y = goverNordic_g08.waterFlow.y / goverNordic_g08.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2063]] /* goverNordic_g08.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* goverNordic_g08.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g08.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6510;
}

/*
equation index: 6511
type: SIMPLE_ASSIGN
goverNordic_g08.headWater.y = goverNordic_g08.flowDivGateOpening.y ^ goverNordic_g08.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6511};
  modelica_real tmp2035;
  modelica_real tmp2036;
  modelica_real tmp2037;
  modelica_real tmp2038;
  modelica_real tmp2039;
  modelica_real tmp2040;
  modelica_real tmp2041;
  tmp2035 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2063]] /* goverNordic_g08.flowDivGateOpening.y variable */);
  tmp2036 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2524]] /* goverNordic_g08.headWater.N PARAM */);
  if(tmp2035 < 0.0 && tmp2036 != 0.0)
  {
    tmp2038 = modf(tmp2036, &tmp2039);
    
    if(tmp2038 > 0.5)
    {
      tmp2038 -= 1.0;
      tmp2039 += 1.0;
    }
    else if(tmp2038 < -0.5)
    {
      tmp2038 += 1.0;
      tmp2039 -= 1.0;
    }
    
    if(fabs(tmp2038) < 1e-10)
      tmp2037 = pow(tmp2035, tmp2039);
    else
    {
      tmp2041 = modf(1.0/tmp2036, &tmp2040);
      if(tmp2041 > 0.5)
      {
        tmp2041 -= 1.0;
        tmp2040 += 1.0;
      }
      else if(tmp2041 < -0.5)
      {
        tmp2041 += 1.0;
        tmp2040 -= 1.0;
      }
      if(fabs(tmp2041) < 1e-10 && ((unsigned long)tmp2040 & 1))
      {
        tmp2037 = -pow(-tmp2035, tmp2038)*pow(tmp2035, tmp2039);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2035, tmp2036);
      }
    }
  }
  else
  {
    tmp2037 = pow(tmp2035, tmp2036);
  }
  if(isnan(tmp2037) || isinf(tmp2037))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2035, tmp2036);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2068]] /* goverNordic_g08.headWater.y variable */) = tmp2037;
  threadData->lastEquationSolved = 6511;
}

/*
equation index: 6512
type: SIMPLE_ASSIGN
g08.PmPu = goverNordic_g08.waterFlow.y * goverNordic_g08.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* g08.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* goverNordic_g08.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2068]] /* goverNordic_g08.headWater.y variable */));
  threadData->lastEquationSolved = 6512;
}

/*
equation index: 6513
type: SIMPLE_ASSIGN
g08.cmPu = if g08.running.value then g08.PmPu / g08.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1348]] /* g08.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* g08.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */),"g08.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6513;
}

/*
equation index: 6514
type: SIMPLE_ASSIGN
$DER.g08.omegaPu = if g08.running.value then 0.5 * (g08.cmPu * g08.PNomTurb / g08.SNom - g08.DPu * (g08.omegaPu - omegaCOI) - g08.cePu) / g08.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* der(g08.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1348]] /* g08.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* g08.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */),"g08.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[933]] /* g08.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* g08.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[935]] /* g08.H PARAM */),"g08.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6514;
}

/*
equation index: 6515
type: SIMPLE_ASSIGN
goverNordic_g08.dH.y = goverNordic_g08.const2.k - goverNordic_g08.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2059]] /* goverNordic_g08.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2512]] /* goverNordic_g08.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2068]] /* goverNordic_g08.headWater.y variable */);
  threadData->lastEquationSolved = 6515;
}

/*
equation index: 6516
type: SIMPLE_ASSIGN
$DER.goverNordic_g08.waterFlow.y = goverNordic_g08.waterFlow.k * goverNordic_g08.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* der(goverNordic_g08.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2539]] /* goverNordic_g08.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2059]] /* goverNordic_g08.dH.y variable */));
  threadData->lastEquationSolved = 6516;
}

/*
equation index: 6517
type: SIMPLE_ASSIGN
vrNordic_g08.timer.y = vrNordic_g08.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4751]] /* vrNordic_g08.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6517;
}

/*
equation index: 6518
type: SIMPLE_ASSIGN
$DER.vrNordic_g08.timer.y = if vrNordic_g08.timer.y < vrNordic_g08.timer.outMin and vrNordic_g08.timer.k * vrNordic_g08.overExcitationLimitation.y < 0.0 or vrNordic_g08.timer.y > vrNordic_g08.timer.outMax and vrNordic_g08.timer.k * vrNordic_g08.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g08.timer.k * vrNordic_g08.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6518};
  modelica_boolean tmp2042;
  modelica_boolean tmp2043;
  modelica_boolean tmp2044;
  modelica_boolean tmp2045;
  tmp2042 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4750]] /* vrNordic_g08.timer.outMin PARAM */));
  tmp2043 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)),0.0);
  tmp2044 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4749]] /* vrNordic_g08.timer.outMax PARAM */));
  tmp2045 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* der(vrNordic_g08.timer.y) STATE_DER */) = (((tmp2042 && tmp2043) || (tmp2044 && tmp2045))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6518;
}

/*
equation index: 6519
type: SIMPLE_ASSIGN
vrNordic_g08.greaterEqualThreshold.y = vrNordic_g08.timer.y >= vrNordic_g08.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6519};
  modelica_boolean tmp2046;
  tmp2046 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4693]] /* vrNordic_g08.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1036]] /* vrNordic_g08.greaterEqualThreshold.y DISCRETE */) = tmp2046;
  threadData->lastEquationSolved = 6519;
}

/*
equation index: 6520
type: SIMPLE_ASSIGN
vrNordic_g08.switch.y = if vrNordic_g08.greaterEqualThreshold.y then vrNordic_g08.gain1.y else vrNordic_g08.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vrNordic_g08.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1036]] /* vrNordic_g08.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3623]] /* vrNordic_g08.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */));
  threadData->lastEquationSolved = 6520;
}

/*
equation index: 6521
type: SIMPLE_ASSIGN
vrNordic_g08.min1.y = if vrNordic_g08.switch.y < vrNordic_g08.add.y then vrNordic_g08.switch.y else vrNordic_g08.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6521};
  modelica_boolean tmp2047;
  tmp2047 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vrNordic_g08.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3634]] /* vrNordic_g08.min1.y variable */) = (tmp2047?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vrNordic_g08.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */));
  threadData->lastEquationSolved = 6521;
}

/*
equation index: 6522
type: SIMPLE_ASSIGN
vrNordic_g08.kMulDU.y = vrNordic_g08.kMulDU.k * vrNordic_g08.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3624]] /* vrNordic_g08.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4694]] /* vrNordic_g08.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3634]] /* vrNordic_g08.min1.y variable */));
  threadData->lastEquationSolved = 6522;
}

/*
equation index: 6523
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.y = (vrNordic_g08.leadLag.bb[2] - vrNordic_g08.leadLag.d * vrNordic_g08.leadLag.a[2]) * vrNordic_g08.leadLag.x[1] + vrNordic_g08.leadLag.d * vrNordic_g08.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3626]] /* vrNordic_g08.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4703]] /* vrNordic_g08.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4704]] /* vrNordic_g08.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4698]] /* vrNordic_g08.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3625]] /* vrNordic_g08.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4704]] /* vrNordic_g08.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3624]] /* vrNordic_g08.kMulDU.y variable */));
  threadData->lastEquationSolved = 6523;
}

/*
equation index: 6524
type: SIMPLE_ASSIGN
$DER.vrNordic_g08.leadLag.x_scaled[1] = (vrNordic_g08.leadLag.a_end * vrNordic_g08.kMulDU.y - vrNordic_g08.leadLag.a[2] * vrNordic_g08.leadLag.x_scaled[1]) / vrNordic_g08.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* der(vrNordic_g08.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4699]] /* vrNordic_g08.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3624]] /* vrNordic_g08.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4698]] /* vrNordic_g08.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* vrNordic_g08.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4697]] /* vrNordic_g08.leadLag.a[1] PARAM */),"vrNordic_g08.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6524;
}

/*
equation index: 6525
type: SIMPLE_ASSIGN
vrNordic_g08.limIntegrator.y = vrNordic_g08.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4737]] /* vrNordic_g08.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6525;
}

/*
equation index: 6526
type: SIMPLE_ASSIGN
vrNordic_g08.feedback1.y = vrNordic_g08.leadLag.y - vrNordic_g08.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3621]] /* vrNordic_g08.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3626]] /* vrNordic_g08.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6526;
}

/*
equation index: 6527
type: SIMPLE_ASSIGN
vrNordic_g08.gain.y = vrNordic_g08.gain.k * vrNordic_g08.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4691]] /* vrNordic_g08.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3621]] /* vrNordic_g08.feedback1.y variable */));
  threadData->lastEquationSolved = 6527;
}

/*
equation index: 6528
type: SIMPLE_ASSIGN
$DER.vrNordic_g08.limIntegrator.y = if vrNordic_g08.limIntegrator.y < vrNordic_g08.limIntegrator.outMin and vrNordic_g08.limIntegrator.k * vrNordic_g08.gain.y < 0.0 or vrNordic_g08.limIntegrator.y > vrNordic_g08.limIntegrator.outMax and vrNordic_g08.limIntegrator.k * vrNordic_g08.gain.y > 0.0 then 0.0 else vrNordic_g08.limIntegrator.k * vrNordic_g08.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6528};
  modelica_boolean tmp2048;
  modelica_boolean tmp2049;
  modelica_boolean tmp2050;
  modelica_boolean tmp2051;
  tmp2048 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4736]] /* vrNordic_g08.limIntegrator.outMin PARAM */));
  tmp2049 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)),0.0);
  tmp2050 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4735]] /* vrNordic_g08.limIntegrator.outMax PARAM */));
  tmp2051 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* der(vrNordic_g08.limIntegrator.y) STATE_DER */) = (((tmp2048 && tmp2049) || (tmp2050 && tmp2051))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)));
  threadData->lastEquationSolved = 6528;
}

/*
equation index: 6529
type: SIMPLE_ASSIGN
g08.ufPu = if g08.running.value then vrNordic_g08.limIntegrator.y * g08.Kuf * g08.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1380]] /* g08.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* g08.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6529;
}

/*
equation index: 6530
type: SIMPLE_ASSIGN
$DER.g08.lambdafPu = if g08.running.value then (g08.RfPPu * g08.ifPu - g08.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* der(g08.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* g08.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1380]] /* g08.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6530;
}

/*
equation index: 6531
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limIntegrator.y = goverNordic_g07.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2498]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6531;
}

/*
equation index: 6532
type: SIMPLE_ASSIGN
goverNordic_g07.govInt.y = goverNordic_g07.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* goverNordic_g07.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2483]] /* goverNordic_g07.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6532;
}

/*
equation index: 6533
type: SIMPLE_ASSIGN
goverNordic_g07.govOut.y = goverNordic_g07.govOut.k1 * goverNordic_g07.govKp.y + goverNordic_g07.govOut.k2 * goverNordic_g07.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2049]] /* goverNordic_g07.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2486]] /* goverNordic_g07.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2048]] /* goverNordic_g07.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2487]] /* goverNordic_g07.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* goverNordic_g07.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6533;
}

/*
equation index: 6534
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.feedback.y = goverNordic_g07.govOut.y - goverNordic_g07.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2051]] /* goverNordic_g07.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2049]] /* goverNordic_g07.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6534;
}

/*
equation index: 6535
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.gain.y = goverNordic_g07.limRateLimFirstOrder.gain.k * goverNordic_g07.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2052]] /* goverNordic_g07.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2494]] /* goverNordic_g07.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2051]] /* goverNordic_g07.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6535;
}

/*
equation index: 6536
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g07.limRateLimFirstOrder.gain.y > goverNordic_g07.limRateLimFirstOrder.limiter.uMax then goverNordic_g07.limRateLimFirstOrder.limiter.uMax else if goverNordic_g07.limRateLimFirstOrder.gain.y < goverNordic_g07.limRateLimFirstOrder.limiter.uMin then goverNordic_g07.limRateLimFirstOrder.limiter.uMin else goverNordic_g07.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6536};
  modelica_boolean tmp2052;
  modelica_boolean tmp2053;
  modelica_boolean tmp2054;
  modelica_real tmp2055;
  tmp2052 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2052]] /* goverNordic_g07.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp2054 = (modelica_boolean)tmp2052;
  if(tmp2054)
  {
    tmp2055 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp2053 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2052]] /* goverNordic_g07.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp2055 = (tmp2053?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2052]] /* goverNordic_g07.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */) = tmp2055;
  threadData->lastEquationSolved = 6536;
}

/*
equation index: 6537
type: SIMPLE_ASSIGN
$DER.goverNordic_g07.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g07.limRateLimFirstOrder.limIntegrator.y < goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g07.limRateLimFirstOrder.limIntegrator.k * goverNordic_g07.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g07.limRateLimFirstOrder.limIntegrator.y > goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g07.limRateLimFirstOrder.limIntegrator.k * goverNordic_g07.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g07.limRateLimFirstOrder.limIntegrator.k * goverNordic_g07.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6537};
  modelica_boolean tmp2056;
  modelica_boolean tmp2057;
  modelica_boolean tmp2058;
  modelica_boolean tmp2059;
  tmp2056 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2497]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp2057 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp2058 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp2059 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* der(goverNordic_g07.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp2056 && tmp2057) || (tmp2058 && tmp2059))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6537;
}

/*
equation index: 6538
type: SIMPLE_ASSIGN
goverNordic_g07.waterFlow.y = goverNordic_g07.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* goverNordic_g07.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2504]] /* goverNordic_g07.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6538;
}

/*
equation index: 6539
type: SIMPLE_ASSIGN
goverNordic_g07.flowDivGateOpening.y = goverNordic_g07.waterFlow.y / goverNordic_g07.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2045]] /* goverNordic_g07.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* goverNordic_g07.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g07.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6539;
}

/*
equation index: 6540
type: SIMPLE_ASSIGN
goverNordic_g07.headWater.y = goverNordic_g07.flowDivGateOpening.y ^ goverNordic_g07.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6540};
  modelica_real tmp2060;
  modelica_real tmp2061;
  modelica_real tmp2062;
  modelica_real tmp2063;
  modelica_real tmp2064;
  modelica_real tmp2065;
  modelica_real tmp2066;
  tmp2060 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2045]] /* goverNordic_g07.flowDivGateOpening.y variable */);
  tmp2061 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2488]] /* goverNordic_g07.headWater.N PARAM */);
  if(tmp2060 < 0.0 && tmp2061 != 0.0)
  {
    tmp2063 = modf(tmp2061, &tmp2064);
    
    if(tmp2063 > 0.5)
    {
      tmp2063 -= 1.0;
      tmp2064 += 1.0;
    }
    else if(tmp2063 < -0.5)
    {
      tmp2063 += 1.0;
      tmp2064 -= 1.0;
    }
    
    if(fabs(tmp2063) < 1e-10)
      tmp2062 = pow(tmp2060, tmp2064);
    else
    {
      tmp2066 = modf(1.0/tmp2061, &tmp2065);
      if(tmp2066 > 0.5)
      {
        tmp2066 -= 1.0;
        tmp2065 += 1.0;
      }
      else if(tmp2066 < -0.5)
      {
        tmp2066 += 1.0;
        tmp2065 -= 1.0;
      }
      if(fabs(tmp2066) < 1e-10 && ((unsigned long)tmp2065 & 1))
      {
        tmp2062 = -pow(-tmp2060, tmp2063)*pow(tmp2060, tmp2064);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2060, tmp2061);
      }
    }
  }
  else
  {
    tmp2062 = pow(tmp2060, tmp2061);
  }
  if(isnan(tmp2062) || isinf(tmp2062))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2060, tmp2061);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2050]] /* goverNordic_g07.headWater.y variable */) = tmp2062;
  threadData->lastEquationSolved = 6540;
}

/*
equation index: 6541
type: SIMPLE_ASSIGN
g07.PmPu = goverNordic_g07.waterFlow.y * goverNordic_g07.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1295]] /* g07.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* goverNordic_g07.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2050]] /* goverNordic_g07.headWater.y variable */));
  threadData->lastEquationSolved = 6541;
}

/*
equation index: 6542
type: SIMPLE_ASSIGN
g07.cmPu = if g07.running.value then g07.PmPu / g07.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1302]] /* g07.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1295]] /* g07.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */),"g07.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6542;
}

/*
equation index: 6543
type: SIMPLE_ASSIGN
$DER.g07.omegaPu = if g07.running.value then 0.5 * (g07.cmPu * g07.PNomTurb / g07.SNom - g07.DPu * (g07.omegaPu - omegaCOI) - g07.cePu) / g07.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6543};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* der(g07.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1302]] /* g07.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[868]] /* g07.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */),"g07.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* g07.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* g07.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* g07.H PARAM */),"g07.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6543;
}

/*
equation index: 6544
type: SIMPLE_ASSIGN
goverNordic_g07.dH.y = goverNordic_g07.const2.k - goverNordic_g07.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6544};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2041]] /* goverNordic_g07.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2476]] /* goverNordic_g07.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2050]] /* goverNordic_g07.headWater.y variable */);
  threadData->lastEquationSolved = 6544;
}

/*
equation index: 6545
type: SIMPLE_ASSIGN
$DER.goverNordic_g07.waterFlow.y = goverNordic_g07.waterFlow.k * goverNordic_g07.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[467]] /* der(goverNordic_g07.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2503]] /* goverNordic_g07.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2041]] /* goverNordic_g07.dH.y variable */));
  threadData->lastEquationSolved = 6545;
}

/*
equation index: 6546
type: SIMPLE_ASSIGN
vrNordic_g07.timer.y = vrNordic_g07.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4672]] /* vrNordic_g07.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6546;
}

/*
equation index: 6547
type: SIMPLE_ASSIGN
$DER.vrNordic_g07.timer.y = if vrNordic_g07.timer.y < vrNordic_g07.timer.outMin and vrNordic_g07.timer.k * vrNordic_g07.overExcitationLimitation.y < 0.0 or vrNordic_g07.timer.y > vrNordic_g07.timer.outMax and vrNordic_g07.timer.k * vrNordic_g07.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g07.timer.k * vrNordic_g07.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6547};
  modelica_boolean tmp2067;
  modelica_boolean tmp2068;
  modelica_boolean tmp2069;
  modelica_boolean tmp2070;
  tmp2067 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4671]] /* vrNordic_g07.timer.outMin PARAM */));
  tmp2068 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)),0.0);
  tmp2069 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4670]] /* vrNordic_g07.timer.outMax PARAM */));
  tmp2070 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* der(vrNordic_g07.timer.y) STATE_DER */) = (((tmp2067 && tmp2068) || (tmp2069 && tmp2070))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6547;
}

/*
equation index: 6548
type: SIMPLE_ASSIGN
vrNordic_g07.greaterEqualThreshold.y = vrNordic_g07.timer.y >= vrNordic_g07.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6548};
  modelica_boolean tmp2071;
  tmp2071 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4614]] /* vrNordic_g07.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1033]] /* vrNordic_g07.greaterEqualThreshold.y DISCRETE */) = tmp2071;
  threadData->lastEquationSolved = 6548;
}

/*
equation index: 6549
type: SIMPLE_ASSIGN
vrNordic_g07.switch.y = if vrNordic_g07.greaterEqualThreshold.y then vrNordic_g07.gain1.y else vrNordic_g07.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6549};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3612]] /* vrNordic_g07.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1033]] /* vrNordic_g07.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3599]] /* vrNordic_g07.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */));
  threadData->lastEquationSolved = 6549;
}

/*
equation index: 6550
type: SIMPLE_ASSIGN
vrNordic_g07.min1.y = if vrNordic_g07.switch.y < vrNordic_g07.add.y then vrNordic_g07.switch.y else vrNordic_g07.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6550};
  modelica_boolean tmp2072;
  tmp2072 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3612]] /* vrNordic_g07.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3610]] /* vrNordic_g07.min1.y variable */) = (tmp2072?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3612]] /* vrNordic_g07.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */));
  threadData->lastEquationSolved = 6550;
}

/*
equation index: 6551
type: SIMPLE_ASSIGN
vrNordic_g07.kMulDU.y = vrNordic_g07.kMulDU.k * vrNordic_g07.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3600]] /* vrNordic_g07.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4615]] /* vrNordic_g07.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3610]] /* vrNordic_g07.min1.y variable */));
  threadData->lastEquationSolved = 6551;
}

/*
equation index: 6552
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.y = (vrNordic_g07.leadLag.bb[2] - vrNordic_g07.leadLag.d * vrNordic_g07.leadLag.a[2]) * vrNordic_g07.leadLag.x[1] + vrNordic_g07.leadLag.d * vrNordic_g07.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3602]] /* vrNordic_g07.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4624]] /* vrNordic_g07.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4625]] /* vrNordic_g07.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4619]] /* vrNordic_g07.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3601]] /* vrNordic_g07.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4625]] /* vrNordic_g07.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3600]] /* vrNordic_g07.kMulDU.y variable */));
  threadData->lastEquationSolved = 6552;
}

/*
equation index: 6553
type: SIMPLE_ASSIGN
$DER.vrNordic_g07.leadLag.x_scaled[1] = (vrNordic_g07.leadLag.a_end * vrNordic_g07.kMulDU.y - vrNordic_g07.leadLag.a[2] * vrNordic_g07.leadLag.x_scaled[1]) / vrNordic_g07.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* der(vrNordic_g07.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4620]] /* vrNordic_g07.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3600]] /* vrNordic_g07.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4619]] /* vrNordic_g07.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* vrNordic_g07.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4618]] /* vrNordic_g07.leadLag.a[1] PARAM */),"vrNordic_g07.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6553;
}

/*
equation index: 6554
type: SIMPLE_ASSIGN
vrNordic_g07.limIntegrator.y = vrNordic_g07.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4658]] /* vrNordic_g07.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6554;
}

/*
equation index: 6555
type: SIMPLE_ASSIGN
vrNordic_g07.feedback1.y = vrNordic_g07.leadLag.y - vrNordic_g07.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3597]] /* vrNordic_g07.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3602]] /* vrNordic_g07.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6555;
}

/*
equation index: 6556
type: SIMPLE_ASSIGN
vrNordic_g07.gain.y = vrNordic_g07.gain.k * vrNordic_g07.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4612]] /* vrNordic_g07.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3597]] /* vrNordic_g07.feedback1.y variable */));
  threadData->lastEquationSolved = 6556;
}

/*
equation index: 6557
type: SIMPLE_ASSIGN
$DER.vrNordic_g07.limIntegrator.y = if vrNordic_g07.limIntegrator.y < vrNordic_g07.limIntegrator.outMin and vrNordic_g07.limIntegrator.k * vrNordic_g07.gain.y < 0.0 or vrNordic_g07.limIntegrator.y > vrNordic_g07.limIntegrator.outMax and vrNordic_g07.limIntegrator.k * vrNordic_g07.gain.y > 0.0 then 0.0 else vrNordic_g07.limIntegrator.k * vrNordic_g07.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6557};
  modelica_boolean tmp2073;
  modelica_boolean tmp2074;
  modelica_boolean tmp2075;
  modelica_boolean tmp2076;
  tmp2073 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4657]] /* vrNordic_g07.limIntegrator.outMin PARAM */));
  tmp2074 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)),0.0);
  tmp2075 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4656]] /* vrNordic_g07.limIntegrator.outMax PARAM */));
  tmp2076 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* der(vrNordic_g07.limIntegrator.y) STATE_DER */) = (((tmp2073 && tmp2074) || (tmp2075 && tmp2076))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)));
  threadData->lastEquationSolved = 6557;
}

/*
equation index: 6558
type: SIMPLE_ASSIGN
g07.ufPu = if g07.running.value then vrNordic_g07.limIntegrator.y * g07.Kuf * g07.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1334]] /* g07.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* g07.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6558;
}

/*
equation index: 6559
type: SIMPLE_ASSIGN
$DER.g07.lambdafPu = if g07.running.value then (g07.RfPPu * g07.ifPu - g07.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* der(g07.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* g07.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1334]] /* g07.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6559;
}

/*
equation index: 6560
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limIntegrator.y = goverNordic_g06.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2462]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6560;
}

/*
equation index: 6561
type: SIMPLE_ASSIGN
goverNordic_g06.govInt.y = goverNordic_g06.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* goverNordic_g06.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2447]] /* goverNordic_g06.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6561;
}

/*
equation index: 6562
type: SIMPLE_ASSIGN
goverNordic_g06.govOut.y = goverNordic_g06.govOut.k1 * goverNordic_g06.govKp.y + goverNordic_g06.govOut.k2 * goverNordic_g06.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2031]] /* goverNordic_g06.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2450]] /* goverNordic_g06.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2030]] /* goverNordic_g06.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2451]] /* goverNordic_g06.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* goverNordic_g06.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6562;
}

/*
equation index: 6563
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.feedback.y = goverNordic_g06.govOut.y - goverNordic_g06.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2033]] /* goverNordic_g06.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2031]] /* goverNordic_g06.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6563;
}

/*
equation index: 6564
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.gain.y = goverNordic_g06.limRateLimFirstOrder.gain.k * goverNordic_g06.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2034]] /* goverNordic_g06.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2458]] /* goverNordic_g06.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2033]] /* goverNordic_g06.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6564;
}

/*
equation index: 6565
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g06.limRateLimFirstOrder.gain.y > goverNordic_g06.limRateLimFirstOrder.limiter.uMax then goverNordic_g06.limRateLimFirstOrder.limiter.uMax else if goverNordic_g06.limRateLimFirstOrder.gain.y < goverNordic_g06.limRateLimFirstOrder.limiter.uMin then goverNordic_g06.limRateLimFirstOrder.limiter.uMin else goverNordic_g06.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6565};
  modelica_boolean tmp2077;
  modelica_boolean tmp2078;
  modelica_boolean tmp2079;
  modelica_real tmp2080;
  tmp2077 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2034]] /* goverNordic_g06.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp2079 = (modelica_boolean)tmp2077;
  if(tmp2079)
  {
    tmp2080 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp2078 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2034]] /* goverNordic_g06.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp2080 = (tmp2078?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2034]] /* goverNordic_g06.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */) = tmp2080;
  threadData->lastEquationSolved = 6565;
}

/*
equation index: 6566
type: SIMPLE_ASSIGN
$DER.goverNordic_g06.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g06.limRateLimFirstOrder.limIntegrator.y < goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g06.limRateLimFirstOrder.limIntegrator.k * goverNordic_g06.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g06.limRateLimFirstOrder.limIntegrator.y > goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g06.limRateLimFirstOrder.limIntegrator.k * goverNordic_g06.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g06.limRateLimFirstOrder.limIntegrator.k * goverNordic_g06.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6566};
  modelica_boolean tmp2081;
  modelica_boolean tmp2082;
  modelica_boolean tmp2083;
  modelica_boolean tmp2084;
  tmp2081 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2461]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp2082 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp2083 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2460]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp2084 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(goverNordic_g06.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp2081 && tmp2082) || (tmp2083 && tmp2084))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6566;
}

/*
equation index: 6567
type: SIMPLE_ASSIGN
goverNordic_g06.waterFlow.y = goverNordic_g06.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* goverNordic_g06.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2468]] /* goverNordic_g06.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6567;
}

/*
equation index: 6568
type: SIMPLE_ASSIGN
goverNordic_g06.flowDivGateOpening.y = goverNordic_g06.waterFlow.y / goverNordic_g06.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2027]] /* goverNordic_g06.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* goverNordic_g06.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g06.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6568;
}

/*
equation index: 6569
type: SIMPLE_ASSIGN
goverNordic_g06.headWater.y = goverNordic_g06.flowDivGateOpening.y ^ goverNordic_g06.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6569};
  modelica_real tmp2085;
  modelica_real tmp2086;
  modelica_real tmp2087;
  modelica_real tmp2088;
  modelica_real tmp2089;
  modelica_real tmp2090;
  modelica_real tmp2091;
  tmp2085 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2027]] /* goverNordic_g06.flowDivGateOpening.y variable */);
  tmp2086 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2452]] /* goverNordic_g06.headWater.N PARAM */);
  if(tmp2085 < 0.0 && tmp2086 != 0.0)
  {
    tmp2088 = modf(tmp2086, &tmp2089);
    
    if(tmp2088 > 0.5)
    {
      tmp2088 -= 1.0;
      tmp2089 += 1.0;
    }
    else if(tmp2088 < -0.5)
    {
      tmp2088 += 1.0;
      tmp2089 -= 1.0;
    }
    
    if(fabs(tmp2088) < 1e-10)
      tmp2087 = pow(tmp2085, tmp2089);
    else
    {
      tmp2091 = modf(1.0/tmp2086, &tmp2090);
      if(tmp2091 > 0.5)
      {
        tmp2091 -= 1.0;
        tmp2090 += 1.0;
      }
      else if(tmp2091 < -0.5)
      {
        tmp2091 += 1.0;
        tmp2090 -= 1.0;
      }
      if(fabs(tmp2091) < 1e-10 && ((unsigned long)tmp2090 & 1))
      {
        tmp2087 = -pow(-tmp2085, tmp2088)*pow(tmp2085, tmp2089);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2085, tmp2086);
      }
    }
  }
  else
  {
    tmp2087 = pow(tmp2085, tmp2086);
  }
  if(isnan(tmp2087) || isinf(tmp2087))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2085, tmp2086);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2032]] /* goverNordic_g06.headWater.y variable */) = tmp2087;
  threadData->lastEquationSolved = 6569;
}

/*
equation index: 6570
type: SIMPLE_ASSIGN
g06.PmPu = goverNordic_g06.waterFlow.y * goverNordic_g06.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* g06.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* goverNordic_g06.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2032]] /* goverNordic_g06.headWater.y variable */));
  threadData->lastEquationSolved = 6570;
}

/*
equation index: 6571
type: SIMPLE_ASSIGN
g06.cmPu = if g06.running.value then g06.PmPu / g06.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* g06.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* g06.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */),"g06.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6571;
}

/*
equation index: 6572
type: SIMPLE_ASSIGN
$DER.g06.omegaPu = if g06.running.value then 0.5 * (g06.cmPu * g06.PNomTurb / g06.SNom - g06.DPu * (g06.omegaPu - omegaCOI) - g06.cePu) / g06.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* der(g06.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* g06.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* g06.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */),"g06.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* g06.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* g06.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* g06.H PARAM */),"g06.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6572;
}

/*
equation index: 6573
type: SIMPLE_ASSIGN
goverNordic_g06.dH.y = goverNordic_g06.const2.k - goverNordic_g06.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2023]] /* goverNordic_g06.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2440]] /* goverNordic_g06.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2032]] /* goverNordic_g06.headWater.y variable */);
  threadData->lastEquationSolved = 6573;
}

/*
equation index: 6574
type: SIMPLE_ASSIGN
$DER.goverNordic_g06.waterFlow.y = goverNordic_g06.waterFlow.k * goverNordic_g06.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* der(goverNordic_g06.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2467]] /* goverNordic_g06.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2023]] /* goverNordic_g06.dH.y variable */));
  threadData->lastEquationSolved = 6574;
}

/*
equation index: 6575
type: SIMPLE_ASSIGN
vrNordic_g06.timer.y = vrNordic_g06.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4593]] /* vrNordic_g06.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6575;
}

/*
equation index: 6576
type: SIMPLE_ASSIGN
$DER.vrNordic_g06.timer.y = if vrNordic_g06.timer.y < vrNordic_g06.timer.outMin and vrNordic_g06.timer.k * vrNordic_g06.overExcitationLimitation.y < 0.0 or vrNordic_g06.timer.y > vrNordic_g06.timer.outMax and vrNordic_g06.timer.k * vrNordic_g06.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g06.timer.k * vrNordic_g06.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6576};
  modelica_boolean tmp2092;
  modelica_boolean tmp2093;
  modelica_boolean tmp2094;
  modelica_boolean tmp2095;
  tmp2092 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4592]] /* vrNordic_g06.timer.outMin PARAM */));
  tmp2093 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)),0.0);
  tmp2094 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4591]] /* vrNordic_g06.timer.outMax PARAM */));
  tmp2095 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* der(vrNordic_g06.timer.y) STATE_DER */) = (((tmp2092 && tmp2093) || (tmp2094 && tmp2095))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6576;
}

/*
equation index: 6577
type: SIMPLE_ASSIGN
vrNordic_g06.greaterEqualThreshold.y = vrNordic_g06.timer.y >= vrNordic_g06.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6577};
  modelica_boolean tmp2096;
  tmp2096 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4535]] /* vrNordic_g06.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1030]] /* vrNordic_g06.greaterEqualThreshold.y DISCRETE */) = tmp2096;
  threadData->lastEquationSolved = 6577;
}

/*
equation index: 6578
type: SIMPLE_ASSIGN
vrNordic_g06.switch.y = if vrNordic_g06.greaterEqualThreshold.y then vrNordic_g06.gain1.y else vrNordic_g06.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3588]] /* vrNordic_g06.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1030]] /* vrNordic_g06.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3575]] /* vrNordic_g06.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */));
  threadData->lastEquationSolved = 6578;
}

/*
equation index: 6579
type: SIMPLE_ASSIGN
vrNordic_g06.min1.y = if vrNordic_g06.switch.y < vrNordic_g06.add.y then vrNordic_g06.switch.y else vrNordic_g06.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6579};
  modelica_boolean tmp2097;
  tmp2097 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3588]] /* vrNordic_g06.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3586]] /* vrNordic_g06.min1.y variable */) = (tmp2097?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3588]] /* vrNordic_g06.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */));
  threadData->lastEquationSolved = 6579;
}

/*
equation index: 6580
type: SIMPLE_ASSIGN
vrNordic_g06.kMulDU.y = vrNordic_g06.kMulDU.k * vrNordic_g06.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3576]] /* vrNordic_g06.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4536]] /* vrNordic_g06.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3586]] /* vrNordic_g06.min1.y variable */));
  threadData->lastEquationSolved = 6580;
}

/*
equation index: 6581
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.y = (vrNordic_g06.leadLag.bb[2] - vrNordic_g06.leadLag.d * vrNordic_g06.leadLag.a[2]) * vrNordic_g06.leadLag.x[1] + vrNordic_g06.leadLag.d * vrNordic_g06.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3578]] /* vrNordic_g06.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4545]] /* vrNordic_g06.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4546]] /* vrNordic_g06.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4540]] /* vrNordic_g06.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3577]] /* vrNordic_g06.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4546]] /* vrNordic_g06.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3576]] /* vrNordic_g06.kMulDU.y variable */));
  threadData->lastEquationSolved = 6581;
}

/*
equation index: 6582
type: SIMPLE_ASSIGN
$DER.vrNordic_g06.leadLag.x_scaled[1] = (vrNordic_g06.leadLag.a_end * vrNordic_g06.kMulDU.y - vrNordic_g06.leadLag.a[2] * vrNordic_g06.leadLag.x_scaled[1]) / vrNordic_g06.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* der(vrNordic_g06.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4541]] /* vrNordic_g06.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3576]] /* vrNordic_g06.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4540]] /* vrNordic_g06.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* vrNordic_g06.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4539]] /* vrNordic_g06.leadLag.a[1] PARAM */),"vrNordic_g06.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6582;
}

/*
equation index: 6583
type: SIMPLE_ASSIGN
vrNordic_g06.limIntegrator.y = vrNordic_g06.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4579]] /* vrNordic_g06.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6583;
}

/*
equation index: 6584
type: SIMPLE_ASSIGN
vrNordic_g06.feedback1.y = vrNordic_g06.leadLag.y - vrNordic_g06.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3573]] /* vrNordic_g06.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3578]] /* vrNordic_g06.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6584;
}

/*
equation index: 6585
type: SIMPLE_ASSIGN
vrNordic_g06.gain.y = vrNordic_g06.gain.k * vrNordic_g06.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6585};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4533]] /* vrNordic_g06.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3573]] /* vrNordic_g06.feedback1.y variable */));
  threadData->lastEquationSolved = 6585;
}

/*
equation index: 6586
type: SIMPLE_ASSIGN
$DER.vrNordic_g06.limIntegrator.y = if vrNordic_g06.limIntegrator.y < vrNordic_g06.limIntegrator.outMin and vrNordic_g06.limIntegrator.k * vrNordic_g06.gain.y < 0.0 or vrNordic_g06.limIntegrator.y > vrNordic_g06.limIntegrator.outMax and vrNordic_g06.limIntegrator.k * vrNordic_g06.gain.y > 0.0 then 0.0 else vrNordic_g06.limIntegrator.k * vrNordic_g06.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6586};
  modelica_boolean tmp2098;
  modelica_boolean tmp2099;
  modelica_boolean tmp2100;
  modelica_boolean tmp2101;
  tmp2098 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4578]] /* vrNordic_g06.limIntegrator.outMin PARAM */));
  tmp2099 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)),0.0);
  tmp2100 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4577]] /* vrNordic_g06.limIntegrator.outMax PARAM */));
  tmp2101 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* der(vrNordic_g06.limIntegrator.y) STATE_DER */) = (((tmp2098 && tmp2099) || (tmp2100 && tmp2101))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)));
  threadData->lastEquationSolved = 6586;
}

/*
equation index: 6587
type: SIMPLE_ASSIGN
g06.ufPu = if g06.running.value then vrNordic_g06.limIntegrator.y * g06.Kuf * g06.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1288]] /* g06.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* g06.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6587;
}

/*
equation index: 6588
type: SIMPLE_ASSIGN
$DER.g06.lambdafPu = if g06.running.value then (g06.RfPPu * g06.ifPu - g06.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* der(g06.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* g06.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1288]] /* g06.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6588;
}

/*
equation index: 6589
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limIntegrator.y = goverNordic_g05.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2426]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6589;
}

/*
equation index: 6590
type: SIMPLE_ASSIGN
goverNordic_g05.govInt.y = goverNordic_g05.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* goverNordic_g05.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2411]] /* goverNordic_g05.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6590;
}

/*
equation index: 6591
type: SIMPLE_ASSIGN
goverNordic_g05.govOut.y = goverNordic_g05.govOut.k1 * goverNordic_g05.govKp.y + goverNordic_g05.govOut.k2 * goverNordic_g05.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2013]] /* goverNordic_g05.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2414]] /* goverNordic_g05.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2012]] /* goverNordic_g05.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2415]] /* goverNordic_g05.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* goverNordic_g05.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6591;
}

/*
equation index: 6592
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.feedback.y = goverNordic_g05.govOut.y - goverNordic_g05.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2015]] /* goverNordic_g05.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2013]] /* goverNordic_g05.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6592;
}

/*
equation index: 6593
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.gain.y = goverNordic_g05.limRateLimFirstOrder.gain.k * goverNordic_g05.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2016]] /* goverNordic_g05.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2422]] /* goverNordic_g05.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2015]] /* goverNordic_g05.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6593;
}

/*
equation index: 6594
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g05.limRateLimFirstOrder.gain.y > goverNordic_g05.limRateLimFirstOrder.limiter.uMax then goverNordic_g05.limRateLimFirstOrder.limiter.uMax else if goverNordic_g05.limRateLimFirstOrder.gain.y < goverNordic_g05.limRateLimFirstOrder.limiter.uMin then goverNordic_g05.limRateLimFirstOrder.limiter.uMin else goverNordic_g05.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6594};
  modelica_boolean tmp2102;
  modelica_boolean tmp2103;
  modelica_boolean tmp2104;
  modelica_real tmp2105;
  tmp2102 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2016]] /* goverNordic_g05.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp2104 = (modelica_boolean)tmp2102;
  if(tmp2104)
  {
    tmp2105 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp2103 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2016]] /* goverNordic_g05.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp2105 = (tmp2103?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2016]] /* goverNordic_g05.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */) = tmp2105;
  threadData->lastEquationSolved = 6594;
}

/*
equation index: 6595
type: SIMPLE_ASSIGN
$DER.goverNordic_g05.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g05.limRateLimFirstOrder.limIntegrator.y < goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g05.limRateLimFirstOrder.limIntegrator.k * goverNordic_g05.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g05.limRateLimFirstOrder.limIntegrator.y > goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g05.limRateLimFirstOrder.limIntegrator.k * goverNordic_g05.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g05.limRateLimFirstOrder.limIntegrator.k * goverNordic_g05.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6595};
  modelica_boolean tmp2106;
  modelica_boolean tmp2107;
  modelica_boolean tmp2108;
  modelica_boolean tmp2109;
  tmp2106 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp2107 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp2108 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp2109 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* der(goverNordic_g05.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp2106 && tmp2107) || (tmp2108 && tmp2109))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6595;
}

/*
equation index: 6596
type: SIMPLE_ASSIGN
goverNordic_g05.waterFlow.y = goverNordic_g05.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* goverNordic_g05.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2432]] /* goverNordic_g05.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6596;
}

/*
equation index: 6597
type: SIMPLE_ASSIGN
goverNordic_g05.flowDivGateOpening.y = goverNordic_g05.waterFlow.y / goverNordic_g05.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2009]] /* goverNordic_g05.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* goverNordic_g05.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g05.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6597;
}

/*
equation index: 6598
type: SIMPLE_ASSIGN
goverNordic_g05.headWater.y = goverNordic_g05.flowDivGateOpening.y ^ goverNordic_g05.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6598};
  modelica_real tmp2110;
  modelica_real tmp2111;
  modelica_real tmp2112;
  modelica_real tmp2113;
  modelica_real tmp2114;
  modelica_real tmp2115;
  modelica_real tmp2116;
  tmp2110 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2009]] /* goverNordic_g05.flowDivGateOpening.y variable */);
  tmp2111 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2416]] /* goverNordic_g05.headWater.N PARAM */);
  if(tmp2110 < 0.0 && tmp2111 != 0.0)
  {
    tmp2113 = modf(tmp2111, &tmp2114);
    
    if(tmp2113 > 0.5)
    {
      tmp2113 -= 1.0;
      tmp2114 += 1.0;
    }
    else if(tmp2113 < -0.5)
    {
      tmp2113 += 1.0;
      tmp2114 -= 1.0;
    }
    
    if(fabs(tmp2113) < 1e-10)
      tmp2112 = pow(tmp2110, tmp2114);
    else
    {
      tmp2116 = modf(1.0/tmp2111, &tmp2115);
      if(tmp2116 > 0.5)
      {
        tmp2116 -= 1.0;
        tmp2115 += 1.0;
      }
      else if(tmp2116 < -0.5)
      {
        tmp2116 += 1.0;
        tmp2115 -= 1.0;
      }
      if(fabs(tmp2116) < 1e-10 && ((unsigned long)tmp2115 & 1))
      {
        tmp2112 = -pow(-tmp2110, tmp2113)*pow(tmp2110, tmp2114);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2110, tmp2111);
      }
    }
  }
  else
  {
    tmp2112 = pow(tmp2110, tmp2111);
  }
  if(isnan(tmp2112) || isinf(tmp2112))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2110, tmp2111);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2014]] /* goverNordic_g05.headWater.y variable */) = tmp2112;
  threadData->lastEquationSolved = 6598;
}

/*
equation index: 6599
type: SIMPLE_ASSIGN
g05.PmPu = goverNordic_g05.waterFlow.y * goverNordic_g05.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* g05.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* goverNordic_g05.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2014]] /* goverNordic_g05.headWater.y variable */));
  threadData->lastEquationSolved = 6599;
}

/*
equation index: 6600
type: SIMPLE_ASSIGN
g05.cmPu = if g05.running.value then g05.PmPu / g05.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* g05.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* g05.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */),"g05.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6600;
}

/*
equation index: 6601
type: SIMPLE_ASSIGN
$DER.g05.omegaPu = if g05.running.value then 0.5 * (g05.cmPu * g05.PNomTurb / g05.SNom - g05.DPu * (g05.omegaPu - omegaCOI) - g05.cePu) / g05.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* der(g05.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* g05.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* g05.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */),"g05.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[626]] /* g05.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* g05.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[628]] /* g05.H PARAM */),"g05.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6601;
}

/*
equation index: 6602
type: SIMPLE_ASSIGN
goverNordic_g05.dH.y = goverNordic_g05.const2.k - goverNordic_g05.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2005]] /* goverNordic_g05.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2404]] /* goverNordic_g05.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2014]] /* goverNordic_g05.headWater.y variable */);
  threadData->lastEquationSolved = 6602;
}

/*
equation index: 6603
type: SIMPLE_ASSIGN
$DER.goverNordic_g05.waterFlow.y = goverNordic_g05.waterFlow.k * goverNordic_g05.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* der(goverNordic_g05.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2431]] /* goverNordic_g05.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2005]] /* goverNordic_g05.dH.y variable */));
  threadData->lastEquationSolved = 6603;
}

/*
equation index: 6604
type: SIMPLE_ASSIGN
vrNordic_g05.timer.y = vrNordic_g05.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4514]] /* vrNordic_g05.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6604;
}

/*
equation index: 6605
type: SIMPLE_ASSIGN
$DER.vrNordic_g05.timer.y = if vrNordic_g05.timer.y < vrNordic_g05.timer.outMin and vrNordic_g05.timer.k * vrNordic_g05.overExcitationLimitation.y < 0.0 or vrNordic_g05.timer.y > vrNordic_g05.timer.outMax and vrNordic_g05.timer.k * vrNordic_g05.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g05.timer.k * vrNordic_g05.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6605};
  modelica_boolean tmp2117;
  modelica_boolean tmp2118;
  modelica_boolean tmp2119;
  modelica_boolean tmp2120;
  tmp2117 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4513]] /* vrNordic_g05.timer.outMin PARAM */));
  tmp2118 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)),0.0);
  tmp2119 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4512]] /* vrNordic_g05.timer.outMax PARAM */));
  tmp2120 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* der(vrNordic_g05.timer.y) STATE_DER */) = (((tmp2117 && tmp2118) || (tmp2119 && tmp2120))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6605;
}

/*
equation index: 6606
type: SIMPLE_ASSIGN
vrNordic_g05.greaterEqualThreshold.y = vrNordic_g05.timer.y >= vrNordic_g05.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6606};
  modelica_boolean tmp2121;
  tmp2121 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4456]] /* vrNordic_g05.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1027]] /* vrNordic_g05.greaterEqualThreshold.y DISCRETE */) = tmp2121;
  threadData->lastEquationSolved = 6606;
}

/*
equation index: 6607
type: SIMPLE_ASSIGN
vrNordic_g05.switch.y = if vrNordic_g05.greaterEqualThreshold.y then vrNordic_g05.gain1.y else vrNordic_g05.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3564]] /* vrNordic_g05.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1027]] /* vrNordic_g05.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3551]] /* vrNordic_g05.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */));
  threadData->lastEquationSolved = 6607;
}

/*
equation index: 6608
type: SIMPLE_ASSIGN
vrNordic_g05.min1.y = if vrNordic_g05.switch.y < vrNordic_g05.add.y then vrNordic_g05.switch.y else vrNordic_g05.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6608};
  modelica_boolean tmp2122;
  tmp2122 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3564]] /* vrNordic_g05.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3562]] /* vrNordic_g05.min1.y variable */) = (tmp2122?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3564]] /* vrNordic_g05.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */));
  threadData->lastEquationSolved = 6608;
}

/*
equation index: 6609
type: SIMPLE_ASSIGN
vrNordic_g05.kMulDU.y = vrNordic_g05.kMulDU.k * vrNordic_g05.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3552]] /* vrNordic_g05.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4457]] /* vrNordic_g05.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3562]] /* vrNordic_g05.min1.y variable */));
  threadData->lastEquationSolved = 6609;
}

/*
equation index: 6610
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.y = (vrNordic_g05.leadLag.bb[2] - vrNordic_g05.leadLag.d * vrNordic_g05.leadLag.a[2]) * vrNordic_g05.leadLag.x[1] + vrNordic_g05.leadLag.d * vrNordic_g05.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3554]] /* vrNordic_g05.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4466]] /* vrNordic_g05.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4467]] /* vrNordic_g05.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4461]] /* vrNordic_g05.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3553]] /* vrNordic_g05.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4467]] /* vrNordic_g05.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3552]] /* vrNordic_g05.kMulDU.y variable */));
  threadData->lastEquationSolved = 6610;
}

/*
equation index: 6611
type: SIMPLE_ASSIGN
$DER.vrNordic_g05.leadLag.x_scaled[1] = (vrNordic_g05.leadLag.a_end * vrNordic_g05.kMulDU.y - vrNordic_g05.leadLag.a[2] * vrNordic_g05.leadLag.x_scaled[1]) / vrNordic_g05.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* der(vrNordic_g05.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4462]] /* vrNordic_g05.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3552]] /* vrNordic_g05.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4461]] /* vrNordic_g05.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* vrNordic_g05.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4460]] /* vrNordic_g05.leadLag.a[1] PARAM */),"vrNordic_g05.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6611;
}

/*
equation index: 6612
type: SIMPLE_ASSIGN
vrNordic_g05.limIntegrator.y = vrNordic_g05.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4500]] /* vrNordic_g05.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6612;
}

/*
equation index: 6613
type: SIMPLE_ASSIGN
vrNordic_g05.feedback1.y = vrNordic_g05.leadLag.y - vrNordic_g05.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3549]] /* vrNordic_g05.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3554]] /* vrNordic_g05.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6613;
}

/*
equation index: 6614
type: SIMPLE_ASSIGN
vrNordic_g05.gain.y = vrNordic_g05.gain.k * vrNordic_g05.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4454]] /* vrNordic_g05.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3549]] /* vrNordic_g05.feedback1.y variable */));
  threadData->lastEquationSolved = 6614;
}

/*
equation index: 6615
type: SIMPLE_ASSIGN
$DER.vrNordic_g05.limIntegrator.y = if vrNordic_g05.limIntegrator.y < vrNordic_g05.limIntegrator.outMin and vrNordic_g05.limIntegrator.k * vrNordic_g05.gain.y < 0.0 or vrNordic_g05.limIntegrator.y > vrNordic_g05.limIntegrator.outMax and vrNordic_g05.limIntegrator.k * vrNordic_g05.gain.y > 0.0 then 0.0 else vrNordic_g05.limIntegrator.k * vrNordic_g05.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6615};
  modelica_boolean tmp2123;
  modelica_boolean tmp2124;
  modelica_boolean tmp2125;
  modelica_boolean tmp2126;
  tmp2123 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4499]] /* vrNordic_g05.limIntegrator.outMin PARAM */));
  tmp2124 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)),0.0);
  tmp2125 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4498]] /* vrNordic_g05.limIntegrator.outMax PARAM */));
  tmp2126 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* der(vrNordic_g05.limIntegrator.y) STATE_DER */) = (((tmp2123 && tmp2124) || (tmp2125 && tmp2126))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)));
  threadData->lastEquationSolved = 6615;
}

/*
equation index: 6616
type: SIMPLE_ASSIGN
g05.ufPu = if g05.running.value then vrNordic_g05.limIntegrator.y * g05.Kuf * g05.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1242]] /* g05.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* g05.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6616;
}

/*
equation index: 6617
type: SIMPLE_ASSIGN
$DER.g05.lambdafPu = if g05.running.value then (g05.RfPPu * g05.ifPu - g05.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* der(g05.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* g05.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1242]] /* g05.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6617;
}

/*
equation index: 6618
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limIntegrator.y = goverNordic_g04.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2390]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6618;
}

/*
equation index: 6619
type: SIMPLE_ASSIGN
goverNordic_g04.govInt.y = goverNordic_g04.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* goverNordic_g04.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2375]] /* goverNordic_g04.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6619;
}

/*
equation index: 6620
type: SIMPLE_ASSIGN
goverNordic_g04.govOut.y = goverNordic_g04.govOut.k1 * goverNordic_g04.govKp.y + goverNordic_g04.govOut.k2 * goverNordic_g04.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1995]] /* goverNordic_g04.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2378]] /* goverNordic_g04.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1994]] /* goverNordic_g04.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2379]] /* goverNordic_g04.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* goverNordic_g04.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6620;
}

/*
equation index: 6621
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.feedback.y = goverNordic_g04.govOut.y - goverNordic_g04.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1997]] /* goverNordic_g04.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1995]] /* goverNordic_g04.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6621;
}

/*
equation index: 6622
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.gain.y = goverNordic_g04.limRateLimFirstOrder.gain.k * goverNordic_g04.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6622};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1998]] /* goverNordic_g04.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* goverNordic_g04.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1997]] /* goverNordic_g04.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6622;
}

/*
equation index: 6623
type: SIMPLE_ASSIGN
goverNordic_g04.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g04.limRateLimFirstOrder.gain.y > goverNordic_g04.limRateLimFirstOrder.limiter.uMax then goverNordic_g04.limRateLimFirstOrder.limiter.uMax else if goverNordic_g04.limRateLimFirstOrder.gain.y < goverNordic_g04.limRateLimFirstOrder.limiter.uMin then goverNordic_g04.limRateLimFirstOrder.limiter.uMin else goverNordic_g04.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6623};
  modelica_boolean tmp2127;
  modelica_boolean tmp2128;
  modelica_boolean tmp2129;
  modelica_real tmp2130;
  tmp2127 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1998]] /* goverNordic_g04.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp2129 = (modelica_boolean)tmp2127;
  if(tmp2129)
  {
    tmp2130 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp2128 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1998]] /* goverNordic_g04.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp2130 = (tmp2128?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* goverNordic_g04.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1998]] /* goverNordic_g04.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */) = tmp2130;
  threadData->lastEquationSolved = 6623;
}

/*
equation index: 6624
type: SIMPLE_ASSIGN
$DER.goverNordic_g04.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g04.limRateLimFirstOrder.limIntegrator.y < goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g04.limRateLimFirstOrder.limIntegrator.k * goverNordic_g04.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g04.limRateLimFirstOrder.limIntegrator.y > goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g04.limRateLimFirstOrder.limIntegrator.k * goverNordic_g04.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g04.limRateLimFirstOrder.limIntegrator.k * goverNordic_g04.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6624};
  modelica_boolean tmp2131;
  modelica_boolean tmp2132;
  modelica_boolean tmp2133;
  modelica_boolean tmp2134;
  tmp2131 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp2132 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp2133 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp2134 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[454]] /* der(goverNordic_g04.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp2131 && tmp2132) || (tmp2133 && tmp2134))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6624;
}

/*
equation index: 6625
type: SIMPLE_ASSIGN
goverNordic_g04.waterFlow.y = goverNordic_g04.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* goverNordic_g04.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2396]] /* goverNordic_g04.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6625;
}

/*
equation index: 6626
type: SIMPLE_ASSIGN
goverNordic_g04.flowDivGateOpening.y = goverNordic_g04.waterFlow.y / goverNordic_g04.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1991]] /* goverNordic_g04.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* goverNordic_g04.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g04.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6626;
}

/*
equation index: 6627
type: SIMPLE_ASSIGN
goverNordic_g04.headWater.y = goverNordic_g04.flowDivGateOpening.y ^ goverNordic_g04.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6627};
  modelica_real tmp2135;
  modelica_real tmp2136;
  modelica_real tmp2137;
  modelica_real tmp2138;
  modelica_real tmp2139;
  modelica_real tmp2140;
  modelica_real tmp2141;
  tmp2135 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1991]] /* goverNordic_g04.flowDivGateOpening.y variable */);
  tmp2136 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2380]] /* goverNordic_g04.headWater.N PARAM */);
  if(tmp2135 < 0.0 && tmp2136 != 0.0)
  {
    tmp2138 = modf(tmp2136, &tmp2139);
    
    if(tmp2138 > 0.5)
    {
      tmp2138 -= 1.0;
      tmp2139 += 1.0;
    }
    else if(tmp2138 < -0.5)
    {
      tmp2138 += 1.0;
      tmp2139 -= 1.0;
    }
    
    if(fabs(tmp2138) < 1e-10)
      tmp2137 = pow(tmp2135, tmp2139);
    else
    {
      tmp2141 = modf(1.0/tmp2136, &tmp2140);
      if(tmp2141 > 0.5)
      {
        tmp2141 -= 1.0;
        tmp2140 += 1.0;
      }
      else if(tmp2141 < -0.5)
      {
        tmp2141 += 1.0;
        tmp2140 -= 1.0;
      }
      if(fabs(tmp2141) < 1e-10 && ((unsigned long)tmp2140 & 1))
      {
        tmp2137 = -pow(-tmp2135, tmp2138)*pow(tmp2135, tmp2139);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2135, tmp2136);
      }
    }
  }
  else
  {
    tmp2137 = pow(tmp2135, tmp2136);
  }
  if(isnan(tmp2137) || isinf(tmp2137))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2135, tmp2136);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1996]] /* goverNordic_g04.headWater.y variable */) = tmp2137;
  threadData->lastEquationSolved = 6627;
}

/*
equation index: 6628
type: SIMPLE_ASSIGN
g04.PmPu = goverNordic_g04.waterFlow.y * goverNordic_g04.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* g04.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* goverNordic_g04.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1996]] /* goverNordic_g04.headWater.y variable */));
  threadData->lastEquationSolved = 6628;
}

/*
equation index: 6629
type: SIMPLE_ASSIGN
g04.cmPu = if g04.running.value then g04.PmPu / g04.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* g04.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* g04.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */),"g04.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6629;
}

/*
equation index: 6630
type: SIMPLE_ASSIGN
$DER.g04.omegaPu = if g04.running.value then 0.5 * (g04.cmPu * g04.PNomTurb / g04.SNom - g04.DPu * (g04.omegaPu - omegaCOI) - g04.cePu) / g04.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(g04.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* g04.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* g04.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */),"g04.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* g04.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* g04.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* g04.H PARAM */),"g04.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6630;
}

/*
equation index: 6631
type: SIMPLE_ASSIGN
goverNordic_g04.dH.y = goverNordic_g04.const2.k - goverNordic_g04.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1987]] /* goverNordic_g04.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2368]] /* goverNordic_g04.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1996]] /* goverNordic_g04.headWater.y variable */);
  threadData->lastEquationSolved = 6631;
}

/*
equation index: 6632
type: SIMPLE_ASSIGN
$DER.goverNordic_g04.waterFlow.y = goverNordic_g04.waterFlow.k * goverNordic_g04.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[455]] /* der(goverNordic_g04.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2395]] /* goverNordic_g04.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1987]] /* goverNordic_g04.dH.y variable */));
  threadData->lastEquationSolved = 6632;
}

/*
equation index: 6633
type: SIMPLE_ASSIGN
vrNordic_g04.timer.y = vrNordic_g04.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4435]] /* vrNordic_g04.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6633;
}

/*
equation index: 6634
type: SIMPLE_ASSIGN
$DER.vrNordic_g04.timer.y = if vrNordic_g04.timer.y < vrNordic_g04.timer.outMin and vrNordic_g04.timer.k * vrNordic_g04.overExcitationLimitation.y < 0.0 or vrNordic_g04.timer.y > vrNordic_g04.timer.outMax and vrNordic_g04.timer.k * vrNordic_g04.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g04.timer.k * vrNordic_g04.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6634};
  modelica_boolean tmp2142;
  modelica_boolean tmp2143;
  modelica_boolean tmp2144;
  modelica_boolean tmp2145;
  tmp2142 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4434]] /* vrNordic_g04.timer.outMin PARAM */));
  tmp2143 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)),0.0);
  tmp2144 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4433]] /* vrNordic_g04.timer.outMax PARAM */));
  tmp2145 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* der(vrNordic_g04.timer.y) STATE_DER */) = (((tmp2142 && tmp2143) || (tmp2144 && tmp2145))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6634;
}

/*
equation index: 6635
type: SIMPLE_ASSIGN
vrNordic_g04.greaterEqualThreshold.y = vrNordic_g04.timer.y >= vrNordic_g04.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6635};
  modelica_boolean tmp2146;
  tmp2146 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4377]] /* vrNordic_g04.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1024]] /* vrNordic_g04.greaterEqualThreshold.y DISCRETE */) = tmp2146;
  threadData->lastEquationSolved = 6635;
}

/*
equation index: 6636
type: SIMPLE_ASSIGN
vrNordic_g04.switch.y = if vrNordic_g04.greaterEqualThreshold.y then vrNordic_g04.gain1.y else vrNordic_g04.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6636};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* vrNordic_g04.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1024]] /* vrNordic_g04.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3527]] /* vrNordic_g04.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */));
  threadData->lastEquationSolved = 6636;
}

/*
equation index: 6637
type: SIMPLE_ASSIGN
vrNordic_g04.min1.y = if vrNordic_g04.switch.y < vrNordic_g04.add.y then vrNordic_g04.switch.y else vrNordic_g04.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6637};
  modelica_boolean tmp2147;
  tmp2147 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* vrNordic_g04.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* vrNordic_g04.min1.y variable */) = (tmp2147?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* vrNordic_g04.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */));
  threadData->lastEquationSolved = 6637;
}

/*
equation index: 6638
type: SIMPLE_ASSIGN
vrNordic_g04.kMulDU.y = vrNordic_g04.kMulDU.k * vrNordic_g04.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3528]] /* vrNordic_g04.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4378]] /* vrNordic_g04.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* vrNordic_g04.min1.y variable */));
  threadData->lastEquationSolved = 6638;
}

/*
equation index: 6639
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.y = (vrNordic_g04.leadLag.bb[2] - vrNordic_g04.leadLag.d * vrNordic_g04.leadLag.a[2]) * vrNordic_g04.leadLag.x[1] + vrNordic_g04.leadLag.d * vrNordic_g04.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6639};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3530]] /* vrNordic_g04.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4387]] /* vrNordic_g04.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4388]] /* vrNordic_g04.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4382]] /* vrNordic_g04.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3529]] /* vrNordic_g04.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4388]] /* vrNordic_g04.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3528]] /* vrNordic_g04.kMulDU.y variable */));
  threadData->lastEquationSolved = 6639;
}

/*
equation index: 6640
type: SIMPLE_ASSIGN
$DER.vrNordic_g04.leadLag.x_scaled[1] = (vrNordic_g04.leadLag.a_end * vrNordic_g04.kMulDU.y - vrNordic_g04.leadLag.a[2] * vrNordic_g04.leadLag.x_scaled[1]) / vrNordic_g04.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6640};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* der(vrNordic_g04.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4383]] /* vrNordic_g04.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3528]] /* vrNordic_g04.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4382]] /* vrNordic_g04.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* vrNordic_g04.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4381]] /* vrNordic_g04.leadLag.a[1] PARAM */),"vrNordic_g04.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6640;
}

/*
equation index: 6641
type: SIMPLE_ASSIGN
vrNordic_g04.limIntegrator.y = vrNordic_g04.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4421]] /* vrNordic_g04.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6641;
}

/*
equation index: 6642
type: SIMPLE_ASSIGN
vrNordic_g04.feedback1.y = vrNordic_g04.leadLag.y - vrNordic_g04.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6642};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3525]] /* vrNordic_g04.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3530]] /* vrNordic_g04.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6642;
}

/*
equation index: 6643
type: SIMPLE_ASSIGN
vrNordic_g04.gain.y = vrNordic_g04.gain.k * vrNordic_g04.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4375]] /* vrNordic_g04.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3525]] /* vrNordic_g04.feedback1.y variable */));
  threadData->lastEquationSolved = 6643;
}

/*
equation index: 6644
type: SIMPLE_ASSIGN
$DER.vrNordic_g04.limIntegrator.y = if vrNordic_g04.limIntegrator.y < vrNordic_g04.limIntegrator.outMin and vrNordic_g04.limIntegrator.k * vrNordic_g04.gain.y < 0.0 or vrNordic_g04.limIntegrator.y > vrNordic_g04.limIntegrator.outMax and vrNordic_g04.limIntegrator.k * vrNordic_g04.gain.y > 0.0 then 0.0 else vrNordic_g04.limIntegrator.k * vrNordic_g04.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6644};
  modelica_boolean tmp2148;
  modelica_boolean tmp2149;
  modelica_boolean tmp2150;
  modelica_boolean tmp2151;
  tmp2148 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4420]] /* vrNordic_g04.limIntegrator.outMin PARAM */));
  tmp2149 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)),0.0);
  tmp2150 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4419]] /* vrNordic_g04.limIntegrator.outMax PARAM */));
  tmp2151 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* der(vrNordic_g04.limIntegrator.y) STATE_DER */) = (((tmp2148 && tmp2149) || (tmp2150 && tmp2151))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)));
  threadData->lastEquationSolved = 6644;
}

/*
equation index: 6645
type: SIMPLE_ASSIGN
g04.ufPu = if g04.running.value then vrNordic_g04.limIntegrator.y * g04.Kuf * g04.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6645};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* g04.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* g04.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6645;
}

/*
equation index: 6646
type: SIMPLE_ASSIGN
$DER.g04.lambdafPu = if g04.running.value then (g04.RfPPu * g04.ifPu - g04.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(g04.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* g04.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* g04.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6646;
}

/*
equation index: 6647
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limIntegrator.y = goverNordic_g03.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2354]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6647;
}

/*
equation index: 6648
type: SIMPLE_ASSIGN
goverNordic_g03.govInt.y = goverNordic_g03.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* goverNordic_g03.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2339]] /* goverNordic_g03.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6648;
}

/*
equation index: 6649
type: SIMPLE_ASSIGN
goverNordic_g03.govOut.y = goverNordic_g03.govOut.k1 * goverNordic_g03.govKp.y + goverNordic_g03.govOut.k2 * goverNordic_g03.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6649};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* goverNordic_g03.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2342]] /* goverNordic_g03.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* goverNordic_g03.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2343]] /* goverNordic_g03.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* goverNordic_g03.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6649;
}

/*
equation index: 6650
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.feedback.y = goverNordic_g03.govOut.y - goverNordic_g03.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1979]] /* goverNordic_g03.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* goverNordic_g03.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6650;
}

/*
equation index: 6651
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.gain.y = goverNordic_g03.limRateLimFirstOrder.gain.k * goverNordic_g03.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1980]] /* goverNordic_g03.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2350]] /* goverNordic_g03.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1979]] /* goverNordic_g03.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6651;
}

/*
equation index: 6652
type: SIMPLE_ASSIGN
goverNordic_g03.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g03.limRateLimFirstOrder.gain.y > goverNordic_g03.limRateLimFirstOrder.limiter.uMax then goverNordic_g03.limRateLimFirstOrder.limiter.uMax else if goverNordic_g03.limRateLimFirstOrder.gain.y < goverNordic_g03.limRateLimFirstOrder.limiter.uMin then goverNordic_g03.limRateLimFirstOrder.limiter.uMin else goverNordic_g03.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6652};
  modelica_boolean tmp2152;
  modelica_boolean tmp2153;
  modelica_boolean tmp2154;
  modelica_real tmp2155;
  tmp2152 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1980]] /* goverNordic_g03.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp2154 = (modelica_boolean)tmp2152;
  if(tmp2154)
  {
    tmp2155 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp2153 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1980]] /* goverNordic_g03.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp2155 = (tmp2153?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* goverNordic_g03.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1980]] /* goverNordic_g03.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */) = tmp2155;
  threadData->lastEquationSolved = 6652;
}

/*
equation index: 6653
type: SIMPLE_ASSIGN
$DER.goverNordic_g03.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g03.limRateLimFirstOrder.limIntegrator.y < goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g03.limRateLimFirstOrder.limIntegrator.k * goverNordic_g03.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g03.limRateLimFirstOrder.limIntegrator.y > goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g03.limRateLimFirstOrder.limIntegrator.k * goverNordic_g03.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g03.limRateLimFirstOrder.limIntegrator.k * goverNordic_g03.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6653};
  modelica_boolean tmp2156;
  modelica_boolean tmp2157;
  modelica_boolean tmp2158;
  modelica_boolean tmp2159;
  tmp2156 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp2157 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp2158 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2352]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp2159 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* der(goverNordic_g03.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp2156 && tmp2157) || (tmp2158 && tmp2159))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6653;
}

/*
equation index: 6654
type: SIMPLE_ASSIGN
goverNordic_g03.waterFlow.y = goverNordic_g03.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* goverNordic_g03.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2360]] /* goverNordic_g03.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6654;
}

/*
equation index: 6655
type: SIMPLE_ASSIGN
goverNordic_g03.flowDivGateOpening.y = goverNordic_g03.waterFlow.y / goverNordic_g03.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1973]] /* goverNordic_g03.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* goverNordic_g03.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g03.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6655;
}

/*
equation index: 6656
type: SIMPLE_ASSIGN
goverNordic_g03.headWater.y = goverNordic_g03.flowDivGateOpening.y ^ goverNordic_g03.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6656};
  modelica_real tmp2160;
  modelica_real tmp2161;
  modelica_real tmp2162;
  modelica_real tmp2163;
  modelica_real tmp2164;
  modelica_real tmp2165;
  modelica_real tmp2166;
  tmp2160 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1973]] /* goverNordic_g03.flowDivGateOpening.y variable */);
  tmp2161 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2344]] /* goverNordic_g03.headWater.N PARAM */);
  if(tmp2160 < 0.0 && tmp2161 != 0.0)
  {
    tmp2163 = modf(tmp2161, &tmp2164);
    
    if(tmp2163 > 0.5)
    {
      tmp2163 -= 1.0;
      tmp2164 += 1.0;
    }
    else if(tmp2163 < -0.5)
    {
      tmp2163 += 1.0;
      tmp2164 -= 1.0;
    }
    
    if(fabs(tmp2163) < 1e-10)
      tmp2162 = pow(tmp2160, tmp2164);
    else
    {
      tmp2166 = modf(1.0/tmp2161, &tmp2165);
      if(tmp2166 > 0.5)
      {
        tmp2166 -= 1.0;
        tmp2165 += 1.0;
      }
      else if(tmp2166 < -0.5)
      {
        tmp2166 += 1.0;
        tmp2165 -= 1.0;
      }
      if(fabs(tmp2166) < 1e-10 && ((unsigned long)tmp2165 & 1))
      {
        tmp2162 = -pow(-tmp2160, tmp2163)*pow(tmp2160, tmp2164);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2160, tmp2161);
      }
    }
  }
  else
  {
    tmp2162 = pow(tmp2160, tmp2161);
  }
  if(isnan(tmp2162) || isinf(tmp2162))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2160, tmp2161);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1978]] /* goverNordic_g03.headWater.y variable */) = tmp2162;
  threadData->lastEquationSolved = 6656;
}

/*
equation index: 6657
type: SIMPLE_ASSIGN
g03.PmPu = goverNordic_g03.waterFlow.y * goverNordic_g03.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* g03.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* goverNordic_g03.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1978]] /* goverNordic_g03.headWater.y variable */));
  threadData->lastEquationSolved = 6657;
}

/*
equation index: 6658
type: SIMPLE_ASSIGN
g03.cmPu = if g03.running.value then g03.PmPu / g03.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* g03.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* g03.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */),"g03.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6658;
}

/*
equation index: 6659
type: SIMPLE_ASSIGN
$DER.g03.omegaPu = if g03.running.value then 0.5 * (g03.cmPu * g03.PNomTurb / g03.SNom - g03.DPu * (g03.omegaPu - omegaCOI) - g03.cePu) / g03.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* der(g03.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* g03.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* g03.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */),"g03.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* g03.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* g03.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* g03.H PARAM */),"g03.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6659;
}

/*
equation index: 6660
type: SIMPLE_ASSIGN
goverNordic_g03.dH.y = goverNordic_g03.const2.k - goverNordic_g03.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6660};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1969]] /* goverNordic_g03.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2332]] /* goverNordic_g03.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1978]] /* goverNordic_g03.headWater.y variable */);
  threadData->lastEquationSolved = 6660;
}

/*
equation index: 6661
type: SIMPLE_ASSIGN
$DER.goverNordic_g03.waterFlow.y = goverNordic_g03.waterFlow.k * goverNordic_g03.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* der(goverNordic_g03.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2359]] /* goverNordic_g03.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1969]] /* goverNordic_g03.dH.y variable */));
  threadData->lastEquationSolved = 6661;
}

/*
equation index: 6662
type: SIMPLE_ASSIGN
vrNordic_g03.timer.y = vrNordic_g03.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4356]] /* vrNordic_g03.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6662;
}

/*
equation index: 6663
type: SIMPLE_ASSIGN
$DER.vrNordic_g03.timer.y = if vrNordic_g03.timer.y < vrNordic_g03.timer.outMin and vrNordic_g03.timer.k * vrNordic_g03.overExcitationLimitation.y < 0.0 or vrNordic_g03.timer.y > vrNordic_g03.timer.outMax and vrNordic_g03.timer.k * vrNordic_g03.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g03.timer.k * vrNordic_g03.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6663};
  modelica_boolean tmp2167;
  modelica_boolean tmp2168;
  modelica_boolean tmp2169;
  modelica_boolean tmp2170;
  tmp2167 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4355]] /* vrNordic_g03.timer.outMin PARAM */));
  tmp2168 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)),0.0);
  tmp2169 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4354]] /* vrNordic_g03.timer.outMax PARAM */));
  tmp2170 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* der(vrNordic_g03.timer.y) STATE_DER */) = (((tmp2167 && tmp2168) || (tmp2169 && tmp2170))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6663;
}

/*
equation index: 6664
type: SIMPLE_ASSIGN
vrNordic_g03.greaterEqualThreshold.y = vrNordic_g03.timer.y >= vrNordic_g03.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6664};
  modelica_boolean tmp2171;
  tmp2171 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4298]] /* vrNordic_g03.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1021]] /* vrNordic_g03.greaterEqualThreshold.y DISCRETE */) = tmp2171;
  threadData->lastEquationSolved = 6664;
}

/*
equation index: 6665
type: SIMPLE_ASSIGN
vrNordic_g03.switch.y = if vrNordic_g03.greaterEqualThreshold.y then vrNordic_g03.gain1.y else vrNordic_g03.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3516]] /* vrNordic_g03.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1021]] /* vrNordic_g03.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3503]] /* vrNordic_g03.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */));
  threadData->lastEquationSolved = 6665;
}

/*
equation index: 6666
type: SIMPLE_ASSIGN
vrNordic_g03.min1.y = if vrNordic_g03.switch.y < vrNordic_g03.add.y then vrNordic_g03.switch.y else vrNordic_g03.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6666};
  modelica_boolean tmp2172;
  tmp2172 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3516]] /* vrNordic_g03.switch.y variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3514]] /* vrNordic_g03.min1.y variable */) = (tmp2172?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3516]] /* vrNordic_g03.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */));
  threadData->lastEquationSolved = 6666;
}

/*
equation index: 6667
type: SIMPLE_ASSIGN
vrNordic_g03.kMulDU.y = vrNordic_g03.kMulDU.k * vrNordic_g03.min1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3504]] /* vrNordic_g03.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4299]] /* vrNordic_g03.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3514]] /* vrNordic_g03.min1.y variable */));
  threadData->lastEquationSolved = 6667;
}

/*
equation index: 6668
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.y = (vrNordic_g03.leadLag.bb[2] - vrNordic_g03.leadLag.d * vrNordic_g03.leadLag.a[2]) * vrNordic_g03.leadLag.x[1] + vrNordic_g03.leadLag.d * vrNordic_g03.kMulDU.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3506]] /* vrNordic_g03.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4308]] /* vrNordic_g03.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4309]] /* vrNordic_g03.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4303]] /* vrNordic_g03.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3505]] /* vrNordic_g03.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4309]] /* vrNordic_g03.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3504]] /* vrNordic_g03.kMulDU.y variable */));
  threadData->lastEquationSolved = 6668;
}

/*
equation index: 6669
type: SIMPLE_ASSIGN
$DER.vrNordic_g03.leadLag.x_scaled[1] = (vrNordic_g03.leadLag.a_end * vrNordic_g03.kMulDU.y - vrNordic_g03.leadLag.a[2] * vrNordic_g03.leadLag.x_scaled[1]) / vrNordic_g03.leadLag.a[1]
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* der(vrNordic_g03.leadLag.x_scaled[1]) STATE_DER */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4304]] /* vrNordic_g03.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3504]] /* vrNordic_g03.kMulDU.y variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4303]] /* vrNordic_g03.leadLag.a[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* vrNordic_g03.leadLag.x_scaled[1] STATE(1) */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4302]] /* vrNordic_g03.leadLag.a[1] PARAM */),"vrNordic_g03.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 6669;
}

/*
equation index: 6670
type: SIMPLE_ASSIGN
vrNordic_g03.limIntegrator.y = vrNordic_g03.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4342]] /* vrNordic_g03.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6670;
}

/*
equation index: 6671
type: SIMPLE_ASSIGN
vrNordic_g03.feedback1.y = vrNordic_g03.leadLag.y - vrNordic_g03.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3501]] /* vrNordic_g03.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3506]] /* vrNordic_g03.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6671;
}

/*
equation index: 6672
type: SIMPLE_ASSIGN
vrNordic_g03.gain.y = vrNordic_g03.gain.k * vrNordic_g03.feedback1.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4296]] /* vrNordic_g03.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3501]] /* vrNordic_g03.feedback1.y variable */));
  threadData->lastEquationSolved = 6672;
}

/*
equation index: 6673
type: SIMPLE_ASSIGN
$DER.vrNordic_g03.limIntegrator.y = if vrNordic_g03.limIntegrator.y < vrNordic_g03.limIntegrator.outMin and vrNordic_g03.limIntegrator.k * vrNordic_g03.gain.y < 0.0 or vrNordic_g03.limIntegrator.y > vrNordic_g03.limIntegrator.outMax and vrNordic_g03.limIntegrator.k * vrNordic_g03.gain.y > 0.0 then 0.0 else vrNordic_g03.limIntegrator.k * vrNordic_g03.gain.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6673};
  modelica_boolean tmp2173;
  modelica_boolean tmp2174;
  modelica_boolean tmp2175;
  modelica_boolean tmp2176;
  tmp2173 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4341]] /* vrNordic_g03.limIntegrator.outMin PARAM */));
  tmp2174 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)),0.0);
  tmp2175 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4340]] /* vrNordic_g03.limIntegrator.outMax PARAM */));
  tmp2176 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* der(vrNordic_g03.limIntegrator.y) STATE_DER */) = (((tmp2173 && tmp2174) || (tmp2175 && tmp2176))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)));
  threadData->lastEquationSolved = 6673;
}

/*
equation index: 6674
type: SIMPLE_ASSIGN
g03.ufPu = if g03.running.value then vrNordic_g03.limIntegrator.y * g03.Kuf * g03.rTfoPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* g03.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* g03.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 6674;
}

/*
equation index: 6675
type: SIMPLE_ASSIGN
$DER.g03.lambdafPu = if g03.running.value then (g03.RfPPu * g03.ifPu - g03.ufPu) / (-0.0031830988618379067) else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* der(g03.lambdafPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* g03.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* g03.ufPu variable */),-0.0031830988618379067,"-0.0031830988618379067",equationIndexes):0.0);
  threadData->lastEquationSolved = 6675;
}

/*
equation index: 6676
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limIntegrator.y = goverNordic_g02.limRateLimFirstOrder.limIntegrator.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2318]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y_start PARAM */);
  threadData->lastEquationSolved = 6676;
}

/*
equation index: 6677
type: SIMPLE_ASSIGN
goverNordic_g02.govInt.y = goverNordic_g02.govInt.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* goverNordic_g02.govInt.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2303]] /* goverNordic_g02.govInt.y_start PARAM */);
  threadData->lastEquationSolved = 6677;
}

/*
equation index: 6678
type: SIMPLE_ASSIGN
goverNordic_g02.govOut.y = goverNordic_g02.govOut.k1 * goverNordic_g02.govKp.y + goverNordic_g02.govOut.k2 * goverNordic_g02.govInt.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1959]] /* goverNordic_g02.govOut.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2306]] /* goverNordic_g02.govOut.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1958]] /* goverNordic_g02.govKp.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2307]] /* goverNordic_g02.govOut.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* goverNordic_g02.govInt.y STATE(1) */));
  threadData->lastEquationSolved = 6678;
}

/*
equation index: 6679
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.feedback.y = goverNordic_g02.govOut.y - goverNordic_g02.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1961]] /* goverNordic_g02.limRateLimFirstOrder.feedback.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1959]] /* goverNordic_g02.govOut.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 6679;
}

/*
equation index: 6680
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.gain.y = goverNordic_g02.limRateLimFirstOrder.gain.k * goverNordic_g02.limRateLimFirstOrder.feedback.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1962]] /* goverNordic_g02.limRateLimFirstOrder.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2314]] /* goverNordic_g02.limRateLimFirstOrder.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1961]] /* goverNordic_g02.limRateLimFirstOrder.feedback.y variable */));
  threadData->lastEquationSolved = 6680;
}

/*
equation index: 6681
type: SIMPLE_ASSIGN
goverNordic_g02.limRateLimFirstOrder.limiter.y = smooth(0, if goverNordic_g02.limRateLimFirstOrder.gain.y > goverNordic_g02.limRateLimFirstOrder.limiter.uMax then goverNordic_g02.limRateLimFirstOrder.limiter.uMax else if goverNordic_g02.limRateLimFirstOrder.gain.y < goverNordic_g02.limRateLimFirstOrder.limiter.uMin then goverNordic_g02.limRateLimFirstOrder.limiter.uMin else goverNordic_g02.limRateLimFirstOrder.gain.y)
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6681};
  modelica_boolean tmp2177;
  modelica_boolean tmp2178;
  modelica_boolean tmp2179;
  modelica_real tmp2180;
  tmp2177 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1962]] /* goverNordic_g02.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2319]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMax PARAM */));
  tmp2179 = (modelica_boolean)tmp2177;
  if(tmp2179)
  {
    tmp2180 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2319]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMax PARAM */);
  }
  else
  {
    tmp2178 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1962]] /* goverNordic_g02.limRateLimFirstOrder.gain.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2320]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMin PARAM */));
    tmp2180 = (tmp2178?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2320]] /* goverNordic_g02.limRateLimFirstOrder.limiter.uMin PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1962]] /* goverNordic_g02.limRateLimFirstOrder.gain.y variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */) = tmp2180;
  threadData->lastEquationSolved = 6681;
}

/*
equation index: 6682
type: SIMPLE_ASSIGN
$DER.goverNordic_g02.limRateLimFirstOrder.limIntegrator.y = if goverNordic_g02.limRateLimFirstOrder.limIntegrator.y < goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g02.limRateLimFirstOrder.limIntegrator.k * goverNordic_g02.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g02.limRateLimFirstOrder.limIntegrator.y > goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g02.limRateLimFirstOrder.limIntegrator.k * goverNordic_g02.limRateLimFirstOrder.limiter.y > 0.0 then 0.0 else goverNordic_g02.limRateLimFirstOrder.limIntegrator.k * goverNordic_g02.limRateLimFirstOrder.limiter.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6682};
  modelica_boolean tmp2181;
  modelica_boolean tmp2182;
  modelica_boolean tmp2183;
  modelica_boolean tmp2184;
  tmp2181 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2317]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp2182 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)),0.0);
  tmp2183 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2316]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp2184 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* der(goverNordic_g02.limRateLimFirstOrder.limIntegrator.y) STATE_DER */) = (((tmp2181 && tmp2182) || (tmp2183 && tmp2184))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)));
  threadData->lastEquationSolved = 6682;
}

/*
equation index: 6683
type: SIMPLE_ASSIGN
goverNordic_g02.waterFlow.y = goverNordic_g02.waterFlow.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* goverNordic_g02.waterFlow.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2324]] /* goverNordic_g02.waterFlow.y_start PARAM */);
  threadData->lastEquationSolved = 6683;
}

/*
equation index: 6684
type: SIMPLE_ASSIGN
goverNordic_g02.flowDivGateOpening.y = goverNordic_g02.waterFlow.y / goverNordic_g02.limRateLimFirstOrder.limIntegrator.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1955]] /* goverNordic_g02.flowDivGateOpening.y variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* goverNordic_g02.waterFlow.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */),"goverNordic_g02.limRateLimFirstOrder.limIntegrator.y",equationIndexes);
  threadData->lastEquationSolved = 6684;
}

/*
equation index: 6685
type: SIMPLE_ASSIGN
goverNordic_g02.headWater.y = goverNordic_g02.flowDivGateOpening.y ^ goverNordic_g02.headWater.N
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6685};
  modelica_real tmp2185;
  modelica_real tmp2186;
  modelica_real tmp2187;
  modelica_real tmp2188;
  modelica_real tmp2189;
  modelica_real tmp2190;
  modelica_real tmp2191;
  tmp2185 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1955]] /* goverNordic_g02.flowDivGateOpening.y variable */);
  tmp2186 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2308]] /* goverNordic_g02.headWater.N PARAM */);
  if(tmp2185 < 0.0 && tmp2186 != 0.0)
  {
    tmp2188 = modf(tmp2186, &tmp2189);
    
    if(tmp2188 > 0.5)
    {
      tmp2188 -= 1.0;
      tmp2189 += 1.0;
    }
    else if(tmp2188 < -0.5)
    {
      tmp2188 += 1.0;
      tmp2189 -= 1.0;
    }
    
    if(fabs(tmp2188) < 1e-10)
      tmp2187 = pow(tmp2185, tmp2189);
    else
    {
      tmp2191 = modf(1.0/tmp2186, &tmp2190);
      if(tmp2191 > 0.5)
      {
        tmp2191 -= 1.0;
        tmp2190 += 1.0;
      }
      else if(tmp2191 < -0.5)
      {
        tmp2191 += 1.0;
        tmp2190 -= 1.0;
      }
      if(fabs(tmp2191) < 1e-10 && ((unsigned long)tmp2190 & 1))
      {
        tmp2187 = -pow(-tmp2185, tmp2188)*pow(tmp2185, tmp2189);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2185, tmp2186);
      }
    }
  }
  else
  {
    tmp2187 = pow(tmp2185, tmp2186);
  }
  if(isnan(tmp2187) || isinf(tmp2187))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2185, tmp2186);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1960]] /* goverNordic_g02.headWater.y variable */) = tmp2187;
  threadData->lastEquationSolved = 6685;
}

/*
equation index: 6686
type: SIMPLE_ASSIGN
g02.PmPu = goverNordic_g02.waterFlow.y * goverNordic_g02.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* g02.PmPu variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* goverNordic_g02.waterFlow.y STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1960]] /* goverNordic_g02.headWater.y variable */));
  threadData->lastEquationSolved = 6686;
}

/*
equation index: 6687
type: SIMPLE_ASSIGN
g02.cmPu = if g02.running.value then g02.PmPu / g02.omegaPu else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* g02.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* g02.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */),"g02.omegaPu",equationIndexes):0.0);
  threadData->lastEquationSolved = 6687;
}

/*
equation index: 6688
type: SIMPLE_ASSIGN
$DER.g02.omegaPu = if g02.running.value then 0.5 * (g02.cmPu * g02.PNomTurb / g02.SNom - g02.DPu * (g02.omegaPu - omegaCOI) - g02.cePu) / g02.H else 0.0
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* der(g02.omegaPu) STATE_DER */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION_SIM((0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* g02.cmPu variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* g02.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */),"g02.SNom",equationIndexes)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* g02.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* g02.cePu variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* g02.H PARAM */),"g02.H",equationIndexes):0.0);
  threadData->lastEquationSolved = 6688;
}

/*
equation index: 6689
type: SIMPLE_ASSIGN
goverNordic_g02.dH.y = goverNordic_g02.const2.k - goverNordic_g02.headWater.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1951]] /* goverNordic_g02.dH.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2296]] /* goverNordic_g02.const2.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1960]] /* goverNordic_g02.headWater.y variable */);
  threadData->lastEquationSolved = 6689;
}

/*
equation index: 6690
type: SIMPLE_ASSIGN
$DER.goverNordic_g02.waterFlow.y = goverNordic_g02.waterFlow.k * goverNordic_g02.dH.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* der(goverNordic_g02.waterFlow.y) STATE_DER */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2323]] /* goverNordic_g02.waterFlow.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1951]] /* goverNordic_g02.dH.y variable */));
  threadData->lastEquationSolved = 6690;
}

/*
equation index: 6691
type: SIMPLE_ASSIGN
vrNordic_g02.timer.y = vrNordic_g02.timer.y_start
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4277]] /* vrNordic_g02.timer.y_start PARAM */);
  threadData->lastEquationSolved = 6691;
}

/*
equation index: 6692
type: SIMPLE_ASSIGN
$DER.vrNordic_g02.timer.y = if vrNordic_g02.timer.y < vrNordic_g02.timer.outMin and vrNordic_g02.timer.k * vrNordic_g02.overExcitationLimitation.y < 0.0 or vrNordic_g02.timer.y > vrNordic_g02.timer.outMax and vrNordic_g02.timer.k * vrNordic_g02.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g02.timer.k * vrNordic_g02.overExcitationLimitation.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6692};
  modelica_boolean tmp2192;
  modelica_boolean tmp2193;
  modelica_boolean tmp2194;
  modelica_boolean tmp2195;
  tmp2192 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4276]] /* vrNordic_g02.timer.outMin PARAM */));
  tmp2193 = Less(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)),0.0);
  tmp2194 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4275]] /* vrNordic_g02.timer.outMax PARAM */));
  tmp2195 = Greater(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* der(vrNordic_g02.timer.y) STATE_DER */) = (((tmp2192 && tmp2193) || (tmp2194 && tmp2195))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)));
  threadData->lastEquationSolved = 6692;
}

/*
equation index: 6693
type: SIMPLE_ASSIGN
vrNordic_g02.greaterEqualThreshold.y = vrNordic_g02.timer.y >= vrNordic_g02.greaterEqualThreshold.threshold
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6693};
  modelica_boolean tmp2196;
  tmp2196 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4219]] /* vrNordic_g02.greaterEqualThreshold.threshold PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1018]] /* vrNordic_g02.greaterEqualThreshold.y DISCRETE */) = tmp2196;
  threadData->lastEquationSolved = 6693;
}

/*
equation index: 6694
type: SIMPLE_ASSIGN
vrNordic_g02.switch.y = if vrNordic_g02.greaterEqualThreshold.y then vrNordic_g02.gain1.y else vrNordic_g02.add.y
*/
void MyNordic_initialized_TestCase_initialized_eqFunction_6694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3492]] /* vrNordic_g02.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1018]] /* vrNordic_g02.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3479]] /* vrNordic_g02.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */));
  threadData->lastEquationSolved = 6694;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_9(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[458])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_6237,
    MyNordic_initialized_TestCase_initialized_eqFunction_6238,
    MyNordic_initialized_TestCase_initialized_eqFunction_6239,
    MyNordic_initialized_TestCase_initialized_eqFunction_6240,
    MyNordic_initialized_TestCase_initialized_eqFunction_6241,
    MyNordic_initialized_TestCase_initialized_eqFunction_6242,
    MyNordic_initialized_TestCase_initialized_eqFunction_6243,
    MyNordic_initialized_TestCase_initialized_eqFunction_6244,
    MyNordic_initialized_TestCase_initialized_eqFunction_6245,
    MyNordic_initialized_TestCase_initialized_eqFunction_6246,
    MyNordic_initialized_TestCase_initialized_eqFunction_6247,
    MyNordic_initialized_TestCase_initialized_eqFunction_6248,
    MyNordic_initialized_TestCase_initialized_eqFunction_6249,
    MyNordic_initialized_TestCase_initialized_eqFunction_6250,
    MyNordic_initialized_TestCase_initialized_eqFunction_6251,
    MyNordic_initialized_TestCase_initialized_eqFunction_6252,
    MyNordic_initialized_TestCase_initialized_eqFunction_6253,
    MyNordic_initialized_TestCase_initialized_eqFunction_6254,
    MyNordic_initialized_TestCase_initialized_eqFunction_6255,
    MyNordic_initialized_TestCase_initialized_eqFunction_6256,
    MyNordic_initialized_TestCase_initialized_eqFunction_6257,
    MyNordic_initialized_TestCase_initialized_eqFunction_6258,
    MyNordic_initialized_TestCase_initialized_eqFunction_6259,
    MyNordic_initialized_TestCase_initialized_eqFunction_6260,
    MyNordic_initialized_TestCase_initialized_eqFunction_6261,
    MyNordic_initialized_TestCase_initialized_eqFunction_6262,
    MyNordic_initialized_TestCase_initialized_eqFunction_6263,
    MyNordic_initialized_TestCase_initialized_eqFunction_6264,
    MyNordic_initialized_TestCase_initialized_eqFunction_6265,
    MyNordic_initialized_TestCase_initialized_eqFunction_6266,
    MyNordic_initialized_TestCase_initialized_eqFunction_6267,
    MyNordic_initialized_TestCase_initialized_eqFunction_6268,
    MyNordic_initialized_TestCase_initialized_eqFunction_6269,
    MyNordic_initialized_TestCase_initialized_eqFunction_6270,
    MyNordic_initialized_TestCase_initialized_eqFunction_6271,
    MyNordic_initialized_TestCase_initialized_eqFunction_6272,
    MyNordic_initialized_TestCase_initialized_eqFunction_6273,
    MyNordic_initialized_TestCase_initialized_eqFunction_6274,
    MyNordic_initialized_TestCase_initialized_eqFunction_6275,
    MyNordic_initialized_TestCase_initialized_eqFunction_6276,
    MyNordic_initialized_TestCase_initialized_eqFunction_6277,
    MyNordic_initialized_TestCase_initialized_eqFunction_6278,
    MyNordic_initialized_TestCase_initialized_eqFunction_6279,
    MyNordic_initialized_TestCase_initialized_eqFunction_6280,
    MyNordic_initialized_TestCase_initialized_eqFunction_6281,
    MyNordic_initialized_TestCase_initialized_eqFunction_6282,
    MyNordic_initialized_TestCase_initialized_eqFunction_6283,
    MyNordic_initialized_TestCase_initialized_eqFunction_6284,
    MyNordic_initialized_TestCase_initialized_eqFunction_6285,
    MyNordic_initialized_TestCase_initialized_eqFunction_6286,
    MyNordic_initialized_TestCase_initialized_eqFunction_6287,
    MyNordic_initialized_TestCase_initialized_eqFunction_6288,
    MyNordic_initialized_TestCase_initialized_eqFunction_6289,
    MyNordic_initialized_TestCase_initialized_eqFunction_6290,
    MyNordic_initialized_TestCase_initialized_eqFunction_6291,
    MyNordic_initialized_TestCase_initialized_eqFunction_6292,
    MyNordic_initialized_TestCase_initialized_eqFunction_6293,
    MyNordic_initialized_TestCase_initialized_eqFunction_6294,
    MyNordic_initialized_TestCase_initialized_eqFunction_6295,
    MyNordic_initialized_TestCase_initialized_eqFunction_6296,
    MyNordic_initialized_TestCase_initialized_eqFunction_6297,
    MyNordic_initialized_TestCase_initialized_eqFunction_6298,
    MyNordic_initialized_TestCase_initialized_eqFunction_6299,
    MyNordic_initialized_TestCase_initialized_eqFunction_6300,
    MyNordic_initialized_TestCase_initialized_eqFunction_6301,
    MyNordic_initialized_TestCase_initialized_eqFunction_6302,
    MyNordic_initialized_TestCase_initialized_eqFunction_6303,
    MyNordic_initialized_TestCase_initialized_eqFunction_6304,
    MyNordic_initialized_TestCase_initialized_eqFunction_6305,
    MyNordic_initialized_TestCase_initialized_eqFunction_6306,
    MyNordic_initialized_TestCase_initialized_eqFunction_6307,
    MyNordic_initialized_TestCase_initialized_eqFunction_6308,
    MyNordic_initialized_TestCase_initialized_eqFunction_6309,
    MyNordic_initialized_TestCase_initialized_eqFunction_6310,
    MyNordic_initialized_TestCase_initialized_eqFunction_6311,
    MyNordic_initialized_TestCase_initialized_eqFunction_6312,
    MyNordic_initialized_TestCase_initialized_eqFunction_6313,
    MyNordic_initialized_TestCase_initialized_eqFunction_6314,
    MyNordic_initialized_TestCase_initialized_eqFunction_6315,
    MyNordic_initialized_TestCase_initialized_eqFunction_6316,
    MyNordic_initialized_TestCase_initialized_eqFunction_6317,
    MyNordic_initialized_TestCase_initialized_eqFunction_6318,
    MyNordic_initialized_TestCase_initialized_eqFunction_6319,
    MyNordic_initialized_TestCase_initialized_eqFunction_6320,
    MyNordic_initialized_TestCase_initialized_eqFunction_6321,
    MyNordic_initialized_TestCase_initialized_eqFunction_6322,
    MyNordic_initialized_TestCase_initialized_eqFunction_6323,
    MyNordic_initialized_TestCase_initialized_eqFunction_6324,
    MyNordic_initialized_TestCase_initialized_eqFunction_6325,
    MyNordic_initialized_TestCase_initialized_eqFunction_6326,
    MyNordic_initialized_TestCase_initialized_eqFunction_6327,
    MyNordic_initialized_TestCase_initialized_eqFunction_6328,
    MyNordic_initialized_TestCase_initialized_eqFunction_6329,
    MyNordic_initialized_TestCase_initialized_eqFunction_6330,
    MyNordic_initialized_TestCase_initialized_eqFunction_6331,
    MyNordic_initialized_TestCase_initialized_eqFunction_6332,
    MyNordic_initialized_TestCase_initialized_eqFunction_6333,
    MyNordic_initialized_TestCase_initialized_eqFunction_6334,
    MyNordic_initialized_TestCase_initialized_eqFunction_6335,
    MyNordic_initialized_TestCase_initialized_eqFunction_6336,
    MyNordic_initialized_TestCase_initialized_eqFunction_6337,
    MyNordic_initialized_TestCase_initialized_eqFunction_6338,
    MyNordic_initialized_TestCase_initialized_eqFunction_6339,
    MyNordic_initialized_TestCase_initialized_eqFunction_6340,
    MyNordic_initialized_TestCase_initialized_eqFunction_6341,
    MyNordic_initialized_TestCase_initialized_eqFunction_6342,
    MyNordic_initialized_TestCase_initialized_eqFunction_6343,
    MyNordic_initialized_TestCase_initialized_eqFunction_6344,
    MyNordic_initialized_TestCase_initialized_eqFunction_6345,
    MyNordic_initialized_TestCase_initialized_eqFunction_6346,
    MyNordic_initialized_TestCase_initialized_eqFunction_6347,
    MyNordic_initialized_TestCase_initialized_eqFunction_6348,
    MyNordic_initialized_TestCase_initialized_eqFunction_6349,
    MyNordic_initialized_TestCase_initialized_eqFunction_6350,
    MyNordic_initialized_TestCase_initialized_eqFunction_6351,
    MyNordic_initialized_TestCase_initialized_eqFunction_6352,
    MyNordic_initialized_TestCase_initialized_eqFunction_6353,
    MyNordic_initialized_TestCase_initialized_eqFunction_6354,
    MyNordic_initialized_TestCase_initialized_eqFunction_6355,
    MyNordic_initialized_TestCase_initialized_eqFunction_6356,
    MyNordic_initialized_TestCase_initialized_eqFunction_6357,
    MyNordic_initialized_TestCase_initialized_eqFunction_6358,
    MyNordic_initialized_TestCase_initialized_eqFunction_6359,
    MyNordic_initialized_TestCase_initialized_eqFunction_6360,
    MyNordic_initialized_TestCase_initialized_eqFunction_6361,
    MyNordic_initialized_TestCase_initialized_eqFunction_6362,
    MyNordic_initialized_TestCase_initialized_eqFunction_6363,
    MyNordic_initialized_TestCase_initialized_eqFunction_6364,
    MyNordic_initialized_TestCase_initialized_eqFunction_6365,
    MyNordic_initialized_TestCase_initialized_eqFunction_6366,
    MyNordic_initialized_TestCase_initialized_eqFunction_6367,
    MyNordic_initialized_TestCase_initialized_eqFunction_6368,
    MyNordic_initialized_TestCase_initialized_eqFunction_6369,
    MyNordic_initialized_TestCase_initialized_eqFunction_6370,
    MyNordic_initialized_TestCase_initialized_eqFunction_6371,
    MyNordic_initialized_TestCase_initialized_eqFunction_6372,
    MyNordic_initialized_TestCase_initialized_eqFunction_6373,
    MyNordic_initialized_TestCase_initialized_eqFunction_6374,
    MyNordic_initialized_TestCase_initialized_eqFunction_6375,
    MyNordic_initialized_TestCase_initialized_eqFunction_6376,
    MyNordic_initialized_TestCase_initialized_eqFunction_6377,
    MyNordic_initialized_TestCase_initialized_eqFunction_6378,
    MyNordic_initialized_TestCase_initialized_eqFunction_6379,
    MyNordic_initialized_TestCase_initialized_eqFunction_6380,
    MyNordic_initialized_TestCase_initialized_eqFunction_6381,
    MyNordic_initialized_TestCase_initialized_eqFunction_6382,
    MyNordic_initialized_TestCase_initialized_eqFunction_6383,
    MyNordic_initialized_TestCase_initialized_eqFunction_6384,
    MyNordic_initialized_TestCase_initialized_eqFunction_6385,
    MyNordic_initialized_TestCase_initialized_eqFunction_6386,
    MyNordic_initialized_TestCase_initialized_eqFunction_6387,
    MyNordic_initialized_TestCase_initialized_eqFunction_6388,
    MyNordic_initialized_TestCase_initialized_eqFunction_6389,
    MyNordic_initialized_TestCase_initialized_eqFunction_6390,
    MyNordic_initialized_TestCase_initialized_eqFunction_6391,
    MyNordic_initialized_TestCase_initialized_eqFunction_6392,
    MyNordic_initialized_TestCase_initialized_eqFunction_6393,
    MyNordic_initialized_TestCase_initialized_eqFunction_6394,
    MyNordic_initialized_TestCase_initialized_eqFunction_6395,
    MyNordic_initialized_TestCase_initialized_eqFunction_6396,
    MyNordic_initialized_TestCase_initialized_eqFunction_6397,
    MyNordic_initialized_TestCase_initialized_eqFunction_6398,
    MyNordic_initialized_TestCase_initialized_eqFunction_6399,
    MyNordic_initialized_TestCase_initialized_eqFunction_6400,
    MyNordic_initialized_TestCase_initialized_eqFunction_6401,
    MyNordic_initialized_TestCase_initialized_eqFunction_6402,
    MyNordic_initialized_TestCase_initialized_eqFunction_6403,
    MyNordic_initialized_TestCase_initialized_eqFunction_6404,
    MyNordic_initialized_TestCase_initialized_eqFunction_6405,
    MyNordic_initialized_TestCase_initialized_eqFunction_6406,
    MyNordic_initialized_TestCase_initialized_eqFunction_6407,
    MyNordic_initialized_TestCase_initialized_eqFunction_6408,
    MyNordic_initialized_TestCase_initialized_eqFunction_6409,
    MyNordic_initialized_TestCase_initialized_eqFunction_6410,
    MyNordic_initialized_TestCase_initialized_eqFunction_6411,
    MyNordic_initialized_TestCase_initialized_eqFunction_6412,
    MyNordic_initialized_TestCase_initialized_eqFunction_6413,
    MyNordic_initialized_TestCase_initialized_eqFunction_6414,
    MyNordic_initialized_TestCase_initialized_eqFunction_6415,
    MyNordic_initialized_TestCase_initialized_eqFunction_6416,
    MyNordic_initialized_TestCase_initialized_eqFunction_6417,
    MyNordic_initialized_TestCase_initialized_eqFunction_6418,
    MyNordic_initialized_TestCase_initialized_eqFunction_6419,
    MyNordic_initialized_TestCase_initialized_eqFunction_6420,
    MyNordic_initialized_TestCase_initialized_eqFunction_6421,
    MyNordic_initialized_TestCase_initialized_eqFunction_6422,
    MyNordic_initialized_TestCase_initialized_eqFunction_6423,
    MyNordic_initialized_TestCase_initialized_eqFunction_6424,
    MyNordic_initialized_TestCase_initialized_eqFunction_6425,
    MyNordic_initialized_TestCase_initialized_eqFunction_6426,
    MyNordic_initialized_TestCase_initialized_eqFunction_6427,
    MyNordic_initialized_TestCase_initialized_eqFunction_6428,
    MyNordic_initialized_TestCase_initialized_eqFunction_6429,
    MyNordic_initialized_TestCase_initialized_eqFunction_6430,
    MyNordic_initialized_TestCase_initialized_eqFunction_6431,
    MyNordic_initialized_TestCase_initialized_eqFunction_6432,
    MyNordic_initialized_TestCase_initialized_eqFunction_6433,
    MyNordic_initialized_TestCase_initialized_eqFunction_6434,
    MyNordic_initialized_TestCase_initialized_eqFunction_6435,
    MyNordic_initialized_TestCase_initialized_eqFunction_6436,
    MyNordic_initialized_TestCase_initialized_eqFunction_6437,
    MyNordic_initialized_TestCase_initialized_eqFunction_6438,
    MyNordic_initialized_TestCase_initialized_eqFunction_6439,
    MyNordic_initialized_TestCase_initialized_eqFunction_6440,
    MyNordic_initialized_TestCase_initialized_eqFunction_6441,
    MyNordic_initialized_TestCase_initialized_eqFunction_6442,
    MyNordic_initialized_TestCase_initialized_eqFunction_6443,
    MyNordic_initialized_TestCase_initialized_eqFunction_6444,
    MyNordic_initialized_TestCase_initialized_eqFunction_6445,
    MyNordic_initialized_TestCase_initialized_eqFunction_6446,
    MyNordic_initialized_TestCase_initialized_eqFunction_6447,
    MyNordic_initialized_TestCase_initialized_eqFunction_6448,
    MyNordic_initialized_TestCase_initialized_eqFunction_6449,
    MyNordic_initialized_TestCase_initialized_eqFunction_6450,
    MyNordic_initialized_TestCase_initialized_eqFunction_6451,
    MyNordic_initialized_TestCase_initialized_eqFunction_6452,
    MyNordic_initialized_TestCase_initialized_eqFunction_6453,
    MyNordic_initialized_TestCase_initialized_eqFunction_6454,
    MyNordic_initialized_TestCase_initialized_eqFunction_6455,
    MyNordic_initialized_TestCase_initialized_eqFunction_6456,
    MyNordic_initialized_TestCase_initialized_eqFunction_6457,
    MyNordic_initialized_TestCase_initialized_eqFunction_6458,
    MyNordic_initialized_TestCase_initialized_eqFunction_6459,
    MyNordic_initialized_TestCase_initialized_eqFunction_6460,
    MyNordic_initialized_TestCase_initialized_eqFunction_6461,
    MyNordic_initialized_TestCase_initialized_eqFunction_6462,
    MyNordic_initialized_TestCase_initialized_eqFunction_6463,
    MyNordic_initialized_TestCase_initialized_eqFunction_6464,
    MyNordic_initialized_TestCase_initialized_eqFunction_6465,
    MyNordic_initialized_TestCase_initialized_eqFunction_6466,
    MyNordic_initialized_TestCase_initialized_eqFunction_6467,
    MyNordic_initialized_TestCase_initialized_eqFunction_6468,
    MyNordic_initialized_TestCase_initialized_eqFunction_6469,
    MyNordic_initialized_TestCase_initialized_eqFunction_6470,
    MyNordic_initialized_TestCase_initialized_eqFunction_6471,
    MyNordic_initialized_TestCase_initialized_eqFunction_6472,
    MyNordic_initialized_TestCase_initialized_eqFunction_6473,
    MyNordic_initialized_TestCase_initialized_eqFunction_6474,
    MyNordic_initialized_TestCase_initialized_eqFunction_6475,
    MyNordic_initialized_TestCase_initialized_eqFunction_6476,
    MyNordic_initialized_TestCase_initialized_eqFunction_6477,
    MyNordic_initialized_TestCase_initialized_eqFunction_6478,
    MyNordic_initialized_TestCase_initialized_eqFunction_6479,
    MyNordic_initialized_TestCase_initialized_eqFunction_6480,
    MyNordic_initialized_TestCase_initialized_eqFunction_6481,
    MyNordic_initialized_TestCase_initialized_eqFunction_6482,
    MyNordic_initialized_TestCase_initialized_eqFunction_6483,
    MyNordic_initialized_TestCase_initialized_eqFunction_6484,
    MyNordic_initialized_TestCase_initialized_eqFunction_6485,
    MyNordic_initialized_TestCase_initialized_eqFunction_6486,
    MyNordic_initialized_TestCase_initialized_eqFunction_6487,
    MyNordic_initialized_TestCase_initialized_eqFunction_6488,
    MyNordic_initialized_TestCase_initialized_eqFunction_6489,
    MyNordic_initialized_TestCase_initialized_eqFunction_6490,
    MyNordic_initialized_TestCase_initialized_eqFunction_6491,
    MyNordic_initialized_TestCase_initialized_eqFunction_6492,
    MyNordic_initialized_TestCase_initialized_eqFunction_6493,
    MyNordic_initialized_TestCase_initialized_eqFunction_6494,
    MyNordic_initialized_TestCase_initialized_eqFunction_6495,
    MyNordic_initialized_TestCase_initialized_eqFunction_6496,
    MyNordic_initialized_TestCase_initialized_eqFunction_6497,
    MyNordic_initialized_TestCase_initialized_eqFunction_6498,
    MyNordic_initialized_TestCase_initialized_eqFunction_6499,
    MyNordic_initialized_TestCase_initialized_eqFunction_6500,
    MyNordic_initialized_TestCase_initialized_eqFunction_6501,
    MyNordic_initialized_TestCase_initialized_eqFunction_6502,
    MyNordic_initialized_TestCase_initialized_eqFunction_6503,
    MyNordic_initialized_TestCase_initialized_eqFunction_6504,
    MyNordic_initialized_TestCase_initialized_eqFunction_6505,
    MyNordic_initialized_TestCase_initialized_eqFunction_6506,
    MyNordic_initialized_TestCase_initialized_eqFunction_6507,
    MyNordic_initialized_TestCase_initialized_eqFunction_6508,
    MyNordic_initialized_TestCase_initialized_eqFunction_6509,
    MyNordic_initialized_TestCase_initialized_eqFunction_6510,
    MyNordic_initialized_TestCase_initialized_eqFunction_6511,
    MyNordic_initialized_TestCase_initialized_eqFunction_6512,
    MyNordic_initialized_TestCase_initialized_eqFunction_6513,
    MyNordic_initialized_TestCase_initialized_eqFunction_6514,
    MyNordic_initialized_TestCase_initialized_eqFunction_6515,
    MyNordic_initialized_TestCase_initialized_eqFunction_6516,
    MyNordic_initialized_TestCase_initialized_eqFunction_6517,
    MyNordic_initialized_TestCase_initialized_eqFunction_6518,
    MyNordic_initialized_TestCase_initialized_eqFunction_6519,
    MyNordic_initialized_TestCase_initialized_eqFunction_6520,
    MyNordic_initialized_TestCase_initialized_eqFunction_6521,
    MyNordic_initialized_TestCase_initialized_eqFunction_6522,
    MyNordic_initialized_TestCase_initialized_eqFunction_6523,
    MyNordic_initialized_TestCase_initialized_eqFunction_6524,
    MyNordic_initialized_TestCase_initialized_eqFunction_6525,
    MyNordic_initialized_TestCase_initialized_eqFunction_6526,
    MyNordic_initialized_TestCase_initialized_eqFunction_6527,
    MyNordic_initialized_TestCase_initialized_eqFunction_6528,
    MyNordic_initialized_TestCase_initialized_eqFunction_6529,
    MyNordic_initialized_TestCase_initialized_eqFunction_6530,
    MyNordic_initialized_TestCase_initialized_eqFunction_6531,
    MyNordic_initialized_TestCase_initialized_eqFunction_6532,
    MyNordic_initialized_TestCase_initialized_eqFunction_6533,
    MyNordic_initialized_TestCase_initialized_eqFunction_6534,
    MyNordic_initialized_TestCase_initialized_eqFunction_6535,
    MyNordic_initialized_TestCase_initialized_eqFunction_6536,
    MyNordic_initialized_TestCase_initialized_eqFunction_6537,
    MyNordic_initialized_TestCase_initialized_eqFunction_6538,
    MyNordic_initialized_TestCase_initialized_eqFunction_6539,
    MyNordic_initialized_TestCase_initialized_eqFunction_6540,
    MyNordic_initialized_TestCase_initialized_eqFunction_6541,
    MyNordic_initialized_TestCase_initialized_eqFunction_6542,
    MyNordic_initialized_TestCase_initialized_eqFunction_6543,
    MyNordic_initialized_TestCase_initialized_eqFunction_6544,
    MyNordic_initialized_TestCase_initialized_eqFunction_6545,
    MyNordic_initialized_TestCase_initialized_eqFunction_6546,
    MyNordic_initialized_TestCase_initialized_eqFunction_6547,
    MyNordic_initialized_TestCase_initialized_eqFunction_6548,
    MyNordic_initialized_TestCase_initialized_eqFunction_6549,
    MyNordic_initialized_TestCase_initialized_eqFunction_6550,
    MyNordic_initialized_TestCase_initialized_eqFunction_6551,
    MyNordic_initialized_TestCase_initialized_eqFunction_6552,
    MyNordic_initialized_TestCase_initialized_eqFunction_6553,
    MyNordic_initialized_TestCase_initialized_eqFunction_6554,
    MyNordic_initialized_TestCase_initialized_eqFunction_6555,
    MyNordic_initialized_TestCase_initialized_eqFunction_6556,
    MyNordic_initialized_TestCase_initialized_eqFunction_6557,
    MyNordic_initialized_TestCase_initialized_eqFunction_6558,
    MyNordic_initialized_TestCase_initialized_eqFunction_6559,
    MyNordic_initialized_TestCase_initialized_eqFunction_6560,
    MyNordic_initialized_TestCase_initialized_eqFunction_6561,
    MyNordic_initialized_TestCase_initialized_eqFunction_6562,
    MyNordic_initialized_TestCase_initialized_eqFunction_6563,
    MyNordic_initialized_TestCase_initialized_eqFunction_6564,
    MyNordic_initialized_TestCase_initialized_eqFunction_6565,
    MyNordic_initialized_TestCase_initialized_eqFunction_6566,
    MyNordic_initialized_TestCase_initialized_eqFunction_6567,
    MyNordic_initialized_TestCase_initialized_eqFunction_6568,
    MyNordic_initialized_TestCase_initialized_eqFunction_6569,
    MyNordic_initialized_TestCase_initialized_eqFunction_6570,
    MyNordic_initialized_TestCase_initialized_eqFunction_6571,
    MyNordic_initialized_TestCase_initialized_eqFunction_6572,
    MyNordic_initialized_TestCase_initialized_eqFunction_6573,
    MyNordic_initialized_TestCase_initialized_eqFunction_6574,
    MyNordic_initialized_TestCase_initialized_eqFunction_6575,
    MyNordic_initialized_TestCase_initialized_eqFunction_6576,
    MyNordic_initialized_TestCase_initialized_eqFunction_6577,
    MyNordic_initialized_TestCase_initialized_eqFunction_6578,
    MyNordic_initialized_TestCase_initialized_eqFunction_6579,
    MyNordic_initialized_TestCase_initialized_eqFunction_6580,
    MyNordic_initialized_TestCase_initialized_eqFunction_6581,
    MyNordic_initialized_TestCase_initialized_eqFunction_6582,
    MyNordic_initialized_TestCase_initialized_eqFunction_6583,
    MyNordic_initialized_TestCase_initialized_eqFunction_6584,
    MyNordic_initialized_TestCase_initialized_eqFunction_6585,
    MyNordic_initialized_TestCase_initialized_eqFunction_6586,
    MyNordic_initialized_TestCase_initialized_eqFunction_6587,
    MyNordic_initialized_TestCase_initialized_eqFunction_6588,
    MyNordic_initialized_TestCase_initialized_eqFunction_6589,
    MyNordic_initialized_TestCase_initialized_eqFunction_6590,
    MyNordic_initialized_TestCase_initialized_eqFunction_6591,
    MyNordic_initialized_TestCase_initialized_eqFunction_6592,
    MyNordic_initialized_TestCase_initialized_eqFunction_6593,
    MyNordic_initialized_TestCase_initialized_eqFunction_6594,
    MyNordic_initialized_TestCase_initialized_eqFunction_6595,
    MyNordic_initialized_TestCase_initialized_eqFunction_6596,
    MyNordic_initialized_TestCase_initialized_eqFunction_6597,
    MyNordic_initialized_TestCase_initialized_eqFunction_6598,
    MyNordic_initialized_TestCase_initialized_eqFunction_6599,
    MyNordic_initialized_TestCase_initialized_eqFunction_6600,
    MyNordic_initialized_TestCase_initialized_eqFunction_6601,
    MyNordic_initialized_TestCase_initialized_eqFunction_6602,
    MyNordic_initialized_TestCase_initialized_eqFunction_6603,
    MyNordic_initialized_TestCase_initialized_eqFunction_6604,
    MyNordic_initialized_TestCase_initialized_eqFunction_6605,
    MyNordic_initialized_TestCase_initialized_eqFunction_6606,
    MyNordic_initialized_TestCase_initialized_eqFunction_6607,
    MyNordic_initialized_TestCase_initialized_eqFunction_6608,
    MyNordic_initialized_TestCase_initialized_eqFunction_6609,
    MyNordic_initialized_TestCase_initialized_eqFunction_6610,
    MyNordic_initialized_TestCase_initialized_eqFunction_6611,
    MyNordic_initialized_TestCase_initialized_eqFunction_6612,
    MyNordic_initialized_TestCase_initialized_eqFunction_6613,
    MyNordic_initialized_TestCase_initialized_eqFunction_6614,
    MyNordic_initialized_TestCase_initialized_eqFunction_6615,
    MyNordic_initialized_TestCase_initialized_eqFunction_6616,
    MyNordic_initialized_TestCase_initialized_eqFunction_6617,
    MyNordic_initialized_TestCase_initialized_eqFunction_6618,
    MyNordic_initialized_TestCase_initialized_eqFunction_6619,
    MyNordic_initialized_TestCase_initialized_eqFunction_6620,
    MyNordic_initialized_TestCase_initialized_eqFunction_6621,
    MyNordic_initialized_TestCase_initialized_eqFunction_6622,
    MyNordic_initialized_TestCase_initialized_eqFunction_6623,
    MyNordic_initialized_TestCase_initialized_eqFunction_6624,
    MyNordic_initialized_TestCase_initialized_eqFunction_6625,
    MyNordic_initialized_TestCase_initialized_eqFunction_6626,
    MyNordic_initialized_TestCase_initialized_eqFunction_6627,
    MyNordic_initialized_TestCase_initialized_eqFunction_6628,
    MyNordic_initialized_TestCase_initialized_eqFunction_6629,
    MyNordic_initialized_TestCase_initialized_eqFunction_6630,
    MyNordic_initialized_TestCase_initialized_eqFunction_6631,
    MyNordic_initialized_TestCase_initialized_eqFunction_6632,
    MyNordic_initialized_TestCase_initialized_eqFunction_6633,
    MyNordic_initialized_TestCase_initialized_eqFunction_6634,
    MyNordic_initialized_TestCase_initialized_eqFunction_6635,
    MyNordic_initialized_TestCase_initialized_eqFunction_6636,
    MyNordic_initialized_TestCase_initialized_eqFunction_6637,
    MyNordic_initialized_TestCase_initialized_eqFunction_6638,
    MyNordic_initialized_TestCase_initialized_eqFunction_6639,
    MyNordic_initialized_TestCase_initialized_eqFunction_6640,
    MyNordic_initialized_TestCase_initialized_eqFunction_6641,
    MyNordic_initialized_TestCase_initialized_eqFunction_6642,
    MyNordic_initialized_TestCase_initialized_eqFunction_6643,
    MyNordic_initialized_TestCase_initialized_eqFunction_6644,
    MyNordic_initialized_TestCase_initialized_eqFunction_6645,
    MyNordic_initialized_TestCase_initialized_eqFunction_6646,
    MyNordic_initialized_TestCase_initialized_eqFunction_6647,
    MyNordic_initialized_TestCase_initialized_eqFunction_6648,
    MyNordic_initialized_TestCase_initialized_eqFunction_6649,
    MyNordic_initialized_TestCase_initialized_eqFunction_6650,
    MyNordic_initialized_TestCase_initialized_eqFunction_6651,
    MyNordic_initialized_TestCase_initialized_eqFunction_6652,
    MyNordic_initialized_TestCase_initialized_eqFunction_6653,
    MyNordic_initialized_TestCase_initialized_eqFunction_6654,
    MyNordic_initialized_TestCase_initialized_eqFunction_6655,
    MyNordic_initialized_TestCase_initialized_eqFunction_6656,
    MyNordic_initialized_TestCase_initialized_eqFunction_6657,
    MyNordic_initialized_TestCase_initialized_eqFunction_6658,
    MyNordic_initialized_TestCase_initialized_eqFunction_6659,
    MyNordic_initialized_TestCase_initialized_eqFunction_6660,
    MyNordic_initialized_TestCase_initialized_eqFunction_6661,
    MyNordic_initialized_TestCase_initialized_eqFunction_6662,
    MyNordic_initialized_TestCase_initialized_eqFunction_6663,
    MyNordic_initialized_TestCase_initialized_eqFunction_6664,
    MyNordic_initialized_TestCase_initialized_eqFunction_6665,
    MyNordic_initialized_TestCase_initialized_eqFunction_6666,
    MyNordic_initialized_TestCase_initialized_eqFunction_6667,
    MyNordic_initialized_TestCase_initialized_eqFunction_6668,
    MyNordic_initialized_TestCase_initialized_eqFunction_6669,
    MyNordic_initialized_TestCase_initialized_eqFunction_6670,
    MyNordic_initialized_TestCase_initialized_eqFunction_6671,
    MyNordic_initialized_TestCase_initialized_eqFunction_6672,
    MyNordic_initialized_TestCase_initialized_eqFunction_6673,
    MyNordic_initialized_TestCase_initialized_eqFunction_6674,
    MyNordic_initialized_TestCase_initialized_eqFunction_6675,
    MyNordic_initialized_TestCase_initialized_eqFunction_6676,
    MyNordic_initialized_TestCase_initialized_eqFunction_6677,
    MyNordic_initialized_TestCase_initialized_eqFunction_6678,
    MyNordic_initialized_TestCase_initialized_eqFunction_6679,
    MyNordic_initialized_TestCase_initialized_eqFunction_6680,
    MyNordic_initialized_TestCase_initialized_eqFunction_6681,
    MyNordic_initialized_TestCase_initialized_eqFunction_6682,
    MyNordic_initialized_TestCase_initialized_eqFunction_6683,
    MyNordic_initialized_TestCase_initialized_eqFunction_6684,
    MyNordic_initialized_TestCase_initialized_eqFunction_6685,
    MyNordic_initialized_TestCase_initialized_eqFunction_6686,
    MyNordic_initialized_TestCase_initialized_eqFunction_6687,
    MyNordic_initialized_TestCase_initialized_eqFunction_6688,
    MyNordic_initialized_TestCase_initialized_eqFunction_6689,
    MyNordic_initialized_TestCase_initialized_eqFunction_6690,
    MyNordic_initialized_TestCase_initialized_eqFunction_6691,
    MyNordic_initialized_TestCase_initialized_eqFunction_6692,
    MyNordic_initialized_TestCase_initialized_eqFunction_6693,
    MyNordic_initialized_TestCase_initialized_eqFunction_6694
  };
  
  for (int id = 0; id < 458; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif