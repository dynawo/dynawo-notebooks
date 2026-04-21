#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 15677
type: SIMPLE_ASSIGN
$DAEres1217 = if g13.running.value then (-g13.RQ1PPu) * g13.iQ1Pu - 0.0031830988618379067 * der(g13.lambdaQ1Pu) else der(g13.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15677};
  (data->simulationInfo->daeModeData->residualVars[1217]) /* $DAEres1217 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1484]] /* g13.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1582]] /* g13.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* der(g13.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* der(g13.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15677;
}
/*
equation index: 15678
type: SIMPLE_ASSIGN
g13.iStatorPu.im = if g13.running.value then g13.rTfoPu * g13.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15678;
}
/*
equation index: 15679
type: SIMPLE_ASSIGN
g13.uPu.im = if g13.running.value then g13.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1605]] /* g13.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15679;
}
/*
equation index: 15680
type: SIMPLE_ASSIGN
g13.UPu = if g13.running.value then (g13.terminal.V.re ^ 2.0 + g13.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15680};
  modelica_real tmp1635;
  modelica_real tmp1636;
  modelica_real tmp1637;
  modelica_boolean tmp1638;
  modelica_real tmp1639;
  tmp1638 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp1638)
  {
    tmp1635 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */);
    tmp1636 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */);
    tmp1637 = (tmp1635 * tmp1635) + (tmp1636 * tmp1636);
    if(tmp1637 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1637, 0.5);
    }
    tmp1639 = sqrt(tmp1637);
  }
  else
  {
    tmp1639 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1576]] /* g13.UPu variable */) = tmp1639;
  threadData->lastEquationSolved = 15680;
}
/*
equation index: 15681
type: SIMPLE_ASSIGN
goverNordic_g13.PGenPu = if g13.running.value then (-g13.terminal.V.re) * g13.terminal.i.re - g13.terminal.V.im * g13.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2148]] /* goverNordic_g13.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15681;
}
/*
equation index: 15682
type: SIMPLE_ASSIGN
goverNordic_g13.perUnitP.y = goverNordic_g13.perUnitP.k * goverNordic_g13.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2164]] /* goverNordic_g13.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* goverNordic_g13.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2148]] /* goverNordic_g13.PGenPu variable */));
  threadData->lastEquationSolved = 15682;
}
/*
equation index: 15683
type: SIMPLE_ASSIGN
$DAEres1371 = goverNordic_g13.firstOrder1.k * goverNordic_g13.perUnitP.y + (-goverNordic_g13.firstOrder1.y) - der(goverNordic_g13.firstOrder1.y) * goverNordic_g13.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15683};
  (data->simulationInfo->daeModeData->residualVars[1371]) /* $DAEres1371 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2696]] /* goverNordic_g13.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2164]] /* goverNordic_g13.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* goverNordic_g13.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* der(goverNordic_g13.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2695]] /* goverNordic_g13.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15683;
}
/*
equation index: 15684
type: SIMPLE_ASSIGN
g13.PGen = if g13.running.value then 100.0 * goverNordic_g13.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1569]] /* g13.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2148]] /* goverNordic_g13.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15684;
}
/*
equation index: 15685
type: SIMPLE_ASSIGN
g13.QGenPu = if g13.running.value then g13.terminal.V.re * g13.terminal.i.im - g13.terminal.V.im * g13.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1573]] /* g13.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15685;
}
/*
equation index: 15686
type: SIMPLE_ASSIGN
g13.QGen = if g13.running.value then 100.0 * g13.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1572]] /* g13.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1573]] /* g13.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15686;
}
/*
equation index: 15687
type: SIMPLE_ASSIGN
g13.uStatorPu.re = if g13.running.value then (g13.terminal.V.re + (-100.0) * (g13.terminal.i.re * g13.RTfoPu - g13.terminal.i.im * g13.XTfoPu) / g13.SNom) / g13.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* g13.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* g13.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */),"g13.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */),"g13.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15687;
}
/*
equation index: 15688
type: SIMPLE_ASSIGN
g13.uStatorPu.im = if g13.running.value then (g13.terminal.V.im + (-100.0) * (g13.terminal.i.re * g13.XTfoPu + g13.terminal.i.im * g13.RTfoPu) / g13.SNom) / g13.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* g13.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* g13.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */),"g13.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */),"g13.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15688;
}
/*
equation index: 15689
type: SIMPLE_ASSIGN
vrNordic_g13.UsPu = if g13.running.value then if g13.uStatorPu.re == 0.0 and g13.uStatorPu.im == 0.0 then 0.0 else (g13.uStatorPu.re ^ 2.0 + g13.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15689};
  modelica_real tmp1640;
  modelica_real tmp1641;
  modelica_real tmp1642;
  modelica_boolean tmp1643;
  modelica_real tmp1644;
  modelica_boolean tmp1645;
  modelica_real tmp1646;
  tmp1645 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp1645)
  {
    tmp1643 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */) == 0.0));
    if(tmp1643)
    {
      tmp1644 = 0.0;
    }
    else
    {
      tmp1640 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */);
      tmp1641 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */);
      tmp1642 = (tmp1640 * tmp1640) + (tmp1641 * tmp1641);
      if(tmp1642 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1642, 0.5);
      }
      tmp1644 = sqrt(tmp1642);
    }
    tmp1646 = tmp1644;
  }
  else
  {
    tmp1646 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vrNordic_g13.UsPu variable */) = tmp1646;
  threadData->lastEquationSolved = 15689;
}
/*
equation index: 15690
type: SIMPLE_ASSIGN
vrNordic_g13.dU.y = vrNordic_g13.const1.k - vrNordic_g13.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3739]] /* vrNordic_g13.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5080]] /* vrNordic_g13.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* vrNordic_g13.UsPu variable */);
  threadData->lastEquationSolved = 15690;
}
/*
equation index: 15691
type: SIMPLE_ASSIGN
vrNordic_g13.add.y = vrNordic_g13.add.k1 * vrNordic_g13.dU.y + vrNordic_g13.add.k2 * vrNordic_g13.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5077]] /* vrNordic_g13.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3739]] /* vrNordic_g13.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5078]] /* vrNordic_g13.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3753]] /* vrNordic_g13.limiter.y variable */));
  threadData->lastEquationSolved = 15691;
}
/*
equation index: 15692
type: SIMPLE_ASSIGN
vrNordic_g13.switch.y = if vrNordic_g13.greaterEqualThreshold.y then vrNordic_g13.gain1.y else vrNordic_g13.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vrNordic_g13.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1051]] /* vrNordic_g13.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3743]] /* vrNordic_g13.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */));
  threadData->lastEquationSolved = 15692;
}
/*
equation index: 15693
type: SIMPLE_ASSIGN
vrNordic_g13.min1.y = if vrNordic_g13.switch.y < vrNordic_g13.add.y then vrNordic_g13.switch.y else vrNordic_g13.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15693};
  modelica_boolean tmp1647;
  modelica_real tmp1648;
  modelica_real tmp1649;
  tmp1648 = 1.0;
  tmp1649 = 1.0;
  relationhysteresis(data, &tmp1647, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vrNordic_g13.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */), tmp1648, tmp1649, 420, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3754]] /* vrNordic_g13.min1.y variable */) = (tmp1647?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vrNordic_g13.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */));
  threadData->lastEquationSolved = 15693;
}
/*
equation index: 15694
type: SIMPLE_ASSIGN
vrNordic_g13.kMulDU.y = vrNordic_g13.kMulDU.k * vrNordic_g13.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3744]] /* vrNordic_g13.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5089]] /* vrNordic_g13.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3754]] /* vrNordic_g13.min1.y variable */));
  threadData->lastEquationSolved = 15694;
}
/*
equation index: 15695
type: SIMPLE_ASSIGN
$DAEres1372 = vrNordic_g13.leadLag.a_end * vrNordic_g13.kMulDU.y + (-vrNordic_g13.leadLag.a[2]) * vrNordic_g13.leadLag.x_scaled[1] - der(vrNordic_g13.leadLag.x_scaled[1]) * vrNordic_g13.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15695};
  (data->simulationInfo->daeModeData->residualVars[1372]) /* $DAEres1372 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5094]] /* vrNordic_g13.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3744]] /* vrNordic_g13.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5093]] /* vrNordic_g13.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* vrNordic_g13.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* der(vrNordic_g13.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5092]] /* vrNordic_g13.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15695;
}
/*
equation index: 15696
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.y = (vrNordic_g13.leadLag.bb[2] - vrNordic_g13.leadLag.d * vrNordic_g13.leadLag.a[2]) * vrNordic_g13.leadLag.x[1] + vrNordic_g13.leadLag.d * vrNordic_g13.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3746]] /* vrNordic_g13.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5098]] /* vrNordic_g13.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5099]] /* vrNordic_g13.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5093]] /* vrNordic_g13.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3745]] /* vrNordic_g13.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5099]] /* vrNordic_g13.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3744]] /* vrNordic_g13.kMulDU.y variable */));
  threadData->lastEquationSolved = 15696;
}
/*
equation index: 15697
type: SIMPLE_ASSIGN
vrNordic_g13.feedback1.y = vrNordic_g13.leadLag.y - vrNordic_g13.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3741]] /* vrNordic_g13.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3746]] /* vrNordic_g13.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15697;
}
/*
equation index: 15698
type: SIMPLE_ASSIGN
vrNordic_g13.gain.y = vrNordic_g13.gain.k * vrNordic_g13.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5086]] /* vrNordic_g13.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3741]] /* vrNordic_g13.feedback1.y variable */));
  threadData->lastEquationSolved = 15698;
}
/*
equation index: 15699
type: SIMPLE_ASSIGN
$DAEres1373 = (if vrNordic_g13.limIntegrator.y < vrNordic_g13.limIntegrator.outMin and vrNordic_g13.limIntegrator.k * vrNordic_g13.gain.y < 0.0 or vrNordic_g13.limIntegrator.y > vrNordic_g13.limIntegrator.outMax and vrNordic_g13.limIntegrator.k * vrNordic_g13.gain.y > 0.0 then 0.0 else vrNordic_g13.limIntegrator.k * vrNordic_g13.gain.y) - der(vrNordic_g13.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15699};
  modelica_boolean tmp1650;
  modelica_real tmp1651;
  modelica_real tmp1652;
  modelica_boolean tmp1653;
  modelica_real tmp1654;
  modelica_real tmp1655;
  modelica_boolean tmp1656;
  modelica_real tmp1657;
  modelica_real tmp1658;
  modelica_boolean tmp1659;
  modelica_real tmp1660;
  modelica_real tmp1661;
  tmp1651 = 1.0;
  tmp1652 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5131]] /* vrNordic_g13.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1650, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5131]] /* vrNordic_g13.limIntegrator.outMin PARAM */), tmp1651, tmp1652, 424, Less, LessZC);
  tmp1654 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */))) * (1.0);
  tmp1655 = 0.0;
  relationhysteresis(data, &tmp1653, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)), 0.0, tmp1654, tmp1655, 425, Less, LessZC);
  tmp1657 = 1.0;
  tmp1658 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5130]] /* vrNordic_g13.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1656, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5130]] /* vrNordic_g13.limIntegrator.outMax PARAM */), tmp1657, tmp1658, 426, Greater, GreaterZC);
  tmp1660 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */))) * (1.0);
  tmp1661 = 0.0;
  relationhysteresis(data, &tmp1659, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)), 0.0, tmp1660, tmp1661, 427, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1373]) /* $DAEres1373 DAE_RESIDUAL_VAR */ = (((tmp1650 && tmp1653) || (tmp1656 && tmp1659))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* der(vrNordic_g13.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15699;
}
/*
equation index: 15700
type: SIMPLE_ASSIGN
g13.iStatorPu.re = if g13.running.value then g13.rTfoPu * g13.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15700;
}
/*
equation index: 15701
type: SIMPLE_ASSIGN
g13.sStatorPu.re = if g13.running.value then g13.uStatorPu.re * g13.iStatorPu.re + g13.uStatorPu.im * g13.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1598]] /* g13.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15701;
}
/*
equation index: 15702
type: SIMPLE_ASSIGN
g13.sStatorPu.im = if g13.running.value then g13.uStatorPu.im * g13.iStatorPu.re - g13.uStatorPu.re * g13.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1597]] /* g13.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15702;
}
/*
equation index: 15703
type: SIMPLE_ASSIGN
g13.QStatorPu = if g13.running.value then -g13.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1574]] /* g13.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1597]] /* g13.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15703;
}
/*
equation index: 15704
type: SIMPLE_ASSIGN
g13.QStatorPuQNom = if g13.running.value then 100.0 * g13.QStatorPu / g13.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1575]] /* g13.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1574]] /* g13.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* g13.QNomAlt PARAM */),"g13.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15704;
}
/*
equation index: 15705
type: SIMPLE_ASSIGN
g13.IStatorPu = if g13.running.value then if g13.iStatorPu.re == 0.0 and g13.iStatorPu.im == 0.0 then 0.0 else (g13.iStatorPu.re ^ 2.0 + g13.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15705};
  modelica_real tmp1662;
  modelica_real tmp1663;
  modelica_real tmp1664;
  modelica_boolean tmp1665;
  modelica_real tmp1666;
  modelica_boolean tmp1667;
  modelica_real tmp1668;
  tmp1667 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp1667)
  {
    tmp1665 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */) == 0.0));
    if(tmp1665)
    {
      tmp1666 = 0.0;
    }
    else
    {
      tmp1662 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */);
      tmp1663 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */);
      tmp1664 = (tmp1662 * tmp1662) + (tmp1663 * tmp1663);
      if(tmp1664 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1664, 0.5);
      }
      tmp1666 = sqrt(tmp1664);
    }
    tmp1668 = tmp1666;
  }
  else
  {
    tmp1668 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1566]] /* g13.IStatorPu variable */) = tmp1668;
  threadData->lastEquationSolved = 15705;
}
/*
equation index: 15706
type: SIMPLE_ASSIGN
$whenCondition28 = not pre(g12.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15706};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[200]] /* $whenCondition28 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[514] /* g12.running.value DISCRETE */));
  threadData->lastEquationSolved = 15706;
}
/*
equation index: 15707
type: WHEN

when {} then
  g12.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15707};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[200]] /* $whenCondition28 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[200] /* $whenCondition28 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15707;
}
/*
equation index: 15709
type: SIMPLE_ASSIGN
$whenCondition30 = not g12.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15709};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[223]] /* $whenCondition30 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */));
  threadData->lastEquationSolved = 15709;
}
/*
equation index: 15710
type: SIMPLE_ASSIGN
$whenCondition29 = g12.running.value and not pre(g12.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15710};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[211]] /* $whenCondition29 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[514] /* g12.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15710;
}
/*
equation index: 15711
type: WHEN

when {$whenCondition30} then
  g12.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15711};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[223]] /* $whenCondition30 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[223] /* $whenCondition30 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* g12.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[211]] /* $whenCondition29 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[211] /* $whenCondition29 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* g12.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15711;
}
/*
equation index: 15713
type: SIMPLE_ASSIGN
g12.converter.u = Integer(g12.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15713};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* g12.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[23]] /* g12.state DISCRETE */)));
  threadData->lastEquationSolved = 15713;
}
/*
equation index: 15714
type: SIMPLE_ASSIGN
g12.genState = (*Real*)(g12.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1534]] /* g12.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[22]] /* g12.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15714;
}
/*
equation index: 15715
type: SIMPLE_ASSIGN
$DAEres128 = if g12.running.value then der(g12.theta) - 314.1592653589793 * (g12.omegaPu - omegaCOI) else der(g12.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15715};
  (data->simulationInfo->daeModeData->residualVars[128]) /* $DAEres128 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(g12.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* der(g12.theta) STATE_DER */));
  threadData->lastEquationSolved = 15715;
}
/*
equation index: 15716
type: SIMPLE_ASSIGN
g12.cmPu = if g12.running.value then g12.PmPu / g12.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1532]] /* g12.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1525]] /* g12.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */),"g12.omegaPu"):0.0);
  threadData->lastEquationSolved = 15716;
}
/*
equation index: 15717
type: SIMPLE_ASSIGN
g12.ufPu = if g12.running.value then vrNordic_g12.limIntegrator.y * g12.Kuf * g12.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1564]] /* g12.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* g12.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15717;
}
/*
equation index: 15718
type: SIMPLE_ASSIGN
$DAEres232 = if g12.running.value then g12.mqsPu - g12.MqPPu / (1.0 + g12.mq * g12.lambdaAirGapPu ^ g12.nq) else g12.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15718};
  modelica_real tmp1669;
  modelica_real tmp1670;
  modelica_real tmp1671;
  modelica_real tmp1672;
  modelica_real tmp1673;
  modelica_real tmp1674;
  modelica_real tmp1675;
  modelica_boolean tmp1676;
  modelica_real tmp1677;
  tmp1676 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp1676)
  {
    tmp1669 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1545]] /* g12.lambdaAirGapPu variable */);
    tmp1670 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1414]] /* g12.nq PARAM */);
    if(tmp1669 < 0.0 && tmp1670 != 0.0)
    {
      tmp1672 = modf(tmp1670, &tmp1673);
      
      if(tmp1672 > 0.5)
      {
        tmp1672 -= 1.0;
        tmp1673 += 1.0;
      }
      else if(tmp1672 < -0.5)
      {
        tmp1672 += 1.0;
        tmp1673 -= 1.0;
      }
      
      if(fabs(tmp1672) < 1e-10)
        tmp1671 = pow(tmp1669, tmp1673);
      else
      {
        tmp1675 = modf(1.0/tmp1670, &tmp1674);
        if(tmp1675 > 0.5)
        {
          tmp1675 -= 1.0;
          tmp1674 += 1.0;
        }
        else if(tmp1675 < -0.5)
        {
          tmp1675 += 1.0;
          tmp1674 -= 1.0;
        }
        if(fabs(tmp1675) < 1e-10 && ((unsigned long)tmp1674 & 1))
        {
          tmp1671 = -pow(-tmp1669, tmp1672)*pow(tmp1669, tmp1673);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1669, tmp1670);
        }
      }
    }
    else
    {
      tmp1671 = pow(tmp1669, tmp1670);
    }
    if(isnan(tmp1671) || isinf(tmp1671))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1669, tmp1670);
    }
    tmp1677 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1550]] /* g12.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1367]] /* g12.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1412]] /* g12.mq PARAM */)) * (tmp1671),"1.0 + g12.mq * g12.lambdaAirGapPu ^ g12.nq"));
  }
  else
  {
    tmp1677 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1550]] /* g12.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[232]) /* $DAEres232 DAE_RESIDUAL_VAR */ = tmp1677;
  threadData->lastEquationSolved = 15718;
}
/*
equation index: 15719
type: SIMPLE_ASSIGN
$DAEres233 = if g12.running.value then g12.mdsPu - g12.MdPPu / (1.0 + g12.md * g12.lambdaAirGapPu ^ g12.nd) else g12.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15719};
  modelica_real tmp1678;
  modelica_real tmp1679;
  modelica_real tmp1680;
  modelica_real tmp1681;
  modelica_real tmp1682;
  modelica_real tmp1683;
  modelica_real tmp1684;
  modelica_boolean tmp1685;
  modelica_real tmp1686;
  tmp1685 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp1685)
  {
    tmp1678 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1545]] /* g12.lambdaAirGapPu variable */);
    tmp1679 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1413]] /* g12.nd PARAM */);
    if(tmp1678 < 0.0 && tmp1679 != 0.0)
    {
      tmp1681 = modf(tmp1679, &tmp1682);
      
      if(tmp1681 > 0.5)
      {
        tmp1681 -= 1.0;
        tmp1682 += 1.0;
      }
      else if(tmp1681 < -0.5)
      {
        tmp1681 += 1.0;
        tmp1682 -= 1.0;
      }
      
      if(fabs(tmp1681) < 1e-10)
        tmp1680 = pow(tmp1678, tmp1682);
      else
      {
        tmp1684 = modf(1.0/tmp1679, &tmp1683);
        if(tmp1684 > 0.5)
        {
          tmp1684 -= 1.0;
          tmp1683 += 1.0;
        }
        else if(tmp1684 < -0.5)
        {
          tmp1684 += 1.0;
          tmp1683 -= 1.0;
        }
        if(fabs(tmp1684) < 1e-10 && ((unsigned long)tmp1683 & 1))
        {
          tmp1680 = -pow(-tmp1678, tmp1681)*pow(tmp1678, tmp1682);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1678, tmp1679);
        }
      }
    }
    else
    {
      tmp1680 = pow(tmp1678, tmp1679);
    }
    if(isnan(tmp1680) || isinf(tmp1680))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1678, tmp1679);
    }
    tmp1686 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1548]] /* g12.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1361]] /* g12.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1411]] /* g12.md PARAM */)) * (tmp1680),"1.0 + g12.md * g12.lambdaAirGapPu ^ g12.nd"));
  }
  else
  {
    tmp1686 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1548]] /* g12.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[233]) /* $DAEres233 DAE_RESIDUAL_VAR */ = tmp1686;
  threadData->lastEquationSolved = 15719;
}
/*
equation index: 15720
type: SIMPLE_ASSIGN
$DAEres234 = if g12.running.value then g12.cos2Eta - (g12.lambdaADPu / g12.lambdaAirGapPu) ^ 2.0 else g12.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15720};
  modelica_real tmp1687;
  modelica_boolean tmp1688;
  modelica_real tmp1689;
  tmp1688 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp1688)
  {
    tmp1687 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1543]] /* g12.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1545]] /* g12.lambdaAirGapPu variable */),"g12.lambdaAirGapPu");
    tmp1689 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1533]] /* g12.cos2Eta variable */) - ((tmp1687 * tmp1687));
  }
  else
  {
    tmp1689 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1533]] /* g12.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[234]) /* $DAEres234 DAE_RESIDUAL_VAR */ = tmp1689;
  threadData->lastEquationSolved = 15720;
}
/*
equation index: 15721
type: SIMPLE_ASSIGN
$DAEres235 = if g12.running.value then g12.miPu - (g12.mdsPu * g12.cos2Eta + g12.mqsPu * g12.sin2Eta) else g12.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15721};
  (data->simulationInfo->daeModeData->residualVars[235]) /* $DAEres235 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1549]] /* g12.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1548]] /* g12.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1533]] /* g12.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1550]] /* g12.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1553]] /* g12.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1549]] /* g12.miPu variable */));
  threadData->lastEquationSolved = 15721;
}
/*
equation index: 15722
type: SIMPLE_ASSIGN
$DAEres236 = if g12.running.value then g12.MqSatPPu - (g12.miPu - g12.MsalPu * g12.cos2Eta) else g12.MqSatPPu - g12.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15722};
  (data->simulationInfo->daeModeData->residualVars[236]) /* $DAEres236 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1549]] /* g12.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1371]] /* g12.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1533]] /* g12.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1367]] /* g12.MqPPu PARAM */));
  threadData->lastEquationSolved = 15722;
}
/*
equation index: 15723
type: SIMPLE_ASSIGN
$DAEres237 = if g12.running.value then g12.lambdaQ2Pu - (g12.MqSatPPu * (g12.iqPu + g12.iQ1Pu) + (g12.MqSatPPu + g12.LQ2PPu) * g12.iQ2Pu) else g12.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15723};
  (data->simulationInfo->daeModeData->residualVars[237]) /* $DAEres237 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* g12.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1536]] /* g12.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* g12.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1537]] /* g12.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1537]] /* g12.iQ2Pu variable */));
  threadData->lastEquationSolved = 15723;
}
/*
equation index: 15724
type: SIMPLE_ASSIGN
$DAEres238 = if g12.running.value then g12.lambdaQ1Pu - (g12.MqSatPPu * g12.iqPu + (g12.MqSatPPu + g12.LQ1PPu) * g12.iQ1Pu + g12.MqSatPPu * g12.iQ2Pu) else g12.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15724};
  (data->simulationInfo->daeModeData->residualVars[238]) /* $DAEres238 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* g12.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* g12.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1536]] /* g12.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1537]] /* g12.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1536]] /* g12.iQ1Pu variable */));
  threadData->lastEquationSolved = 15724;
}
/*
equation index: 15725
type: SIMPLE_ASSIGN
$DAEres239 = if g12.running.value then g12.lambdaAQPu - g12.MqSatPPu * (g12.iqPu + g12.iQ1Pu + g12.iQ2Pu) else g12.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15725};
  (data->simulationInfo->daeModeData->residualVars[239]) /* $DAEres239 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1544]] /* g12.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1536]] /* g12.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1537]] /* g12.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1544]] /* g12.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15725;
}
/*
equation index: 15726
type: SIMPLE_ASSIGN
$DAEres240 = if g12.running.value then g12.lambdaAirGapPu - sqrt(g12.lambdaADPu ^ 2.0 + g12.lambdaAQPu ^ 2.0) else g12.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15726};
  modelica_real tmp1690;
  modelica_real tmp1691;
  modelica_real tmp1692;
  modelica_boolean tmp1693;
  modelica_real tmp1694;
  tmp1693 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp1693)
  {
    tmp1690 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1543]] /* g12.lambdaADPu variable */);
    tmp1691 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1544]] /* g12.lambdaAQPu variable */);
    tmp1692 = (tmp1690 * tmp1690) + (tmp1691 * tmp1691);
    if(!(tmp1692 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g12.lambdaADPu ^ 2.0 + g12.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1692);
      }
    }
    tmp1694 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1545]] /* g12.lambdaAirGapPu variable */) - sqrt(tmp1692);
  }
  else
  {
    tmp1694 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1545]] /* g12.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[240]) /* $DAEres240 DAE_RESIDUAL_VAR */ = tmp1694;
  threadData->lastEquationSolved = 15726;
}
/*
equation index: 15727
type: SIMPLE_ASSIGN
$DAEres241 = if g12.running.value then g12.sin2Eta - (g12.lambdaAQPu / g12.lambdaAirGapPu) ^ 2.0 else g12.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15727};
  modelica_real tmp1695;
  modelica_boolean tmp1696;
  modelica_real tmp1697;
  tmp1696 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp1696)
  {
    tmp1695 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1544]] /* g12.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1545]] /* g12.lambdaAirGapPu variable */),"g12.lambdaAirGapPu");
    tmp1697 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1553]] /* g12.sin2Eta variable */) - ((tmp1695 * tmp1695));
  }
  else
  {
    tmp1697 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1553]] /* g12.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[241]) /* $DAEres241 DAE_RESIDUAL_VAR */ = tmp1697;
  threadData->lastEquationSolved = 15727;
}
/*
equation index: 15728
type: SIMPLE_ASSIGN
$DAEres242 = if g12.running.value then g12.MdSatPPu - (g12.miPu + g12.MsalPu * g12.sin2Eta) else g12.MdSatPPu - g12.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15728};
  (data->simulationInfo->daeModeData->residualVars[242]) /* $DAEres242 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1549]] /* g12.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1371]] /* g12.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1553]] /* g12.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1361]] /* g12.MdPPu PARAM */));
  threadData->lastEquationSolved = 15728;
}
/*
equation index: 15729
type: SIMPLE_ASSIGN
$DAEres243 = if g12.running.value then g12.uqPu - ((g12.RaPPu + g12.RTfoPu) * g12.iqPu + g12.omegaPu * g12.lambdadPu) else g12.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15729};
  (data->simulationInfo->daeModeData->residualVars[243]) /* $DAEres243 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1565]] /* g12.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1387]] /* g12.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* g12.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1546]] /* g12.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1547]] /* g12.lambdaqPu variable */));
  threadData->lastEquationSolved = 15729;
}
/*
equation index: 15730
type: SIMPLE_ASSIGN
$DAEres244 = if g12.running.value then g12.udPu - ((g12.RaPPu + g12.RTfoPu) * g12.idPu - g12.omegaPu * g12.lambdaqPu) else g12.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15730};
  (data->simulationInfo->daeModeData->residualVars[244]) /* $DAEres244 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1563]] /* g12.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1387]] /* g12.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* g12.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1547]] /* g12.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1546]] /* g12.lambdadPu variable */));
  threadData->lastEquationSolved = 15730;
}
/*
equation index: 15731
type: SIMPLE_ASSIGN
$DAEres245 = if g12.running.value then g12.lambdaqPu - ((g12.MqSatPPu + g12.LqPPu + g12.XTfoPu) * g12.iqPu + g12.MqSatPPu * (g12.iQ1Pu + g12.iQ2Pu)) else g12.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15731};
  (data->simulationInfo->daeModeData->residualVars[245]) /* $DAEres245 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1547]] /* g12.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1360]] /* g12.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* g12.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* g12.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1536]] /* g12.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1537]] /* g12.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1535]] /* g12.iDPu variable */));
  threadData->lastEquationSolved = 15731;
}
/*
equation index: 15732
type: SIMPLE_ASSIGN
$DAEres246 = if g12.running.value then g12.lambdaADPu - g12.MdSatPPu * (g12.idPu + g12.ifPu + g12.iDPu) else g12.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15732};
  (data->simulationInfo->daeModeData->residualVars[246]) /* $DAEres246 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1543]] /* g12.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1535]] /* g12.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1543]] /* g12.lambdaADPu variable */));
  threadData->lastEquationSolved = 15732;
}
/*
equation index: 15733
type: SIMPLE_ASSIGN
$DAEres247 = if g12.running.value then g12.lambdaDPu - (g12.MdSatPPu * g12.idPu + (g12.MdSatPPu + g12.MrcPPu) * g12.ifPu + (g12.MdSatPPu + g12.LDPPu + g12.MrcPPu) * g12.iDPu) else g12.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15733};
  (data->simulationInfo->daeModeData->residualVars[247]) /* $DAEres247 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* g12.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* g12.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* g12.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* g12.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1535]] /* g12.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */));
  threadData->lastEquationSolved = 15733;
}
/*
equation index: 15734
type: SIMPLE_ASSIGN
$DAEres248 = if g12.running.value then g12.lambdadPu - ((g12.MdSatPPu + g12.LdPPu + g12.XTfoPu) * g12.idPu + g12.MdSatPPu * (g12.ifPu + g12.iDPu)) else g12.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15734};
  (data->simulationInfo->daeModeData->residualVars[248]) /* $DAEres248 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1546]] /* g12.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1358]] /* g12.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* g12.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1535]] /* g12.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */));
  threadData->lastEquationSolved = 15734;
}
/*
equation index: 15735
type: SIMPLE_ASSIGN
$DAEres249 = if g12.running.value then g12.lambdafPu - (g12.MdSatPPu * g12.idPu + (g12.MdSatPPu + g12.LfPPu + g12.MrcPPu) * g12.ifPu + (g12.MdSatPPu + g12.MrcPPu) * g12.iDPu) else g12.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15735};
  (data->simulationInfo->daeModeData->residualVars[249]) /* $DAEres249 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* g12.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1359]] /* g12.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* g12.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* g12.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* g12.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1535]] /* g12.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */));
  threadData->lastEquationSolved = 15735;
}
/*
equation index: 15736
type: SIMPLE_ASSIGN
$DAEres1136 = if g12.running.value then 100.0 * g12.terminal.i.re / g12.SNom - (sin(g12.theta) * g12.idPu + cos(g12.theta) * g12.iqPu) else g12.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15736};
  (data->simulationInfo->daeModeData->residualVars[1136]) /* $DAEres1136 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */),"g12.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* g12.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* g12.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */));
  threadData->lastEquationSolved = 15736;
}
/*
equation index: 15737
type: SIMPLE_ASSIGN
$DAEres1137 = if g12.running.value then 100.0 * g12.terminal.i.im / g12.SNom - (sin(g12.theta) * g12.iqPu - cos(g12.theta) * g12.idPu) else g12.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15737};
  (data->simulationInfo->daeModeData->residualVars[1137]) /* $DAEres1137 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */),"g12.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* g12.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* g12.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */));
  threadData->lastEquationSolved = 15737;
}
/*
equation index: 15738
type: SIMPLE_ASSIGN
$DAEres1139 = if g12.running.value then g12.terminal.V.re - (sin(g12.theta) * g12.udPu + cos(g12.theta) * g12.uqPu) else g12.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15738};
  (data->simulationInfo->daeModeData->residualVars[1139]) /* $DAEres1139 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* g12.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1563]] /* g12.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* g12.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1565]] /* g12.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1563]] /* g12.udPu variable */));
  threadData->lastEquationSolved = 15738;
}
/*
equation index: 15739
type: SIMPLE_ASSIGN
$DAEres1140 = if g12.running.value then g12.terminal.V.im - (sin(g12.theta) * g12.uqPu - cos(g12.theta) * g12.udPu) else g12.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15739};
  (data->simulationInfo->daeModeData->residualVars[1140]) /* $DAEres1140 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* g12.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1565]] /* g12.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* g12.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1563]] /* g12.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1565]] /* g12.uqPu variable */));
  threadData->lastEquationSolved = 15739;
}
/*
equation index: 15740
type: SIMPLE_ASSIGN
g12.uPu.im = if g12.running.value then g12.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1559]] /* g12.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15740;
}
/*
equation index: 15741
type: SIMPLE_ASSIGN
g12.iStatorPu.im = if g12.running.value then g12.rTfoPu * g12.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15741;
}
/*
equation index: 15742
type: SIMPLE_ASSIGN
vrNordic_g12.IrPu = if g12.running.value then g12.RfPPu * g12.ifPu / (g12.rTfoPu * g12.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3710]] /* vrNordic_g12.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* g12.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* g12.Kuf PARAM */)),"g12.rTfoPu * g12.Kuf")):0.0);
  threadData->lastEquationSolved = 15742;
}
/*
equation index: 15743
type: SIMPLE_ASSIGN
vrNordic_g12.dIf.y = vrNordic_g12.IrPu - vrNordic_g12.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3710]] /* vrNordic_g12.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5002]] /* vrNordic_g12.const2.k PARAM */);
  threadData->lastEquationSolved = 15743;
}
/*
equation index: 15744
type: SIMPLE_ASSIGN
vrNordic_g12.gain1.y = vrNordic_g12.gain1.k * vrNordic_g12.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3719]] /* vrNordic_g12.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5008]] /* vrNordic_g12.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */));
  threadData->lastEquationSolved = 15744;
}
/*
equation index: 15745
type: SIMPLE_ASSIGN
vrNordic_g12.overExcitationLimitation.y = if vrNordic_g12.dIf.y < -0.1 then -1.0 else if vrNordic_g12.dIf.y < 0.0 then 0.0 else if vrNordic_g12.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g12.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15745};
  modelica_boolean tmp1698;
  modelica_real tmp1699;
  modelica_real tmp1700;
  modelica_boolean tmp1701;
  modelica_real tmp1702;
  modelica_real tmp1703;
  modelica_boolean tmp1704;
  modelica_boolean tmp1705;
  modelica_real tmp1706;
  modelica_boolean tmp1707;
  modelica_real tmp1708;
  tmp1699 = 1.0;
  tmp1700 = 0.1;
  relationhysteresis(data, &tmp1698, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */), -0.1, tmp1699, tmp1700, 406, Less, LessZC);
  tmp1707 = (modelica_boolean)tmp1698;
  if(tmp1707)
  {
    tmp1708 = -1.0;
  }
  else
  {
    tmp1702 = 1.0;
    tmp1703 = 0.0;
    relationhysteresis(data, &tmp1701, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */), 0.0, tmp1702, tmp1703, 407, Less, LessZC);
    tmp1705 = (modelica_boolean)tmp1701;
    if(tmp1705)
    {
      tmp1706 = 0.0;
    }
    else
    {
      tmp1704 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5056]] /* vrNordic_g12.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1706 = (tmp1704?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */));
    }
    tmp1708 = tmp1706;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */) = tmp1708;
  threadData->lastEquationSolved = 15745;
}
/*
equation index: 15746
type: SIMPLE_ASSIGN
$DAEres1218 = (if vrNordic_g12.timer.y < vrNordic_g12.timer.outMin and vrNordic_g12.timer.k * vrNordic_g12.overExcitationLimitation.y < 0.0 or vrNordic_g12.timer.y > vrNordic_g12.timer.outMax and vrNordic_g12.timer.k * vrNordic_g12.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g12.timer.k * vrNordic_g12.overExcitationLimitation.y) - der(vrNordic_g12.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15746};
  modelica_boolean tmp1709;
  modelica_real tmp1710;
  modelica_real tmp1711;
  modelica_boolean tmp1712;
  modelica_real tmp1713;
  modelica_real tmp1714;
  modelica_boolean tmp1715;
  modelica_real tmp1716;
  modelica_real tmp1717;
  modelica_boolean tmp1718;
  modelica_real tmp1719;
  modelica_real tmp1720;
  tmp1710 = 1.0;
  tmp1711 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5066]] /* vrNordic_g12.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1709, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5066]] /* vrNordic_g12.timer.outMin PARAM */), tmp1710, tmp1711, 412, Less, LessZC);
  tmp1713 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */))) * (1.0);
  tmp1714 = 0.0;
  relationhysteresis(data, &tmp1712, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)), 0.0, tmp1713, tmp1714, 413, Less, LessZC);
  tmp1716 = 1.0;
  tmp1717 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5065]] /* vrNordic_g12.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1715, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5065]] /* vrNordic_g12.timer.outMax PARAM */), tmp1716, tmp1717, 414, Greater, GreaterZC);
  tmp1719 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */))) * (1.0);
  tmp1720 = 0.0;
  relationhysteresis(data, &tmp1718, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)), 0.0, tmp1719, tmp1720, 415, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1218]) /* $DAEres1218 DAE_RESIDUAL_VAR */ = (((tmp1709 && tmp1712) || (tmp1715 && tmp1718))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* der(vrNordic_g12.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15746;
}
/*
equation index: 15747
type: SIMPLE_ASSIGN
$DAEres1219 = if g12.running.value then g12.ufPu - (g12.RfPPu * g12.ifPu + 0.0031830988618379067 * der(g12.lambdafPu)) else der(g12.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15747};
  (data->simulationInfo->daeModeData->residualVars[1219]) /* $DAEres1219 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1564]] /* g12.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* g12.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* g12.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(g12.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* der(g12.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15747;
}
/*
equation index: 15748
type: SIMPLE_ASSIGN
$DAEres1220 = if g12.running.value then (-g12.RQ2PPu) * g12.iQ2Pu - 0.0031830988618379067 * der(g12.lambdaQ2Pu) else der(g12.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15748};
  (data->simulationInfo->daeModeData->residualVars[1220]) /* $DAEres1220 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1384]] /* g12.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1537]] /* g12.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(g12.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* der(g12.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15748;
}
/*
equation index: 15749
type: SIMPLE_ASSIGN
$DAEres1221 = if g12.running.value then (-g12.RQ1PPu) * g12.iQ1Pu - 0.0031830988618379067 * der(g12.lambdaQ1Pu) else der(g12.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15749};
  (data->simulationInfo->daeModeData->residualVars[1221]) /* $DAEres1221 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1383]] /* g12.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1536]] /* g12.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* der(g12.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* der(g12.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15749;
}
/*
equation index: 15750
type: SIMPLE_ASSIGN
$DAEres1222 = if g12.running.value then (-g12.RDPPu) * g12.iDPu - 0.0031830988618379067 * der(g12.lambdaDPu) else der(g12.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15750};
  (data->simulationInfo->daeModeData->residualVars[1222]) /* $DAEres1222 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1382]] /* g12.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1535]] /* g12.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* der(g12.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* der(g12.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15750;
}
/*
equation index: 15751
type: SIMPLE_ASSIGN
g12.cePu = if g12.running.value then g12.lambdaqPu * g12.idPu - g12.lambdadPu * g12.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1531]] /* g12.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1547]] /* g12.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* g12.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1546]] /* g12.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* g12.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15751;
}
/*
equation index: 15752
type: SIMPLE_ASSIGN
g12.PePu = if g12.running.value then g12.cePu * g12.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1524]] /* g12.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1531]] /* g12.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15752;
}
/*
equation index: 15753
type: SIMPLE_ASSIGN
$DAEres1223 = if g12.running.value then 2.0 * g12.H * der(g12.omegaPu) - (g12.cmPu * g12.PNomTurb / g12.SNom + g12.DPu * (omegaCOI - g12.omegaPu) - g12.cePu) else der(g12.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15753};
  (data->simulationInfo->daeModeData->residualVars[1223]) /* $DAEres1223 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* g12.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* der(g12.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1532]] /* g12.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* g12.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */),"g12.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* g12.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* g12.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1531]] /* g12.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* der(g12.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15753;
}
/*
equation index: 15754
type: SIMPLE_ASSIGN
g12.thetaInternal.value = if g12.running.value then Modelica.Math.atan3(g12.udPu, g12.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1558]] /* g12.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1563]] /* g12.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1565]] /* g12.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15754;
}
/*
equation index: 15755
type: SIMPLE_ASSIGN
g12.uStatorPu.im = if g12.running.value then (g12.terminal.V.im + (-100.0) * (g12.terminal.i.re * g12.XTfoPu + g12.terminal.i.im * g12.RTfoPu) / g12.SNom) / g12.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* g12.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* g12.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */),"g12.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */),"g12.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15755;
}
/*
equation index: 15756
type: SIMPLE_ASSIGN
g12.iStatorPu.re = if g12.running.value then g12.rTfoPu * g12.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15756;
}
/*
equation index: 15757
type: SIMPLE_ASSIGN
g12.IStatorPu = if g12.running.value then if g12.iStatorPu.re == 0.0 and g12.iStatorPu.im == 0.0 then 0.0 else (g12.iStatorPu.re ^ 2.0 + g12.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15757};
  modelica_real tmp1721;
  modelica_real tmp1722;
  modelica_real tmp1723;
  modelica_boolean tmp1724;
  modelica_real tmp1725;
  modelica_boolean tmp1726;
  modelica_real tmp1727;
  tmp1726 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp1726)
  {
    tmp1724 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */) == 0.0));
    if(tmp1724)
    {
      tmp1725 = 0.0;
    }
    else
    {
      tmp1721 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */);
      tmp1722 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */);
      tmp1723 = (tmp1721 * tmp1721) + (tmp1722 * tmp1722);
      if(tmp1723 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1723, 0.5);
      }
      tmp1725 = sqrt(tmp1723);
    }
    tmp1727 = tmp1725;
  }
  else
  {
    tmp1727 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1520]] /* g12.IStatorPu variable */) = tmp1727;
  threadData->lastEquationSolved = 15757;
}
/*
equation index: 15758
type: SIMPLE_ASSIGN
g12.uPu.re = if g12.running.value then g12.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1560]] /* g12.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15758;
}
/*
equation index: 15759
type: SIMPLE_ASSIGN
g12.UPu = if g12.running.value then (g12.terminal.V.re ^ 2.0 + g12.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15759};
  modelica_real tmp1728;
  modelica_real tmp1729;
  modelica_real tmp1730;
  modelica_boolean tmp1731;
  modelica_real tmp1732;
  tmp1731 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp1731)
  {
    tmp1728 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */);
    tmp1729 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */);
    tmp1730 = (tmp1728 * tmp1728) + (tmp1729 * tmp1729);
    if(tmp1730 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1730, 0.5);
    }
    tmp1732 = sqrt(tmp1730);
  }
  else
  {
    tmp1732 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1530]] /* g12.UPu variable */) = tmp1732;
  threadData->lastEquationSolved = 15759;
}
/*
equation index: 15760
type: SIMPLE_ASSIGN
goverNordic_g12.PGenPu = if g12.running.value then (-g12.terminal.V.re) * g12.terminal.i.re - g12.terminal.V.im * g12.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* goverNordic_g12.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15760;
}
/*
equation index: 15761
type: SIMPLE_ASSIGN
goverNordic_g12.perUnitP.y = goverNordic_g12.perUnitP.k * goverNordic_g12.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2146]] /* goverNordic_g12.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2682]] /* goverNordic_g12.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* goverNordic_g12.PGenPu variable */));
  threadData->lastEquationSolved = 15761;
}
/*
equation index: 15762
type: SIMPLE_ASSIGN
$DAEres1368 = goverNordic_g12.firstOrder1.k * goverNordic_g12.perUnitP.y + (-goverNordic_g12.firstOrder1.y) - der(goverNordic_g12.firstOrder1.y) * goverNordic_g12.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15762};
  (data->simulationInfo->daeModeData->residualVars[1368]) /* $DAEres1368 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2660]] /* goverNordic_g12.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2146]] /* goverNordic_g12.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* goverNordic_g12.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* der(goverNordic_g12.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2659]] /* goverNordic_g12.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15762;
}
/*
equation index: 15763
type: SIMPLE_ASSIGN
g12.PGen = if g12.running.value then 100.0 * goverNordic_g12.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1523]] /* g12.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* goverNordic_g12.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15763;
}
/*
equation index: 15764
type: SIMPLE_ASSIGN
g12.QGenPu = if g12.running.value then g12.terminal.V.re * g12.terminal.i.im - g12.terminal.V.im * g12.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1527]] /* g12.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15764;
}
/*
equation index: 15765
type: SIMPLE_ASSIGN
g12.QGen = if g12.running.value then 100.0 * g12.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1526]] /* g12.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1527]] /* g12.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15765;
}
/*
equation index: 15766
type: SIMPLE_ASSIGN
g12.uStatorPu.re = if g12.running.value then (g12.terminal.V.re + (-100.0) * (g12.terminal.i.re * g12.RTfoPu - g12.terminal.i.im * g12.XTfoPu) / g12.SNom) / g12.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1557]] /* g12.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* g12.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1556]] /* g12.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* g12.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* g12.SNom PARAM */),"g12.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* g12.rTfoPu PARAM */),"g12.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15766;
}
/*
equation index: 15767
type: SIMPLE_ASSIGN
g12.sStatorPu.re = if g12.running.value then g12.uStatorPu.re * g12.iStatorPu.re + g12.uStatorPu.im * g12.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1552]] /* g12.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15767;
}
/*
equation index: 15768
type: SIMPLE_ASSIGN
g12.sStatorPu.im = if g12.running.value then g12.uStatorPu.im * g12.iStatorPu.re - g12.uStatorPu.re * g12.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1551]] /* g12.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15768;
}
/*
equation index: 15769
type: SIMPLE_ASSIGN
g12.QStatorPu = if g12.running.value then -g12.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1528]] /* g12.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1551]] /* g12.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15769;
}
/*
equation index: 15770
type: SIMPLE_ASSIGN
g12.QStatorPuQNom = if g12.running.value then 100.0 * g12.QStatorPu / g12.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1529]] /* g12.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1528]] /* g12.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1379]] /* g12.QNomAlt PARAM */),"g12.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15770;
}
/*
equation index: 15771
type: SIMPLE_ASSIGN
vrNordic_g12.UsPu = if g12.running.value then if g12.uStatorPu.re == 0.0 and g12.uStatorPu.im == 0.0 then 0.0 else (g12.uStatorPu.re ^ 2.0 + g12.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15771};
  modelica_real tmp1733;
  modelica_real tmp1734;
  modelica_real tmp1735;
  modelica_boolean tmp1736;
  modelica_real tmp1737;
  modelica_boolean tmp1738;
  modelica_real tmp1739;
  tmp1738 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[514]] /* g12.running.value DISCRETE */);
  if(tmp1738)
  {
    tmp1736 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */) == 0.0));
    if(tmp1736)
    {
      tmp1737 = 0.0;
    }
    else
    {
      tmp1733 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */);
      tmp1734 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */);
      tmp1735 = (tmp1733 * tmp1733) + (tmp1734 * tmp1734);
      if(tmp1735 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1735, 0.5);
      }
      tmp1737 = sqrt(tmp1735);
    }
    tmp1739 = tmp1737;
  }
  else
  {
    tmp1739 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3711]] /* vrNordic_g12.UsPu variable */) = tmp1739;
  threadData->lastEquationSolved = 15771;
}
/*
equation index: 15772
type: SIMPLE_ASSIGN
vrNordic_g12.dU.y = vrNordic_g12.const1.k - vrNordic_g12.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3715]] /* vrNordic_g12.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5001]] /* vrNordic_g12.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3711]] /* vrNordic_g12.UsPu variable */);
  threadData->lastEquationSolved = 15772;
}
/*
equation index: 15773
type: SIMPLE_ASSIGN
vrNordic_g12.add.y = vrNordic_g12.add.k1 * vrNordic_g12.dU.y + vrNordic_g12.add.k2 * vrNordic_g12.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4998]] /* vrNordic_g12.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3715]] /* vrNordic_g12.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4999]] /* vrNordic_g12.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3729]] /* vrNordic_g12.limiter.y variable */));
  threadData->lastEquationSolved = 15773;
}
/*
equation index: 15774
type: SIMPLE_ASSIGN
vrNordic_g12.switch.y = if vrNordic_g12.greaterEqualThreshold.y then vrNordic_g12.gain1.y else vrNordic_g12.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3732]] /* vrNordic_g12.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1048]] /* vrNordic_g12.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3719]] /* vrNordic_g12.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */));
  threadData->lastEquationSolved = 15774;
}
/*
equation index: 15775
type: SIMPLE_ASSIGN
vrNordic_g12.min1.y = if vrNordic_g12.switch.y < vrNordic_g12.add.y then vrNordic_g12.switch.y else vrNordic_g12.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15775};
  modelica_boolean tmp1740;
  modelica_real tmp1741;
  modelica_real tmp1742;
  tmp1741 = 1.0;
  tmp1742 = 1.0;
  relationhysteresis(data, &tmp1740, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3732]] /* vrNordic_g12.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */), tmp1741, tmp1742, 404, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3730]] /* vrNordic_g12.min1.y variable */) = (tmp1740?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3732]] /* vrNordic_g12.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */));
  threadData->lastEquationSolved = 15775;
}
/*
equation index: 15776
type: SIMPLE_ASSIGN
vrNordic_g12.kMulDU.y = vrNordic_g12.kMulDU.k * vrNordic_g12.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15776};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3720]] /* vrNordic_g12.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5010]] /* vrNordic_g12.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3730]] /* vrNordic_g12.min1.y variable */));
  threadData->lastEquationSolved = 15776;
}
/*
equation index: 15777
type: SIMPLE_ASSIGN
$DAEres1369 = vrNordic_g12.leadLag.a_end * vrNordic_g12.kMulDU.y + (-vrNordic_g12.leadLag.a[2]) * vrNordic_g12.leadLag.x_scaled[1] - der(vrNordic_g12.leadLag.x_scaled[1]) * vrNordic_g12.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15777};
  (data->simulationInfo->daeModeData->residualVars[1369]) /* $DAEres1369 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5015]] /* vrNordic_g12.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3720]] /* vrNordic_g12.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5014]] /* vrNordic_g12.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* vrNordic_g12.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* der(vrNordic_g12.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5013]] /* vrNordic_g12.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15777;
}
/*
equation index: 15778
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.y = (vrNordic_g12.leadLag.bb[2] - vrNordic_g12.leadLag.d * vrNordic_g12.leadLag.a[2]) * vrNordic_g12.leadLag.x[1] + vrNordic_g12.leadLag.d * vrNordic_g12.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vrNordic_g12.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5019]] /* vrNordic_g12.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5020]] /* vrNordic_g12.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5014]] /* vrNordic_g12.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3721]] /* vrNordic_g12.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5020]] /* vrNordic_g12.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3720]] /* vrNordic_g12.kMulDU.y variable */));
  threadData->lastEquationSolved = 15778;
}
/*
equation index: 15779
type: SIMPLE_ASSIGN
vrNordic_g12.feedback1.y = vrNordic_g12.leadLag.y - vrNordic_g12.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15779};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3717]] /* vrNordic_g12.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* vrNordic_g12.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15779;
}
/*
equation index: 15780
type: SIMPLE_ASSIGN
vrNordic_g12.gain.y = vrNordic_g12.gain.k * vrNordic_g12.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15780};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5007]] /* vrNordic_g12.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3717]] /* vrNordic_g12.feedback1.y variable */));
  threadData->lastEquationSolved = 15780;
}
/*
equation index: 15781
type: SIMPLE_ASSIGN
$DAEres1370 = (if vrNordic_g12.limIntegrator.y < vrNordic_g12.limIntegrator.outMin and vrNordic_g12.limIntegrator.k * vrNordic_g12.gain.y < 0.0 or vrNordic_g12.limIntegrator.y > vrNordic_g12.limIntegrator.outMax and vrNordic_g12.limIntegrator.k * vrNordic_g12.gain.y > 0.0 then 0.0 else vrNordic_g12.limIntegrator.k * vrNordic_g12.gain.y) - der(vrNordic_g12.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15781};
  modelica_boolean tmp1743;
  modelica_real tmp1744;
  modelica_real tmp1745;
  modelica_boolean tmp1746;
  modelica_real tmp1747;
  modelica_real tmp1748;
  modelica_boolean tmp1749;
  modelica_real tmp1750;
  modelica_real tmp1751;
  modelica_boolean tmp1752;
  modelica_real tmp1753;
  modelica_real tmp1754;
  tmp1744 = 1.0;
  tmp1745 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5052]] /* vrNordic_g12.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1743, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5052]] /* vrNordic_g12.limIntegrator.outMin PARAM */), tmp1744, tmp1745, 408, Less, LessZC);
  tmp1747 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */))) * (1.0);
  tmp1748 = 0.0;
  relationhysteresis(data, &tmp1746, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)), 0.0, tmp1747, tmp1748, 409, Less, LessZC);
  tmp1750 = 1.0;
  tmp1751 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5051]] /* vrNordic_g12.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1749, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5051]] /* vrNordic_g12.limIntegrator.outMax PARAM */), tmp1750, tmp1751, 410, Greater, GreaterZC);
  tmp1753 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */))) * (1.0);
  tmp1754 = 0.0;
  relationhysteresis(data, &tmp1752, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)), 0.0, tmp1753, tmp1754, 411, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1370]) /* $DAEres1370 DAE_RESIDUAL_VAR */ = (((tmp1743 && tmp1746) || (tmp1749 && tmp1752))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* der(vrNordic_g12.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15781;
}
/*
equation index: 15782
type: SIMPLE_ASSIGN
$whenCondition31 = not pre(g11.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15782};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[234]] /* $whenCondition31 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[510] /* g11.running.value DISCRETE */));
  threadData->lastEquationSolved = 15782;
}
/*
equation index: 15783
type: WHEN

when {} then
  g11.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15783};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[234]] /* $whenCondition31 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[234] /* $whenCondition31 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15783;
}
/*
equation index: 15785
type: SIMPLE_ASSIGN
$whenCondition33 = not g11.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15785};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[256]] /* $whenCondition33 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */));
  threadData->lastEquationSolved = 15785;
}
/*
equation index: 15786
type: SIMPLE_ASSIGN
$whenCondition32 = g11.running.value and not pre(g11.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15786};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[245]] /* $whenCondition32 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[510] /* g11.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15786;
}
/*
equation index: 15787
type: WHEN

when {$whenCondition33} then
  g11.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15787};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[256]] /* $whenCondition33 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[256] /* $whenCondition33 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* g11.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[245]] /* $whenCondition32 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[245] /* $whenCondition32 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* g11.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15787;
}
/*
equation index: 15789
type: SIMPLE_ASSIGN
g11.converter.u = Integer(g11.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15789};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* g11.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* g11.state DISCRETE */)));
  threadData->lastEquationSolved = 15789;
}
/*
equation index: 15790
type: SIMPLE_ASSIGN
g11.genState = (*Real*)(g11.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1488]] /* g11.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[20]] /* g11.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15790;
}
/*
equation index: 15791
type: SIMPLE_ASSIGN
$DAEres129 = if g11.running.value then der(g11.theta) - 314.1592653589793 * (g11.omegaPu - omegaCOI) else der(g11.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15791};
  (data->simulationInfo->daeModeData->residualVars[129]) /* $DAEres129 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* der(g11.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* der(g11.theta) STATE_DER */));
  threadData->lastEquationSolved = 15791;
}
/*
equation index: 15792
type: SIMPLE_ASSIGN
g11.cmPu = if g11.running.value then g11.PmPu / g11.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15792};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1486]] /* g11.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1479]] /* g11.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */),"g11.omegaPu"):0.0);
  threadData->lastEquationSolved = 15792;
}
/*
equation index: 15793
type: SIMPLE_ASSIGN
g11.ufPu = if g11.running.value then vrNordic_g11.limIntegrator.y * g11.Kuf * g11.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1518]] /* g11.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* g11.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15793;
}
/*
equation index: 15794
type: SIMPLE_ASSIGN
$DAEres1018 = if g11.running.value then g11.mqsPu - g11.MqPPu / (1.0 + g11.mq * g11.lambdaAirGapPu ^ g11.nq) else g11.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15794};
  modelica_real tmp1755;
  modelica_real tmp1756;
  modelica_real tmp1757;
  modelica_real tmp1758;
  modelica_real tmp1759;
  modelica_real tmp1760;
  modelica_real tmp1761;
  modelica_boolean tmp1762;
  modelica_real tmp1763;
  tmp1762 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp1762)
  {
    tmp1755 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* g11.lambdaAirGapPu variable */);
    tmp1756 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* g11.nq PARAM */);
    if(tmp1755 < 0.0 && tmp1756 != 0.0)
    {
      tmp1758 = modf(tmp1756, &tmp1759);
      
      if(tmp1758 > 0.5)
      {
        tmp1758 -= 1.0;
        tmp1759 += 1.0;
      }
      else if(tmp1758 < -0.5)
      {
        tmp1758 += 1.0;
        tmp1759 -= 1.0;
      }
      
      if(fabs(tmp1758) < 1e-10)
        tmp1757 = pow(tmp1755, tmp1759);
      else
      {
        tmp1761 = modf(1.0/tmp1756, &tmp1760);
        if(tmp1761 > 0.5)
        {
          tmp1761 -= 1.0;
          tmp1760 += 1.0;
        }
        else if(tmp1761 < -0.5)
        {
          tmp1761 += 1.0;
          tmp1760 -= 1.0;
        }
        if(fabs(tmp1761) < 1e-10 && ((unsigned long)tmp1760 & 1))
        {
          tmp1757 = -pow(-tmp1755, tmp1758)*pow(tmp1755, tmp1759);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1755, tmp1756);
        }
      }
    }
    else
    {
      tmp1757 = pow(tmp1755, tmp1756);
    }
    if(isnan(tmp1757) || isinf(tmp1757))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1755, tmp1756);
    }
    tmp1763 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1504]] /* g11.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* g11.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1311]] /* g11.mq PARAM */)) * (tmp1757),"1.0 + g11.mq * g11.lambdaAirGapPu ^ g11.nq"));
  }
  else
  {
    tmp1763 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1504]] /* g11.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1018]) /* $DAEres1018 DAE_RESIDUAL_VAR */ = tmp1763;
  threadData->lastEquationSolved = 15794;
}
/*
equation index: 15795
type: SIMPLE_ASSIGN
$DAEres1019 = if g11.running.value then g11.cos2Eta - (g11.lambdaADPu / g11.lambdaAirGapPu) ^ 2.0 else g11.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15795};
  modelica_real tmp1764;
  modelica_boolean tmp1765;
  modelica_real tmp1766;
  tmp1765 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp1765)
  {
    tmp1764 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1497]] /* g11.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* g11.lambdaAirGapPu variable */),"g11.lambdaAirGapPu");
    tmp1766 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1487]] /* g11.cos2Eta variable */) - ((tmp1764 * tmp1764));
  }
  else
  {
    tmp1766 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1487]] /* g11.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1019]) /* $DAEres1019 DAE_RESIDUAL_VAR */ = tmp1766;
  threadData->lastEquationSolved = 15795;
}
/*
equation index: 15796
type: SIMPLE_ASSIGN
$DAEres1020 = if g11.running.value then g11.lambdaAirGapPu - sqrt(g11.lambdaADPu ^ 2.0 + g11.lambdaAQPu ^ 2.0) else g11.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15796};
  modelica_real tmp1767;
  modelica_real tmp1768;
  modelica_real tmp1769;
  modelica_boolean tmp1770;
  modelica_real tmp1771;
  tmp1770 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp1770)
  {
    tmp1767 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1497]] /* g11.lambdaADPu variable */);
    tmp1768 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1498]] /* g11.lambdaAQPu variable */);
    tmp1769 = (tmp1767 * tmp1767) + (tmp1768 * tmp1768);
    if(!(tmp1769 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g11.lambdaADPu ^ 2.0 + g11.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1769);
      }
    }
    tmp1771 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* g11.lambdaAirGapPu variable */) - sqrt(tmp1769);
  }
  else
  {
    tmp1771 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* g11.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1020]) /* $DAEres1020 DAE_RESIDUAL_VAR */ = tmp1771;
  threadData->lastEquationSolved = 15796;
}
/*
equation index: 15797
type: SIMPLE_ASSIGN
$DAEres1021 = if g11.running.value then g11.mdsPu - g11.MdPPu / (1.0 + g11.md * g11.lambdaAirGapPu ^ g11.nd) else g11.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15797};
  modelica_real tmp1772;
  modelica_real tmp1773;
  modelica_real tmp1774;
  modelica_real tmp1775;
  modelica_real tmp1776;
  modelica_real tmp1777;
  modelica_real tmp1778;
  modelica_boolean tmp1779;
  modelica_real tmp1780;
  tmp1779 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp1779)
  {
    tmp1772 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* g11.lambdaAirGapPu variable */);
    tmp1773 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1312]] /* g11.nd PARAM */);
    if(tmp1772 < 0.0 && tmp1773 != 0.0)
    {
      tmp1775 = modf(tmp1773, &tmp1776);
      
      if(tmp1775 > 0.5)
      {
        tmp1775 -= 1.0;
        tmp1776 += 1.0;
      }
      else if(tmp1775 < -0.5)
      {
        tmp1775 += 1.0;
        tmp1776 -= 1.0;
      }
      
      if(fabs(tmp1775) < 1e-10)
        tmp1774 = pow(tmp1772, tmp1776);
      else
      {
        tmp1778 = modf(1.0/tmp1773, &tmp1777);
        if(tmp1778 > 0.5)
        {
          tmp1778 -= 1.0;
          tmp1777 += 1.0;
        }
        else if(tmp1778 < -0.5)
        {
          tmp1778 += 1.0;
          tmp1777 -= 1.0;
        }
        if(fabs(tmp1778) < 1e-10 && ((unsigned long)tmp1777 & 1))
        {
          tmp1774 = -pow(-tmp1772, tmp1775)*pow(tmp1772, tmp1776);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1772, tmp1773);
        }
      }
    }
    else
    {
      tmp1774 = pow(tmp1772, tmp1773);
    }
    if(isnan(tmp1774) || isinf(tmp1774))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1772, tmp1773);
    }
    tmp1780 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1502]] /* g11.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* g11.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1310]] /* g11.md PARAM */)) * (tmp1774),"1.0 + g11.md * g11.lambdaAirGapPu ^ g11.nd"));
  }
  else
  {
    tmp1780 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1502]] /* g11.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1021]) /* $DAEres1021 DAE_RESIDUAL_VAR */ = tmp1780;
  threadData->lastEquationSolved = 15797;
}
/*
equation index: 15798
type: SIMPLE_ASSIGN
$DAEres1022 = if g11.running.value then g11.miPu - (g11.mdsPu * g11.cos2Eta + g11.mqsPu * g11.sin2Eta) else g11.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15798};
  (data->simulationInfo->daeModeData->residualVars[1022]) /* $DAEres1022 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1503]] /* g11.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1502]] /* g11.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1487]] /* g11.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1504]] /* g11.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* g11.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1503]] /* g11.miPu variable */));
  threadData->lastEquationSolved = 15798;
}
/*
equation index: 15799
type: SIMPLE_ASSIGN
$DAEres1023 = if g11.running.value then g11.MqSatPPu - (g11.miPu - g11.MsalPu * g11.cos2Eta) else g11.MqSatPPu - g11.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15799};
  (data->simulationInfo->daeModeData->residualVars[1023]) /* $DAEres1023 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1503]] /* g11.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* g11.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1487]] /* g11.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* g11.MqPPu PARAM */));
  threadData->lastEquationSolved = 15799;
}
/*
equation index: 15800
type: SIMPLE_ASSIGN
$DAEres1024 = if g11.running.value then g11.lambdaQ2Pu - (g11.MqSatPPu * (g11.iqPu + g11.iQ1Pu) + (g11.MqSatPPu + g11.LQ2PPu) * g11.iQ2Pu) else g11.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15800};
  (data->simulationInfo->daeModeData->residualVars[1024]) /* $DAEres1024 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* g11.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1490]] /* g11.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* g11.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1491]] /* g11.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1491]] /* g11.iQ2Pu variable */));
  threadData->lastEquationSolved = 15800;
}
/*
equation index: 15801
type: SIMPLE_ASSIGN
$DAEres1025 = if g11.running.value then g11.lambdaQ1Pu - (g11.MqSatPPu * g11.iqPu + (g11.MqSatPPu + g11.LQ1PPu) * g11.iQ1Pu + g11.MqSatPPu * g11.iQ2Pu) else g11.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15801};
  (data->simulationInfo->daeModeData->residualVars[1025]) /* $DAEres1025 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* g11.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* g11.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1490]] /* g11.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1491]] /* g11.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1490]] /* g11.iQ1Pu variable */));
  threadData->lastEquationSolved = 15801;
}
/*
equation index: 15802
type: SIMPLE_ASSIGN
$DAEres1026 = if g11.running.value then g11.lambdaAQPu - g11.MqSatPPu * (g11.iqPu + g11.iQ1Pu + g11.iQ2Pu) else g11.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15802};
  (data->simulationInfo->daeModeData->residualVars[1026]) /* $DAEres1026 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1498]] /* g11.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1490]] /* g11.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1491]] /* g11.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1498]] /* g11.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15802;
}
/*
equation index: 15803
type: SIMPLE_ASSIGN
$DAEres1027 = if g11.running.value then g11.sin2Eta - (g11.lambdaAQPu / g11.lambdaAirGapPu) ^ 2.0 else g11.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15803};
  modelica_real tmp1781;
  modelica_boolean tmp1782;
  modelica_real tmp1783;
  tmp1782 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp1782)
  {
    tmp1781 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1498]] /* g11.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1499]] /* g11.lambdaAirGapPu variable */),"g11.lambdaAirGapPu");
    tmp1783 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* g11.sin2Eta variable */) - ((tmp1781 * tmp1781));
  }
  else
  {
    tmp1783 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* g11.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[1027]) /* $DAEres1027 DAE_RESIDUAL_VAR */ = tmp1783;
  threadData->lastEquationSolved = 15803;
}
/*
equation index: 15804
type: SIMPLE_ASSIGN
$DAEres1028 = if g11.running.value then g11.MdSatPPu - (g11.miPu + g11.MsalPu * g11.sin2Eta) else g11.MdSatPPu - g11.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15804};
  (data->simulationInfo->daeModeData->residualVars[1028]) /* $DAEres1028 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1503]] /* g11.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* g11.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1507]] /* g11.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* g11.MdPPu PARAM */));
  threadData->lastEquationSolved = 15804;
}
/*
equation index: 15805
type: SIMPLE_ASSIGN
$DAEres1029 = if g11.running.value then g11.lambdaADPu - g11.MdSatPPu * (g11.idPu + g11.ifPu + g11.iDPu) else g11.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15805};
  (data->simulationInfo->daeModeData->residualVars[1029]) /* $DAEres1029 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1497]] /* g11.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1489]] /* g11.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1497]] /* g11.lambdaADPu variable */));
  threadData->lastEquationSolved = 15805;
}
/*
equation index: 15806
type: SIMPLE_ASSIGN
$DAEres1030 = if g11.running.value then g11.lambdaDPu - (g11.MdSatPPu * g11.idPu + (g11.MdSatPPu + g11.MrcPPu) * g11.ifPu + (g11.MdSatPPu + g11.LDPPu + g11.MrcPPu) * g11.iDPu) else g11.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15806};
  (data->simulationInfo->daeModeData->residualVars[1030]) /* $DAEres1030 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* g11.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* g11.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* g11.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* g11.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1489]] /* g11.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */));
  threadData->lastEquationSolved = 15806;
}
/*
equation index: 15807
type: SIMPLE_ASSIGN
$DAEres1031 = if g11.running.value then g11.uqPu - ((g11.RaPPu + g11.RTfoPu) * g11.iqPu + g11.omegaPu * g11.lambdadPu) else g11.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15807};
  (data->simulationInfo->daeModeData->residualVars[1031]) /* $DAEres1031 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1519]] /* g11.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* g11.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* g11.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1500]] /* g11.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1501]] /* g11.lambdaqPu variable */));
  threadData->lastEquationSolved = 15807;
}
/*
equation index: 15808
type: SIMPLE_ASSIGN
$DAEres1032 = if g11.running.value then g11.lambdadPu - ((g11.MdSatPPu + g11.LdPPu + g11.XTfoPu) * g11.idPu + g11.MdSatPPu * (g11.ifPu + g11.iDPu)) else g11.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15808};
  (data->simulationInfo->daeModeData->residualVars[1032]) /* $DAEres1032 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1500]] /* g11.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* g11.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* g11.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1489]] /* g11.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */));
  threadData->lastEquationSolved = 15808;
}
/*
equation index: 15809
type: SIMPLE_ASSIGN
$DAEres1033 = if g11.running.value then g11.lambdafPu - (g11.MdSatPPu * g11.idPu + (g11.MdSatPPu + g11.LfPPu + g11.MrcPPu) * g11.ifPu + (g11.MdSatPPu + g11.MrcPPu) * g11.iDPu) else g11.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15809};
  (data->simulationInfo->daeModeData->residualVars[1033]) /* $DAEres1033 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* g11.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* g11.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* g11.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* g11.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* g11.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1489]] /* g11.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */));
  threadData->lastEquationSolved = 15809;
}
/*
equation index: 15810
type: SIMPLE_ASSIGN
$DAEres1034 = if g11.running.value then g11.lambdaqPu - ((g11.MqSatPPu + g11.LqPPu + g11.XTfoPu) * g11.iqPu + g11.MqSatPPu * (g11.iQ1Pu + g11.iQ2Pu)) else g11.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15810};
  (data->simulationInfo->daeModeData->residualVars[1034]) /* $DAEres1034 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1501]] /* g11.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* g11.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* g11.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* g11.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1490]] /* g11.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1491]] /* g11.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1489]] /* g11.iDPu variable */));
  threadData->lastEquationSolved = 15810;
}
/*
equation index: 15811
type: SIMPLE_ASSIGN
$DAEres1035 = if g11.running.value then g11.udPu - ((g11.RaPPu + g11.RTfoPu) * g11.idPu - g11.omegaPu * g11.lambdaqPu) else g11.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15811};
  (data->simulationInfo->daeModeData->residualVars[1035]) /* $DAEres1035 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1517]] /* g11.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* g11.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* g11.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1501]] /* g11.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1500]] /* g11.lambdadPu variable */));
  threadData->lastEquationSolved = 15811;
}
/*
equation index: 15812
type: SIMPLE_ASSIGN
$DAEres1036 = if g11.running.value then g11.terminal.V.re - (sin(g11.theta) * g11.udPu + cos(g11.theta) * g11.uqPu) else g11.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15812};
  (data->simulationInfo->daeModeData->residualVars[1036]) /* $DAEres1036 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* g11.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1517]] /* g11.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* g11.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1519]] /* g11.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1517]] /* g11.udPu variable */));
  threadData->lastEquationSolved = 15812;
}
/*
equation index: 15813
type: SIMPLE_ASSIGN
$DAEres1037 = if g11.running.value then g11.terminal.V.im - (sin(g11.theta) * g11.uqPu - cos(g11.theta) * g11.udPu) else g11.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15813};
  (data->simulationInfo->daeModeData->residualVars[1037]) /* $DAEres1037 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* g11.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1519]] /* g11.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* g11.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1517]] /* g11.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1519]] /* g11.uqPu variable */));
  threadData->lastEquationSolved = 15813;
}
/*
equation index: 15814
type: SIMPLE_ASSIGN
$DAEres1039 = if g11.running.value then 100.0 * g11.terminal.i.im / g11.SNom - (sin(g11.theta) * g11.iqPu - cos(g11.theta) * g11.idPu) else g11.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15814};
  (data->simulationInfo->daeModeData->residualVars[1039]) /* $DAEres1039 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */),"g11.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* g11.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* g11.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */));
  threadData->lastEquationSolved = 15814;
}
/*
equation index: 15815
type: SIMPLE_ASSIGN
$DAEres1040 = if g11.running.value then 100.0 * g11.terminal.i.re / g11.SNom - (sin(g11.theta) * g11.idPu + cos(g11.theta) * g11.iqPu) else g11.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15815};
  (data->simulationInfo->daeModeData->residualVars[1040]) /* $DAEres1040 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */),"g11.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* g11.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* g11.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */));
  threadData->lastEquationSolved = 15815;
}
/*
equation index: 15816
type: SIMPLE_ASSIGN
g11.iStatorPu.re = if g11.running.value then g11.rTfoPu * g11.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15816;
}
/*
equation index: 15817
type: SIMPLE_ASSIGN
g11.uPu.im = if g11.running.value then g11.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1513]] /* g11.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15817;
}
/*
equation index: 15818
type: SIMPLE_ASSIGN
vrNordic_g11.IrPu = if g11.running.value then g11.RfPPu * g11.ifPu / (g11.rTfoPu * g11.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3686]] /* vrNordic_g11.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* g11.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* g11.Kuf PARAM */)),"g11.rTfoPu * g11.Kuf")):0.0);
  threadData->lastEquationSolved = 15818;
}
/*
equation index: 15819
type: SIMPLE_ASSIGN
vrNordic_g11.dIf.y = vrNordic_g11.IrPu - vrNordic_g11.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15819};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3686]] /* vrNordic_g11.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4923]] /* vrNordic_g11.const2.k PARAM */);
  threadData->lastEquationSolved = 15819;
}
/*
equation index: 15820
type: SIMPLE_ASSIGN
vrNordic_g11.gain1.y = vrNordic_g11.gain1.k * vrNordic_g11.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3695]] /* vrNordic_g11.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4929]] /* vrNordic_g11.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */));
  threadData->lastEquationSolved = 15820;
}
/*
equation index: 15821
type: SIMPLE_ASSIGN
vrNordic_g11.overExcitationLimitation.y = if vrNordic_g11.dIf.y < -0.1 then -1.0 else if vrNordic_g11.dIf.y < 0.0 then 0.0 else if vrNordic_g11.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g11.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15821};
  modelica_boolean tmp1784;
  modelica_real tmp1785;
  modelica_real tmp1786;
  modelica_boolean tmp1787;
  modelica_real tmp1788;
  modelica_real tmp1789;
  modelica_boolean tmp1790;
  modelica_boolean tmp1791;
  modelica_real tmp1792;
  modelica_boolean tmp1793;
  modelica_real tmp1794;
  tmp1785 = 1.0;
  tmp1786 = 0.1;
  relationhysteresis(data, &tmp1784, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */), -0.1, tmp1785, tmp1786, 390, Less, LessZC);
  tmp1793 = (modelica_boolean)tmp1784;
  if(tmp1793)
  {
    tmp1794 = -1.0;
  }
  else
  {
    tmp1788 = 1.0;
    tmp1789 = 0.0;
    relationhysteresis(data, &tmp1787, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */), 0.0, tmp1788, tmp1789, 391, Less, LessZC);
    tmp1791 = (modelica_boolean)tmp1787;
    if(tmp1791)
    {
      tmp1792 = 0.0;
    }
    else
    {
      tmp1790 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4977]] /* vrNordic_g11.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1792 = (tmp1790?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */));
    }
    tmp1794 = tmp1792;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */) = tmp1794;
  threadData->lastEquationSolved = 15821;
}
/*
equation index: 15822
type: SIMPLE_ASSIGN
$DAEres1341 = (if vrNordic_g11.timer.y < vrNordic_g11.timer.outMin and vrNordic_g11.timer.k * vrNordic_g11.overExcitationLimitation.y < 0.0 or vrNordic_g11.timer.y > vrNordic_g11.timer.outMax and vrNordic_g11.timer.k * vrNordic_g11.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g11.timer.k * vrNordic_g11.overExcitationLimitation.y) - der(vrNordic_g11.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15822};
  modelica_boolean tmp1795;
  modelica_real tmp1796;
  modelica_real tmp1797;
  modelica_boolean tmp1798;
  modelica_real tmp1799;
  modelica_real tmp1800;
  modelica_boolean tmp1801;
  modelica_real tmp1802;
  modelica_real tmp1803;
  modelica_boolean tmp1804;
  modelica_real tmp1805;
  modelica_real tmp1806;
  tmp1796 = 1.0;
  tmp1797 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4987]] /* vrNordic_g11.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1795, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4987]] /* vrNordic_g11.timer.outMin PARAM */), tmp1796, tmp1797, 396, Less, LessZC);
  tmp1799 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */))) * (1.0);
  tmp1800 = 0.0;
  relationhysteresis(data, &tmp1798, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)), 0.0, tmp1799, tmp1800, 397, Less, LessZC);
  tmp1802 = 1.0;
  tmp1803 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4986]] /* vrNordic_g11.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1801, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4986]] /* vrNordic_g11.timer.outMax PARAM */), tmp1802, tmp1803, 398, Greater, GreaterZC);
  tmp1805 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */))) * (1.0);
  tmp1806 = 0.0;
  relationhysteresis(data, &tmp1804, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)), 0.0, tmp1805, tmp1806, 399, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1341]) /* $DAEres1341 DAE_RESIDUAL_VAR */ = (((tmp1795 && tmp1798) || (tmp1801 && tmp1804))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* der(vrNordic_g11.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15822;
}
/*
equation index: 15823
type: SIMPLE_ASSIGN
$DAEres1342 = if g11.running.value then g11.ufPu - (g11.RfPPu * g11.ifPu + 0.0031830988618379067 * der(g11.lambdafPu)) else der(g11.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15823};
  (data->simulationInfo->daeModeData->residualVars[1342]) /* $DAEres1342 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1518]] /* g11.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* g11.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1495]] /* g11.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* der(g11.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* der(g11.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15823;
}
/*
equation index: 15824
type: SIMPLE_ASSIGN
$DAEres1343 = if g11.running.value then (-g11.RQ1PPu) * g11.iQ1Pu - 0.0031830988618379067 * der(g11.lambdaQ1Pu) else der(g11.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15824};
  (data->simulationInfo->daeModeData->residualVars[1343]) /* $DAEres1343 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1282]] /* g11.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1490]] /* g11.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* der(g11.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* der(g11.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15824;
}
/*
equation index: 15825
type: SIMPLE_ASSIGN
$DAEres1344 = if g11.running.value then (-g11.RQ2PPu) * g11.iQ2Pu - 0.0031830988618379067 * der(g11.lambdaQ2Pu) else der(g11.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15825};
  (data->simulationInfo->daeModeData->residualVars[1344]) /* $DAEres1344 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1283]] /* g11.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1491]] /* g11.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* der(g11.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* der(g11.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15825;
}
/*
equation index: 15826
type: SIMPLE_ASSIGN
$DAEres1345 = if g11.running.value then (-g11.RDPPu) * g11.iDPu - 0.0031830988618379067 * der(g11.lambdaDPu) else der(g11.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15826};
  (data->simulationInfo->daeModeData->residualVars[1345]) /* $DAEres1345 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* g11.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1489]] /* g11.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* der(g11.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* der(g11.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15826;
}
/*
equation index: 15827
type: SIMPLE_ASSIGN
g11.cePu = if g11.running.value then g11.lambdaqPu * g11.idPu - g11.lambdadPu * g11.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1485]] /* g11.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1501]] /* g11.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1494]] /* g11.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1500]] /* g11.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1496]] /* g11.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15827;
}
/*
equation index: 15828
type: SIMPLE_ASSIGN
g11.PePu = if g11.running.value then g11.cePu * g11.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1478]] /* g11.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1485]] /* g11.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15828;
}
/*
equation index: 15829
type: SIMPLE_ASSIGN
$DAEres1346 = if g11.running.value then 2.0 * g11.H * der(g11.omegaPu) - (g11.cmPu * g11.PNomTurb / g11.SNom + g11.DPu * (omegaCOI - g11.omegaPu) - g11.cePu) else der(g11.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15829};
  (data->simulationInfo->daeModeData->residualVars[1346]) /* $DAEres1346 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* g11.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* der(g11.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1486]] /* g11.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1274]] /* g11.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */),"g11.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* g11.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* g11.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1485]] /* g11.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* der(g11.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15829;
}
/*
equation index: 15830
type: SIMPLE_ASSIGN
g11.thetaInternal.value = if g11.running.value then Modelica.Math.atan3(g11.udPu, g11.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1512]] /* g11.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1517]] /* g11.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1519]] /* g11.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15830;
}
/*
equation index: 15831
type: SIMPLE_ASSIGN
g11.uPu.re = if g11.running.value then g11.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1514]] /* g11.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15831;
}
/*
equation index: 15832
type: SIMPLE_ASSIGN
g11.UPu = if g11.running.value then (g11.terminal.V.re ^ 2.0 + g11.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15832};
  modelica_real tmp1807;
  modelica_real tmp1808;
  modelica_real tmp1809;
  modelica_boolean tmp1810;
  modelica_real tmp1811;
  tmp1810 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp1810)
  {
    tmp1807 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */);
    tmp1808 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */);
    tmp1809 = (tmp1807 * tmp1807) + (tmp1808 * tmp1808);
    if(tmp1809 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1809, 0.5);
    }
    tmp1811 = sqrt(tmp1809);
  }
  else
  {
    tmp1811 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1484]] /* g11.UPu variable */) = tmp1811;
  threadData->lastEquationSolved = 15832;
}
/*
equation index: 15833
type: SIMPLE_ASSIGN
goverNordic_g11.PGenPu = if g11.running.value then (-g11.terminal.V.re) * g11.terminal.i.re - g11.terminal.V.im * g11.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2112]] /* goverNordic_g11.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15833;
}
/*
equation index: 15834
type: SIMPLE_ASSIGN
goverNordic_g11.perUnitP.y = goverNordic_g11.perUnitP.k * goverNordic_g11.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2128]] /* goverNordic_g11.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2646]] /* goverNordic_g11.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2112]] /* goverNordic_g11.PGenPu variable */));
  threadData->lastEquationSolved = 15834;
}
/*
equation index: 15835
type: SIMPLE_ASSIGN
$DAEres1347 = goverNordic_g11.firstOrder1.k * goverNordic_g11.perUnitP.y + (-goverNordic_g11.firstOrder1.y) - der(goverNordic_g11.firstOrder1.y) * goverNordic_g11.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15835};
  (data->simulationInfo->daeModeData->residualVars[1347]) /* $DAEres1347 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2624]] /* goverNordic_g11.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2128]] /* goverNordic_g11.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* goverNordic_g11.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* der(goverNordic_g11.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2623]] /* goverNordic_g11.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15835;
}
/*
equation index: 15836
type: SIMPLE_ASSIGN
g11.PGen = if g11.running.value then 100.0 * goverNordic_g11.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1477]] /* g11.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2112]] /* goverNordic_g11.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15836;
}
/*
equation index: 15837
type: SIMPLE_ASSIGN
g11.QGenPu = if g11.running.value then g11.terminal.V.re * g11.terminal.i.im - g11.terminal.V.im * g11.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1481]] /* g11.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15837;
}
/*
equation index: 15838
type: SIMPLE_ASSIGN
g11.QGen = if g11.running.value then 100.0 * g11.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15838};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1480]] /* g11.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1481]] /* g11.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15838;
}
/*
equation index: 15839
type: SIMPLE_ASSIGN
g11.uStatorPu.re = if g11.running.value then (g11.terminal.V.re + (-100.0) * (g11.terminal.i.re * g11.RTfoPu - g11.terminal.i.im * g11.XTfoPu) / g11.SNom) / g11.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* g11.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* g11.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */),"g11.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */),"g11.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15839;
}
/*
equation index: 15840
type: SIMPLE_ASSIGN
g11.uStatorPu.im = if g11.running.value then (g11.terminal.V.im + (-100.0) * (g11.terminal.i.re * g11.XTfoPu + g11.terminal.i.im * g11.RTfoPu) / g11.SNom) / g11.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1511]] /* g11.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* g11.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* g11.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* g11.SNom PARAM */),"g11.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */),"g11.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15840;
}
/*
equation index: 15841
type: SIMPLE_ASSIGN
vrNordic_g11.UsPu = if g11.running.value then if g11.uStatorPu.re == 0.0 and g11.uStatorPu.im == 0.0 then 0.0 else (g11.uStatorPu.re ^ 2.0 + g11.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15841};
  modelica_real tmp1812;
  modelica_real tmp1813;
  modelica_real tmp1814;
  modelica_boolean tmp1815;
  modelica_real tmp1816;
  modelica_boolean tmp1817;
  modelica_real tmp1818;
  tmp1817 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp1817)
  {
    tmp1815 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */) == 0.0));
    if(tmp1815)
    {
      tmp1816 = 0.0;
    }
    else
    {
      tmp1812 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */);
      tmp1813 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */);
      tmp1814 = (tmp1812 * tmp1812) + (tmp1813 * tmp1813);
      if(tmp1814 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1814, 0.5);
      }
      tmp1816 = sqrt(tmp1814);
    }
    tmp1818 = tmp1816;
  }
  else
  {
    tmp1818 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3687]] /* vrNordic_g11.UsPu variable */) = tmp1818;
  threadData->lastEquationSolved = 15841;
}
/*
equation index: 15842
type: SIMPLE_ASSIGN
vrNordic_g11.dU.y = vrNordic_g11.const1.k - vrNordic_g11.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3691]] /* vrNordic_g11.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4922]] /* vrNordic_g11.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3687]] /* vrNordic_g11.UsPu variable */);
  threadData->lastEquationSolved = 15842;
}
/*
equation index: 15843
type: SIMPLE_ASSIGN
vrNordic_g11.add.y = vrNordic_g11.add.k1 * vrNordic_g11.dU.y + vrNordic_g11.add.k2 * vrNordic_g11.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4919]] /* vrNordic_g11.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3691]] /* vrNordic_g11.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4920]] /* vrNordic_g11.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3705]] /* vrNordic_g11.limiter.y variable */));
  threadData->lastEquationSolved = 15843;
}
/*
equation index: 15844
type: SIMPLE_ASSIGN
vrNordic_g11.switch.y = if vrNordic_g11.greaterEqualThreshold.y then vrNordic_g11.gain1.y else vrNordic_g11.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15844};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3708]] /* vrNordic_g11.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1045]] /* vrNordic_g11.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3695]] /* vrNordic_g11.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */));
  threadData->lastEquationSolved = 15844;
}
/*
equation index: 15845
type: SIMPLE_ASSIGN
vrNordic_g11.min1.y = if vrNordic_g11.switch.y < vrNordic_g11.add.y then vrNordic_g11.switch.y else vrNordic_g11.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15845};
  modelica_boolean tmp1819;
  modelica_real tmp1820;
  modelica_real tmp1821;
  tmp1820 = 1.0;
  tmp1821 = 1.0;
  relationhysteresis(data, &tmp1819, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3708]] /* vrNordic_g11.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */), tmp1820, tmp1821, 388, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3706]] /* vrNordic_g11.min1.y variable */) = (tmp1819?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3708]] /* vrNordic_g11.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */));
  threadData->lastEquationSolved = 15845;
}
/*
equation index: 15846
type: SIMPLE_ASSIGN
vrNordic_g11.kMulDU.y = vrNordic_g11.kMulDU.k * vrNordic_g11.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15846};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3696]] /* vrNordic_g11.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4931]] /* vrNordic_g11.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3706]] /* vrNordic_g11.min1.y variable */));
  threadData->lastEquationSolved = 15846;
}
/*
equation index: 15847
type: SIMPLE_ASSIGN
$DAEres1348 = vrNordic_g11.leadLag.a_end * vrNordic_g11.kMulDU.y + (-vrNordic_g11.leadLag.a[2]) * vrNordic_g11.leadLag.x_scaled[1] - der(vrNordic_g11.leadLag.x_scaled[1]) * vrNordic_g11.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15847};
  (data->simulationInfo->daeModeData->residualVars[1348]) /* $DAEres1348 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4936]] /* vrNordic_g11.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3696]] /* vrNordic_g11.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4935]] /* vrNordic_g11.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* vrNordic_g11.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[581]] /* der(vrNordic_g11.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4934]] /* vrNordic_g11.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15847;
}
/*
equation index: 15848
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.y = (vrNordic_g11.leadLag.bb[2] - vrNordic_g11.leadLag.d * vrNordic_g11.leadLag.a[2]) * vrNordic_g11.leadLag.x[1] + vrNordic_g11.leadLag.d * vrNordic_g11.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15848};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3698]] /* vrNordic_g11.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4940]] /* vrNordic_g11.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4941]] /* vrNordic_g11.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4935]] /* vrNordic_g11.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3697]] /* vrNordic_g11.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4941]] /* vrNordic_g11.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3696]] /* vrNordic_g11.kMulDU.y variable */));
  threadData->lastEquationSolved = 15848;
}
/*
equation index: 15849
type: SIMPLE_ASSIGN
vrNordic_g11.feedback1.y = vrNordic_g11.leadLag.y - vrNordic_g11.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3693]] /* vrNordic_g11.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3698]] /* vrNordic_g11.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15849;
}
/*
equation index: 15850
type: SIMPLE_ASSIGN
vrNordic_g11.gain.y = vrNordic_g11.gain.k * vrNordic_g11.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4928]] /* vrNordic_g11.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3693]] /* vrNordic_g11.feedback1.y variable */));
  threadData->lastEquationSolved = 15850;
}
/*
equation index: 15851
type: SIMPLE_ASSIGN
$DAEres1349 = (if vrNordic_g11.limIntegrator.y < vrNordic_g11.limIntegrator.outMin and vrNordic_g11.limIntegrator.k * vrNordic_g11.gain.y < 0.0 or vrNordic_g11.limIntegrator.y > vrNordic_g11.limIntegrator.outMax and vrNordic_g11.limIntegrator.k * vrNordic_g11.gain.y > 0.0 then 0.0 else vrNordic_g11.limIntegrator.k * vrNordic_g11.gain.y) - der(vrNordic_g11.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15851};
  modelica_boolean tmp1822;
  modelica_real tmp1823;
  modelica_real tmp1824;
  modelica_boolean tmp1825;
  modelica_real tmp1826;
  modelica_real tmp1827;
  modelica_boolean tmp1828;
  modelica_real tmp1829;
  modelica_real tmp1830;
  modelica_boolean tmp1831;
  modelica_real tmp1832;
  modelica_real tmp1833;
  tmp1823 = 1.0;
  tmp1824 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4973]] /* vrNordic_g11.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1822, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4973]] /* vrNordic_g11.limIntegrator.outMin PARAM */), tmp1823, tmp1824, 392, Less, LessZC);
  tmp1826 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */))) * (1.0);
  tmp1827 = 0.0;
  relationhysteresis(data, &tmp1825, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)), 0.0, tmp1826, tmp1827, 393, Less, LessZC);
  tmp1829 = 1.0;
  tmp1830 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4972]] /* vrNordic_g11.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1828, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4972]] /* vrNordic_g11.limIntegrator.outMax PARAM */), tmp1829, tmp1830, 394, Greater, GreaterZC);
  tmp1832 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */))) * (1.0);
  tmp1833 = 0.0;
  relationhysteresis(data, &tmp1831, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)), 0.0, tmp1832, tmp1833, 395, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1349]) /* $DAEres1349 DAE_RESIDUAL_VAR */ = (((tmp1822 && tmp1825) || (tmp1828 && tmp1831))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* der(vrNordic_g11.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15851;
}
/*
equation index: 15852
type: SIMPLE_ASSIGN
g11.iStatorPu.im = if g11.running.value then g11.rTfoPu * g11.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15852};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* g11.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1510]] /* g11.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15852;
}
/*
equation index: 15853
type: SIMPLE_ASSIGN
g11.sStatorPu.re = if g11.running.value then g11.uStatorPu.re * g11.iStatorPu.re + g11.uStatorPu.im * g11.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1506]] /* g11.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15853;
}
/*
equation index: 15854
type: SIMPLE_ASSIGN
g11.sStatorPu.im = if g11.running.value then g11.uStatorPu.im * g11.iStatorPu.re - g11.uStatorPu.re * g11.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1505]] /* g11.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15854;
}
/*
equation index: 15855
type: SIMPLE_ASSIGN
g11.QStatorPu = if g11.running.value then -g11.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1482]] /* g11.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1505]] /* g11.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15855;
}
/*
equation index: 15856
type: SIMPLE_ASSIGN
g11.QStatorPuQNom = if g11.running.value then 100.0 * g11.QStatorPu / g11.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1483]] /* g11.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1482]] /* g11.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* g11.QNomAlt PARAM */),"g11.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15856;
}
/*
equation index: 15857
type: SIMPLE_ASSIGN
g11.IStatorPu = if g11.running.value then if g11.iStatorPu.re == 0.0 and g11.iStatorPu.im == 0.0 then 0.0 else (g11.iStatorPu.re ^ 2.0 + g11.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15857};
  modelica_real tmp1834;
  modelica_real tmp1835;
  modelica_real tmp1836;
  modelica_boolean tmp1837;
  modelica_real tmp1838;
  modelica_boolean tmp1839;
  modelica_real tmp1840;
  tmp1839 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[510]] /* g11.running.value DISCRETE */);
  if(tmp1839)
  {
    tmp1837 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */) == 0.0));
    if(tmp1837)
    {
      tmp1838 = 0.0;
    }
    else
    {
      tmp1834 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */);
      tmp1835 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */);
      tmp1836 = (tmp1834 * tmp1834) + (tmp1835 * tmp1835);
      if(tmp1836 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1836, 0.5);
      }
      tmp1838 = sqrt(tmp1836);
    }
    tmp1840 = tmp1838;
  }
  else
  {
    tmp1840 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1474]] /* g11.IStatorPu variable */) = tmp1840;
  threadData->lastEquationSolved = 15857;
}
/*
equation index: 15858
type: SIMPLE_ASSIGN
$whenCondition34 = not pre(g10.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15858};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[267]] /* $whenCondition34 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[506] /* g10.running.value DISCRETE */));
  threadData->lastEquationSolved = 15858;
}
/*
equation index: 15859
type: WHEN

when {} then
  g10.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15859};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[267]] /* $whenCondition34 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[267] /* $whenCondition34 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15859;
}
/*
equation index: 15861
type: SIMPLE_ASSIGN
$whenCondition36 = not g10.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15861};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[289]] /* $whenCondition36 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */));
  threadData->lastEquationSolved = 15861;
}
/*
equation index: 15862
type: SIMPLE_ASSIGN
$whenCondition35 = g10.running.value and not pre(g10.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15862};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[278]] /* $whenCondition35 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[506] /* g10.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15862;
}
/*
equation index: 15863
type: WHEN

when {$whenCondition36} then
  g10.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15863};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[289]] /* $whenCondition36 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[289] /* $whenCondition36 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[19]] /* g10.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[278]] /* $whenCondition35 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[278] /* $whenCondition35 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[19]] /* g10.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15863;
}
/*
equation index: 15865
type: SIMPLE_ASSIGN
g10.converter.u = Integer(g10.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15865};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[18]] /* g10.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[19]] /* g10.state DISCRETE */)));
  threadData->lastEquationSolved = 15865;
}
/*
equation index: 15866
type: SIMPLE_ASSIGN
g10.genState = (*Real*)(g10.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1442]] /* g10.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[18]] /* g10.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15866;
}
/*
equation index: 15867
type: SIMPLE_ASSIGN
$DAEres130 = if g10.running.value then der(g10.theta) - 314.1592653589793 * (g10.omegaPu - omegaCOI) else der(g10.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15867};
  (data->simulationInfo->daeModeData->residualVars[130]) /* $DAEres130 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* der(g10.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* der(g10.theta) STATE_DER */));
  threadData->lastEquationSolved = 15867;
}
/*
equation index: 15868
type: SIMPLE_ASSIGN
g10.cmPu = if g10.running.value then g10.PmPu / g10.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15868};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1440]] /* g10.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1433]] /* g10.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */),"g10.omegaPu"):0.0);
  threadData->lastEquationSolved = 15868;
}
/*
equation index: 15869
type: SIMPLE_ASSIGN
g10.ufPu = if g10.running.value then vrNordic_g10.limIntegrator.y * g10.Kuf * g10.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1472]] /* g10.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* g10.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15869;
}
/*
equation index: 15870
type: SIMPLE_ASSIGN
$DAEres379 = if g10.running.value then g10.mqsPu - g10.MqPPu / (1.0 + g10.mq * g10.lambdaAirGapPu ^ g10.nq) else g10.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15870};
  modelica_real tmp1841;
  modelica_real tmp1842;
  modelica_real tmp1843;
  modelica_real tmp1844;
  modelica_real tmp1845;
  modelica_real tmp1846;
  modelica_real tmp1847;
  modelica_boolean tmp1848;
  modelica_real tmp1849;
  tmp1848 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp1848)
  {
    tmp1841 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1453]] /* g10.lambdaAirGapPu variable */);
    tmp1842 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* g10.nq PARAM */);
    if(tmp1841 < 0.0 && tmp1842 != 0.0)
    {
      tmp1844 = modf(tmp1842, &tmp1845);
      
      if(tmp1844 > 0.5)
      {
        tmp1844 -= 1.0;
        tmp1845 += 1.0;
      }
      else if(tmp1844 < -0.5)
      {
        tmp1844 += 1.0;
        tmp1845 -= 1.0;
      }
      
      if(fabs(tmp1844) < 1e-10)
        tmp1843 = pow(tmp1841, tmp1845);
      else
      {
        tmp1847 = modf(1.0/tmp1842, &tmp1846);
        if(tmp1847 > 0.5)
        {
          tmp1847 -= 1.0;
          tmp1846 += 1.0;
        }
        else if(tmp1847 < -0.5)
        {
          tmp1847 += 1.0;
          tmp1846 -= 1.0;
        }
        if(fabs(tmp1847) < 1e-10 && ((unsigned long)tmp1846 & 1))
        {
          tmp1843 = -pow(-tmp1841, tmp1844)*pow(tmp1841, tmp1845);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1841, tmp1842);
        }
      }
    }
    else
    {
      tmp1843 = pow(tmp1841, tmp1842);
    }
    if(isnan(tmp1843) || isinf(tmp1843))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1841, tmp1842);
    }
    tmp1849 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1458]] /* g10.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* g10.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1210]] /* g10.mq PARAM */)) * (tmp1843),"1.0 + g10.mq * g10.lambdaAirGapPu ^ g10.nq"));
  }
  else
  {
    tmp1849 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1458]] /* g10.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[379]) /* $DAEres379 DAE_RESIDUAL_VAR */ = tmp1849;
  threadData->lastEquationSolved = 15870;
}
/*
equation index: 15871
type: SIMPLE_ASSIGN
$DAEres380 = if g10.running.value then g10.mdsPu - g10.MdPPu / (1.0 + g10.md * g10.lambdaAirGapPu ^ g10.nd) else g10.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15871};
  modelica_real tmp1850;
  modelica_real tmp1851;
  modelica_real tmp1852;
  modelica_real tmp1853;
  modelica_real tmp1854;
  modelica_real tmp1855;
  modelica_real tmp1856;
  modelica_boolean tmp1857;
  modelica_real tmp1858;
  tmp1857 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp1857)
  {
    tmp1850 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1453]] /* g10.lambdaAirGapPu variable */);
    tmp1851 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* g10.nd PARAM */);
    if(tmp1850 < 0.0 && tmp1851 != 0.0)
    {
      tmp1853 = modf(tmp1851, &tmp1854);
      
      if(tmp1853 > 0.5)
      {
        tmp1853 -= 1.0;
        tmp1854 += 1.0;
      }
      else if(tmp1853 < -0.5)
      {
        tmp1853 += 1.0;
        tmp1854 -= 1.0;
      }
      
      if(fabs(tmp1853) < 1e-10)
        tmp1852 = pow(tmp1850, tmp1854);
      else
      {
        tmp1856 = modf(1.0/tmp1851, &tmp1855);
        if(tmp1856 > 0.5)
        {
          tmp1856 -= 1.0;
          tmp1855 += 1.0;
        }
        else if(tmp1856 < -0.5)
        {
          tmp1856 += 1.0;
          tmp1855 -= 1.0;
        }
        if(fabs(tmp1856) < 1e-10 && ((unsigned long)tmp1855 & 1))
        {
          tmp1852 = -pow(-tmp1850, tmp1853)*pow(tmp1850, tmp1854);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1850, tmp1851);
        }
      }
    }
    else
    {
      tmp1852 = pow(tmp1850, tmp1851);
    }
    if(isnan(tmp1852) || isinf(tmp1852))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1850, tmp1851);
    }
    tmp1858 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1456]] /* g10.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* g10.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1209]] /* g10.md PARAM */)) * (tmp1852),"1.0 + g10.md * g10.lambdaAirGapPu ^ g10.nd"));
  }
  else
  {
    tmp1858 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1456]] /* g10.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[380]) /* $DAEres380 DAE_RESIDUAL_VAR */ = tmp1858;
  threadData->lastEquationSolved = 15871;
}
/*
equation index: 15872
type: SIMPLE_ASSIGN
$DAEres381 = if g10.running.value then g10.miPu - (g10.mdsPu * g10.cos2Eta + g10.mqsPu * g10.sin2Eta) else g10.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15872};
  (data->simulationInfo->daeModeData->residualVars[381]) /* $DAEres381 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1457]] /* g10.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1456]] /* g10.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1441]] /* g10.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1458]] /* g10.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1461]] /* g10.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1457]] /* g10.miPu variable */));
  threadData->lastEquationSolved = 15872;
}
/*
equation index: 15873
type: SIMPLE_ASSIGN
$DAEres382 = if g10.running.value then g10.cos2Eta - (g10.lambdaADPu / g10.lambdaAirGapPu) ^ 2.0 else g10.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15873};
  modelica_real tmp1859;
  modelica_boolean tmp1860;
  modelica_real tmp1861;
  tmp1860 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp1860)
  {
    tmp1859 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1451]] /* g10.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1453]] /* g10.lambdaAirGapPu variable */),"g10.lambdaAirGapPu");
    tmp1861 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1441]] /* g10.cos2Eta variable */) - ((tmp1859 * tmp1859));
  }
  else
  {
    tmp1861 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1441]] /* g10.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[382]) /* $DAEres382 DAE_RESIDUAL_VAR */ = tmp1861;
  threadData->lastEquationSolved = 15873;
}
/*
equation index: 15874
type: SIMPLE_ASSIGN
$DAEres383 = if g10.running.value then g10.MqSatPPu - (g10.miPu - g10.MsalPu * g10.cos2Eta) else g10.MqSatPPu - g10.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15874};
  (data->simulationInfo->daeModeData->residualVars[383]) /* $DAEres383 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1457]] /* g10.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* g10.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1441]] /* g10.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* g10.MqPPu PARAM */));
  threadData->lastEquationSolved = 15874;
}
/*
equation index: 15875
type: SIMPLE_ASSIGN
$DAEres384 = if g10.running.value then g10.lambdaQ2Pu - (g10.MqSatPPu * (g10.iqPu + g10.iQ1Pu) + (g10.MqSatPPu + g10.LQ2PPu) * g10.iQ2Pu) else g10.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15875};
  (data->simulationInfo->daeModeData->residualVars[384]) /* $DAEres384 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* g10.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* g10.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1146]] /* g10.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* g10.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* g10.iQ2Pu variable */));
  threadData->lastEquationSolved = 15875;
}
/*
equation index: 15876
type: SIMPLE_ASSIGN
$DAEres385 = if g10.running.value then g10.lambdaQ1Pu - (g10.MqSatPPu * g10.iqPu + (g10.MqSatPPu + g10.LQ1PPu) * g10.iQ1Pu + g10.MqSatPPu * g10.iQ2Pu) else g10.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15876};
  (data->simulationInfo->daeModeData->residualVars[385]) /* $DAEres385 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* g10.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1145]] /* g10.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* g10.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* g10.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* g10.iQ1Pu variable */));
  threadData->lastEquationSolved = 15876;
}
/*
equation index: 15877
type: SIMPLE_ASSIGN
$DAEres386 = if g10.running.value then g10.lambdaAQPu - g10.MqSatPPu * (g10.iqPu + g10.iQ1Pu + g10.iQ2Pu) else g10.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15877};
  (data->simulationInfo->daeModeData->residualVars[386]) /* $DAEres386 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1452]] /* g10.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* g10.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* g10.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1452]] /* g10.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15877;
}
/*
equation index: 15878
type: SIMPLE_ASSIGN
$DAEres387 = if g10.running.value then g10.lambdaAirGapPu - sqrt(g10.lambdaADPu ^ 2.0 + g10.lambdaAQPu ^ 2.0) else g10.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15878};
  modelica_real tmp1862;
  modelica_real tmp1863;
  modelica_real tmp1864;
  modelica_boolean tmp1865;
  modelica_real tmp1866;
  tmp1865 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp1865)
  {
    tmp1862 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1451]] /* g10.lambdaADPu variable */);
    tmp1863 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1452]] /* g10.lambdaAQPu variable */);
    tmp1864 = (tmp1862 * tmp1862) + (tmp1863 * tmp1863);
    if(!(tmp1864 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g10.lambdaADPu ^ 2.0 + g10.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1864);
      }
    }
    tmp1866 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1453]] /* g10.lambdaAirGapPu variable */) - sqrt(tmp1864);
  }
  else
  {
    tmp1866 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1453]] /* g10.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[387]) /* $DAEres387 DAE_RESIDUAL_VAR */ = tmp1866;
  threadData->lastEquationSolved = 15878;
}
/*
equation index: 15879
type: SIMPLE_ASSIGN
$DAEres388 = if g10.running.value then g10.sin2Eta - (g10.lambdaAQPu / g10.lambdaAirGapPu) ^ 2.0 else g10.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15879};
  modelica_real tmp1867;
  modelica_boolean tmp1868;
  modelica_real tmp1869;
  tmp1868 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp1868)
  {
    tmp1867 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1452]] /* g10.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1453]] /* g10.lambdaAirGapPu variable */),"g10.lambdaAirGapPu");
    tmp1869 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1461]] /* g10.sin2Eta variable */) - ((tmp1867 * tmp1867));
  }
  else
  {
    tmp1869 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1461]] /* g10.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[388]) /* $DAEres388 DAE_RESIDUAL_VAR */ = tmp1869;
  threadData->lastEquationSolved = 15879;
}
/*
equation index: 15880
type: SIMPLE_ASSIGN
$DAEres389 = if g10.running.value then g10.MdSatPPu - (g10.miPu + g10.MsalPu * g10.sin2Eta) else g10.MdSatPPu - g10.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15880};
  (data->simulationInfo->daeModeData->residualVars[389]) /* $DAEres389 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1457]] /* g10.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* g10.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1461]] /* g10.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* g10.MdPPu PARAM */));
  threadData->lastEquationSolved = 15880;
}
/*
equation index: 15881
type: SIMPLE_ASSIGN
$DAEres390 = if g10.running.value then g10.lambdaADPu - g10.MdSatPPu * (g10.idPu + g10.ifPu + g10.iDPu) else g10.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15881};
  (data->simulationInfo->daeModeData->residualVars[390]) /* $DAEres390 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1451]] /* g10.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* g10.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1451]] /* g10.lambdaADPu variable */));
  threadData->lastEquationSolved = 15881;
}
/*
equation index: 15882
type: SIMPLE_ASSIGN
$DAEres391 = if g10.running.value then g10.lambdaDPu - (g10.MdSatPPu * g10.idPu + (g10.MdSatPPu + g10.MrcPPu) * g10.ifPu + (g10.MdSatPPu + g10.LDPPu + g10.MrcPPu) * g10.iDPu) else g10.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15882};
  (data->simulationInfo->daeModeData->residualVars[391]) /* $DAEres391 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* g10.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* g10.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1144]] /* g10.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* g10.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* g10.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */));
  threadData->lastEquationSolved = 15882;
}
/*
equation index: 15883
type: SIMPLE_ASSIGN
$DAEres392 = if g10.running.value then g10.lambdafPu - (g10.MdSatPPu * g10.idPu + (g10.MdSatPPu + g10.LfPPu + g10.MrcPPu) * g10.ifPu + (g10.MdSatPPu + g10.MrcPPu) * g10.iDPu) else g10.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15883};
  (data->simulationInfo->daeModeData->residualVars[392]) /* $DAEres392 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* g10.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* g10.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* g10.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* g10.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* g10.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */));
  threadData->lastEquationSolved = 15883;
}
/*
equation index: 15884
type: SIMPLE_ASSIGN
$DAEres393 = if g10.running.value then 100.0 * g10.terminal.i.im / g10.SNom - (sin(g10.theta) * g10.iqPu - cos(g10.theta) * g10.idPu) else g10.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15884};
  (data->simulationInfo->daeModeData->residualVars[393]) /* $DAEres393 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */),"g10.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* g10.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* g10.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */));
  threadData->lastEquationSolved = 15884;
}
/*
equation index: 15885
type: SIMPLE_ASSIGN
$DAEres1101 = if g10.running.value then 100.0 * g10.terminal.i.re / g10.SNom - (sin(g10.theta) * g10.idPu + cos(g10.theta) * g10.iqPu) else g10.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15885};
  (data->simulationInfo->daeModeData->residualVars[1101]) /* $DAEres1101 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */),"g10.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* g10.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* g10.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */));
  threadData->lastEquationSolved = 15885;
}
/*
equation index: 15886
type: SIMPLE_ASSIGN
$DAEres1102 = if g10.running.value then g10.uqPu - ((g10.RaPPu + g10.RTfoPu) * g10.iqPu + g10.omegaPu * g10.lambdadPu) else g10.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15886};
  (data->simulationInfo->daeModeData->residualVars[1102]) /* $DAEres1102 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* g10.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1185]] /* g10.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* g10.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1454]] /* g10.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1455]] /* g10.lambdaqPu variable */));
  threadData->lastEquationSolved = 15886;
}
/*
equation index: 15887
type: SIMPLE_ASSIGN
$DAEres1103 = if g10.running.value then g10.lambdadPu - ((g10.MdSatPPu + g10.LdPPu + g10.XTfoPu) * g10.idPu + g10.MdSatPPu * (g10.ifPu + g10.iDPu)) else g10.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15887};
  (data->simulationInfo->daeModeData->residualVars[1103]) /* $DAEres1103 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1454]] /* g10.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* g10.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* g10.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* g10.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* g10.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */));
  threadData->lastEquationSolved = 15887;
}
/*
equation index: 15888
type: SIMPLE_ASSIGN
$DAEres1104 = if g10.running.value then g10.lambdaqPu - ((g10.MqSatPPu + g10.LqPPu + g10.XTfoPu) * g10.iqPu + g10.MqSatPPu * (g10.iQ1Pu + g10.iQ2Pu)) else g10.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15888};
  (data->simulationInfo->daeModeData->residualVars[1104]) /* $DAEres1104 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1455]] /* g10.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1158]] /* g10.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* g10.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1430]] /* g10.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* g10.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* g10.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* g10.iDPu variable */));
  threadData->lastEquationSolved = 15888;
}
/*
equation index: 15889
type: SIMPLE_ASSIGN
$DAEres1105 = if g10.running.value then g10.udPu - ((g10.RaPPu + g10.RTfoPu) * g10.idPu - g10.omegaPu * g10.lambdaqPu) else g10.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15889};
  (data->simulationInfo->daeModeData->residualVars[1105]) /* $DAEres1105 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* g10.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1185]] /* g10.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* g10.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1455]] /* g10.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1454]] /* g10.lambdadPu variable */));
  threadData->lastEquationSolved = 15889;
}
/*
equation index: 15890
type: SIMPLE_ASSIGN
$DAEres1106 = if g10.running.value then g10.terminal.V.im - (sin(g10.theta) * g10.uqPu - cos(g10.theta) * g10.udPu) else g10.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15890};
  (data->simulationInfo->daeModeData->residualVars[1106]) /* $DAEres1106 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* g10.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* g10.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* g10.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* g10.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* g10.uqPu variable */));
  threadData->lastEquationSolved = 15890;
}
/*
equation index: 15891
type: SIMPLE_ASSIGN
$DAEres1107 = if g10.running.value then g10.terminal.V.re - (sin(g10.theta) * g10.udPu + cos(g10.theta) * g10.uqPu) else g10.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15891};
  (data->simulationInfo->daeModeData->residualVars[1107]) /* $DAEres1107 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* g10.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* g10.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* g10.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* g10.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* g10.udPu variable */));
  threadData->lastEquationSolved = 15891;
}
/*
equation index: 15892
type: SIMPLE_ASSIGN
g10.uPu.re = if g10.running.value then g10.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1468]] /* g10.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15892;
}
/*
equation index: 15893
type: SIMPLE_ASSIGN
g10.thetaInternal.value = if g10.running.value then Modelica.Math.atan3(g10.udPu, g10.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1466]] /* g10.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* g10.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* g10.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15893;
}
/*
equation index: 15894
type: SIMPLE_ASSIGN
$DAEres1248 = if g10.running.value then (-g10.RDPPu) * g10.iDPu - 0.0031830988618379067 * der(g10.lambdaDPu) else der(g10.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15894};
  (data->simulationInfo->daeModeData->residualVars[1248]) /* $DAEres1248 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1180]] /* g10.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* g10.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* der(g10.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* der(g10.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15894;
}
/*
equation index: 15895
type: SIMPLE_ASSIGN
$DAEres1249 = if g10.running.value then (-g10.RQ2PPu) * g10.iQ2Pu - 0.0031830988618379067 * der(g10.lambdaQ2Pu) else der(g10.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15895};
  (data->simulationInfo->daeModeData->residualVars[1249]) /* $DAEres1249 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1182]] /* g10.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* g10.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* der(g10.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* der(g10.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15895;
}
/*
equation index: 15896
type: SIMPLE_ASSIGN
$DAEres1250 = if g10.running.value then (-g10.RQ1PPu) * g10.iQ1Pu - 0.0031830988618379067 * der(g10.lambdaQ1Pu) else der(g10.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15896};
  (data->simulationInfo->daeModeData->residualVars[1250]) /* $DAEres1250 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* g10.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* g10.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* der(g10.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* der(g10.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15896;
}
/*
equation index: 15897
type: SIMPLE_ASSIGN
vrNordic_g10.IrPu = if g10.running.value then g10.RfPPu * g10.ifPu / (g10.rTfoPu * g10.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15897};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3662]] /* vrNordic_g10.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* g10.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* g10.Kuf PARAM */)),"g10.rTfoPu * g10.Kuf")):0.0);
  threadData->lastEquationSolved = 15897;
}
/*
equation index: 15898
type: SIMPLE_ASSIGN
vrNordic_g10.dIf.y = vrNordic_g10.IrPu - vrNordic_g10.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15898};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3662]] /* vrNordic_g10.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4844]] /* vrNordic_g10.const2.k PARAM */);
  threadData->lastEquationSolved = 15898;
}
/*
equation index: 15899
type: SIMPLE_ASSIGN
vrNordic_g10.gain1.y = vrNordic_g10.gain1.k * vrNordic_g10.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3671]] /* vrNordic_g10.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4850]] /* vrNordic_g10.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */));
  threadData->lastEquationSolved = 15899;
}
/*
equation index: 15900
type: SIMPLE_ASSIGN
vrNordic_g10.overExcitationLimitation.y = if vrNordic_g10.dIf.y < -0.1 then -1.0 else if vrNordic_g10.dIf.y < 0.0 then 0.0 else if vrNordic_g10.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g10.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15900};
  modelica_boolean tmp1870;
  modelica_real tmp1871;
  modelica_real tmp1872;
  modelica_boolean tmp1873;
  modelica_real tmp1874;
  modelica_real tmp1875;
  modelica_boolean tmp1876;
  modelica_boolean tmp1877;
  modelica_real tmp1878;
  modelica_boolean tmp1879;
  modelica_real tmp1880;
  tmp1871 = 1.0;
  tmp1872 = 0.1;
  relationhysteresis(data, &tmp1870, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */), -0.1, tmp1871, tmp1872, 374, Less, LessZC);
  tmp1879 = (modelica_boolean)tmp1870;
  if(tmp1879)
  {
    tmp1880 = -1.0;
  }
  else
  {
    tmp1874 = 1.0;
    tmp1875 = 0.0;
    relationhysteresis(data, &tmp1873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */), 0.0, tmp1874, tmp1875, 375, Less, LessZC);
    tmp1877 = (modelica_boolean)tmp1873;
    if(tmp1877)
    {
      tmp1878 = 0.0;
    }
    else
    {
      tmp1876 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4898]] /* vrNordic_g10.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1878 = (tmp1876?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */));
    }
    tmp1880 = tmp1878;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */) = tmp1880;
  threadData->lastEquationSolved = 15900;
}
/*
equation index: 15901
type: SIMPLE_ASSIGN
$DAEres1251 = (if vrNordic_g10.timer.y < vrNordic_g10.timer.outMin and vrNordic_g10.timer.k * vrNordic_g10.overExcitationLimitation.y < 0.0 or vrNordic_g10.timer.y > vrNordic_g10.timer.outMax and vrNordic_g10.timer.k * vrNordic_g10.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g10.timer.k * vrNordic_g10.overExcitationLimitation.y) - der(vrNordic_g10.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15901};
  modelica_boolean tmp1881;
  modelica_real tmp1882;
  modelica_real tmp1883;
  modelica_boolean tmp1884;
  modelica_real tmp1885;
  modelica_real tmp1886;
  modelica_boolean tmp1887;
  modelica_real tmp1888;
  modelica_real tmp1889;
  modelica_boolean tmp1890;
  modelica_real tmp1891;
  modelica_real tmp1892;
  tmp1882 = 1.0;
  tmp1883 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4908]] /* vrNordic_g10.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1881, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4908]] /* vrNordic_g10.timer.outMin PARAM */), tmp1882, tmp1883, 380, Less, LessZC);
  tmp1885 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */))) * (1.0);
  tmp1886 = 0.0;
  relationhysteresis(data, &tmp1884, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)), 0.0, tmp1885, tmp1886, 381, Less, LessZC);
  tmp1888 = 1.0;
  tmp1889 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4907]] /* vrNordic_g10.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1887, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4907]] /* vrNordic_g10.timer.outMax PARAM */), tmp1888, tmp1889, 382, Greater, GreaterZC);
  tmp1891 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */))) * (1.0);
  tmp1892 = 0.0;
  relationhysteresis(data, &tmp1890, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)), 0.0, tmp1891, tmp1892, 383, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1251]) /* $DAEres1251 DAE_RESIDUAL_VAR */ = (((tmp1881 && tmp1884) || (tmp1887 && tmp1890))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[579]] /* der(vrNordic_g10.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15901;
}
/*
equation index: 15902
type: SIMPLE_ASSIGN
g10.cePu = if g10.running.value then g10.lambdaqPu * g10.idPu - g10.lambdadPu * g10.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1439]] /* g10.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1455]] /* g10.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* g10.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1454]] /* g10.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1450]] /* g10.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15902;
}
/*
equation index: 15903
type: SIMPLE_ASSIGN
g10.PePu = if g10.running.value then g10.cePu * g10.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1432]] /* g10.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1439]] /* g10.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15903;
}
/*
equation index: 15904
type: SIMPLE_ASSIGN
$DAEres1252 = if g10.running.value then 2.0 * g10.H * der(g10.omegaPu) - (g10.cmPu * g10.PNomTurb / g10.SNom + g10.DPu * (omegaCOI - g10.omegaPu) - g10.cePu) else der(g10.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15904};
  (data->simulationInfo->daeModeData->residualVars[1252]) /* $DAEres1252 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1137]] /* g10.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* der(g10.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1440]] /* g10.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* g10.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */),"g10.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* g10.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* g10.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1439]] /* g10.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* der(g10.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15904;
}
/*
equation index: 15905
type: SIMPLE_ASSIGN
$DAEres1253 = if g10.running.value then g10.ufPu - (g10.RfPPu * g10.ifPu + 0.0031830988618379067 * der(g10.lambdafPu)) else der(g10.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15905};
  (data->simulationInfo->daeModeData->residualVars[1253]) /* $DAEres1253 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1472]] /* g10.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* g10.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* g10.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* der(g10.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* der(g10.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15905;
}
/*
equation index: 15906
type: SIMPLE_ASSIGN
g10.iStatorPu.im = if g10.running.value then g10.rTfoPu * g10.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15906;
}
/*
equation index: 15907
type: SIMPLE_ASSIGN
g10.uPu.im = if g10.running.value then g10.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1467]] /* g10.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15907;
}
/*
equation index: 15908
type: SIMPLE_ASSIGN
g10.UPu = if g10.running.value then (g10.terminal.V.re ^ 2.0 + g10.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15908};
  modelica_real tmp1893;
  modelica_real tmp1894;
  modelica_real tmp1895;
  modelica_boolean tmp1896;
  modelica_real tmp1897;
  tmp1896 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp1896)
  {
    tmp1893 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */);
    tmp1894 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */);
    tmp1895 = (tmp1893 * tmp1893) + (tmp1894 * tmp1894);
    if(tmp1895 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1895, 0.5);
    }
    tmp1897 = sqrt(tmp1895);
  }
  else
  {
    tmp1897 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1438]] /* g10.UPu variable */) = tmp1897;
  threadData->lastEquationSolved = 15908;
}
/*
equation index: 15909
type: SIMPLE_ASSIGN
goverNordic_g10.PGenPu = if g10.running.value then (-g10.terminal.V.re) * g10.terminal.i.re - g10.terminal.V.im * g10.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2094]] /* goverNordic_g10.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15909;
}
/*
equation index: 15910
type: SIMPLE_ASSIGN
goverNordic_g10.perUnitP.y = goverNordic_g10.perUnitP.k * goverNordic_g10.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15910};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2110]] /* goverNordic_g10.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2610]] /* goverNordic_g10.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2094]] /* goverNordic_g10.PGenPu variable */));
  threadData->lastEquationSolved = 15910;
}
/*
equation index: 15911
type: SIMPLE_ASSIGN
$DAEres1362 = goverNordic_g10.firstOrder1.k * goverNordic_g10.perUnitP.y + (-goverNordic_g10.firstOrder1.y) - der(goverNordic_g10.firstOrder1.y) * goverNordic_g10.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15911};
  (data->simulationInfo->daeModeData->residualVars[1362]) /* $DAEres1362 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2588]] /* goverNordic_g10.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2110]] /* goverNordic_g10.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* goverNordic_g10.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* der(goverNordic_g10.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2587]] /* goverNordic_g10.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15911;
}
/*
equation index: 15912
type: SIMPLE_ASSIGN
g10.PGen = if g10.running.value then 100.0 * goverNordic_g10.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1431]] /* g10.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2094]] /* goverNordic_g10.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15912;
}
/*
equation index: 15913
type: SIMPLE_ASSIGN
g10.QGenPu = if g10.running.value then g10.terminal.V.re * g10.terminal.i.im - g10.terminal.V.im * g10.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1435]] /* g10.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15913;
}
/*
equation index: 15914
type: SIMPLE_ASSIGN
g10.QGen = if g10.running.value then 100.0 * g10.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1434]] /* g10.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1435]] /* g10.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15914;
}
/*
equation index: 15915
type: SIMPLE_ASSIGN
g10.uStatorPu.re = if g10.running.value then (g10.terminal.V.re + (-100.0) * (g10.terminal.i.re * g10.RTfoPu - g10.terminal.i.im * g10.XTfoPu) / g10.SNom) / g10.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15915};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* g10.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* g10.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */),"g10.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */),"g10.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15915;
}
/*
equation index: 15916
type: SIMPLE_ASSIGN
g10.uStatorPu.im = if g10.running.value then (g10.terminal.V.im + (-100.0) * (g10.terminal.i.re * g10.XTfoPu + g10.terminal.i.im * g10.RTfoPu) / g10.SNom) / g10.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* g10.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* g10.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* g10.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* g10.SNom PARAM */),"g10.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */),"g10.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15916;
}
/*
equation index: 15917
type: SIMPLE_ASSIGN
vrNordic_g10.UsPu = if g10.running.value then if g10.uStatorPu.re == 0.0 and g10.uStatorPu.im == 0.0 then 0.0 else (g10.uStatorPu.re ^ 2.0 + g10.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15917};
  modelica_real tmp1898;
  modelica_real tmp1899;
  modelica_real tmp1900;
  modelica_boolean tmp1901;
  modelica_real tmp1902;
  modelica_boolean tmp1903;
  modelica_real tmp1904;
  tmp1903 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp1903)
  {
    tmp1901 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */) == 0.0));
    if(tmp1901)
    {
      tmp1902 = 0.0;
    }
    else
    {
      tmp1898 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */);
      tmp1899 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */);
      tmp1900 = (tmp1898 * tmp1898) + (tmp1899 * tmp1899);
      if(tmp1900 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1900, 0.5);
      }
      tmp1902 = sqrt(tmp1900);
    }
    tmp1904 = tmp1902;
  }
  else
  {
    tmp1904 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3663]] /* vrNordic_g10.UsPu variable */) = tmp1904;
  threadData->lastEquationSolved = 15917;
}
/*
equation index: 15918
type: SIMPLE_ASSIGN
vrNordic_g10.dU.y = vrNordic_g10.const1.k - vrNordic_g10.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15918};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3667]] /* vrNordic_g10.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4843]] /* vrNordic_g10.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3663]] /* vrNordic_g10.UsPu variable */);
  threadData->lastEquationSolved = 15918;
}
/*
equation index: 15919
type: SIMPLE_ASSIGN
vrNordic_g10.add.y = vrNordic_g10.add.k1 * vrNordic_g10.dU.y + vrNordic_g10.add.k2 * vrNordic_g10.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15919};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4840]] /* vrNordic_g10.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3667]] /* vrNordic_g10.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4841]] /* vrNordic_g10.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3681]] /* vrNordic_g10.limiter.y variable */));
  threadData->lastEquationSolved = 15919;
}
/*
equation index: 15920
type: SIMPLE_ASSIGN
vrNordic_g10.switch.y = if vrNordic_g10.greaterEqualThreshold.y then vrNordic_g10.gain1.y else vrNordic_g10.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* vrNordic_g10.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1042]] /* vrNordic_g10.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3671]] /* vrNordic_g10.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */));
  threadData->lastEquationSolved = 15920;
}
/*
equation index: 15921
type: SIMPLE_ASSIGN
vrNordic_g10.min1.y = if vrNordic_g10.switch.y < vrNordic_g10.add.y then vrNordic_g10.switch.y else vrNordic_g10.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15921};
  modelica_boolean tmp1905;
  modelica_real tmp1906;
  modelica_real tmp1907;
  tmp1906 = 1.0;
  tmp1907 = 1.0;
  relationhysteresis(data, &tmp1905, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* vrNordic_g10.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */), tmp1906, tmp1907, 372, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3682]] /* vrNordic_g10.min1.y variable */) = (tmp1905?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* vrNordic_g10.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */));
  threadData->lastEquationSolved = 15921;
}
/*
equation index: 15922
type: SIMPLE_ASSIGN
vrNordic_g10.kMulDU.y = vrNordic_g10.kMulDU.k * vrNordic_g10.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3672]] /* vrNordic_g10.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4852]] /* vrNordic_g10.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3682]] /* vrNordic_g10.min1.y variable */));
  threadData->lastEquationSolved = 15922;
}
/*
equation index: 15923
type: SIMPLE_ASSIGN
$DAEres1363 = vrNordic_g10.leadLag.a_end * vrNordic_g10.kMulDU.y + (-vrNordic_g10.leadLag.a[2]) * vrNordic_g10.leadLag.x_scaled[1] - der(vrNordic_g10.leadLag.x_scaled[1]) * vrNordic_g10.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15923};
  (data->simulationInfo->daeModeData->residualVars[1363]) /* $DAEres1363 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4857]] /* vrNordic_g10.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3672]] /* vrNordic_g10.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4856]] /* vrNordic_g10.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* vrNordic_g10.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* der(vrNordic_g10.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4855]] /* vrNordic_g10.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15923;
}
/*
equation index: 15924
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.y = (vrNordic_g10.leadLag.bb[2] - vrNordic_g10.leadLag.d * vrNordic_g10.leadLag.a[2]) * vrNordic_g10.leadLag.x[1] + vrNordic_g10.leadLag.d * vrNordic_g10.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15924};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3674]] /* vrNordic_g10.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4861]] /* vrNordic_g10.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4862]] /* vrNordic_g10.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4856]] /* vrNordic_g10.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3673]] /* vrNordic_g10.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4862]] /* vrNordic_g10.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3672]] /* vrNordic_g10.kMulDU.y variable */));
  threadData->lastEquationSolved = 15924;
}
/*
equation index: 15925
type: SIMPLE_ASSIGN
vrNordic_g10.feedback1.y = vrNordic_g10.leadLag.y - vrNordic_g10.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3669]] /* vrNordic_g10.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3674]] /* vrNordic_g10.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15925;
}
/*
equation index: 15926
type: SIMPLE_ASSIGN
vrNordic_g10.gain.y = vrNordic_g10.gain.k * vrNordic_g10.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4849]] /* vrNordic_g10.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3669]] /* vrNordic_g10.feedback1.y variable */));
  threadData->lastEquationSolved = 15926;
}
/*
equation index: 15927
type: SIMPLE_ASSIGN
$DAEres1364 = (if vrNordic_g10.limIntegrator.y < vrNordic_g10.limIntegrator.outMin and vrNordic_g10.limIntegrator.k * vrNordic_g10.gain.y < 0.0 or vrNordic_g10.limIntegrator.y > vrNordic_g10.limIntegrator.outMax and vrNordic_g10.limIntegrator.k * vrNordic_g10.gain.y > 0.0 then 0.0 else vrNordic_g10.limIntegrator.k * vrNordic_g10.gain.y) - der(vrNordic_g10.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15927};
  modelica_boolean tmp1908;
  modelica_real tmp1909;
  modelica_real tmp1910;
  modelica_boolean tmp1911;
  modelica_real tmp1912;
  modelica_real tmp1913;
  modelica_boolean tmp1914;
  modelica_real tmp1915;
  modelica_real tmp1916;
  modelica_boolean tmp1917;
  modelica_real tmp1918;
  modelica_real tmp1919;
  tmp1909 = 1.0;
  tmp1910 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4894]] /* vrNordic_g10.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1908, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4894]] /* vrNordic_g10.limIntegrator.outMin PARAM */), tmp1909, tmp1910, 376, Less, LessZC);
  tmp1912 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */))) * (1.0);
  tmp1913 = 0.0;
  relationhysteresis(data, &tmp1911, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)), 0.0, tmp1912, tmp1913, 377, Less, LessZC);
  tmp1915 = 1.0;
  tmp1916 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4893]] /* vrNordic_g10.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1914, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4893]] /* vrNordic_g10.limIntegrator.outMax PARAM */), tmp1915, tmp1916, 378, Greater, GreaterZC);
  tmp1918 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */))) * (1.0);
  tmp1919 = 0.0;
  relationhysteresis(data, &tmp1917, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)), 0.0, tmp1918, tmp1919, 379, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1364]) /* $DAEres1364 DAE_RESIDUAL_VAR */ = (((tmp1908 && tmp1911) || (tmp1914 && tmp1917))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[578]] /* der(vrNordic_g10.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15927;
}
/*
equation index: 15928
type: SIMPLE_ASSIGN
g10.iStatorPu.re = if g10.running.value then g10.rTfoPu * g10.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* g10.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1465]] /* g10.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15928;
}
/*
equation index: 15929
type: SIMPLE_ASSIGN
g10.sStatorPu.re = if g10.running.value then g10.uStatorPu.re * g10.iStatorPu.re + g10.uStatorPu.im * g10.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1460]] /* g10.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15929;
}
/*
equation index: 15930
type: SIMPLE_ASSIGN
g10.sStatorPu.im = if g10.running.value then g10.uStatorPu.im * g10.iStatorPu.re - g10.uStatorPu.re * g10.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15930};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1459]] /* g10.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15930;
}
/*
equation index: 15931
type: SIMPLE_ASSIGN
g10.QStatorPu = if g10.running.value then -g10.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1436]] /* g10.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1459]] /* g10.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15931;
}
/*
equation index: 15932
type: SIMPLE_ASSIGN
g10.QStatorPuQNom = if g10.running.value then 100.0 * g10.QStatorPu / g10.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15932};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1437]] /* g10.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1436]] /* g10.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1177]] /* g10.QNomAlt PARAM */),"g10.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15932;
}
/*
equation index: 15933
type: SIMPLE_ASSIGN
g10.IStatorPu = if g10.running.value then if g10.iStatorPu.re == 0.0 and g10.iStatorPu.im == 0.0 then 0.0 else (g10.iStatorPu.re ^ 2.0 + g10.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15933};
  modelica_real tmp1920;
  modelica_real tmp1921;
  modelica_real tmp1922;
  modelica_boolean tmp1923;
  modelica_real tmp1924;
  modelica_boolean tmp1925;
  modelica_real tmp1926;
  tmp1925 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[506]] /* g10.running.value DISCRETE */);
  if(tmp1925)
  {
    tmp1923 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */) == 0.0));
    if(tmp1923)
    {
      tmp1924 = 0.0;
    }
    else
    {
      tmp1920 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */);
      tmp1921 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */);
      tmp1922 = (tmp1920 * tmp1920) + (tmp1921 * tmp1921);
      if(tmp1922 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1922, 0.5);
      }
      tmp1924 = sqrt(tmp1922);
    }
    tmp1926 = tmp1924;
  }
  else
  {
    tmp1926 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1428]] /* g10.IStatorPu variable */) = tmp1926;
  threadData->lastEquationSolved = 15933;
}
/*
equation index: 15934
type: SIMPLE_ASSIGN
$whenCondition37 = not pre(g09.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15934};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[300]] /* $whenCondition37 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[502] /* g09.running.value DISCRETE */));
  threadData->lastEquationSolved = 15934;
}
/*
equation index: 15935
type: WHEN

when {} then
  g09.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15935};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[300]] /* $whenCondition37 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[300] /* $whenCondition37 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15935;
}
/*
equation index: 15937
type: SIMPLE_ASSIGN
$whenCondition39 = not g09.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15937};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[322]] /* $whenCondition39 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */));
  threadData->lastEquationSolved = 15937;
}
/*
equation index: 15938
type: SIMPLE_ASSIGN
$whenCondition38 = g09.running.value and not pre(g09.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15938};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[311]] /* $whenCondition38 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[502] /* g09.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15938;
}
/*
equation index: 15939
type: WHEN

when {$whenCondition39} then
  g09.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15939};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[322]] /* $whenCondition39 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[322] /* $whenCondition39 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[17]] /* g09.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[311]] /* $whenCondition38 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[311] /* $whenCondition38 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[17]] /* g09.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15939;
}
/*
equation index: 15941
type: SIMPLE_ASSIGN
g09.converter.u = Integer(g09.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15941};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[16]] /* g09.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[17]] /* g09.state DISCRETE */)));
  threadData->lastEquationSolved = 15941;
}
/*
equation index: 15942
type: SIMPLE_ASSIGN
g09.genState = (*Real*)(g09.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15942};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1396]] /* g09.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[16]] /* g09.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15942;
}
/*
equation index: 15943
type: SIMPLE_ASSIGN
$DAEres131 = if g09.running.value then der(g09.theta) - 314.1592653589793 * (g09.omegaPu - omegaCOI) else der(g09.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15943};
  (data->simulationInfo->daeModeData->residualVars[131]) /* $DAEres131 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* der(g09.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* der(g09.theta) STATE_DER */));
  threadData->lastEquationSolved = 15943;
}
/*
equation index: 15944
type: SIMPLE_ASSIGN
g09.cmPu = if g09.running.value then g09.PmPu / g09.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1394]] /* g09.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1387]] /* g09.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */),"g09.omegaPu"):0.0);
  threadData->lastEquationSolved = 15944;
}
/*
equation index: 15945
type: SIMPLE_ASSIGN
g09.ufPu = if g09.running.value then vrNordic_g09.limIntegrator.y * g09.Kuf * g09.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1426]] /* g09.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* g09.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15945;
}
/*
equation index: 15946
type: SIMPLE_ASSIGN
$DAEres488 = if g09.running.value then g09.uqPu - ((g09.RaPPu + g09.RTfoPu) * g09.iqPu + g09.omegaPu * g09.lambdadPu) else g09.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15946};
  (data->simulationInfo->daeModeData->residualVars[488]) /* $DAEres488 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1427]] /* g09.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* g09.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* g09.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1408]] /* g09.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1409]] /* g09.lambdaqPu variable */));
  threadData->lastEquationSolved = 15946;
}
/*
equation index: 15947
type: SIMPLE_ASSIGN
$DAEres489 = if g09.running.value then g09.mqsPu - g09.MqPPu / (1.0 + g09.mq * g09.lambdaAirGapPu ^ g09.nq) else g09.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15947};
  modelica_real tmp1927;
  modelica_real tmp1928;
  modelica_real tmp1929;
  modelica_real tmp1930;
  modelica_real tmp1931;
  modelica_real tmp1932;
  modelica_real tmp1933;
  modelica_boolean tmp1934;
  modelica_real tmp1935;
  tmp1934 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1934)
  {
    tmp1927 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1407]] /* g09.lambdaAirGapPu variable */);
    tmp1928 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1111]] /* g09.nq PARAM */);
    if(tmp1927 < 0.0 && tmp1928 != 0.0)
    {
      tmp1930 = modf(tmp1928, &tmp1931);
      
      if(tmp1930 > 0.5)
      {
        tmp1930 -= 1.0;
        tmp1931 += 1.0;
      }
      else if(tmp1930 < -0.5)
      {
        tmp1930 += 1.0;
        tmp1931 -= 1.0;
      }
      
      if(fabs(tmp1930) < 1e-10)
        tmp1929 = pow(tmp1927, tmp1931);
      else
      {
        tmp1933 = modf(1.0/tmp1928, &tmp1932);
        if(tmp1933 > 0.5)
        {
          tmp1933 -= 1.0;
          tmp1932 += 1.0;
        }
        else if(tmp1933 < -0.5)
        {
          tmp1933 += 1.0;
          tmp1932 -= 1.0;
        }
        if(fabs(tmp1933) < 1e-10 && ((unsigned long)tmp1932 & 1))
        {
          tmp1929 = -pow(-tmp1927, tmp1930)*pow(tmp1927, tmp1931);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1927, tmp1928);
        }
      }
    }
    else
    {
      tmp1929 = pow(tmp1927, tmp1928);
    }
    if(isnan(tmp1929) || isinf(tmp1929))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1927, tmp1928);
    }
    tmp1935 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1412]] /* g09.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1064]] /* g09.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* g09.mq PARAM */)) * (tmp1929),"1.0 + g09.mq * g09.lambdaAirGapPu ^ g09.nq"));
  }
  else
  {
    tmp1935 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1412]] /* g09.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[489]) /* $DAEres489 DAE_RESIDUAL_VAR */ = tmp1935;
  threadData->lastEquationSolved = 15947;
}
/*
equation index: 15948
type: SIMPLE_ASSIGN
$DAEres490 = if g09.running.value then g09.mdsPu - g09.MdPPu / (1.0 + g09.md * g09.lambdaAirGapPu ^ g09.nd) else g09.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15948};
  modelica_real tmp1936;
  modelica_real tmp1937;
  modelica_real tmp1938;
  modelica_real tmp1939;
  modelica_real tmp1940;
  modelica_real tmp1941;
  modelica_real tmp1942;
  modelica_boolean tmp1943;
  modelica_real tmp1944;
  tmp1943 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1943)
  {
    tmp1936 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1407]] /* g09.lambdaAirGapPu variable */);
    tmp1937 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* g09.nd PARAM */);
    if(tmp1936 < 0.0 && tmp1937 != 0.0)
    {
      tmp1939 = modf(tmp1937, &tmp1940);
      
      if(tmp1939 > 0.5)
      {
        tmp1939 -= 1.0;
        tmp1940 += 1.0;
      }
      else if(tmp1939 < -0.5)
      {
        tmp1939 += 1.0;
        tmp1940 -= 1.0;
      }
      
      if(fabs(tmp1939) < 1e-10)
        tmp1938 = pow(tmp1936, tmp1940);
      else
      {
        tmp1942 = modf(1.0/tmp1937, &tmp1941);
        if(tmp1942 > 0.5)
        {
          tmp1942 -= 1.0;
          tmp1941 += 1.0;
        }
        else if(tmp1942 < -0.5)
        {
          tmp1942 += 1.0;
          tmp1941 -= 1.0;
        }
        if(fabs(tmp1942) < 1e-10 && ((unsigned long)tmp1941 & 1))
        {
          tmp1938 = -pow(-tmp1936, tmp1939)*pow(tmp1936, tmp1940);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1936, tmp1937);
        }
      }
    }
    else
    {
      tmp1938 = pow(tmp1936, tmp1937);
    }
    if(isnan(tmp1938) || isinf(tmp1938))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1936, tmp1937);
    }
    tmp1944 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1410]] /* g09.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1058]] /* g09.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* g09.md PARAM */)) * (tmp1938),"1.0 + g09.md * g09.lambdaAirGapPu ^ g09.nd"));
  }
  else
  {
    tmp1944 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1410]] /* g09.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[490]) /* $DAEres490 DAE_RESIDUAL_VAR */ = tmp1944;
  threadData->lastEquationSolved = 15948;
}
/*
equation index: 15949
type: SIMPLE_ASSIGN
$DAEres491 = if g09.running.value then g09.cos2Eta - (g09.lambdaADPu / g09.lambdaAirGapPu) ^ 2.0 else g09.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15949};
  modelica_real tmp1945;
  modelica_boolean tmp1946;
  modelica_real tmp1947;
  tmp1946 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1946)
  {
    tmp1945 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1405]] /* g09.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1407]] /* g09.lambdaAirGapPu variable */),"g09.lambdaAirGapPu");
    tmp1947 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1395]] /* g09.cos2Eta variable */) - ((tmp1945 * tmp1945));
  }
  else
  {
    tmp1947 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1395]] /* g09.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[491]) /* $DAEres491 DAE_RESIDUAL_VAR */ = tmp1947;
  threadData->lastEquationSolved = 15949;
}
/*
equation index: 15950
type: SIMPLE_ASSIGN
$DAEres492 = if g09.running.value then g09.miPu - (g09.mdsPu * g09.cos2Eta + g09.mqsPu * g09.sin2Eta) else g09.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15950};
  (data->simulationInfo->daeModeData->residualVars[492]) /* $DAEres492 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1411]] /* g09.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1410]] /* g09.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1395]] /* g09.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1412]] /* g09.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1415]] /* g09.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1411]] /* g09.miPu variable */));
  threadData->lastEquationSolved = 15950;
}
/*
equation index: 15951
type: SIMPLE_ASSIGN
$DAEres493 = if g09.running.value then g09.MqSatPPu - (g09.miPu - g09.MsalPu * g09.cos2Eta) else g09.MqSatPPu - g09.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15951};
  (data->simulationInfo->daeModeData->residualVars[493]) /* $DAEres493 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1411]] /* g09.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1068]] /* g09.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1395]] /* g09.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1064]] /* g09.MqPPu PARAM */));
  threadData->lastEquationSolved = 15951;
}
/*
equation index: 15952
type: SIMPLE_ASSIGN
$DAEres494 = if g09.running.value then g09.lambdaQ2Pu - (g09.MqSatPPu * (g09.iqPu + g09.iQ1Pu) + (g09.MqSatPPu + g09.LQ2PPu) * g09.iQ2Pu) else g09.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15952};
  (data->simulationInfo->daeModeData->residualVars[494]) /* $DAEres494 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* g09.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* g09.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1045]] /* g09.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* g09.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* g09.iQ2Pu variable */));
  threadData->lastEquationSolved = 15952;
}
/*
equation index: 15953
type: SIMPLE_ASSIGN
$DAEres495 = if g09.running.value then g09.lambdaAQPu - g09.MqSatPPu * (g09.iqPu + g09.iQ1Pu + g09.iQ2Pu) else g09.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15953};
  (data->simulationInfo->daeModeData->residualVars[495]) /* $DAEres495 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1406]] /* g09.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* g09.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* g09.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1406]] /* g09.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15953;
}
/*
equation index: 15954
type: SIMPLE_ASSIGN
$DAEres496 = if g09.running.value then g09.lambdaAirGapPu - sqrt(g09.lambdaADPu ^ 2.0 + g09.lambdaAQPu ^ 2.0) else g09.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15954};
  modelica_real tmp1948;
  modelica_real tmp1949;
  modelica_real tmp1950;
  modelica_boolean tmp1951;
  modelica_real tmp1952;
  tmp1951 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1951)
  {
    tmp1948 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1405]] /* g09.lambdaADPu variable */);
    tmp1949 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1406]] /* g09.lambdaAQPu variable */);
    tmp1950 = (tmp1948 * tmp1948) + (tmp1949 * tmp1949);
    if(!(tmp1950 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g09.lambdaADPu ^ 2.0 + g09.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1950);
      }
    }
    tmp1952 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1407]] /* g09.lambdaAirGapPu variable */) - sqrt(tmp1950);
  }
  else
  {
    tmp1952 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1407]] /* g09.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[496]) /* $DAEres496 DAE_RESIDUAL_VAR */ = tmp1952;
  threadData->lastEquationSolved = 15954;
}
/*
equation index: 15955
type: SIMPLE_ASSIGN
$DAEres497 = if g09.running.value then g09.sin2Eta - (g09.lambdaAQPu / g09.lambdaAirGapPu) ^ 2.0 else g09.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15955};
  modelica_real tmp1953;
  modelica_boolean tmp1954;
  modelica_real tmp1955;
  tmp1954 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1954)
  {
    tmp1953 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1406]] /* g09.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1407]] /* g09.lambdaAirGapPu variable */),"g09.lambdaAirGapPu");
    tmp1955 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1415]] /* g09.sin2Eta variable */) - ((tmp1953 * tmp1953));
  }
  else
  {
    tmp1955 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1415]] /* g09.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[497]) /* $DAEres497 DAE_RESIDUAL_VAR */ = tmp1955;
  threadData->lastEquationSolved = 15955;
}
/*
equation index: 15956
type: SIMPLE_ASSIGN
$DAEres498 = if g09.running.value then g09.MdSatPPu - (g09.miPu + g09.MsalPu * g09.sin2Eta) else g09.MdSatPPu - g09.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15956};
  (data->simulationInfo->daeModeData->residualVars[498]) /* $DAEres498 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1411]] /* g09.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1068]] /* g09.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1415]] /* g09.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1058]] /* g09.MdPPu PARAM */));
  threadData->lastEquationSolved = 15956;
}
/*
equation index: 15957
type: SIMPLE_ASSIGN
$DAEres499 = if g09.running.value then g09.lambdaADPu - g09.MdSatPPu * (g09.idPu + g09.ifPu + g09.iDPu) else g09.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15957};
  (data->simulationInfo->daeModeData->residualVars[499]) /* $DAEres499 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1405]] /* g09.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1397]] /* g09.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1405]] /* g09.lambdaADPu variable */));
  threadData->lastEquationSolved = 15957;
}
/*
equation index: 15958
type: SIMPLE_ASSIGN
$DAEres500 = if g09.running.value then g09.lambdaDPu - (g09.MdSatPPu * g09.idPu + (g09.MdSatPPu + g09.MrcPPu) * g09.ifPu + (g09.MdSatPPu + g09.LDPPu + g09.MrcPPu) * g09.iDPu) else g09.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15958};
  (data->simulationInfo->daeModeData->residualVars[500]) /* $DAEres500 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* g09.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* g09.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* g09.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* g09.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1397]] /* g09.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */));
  threadData->lastEquationSolved = 15958;
}
/*
equation index: 15959
type: SIMPLE_ASSIGN
$DAEres501 = if g09.running.value then g09.lambdafPu - (g09.MdSatPPu * g09.idPu + (g09.MdSatPPu + g09.LfPPu + g09.MrcPPu) * g09.ifPu + (g09.MdSatPPu + g09.MrcPPu) * g09.iDPu) else g09.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15959};
  (data->simulationInfo->daeModeData->residualVars[501]) /* $DAEres501 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* g09.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1056]] /* g09.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* g09.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* g09.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1397]] /* g09.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */));
  threadData->lastEquationSolved = 15959;
}
/*
equation index: 15960
type: SIMPLE_ASSIGN
$DAEres502 = if g09.running.value then g09.lambdaQ1Pu - (g09.MqSatPPu * g09.iqPu + (g09.MqSatPPu + g09.LQ1PPu) * g09.iQ1Pu + g09.MqSatPPu * g09.iQ2Pu) else g09.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15960};
  (data->simulationInfo->daeModeData->residualVars[502]) /* $DAEres502 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* g09.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1044]] /* g09.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* g09.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* g09.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* g09.iQ1Pu variable */));
  threadData->lastEquationSolved = 15960;
}
/*
equation index: 15961
type: SIMPLE_ASSIGN
$DAEres503 = if g09.running.value then g09.lambdaqPu - ((g09.MqSatPPu + g09.LqPPu + g09.XTfoPu) * g09.iqPu + g09.MqSatPPu * (g09.iQ1Pu + g09.iQ2Pu)) else g09.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15961};
  (data->simulationInfo->daeModeData->residualVars[503]) /* $DAEres503 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1409]] /* g09.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* g09.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* g09.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1384]] /* g09.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* g09.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* g09.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1397]] /* g09.iDPu variable */));
  threadData->lastEquationSolved = 15961;
}
/*
equation index: 15962
type: SIMPLE_ASSIGN
$DAEres504 = if g09.running.value then g09.udPu - ((g09.RaPPu + g09.RTfoPu) * g09.idPu - g09.omegaPu * g09.lambdaqPu) else g09.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15962};
  (data->simulationInfo->daeModeData->residualVars[504]) /* $DAEres504 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1425]] /* g09.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* g09.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* g09.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1409]] /* g09.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1408]] /* g09.lambdadPu variable */));
  threadData->lastEquationSolved = 15962;
}
/*
equation index: 15963
type: SIMPLE_ASSIGN
$DAEres505 = if g09.running.value then g09.lambdadPu - ((g09.MdSatPPu + g09.LdPPu + g09.XTfoPu) * g09.idPu + g09.MdSatPPu * (g09.ifPu + g09.iDPu)) else g09.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15963};
  (data->simulationInfo->daeModeData->residualVars[505]) /* $DAEres505 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1408]] /* g09.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* g09.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* g09.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* g09.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1397]] /* g09.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */));
  threadData->lastEquationSolved = 15963;
}
/*
equation index: 15964
type: SIMPLE_ASSIGN
$DAEres1047 = if g09.running.value then 100.0 * g09.terminal.i.im / g09.SNom - (sin(g09.theta) * g09.iqPu - cos(g09.theta) * g09.idPu) else g09.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15964};
  (data->simulationInfo->daeModeData->residualVars[1047]) /* $DAEres1047 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */),"g09.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* g09.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* g09.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */));
  threadData->lastEquationSolved = 15964;
}
/*
equation index: 15965
type: SIMPLE_ASSIGN
$DAEres1048 = if g09.running.value then 100.0 * g09.terminal.i.re / g09.SNom - (sin(g09.theta) * g09.idPu + cos(g09.theta) * g09.iqPu) else g09.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15965};
  (data->simulationInfo->daeModeData->residualVars[1048]) /* $DAEres1048 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */),"g09.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* g09.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* g09.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */));
  threadData->lastEquationSolved = 15965;
}
/*
equation index: 15966
type: SIMPLE_ASSIGN
$DAEres1050 = if g09.running.value then g09.terminal.V.re - (sin(g09.theta) * g09.udPu + cos(g09.theta) * g09.uqPu) else g09.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15966};
  (data->simulationInfo->daeModeData->residualVars[1050]) /* $DAEres1050 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* g09.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1425]] /* g09.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* g09.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1427]] /* g09.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1425]] /* g09.udPu variable */));
  threadData->lastEquationSolved = 15966;
}
/*
equation index: 15967
type: SIMPLE_ASSIGN
$DAEres1051 = if g09.running.value then g09.terminal.V.im - (sin(g09.theta) * g09.uqPu - cos(g09.theta) * g09.udPu) else g09.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15967};
  (data->simulationInfo->daeModeData->residualVars[1051]) /* $DAEres1051 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* g09.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1427]] /* g09.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* g09.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1425]] /* g09.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1427]] /* g09.uqPu variable */));
  threadData->lastEquationSolved = 15967;
}
/*
equation index: 15968
type: SIMPLE_ASSIGN
g09.uPu.im = if g09.running.value then g09.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1421]] /* g09.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15968;
}
/*
equation index: 15969
type: SIMPLE_ASSIGN
g09.iStatorPu.re = if g09.running.value then g09.rTfoPu * g09.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15969;
}
/*
equation index: 15970
type: SIMPLE_ASSIGN
$DAEres1272 = if g09.running.value then (-g09.RQ1PPu) * g09.iQ1Pu - 0.0031830988618379067 * der(g09.lambdaQ1Pu) else der(g09.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15970};
  (data->simulationInfo->daeModeData->residualVars[1272]) /* $DAEres1272 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1080]] /* g09.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* g09.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* der(g09.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* der(g09.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15970;
}
/*
equation index: 15971
type: SIMPLE_ASSIGN
g09.cePu = if g09.running.value then g09.lambdaqPu * g09.idPu - g09.lambdadPu * g09.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1393]] /* g09.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1409]] /* g09.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* g09.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1408]] /* g09.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* g09.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15971;
}
/*
equation index: 15972
type: SIMPLE_ASSIGN
g09.PePu = if g09.running.value then g09.cePu * g09.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1386]] /* g09.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1393]] /* g09.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15972;
}
/*
equation index: 15973
type: SIMPLE_ASSIGN
$DAEres1273 = if g09.running.value then 2.0 * g09.H * der(g09.omegaPu) - (g09.cmPu * g09.PNomTurb / g09.SNom + g09.DPu * (omegaCOI - g09.omegaPu) - g09.cePu) else der(g09.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15973};
  (data->simulationInfo->daeModeData->residualVars[1273]) /* $DAEres1273 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* g09.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* der(g09.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1394]] /* g09.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* g09.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */),"g09.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1034]] /* g09.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* g09.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1393]] /* g09.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* der(g09.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15973;
}
/*
equation index: 15974
type: SIMPLE_ASSIGN
g09.thetaInternal.value = if g09.running.value then Modelica.Math.atan3(g09.udPu, g09.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1420]] /* g09.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1425]] /* g09.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1427]] /* g09.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15974;
}
/*
equation index: 15975
type: SIMPLE_ASSIGN
$DAEres1274 = if g09.running.value then (-g09.RQ2PPu) * g09.iQ2Pu - 0.0031830988618379067 * der(g09.lambdaQ2Pu) else der(g09.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15975};
  (data->simulationInfo->daeModeData->residualVars[1274]) /* $DAEres1274 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* g09.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* g09.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* der(g09.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* der(g09.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15975;
}
/*
equation index: 15976
type: SIMPLE_ASSIGN
vrNordic_g09.IrPu = if g09.running.value then g09.RfPPu * g09.ifPu / (g09.rTfoPu * g09.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3638]] /* vrNordic_g09.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* g09.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* g09.Kuf PARAM */)),"g09.rTfoPu * g09.Kuf")):0.0);
  threadData->lastEquationSolved = 15976;
}
/*
equation index: 15977
type: SIMPLE_ASSIGN
vrNordic_g09.dIf.y = vrNordic_g09.IrPu - vrNordic_g09.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3638]] /* vrNordic_g09.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4765]] /* vrNordic_g09.const2.k PARAM */);
  threadData->lastEquationSolved = 15977;
}
/*
equation index: 15978
type: SIMPLE_ASSIGN
vrNordic_g09.gain1.y = vrNordic_g09.gain1.k * vrNordic_g09.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15978};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3647]] /* vrNordic_g09.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4771]] /* vrNordic_g09.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */));
  threadData->lastEquationSolved = 15978;
}
/*
equation index: 15979
type: SIMPLE_ASSIGN
vrNordic_g09.overExcitationLimitation.y = if vrNordic_g09.dIf.y < -0.1 then -1.0 else if vrNordic_g09.dIf.y < 0.0 then 0.0 else if vrNordic_g09.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g09.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15979};
  modelica_boolean tmp1956;
  modelica_real tmp1957;
  modelica_real tmp1958;
  modelica_boolean tmp1959;
  modelica_real tmp1960;
  modelica_real tmp1961;
  modelica_boolean tmp1962;
  modelica_boolean tmp1963;
  modelica_real tmp1964;
  modelica_boolean tmp1965;
  modelica_real tmp1966;
  tmp1957 = 1.0;
  tmp1958 = 0.1;
  relationhysteresis(data, &tmp1956, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */), -0.1, tmp1957, tmp1958, 358, Less, LessZC);
  tmp1965 = (modelica_boolean)tmp1956;
  if(tmp1965)
  {
    tmp1966 = -1.0;
  }
  else
  {
    tmp1960 = 1.0;
    tmp1961 = 0.0;
    relationhysteresis(data, &tmp1959, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */), 0.0, tmp1960, tmp1961, 359, Less, LessZC);
    tmp1963 = (modelica_boolean)tmp1959;
    if(tmp1963)
    {
      tmp1964 = 0.0;
    }
    else
    {
      tmp1962 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4819]] /* vrNordic_g09.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1964 = (tmp1962?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */));
    }
    tmp1966 = tmp1964;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */) = tmp1966;
  threadData->lastEquationSolved = 15979;
}
/*
equation index: 15980
type: SIMPLE_ASSIGN
$DAEres1275 = (if vrNordic_g09.timer.y < vrNordic_g09.timer.outMin and vrNordic_g09.timer.k * vrNordic_g09.overExcitationLimitation.y < 0.0 or vrNordic_g09.timer.y > vrNordic_g09.timer.outMax and vrNordic_g09.timer.k * vrNordic_g09.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g09.timer.k * vrNordic_g09.overExcitationLimitation.y) - der(vrNordic_g09.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15980};
  modelica_boolean tmp1967;
  modelica_real tmp1968;
  modelica_real tmp1969;
  modelica_boolean tmp1970;
  modelica_real tmp1971;
  modelica_real tmp1972;
  modelica_boolean tmp1973;
  modelica_real tmp1974;
  modelica_real tmp1975;
  modelica_boolean tmp1976;
  modelica_real tmp1977;
  modelica_real tmp1978;
  tmp1968 = 1.0;
  tmp1969 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4829]] /* vrNordic_g09.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1967, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4829]] /* vrNordic_g09.timer.outMin PARAM */), tmp1968, tmp1969, 364, Less, LessZC);
  tmp1971 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */))) * (1.0);
  tmp1972 = 0.0;
  relationhysteresis(data, &tmp1970, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)), 0.0, tmp1971, tmp1972, 365, Less, LessZC);
  tmp1974 = 1.0;
  tmp1975 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4828]] /* vrNordic_g09.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1973, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4828]] /* vrNordic_g09.timer.outMax PARAM */), tmp1974, tmp1975, 366, Greater, GreaterZC);
  tmp1977 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */))) * (1.0);
  tmp1978 = 0.0;
  relationhysteresis(data, &tmp1976, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)), 0.0, tmp1977, tmp1978, 367, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1275]) /* $DAEres1275 DAE_RESIDUAL_VAR */ = (((tmp1967 && tmp1970) || (tmp1973 && tmp1976))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* der(vrNordic_g09.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15980;
}
/*
equation index: 15981
type: SIMPLE_ASSIGN
$DAEres1276 = if g09.running.value then g09.ufPu - (g09.RfPPu * g09.ifPu + 0.0031830988618379067 * der(g09.lambdafPu)) else der(g09.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15981};
  (data->simulationInfo->daeModeData->residualVars[1276]) /* $DAEres1276 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1426]] /* g09.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* g09.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* g09.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* der(g09.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* der(g09.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15981;
}
/*
equation index: 15982
type: SIMPLE_ASSIGN
$DAEres1277 = if g09.running.value then (-g09.RDPPu) * g09.iDPu - 0.0031830988618379067 * der(g09.lambdaDPu) else der(g09.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15982};
  (data->simulationInfo->daeModeData->residualVars[1277]) /* $DAEres1277 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* g09.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1397]] /* g09.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* der(g09.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* der(g09.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15982;
}
/*
equation index: 15983
type: SIMPLE_ASSIGN
g09.uStatorPu.im = if g09.running.value then (g09.terminal.V.im + (-100.0) * (g09.terminal.i.re * g09.XTfoPu + g09.terminal.i.im * g09.RTfoPu) / g09.SNom) / g09.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* g09.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* g09.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */),"g09.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */),"g09.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15983;
}
/*
equation index: 15984
type: SIMPLE_ASSIGN
g09.iStatorPu.im = if g09.running.value then g09.rTfoPu * g09.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15984;
}
/*
equation index: 15985
type: SIMPLE_ASSIGN
g09.IStatorPu = if g09.running.value then if g09.iStatorPu.re == 0.0 and g09.iStatorPu.im == 0.0 then 0.0 else (g09.iStatorPu.re ^ 2.0 + g09.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15985};
  modelica_real tmp1979;
  modelica_real tmp1980;
  modelica_real tmp1981;
  modelica_boolean tmp1982;
  modelica_real tmp1983;
  modelica_boolean tmp1984;
  modelica_real tmp1985;
  tmp1984 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1984)
  {
    tmp1982 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */) == 0.0));
    if(tmp1982)
    {
      tmp1983 = 0.0;
    }
    else
    {
      tmp1979 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */);
      tmp1980 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */);
      tmp1981 = (tmp1979 * tmp1979) + (tmp1980 * tmp1980);
      if(tmp1981 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1981, 0.5);
      }
      tmp1983 = sqrt(tmp1981);
    }
    tmp1985 = tmp1983;
  }
  else
  {
    tmp1985 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1382]] /* g09.IStatorPu variable */) = tmp1985;
  threadData->lastEquationSolved = 15985;
}
/*
equation index: 15986
type: SIMPLE_ASSIGN
g09.uPu.re = if g09.running.value then g09.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1422]] /* g09.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15986;
}
/*
equation index: 15987
type: SIMPLE_ASSIGN
g09.UPu = if g09.running.value then (g09.terminal.V.re ^ 2.0 + g09.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15987};
  modelica_real tmp1986;
  modelica_real tmp1987;
  modelica_real tmp1988;
  modelica_boolean tmp1989;
  modelica_real tmp1990;
  tmp1989 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1989)
  {
    tmp1986 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */);
    tmp1987 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */);
    tmp1988 = (tmp1986 * tmp1986) + (tmp1987 * tmp1987);
    if(tmp1988 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1988, 0.5);
    }
    tmp1990 = sqrt(tmp1988);
  }
  else
  {
    tmp1990 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1392]] /* g09.UPu variable */) = tmp1990;
  threadData->lastEquationSolved = 15987;
}
/*
equation index: 15988
type: SIMPLE_ASSIGN
goverNordic_g09.PGenPu = if g09.running.value then (-g09.terminal.V.re) * g09.terminal.i.re - g09.terminal.V.im * g09.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2076]] /* goverNordic_g09.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15988;
}
/*
equation index: 15989
type: SIMPLE_ASSIGN
goverNordic_g09.perUnitP.y = goverNordic_g09.perUnitP.k * goverNordic_g09.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2092]] /* goverNordic_g09.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2574]] /* goverNordic_g09.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2076]] /* goverNordic_g09.PGenPu variable */));
  threadData->lastEquationSolved = 15989;
}
/*
equation index: 15990
type: SIMPLE_ASSIGN
$DAEres1350 = goverNordic_g09.firstOrder1.k * goverNordic_g09.perUnitP.y + (-goverNordic_g09.firstOrder1.y) - der(goverNordic_g09.firstOrder1.y) * goverNordic_g09.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15990};
  (data->simulationInfo->daeModeData->residualVars[1350]) /* $DAEres1350 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* goverNordic_g09.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2092]] /* goverNordic_g09.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* goverNordic_g09.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* der(goverNordic_g09.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2551]] /* goverNordic_g09.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15990;
}
/*
equation index: 15991
type: SIMPLE_ASSIGN
g09.PGen = if g09.running.value then 100.0 * goverNordic_g09.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1385]] /* g09.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2076]] /* goverNordic_g09.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15991;
}
/*
equation index: 15992
type: SIMPLE_ASSIGN
g09.QGenPu = if g09.running.value then g09.terminal.V.re * g09.terminal.i.im - g09.terminal.V.im * g09.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15992};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1389]] /* g09.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15992;
}
/*
equation index: 15993
type: SIMPLE_ASSIGN
g09.QGen = if g09.running.value then 100.0 * g09.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1388]] /* g09.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1389]] /* g09.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15993;
}
/*
equation index: 15994
type: SIMPLE_ASSIGN
g09.uStatorPu.re = if g09.running.value then (g09.terminal.V.re + (-100.0) * (g09.terminal.i.re * g09.RTfoPu - g09.terminal.i.im * g09.XTfoPu) / g09.SNom) / g09.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1419]] /* g09.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* g09.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1418]] /* g09.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* g09.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* g09.SNom PARAM */),"g09.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* g09.rTfoPu PARAM */),"g09.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15994;
}
/*
equation index: 15995
type: SIMPLE_ASSIGN
g09.sStatorPu.re = if g09.running.value then g09.uStatorPu.re * g09.iStatorPu.re + g09.uStatorPu.im * g09.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1414]] /* g09.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15995;
}
/*
equation index: 15996
type: SIMPLE_ASSIGN
g09.sStatorPu.im = if g09.running.value then g09.uStatorPu.im * g09.iStatorPu.re - g09.uStatorPu.re * g09.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* g09.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15996;
}
/*
equation index: 15997
type: SIMPLE_ASSIGN
g09.QStatorPu = if g09.running.value then -g09.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1390]] /* g09.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* g09.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15997;
}
/*
equation index: 15998
type: SIMPLE_ASSIGN
g09.QStatorPuQNom = if g09.running.value then 100.0 * g09.QStatorPu / g09.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1391]] /* g09.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1390]] /* g09.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* g09.QNomAlt PARAM */),"g09.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15998;
}
/*
equation index: 15999
type: SIMPLE_ASSIGN
vrNordic_g09.UsPu = if g09.running.value then if g09.uStatorPu.re == 0.0 and g09.uStatorPu.im == 0.0 then 0.0 else (g09.uStatorPu.re ^ 2.0 + g09.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15999};
  modelica_real tmp1991;
  modelica_real tmp1992;
  modelica_real tmp1993;
  modelica_boolean tmp1994;
  modelica_real tmp1995;
  modelica_boolean tmp1996;
  modelica_real tmp1997;
  tmp1996 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[502]] /* g09.running.value DISCRETE */);
  if(tmp1996)
  {
    tmp1994 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */) == 0.0));
    if(tmp1994)
    {
      tmp1995 = 0.0;
    }
    else
    {
      tmp1991 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */);
      tmp1992 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */);
      tmp1993 = (tmp1991 * tmp1991) + (tmp1992 * tmp1992);
      if(tmp1993 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1993, 0.5);
      }
      tmp1995 = sqrt(tmp1993);
    }
    tmp1997 = tmp1995;
  }
  else
  {
    tmp1997 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3639]] /* vrNordic_g09.UsPu variable */) = tmp1997;
  threadData->lastEquationSolved = 15999;
}
/*
equation index: 16000
type: SIMPLE_ASSIGN
vrNordic_g09.dU.y = vrNordic_g09.const1.k - vrNordic_g09.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3643]] /* vrNordic_g09.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4764]] /* vrNordic_g09.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3639]] /* vrNordic_g09.UsPu variable */);
  threadData->lastEquationSolved = 16000;
}
/*
equation index: 16001
type: SIMPLE_ASSIGN
vrNordic_g09.add.y = vrNordic_g09.add.k1 * vrNordic_g09.dU.y + vrNordic_g09.add.k2 * vrNordic_g09.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4761]] /* vrNordic_g09.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3643]] /* vrNordic_g09.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4762]] /* vrNordic_g09.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3657]] /* vrNordic_g09.limiter.y variable */));
  threadData->lastEquationSolved = 16001;
}
/*
equation index: 16002
type: SIMPLE_ASSIGN
vrNordic_g09.switch.y = if vrNordic_g09.greaterEqualThreshold.y then vrNordic_g09.gain1.y else vrNordic_g09.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3660]] /* vrNordic_g09.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1039]] /* vrNordic_g09.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3647]] /* vrNordic_g09.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */));
  threadData->lastEquationSolved = 16002;
}
/*
equation index: 16003
type: SIMPLE_ASSIGN
vrNordic_g09.min1.y = if vrNordic_g09.switch.y < vrNordic_g09.add.y then vrNordic_g09.switch.y else vrNordic_g09.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16003};
  modelica_boolean tmp1998;
  modelica_real tmp1999;
  modelica_real tmp2000;
  tmp1999 = 1.0;
  tmp2000 = 1.0;
  relationhysteresis(data, &tmp1998, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3660]] /* vrNordic_g09.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */), tmp1999, tmp2000, 356, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3658]] /* vrNordic_g09.min1.y variable */) = (tmp1998?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3660]] /* vrNordic_g09.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */));
  threadData->lastEquationSolved = 16003;
}
/*
equation index: 16004
type: SIMPLE_ASSIGN
vrNordic_g09.kMulDU.y = vrNordic_g09.kMulDU.k * vrNordic_g09.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3648]] /* vrNordic_g09.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4773]] /* vrNordic_g09.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3658]] /* vrNordic_g09.min1.y variable */));
  threadData->lastEquationSolved = 16004;
}
/*
equation index: 16005
type: SIMPLE_ASSIGN
$DAEres1351 = vrNordic_g09.leadLag.a_end * vrNordic_g09.kMulDU.y + (-vrNordic_g09.leadLag.a[2]) * vrNordic_g09.leadLag.x_scaled[1] - der(vrNordic_g09.leadLag.x_scaled[1]) * vrNordic_g09.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16005};
  (data->simulationInfo->daeModeData->residualVars[1351]) /* $DAEres1351 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4778]] /* vrNordic_g09.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3648]] /* vrNordic_g09.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4777]] /* vrNordic_g09.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* vrNordic_g09.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* der(vrNordic_g09.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4776]] /* vrNordic_g09.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 16005;
}
/*
equation index: 16006
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.y = (vrNordic_g09.leadLag.bb[2] - vrNordic_g09.leadLag.d * vrNordic_g09.leadLag.a[2]) * vrNordic_g09.leadLag.x[1] + vrNordic_g09.leadLag.d * vrNordic_g09.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3650]] /* vrNordic_g09.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4782]] /* vrNordic_g09.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4783]] /* vrNordic_g09.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4777]] /* vrNordic_g09.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3649]] /* vrNordic_g09.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4783]] /* vrNordic_g09.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3648]] /* vrNordic_g09.kMulDU.y variable */));
  threadData->lastEquationSolved = 16006;
}
/*
equation index: 16007
type: SIMPLE_ASSIGN
vrNordic_g09.feedback1.y = vrNordic_g09.leadLag.y - vrNordic_g09.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3645]] /* vrNordic_g09.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3650]] /* vrNordic_g09.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 16007;
}
/*
equation index: 16008
type: SIMPLE_ASSIGN
vrNordic_g09.gain.y = vrNordic_g09.gain.k * vrNordic_g09.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4770]] /* vrNordic_g09.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3645]] /* vrNordic_g09.feedback1.y variable */));
  threadData->lastEquationSolved = 16008;
}
/*
equation index: 16009
type: SIMPLE_ASSIGN
$DAEres1352 = (if vrNordic_g09.limIntegrator.y < vrNordic_g09.limIntegrator.outMin and vrNordic_g09.limIntegrator.k * vrNordic_g09.gain.y < 0.0 or vrNordic_g09.limIntegrator.y > vrNordic_g09.limIntegrator.outMax and vrNordic_g09.limIntegrator.k * vrNordic_g09.gain.y > 0.0 then 0.0 else vrNordic_g09.limIntegrator.k * vrNordic_g09.gain.y) - der(vrNordic_g09.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16009};
  modelica_boolean tmp2001;
  modelica_real tmp2002;
  modelica_real tmp2003;
  modelica_boolean tmp2004;
  modelica_real tmp2005;
  modelica_real tmp2006;
  modelica_boolean tmp2007;
  modelica_real tmp2008;
  modelica_real tmp2009;
  modelica_boolean tmp2010;
  modelica_real tmp2011;
  modelica_real tmp2012;
  tmp2002 = 1.0;
  tmp2003 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4815]] /* vrNordic_g09.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp2001, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4815]] /* vrNordic_g09.limIntegrator.outMin PARAM */), tmp2002, tmp2003, 360, Less, LessZC);
  tmp2005 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */))) * (1.0);
  tmp2006 = 0.0;
  relationhysteresis(data, &tmp2004, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)), 0.0, tmp2005, tmp2006, 361, Less, LessZC);
  tmp2008 = 1.0;
  tmp2009 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4814]] /* vrNordic_g09.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp2007, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4814]] /* vrNordic_g09.limIntegrator.outMax PARAM */), tmp2008, tmp2009, 362, Greater, GreaterZC);
  tmp2011 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */))) * (1.0);
  tmp2012 = 0.0;
  relationhysteresis(data, &tmp2010, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)), 0.0, tmp2011, tmp2012, 363, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1352]) /* $DAEres1352 DAE_RESIDUAL_VAR */ = (((tmp2001 && tmp2004) || (tmp2007 && tmp2010))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* der(vrNordic_g09.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 16009;
}
/*
equation index: 16010
type: SIMPLE_ASSIGN
$whenCondition40 = not pre(g08.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16010};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[334]] /* $whenCondition40 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[498] /* g08.running.value DISCRETE */));
  threadData->lastEquationSolved = 16010;
}
/*
equation index: 16011
type: WHEN

when {} then
  g08.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16011};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[334]] /* $whenCondition40 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[334] /* $whenCondition40 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16011;
}
/*
equation index: 16013
type: SIMPLE_ASSIGN
$whenCondition42 = not g08.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16013};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[356]] /* $whenCondition42 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */));
  threadData->lastEquationSolved = 16013;
}
/*
equation index: 16014
type: SIMPLE_ASSIGN
$whenCondition41 = g08.running.value and not pre(g08.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16014};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[345]] /* $whenCondition41 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[498] /* g08.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16014;
}
/*
equation index: 16015
type: WHEN

when {$whenCondition42} then
  g08.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16015};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[356]] /* $whenCondition42 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[356] /* $whenCondition42 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* g08.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[345]] /* $whenCondition41 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[345] /* $whenCondition41 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* g08.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16015;
}
/*
equation index: 16017
type: SIMPLE_ASSIGN
g08.converter.u = Integer(g08.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16017};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[14]] /* g08.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* g08.state DISCRETE */)));
  threadData->lastEquationSolved = 16017;
}
/*
equation index: 16018
type: SIMPLE_ASSIGN
g08.genState = (*Real*)(g08.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16018};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1350]] /* g08.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[14]] /* g08.converter.u DISCRETE */));
  threadData->lastEquationSolved = 16018;
}
/*
equation index: 16019
type: SIMPLE_ASSIGN
$DAEres132 = if g08.running.value then der(g08.theta) - 314.1592653589793 * (g08.omegaPu - omegaCOI) else der(g08.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16019};
  (data->simulationInfo->daeModeData->residualVars[132]) /* $DAEres132 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* der(g08.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* der(g08.theta) STATE_DER */));
  threadData->lastEquationSolved = 16019;
}
/*
equation index: 16020
type: SIMPLE_ASSIGN
g08.cmPu = if g08.running.value then g08.PmPu / g08.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16020};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1348]] /* g08.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* g08.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */),"g08.omegaPu"):0.0);
  threadData->lastEquationSolved = 16020;
}
/*
equation index: 16021
type: SIMPLE_ASSIGN
g08.ufPu = if g08.running.value then vrNordic_g08.limIntegrator.y * g08.Kuf * g08.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16021};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1380]] /* g08.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* g08.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 16021;
}
/*
equation index: 16022
type: SIMPLE_ASSIGN
$DAEres262 = if g08.running.value then g08.lambdaAQPu - g08.MqSatPPu * (g08.iqPu + g08.iQ1Pu + g08.iQ2Pu) else g08.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16022};
  (data->simulationInfo->daeModeData->residualVars[262]) /* $DAEres262 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1360]] /* g08.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* g08.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* g08.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1360]] /* g08.lambdaAQPu variable */));
  threadData->lastEquationSolved = 16022;
}
/*
equation index: 16023
type: SIMPLE_ASSIGN
$DAEres263 = if g08.running.value then g08.lambdaQ2Pu - (g08.MqSatPPu * (g08.iqPu + g08.iQ1Pu) + (g08.MqSatPPu + g08.LQ2PPu) * g08.iQ2Pu) else g08.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16023};
  (data->simulationInfo->daeModeData->residualVars[263]) /* $DAEres263 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* g08.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* g08.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[944]] /* g08.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* g08.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* g08.iQ2Pu variable */));
  threadData->lastEquationSolved = 16023;
}
/*
equation index: 16024
type: SIMPLE_ASSIGN
$DAEres264 = if g08.running.value then g08.lambdaQ1Pu - (g08.MqSatPPu * g08.iqPu + (g08.MqSatPPu + g08.LQ1PPu) * g08.iQ1Pu + g08.MqSatPPu * g08.iQ2Pu) else g08.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16024};
  (data->simulationInfo->daeModeData->residualVars[264]) /* $DAEres264 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* g08.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[943]] /* g08.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* g08.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* g08.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* g08.iQ1Pu variable */));
  threadData->lastEquationSolved = 16024;
}
/*
equation index: 16025
type: SIMPLE_ASSIGN
$DAEres265 = if g08.running.value then g08.MqSatPPu - (g08.miPu - g08.MsalPu * g08.cos2Eta) else g08.MqSatPPu - g08.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16025};
  (data->simulationInfo->daeModeData->residualVars[265]) /* $DAEres265 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1365]] /* g08.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[967]] /* g08.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1349]] /* g08.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[963]] /* g08.MqPPu PARAM */));
  threadData->lastEquationSolved = 16025;
}
/*
equation index: 16026
type: SIMPLE_ASSIGN
$DAEres266 = if g08.running.value then g08.sin2Eta - (g08.lambdaAQPu / g08.lambdaAirGapPu) ^ 2.0 else g08.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16026};
  modelica_real tmp2013;
  modelica_boolean tmp2014;
  modelica_real tmp2015;
  tmp2014 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp2014)
  {
    tmp2013 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1360]] /* g08.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* g08.lambdaAirGapPu variable */),"g08.lambdaAirGapPu");
    tmp2015 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1369]] /* g08.sin2Eta variable */) - ((tmp2013 * tmp2013));
  }
  else
  {
    tmp2015 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1369]] /* g08.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[266]) /* $DAEres266 DAE_RESIDUAL_VAR */ = tmp2015;
  threadData->lastEquationSolved = 16026;
}
/*
equation index: 16027
type: SIMPLE_ASSIGN
$DAEres267 = if g08.running.value then g08.mqsPu - g08.MqPPu / (1.0 + g08.mq * g08.lambdaAirGapPu ^ g08.nq) else g08.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16027};
  modelica_real tmp2016;
  modelica_real tmp2017;
  modelica_real tmp2018;
  modelica_real tmp2019;
  modelica_real tmp2020;
  modelica_real tmp2021;
  modelica_real tmp2022;
  modelica_boolean tmp2023;
  modelica_real tmp2024;
  tmp2023 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp2023)
  {
    tmp2016 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* g08.lambdaAirGapPu variable */);
    tmp2017 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* g08.nq PARAM */);
    if(tmp2016 < 0.0 && tmp2017 != 0.0)
    {
      tmp2019 = modf(tmp2017, &tmp2020);
      
      if(tmp2019 > 0.5)
      {
        tmp2019 -= 1.0;
        tmp2020 += 1.0;
      }
      else if(tmp2019 < -0.5)
      {
        tmp2019 += 1.0;
        tmp2020 -= 1.0;
      }
      
      if(fabs(tmp2019) < 1e-10)
        tmp2018 = pow(tmp2016, tmp2020);
      else
      {
        tmp2022 = modf(1.0/tmp2017, &tmp2021);
        if(tmp2022 > 0.5)
        {
          tmp2022 -= 1.0;
          tmp2021 += 1.0;
        }
        else if(tmp2022 < -0.5)
        {
          tmp2022 += 1.0;
          tmp2021 -= 1.0;
        }
        if(fabs(tmp2022) < 1e-10 && ((unsigned long)tmp2021 & 1))
        {
          tmp2018 = -pow(-tmp2016, tmp2019)*pow(tmp2016, tmp2020);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2016, tmp2017);
        }
      }
    }
    else
    {
      tmp2018 = pow(tmp2016, tmp2017);
    }
    if(isnan(tmp2018) || isinf(tmp2018))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2016, tmp2017);
    }
    tmp2024 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1366]] /* g08.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[963]] /* g08.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* g08.mq PARAM */)) * (tmp2018),"1.0 + g08.mq * g08.lambdaAirGapPu ^ g08.nq"));
  }
  else
  {
    tmp2024 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1366]] /* g08.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[267]) /* $DAEres267 DAE_RESIDUAL_VAR */ = tmp2024;
  threadData->lastEquationSolved = 16027;
}
/*
equation index: 16028
type: SIMPLE_ASSIGN
$DAEres268 = if g08.running.value then g08.mdsPu - g08.MdPPu / (1.0 + g08.md * g08.lambdaAirGapPu ^ g08.nd) else g08.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16028};
  modelica_real tmp2025;
  modelica_real tmp2026;
  modelica_real tmp2027;
  modelica_real tmp2028;
  modelica_real tmp2029;
  modelica_real tmp2030;
  modelica_real tmp2031;
  modelica_boolean tmp2032;
  modelica_real tmp2033;
  tmp2032 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp2032)
  {
    tmp2025 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* g08.lambdaAirGapPu variable */);
    tmp2026 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* g08.nd PARAM */);
    if(tmp2025 < 0.0 && tmp2026 != 0.0)
    {
      tmp2028 = modf(tmp2026, &tmp2029);
      
      if(tmp2028 > 0.5)
      {
        tmp2028 -= 1.0;
        tmp2029 += 1.0;
      }
      else if(tmp2028 < -0.5)
      {
        tmp2028 += 1.0;
        tmp2029 -= 1.0;
      }
      
      if(fabs(tmp2028) < 1e-10)
        tmp2027 = pow(tmp2025, tmp2029);
      else
      {
        tmp2031 = modf(1.0/tmp2026, &tmp2030);
        if(tmp2031 > 0.5)
        {
          tmp2031 -= 1.0;
          tmp2030 += 1.0;
        }
        else if(tmp2031 < -0.5)
        {
          tmp2031 += 1.0;
          tmp2030 -= 1.0;
        }
        if(fabs(tmp2031) < 1e-10 && ((unsigned long)tmp2030 & 1))
        {
          tmp2027 = -pow(-tmp2025, tmp2028)*pow(tmp2025, tmp2029);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2025, tmp2026);
        }
      }
    }
    else
    {
      tmp2027 = pow(tmp2025, tmp2026);
    }
    if(isnan(tmp2027) || isinf(tmp2027))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2025, tmp2026);
    }
    tmp2033 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1364]] /* g08.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* g08.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* g08.md PARAM */)) * (tmp2027),"1.0 + g08.md * g08.lambdaAirGapPu ^ g08.nd"));
  }
  else
  {
    tmp2033 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1364]] /* g08.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[268]) /* $DAEres268 DAE_RESIDUAL_VAR */ = tmp2033;
  threadData->lastEquationSolved = 16028;
}
/*
equation index: 16029
type: SIMPLE_ASSIGN
$DAEres269 = if g08.running.value then g08.lambdaAirGapPu - sqrt(g08.lambdaADPu ^ 2.0 + g08.lambdaAQPu ^ 2.0) else g08.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16029};
  modelica_real tmp2034;
  modelica_real tmp2035;
  modelica_real tmp2036;
  modelica_boolean tmp2037;
  modelica_real tmp2038;
  tmp2037 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp2037)
  {
    tmp2034 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1359]] /* g08.lambdaADPu variable */);
    tmp2035 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1360]] /* g08.lambdaAQPu variable */);
    tmp2036 = (tmp2034 * tmp2034) + (tmp2035 * tmp2035);
    if(!(tmp2036 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g08.lambdaADPu ^ 2.0 + g08.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp2036);
      }
    }
    tmp2038 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* g08.lambdaAirGapPu variable */) - sqrt(tmp2036);
  }
  else
  {
    tmp2038 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* g08.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[269]) /* $DAEres269 DAE_RESIDUAL_VAR */ = tmp2038;
  threadData->lastEquationSolved = 16029;
}
/*
equation index: 16030
type: SIMPLE_ASSIGN
$DAEres270 = if g08.running.value then g08.cos2Eta - (g08.lambdaADPu / g08.lambdaAirGapPu) ^ 2.0 else g08.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16030};
  modelica_real tmp2039;
  modelica_boolean tmp2040;
  modelica_real tmp2041;
  tmp2040 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp2040)
  {
    tmp2039 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1359]] /* g08.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* g08.lambdaAirGapPu variable */),"g08.lambdaAirGapPu");
    tmp2041 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1349]] /* g08.cos2Eta variable */) - ((tmp2039 * tmp2039));
  }
  else
  {
    tmp2041 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1349]] /* g08.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[270]) /* $DAEres270 DAE_RESIDUAL_VAR */ = tmp2041;
  threadData->lastEquationSolved = 16030;
}
/*
equation index: 16031
type: SIMPLE_ASSIGN
$DAEres271 = if g08.running.value then g08.miPu - (g08.mdsPu * g08.cos2Eta + g08.mqsPu * g08.sin2Eta) else g08.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16031};
  (data->simulationInfo->daeModeData->residualVars[271]) /* $DAEres271 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1365]] /* g08.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1364]] /* g08.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1349]] /* g08.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1366]] /* g08.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1369]] /* g08.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1365]] /* g08.miPu variable */));
  threadData->lastEquationSolved = 16031;
}
/*
equation index: 16032
type: SIMPLE_ASSIGN
$DAEres272 = if g08.running.value then g08.MdSatPPu - (g08.miPu + g08.MsalPu * g08.sin2Eta) else g08.MdSatPPu - g08.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16032};
  (data->simulationInfo->daeModeData->residualVars[272]) /* $DAEres272 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1365]] /* g08.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[967]] /* g08.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1369]] /* g08.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* g08.MdPPu PARAM */));
  threadData->lastEquationSolved = 16032;
}
/*
equation index: 16033
type: SIMPLE_ASSIGN
$DAEres273 = if g08.running.value then g08.uqPu - ((g08.RaPPu + g08.RTfoPu) * g08.iqPu + g08.omegaPu * g08.lambdadPu) else g08.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16033};
  (data->simulationInfo->daeModeData->residualVars[273]) /* $DAEres273 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1381]] /* g08.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* g08.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* g08.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* g08.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1363]] /* g08.lambdaqPu variable */));
  threadData->lastEquationSolved = 16033;
}
/*
equation index: 16034
type: SIMPLE_ASSIGN
$DAEres274 = if g08.running.value then g08.lambdaqPu - ((g08.MqSatPPu + g08.LqPPu + g08.XTfoPu) * g08.iqPu + g08.MqSatPPu * (g08.iQ1Pu + g08.iQ2Pu)) else g08.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16034};
  (data->simulationInfo->daeModeData->residualVars[274]) /* $DAEres274 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1363]] /* g08.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[956]] /* g08.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* g08.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* g08.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* g08.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* g08.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* g08.iDPu variable */));
  threadData->lastEquationSolved = 16034;
}
/*
equation index: 16035
type: SIMPLE_ASSIGN
$DAEres275 = if g08.running.value then g08.lambdaADPu - g08.MdSatPPu * (g08.idPu + g08.ifPu + g08.iDPu) else g08.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16035};
  (data->simulationInfo->daeModeData->residualVars[275]) /* $DAEres275 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1359]] /* g08.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* g08.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1359]] /* g08.lambdaADPu variable */));
  threadData->lastEquationSolved = 16035;
}
/*
equation index: 16036
type: SIMPLE_ASSIGN
$DAEres276 = if g08.running.value then g08.lambdaDPu - (g08.MdSatPPu * g08.idPu + (g08.MdSatPPu + g08.MrcPPu) * g08.ifPu + (g08.MdSatPPu + g08.LDPPu + g08.MrcPPu) * g08.iDPu) else g08.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16036};
  (data->simulationInfo->daeModeData->residualVars[276]) /* $DAEres276 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* g08.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* g08.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* g08.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* g08.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* g08.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */));
  threadData->lastEquationSolved = 16036;
}
/*
equation index: 16037
type: SIMPLE_ASSIGN
$DAEres277 = if g08.running.value then g08.udPu - ((g08.RaPPu + g08.RTfoPu) * g08.idPu - g08.omegaPu * g08.lambdaqPu) else g08.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16037};
  (data->simulationInfo->daeModeData->residualVars[277]) /* $DAEres277 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1379]] /* g08.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* g08.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* g08.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1363]] /* g08.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* g08.lambdadPu variable */));
  threadData->lastEquationSolved = 16037;
}
/*
equation index: 16038
type: SIMPLE_ASSIGN
$DAEres278 = if g08.running.value then g08.lambdadPu - ((g08.MdSatPPu + g08.LdPPu + g08.XTfoPu) * g08.idPu + g08.MdSatPPu * (g08.ifPu + g08.iDPu)) else g08.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16038};
  (data->simulationInfo->daeModeData->residualVars[278]) /* $DAEres278 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* g08.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[954]] /* g08.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* g08.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* g08.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */));
  threadData->lastEquationSolved = 16038;
}
/*
equation index: 16039
type: SIMPLE_ASSIGN
$DAEres279 = if g08.running.value then g08.lambdafPu - (g08.MdSatPPu * g08.idPu + (g08.MdSatPPu + g08.LfPPu + g08.MrcPPu) * g08.ifPu + (g08.MdSatPPu + g08.MrcPPu) * g08.iDPu) else g08.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16039};
  (data->simulationInfo->daeModeData->residualVars[279]) /* $DAEres279 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* g08.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[955]] /* g08.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* g08.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* g08.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* g08.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* g08.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */));
  threadData->lastEquationSolved = 16039;
}
/*
equation index: 16040
type: SIMPLE_ASSIGN
$DAEres281 = if g08.running.value then 100.0 * g08.terminal.i.im / g08.SNom - (sin(g08.theta) * g08.iqPu - cos(g08.theta) * g08.idPu) else g08.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16040};
  (data->simulationInfo->daeModeData->residualVars[281]) /* $DAEres281 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */),"g08.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* g08.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* g08.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */));
  threadData->lastEquationSolved = 16040;
}
/*
equation index: 16041
type: SIMPLE_ASSIGN
$DAEres282 = if g08.running.value then 100.0 * g08.terminal.i.re / g08.SNom - (sin(g08.theta) * g08.idPu + cos(g08.theta) * g08.iqPu) else g08.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16041};
  (data->simulationInfo->daeModeData->residualVars[282]) /* $DAEres282 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */),"g08.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* g08.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* g08.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */));
  threadData->lastEquationSolved = 16041;
}
/*
equation index: 16042
type: SIMPLE_ASSIGN
$DAEres285 = if g08.running.value then g08.terminal.V.im - (sin(g08.theta) * g08.uqPu - cos(g08.theta) * g08.udPu) else g08.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16042};
  (data->simulationInfo->daeModeData->residualVars[285]) /* $DAEres285 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* g08.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1381]] /* g08.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* g08.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1379]] /* g08.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1381]] /* g08.uqPu variable */));
  threadData->lastEquationSolved = 16042;
}
/*
equation index: 16043
type: SIMPLE_ASSIGN
$DAEres286 = if g08.running.value then g08.terminal.V.re - (sin(g08.theta) * g08.udPu + cos(g08.theta) * g08.uqPu) else g08.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16043};
  (data->simulationInfo->daeModeData->residualVars[286]) /* $DAEres286 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* g08.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1379]] /* g08.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* g08.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1381]] /* g08.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1379]] /* g08.udPu variable */));
  threadData->lastEquationSolved = 16043;
}
/*
equation index: 16044
type: SIMPLE_ASSIGN
g08.uPu.re = if g08.running.value then g08.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16044};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1376]] /* g08.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 16044;
}
/*
equation index: 16045
type: SIMPLE_ASSIGN
g08.iStatorPu.re = if g08.running.value then g08.rTfoPu * g08.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16045};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 16045;
}
/*
equation index: 16046
type: SIMPLE_ASSIGN
$DAEres1224 = if g08.running.value then (-g08.RQ1PPu) * g08.iQ1Pu - 0.0031830988618379067 * der(g08.lambdaQ1Pu) else der(g08.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16046};
  (data->simulationInfo->daeModeData->residualVars[1224]) /* $DAEres1224 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* g08.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* g08.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* der(g08.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* der(g08.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 16046;
}
/*
equation index: 16047
type: SIMPLE_ASSIGN
$DAEres1225 = if g08.running.value then (-g08.RQ2PPu) * g08.iQ2Pu - 0.0031830988618379067 * der(g08.lambdaQ2Pu) else der(g08.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16047};
  (data->simulationInfo->daeModeData->residualVars[1225]) /* $DAEres1225 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[980]] /* g08.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* g08.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* der(g08.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* der(g08.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 16047;
}
/*
equation index: 16048
type: SIMPLE_ASSIGN
vrNordic_g08.IrPu = if g08.running.value then g08.RfPPu * g08.ifPu / (g08.rTfoPu * g08.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16048};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3614]] /* vrNordic_g08.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* g08.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* g08.Kuf PARAM */)),"g08.rTfoPu * g08.Kuf")):0.0);
  threadData->lastEquationSolved = 16048;
}
/*
equation index: 16049
type: SIMPLE_ASSIGN
vrNordic_g08.dIf.y = vrNordic_g08.IrPu - vrNordic_g08.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3614]] /* vrNordic_g08.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4686]] /* vrNordic_g08.const2.k PARAM */);
  threadData->lastEquationSolved = 16049;
}
/*
equation index: 16050
type: SIMPLE_ASSIGN
vrNordic_g08.gain1.y = vrNordic_g08.gain1.k * vrNordic_g08.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16050};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3623]] /* vrNordic_g08.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4692]] /* vrNordic_g08.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */));
  threadData->lastEquationSolved = 16050;
}
/*
equation index: 16051
type: SIMPLE_ASSIGN
vrNordic_g08.overExcitationLimitation.y = if vrNordic_g08.dIf.y < -0.1 then -1.0 else if vrNordic_g08.dIf.y < 0.0 then 0.0 else if vrNordic_g08.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g08.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16051};
  modelica_boolean tmp2042;
  modelica_real tmp2043;
  modelica_real tmp2044;
  modelica_boolean tmp2045;
  modelica_real tmp2046;
  modelica_real tmp2047;
  modelica_boolean tmp2048;
  modelica_boolean tmp2049;
  modelica_real tmp2050;
  modelica_boolean tmp2051;
  modelica_real tmp2052;
  tmp2043 = 1.0;
  tmp2044 = 0.1;
  relationhysteresis(data, &tmp2042, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */), -0.1, tmp2043, tmp2044, 342, Less, LessZC);
  tmp2051 = (modelica_boolean)tmp2042;
  if(tmp2051)
  {
    tmp2052 = -1.0;
  }
  else
  {
    tmp2046 = 1.0;
    tmp2047 = 0.0;
    relationhysteresis(data, &tmp2045, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */), 0.0, tmp2046, tmp2047, 343, Less, LessZC);
    tmp2049 = (modelica_boolean)tmp2045;
    if(tmp2049)
    {
      tmp2050 = 0.0;
    }
    else
    {
      tmp2048 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4740]] /* vrNordic_g08.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp2050 = (tmp2048?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */));
    }
    tmp2052 = tmp2050;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */) = tmp2052;
  threadData->lastEquationSolved = 16051;
}
/*
equation index: 16052
type: SIMPLE_ASSIGN
$DAEres1226 = (if vrNordic_g08.timer.y < vrNordic_g08.timer.outMin and vrNordic_g08.timer.k * vrNordic_g08.overExcitationLimitation.y < 0.0 or vrNordic_g08.timer.y > vrNordic_g08.timer.outMax and vrNordic_g08.timer.k * vrNordic_g08.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g08.timer.k * vrNordic_g08.overExcitationLimitation.y) - der(vrNordic_g08.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16052};
  modelica_boolean tmp2053;
  modelica_real tmp2054;
  modelica_real tmp2055;
  modelica_boolean tmp2056;
  modelica_real tmp2057;
  modelica_real tmp2058;
  modelica_boolean tmp2059;
  modelica_real tmp2060;
  modelica_real tmp2061;
  modelica_boolean tmp2062;
  modelica_real tmp2063;
  modelica_real tmp2064;
  tmp2054 = 1.0;
  tmp2055 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4750]] /* vrNordic_g08.timer.outMin PARAM */));
  relationhysteresis(data, &tmp2053, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4750]] /* vrNordic_g08.timer.outMin PARAM */), tmp2054, tmp2055, 348, Less, LessZC);
  tmp2057 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */))) * (1.0);
  tmp2058 = 0.0;
  relationhysteresis(data, &tmp2056, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)), 0.0, tmp2057, tmp2058, 349, Less, LessZC);
  tmp2060 = 1.0;
  tmp2061 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4749]] /* vrNordic_g08.timer.outMax PARAM */));
  relationhysteresis(data, &tmp2059, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4749]] /* vrNordic_g08.timer.outMax PARAM */), tmp2060, tmp2061, 350, Greater, GreaterZC);
  tmp2063 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */))) * (1.0);
  tmp2064 = 0.0;
  relationhysteresis(data, &tmp2062, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)), 0.0, tmp2063, tmp2064, 351, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1226]) /* $DAEres1226 DAE_RESIDUAL_VAR */ = (((tmp2053 && tmp2056) || (tmp2059 && tmp2062))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* der(vrNordic_g08.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 16052;
}
/*
equation index: 16053
type: SIMPLE_ASSIGN
$DAEres1227 = if g08.running.value then (-g08.RDPPu) * g08.iDPu - 0.0031830988618379067 * der(g08.lambdaDPu) else der(g08.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16053};
  (data->simulationInfo->daeModeData->residualVars[1227]) /* $DAEres1227 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[978]] /* g08.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* g08.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* der(g08.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* der(g08.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 16053;
}
/*
equation index: 16054
type: SIMPLE_ASSIGN
g08.cePu = if g08.running.value then g08.lambdaqPu * g08.idPu - g08.lambdadPu * g08.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16054};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* g08.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1363]] /* g08.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* g08.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* g08.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* g08.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 16054;
}
/*
equation index: 16055
type: SIMPLE_ASSIGN
g08.PePu = if g08.running.value then g08.cePu * g08.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16055};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* g08.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* g08.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 16055;
}
/*
equation index: 16056
type: SIMPLE_ASSIGN
$DAEres1228 = if g08.running.value then 2.0 * g08.H * der(g08.omegaPu) - (g08.cmPu * g08.PNomTurb / g08.SNom + g08.DPu * (omegaCOI - g08.omegaPu) - g08.cePu) else der(g08.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16056};
  (data->simulationInfo->daeModeData->residualVars[1228]) /* $DAEres1228 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[935]] /* g08.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* der(g08.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1348]] /* g08.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* g08.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */),"g08.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[933]] /* g08.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* g08.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* g08.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* der(g08.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 16056;
}
/*
equation index: 16057
type: SIMPLE_ASSIGN
g08.thetaInternal.value = if g08.running.value then Modelica.Math.atan3(g08.udPu, g08.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16057};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1374]] /* g08.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1379]] /* g08.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1381]] /* g08.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 16057;
}
/*
equation index: 16058
type: SIMPLE_ASSIGN
$DAEres1229 = if g08.running.value then g08.ufPu - (g08.RfPPu * g08.ifPu + 0.0031830988618379067 * der(g08.lambdafPu)) else der(g08.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16058};
  (data->simulationInfo->daeModeData->residualVars[1229]) /* $DAEres1229 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1380]] /* g08.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* g08.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* g08.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* der(g08.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* der(g08.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 16058;
}
/*
equation index: 16059
type: SIMPLE_ASSIGN
g08.uStatorPu.re = if g08.running.value then (g08.terminal.V.re + (-100.0) * (g08.terminal.i.re * g08.RTfoPu - g08.terminal.i.im * g08.XTfoPu) / g08.SNom) / g08.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* g08.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* g08.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */),"g08.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */),"g08.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16059;
}
/*
equation index: 16060
type: SIMPLE_ASSIGN
g08.iStatorPu.im = if g08.running.value then g08.rTfoPu * g08.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16060};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 16060;
}
/*
equation index: 16061
type: SIMPLE_ASSIGN
g08.IStatorPu = if g08.running.value then if g08.iStatorPu.re == 0.0 and g08.iStatorPu.im == 0.0 then 0.0 else (g08.iStatorPu.re ^ 2.0 + g08.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16061};
  modelica_real tmp2065;
  modelica_real tmp2066;
  modelica_real tmp2067;
  modelica_boolean tmp2068;
  modelica_real tmp2069;
  modelica_boolean tmp2070;
  modelica_real tmp2071;
  tmp2070 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp2070)
  {
    tmp2068 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */) == 0.0));
    if(tmp2068)
    {
      tmp2069 = 0.0;
    }
    else
    {
      tmp2065 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */);
      tmp2066 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */);
      tmp2067 = (tmp2065 * tmp2065) + (tmp2066 * tmp2066);
      if(tmp2067 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2067, 0.5);
      }
      tmp2069 = sqrt(tmp2067);
    }
    tmp2071 = tmp2069;
  }
  else
  {
    tmp2071 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* g08.IStatorPu variable */) = tmp2071;
  threadData->lastEquationSolved = 16061;
}
/*
equation index: 16062
type: SIMPLE_ASSIGN
g08.uPu.im = if g08.running.value then g08.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16062};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1375]] /* g08.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 16062;
}
/*
equation index: 16063
type: SIMPLE_ASSIGN
g08.UPu = if g08.running.value then (g08.terminal.V.re ^ 2.0 + g08.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16063};
  modelica_real tmp2072;
  modelica_real tmp2073;
  modelica_real tmp2074;
  modelica_boolean tmp2075;
  modelica_real tmp2076;
  tmp2075 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp2075)
  {
    tmp2072 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */);
    tmp2073 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */);
    tmp2074 = (tmp2072 * tmp2072) + (tmp2073 * tmp2073);
    if(tmp2074 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2074, 0.5);
    }
    tmp2076 = sqrt(tmp2074);
  }
  else
  {
    tmp2076 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1346]] /* g08.UPu variable */) = tmp2076;
  threadData->lastEquationSolved = 16063;
}
/*
equation index: 16064
type: SIMPLE_ASSIGN
goverNordic_g08.PGenPu = if g08.running.value then (-g08.terminal.V.re) * g08.terminal.i.re - g08.terminal.V.im * g08.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2058]] /* goverNordic_g08.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 16064;
}
/*
equation index: 16065
type: SIMPLE_ASSIGN
goverNordic_g08.perUnitP.y = goverNordic_g08.perUnitP.k * goverNordic_g08.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16065};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2074]] /* goverNordic_g08.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2538]] /* goverNordic_g08.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2058]] /* goverNordic_g08.PGenPu variable */));
  threadData->lastEquationSolved = 16065;
}
/*
equation index: 16066
type: SIMPLE_ASSIGN
$DAEres1230 = goverNordic_g08.firstOrder1.k * goverNordic_g08.perUnitP.y + (-goverNordic_g08.firstOrder1.y) - der(goverNordic_g08.firstOrder1.y) * goverNordic_g08.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16066};
  (data->simulationInfo->daeModeData->residualVars[1230]) /* $DAEres1230 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2516]] /* goverNordic_g08.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2074]] /* goverNordic_g08.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* goverNordic_g08.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* der(goverNordic_g08.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2515]] /* goverNordic_g08.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 16066;
}
/*
equation index: 16067
type: SIMPLE_ASSIGN
g08.PGen = if g08.running.value then 100.0 * goverNordic_g08.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* g08.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2058]] /* goverNordic_g08.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16067;
}
/*
equation index: 16068
type: SIMPLE_ASSIGN
g08.QGenPu = if g08.running.value then g08.terminal.V.re * g08.terminal.i.im - g08.terminal.V.im * g08.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16068};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* g08.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 16068;
}
/*
equation index: 16069
type: SIMPLE_ASSIGN
g08.QGen = if g08.running.value then 100.0 * g08.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16069};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* g08.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* g08.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16069;
}
/*
equation index: 16070
type: SIMPLE_ASSIGN
g08.uStatorPu.im = if g08.running.value then (g08.terminal.V.im + (-100.0) * (g08.terminal.i.re * g08.XTfoPu + g08.terminal.i.im * g08.RTfoPu) / g08.SNom) / g08.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16070};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1373]] /* g08.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* g08.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1372]] /* g08.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[982]] /* g08.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* g08.SNom PARAM */),"g08.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* g08.rTfoPu PARAM */),"g08.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16070;
}
/*
equation index: 16071
type: SIMPLE_ASSIGN
g08.sStatorPu.re = if g08.running.value then g08.uStatorPu.re * g08.iStatorPu.re + g08.uStatorPu.im * g08.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16071};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1368]] /* g08.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16071;
}
/*
equation index: 16072
type: SIMPLE_ASSIGN
g08.sStatorPu.im = if g08.running.value then g08.uStatorPu.im * g08.iStatorPu.re - g08.uStatorPu.re * g08.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1367]] /* g08.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 16072;
}
/*
equation index: 16073
type: SIMPLE_ASSIGN
g08.QStatorPu = if g08.running.value then -g08.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* g08.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1367]] /* g08.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16073;
}
/*
equation index: 16074
type: SIMPLE_ASSIGN
g08.QStatorPuQNom = if g08.running.value then 100.0 * g08.QStatorPu / g08.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* g08.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* g08.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* g08.QNomAlt PARAM */),"g08.QNomAlt")):0.0);
  threadData->lastEquationSolved = 16074;
}
/*
equation index: 16075
type: SIMPLE_ASSIGN
vrNordic_g08.UsPu = if g08.running.value then if g08.uStatorPu.re == 0.0 and g08.uStatorPu.im == 0.0 then 0.0 else (g08.uStatorPu.re ^ 2.0 + g08.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16075};
  modelica_real tmp2077;
  modelica_real tmp2078;
  modelica_real tmp2079;
  modelica_boolean tmp2080;
  modelica_real tmp2081;
  modelica_boolean tmp2082;
  modelica_real tmp2083;
  tmp2082 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[498]] /* g08.running.value DISCRETE */);
  if(tmp2082)
  {
    tmp2080 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */) == 0.0));
    if(tmp2080)
    {
      tmp2081 = 0.0;
    }
    else
    {
      tmp2077 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */);
      tmp2078 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */);
      tmp2079 = (tmp2077 * tmp2077) + (tmp2078 * tmp2078);
      if(tmp2079 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2079, 0.5);
      }
      tmp2081 = sqrt(tmp2079);
    }
    tmp2083 = tmp2081;
  }
  else
  {
    tmp2083 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3615]] /* vrNordic_g08.UsPu variable */) = tmp2083;
  threadData->lastEquationSolved = 16075;
}
/*
equation index: 16076
type: SIMPLE_ASSIGN
vrNordic_g08.dU.y = vrNordic_g08.const1.k - vrNordic_g08.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3619]] /* vrNordic_g08.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4685]] /* vrNordic_g08.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3615]] /* vrNordic_g08.UsPu variable */);
  threadData->lastEquationSolved = 16076;
}
/*
equation index: 16077
type: SIMPLE_ASSIGN
vrNordic_g08.add.y = vrNordic_g08.add.k1 * vrNordic_g08.dU.y + vrNordic_g08.add.k2 * vrNordic_g08.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4682]] /* vrNordic_g08.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3619]] /* vrNordic_g08.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4683]] /* vrNordic_g08.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3633]] /* vrNordic_g08.limiter.y variable */));
  threadData->lastEquationSolved = 16077;
}
/*
equation index: 16078
type: SIMPLE_ASSIGN
vrNordic_g08.switch.y = if vrNordic_g08.greaterEqualThreshold.y then vrNordic_g08.gain1.y else vrNordic_g08.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vrNordic_g08.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1036]] /* vrNordic_g08.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3623]] /* vrNordic_g08.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */));
  threadData->lastEquationSolved = 16078;
}
/*
equation index: 16079
type: SIMPLE_ASSIGN
vrNordic_g08.min1.y = if vrNordic_g08.switch.y < vrNordic_g08.add.y then vrNordic_g08.switch.y else vrNordic_g08.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16079};
  modelica_boolean tmp2084;
  modelica_real tmp2085;
  modelica_real tmp2086;
  tmp2085 = 1.0;
  tmp2086 = 1.0;
  relationhysteresis(data, &tmp2084, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vrNordic_g08.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */), tmp2085, tmp2086, 340, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3634]] /* vrNordic_g08.min1.y variable */) = (tmp2084?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vrNordic_g08.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */));
  threadData->lastEquationSolved = 16079;
}
/*
equation index: 16080
type: SIMPLE_ASSIGN
vrNordic_g08.kMulDU.y = vrNordic_g08.kMulDU.k * vrNordic_g08.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3624]] /* vrNordic_g08.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4694]] /* vrNordic_g08.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3634]] /* vrNordic_g08.min1.y variable */));
  threadData->lastEquationSolved = 16080;
}
/*
equation index: 16081
type: SIMPLE_ASSIGN
$DAEres1231 = vrNordic_g08.leadLag.a_end * vrNordic_g08.kMulDU.y + (-vrNordic_g08.leadLag.a[2]) * vrNordic_g08.leadLag.x_scaled[1] - der(vrNordic_g08.leadLag.x_scaled[1]) * vrNordic_g08.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16081};
  (data->simulationInfo->daeModeData->residualVars[1231]) /* $DAEres1231 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4699]] /* vrNordic_g08.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3624]] /* vrNordic_g08.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4698]] /* vrNordic_g08.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* vrNordic_g08.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* der(vrNordic_g08.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4697]] /* vrNordic_g08.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 16081;
}
/*
equation index: 16082
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.y = (vrNordic_g08.leadLag.bb[2] - vrNordic_g08.leadLag.d * vrNordic_g08.leadLag.a[2]) * vrNordic_g08.leadLag.x[1] + vrNordic_g08.leadLag.d * vrNordic_g08.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3626]] /* vrNordic_g08.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4703]] /* vrNordic_g08.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4704]] /* vrNordic_g08.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4698]] /* vrNordic_g08.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3625]] /* vrNordic_g08.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4704]] /* vrNordic_g08.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3624]] /* vrNordic_g08.kMulDU.y variable */));
  threadData->lastEquationSolved = 16082;
}
/*
equation index: 16083
type: SIMPLE_ASSIGN
vrNordic_g08.feedback1.y = vrNordic_g08.leadLag.y - vrNordic_g08.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3621]] /* vrNordic_g08.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3626]] /* vrNordic_g08.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 16083;
}
/*
equation index: 16084
type: SIMPLE_ASSIGN
vrNordic_g08.gain.y = vrNordic_g08.gain.k * vrNordic_g08.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4691]] /* vrNordic_g08.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3621]] /* vrNordic_g08.feedback1.y variable */));
  threadData->lastEquationSolved = 16084;
}
/*
equation index: 16085
type: SIMPLE_ASSIGN
$DAEres1232 = (if vrNordic_g08.limIntegrator.y < vrNordic_g08.limIntegrator.outMin and vrNordic_g08.limIntegrator.k * vrNordic_g08.gain.y < 0.0 or vrNordic_g08.limIntegrator.y > vrNordic_g08.limIntegrator.outMax and vrNordic_g08.limIntegrator.k * vrNordic_g08.gain.y > 0.0 then 0.0 else vrNordic_g08.limIntegrator.k * vrNordic_g08.gain.y) - der(vrNordic_g08.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16085};
  modelica_boolean tmp2087;
  modelica_real tmp2088;
  modelica_real tmp2089;
  modelica_boolean tmp2090;
  modelica_real tmp2091;
  modelica_real tmp2092;
  modelica_boolean tmp2093;
  modelica_real tmp2094;
  modelica_real tmp2095;
  modelica_boolean tmp2096;
  modelica_real tmp2097;
  modelica_real tmp2098;
  tmp2088 = 1.0;
  tmp2089 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4736]] /* vrNordic_g08.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp2087, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4736]] /* vrNordic_g08.limIntegrator.outMin PARAM */), tmp2088, tmp2089, 344, Less, LessZC);
  tmp2091 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */))) * (1.0);
  tmp2092 = 0.0;
  relationhysteresis(data, &tmp2090, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)), 0.0, tmp2091, tmp2092, 345, Less, LessZC);
  tmp2094 = 1.0;
  tmp2095 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4735]] /* vrNordic_g08.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp2093, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4735]] /* vrNordic_g08.limIntegrator.outMax PARAM */), tmp2094, tmp2095, 346, Greater, GreaterZC);
  tmp2097 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */))) * (1.0);
  tmp2098 = 0.0;
  relationhysteresis(data, &tmp2096, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)), 0.0, tmp2097, tmp2098, 347, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1232]) /* $DAEres1232 DAE_RESIDUAL_VAR */ = (((tmp2087 && tmp2090) || (tmp2093 && tmp2096))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* der(vrNordic_g08.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 16085;
}
/*
equation index: 16086
type: SIMPLE_ASSIGN
$whenCondition43 = not pre(g07.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16086};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[367]] /* $whenCondition43 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[494] /* g07.running.value DISCRETE */));
  threadData->lastEquationSolved = 16086;
}
/*
equation index: 16087
type: WHEN

when {} then
  g07.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16087};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[367]] /* $whenCondition43 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[367] /* $whenCondition43 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16087;
}
/*
equation index: 16089
type: SIMPLE_ASSIGN
$whenCondition45 = not g07.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16089};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[389]] /* $whenCondition45 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */));
  threadData->lastEquationSolved = 16089;
}
/*
equation index: 16090
type: SIMPLE_ASSIGN
$whenCondition44 = g07.running.value and not pre(g07.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16090};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[378]] /* $whenCondition44 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[494] /* g07.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16090;
}
/*
equation index: 16091
type: WHEN

when {$whenCondition45} then
  g07.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16091};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[389]] /* $whenCondition45 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[389] /* $whenCondition45 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[13]] /* g07.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[378]] /* $whenCondition44 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[378] /* $whenCondition44 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[13]] /* g07.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16091;
}
/*
equation index: 16093
type: SIMPLE_ASSIGN
g07.converter.u = Integer(g07.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16093};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* g07.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[13]] /* g07.state DISCRETE */)));
  threadData->lastEquationSolved = 16093;
}
/*
equation index: 16094
type: SIMPLE_ASSIGN
g07.genState = (*Real*)(g07.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1304]] /* g07.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* g07.converter.u DISCRETE */));
  threadData->lastEquationSolved = 16094;
}
/*
equation index: 16095
type: SIMPLE_ASSIGN
$DAEres133 = if g07.running.value then der(g07.theta) - 314.1592653589793 * (g07.omegaPu - omegaCOI) else der(g07.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16095};
  (data->simulationInfo->daeModeData->residualVars[133]) /* $DAEres133 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* der(g07.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* der(g07.theta) STATE_DER */));
  threadData->lastEquationSolved = 16095;
}
/*
equation index: 16096
type: SIMPLE_ASSIGN
g07.cmPu = if g07.running.value then g07.PmPu / g07.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1302]] /* g07.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1295]] /* g07.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */),"g07.omegaPu"):0.0);
  threadData->lastEquationSolved = 16096;
}
/*
equation index: 16097
type: SIMPLE_ASSIGN
g07.ufPu = if g07.running.value then vrNordic_g07.limIntegrator.y * g07.Kuf * g07.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1334]] /* g07.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* g07.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 16097;
}
/*
equation index: 16098
type: SIMPLE_ASSIGN
$DAEres816 = if g07.running.value then g07.MdSatPPu - (g07.miPu + g07.MsalPu * g07.sin2Eta) else g07.MdSatPPu - g07.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16098};
  (data->simulationInfo->daeModeData->residualVars[816]) /* $DAEres816 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* g07.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[864]] /* g07.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1323]] /* g07.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* g07.MdPPu PARAM */));
  threadData->lastEquationSolved = 16098;
}
/*
equation index: 16099
type: SIMPLE_ASSIGN
$DAEres817 = if g07.running.value then g07.cos2Eta - (g07.lambdaADPu / g07.lambdaAirGapPu) ^ 2.0 else g07.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16099};
  modelica_real tmp2099;
  modelica_boolean tmp2100;
  modelica_real tmp2101;
  tmp2100 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp2100)
  {
    tmp2099 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* g07.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* g07.lambdaAirGapPu variable */),"g07.lambdaAirGapPu");
    tmp2101 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* g07.cos2Eta variable */) - ((tmp2099 * tmp2099));
  }
  else
  {
    tmp2101 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* g07.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[817]) /* $DAEres817 DAE_RESIDUAL_VAR */ = tmp2101;
  threadData->lastEquationSolved = 16099;
}
/*
equation index: 16100
type: SIMPLE_ASSIGN
$DAEres818 = if g07.running.value then g07.mqsPu - g07.MqPPu / (1.0 + g07.mq * g07.lambdaAirGapPu ^ g07.nq) else g07.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16100};
  modelica_real tmp2102;
  modelica_real tmp2103;
  modelica_real tmp2104;
  modelica_real tmp2105;
  modelica_real tmp2106;
  modelica_real tmp2107;
  modelica_real tmp2108;
  modelica_boolean tmp2109;
  modelica_real tmp2110;
  tmp2109 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp2109)
  {
    tmp2102 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* g07.lambdaAirGapPu variable */);
    tmp2103 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[907]] /* g07.nq PARAM */);
    if(tmp2102 < 0.0 && tmp2103 != 0.0)
    {
      tmp2105 = modf(tmp2103, &tmp2106);
      
      if(tmp2105 > 0.5)
      {
        tmp2105 -= 1.0;
        tmp2106 += 1.0;
      }
      else if(tmp2105 < -0.5)
      {
        tmp2105 += 1.0;
        tmp2106 -= 1.0;
      }
      
      if(fabs(tmp2105) < 1e-10)
        tmp2104 = pow(tmp2102, tmp2106);
      else
      {
        tmp2108 = modf(1.0/tmp2103, &tmp2107);
        if(tmp2108 > 0.5)
        {
          tmp2108 -= 1.0;
          tmp2107 += 1.0;
        }
        else if(tmp2108 < -0.5)
        {
          tmp2108 += 1.0;
          tmp2107 -= 1.0;
        }
        if(fabs(tmp2108) < 1e-10 && ((unsigned long)tmp2107 & 1))
        {
          tmp2104 = -pow(-tmp2102, tmp2105)*pow(tmp2102, tmp2106);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2102, tmp2103);
        }
      }
    }
    else
    {
      tmp2104 = pow(tmp2102, tmp2103);
    }
    if(isnan(tmp2104) || isinf(tmp2104))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2102, tmp2103);
    }
    tmp2110 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1320]] /* g07.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[860]] /* g07.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[905]] /* g07.mq PARAM */)) * (tmp2104),"1.0 + g07.mq * g07.lambdaAirGapPu ^ g07.nq"));
  }
  else
  {
    tmp2110 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1320]] /* g07.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[818]) /* $DAEres818 DAE_RESIDUAL_VAR */ = tmp2110;
  threadData->lastEquationSolved = 16100;
}
/*
equation index: 16101
type: SIMPLE_ASSIGN
$DAEres819 = if g07.running.value then g07.mdsPu - g07.MdPPu / (1.0 + g07.md * g07.lambdaAirGapPu ^ g07.nd) else g07.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16101};
  modelica_real tmp2111;
  modelica_real tmp2112;
  modelica_real tmp2113;
  modelica_real tmp2114;
  modelica_real tmp2115;
  modelica_real tmp2116;
  modelica_real tmp2117;
  modelica_boolean tmp2118;
  modelica_real tmp2119;
  tmp2118 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp2118)
  {
    tmp2111 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* g07.lambdaAirGapPu variable */);
    tmp2112 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[906]] /* g07.nd PARAM */);
    if(tmp2111 < 0.0 && tmp2112 != 0.0)
    {
      tmp2114 = modf(tmp2112, &tmp2115);
      
      if(tmp2114 > 0.5)
      {
        tmp2114 -= 1.0;
        tmp2115 += 1.0;
      }
      else if(tmp2114 < -0.5)
      {
        tmp2114 += 1.0;
        tmp2115 -= 1.0;
      }
      
      if(fabs(tmp2114) < 1e-10)
        tmp2113 = pow(tmp2111, tmp2115);
      else
      {
        tmp2117 = modf(1.0/tmp2112, &tmp2116);
        if(tmp2117 > 0.5)
        {
          tmp2117 -= 1.0;
          tmp2116 += 1.0;
        }
        else if(tmp2117 < -0.5)
        {
          tmp2117 += 1.0;
          tmp2116 -= 1.0;
        }
        if(fabs(tmp2117) < 1e-10 && ((unsigned long)tmp2116 & 1))
        {
          tmp2113 = -pow(-tmp2111, tmp2114)*pow(tmp2111, tmp2115);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2111, tmp2112);
        }
      }
    }
    else
    {
      tmp2113 = pow(tmp2111, tmp2112);
    }
    if(isnan(tmp2113) || isinf(tmp2113))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2111, tmp2112);
    }
    tmp2119 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* g07.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* g07.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* g07.md PARAM */)) * (tmp2113),"1.0 + g07.md * g07.lambdaAirGapPu ^ g07.nd"));
  }
  else
  {
    tmp2119 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* g07.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[819]) /* $DAEres819 DAE_RESIDUAL_VAR */ = tmp2119;
  threadData->lastEquationSolved = 16101;
}
/*
equation index: 16102
type: SIMPLE_ASSIGN
$DAEres820 = if g07.running.value then g07.sin2Eta - (g07.lambdaAQPu / g07.lambdaAirGapPu) ^ 2.0 else g07.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16102};
  modelica_real tmp2120;
  modelica_boolean tmp2121;
  modelica_real tmp2122;
  tmp2121 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp2121)
  {
    tmp2120 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* g07.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* g07.lambdaAirGapPu variable */),"g07.lambdaAirGapPu");
    tmp2122 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1323]] /* g07.sin2Eta variable */) - ((tmp2120 * tmp2120));
  }
  else
  {
    tmp2122 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1323]] /* g07.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[820]) /* $DAEres820 DAE_RESIDUAL_VAR */ = tmp2122;
  threadData->lastEquationSolved = 16102;
}
/*
equation index: 16103
type: SIMPLE_ASSIGN
$DAEres821 = if g07.running.value then g07.miPu - (g07.mdsPu * g07.cos2Eta + g07.mqsPu * g07.sin2Eta) else g07.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16103};
  (data->simulationInfo->daeModeData->residualVars[821]) /* $DAEres821 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* g07.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* g07.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* g07.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1320]] /* g07.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1323]] /* g07.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* g07.miPu variable */));
  threadData->lastEquationSolved = 16103;
}
/*
equation index: 16104
type: SIMPLE_ASSIGN
$DAEres822 = if g07.running.value then g07.MqSatPPu - (g07.miPu - g07.MsalPu * g07.cos2Eta) else g07.MqSatPPu - g07.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16104};
  (data->simulationInfo->daeModeData->residualVars[822]) /* $DAEres822 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* g07.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[864]] /* g07.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* g07.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[860]] /* g07.MqPPu PARAM */));
  threadData->lastEquationSolved = 16104;
}
/*
equation index: 16105
type: SIMPLE_ASSIGN
$DAEres823 = if g07.running.value then g07.lambdaQ2Pu - (g07.MqSatPPu * (g07.iqPu + g07.iQ1Pu) + (g07.MqSatPPu + g07.LQ2PPu) * g07.iQ2Pu) else g07.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16105};
  (data->simulationInfo->daeModeData->residualVars[823]) /* $DAEres823 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* g07.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* g07.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[841]] /* g07.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* g07.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* g07.iQ2Pu variable */));
  threadData->lastEquationSolved = 16105;
}
/*
equation index: 16106
type: SIMPLE_ASSIGN
$DAEres824 = if g07.running.value then g07.lambdaQ1Pu - (g07.MqSatPPu * g07.iqPu + (g07.MqSatPPu + g07.LQ1PPu) * g07.iQ1Pu + g07.MqSatPPu * g07.iQ2Pu) else g07.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16106};
  (data->simulationInfo->daeModeData->residualVars[824]) /* $DAEres824 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* g07.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[840]] /* g07.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* g07.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* g07.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* g07.iQ1Pu variable */));
  threadData->lastEquationSolved = 16106;
}
/*
equation index: 16107
type: SIMPLE_ASSIGN
$DAEres825 = if g07.running.value then g07.uqPu - ((g07.RaPPu + g07.RTfoPu) * g07.iqPu + g07.omegaPu * g07.lambdadPu) else g07.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16107};
  (data->simulationInfo->daeModeData->residualVars[825]) /* $DAEres825 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* g07.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[880]] /* g07.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* g07.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* g07.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* g07.lambdaqPu variable */));
  threadData->lastEquationSolved = 16107;
}
/*
equation index: 16108
type: SIMPLE_ASSIGN
$DAEres826 = if g07.running.value then g07.udPu - ((g07.RaPPu + g07.RTfoPu) * g07.idPu - g07.omegaPu * g07.lambdaqPu) else g07.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16108};
  (data->simulationInfo->daeModeData->residualVars[826]) /* $DAEres826 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* g07.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[880]] /* g07.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* g07.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* g07.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* g07.lambdadPu variable */));
  threadData->lastEquationSolved = 16108;
}
/*
equation index: 16109
type: SIMPLE_ASSIGN
$DAEres827 = if g07.running.value then g07.lambdaqPu - ((g07.MqSatPPu + g07.LqPPu + g07.XTfoPu) * g07.iqPu + g07.MqSatPPu * (g07.iQ1Pu + g07.iQ2Pu)) else g07.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16109};
  (data->simulationInfo->daeModeData->residualVars[827]) /* $DAEres827 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* g07.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* g07.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* g07.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* g07.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* g07.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* g07.iDPu variable */));
  threadData->lastEquationSolved = 16109;
}
/*
equation index: 16110
type: SIMPLE_ASSIGN
$DAEres828 = if g07.running.value then g07.lambdaAQPu - g07.MqSatPPu * (g07.iqPu + g07.iQ1Pu + g07.iQ2Pu) else g07.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16110};
  (data->simulationInfo->daeModeData->residualVars[828]) /* $DAEres828 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* g07.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* g07.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* g07.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* g07.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* g07.lambdaAQPu variable */));
  threadData->lastEquationSolved = 16110;
}
/*
equation index: 16111
type: SIMPLE_ASSIGN
$DAEres829 = if g07.running.value then g07.lambdaAirGapPu - sqrt(g07.lambdaADPu ^ 2.0 + g07.lambdaAQPu ^ 2.0) else g07.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16111};
  modelica_real tmp2123;
  modelica_real tmp2124;
  modelica_real tmp2125;
  modelica_boolean tmp2126;
  modelica_real tmp2127;
  tmp2126 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp2126)
  {
    tmp2123 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* g07.lambdaADPu variable */);
    tmp2124 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* g07.lambdaAQPu variable */);
    tmp2125 = (tmp2123 * tmp2123) + (tmp2124 * tmp2124);
    if(!(tmp2125 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g07.lambdaADPu ^ 2.0 + g07.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp2125);
      }
    }
    tmp2127 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* g07.lambdaAirGapPu variable */) - sqrt(tmp2125);
  }
  else
  {
    tmp2127 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* g07.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[829]) /* $DAEres829 DAE_RESIDUAL_VAR */ = tmp2127;
  threadData->lastEquationSolved = 16111;
}
/*
equation index: 16112
type: SIMPLE_ASSIGN
$DAEres830 = if g07.running.value then g07.lambdaADPu - g07.MdSatPPu * (g07.idPu + g07.ifPu + g07.iDPu) else g07.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16112};
  (data->simulationInfo->daeModeData->residualVars[830]) /* $DAEres830 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* g07.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* g07.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* g07.lambdaADPu variable */));
  threadData->lastEquationSolved = 16112;
}
/*
equation index: 16113
type: SIMPLE_ASSIGN
$DAEres831 = if g07.running.value then g07.lambdaDPu - (g07.MdSatPPu * g07.idPu + (g07.MdSatPPu + g07.MrcPPu) * g07.ifPu + (g07.MdSatPPu + g07.LDPPu + g07.MrcPPu) * g07.iDPu) else g07.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16113};
  (data->simulationInfo->daeModeData->residualVars[831]) /* $DAEres831 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* g07.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* g07.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* g07.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* g07.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* g07.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */));
  threadData->lastEquationSolved = 16113;
}
/*
equation index: 16114
type: SIMPLE_ASSIGN
$DAEres832 = if g07.running.value then g07.lambdadPu - ((g07.MdSatPPu + g07.LdPPu + g07.XTfoPu) * g07.idPu + g07.MdSatPPu * (g07.ifPu + g07.iDPu)) else g07.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16114};
  (data->simulationInfo->daeModeData->residualVars[832]) /* $DAEres832 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* g07.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[851]] /* g07.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* g07.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* g07.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */));
  threadData->lastEquationSolved = 16114;
}
/*
equation index: 16115
type: SIMPLE_ASSIGN
$DAEres833 = if g07.running.value then g07.lambdafPu - (g07.MdSatPPu * g07.idPu + (g07.MdSatPPu + g07.LfPPu + g07.MrcPPu) * g07.ifPu + (g07.MdSatPPu + g07.MrcPPu) * g07.iDPu) else g07.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16115};
  (data->simulationInfo->daeModeData->residualVars[833]) /* $DAEres833 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* g07.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[852]] /* g07.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* g07.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* g07.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* g07.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* g07.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */));
  threadData->lastEquationSolved = 16115;
}
/*
equation index: 16116
type: SIMPLE_ASSIGN
$DAEres835 = if g07.running.value then 100.0 * g07.terminal.i.im / g07.SNom - (sin(g07.theta) * g07.iqPu - cos(g07.theta) * g07.idPu) else g07.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16116};
  (data->simulationInfo->daeModeData->residualVars[835]) /* $DAEres835 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */),"g07.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* g07.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* g07.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */));
  threadData->lastEquationSolved = 16116;
}
/*
equation index: 16117
type: SIMPLE_ASSIGN
$DAEres836 = if g07.running.value then 100.0 * g07.terminal.i.re / g07.SNom - (sin(g07.theta) * g07.idPu + cos(g07.theta) * g07.iqPu) else g07.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16117};
  (data->simulationInfo->daeModeData->residualVars[836]) /* $DAEres836 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */),"g07.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* g07.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* g07.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */));
  threadData->lastEquationSolved = 16117;
}
/*
equation index: 16118
type: SIMPLE_ASSIGN
$DAEres839 = if g07.running.value then g07.terminal.V.im - (sin(g07.theta) * g07.uqPu - cos(g07.theta) * g07.udPu) else g07.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16118};
  (data->simulationInfo->daeModeData->residualVars[839]) /* $DAEres839 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* g07.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* g07.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* g07.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* g07.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* g07.uqPu variable */));
  threadData->lastEquationSolved = 16118;
}
/*
equation index: 16119
type: SIMPLE_ASSIGN
$DAEres840 = if g07.running.value then g07.terminal.V.re - (sin(g07.theta) * g07.udPu + cos(g07.theta) * g07.uqPu) else g07.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16119};
  (data->simulationInfo->daeModeData->residualVars[840]) /* $DAEres840 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* g07.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* g07.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* g07.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* g07.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* g07.udPu variable */));
  threadData->lastEquationSolved = 16119;
}
/*
equation index: 16120
type: SIMPLE_ASSIGN
g07.uPu.re = if g07.running.value then g07.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* g07.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 16120;
}
/*
equation index: 16121
type: SIMPLE_ASSIGN
g07.iStatorPu.re = if g07.running.value then g07.rTfoPu * g07.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 16121;
}
/*
equation index: 16122
type: SIMPLE_ASSIGN
$DAEres1314 = if g07.running.value then (-g07.RDPPu) * g07.iDPu - 0.0031830988618379067 * der(g07.lambdaDPu) else der(g07.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16122};
  (data->simulationInfo->daeModeData->residualVars[1314]) /* $DAEres1314 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[875]] /* g07.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* g07.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* der(g07.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* der(g07.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 16122;
}
/*
equation index: 16123
type: SIMPLE_ASSIGN
vrNordic_g07.IrPu = if g07.running.value then g07.RfPPu * g07.ifPu / (g07.rTfoPu * g07.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3590]] /* vrNordic_g07.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* g07.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* g07.Kuf PARAM */)),"g07.rTfoPu * g07.Kuf")):0.0);
  threadData->lastEquationSolved = 16123;
}
/*
equation index: 16124
type: SIMPLE_ASSIGN
vrNordic_g07.dIf.y = vrNordic_g07.IrPu - vrNordic_g07.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3590]] /* vrNordic_g07.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4607]] /* vrNordic_g07.const2.k PARAM */);
  threadData->lastEquationSolved = 16124;
}
/*
equation index: 16125
type: SIMPLE_ASSIGN
vrNordic_g07.gain1.y = vrNordic_g07.gain1.k * vrNordic_g07.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3599]] /* vrNordic_g07.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4613]] /* vrNordic_g07.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */));
  threadData->lastEquationSolved = 16125;
}
/*
equation index: 16126
type: SIMPLE_ASSIGN
vrNordic_g07.overExcitationLimitation.y = if vrNordic_g07.dIf.y < -0.1 then -1.0 else if vrNordic_g07.dIf.y < 0.0 then 0.0 else if vrNordic_g07.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g07.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16126};
  modelica_boolean tmp2128;
  modelica_real tmp2129;
  modelica_real tmp2130;
  modelica_boolean tmp2131;
  modelica_real tmp2132;
  modelica_real tmp2133;
  modelica_boolean tmp2134;
  modelica_boolean tmp2135;
  modelica_real tmp2136;
  modelica_boolean tmp2137;
  modelica_real tmp2138;
  tmp2129 = 1.0;
  tmp2130 = 0.1;
  relationhysteresis(data, &tmp2128, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */), -0.1, tmp2129, tmp2130, 326, Less, LessZC);
  tmp2137 = (modelica_boolean)tmp2128;
  if(tmp2137)
  {
    tmp2138 = -1.0;
  }
  else
  {
    tmp2132 = 1.0;
    tmp2133 = 0.0;
    relationhysteresis(data, &tmp2131, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */), 0.0, tmp2132, tmp2133, 327, Less, LessZC);
    tmp2135 = (modelica_boolean)tmp2131;
    if(tmp2135)
    {
      tmp2136 = 0.0;
    }
    else
    {
      tmp2134 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4661]] /* vrNordic_g07.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp2136 = (tmp2134?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */));
    }
    tmp2138 = tmp2136;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */) = tmp2138;
  threadData->lastEquationSolved = 16126;
}
/*
equation index: 16127
type: SIMPLE_ASSIGN
$DAEres1315 = (if vrNordic_g07.timer.y < vrNordic_g07.timer.outMin and vrNordic_g07.timer.k * vrNordic_g07.overExcitationLimitation.y < 0.0 or vrNordic_g07.timer.y > vrNordic_g07.timer.outMax and vrNordic_g07.timer.k * vrNordic_g07.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g07.timer.k * vrNordic_g07.overExcitationLimitation.y) - der(vrNordic_g07.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16127};
  modelica_boolean tmp2139;
  modelica_real tmp2140;
  modelica_real tmp2141;
  modelica_boolean tmp2142;
  modelica_real tmp2143;
  modelica_real tmp2144;
  modelica_boolean tmp2145;
  modelica_real tmp2146;
  modelica_real tmp2147;
  modelica_boolean tmp2148;
  modelica_real tmp2149;
  modelica_real tmp2150;
  tmp2140 = 1.0;
  tmp2141 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4671]] /* vrNordic_g07.timer.outMin PARAM */));
  relationhysteresis(data, &tmp2139, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4671]] /* vrNordic_g07.timer.outMin PARAM */), tmp2140, tmp2141, 332, Less, LessZC);
  tmp2143 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */))) * (1.0);
  tmp2144 = 0.0;
  relationhysteresis(data, &tmp2142, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)), 0.0, tmp2143, tmp2144, 333, Less, LessZC);
  tmp2146 = 1.0;
  tmp2147 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4670]] /* vrNordic_g07.timer.outMax PARAM */));
  relationhysteresis(data, &tmp2145, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4670]] /* vrNordic_g07.timer.outMax PARAM */), tmp2146, tmp2147, 334, Greater, GreaterZC);
  tmp2149 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */))) * (1.0);
  tmp2150 = 0.0;
  relationhysteresis(data, &tmp2148, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)), 0.0, tmp2149, tmp2150, 335, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1315]) /* $DAEres1315 DAE_RESIDUAL_VAR */ = (((tmp2139 && tmp2142) || (tmp2145 && tmp2148))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* der(vrNordic_g07.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 16127;
}
/*
equation index: 16128
type: SIMPLE_ASSIGN
$DAEres1316 = if g07.running.value then (-g07.RQ2PPu) * g07.iQ2Pu - 0.0031830988618379067 * der(g07.lambdaQ2Pu) else der(g07.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16128};
  (data->simulationInfo->daeModeData->residualVars[1316]) /* $DAEres1316 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[877]] /* g07.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* g07.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* der(g07.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* der(g07.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 16128;
}
/*
equation index: 16129
type: SIMPLE_ASSIGN
$DAEres1317 = if g07.running.value then (-g07.RQ1PPu) * g07.iQ1Pu - 0.0031830988618379067 * der(g07.lambdaQ1Pu) else der(g07.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16129};
  (data->simulationInfo->daeModeData->residualVars[1317]) /* $DAEres1317 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[876]] /* g07.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1306]] /* g07.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* der(g07.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* der(g07.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 16129;
}
/*
equation index: 16130
type: SIMPLE_ASSIGN
g07.cePu = if g07.running.value then g07.lambdaqPu * g07.idPu - g07.lambdadPu * g07.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* g07.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* g07.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1310]] /* g07.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* g07.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1312]] /* g07.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 16130;
}
/*
equation index: 16131
type: SIMPLE_ASSIGN
g07.PePu = if g07.running.value then g07.cePu * g07.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1294]] /* g07.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* g07.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 16131;
}
/*
equation index: 16132
type: SIMPLE_ASSIGN
$DAEres1318 = if g07.running.value then 2.0 * g07.H * der(g07.omegaPu) - (g07.cmPu * g07.PNomTurb / g07.SNom + g07.DPu * (omegaCOI - g07.omegaPu) - g07.cePu) else der(g07.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16132};
  (data->simulationInfo->daeModeData->residualVars[1318]) /* $DAEres1318 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* g07.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* der(g07.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1302]] /* g07.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[868]] /* g07.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */),"g07.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* g07.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* g07.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* g07.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* der(g07.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 16132;
}
/*
equation index: 16133
type: SIMPLE_ASSIGN
g07.thetaInternal.value = if g07.running.value then Modelica.Math.atan3(g07.udPu, g07.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* g07.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1333]] /* g07.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* g07.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 16133;
}
/*
equation index: 16134
type: SIMPLE_ASSIGN
$DAEres1319 = if g07.running.value then g07.ufPu - (g07.RfPPu * g07.ifPu + 0.0031830988618379067 * der(g07.lambdafPu)) else der(g07.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16134};
  (data->simulationInfo->daeModeData->residualVars[1319]) /* $DAEres1319 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1334]] /* g07.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* g07.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1311]] /* g07.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* der(g07.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* der(g07.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 16134;
}
/*
equation index: 16135
type: SIMPLE_ASSIGN
g07.uStatorPu.re = if g07.running.value then (g07.terminal.V.re + (-100.0) * (g07.terminal.i.re * g07.RTfoPu - g07.terminal.i.im * g07.XTfoPu) / g07.SNom) / g07.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* g07.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* g07.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */),"g07.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */),"g07.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16135;
}
/*
equation index: 16136
type: SIMPLE_ASSIGN
g07.iStatorPu.im = if g07.running.value then g07.rTfoPu * g07.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 16136;
}
/*
equation index: 16137
type: SIMPLE_ASSIGN
g07.IStatorPu = if g07.running.value then if g07.iStatorPu.re == 0.0 and g07.iStatorPu.im == 0.0 then 0.0 else (g07.iStatorPu.re ^ 2.0 + g07.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16137};
  modelica_real tmp2151;
  modelica_real tmp2152;
  modelica_real tmp2153;
  modelica_boolean tmp2154;
  modelica_real tmp2155;
  modelica_boolean tmp2156;
  modelica_real tmp2157;
  tmp2156 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp2156)
  {
    tmp2154 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */) == 0.0));
    if(tmp2154)
    {
      tmp2155 = 0.0;
    }
    else
    {
      tmp2151 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */);
      tmp2152 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */);
      tmp2153 = (tmp2151 * tmp2151) + (tmp2152 * tmp2152);
      if(tmp2153 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2153, 0.5);
      }
      tmp2155 = sqrt(tmp2153);
    }
    tmp2157 = tmp2155;
  }
  else
  {
    tmp2157 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1290]] /* g07.IStatorPu variable */) = tmp2157;
  threadData->lastEquationSolved = 16137;
}
/*
equation index: 16138
type: SIMPLE_ASSIGN
g07.uPu.im = if g07.running.value then g07.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* g07.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 16138;
}
/*
equation index: 16139
type: SIMPLE_ASSIGN
g07.UPu = if g07.running.value then (g07.terminal.V.re ^ 2.0 + g07.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16139};
  modelica_real tmp2158;
  modelica_real tmp2159;
  modelica_real tmp2160;
  modelica_boolean tmp2161;
  modelica_real tmp2162;
  tmp2161 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp2161)
  {
    tmp2158 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */);
    tmp2159 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */);
    tmp2160 = (tmp2158 * tmp2158) + (tmp2159 * tmp2159);
    if(tmp2160 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2160, 0.5);
    }
    tmp2162 = sqrt(tmp2160);
  }
  else
  {
    tmp2162 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1300]] /* g07.UPu variable */) = tmp2162;
  threadData->lastEquationSolved = 16139;
}
/*
equation index: 16140
type: SIMPLE_ASSIGN
goverNordic_g07.PGenPu = if g07.running.value then (-g07.terminal.V.re) * g07.terminal.i.re - g07.terminal.V.im * g07.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2040]] /* goverNordic_g07.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 16140;
}
/*
equation index: 16141
type: SIMPLE_ASSIGN
goverNordic_g07.perUnitP.y = goverNordic_g07.perUnitP.k * goverNordic_g07.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2056]] /* goverNordic_g07.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2502]] /* goverNordic_g07.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2040]] /* goverNordic_g07.PGenPu variable */));
  threadData->lastEquationSolved = 16141;
}
/*
equation index: 16142
type: SIMPLE_ASSIGN
$DAEres1320 = goverNordic_g07.firstOrder1.k * goverNordic_g07.perUnitP.y + (-goverNordic_g07.firstOrder1.y) - der(goverNordic_g07.firstOrder1.y) * goverNordic_g07.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16142};
  (data->simulationInfo->daeModeData->residualVars[1320]) /* $DAEres1320 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2480]] /* goverNordic_g07.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2056]] /* goverNordic_g07.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* goverNordic_g07.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* der(goverNordic_g07.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2479]] /* goverNordic_g07.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 16142;
}
/*
equation index: 16143
type: SIMPLE_ASSIGN
g07.PGen = if g07.running.value then 100.0 * goverNordic_g07.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1293]] /* g07.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2040]] /* goverNordic_g07.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16143;
}
/*
equation index: 16144
type: SIMPLE_ASSIGN
g07.QGenPu = if g07.running.value then g07.terminal.V.re * g07.terminal.i.im - g07.terminal.V.im * g07.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1297]] /* g07.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 16144;
}
/*
equation index: 16145
type: SIMPLE_ASSIGN
g07.QGen = if g07.running.value then 100.0 * g07.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1296]] /* g07.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1297]] /* g07.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16145;
}
/*
equation index: 16146
type: SIMPLE_ASSIGN
g07.uStatorPu.im = if g07.running.value then (g07.terminal.V.im + (-100.0) * (g07.terminal.i.re * g07.XTfoPu + g07.terminal.i.im * g07.RTfoPu) / g07.SNom) / g07.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* g07.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* g07.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* g07.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* g07.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* g07.SNom PARAM */),"g07.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[908]] /* g07.rTfoPu PARAM */),"g07.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16146;
}
/*
equation index: 16147
type: SIMPLE_ASSIGN
g07.sStatorPu.re = if g07.running.value then g07.uStatorPu.re * g07.iStatorPu.re + g07.uStatorPu.im * g07.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1322]] /* g07.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16147;
}
/*
equation index: 16148
type: SIMPLE_ASSIGN
g07.sStatorPu.im = if g07.running.value then g07.uStatorPu.im * g07.iStatorPu.re - g07.uStatorPu.re * g07.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1321]] /* g07.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 16148;
}
/*
equation index: 16149
type: SIMPLE_ASSIGN
g07.QStatorPu = if g07.running.value then -g07.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1298]] /* g07.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1321]] /* g07.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16149;
}
/*
equation index: 16150
type: SIMPLE_ASSIGN
g07.QStatorPuQNom = if g07.running.value then 100.0 * g07.QStatorPu / g07.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1299]] /* g07.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1298]] /* g07.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[872]] /* g07.QNomAlt PARAM */),"g07.QNomAlt")):0.0);
  threadData->lastEquationSolved = 16150;
}
/*
equation index: 16151
type: SIMPLE_ASSIGN
vrNordic_g07.UsPu = if g07.running.value then if g07.uStatorPu.re == 0.0 and g07.uStatorPu.im == 0.0 then 0.0 else (g07.uStatorPu.re ^ 2.0 + g07.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16151};
  modelica_real tmp2163;
  modelica_real tmp2164;
  modelica_real tmp2165;
  modelica_boolean tmp2166;
  modelica_real tmp2167;
  modelica_boolean tmp2168;
  modelica_real tmp2169;
  tmp2168 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[494]] /* g07.running.value DISCRETE */);
  if(tmp2168)
  {
    tmp2166 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */) == 0.0));
    if(tmp2166)
    {
      tmp2167 = 0.0;
    }
    else
    {
      tmp2163 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */);
      tmp2164 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */);
      tmp2165 = (tmp2163 * tmp2163) + (tmp2164 * tmp2164);
      if(tmp2165 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2165, 0.5);
      }
      tmp2167 = sqrt(tmp2165);
    }
    tmp2169 = tmp2167;
  }
  else
  {
    tmp2169 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3591]] /* vrNordic_g07.UsPu variable */) = tmp2169;
  threadData->lastEquationSolved = 16151;
}
/*
equation index: 16152
type: SIMPLE_ASSIGN
vrNordic_g07.dU.y = vrNordic_g07.const1.k - vrNordic_g07.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3595]] /* vrNordic_g07.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4606]] /* vrNordic_g07.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3591]] /* vrNordic_g07.UsPu variable */);
  threadData->lastEquationSolved = 16152;
}
/*
equation index: 16153
type: SIMPLE_ASSIGN
vrNordic_g07.add.y = vrNordic_g07.add.k1 * vrNordic_g07.dU.y + vrNordic_g07.add.k2 * vrNordic_g07.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4603]] /* vrNordic_g07.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3595]] /* vrNordic_g07.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4604]] /* vrNordic_g07.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3609]] /* vrNordic_g07.limiter.y variable */));
  threadData->lastEquationSolved = 16153;
}
/*
equation index: 16154
type: SIMPLE_ASSIGN
vrNordic_g07.switch.y = if vrNordic_g07.greaterEqualThreshold.y then vrNordic_g07.gain1.y else vrNordic_g07.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3612]] /* vrNordic_g07.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1033]] /* vrNordic_g07.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3599]] /* vrNordic_g07.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */));
  threadData->lastEquationSolved = 16154;
}
/*
equation index: 16155
type: SIMPLE_ASSIGN
vrNordic_g07.min1.y = if vrNordic_g07.switch.y < vrNordic_g07.add.y then vrNordic_g07.switch.y else vrNordic_g07.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16155};
  modelica_boolean tmp2170;
  modelica_real tmp2171;
  modelica_real tmp2172;
  tmp2171 = 1.0;
  tmp2172 = 1.0;
  relationhysteresis(data, &tmp2170, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3612]] /* vrNordic_g07.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */), tmp2171, tmp2172, 324, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3610]] /* vrNordic_g07.min1.y variable */) = (tmp2170?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3612]] /* vrNordic_g07.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */));
  threadData->lastEquationSolved = 16155;
}
/*
equation index: 16156
type: SIMPLE_ASSIGN
vrNordic_g07.kMulDU.y = vrNordic_g07.kMulDU.k * vrNordic_g07.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3600]] /* vrNordic_g07.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4615]] /* vrNordic_g07.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3610]] /* vrNordic_g07.min1.y variable */));
  threadData->lastEquationSolved = 16156;
}
/*
equation index: 16157
type: SIMPLE_ASSIGN
$DAEres1321 = vrNordic_g07.leadLag.a_end * vrNordic_g07.kMulDU.y + (-vrNordic_g07.leadLag.a[2]) * vrNordic_g07.leadLag.x_scaled[1] - der(vrNordic_g07.leadLag.x_scaled[1]) * vrNordic_g07.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16157};
  (data->simulationInfo->daeModeData->residualVars[1321]) /* $DAEres1321 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4620]] /* vrNordic_g07.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3600]] /* vrNordic_g07.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4619]] /* vrNordic_g07.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* vrNordic_g07.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* der(vrNordic_g07.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4618]] /* vrNordic_g07.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 16157;
}
/*
equation index: 16158
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.y = (vrNordic_g07.leadLag.bb[2] - vrNordic_g07.leadLag.d * vrNordic_g07.leadLag.a[2]) * vrNordic_g07.leadLag.x[1] + vrNordic_g07.leadLag.d * vrNordic_g07.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3602]] /* vrNordic_g07.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4624]] /* vrNordic_g07.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4625]] /* vrNordic_g07.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4619]] /* vrNordic_g07.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3601]] /* vrNordic_g07.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4625]] /* vrNordic_g07.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3600]] /* vrNordic_g07.kMulDU.y variable */));
  threadData->lastEquationSolved = 16158;
}
/*
equation index: 16159
type: SIMPLE_ASSIGN
vrNordic_g07.feedback1.y = vrNordic_g07.leadLag.y - vrNordic_g07.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3597]] /* vrNordic_g07.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3602]] /* vrNordic_g07.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 16159;
}
/*
equation index: 16160
type: SIMPLE_ASSIGN
vrNordic_g07.gain.y = vrNordic_g07.gain.k * vrNordic_g07.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4612]] /* vrNordic_g07.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3597]] /* vrNordic_g07.feedback1.y variable */));
  threadData->lastEquationSolved = 16160;
}
/*
equation index: 16161
type: SIMPLE_ASSIGN
$DAEres1322 = (if vrNordic_g07.limIntegrator.y < vrNordic_g07.limIntegrator.outMin and vrNordic_g07.limIntegrator.k * vrNordic_g07.gain.y < 0.0 or vrNordic_g07.limIntegrator.y > vrNordic_g07.limIntegrator.outMax and vrNordic_g07.limIntegrator.k * vrNordic_g07.gain.y > 0.0 then 0.0 else vrNordic_g07.limIntegrator.k * vrNordic_g07.gain.y) - der(vrNordic_g07.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16161};
  modelica_boolean tmp2173;
  modelica_real tmp2174;
  modelica_real tmp2175;
  modelica_boolean tmp2176;
  modelica_real tmp2177;
  modelica_real tmp2178;
  modelica_boolean tmp2179;
  modelica_real tmp2180;
  modelica_real tmp2181;
  modelica_boolean tmp2182;
  modelica_real tmp2183;
  modelica_real tmp2184;
  tmp2174 = 1.0;
  tmp2175 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4657]] /* vrNordic_g07.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp2173, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4657]] /* vrNordic_g07.limIntegrator.outMin PARAM */), tmp2174, tmp2175, 328, Less, LessZC);
  tmp2177 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */))) * (1.0);
  tmp2178 = 0.0;
  relationhysteresis(data, &tmp2176, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)), 0.0, tmp2177, tmp2178, 329, Less, LessZC);
  tmp2180 = 1.0;
  tmp2181 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4656]] /* vrNordic_g07.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp2179, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4656]] /* vrNordic_g07.limIntegrator.outMax PARAM */), tmp2180, tmp2181, 330, Greater, GreaterZC);
  tmp2183 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */))) * (1.0);
  tmp2184 = 0.0;
  relationhysteresis(data, &tmp2182, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)), 0.0, tmp2183, tmp2184, 331, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1322]) /* $DAEres1322 DAE_RESIDUAL_VAR */ = (((tmp2173 && tmp2176) || (tmp2179 && tmp2182))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* der(vrNordic_g07.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 16161;
}
/*
equation index: 16162
type: SIMPLE_ASSIGN
$whenCondition46 = not pre(g06.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16162};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[400]] /* $whenCondition46 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[490] /* g06.running.value DISCRETE */));
  threadData->lastEquationSolved = 16162;
}
/*
equation index: 16163
type: WHEN

when {} then
  g06.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16163};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[400]] /* $whenCondition46 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[400] /* $whenCondition46 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16163;
}
/*
equation index: 16165
type: SIMPLE_ASSIGN
$whenCondition48 = not g06.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16165};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[412]] /* $whenCondition48 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */));
  threadData->lastEquationSolved = 16165;
}
/*
equation index: 16166
type: SIMPLE_ASSIGN
$whenCondition47 = g06.running.value and not pre(g06.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16166};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[411]] /* $whenCondition47 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[490] /* g06.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16166;
}
/*
equation index: 16167
type: WHEN

when {$whenCondition48} then
  g06.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16167};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[412]] /* $whenCondition48 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[412] /* $whenCondition48 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[11]] /* g06.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[411]] /* $whenCondition47 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[411] /* $whenCondition47 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[11]] /* g06.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16167;
}
/*
equation index: 16169
type: SIMPLE_ASSIGN
g06.converter.u = Integer(g06.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16169};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[10]] /* g06.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[11]] /* g06.state DISCRETE */)));
  threadData->lastEquationSolved = 16169;
}
#if defined(__cplusplus)
}
#endif