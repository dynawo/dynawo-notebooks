#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 12687
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.Y0 = if vrNordic_g15.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g15.leadLag2.u_start * vrNordic_g15.leadLag2.b[2] / vrNordic_g15.leadLag2.a_end else if vrNordic_g15.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g15.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g15.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12687};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5275]] /* vrNordic_g15.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[664]] /* vrNordic_g15.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5284]] /* vrNordic_g15.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5280]] /* vrNordic_g15.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5278]] /* vrNordic_g15.leadLag2.a_end PARAM */),"vrNordic_g15.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[664]] /* vrNordic_g15.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[664]] /* vrNordic_g15.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5286]] /* vrNordic_g15.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12687;
}

/*
equation index: 12688
type: SIMPLE_ASSIGN
vrNordic_g15.limiter.uMin = -vrNordic_g15.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12688};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5292]] /* vrNordic_g15.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5291]] /* vrNordic_g15.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12688;
}

/*
equation index: 12692
type: SIMPLE_ASSIGN
vrNordic_g15.const2.k = vrNordic_g15.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12692};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5239]] /* vrNordic_g15.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5229]] /* vrNordic_g15.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12692;
}

/*
equation index: 12693
type: SIMPLE_ASSIGN
vrNordic_g15.kMulDU.k = vrNordic_g15.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5247]] /* vrNordic_g15.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5231]] /* vrNordic_g15.KTgr PARAM */);
  threadData->lastEquationSolved = 12693;
}

/*
equation index: 12694
type: SIMPLE_ASSIGN
vrNordic_g15.overExcitationLimitation.OelMode = vrNordic_g15.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12694};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5293]] /* vrNordic_g15.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5232]] /* vrNordic_g15.OelMode PARAM */);
  threadData->lastEquationSolved = 12694;
}

/*
equation index: 12695
type: SIMPLE_ASSIGN
vrNordic_g15.limIntegrator.outMax = vrNordic_g15.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5288]] /* vrNordic_g15.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5227]] /* vrNordic_g15.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12695;
}

/*
equation index: 12701
type: SIMPLE_ASSIGN
vrNordic_g15.timer.outMin = vrNordic_g15.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12701};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5303]] /* vrNordic_g15.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5300]] /* vrNordic_g15.tOelMin PARAM */);
  threadData->lastEquationSolved = 12701;
}

/*
equation index: 12706
type: SIMPLE_ASSIGN
vrNordic_g15.timer.y_start = vrNordic_g15.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5304]] /* vrNordic_g15.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5300]] /* vrNordic_g15.tOelMin PARAM */);
  threadData->lastEquationSolved = 12706;
}

/*
equation index: 12708
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.b[1] = vrNordic_g15.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12708};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5253]] /* vrNordic_g15.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5299]] /* vrNordic_g15.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12708;
}

/*
equation index: 12709
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.a[1] = vrNordic_g15.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5250]] /* vrNordic_g15.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5297]] /* vrNordic_g15.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12709;
}

/*
equation index: 12713
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.bb[1] = vrNordic_g15.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12713};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5255]] /* vrNordic_g15.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5253]] /* vrNordic_g15.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12713;
}

/*
equation index: 12714
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.bb[2] = vrNordic_g15.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5256]] /* vrNordic_g15.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5254]] /* vrNordic_g15.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12714;
}

/*
equation index: 12715
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.d = vrNordic_g15.leadLag.bb[1] / vrNordic_g15.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12715};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5257]] /* vrNordic_g15.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5255]] /* vrNordic_g15.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5250]] /* vrNordic_g15.leadLag.a[1] PARAM */),"vrNordic_g15.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12715;
}

/*
equation index: 12716
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.a_end = if vrNordic_g15.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g15.leadLag.a[1] ^ 2.0 + vrNordic_g15.leadLag.a[2] ^ 2.0) then vrNordic_g15.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12716};
  modelica_real tmp331;
  modelica_real tmp332;
  modelica_real tmp333;
  modelica_boolean tmp334;
  tmp331 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5250]] /* vrNordic_g15.leadLag.a[1] PARAM */);
  tmp332 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5251]] /* vrNordic_g15.leadLag.a[2] PARAM */);
  tmp333 = (tmp331 * tmp331) + (tmp332 * tmp332);
  if(!(tmp333 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g15.leadLag.a[1] ^ 2.0 + vrNordic_g15.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp333);
    }
  }tmp334 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5251]] /* vrNordic_g15.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp333)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5252]] /* vrNordic_g15.leadLag.a_end PARAM */) = (tmp334?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5251]] /* vrNordic_g15.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12716;
}

/*
equation index: 12720
type: SIMPLE_ASSIGN
goverNordic_g15.govKp.k = goverNordic_g15.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12720};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2773]] /* goverNordic_g15.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2759]] /* goverNordic_g15.Kp PARAM */);
  threadData->lastEquationSolved = 12720;
}

/*
equation index: 12721
type: SIMPLE_ASSIGN
goverNordic_g15.govKi.k = goverNordic_g15.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12721};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2772]] /* goverNordic_g15.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2758]] /* goverNordic_g15.Ki PARAM */);
  threadData->lastEquationSolved = 12721;
}

/*
equation index: 12725
type: SIMPLE_ASSIGN
goverNordic_g15.dOmegaPlusDroop.k2 = goverNordic_g15.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12725};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* goverNordic_g15.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2757]] /* goverNordic_g15.KSigma PARAM */);
  threadData->lastEquationSolved = 12725;
}

/*
equation index: 12728
type: SIMPLE_ASSIGN
goverNordic_g15.perUnitP.k = 100.0 / goverNordic_g15.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12728};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2790]] /* goverNordic_g15.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2760]] /* goverNordic_g15.PNom PARAM */),"goverNordic_g15.PNom",equationIndexes);
  threadData->lastEquationSolved = 12728;
}

/*
equation index: 12729
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.DuMin = -goverNordic_g15.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12729};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2778]] /* goverNordic_g15.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2777]] /* goverNordic_g15.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12729;
}

/*
equation index: 12730
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limiter.uMax = goverNordic_g15.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12730};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2777]] /* goverNordic_g15.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12730;
}

/*
equation index: 12731
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limiter.uMin = goverNordic_g15.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* goverNordic_g15.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2778]] /* goverNordic_g15.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12731;
}

/*
equation index: 12735
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g15.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12735};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2782]] /* goverNordic_g15.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2789]] /* goverNordic_g15.limRateLimFirstOrder.tS PARAM */),"goverNordic_g15.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12735;
}

/*
equation index: 12736
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g15.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12736};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2780]] /* goverNordic_g15.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12736;
}

/*
equation index: 12737
type: SIMPLE_ASSIGN
goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g15.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12737};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2781]] /* goverNordic_g15.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12737;
}

/*
equation index: 12743
type: SIMPLE_ASSIGN
vrNordic_g16.derivative.k = vrNordic_g16.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12743};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5320]] /* vrNordic_g16.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5309]] /* vrNordic_g16.KPss PARAM */);
  threadData->lastEquationSolved = 12743;
}

/*
equation index: 12744
type: SIMPLE_ASSIGN
vrNordic_g16.derivative.T = vrNordic_g16.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12744};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5319]] /* vrNordic_g16.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5374]] /* vrNordic_g16.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12744;
}

/*
equation index: 12746
type: SIMPLE_ASSIGN
vrNordic_g16.derivative.zeroGain = abs(vrNordic_g16.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12746};
  modelica_boolean tmp335;
  tmp335 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5320]] /* vrNordic_g16.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1026]] /* vrNordic_g16.derivative.zeroGain PARAM */) = tmp335;
  threadData->lastEquationSolved = 12746;
}

/*
equation index: 12747
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.b[1] = vrNordic_g16.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12747};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5345]] /* vrNordic_g16.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5377]] /* vrNordic_g16.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12747;
}

/*
equation index: 12748
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.a[1] = vrNordic_g16.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5342]] /* vrNordic_g16.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5375]] /* vrNordic_g16.tLagPss PARAM */);
  threadData->lastEquationSolved = 12748;
}

/*
equation index: 12752
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.bb[1] = vrNordic_g16.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5347]] /* vrNordic_g16.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5345]] /* vrNordic_g16.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12752;
}

/*
equation index: 12753
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.bb[2] = vrNordic_g16.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12753};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5348]] /* vrNordic_g16.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5346]] /* vrNordic_g16.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12753;
}

/*
equation index: 12754
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.d = vrNordic_g16.leadLag1.bb[1] / vrNordic_g16.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12754};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5349]] /* vrNordic_g16.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5347]] /* vrNordic_g16.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5342]] /* vrNordic_g16.leadLag1.a[1] PARAM */),"vrNordic_g16.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12754;
}

/*
equation index: 12755
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.a_end = if vrNordic_g16.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g16.leadLag1.a[1] ^ 2.0 + vrNordic_g16.leadLag1.a[2] ^ 2.0) then vrNordic_g16.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12755};
  modelica_real tmp336;
  modelica_real tmp337;
  modelica_real tmp338;
  modelica_boolean tmp339;
  tmp336 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5342]] /* vrNordic_g16.leadLag1.a[1] PARAM */);
  tmp337 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5343]] /* vrNordic_g16.leadLag1.a[2] PARAM */);
  tmp338 = (tmp336 * tmp336) + (tmp337 * tmp337);
  if(!(tmp338 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g16.leadLag1.a[1] ^ 2.0 + vrNordic_g16.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp338);
    }
  }tmp339 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5343]] /* vrNordic_g16.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp338)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5344]] /* vrNordic_g16.leadLag1.a_end PARAM */) = (tmp339?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5343]] /* vrNordic_g16.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12755;
}

/*
equation index: 12756
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.X0[1] = if vrNordic_g16.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g16.leadLag1.u_start / vrNordic_g16.leadLag1.a_end else if vrNordic_g16.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g16.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g16.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12756};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5340]] /* vrNordic_g16.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[676]] /* vrNordic_g16.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5350]] /* vrNordic_g16.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5344]] /* vrNordic_g16.leadLag1.a_end PARAM */),"vrNordic_g16.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[676]] /* vrNordic_g16.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[676]] /* vrNordic_g16.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5351]] /* vrNordic_g16.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12756;
}

/*
equation index: 12757
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag1.Y0 = if vrNordic_g16.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g16.leadLag1.u_start * vrNordic_g16.leadLag1.b[2] / vrNordic_g16.leadLag1.a_end else if vrNordic_g16.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g16.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g16.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12757};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5341]] /* vrNordic_g16.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[676]] /* vrNordic_g16.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5350]] /* vrNordic_g16.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5346]] /* vrNordic_g16.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5344]] /* vrNordic_g16.leadLag1.a_end PARAM */),"vrNordic_g16.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[676]] /* vrNordic_g16.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[676]] /* vrNordic_g16.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5352]] /* vrNordic_g16.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12757;
}

/*
equation index: 12758
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.b[1] = vrNordic_g16.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12758};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5358]] /* vrNordic_g16.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5377]] /* vrNordic_g16.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12758;
}

/*
equation index: 12759
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.a[1] = vrNordic_g16.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12759};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5355]] /* vrNordic_g16.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5375]] /* vrNordic_g16.tLagPss PARAM */);
  threadData->lastEquationSolved = 12759;
}

/*
equation index: 12763
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.bb[1] = vrNordic_g16.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12763};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5360]] /* vrNordic_g16.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5358]] /* vrNordic_g16.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12763;
}

/*
equation index: 12764
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.bb[2] = vrNordic_g16.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12764};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5361]] /* vrNordic_g16.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5359]] /* vrNordic_g16.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12764;
}

/*
equation index: 12765
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.d = vrNordic_g16.leadLag2.bb[1] / vrNordic_g16.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12765};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5362]] /* vrNordic_g16.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5360]] /* vrNordic_g16.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5355]] /* vrNordic_g16.leadLag2.a[1] PARAM */),"vrNordic_g16.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12765;
}

/*
equation index: 12766
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.a_end = if vrNordic_g16.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g16.leadLag2.a[1] ^ 2.0 + vrNordic_g16.leadLag2.a[2] ^ 2.0) then vrNordic_g16.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12766};
  modelica_real tmp340;
  modelica_real tmp341;
  modelica_real tmp342;
  modelica_boolean tmp343;
  tmp340 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5355]] /* vrNordic_g16.leadLag2.a[1] PARAM */);
  tmp341 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5356]] /* vrNordic_g16.leadLag2.a[2] PARAM */);
  tmp342 = (tmp340 * tmp340) + (tmp341 * tmp341);
  if(!(tmp342 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g16.leadLag2.a[1] ^ 2.0 + vrNordic_g16.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp342);
    }
  }tmp343 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5356]] /* vrNordic_g16.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp342)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5357]] /* vrNordic_g16.leadLag2.a_end PARAM */) = (tmp343?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5356]] /* vrNordic_g16.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12766;
}

/*
equation index: 12767
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.X0[1] = if vrNordic_g16.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g16.leadLag2.u_start / vrNordic_g16.leadLag2.a_end else if vrNordic_g16.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g16.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g16.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12767};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5353]] /* vrNordic_g16.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[680]] /* vrNordic_g16.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5363]] /* vrNordic_g16.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5357]] /* vrNordic_g16.leadLag2.a_end PARAM */),"vrNordic_g16.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[680]] /* vrNordic_g16.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[680]] /* vrNordic_g16.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5364]] /* vrNordic_g16.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12767;
}

/*
equation index: 12768
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag2.Y0 = if vrNordic_g16.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g16.leadLag2.u_start * vrNordic_g16.leadLag2.b[2] / vrNordic_g16.leadLag2.a_end else if vrNordic_g16.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g16.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g16.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12768};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5354]] /* vrNordic_g16.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[680]] /* vrNordic_g16.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5363]] /* vrNordic_g16.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5359]] /* vrNordic_g16.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5357]] /* vrNordic_g16.leadLag2.a_end PARAM */),"vrNordic_g16.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[680]] /* vrNordic_g16.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[680]] /* vrNordic_g16.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5365]] /* vrNordic_g16.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12768;
}

/*
equation index: 12769
type: SIMPLE_ASSIGN
vrNordic_g16.limiter.uMin = -vrNordic_g16.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12769};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5371]] /* vrNordic_g16.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5370]] /* vrNordic_g16.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12769;
}

/*
equation index: 12773
type: SIMPLE_ASSIGN
vrNordic_g16.const2.k = vrNordic_g16.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12773};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5318]] /* vrNordic_g16.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5308]] /* vrNordic_g16.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12773;
}

/*
equation index: 12774
type: SIMPLE_ASSIGN
vrNordic_g16.kMulDU.k = vrNordic_g16.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12774};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5326]] /* vrNordic_g16.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5310]] /* vrNordic_g16.KTgr PARAM */);
  threadData->lastEquationSolved = 12774;
}

/*
equation index: 12775
type: SIMPLE_ASSIGN
vrNordic_g16.overExcitationLimitation.OelMode = vrNordic_g16.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12775};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5372]] /* vrNordic_g16.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5311]] /* vrNordic_g16.OelMode PARAM */);
  threadData->lastEquationSolved = 12775;
}

/*
equation index: 12776
type: SIMPLE_ASSIGN
vrNordic_g16.limIntegrator.outMax = vrNordic_g16.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12776};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5367]] /* vrNordic_g16.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5306]] /* vrNordic_g16.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12776;
}

/*
equation index: 12782
type: SIMPLE_ASSIGN
vrNordic_g16.timer.outMin = vrNordic_g16.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5382]] /* vrNordic_g16.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5379]] /* vrNordic_g16.tOelMin PARAM */);
  threadData->lastEquationSolved = 12782;
}

/*
equation index: 12787
type: SIMPLE_ASSIGN
vrNordic_g16.timer.y_start = vrNordic_g16.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5383]] /* vrNordic_g16.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5379]] /* vrNordic_g16.tOelMin PARAM */);
  threadData->lastEquationSolved = 12787;
}

/*
equation index: 12789
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.b[1] = vrNordic_g16.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12789};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5332]] /* vrNordic_g16.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5378]] /* vrNordic_g16.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12789;
}

/*
equation index: 12790
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.a[1] = vrNordic_g16.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12790};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5329]] /* vrNordic_g16.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5376]] /* vrNordic_g16.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12790;
}

/*
equation index: 12794
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.bb[1] = vrNordic_g16.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5334]] /* vrNordic_g16.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5332]] /* vrNordic_g16.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12794;
}

/*
equation index: 12795
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.bb[2] = vrNordic_g16.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12795};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5335]] /* vrNordic_g16.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5333]] /* vrNordic_g16.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12795;
}

/*
equation index: 12796
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.d = vrNordic_g16.leadLag.bb[1] / vrNordic_g16.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12796};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5336]] /* vrNordic_g16.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5334]] /* vrNordic_g16.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5329]] /* vrNordic_g16.leadLag.a[1] PARAM */),"vrNordic_g16.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12796;
}

/*
equation index: 12797
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.a_end = if vrNordic_g16.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g16.leadLag.a[1] ^ 2.0 + vrNordic_g16.leadLag.a[2] ^ 2.0) then vrNordic_g16.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12797};
  modelica_real tmp344;
  modelica_real tmp345;
  modelica_real tmp346;
  modelica_boolean tmp347;
  tmp344 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5329]] /* vrNordic_g16.leadLag.a[1] PARAM */);
  tmp345 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5330]] /* vrNordic_g16.leadLag.a[2] PARAM */);
  tmp346 = (tmp344 * tmp344) + (tmp345 * tmp345);
  if(!(tmp346 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g16.leadLag.a[1] ^ 2.0 + vrNordic_g16.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp346);
    }
  }tmp347 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5330]] /* vrNordic_g16.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp346)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5331]] /* vrNordic_g16.leadLag.a_end PARAM */) = (tmp347?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5330]] /* vrNordic_g16.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12797;
}

/*
equation index: 12801
type: SIMPLE_ASSIGN
goverNordic_g16.govKp.k = goverNordic_g16.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12801};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* goverNordic_g16.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2795]] /* goverNordic_g16.Kp PARAM */);
  threadData->lastEquationSolved = 12801;
}

/*
equation index: 12802
type: SIMPLE_ASSIGN
goverNordic_g16.govKi.k = goverNordic_g16.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12802};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* goverNordic_g16.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2794]] /* goverNordic_g16.Ki PARAM */);
  threadData->lastEquationSolved = 12802;
}

/*
equation index: 12806
type: SIMPLE_ASSIGN
goverNordic_g16.dOmegaPlusDroop.k2 = goverNordic_g16.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2802]] /* goverNordic_g16.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2793]] /* goverNordic_g16.KSigma PARAM */);
  threadData->lastEquationSolved = 12806;
}

/*
equation index: 12809
type: SIMPLE_ASSIGN
goverNordic_g16.perUnitP.k = 100.0 / goverNordic_g16.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12809};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2826]] /* goverNordic_g16.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2796]] /* goverNordic_g16.PNom PARAM */),"goverNordic_g16.PNom",equationIndexes);
  threadData->lastEquationSolved = 12809;
}

/*
equation index: 12810
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.DuMin = -goverNordic_g16.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* goverNordic_g16.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* goverNordic_g16.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12810;
}

/*
equation index: 12811
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limiter.uMax = goverNordic_g16.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12811};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* goverNordic_g16.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12811;
}

/*
equation index: 12812
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limiter.uMin = goverNordic_g16.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12812};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* goverNordic_g16.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* goverNordic_g16.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12812;
}

/*
equation index: 12816
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g16.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2818]] /* goverNordic_g16.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2825]] /* goverNordic_g16.limRateLimFirstOrder.tS PARAM */),"goverNordic_g16.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12816;
}

/*
equation index: 12817
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g16.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12817};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2816]] /* goverNordic_g16.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12817;
}

/*
equation index: 12818
type: SIMPLE_ASSIGN
goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g16.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12818};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2817]] /* goverNordic_g16.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12818;
}

/*
equation index: 12824
type: SIMPLE_ASSIGN
vrNordic_g17.derivative.k = vrNordic_g17.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5399]] /* vrNordic_g17.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5388]] /* vrNordic_g17.KPss PARAM */);
  threadData->lastEquationSolved = 12824;
}

/*
equation index: 12825
type: SIMPLE_ASSIGN
vrNordic_g17.derivative.T = vrNordic_g17.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12825};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5398]] /* vrNordic_g17.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5453]] /* vrNordic_g17.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12825;
}

/*
equation index: 12827
type: SIMPLE_ASSIGN
vrNordic_g17.derivative.zeroGain = abs(vrNordic_g17.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12827};
  modelica_boolean tmp348;
  tmp348 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5399]] /* vrNordic_g17.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1037]] /* vrNordic_g17.derivative.zeroGain PARAM */) = tmp348;
  threadData->lastEquationSolved = 12827;
}

/*
equation index: 12828
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.b[1] = vrNordic_g17.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12828};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5424]] /* vrNordic_g17.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5456]] /* vrNordic_g17.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12828;
}

/*
equation index: 12829
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.a[1] = vrNordic_g17.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12829};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5421]] /* vrNordic_g17.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5454]] /* vrNordic_g17.tLagPss PARAM */);
  threadData->lastEquationSolved = 12829;
}

/*
equation index: 12833
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.bb[1] = vrNordic_g17.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12833};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5426]] /* vrNordic_g17.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5424]] /* vrNordic_g17.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12833;
}

/*
equation index: 12834
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.bb[2] = vrNordic_g17.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5427]] /* vrNordic_g17.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5425]] /* vrNordic_g17.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12834;
}

/*
equation index: 12835
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.d = vrNordic_g17.leadLag1.bb[1] / vrNordic_g17.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12835};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5428]] /* vrNordic_g17.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5426]] /* vrNordic_g17.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5421]] /* vrNordic_g17.leadLag1.a[1] PARAM */),"vrNordic_g17.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12835;
}

/*
equation index: 12836
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.a_end = if vrNordic_g17.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g17.leadLag1.a[1] ^ 2.0 + vrNordic_g17.leadLag1.a[2] ^ 2.0) then vrNordic_g17.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12836};
  modelica_real tmp349;
  modelica_real tmp350;
  modelica_real tmp351;
  modelica_boolean tmp352;
  tmp349 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5421]] /* vrNordic_g17.leadLag1.a[1] PARAM */);
  tmp350 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5422]] /* vrNordic_g17.leadLag1.a[2] PARAM */);
  tmp351 = (tmp349 * tmp349) + (tmp350 * tmp350);
  if(!(tmp351 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g17.leadLag1.a[1] ^ 2.0 + vrNordic_g17.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp351);
    }
  }tmp352 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5422]] /* vrNordic_g17.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp351)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5423]] /* vrNordic_g17.leadLag1.a_end PARAM */) = (tmp352?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5422]] /* vrNordic_g17.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12836;
}

/*
equation index: 12837
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.X0[1] = if vrNordic_g17.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g17.leadLag1.u_start / vrNordic_g17.leadLag1.a_end else if vrNordic_g17.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g17.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g17.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12837};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5419]] /* vrNordic_g17.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[692]] /* vrNordic_g17.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5429]] /* vrNordic_g17.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5423]] /* vrNordic_g17.leadLag1.a_end PARAM */),"vrNordic_g17.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[692]] /* vrNordic_g17.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[692]] /* vrNordic_g17.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5430]] /* vrNordic_g17.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12837;
}

/*
equation index: 12838
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag1.Y0 = if vrNordic_g17.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g17.leadLag1.u_start * vrNordic_g17.leadLag1.b[2] / vrNordic_g17.leadLag1.a_end else if vrNordic_g17.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g17.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g17.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5420]] /* vrNordic_g17.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[692]] /* vrNordic_g17.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5429]] /* vrNordic_g17.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5425]] /* vrNordic_g17.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5423]] /* vrNordic_g17.leadLag1.a_end PARAM */),"vrNordic_g17.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[692]] /* vrNordic_g17.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[692]] /* vrNordic_g17.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5431]] /* vrNordic_g17.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12838;
}

/*
equation index: 12839
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.b[1] = vrNordic_g17.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5437]] /* vrNordic_g17.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5456]] /* vrNordic_g17.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12839;
}

/*
equation index: 12840
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.a[1] = vrNordic_g17.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12840};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5434]] /* vrNordic_g17.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5454]] /* vrNordic_g17.tLagPss PARAM */);
  threadData->lastEquationSolved = 12840;
}

/*
equation index: 12844
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.bb[1] = vrNordic_g17.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12844};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5439]] /* vrNordic_g17.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5437]] /* vrNordic_g17.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12844;
}

/*
equation index: 12845
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.bb[2] = vrNordic_g17.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12845};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5440]] /* vrNordic_g17.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5438]] /* vrNordic_g17.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12845;
}

/*
equation index: 12846
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.d = vrNordic_g17.leadLag2.bb[1] / vrNordic_g17.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12846};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5441]] /* vrNordic_g17.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5439]] /* vrNordic_g17.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5434]] /* vrNordic_g17.leadLag2.a[1] PARAM */),"vrNordic_g17.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12846;
}

/*
equation index: 12847
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.a_end = if vrNordic_g17.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g17.leadLag2.a[1] ^ 2.0 + vrNordic_g17.leadLag2.a[2] ^ 2.0) then vrNordic_g17.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12847};
  modelica_real tmp353;
  modelica_real tmp354;
  modelica_real tmp355;
  modelica_boolean tmp356;
  tmp353 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5434]] /* vrNordic_g17.leadLag2.a[1] PARAM */);
  tmp354 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5435]] /* vrNordic_g17.leadLag2.a[2] PARAM */);
  tmp355 = (tmp353 * tmp353) + (tmp354 * tmp354);
  if(!(tmp355 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g17.leadLag2.a[1] ^ 2.0 + vrNordic_g17.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp355);
    }
  }tmp356 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5435]] /* vrNordic_g17.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp355)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5436]] /* vrNordic_g17.leadLag2.a_end PARAM */) = (tmp356?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5435]] /* vrNordic_g17.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12847;
}

/*
equation index: 12848
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.X0[1] = if vrNordic_g17.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g17.leadLag2.u_start / vrNordic_g17.leadLag2.a_end else if vrNordic_g17.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g17.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g17.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12848};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5432]] /* vrNordic_g17.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[696]] /* vrNordic_g17.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5442]] /* vrNordic_g17.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5436]] /* vrNordic_g17.leadLag2.a_end PARAM */),"vrNordic_g17.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[696]] /* vrNordic_g17.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[696]] /* vrNordic_g17.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5443]] /* vrNordic_g17.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12848;
}

/*
equation index: 12849
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag2.Y0 = if vrNordic_g17.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g17.leadLag2.u_start * vrNordic_g17.leadLag2.b[2] / vrNordic_g17.leadLag2.a_end else if vrNordic_g17.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g17.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g17.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12849};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5433]] /* vrNordic_g17.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[696]] /* vrNordic_g17.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5442]] /* vrNordic_g17.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5438]] /* vrNordic_g17.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5436]] /* vrNordic_g17.leadLag2.a_end PARAM */),"vrNordic_g17.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[696]] /* vrNordic_g17.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[696]] /* vrNordic_g17.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5444]] /* vrNordic_g17.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12849;
}

/*
equation index: 12850
type: SIMPLE_ASSIGN
vrNordic_g17.limiter.uMin = -vrNordic_g17.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5450]] /* vrNordic_g17.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5449]] /* vrNordic_g17.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12850;
}

/*
equation index: 12854
type: SIMPLE_ASSIGN
vrNordic_g17.const2.k = vrNordic_g17.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12854};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5397]] /* vrNordic_g17.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5387]] /* vrNordic_g17.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12854;
}

/*
equation index: 12855
type: SIMPLE_ASSIGN
vrNordic_g17.kMulDU.k = vrNordic_g17.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12855};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5405]] /* vrNordic_g17.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5389]] /* vrNordic_g17.KTgr PARAM */);
  threadData->lastEquationSolved = 12855;
}

/*
equation index: 12856
type: SIMPLE_ASSIGN
vrNordic_g17.overExcitationLimitation.OelMode = vrNordic_g17.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12856};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5451]] /* vrNordic_g17.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5390]] /* vrNordic_g17.OelMode PARAM */);
  threadData->lastEquationSolved = 12856;
}

/*
equation index: 12857
type: SIMPLE_ASSIGN
vrNordic_g17.limIntegrator.outMax = vrNordic_g17.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5446]] /* vrNordic_g17.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5385]] /* vrNordic_g17.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12857;
}

/*
equation index: 12863
type: SIMPLE_ASSIGN
vrNordic_g17.timer.outMin = vrNordic_g17.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12863};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5461]] /* vrNordic_g17.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5458]] /* vrNordic_g17.tOelMin PARAM */);
  threadData->lastEquationSolved = 12863;
}

/*
equation index: 12868
type: SIMPLE_ASSIGN
vrNordic_g17.timer.y_start = vrNordic_g17.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12868};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5462]] /* vrNordic_g17.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5458]] /* vrNordic_g17.tOelMin PARAM */);
  threadData->lastEquationSolved = 12868;
}

/*
equation index: 12870
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.b[1] = vrNordic_g17.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12870};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5411]] /* vrNordic_g17.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5457]] /* vrNordic_g17.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12870;
}

/*
equation index: 12871
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.a[1] = vrNordic_g17.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12871};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5408]] /* vrNordic_g17.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5455]] /* vrNordic_g17.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12871;
}

/*
equation index: 12875
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.bb[1] = vrNordic_g17.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12875};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5413]] /* vrNordic_g17.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5411]] /* vrNordic_g17.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12875;
}

/*
equation index: 12876
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.bb[2] = vrNordic_g17.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12876};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5414]] /* vrNordic_g17.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5412]] /* vrNordic_g17.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12876;
}

/*
equation index: 12877
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.d = vrNordic_g17.leadLag.bb[1] / vrNordic_g17.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12877};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5415]] /* vrNordic_g17.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5413]] /* vrNordic_g17.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5408]] /* vrNordic_g17.leadLag.a[1] PARAM */),"vrNordic_g17.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12877;
}

/*
equation index: 12878
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.a_end = if vrNordic_g17.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g17.leadLag.a[1] ^ 2.0 + vrNordic_g17.leadLag.a[2] ^ 2.0) then vrNordic_g17.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12878};
  modelica_real tmp357;
  modelica_real tmp358;
  modelica_real tmp359;
  modelica_boolean tmp360;
  tmp357 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5408]] /* vrNordic_g17.leadLag.a[1] PARAM */);
  tmp358 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5409]] /* vrNordic_g17.leadLag.a[2] PARAM */);
  tmp359 = (tmp357 * tmp357) + (tmp358 * tmp358);
  if(!(tmp359 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g17.leadLag.a[1] ^ 2.0 + vrNordic_g17.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp359);
    }
  }tmp360 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5409]] /* vrNordic_g17.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp359)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5410]] /* vrNordic_g17.leadLag.a_end PARAM */) = (tmp360?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5409]] /* vrNordic_g17.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12878;
}

/*
equation index: 12882
type: SIMPLE_ASSIGN
goverNordic_g17.govKp.k = goverNordic_g17.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12882};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* goverNordic_g17.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2831]] /* goverNordic_g17.Kp PARAM */);
  threadData->lastEquationSolved = 12882;
}

/*
equation index: 12883
type: SIMPLE_ASSIGN
goverNordic_g17.govKi.k = goverNordic_g17.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12883};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* goverNordic_g17.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2830]] /* goverNordic_g17.Ki PARAM */);
  threadData->lastEquationSolved = 12883;
}

/*
equation index: 12887
type: SIMPLE_ASSIGN
goverNordic_g17.dOmegaPlusDroop.k2 = goverNordic_g17.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12887};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2838]] /* goverNordic_g17.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2829]] /* goverNordic_g17.KSigma PARAM */);
  threadData->lastEquationSolved = 12887;
}

/*
equation index: 12890
type: SIMPLE_ASSIGN
goverNordic_g17.perUnitP.k = 100.0 / goverNordic_g17.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12890};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2862]] /* goverNordic_g17.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2832]] /* goverNordic_g17.PNom PARAM */),"goverNordic_g17.PNom",equationIndexes);
  threadData->lastEquationSolved = 12890;
}

/*
equation index: 12891
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.DuMin = -goverNordic_g17.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12891};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2850]] /* goverNordic_g17.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2849]] /* goverNordic_g17.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12891;
}

/*
equation index: 12892
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limiter.uMax = goverNordic_g17.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12892};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2849]] /* goverNordic_g17.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12892;
}

/*
equation index: 12893
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limiter.uMin = goverNordic_g17.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12893};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2860]] /* goverNordic_g17.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2850]] /* goverNordic_g17.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12893;
}

/*
equation index: 12897
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g17.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12897};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2854]] /* goverNordic_g17.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2861]] /* goverNordic_g17.limRateLimFirstOrder.tS PARAM */),"goverNordic_g17.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12897;
}

/*
equation index: 12898
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g17.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12898};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2856]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2852]] /* goverNordic_g17.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12898;
}

/*
equation index: 12899
type: SIMPLE_ASSIGN
goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g17.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12899};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2853]] /* goverNordic_g17.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12899;
}

/*
equation index: 12905
type: SIMPLE_ASSIGN
vrNordic_g18.derivative.k = vrNordic_g18.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12905};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5478]] /* vrNordic_g18.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5467]] /* vrNordic_g18.KPss PARAM */);
  threadData->lastEquationSolved = 12905;
}

/*
equation index: 12906
type: SIMPLE_ASSIGN
vrNordic_g18.derivative.T = vrNordic_g18.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12906};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5477]] /* vrNordic_g18.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5532]] /* vrNordic_g18.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12906;
}

/*
equation index: 12908
type: SIMPLE_ASSIGN
vrNordic_g18.derivative.zeroGain = abs(vrNordic_g18.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12908};
  modelica_boolean tmp361;
  tmp361 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5478]] /* vrNordic_g18.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1048]] /* vrNordic_g18.derivative.zeroGain PARAM */) = tmp361;
  threadData->lastEquationSolved = 12908;
}

/*
equation index: 12909
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.b[1] = vrNordic_g18.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12909};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5503]] /* vrNordic_g18.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5535]] /* vrNordic_g18.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12909;
}

/*
equation index: 12910
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.a[1] = vrNordic_g18.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5500]] /* vrNordic_g18.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5533]] /* vrNordic_g18.tLagPss PARAM */);
  threadData->lastEquationSolved = 12910;
}

/*
equation index: 12914
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.bb[1] = vrNordic_g18.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12914};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5505]] /* vrNordic_g18.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5503]] /* vrNordic_g18.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12914;
}

/*
equation index: 12915
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.bb[2] = vrNordic_g18.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12915};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5506]] /* vrNordic_g18.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5504]] /* vrNordic_g18.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12915;
}

/*
equation index: 12916
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.d = vrNordic_g18.leadLag1.bb[1] / vrNordic_g18.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12916};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5507]] /* vrNordic_g18.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5505]] /* vrNordic_g18.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5500]] /* vrNordic_g18.leadLag1.a[1] PARAM */),"vrNordic_g18.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12916;
}

/*
equation index: 12917
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.a_end = if vrNordic_g18.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g18.leadLag1.a[1] ^ 2.0 + vrNordic_g18.leadLag1.a[2] ^ 2.0) then vrNordic_g18.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12917};
  modelica_real tmp362;
  modelica_real tmp363;
  modelica_real tmp364;
  modelica_boolean tmp365;
  tmp362 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5500]] /* vrNordic_g18.leadLag1.a[1] PARAM */);
  tmp363 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5501]] /* vrNordic_g18.leadLag1.a[2] PARAM */);
  tmp364 = (tmp362 * tmp362) + (tmp363 * tmp363);
  if(!(tmp364 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g18.leadLag1.a[1] ^ 2.0 + vrNordic_g18.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp364);
    }
  }tmp365 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5501]] /* vrNordic_g18.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp364)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5502]] /* vrNordic_g18.leadLag1.a_end PARAM */) = (tmp365?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5501]] /* vrNordic_g18.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12917;
}

/*
equation index: 12918
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.X0[1] = if vrNordic_g18.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g18.leadLag1.u_start / vrNordic_g18.leadLag1.a_end else if vrNordic_g18.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g18.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g18.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5498]] /* vrNordic_g18.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[708]] /* vrNordic_g18.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5508]] /* vrNordic_g18.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5502]] /* vrNordic_g18.leadLag1.a_end PARAM */),"vrNordic_g18.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[708]] /* vrNordic_g18.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[708]] /* vrNordic_g18.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5509]] /* vrNordic_g18.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12918;
}

/*
equation index: 12919
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag1.Y0 = if vrNordic_g18.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g18.leadLag1.u_start * vrNordic_g18.leadLag1.b[2] / vrNordic_g18.leadLag1.a_end else if vrNordic_g18.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g18.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g18.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12919};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5499]] /* vrNordic_g18.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[708]] /* vrNordic_g18.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5508]] /* vrNordic_g18.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5504]] /* vrNordic_g18.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5502]] /* vrNordic_g18.leadLag1.a_end PARAM */),"vrNordic_g18.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[708]] /* vrNordic_g18.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[708]] /* vrNordic_g18.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5510]] /* vrNordic_g18.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12919;
}

/*
equation index: 12920
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.b[1] = vrNordic_g18.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5516]] /* vrNordic_g18.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5535]] /* vrNordic_g18.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12920;
}

/*
equation index: 12921
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.a[1] = vrNordic_g18.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12921};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5513]] /* vrNordic_g18.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5533]] /* vrNordic_g18.tLagPss PARAM */);
  threadData->lastEquationSolved = 12921;
}

/*
equation index: 12925
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.bb[1] = vrNordic_g18.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12925};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5518]] /* vrNordic_g18.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5516]] /* vrNordic_g18.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12925;
}

/*
equation index: 12926
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.bb[2] = vrNordic_g18.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12926};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5519]] /* vrNordic_g18.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5517]] /* vrNordic_g18.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12926;
}

/*
equation index: 12927
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.d = vrNordic_g18.leadLag2.bb[1] / vrNordic_g18.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5520]] /* vrNordic_g18.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5518]] /* vrNordic_g18.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5513]] /* vrNordic_g18.leadLag2.a[1] PARAM */),"vrNordic_g18.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12927;
}

/*
equation index: 12928
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.a_end = if vrNordic_g18.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g18.leadLag2.a[1] ^ 2.0 + vrNordic_g18.leadLag2.a[2] ^ 2.0) then vrNordic_g18.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12928};
  modelica_real tmp366;
  modelica_real tmp367;
  modelica_real tmp368;
  modelica_boolean tmp369;
  tmp366 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5513]] /* vrNordic_g18.leadLag2.a[1] PARAM */);
  tmp367 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5514]] /* vrNordic_g18.leadLag2.a[2] PARAM */);
  tmp368 = (tmp366 * tmp366) + (tmp367 * tmp367);
  if(!(tmp368 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g18.leadLag2.a[1] ^ 2.0 + vrNordic_g18.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp368);
    }
  }tmp369 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5514]] /* vrNordic_g18.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp368)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5515]] /* vrNordic_g18.leadLag2.a_end PARAM */) = (tmp369?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5514]] /* vrNordic_g18.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12928;
}

/*
equation index: 12929
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.X0[1] = if vrNordic_g18.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g18.leadLag2.u_start / vrNordic_g18.leadLag2.a_end else if vrNordic_g18.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g18.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g18.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5511]] /* vrNordic_g18.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[712]] /* vrNordic_g18.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5521]] /* vrNordic_g18.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5515]] /* vrNordic_g18.leadLag2.a_end PARAM */),"vrNordic_g18.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[712]] /* vrNordic_g18.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[712]] /* vrNordic_g18.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5522]] /* vrNordic_g18.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12929;
}

/*
equation index: 12930
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag2.Y0 = if vrNordic_g18.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g18.leadLag2.u_start * vrNordic_g18.leadLag2.b[2] / vrNordic_g18.leadLag2.a_end else if vrNordic_g18.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g18.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g18.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12930};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5512]] /* vrNordic_g18.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[712]] /* vrNordic_g18.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5521]] /* vrNordic_g18.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5517]] /* vrNordic_g18.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5515]] /* vrNordic_g18.leadLag2.a_end PARAM */),"vrNordic_g18.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[712]] /* vrNordic_g18.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[712]] /* vrNordic_g18.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5523]] /* vrNordic_g18.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12930;
}

/*
equation index: 12931
type: SIMPLE_ASSIGN
vrNordic_g18.limiter.uMin = -vrNordic_g18.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12931};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5529]] /* vrNordic_g18.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5528]] /* vrNordic_g18.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12931;
}

/*
equation index: 12935
type: SIMPLE_ASSIGN
vrNordic_g18.const2.k = vrNordic_g18.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12935};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5476]] /* vrNordic_g18.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5466]] /* vrNordic_g18.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12935;
}

/*
equation index: 12936
type: SIMPLE_ASSIGN
vrNordic_g18.kMulDU.k = vrNordic_g18.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12936};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5484]] /* vrNordic_g18.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5468]] /* vrNordic_g18.KTgr PARAM */);
  threadData->lastEquationSolved = 12936;
}

/*
equation index: 12937
type: SIMPLE_ASSIGN
vrNordic_g18.overExcitationLimitation.OelMode = vrNordic_g18.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12937};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5530]] /* vrNordic_g18.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5469]] /* vrNordic_g18.OelMode PARAM */);
  threadData->lastEquationSolved = 12937;
}

/*
equation index: 12938
type: SIMPLE_ASSIGN
vrNordic_g18.limIntegrator.outMax = vrNordic_g18.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12938};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5525]] /* vrNordic_g18.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5464]] /* vrNordic_g18.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12938;
}

/*
equation index: 12944
type: SIMPLE_ASSIGN
vrNordic_g18.timer.outMin = vrNordic_g18.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12944};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5540]] /* vrNordic_g18.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5537]] /* vrNordic_g18.tOelMin PARAM */);
  threadData->lastEquationSolved = 12944;
}

/*
equation index: 12949
type: SIMPLE_ASSIGN
vrNordic_g18.timer.y_start = vrNordic_g18.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12949};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5541]] /* vrNordic_g18.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5537]] /* vrNordic_g18.tOelMin PARAM */);
  threadData->lastEquationSolved = 12949;
}

/*
equation index: 12951
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.b[1] = vrNordic_g18.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12951};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5490]] /* vrNordic_g18.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5536]] /* vrNordic_g18.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12951;
}

/*
equation index: 12952
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.a[1] = vrNordic_g18.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12952};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5487]] /* vrNordic_g18.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5534]] /* vrNordic_g18.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12952;
}

/*
equation index: 12956
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.bb[1] = vrNordic_g18.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12956};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5492]] /* vrNordic_g18.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5490]] /* vrNordic_g18.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12956;
}

/*
equation index: 12957
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.bb[2] = vrNordic_g18.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12957};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5493]] /* vrNordic_g18.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5491]] /* vrNordic_g18.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12957;
}

/*
equation index: 12958
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.d = vrNordic_g18.leadLag.bb[1] / vrNordic_g18.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12958};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5494]] /* vrNordic_g18.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5492]] /* vrNordic_g18.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5487]] /* vrNordic_g18.leadLag.a[1] PARAM */),"vrNordic_g18.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12958;
}

/*
equation index: 12959
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.a_end = if vrNordic_g18.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g18.leadLag.a[1] ^ 2.0 + vrNordic_g18.leadLag.a[2] ^ 2.0) then vrNordic_g18.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12959};
  modelica_real tmp370;
  modelica_real tmp371;
  modelica_real tmp372;
  modelica_boolean tmp373;
  tmp370 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5487]] /* vrNordic_g18.leadLag.a[1] PARAM */);
  tmp371 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5488]] /* vrNordic_g18.leadLag.a[2] PARAM */);
  tmp372 = (tmp370 * tmp370) + (tmp371 * tmp371);
  if(!(tmp372 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g18.leadLag.a[1] ^ 2.0 + vrNordic_g18.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp372);
    }
  }tmp373 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5488]] /* vrNordic_g18.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp372)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5489]] /* vrNordic_g18.leadLag.a_end PARAM */) = (tmp373?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5488]] /* vrNordic_g18.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12959;
}

/*
equation index: 12963
type: SIMPLE_ASSIGN
goverNordic_g18.govKp.k = goverNordic_g18.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12963};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2881]] /* goverNordic_g18.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2867]] /* goverNordic_g18.Kp PARAM */);
  threadData->lastEquationSolved = 12963;
}

/*
equation index: 12964
type: SIMPLE_ASSIGN
goverNordic_g18.govKi.k = goverNordic_g18.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12964};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2880]] /* goverNordic_g18.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2866]] /* goverNordic_g18.Ki PARAM */);
  threadData->lastEquationSolved = 12964;
}

/*
equation index: 12968
type: SIMPLE_ASSIGN
goverNordic_g18.dOmegaPlusDroop.k2 = goverNordic_g18.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2874]] /* goverNordic_g18.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2865]] /* goverNordic_g18.KSigma PARAM */);
  threadData->lastEquationSolved = 12968;
}

/*
equation index: 12971
type: SIMPLE_ASSIGN
goverNordic_g18.perUnitP.k = 100.0 / goverNordic_g18.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12971};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* goverNordic_g18.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2868]] /* goverNordic_g18.PNom PARAM */),"goverNordic_g18.PNom",equationIndexes);
  threadData->lastEquationSolved = 12971;
}

/*
equation index: 12972
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.DuMin = -goverNordic_g18.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12972};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2886]] /* goverNordic_g18.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2885]] /* goverNordic_g18.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12972;
}

/*
equation index: 12973
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limiter.uMax = goverNordic_g18.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12973};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2885]] /* goverNordic_g18.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12973;
}

/*
equation index: 12974
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limiter.uMin = goverNordic_g18.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12974};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* goverNordic_g18.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2886]] /* goverNordic_g18.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12974;
}

/*
equation index: 12978
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g18.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12978};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2890]] /* goverNordic_g18.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* goverNordic_g18.limRateLimFirstOrder.tS PARAM */),"goverNordic_g18.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12978;
}

/*
equation index: 12979
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g18.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12979};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2888]] /* goverNordic_g18.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12979;
}

/*
equation index: 12980
type: SIMPLE_ASSIGN
goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g18.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12980};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2889]] /* goverNordic_g18.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12980;
}

/*
equation index: 12986
type: SIMPLE_ASSIGN
vrNordic_g19.derivative.k = vrNordic_g19.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12986};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5557]] /* vrNordic_g19.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5546]] /* vrNordic_g19.KPss PARAM */);
  threadData->lastEquationSolved = 12986;
}

/*
equation index: 12987
type: SIMPLE_ASSIGN
vrNordic_g19.derivative.T = vrNordic_g19.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12987};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5556]] /* vrNordic_g19.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5611]] /* vrNordic_g19.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12987;
}

/*
equation index: 12989
type: SIMPLE_ASSIGN
vrNordic_g19.derivative.zeroGain = abs(vrNordic_g19.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12989};
  modelica_boolean tmp374;
  tmp374 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5557]] /* vrNordic_g19.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1059]] /* vrNordic_g19.derivative.zeroGain PARAM */) = tmp374;
  threadData->lastEquationSolved = 12989;
}

/*
equation index: 12990
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.b[1] = vrNordic_g19.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12990};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5582]] /* vrNordic_g19.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5614]] /* vrNordic_g19.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12990;
}

/*
equation index: 12991
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.a[1] = vrNordic_g19.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12991};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5579]] /* vrNordic_g19.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5612]] /* vrNordic_g19.tLagPss PARAM */);
  threadData->lastEquationSolved = 12991;
}

/*
equation index: 12995
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.bb[1] = vrNordic_g19.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12995};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5584]] /* vrNordic_g19.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5582]] /* vrNordic_g19.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12995;
}

/*
equation index: 12996
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.bb[2] = vrNordic_g19.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12996};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5585]] /* vrNordic_g19.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5583]] /* vrNordic_g19.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12996;
}

/*
equation index: 12997
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.d = vrNordic_g19.leadLag1.bb[1] / vrNordic_g19.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12997};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5586]] /* vrNordic_g19.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5584]] /* vrNordic_g19.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5579]] /* vrNordic_g19.leadLag1.a[1] PARAM */),"vrNordic_g19.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12997;
}

/*
equation index: 12998
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.a_end = if vrNordic_g19.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g19.leadLag1.a[1] ^ 2.0 + vrNordic_g19.leadLag1.a[2] ^ 2.0) then vrNordic_g19.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12998};
  modelica_real tmp375;
  modelica_real tmp376;
  modelica_real tmp377;
  modelica_boolean tmp378;
  tmp375 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5579]] /* vrNordic_g19.leadLag1.a[1] PARAM */);
  tmp376 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5580]] /* vrNordic_g19.leadLag1.a[2] PARAM */);
  tmp377 = (tmp375 * tmp375) + (tmp376 * tmp376);
  if(!(tmp377 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g19.leadLag1.a[1] ^ 2.0 + vrNordic_g19.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp377);
    }
  }tmp378 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5580]] /* vrNordic_g19.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp377)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5581]] /* vrNordic_g19.leadLag1.a_end PARAM */) = (tmp378?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5580]] /* vrNordic_g19.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12998;
}

/*
equation index: 12999
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.X0[1] = if vrNordic_g19.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g19.leadLag1.u_start / vrNordic_g19.leadLag1.a_end else if vrNordic_g19.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g19.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g19.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12999};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5577]] /* vrNordic_g19.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[724]] /* vrNordic_g19.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5587]] /* vrNordic_g19.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5581]] /* vrNordic_g19.leadLag1.a_end PARAM */),"vrNordic_g19.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[724]] /* vrNordic_g19.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[724]] /* vrNordic_g19.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5588]] /* vrNordic_g19.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12999;
}

/*
equation index: 13000
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag1.Y0 = if vrNordic_g19.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g19.leadLag1.u_start * vrNordic_g19.leadLag1.b[2] / vrNordic_g19.leadLag1.a_end else if vrNordic_g19.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g19.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g19.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13000};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5578]] /* vrNordic_g19.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[724]] /* vrNordic_g19.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5587]] /* vrNordic_g19.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5583]] /* vrNordic_g19.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5581]] /* vrNordic_g19.leadLag1.a_end PARAM */),"vrNordic_g19.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[724]] /* vrNordic_g19.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[724]] /* vrNordic_g19.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5589]] /* vrNordic_g19.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 13000;
}

/*
equation index: 13001
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.b[1] = vrNordic_g19.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13001};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5595]] /* vrNordic_g19.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5614]] /* vrNordic_g19.tLeadPss PARAM */);
  threadData->lastEquationSolved = 13001;
}

/*
equation index: 13002
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.a[1] = vrNordic_g19.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13002};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5592]] /* vrNordic_g19.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5612]] /* vrNordic_g19.tLagPss PARAM */);
  threadData->lastEquationSolved = 13002;
}

/*
equation index: 13006
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.bb[1] = vrNordic_g19.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13006};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5597]] /* vrNordic_g19.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5595]] /* vrNordic_g19.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 13006;
}

/*
equation index: 13007
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.bb[2] = vrNordic_g19.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13007};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5598]] /* vrNordic_g19.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5596]] /* vrNordic_g19.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 13007;
}

/*
equation index: 13008
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.d = vrNordic_g19.leadLag2.bb[1] / vrNordic_g19.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13008};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5599]] /* vrNordic_g19.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5597]] /* vrNordic_g19.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5592]] /* vrNordic_g19.leadLag2.a[1] PARAM */),"vrNordic_g19.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 13008;
}

/*
equation index: 13009
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.a_end = if vrNordic_g19.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g19.leadLag2.a[1] ^ 2.0 + vrNordic_g19.leadLag2.a[2] ^ 2.0) then vrNordic_g19.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13009};
  modelica_real tmp379;
  modelica_real tmp380;
  modelica_real tmp381;
  modelica_boolean tmp382;
  tmp379 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5592]] /* vrNordic_g19.leadLag2.a[1] PARAM */);
  tmp380 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5593]] /* vrNordic_g19.leadLag2.a[2] PARAM */);
  tmp381 = (tmp379 * tmp379) + (tmp380 * tmp380);
  if(!(tmp381 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g19.leadLag2.a[1] ^ 2.0 + vrNordic_g19.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp381);
    }
  }tmp382 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5593]] /* vrNordic_g19.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp381)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5594]] /* vrNordic_g19.leadLag2.a_end PARAM */) = (tmp382?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5593]] /* vrNordic_g19.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 13009;
}

/*
equation index: 13010
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.X0[1] = if vrNordic_g19.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g19.leadLag2.u_start / vrNordic_g19.leadLag2.a_end else if vrNordic_g19.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g19.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g19.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13010};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5590]] /* vrNordic_g19.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[728]] /* vrNordic_g19.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5600]] /* vrNordic_g19.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5594]] /* vrNordic_g19.leadLag2.a_end PARAM */),"vrNordic_g19.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[728]] /* vrNordic_g19.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[728]] /* vrNordic_g19.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5601]] /* vrNordic_g19.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 13010;
}

/*
equation index: 13011
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag2.Y0 = if vrNordic_g19.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g19.leadLag2.u_start * vrNordic_g19.leadLag2.b[2] / vrNordic_g19.leadLag2.a_end else if vrNordic_g19.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g19.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g19.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13011};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5591]] /* vrNordic_g19.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[728]] /* vrNordic_g19.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5600]] /* vrNordic_g19.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5596]] /* vrNordic_g19.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5594]] /* vrNordic_g19.leadLag2.a_end PARAM */),"vrNordic_g19.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[728]] /* vrNordic_g19.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[728]] /* vrNordic_g19.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5602]] /* vrNordic_g19.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 13011;
}

/*
equation index: 13012
type: SIMPLE_ASSIGN
vrNordic_g19.limiter.uMin = -vrNordic_g19.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13012};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5608]] /* vrNordic_g19.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5607]] /* vrNordic_g19.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 13012;
}

/*
equation index: 13016
type: SIMPLE_ASSIGN
vrNordic_g19.const2.k = vrNordic_g19.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13016};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5555]] /* vrNordic_g19.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5545]] /* vrNordic_g19.IrLimPu PARAM */);
  threadData->lastEquationSolved = 13016;
}

/*
equation index: 13017
type: SIMPLE_ASSIGN
vrNordic_g19.kMulDU.k = vrNordic_g19.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13017};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5563]] /* vrNordic_g19.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5547]] /* vrNordic_g19.KTgr PARAM */);
  threadData->lastEquationSolved = 13017;
}

/*
equation index: 13018
type: SIMPLE_ASSIGN
vrNordic_g19.overExcitationLimitation.OelMode = vrNordic_g19.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13018};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5609]] /* vrNordic_g19.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5548]] /* vrNordic_g19.OelMode PARAM */);
  threadData->lastEquationSolved = 13018;
}

/*
equation index: 13019
type: SIMPLE_ASSIGN
vrNordic_g19.limIntegrator.outMax = vrNordic_g19.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13019};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5604]] /* vrNordic_g19.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5543]] /* vrNordic_g19.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 13019;
}

/*
equation index: 13025
type: SIMPLE_ASSIGN
vrNordic_g19.timer.outMin = vrNordic_g19.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13025};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5619]] /* vrNordic_g19.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5616]] /* vrNordic_g19.tOelMin PARAM */);
  threadData->lastEquationSolved = 13025;
}

/*
equation index: 13030
type: SIMPLE_ASSIGN
vrNordic_g19.timer.y_start = vrNordic_g19.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13030};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5620]] /* vrNordic_g19.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5616]] /* vrNordic_g19.tOelMin PARAM */);
  threadData->lastEquationSolved = 13030;
}

/*
equation index: 13032
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.b[1] = vrNordic_g19.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13032};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5569]] /* vrNordic_g19.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5615]] /* vrNordic_g19.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 13032;
}

/*
equation index: 13033
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.a[1] = vrNordic_g19.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13033};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5566]] /* vrNordic_g19.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5613]] /* vrNordic_g19.tLagTgr PARAM */);
  threadData->lastEquationSolved = 13033;
}

/*
equation index: 13037
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.bb[1] = vrNordic_g19.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13037};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5571]] /* vrNordic_g19.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5569]] /* vrNordic_g19.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 13037;
}

/*
equation index: 13038
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.bb[2] = vrNordic_g19.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5572]] /* vrNordic_g19.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5570]] /* vrNordic_g19.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 13038;
}

/*
equation index: 13039
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.d = vrNordic_g19.leadLag.bb[1] / vrNordic_g19.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5573]] /* vrNordic_g19.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5571]] /* vrNordic_g19.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5566]] /* vrNordic_g19.leadLag.a[1] PARAM */),"vrNordic_g19.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 13039;
}

/*
equation index: 13040
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.a_end = if vrNordic_g19.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g19.leadLag.a[1] ^ 2.0 + vrNordic_g19.leadLag.a[2] ^ 2.0) then vrNordic_g19.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13040};
  modelica_real tmp383;
  modelica_real tmp384;
  modelica_real tmp385;
  modelica_boolean tmp386;
  tmp383 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5566]] /* vrNordic_g19.leadLag.a[1] PARAM */);
  tmp384 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5567]] /* vrNordic_g19.leadLag.a[2] PARAM */);
  tmp385 = (tmp383 * tmp383) + (tmp384 * tmp384);
  if(!(tmp385 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g19.leadLag.a[1] ^ 2.0 + vrNordic_g19.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp385);
    }
  }tmp386 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5567]] /* vrNordic_g19.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp385)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5568]] /* vrNordic_g19.leadLag.a_end PARAM */) = (tmp386?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5567]] /* vrNordic_g19.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 13040;
}

/*
equation index: 13044
type: SIMPLE_ASSIGN
goverNordic_g19.govKp.k = goverNordic_g19.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13044};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2917]] /* goverNordic_g19.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2903]] /* goverNordic_g19.Kp PARAM */);
  threadData->lastEquationSolved = 13044;
}

/*
equation index: 13045
type: SIMPLE_ASSIGN
goverNordic_g19.govKi.k = goverNordic_g19.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13045};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2916]] /* goverNordic_g19.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2902]] /* goverNordic_g19.Ki PARAM */);
  threadData->lastEquationSolved = 13045;
}

/*
equation index: 13049
type: SIMPLE_ASSIGN
goverNordic_g19.dOmegaPlusDroop.k2 = goverNordic_g19.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13049};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* goverNordic_g19.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2901]] /* goverNordic_g19.KSigma PARAM */);
  threadData->lastEquationSolved = 13049;
}

/*
equation index: 13052
type: SIMPLE_ASSIGN
goverNordic_g19.perUnitP.k = 100.0 / goverNordic_g19.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13052};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2934]] /* goverNordic_g19.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2904]] /* goverNordic_g19.PNom PARAM */),"goverNordic_g19.PNom",equationIndexes);
  threadData->lastEquationSolved = 13052;
}

/*
equation index: 13053
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.DuMin = -goverNordic_g19.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13053};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2922]] /* goverNordic_g19.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* goverNordic_g19.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 13053;
}

/*
equation index: 13054
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limiter.uMax = goverNordic_g19.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13054};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* goverNordic_g19.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 13054;
}

/*
equation index: 13055
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limiter.uMin = goverNordic_g19.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13055};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* goverNordic_g19.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2922]] /* goverNordic_g19.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 13055;
}

/*
equation index: 13059
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g19.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13059};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2926]] /* goverNordic_g19.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2933]] /* goverNordic_g19.limRateLimFirstOrder.tS PARAM */),"goverNordic_g19.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 13059;
}

/*
equation index: 13060
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g19.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13060};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2924]] /* goverNordic_g19.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 13060;
}

/*
equation index: 13061
type: SIMPLE_ASSIGN
goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g19.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13061};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2925]] /* goverNordic_g19.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 13061;
}

/*
equation index: 13067
type: SIMPLE_ASSIGN
vrNordic_g20.derivative.k = vrNordic_g20.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13067};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5636]] /* vrNordic_g20.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5625]] /* vrNordic_g20.KPss PARAM */);
  threadData->lastEquationSolved = 13067;
}

/*
equation index: 13068
type: SIMPLE_ASSIGN
vrNordic_g20.derivative.T = vrNordic_g20.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13068};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5635]] /* vrNordic_g20.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5690]] /* vrNordic_g20.tDerOmega PARAM */);
  threadData->lastEquationSolved = 13068;
}

/*
equation index: 13070
type: SIMPLE_ASSIGN
vrNordic_g20.derivative.zeroGain = abs(vrNordic_g20.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13070};
  modelica_boolean tmp387;
  tmp387 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5636]] /* vrNordic_g20.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1070]] /* vrNordic_g20.derivative.zeroGain PARAM */) = tmp387;
  threadData->lastEquationSolved = 13070;
}

/*
equation index: 13071
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.b[1] = vrNordic_g20.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13071};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5661]] /* vrNordic_g20.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5693]] /* vrNordic_g20.tLeadPss PARAM */);
  threadData->lastEquationSolved = 13071;
}

/*
equation index: 13072
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.a[1] = vrNordic_g20.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5658]] /* vrNordic_g20.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5691]] /* vrNordic_g20.tLagPss PARAM */);
  threadData->lastEquationSolved = 13072;
}

/*
equation index: 13076
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.bb[1] = vrNordic_g20.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5663]] /* vrNordic_g20.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5661]] /* vrNordic_g20.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 13076;
}

/*
equation index: 13077
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.bb[2] = vrNordic_g20.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5664]] /* vrNordic_g20.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5662]] /* vrNordic_g20.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 13077;
}

/*
equation index: 13078
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.d = vrNordic_g20.leadLag1.bb[1] / vrNordic_g20.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5665]] /* vrNordic_g20.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5663]] /* vrNordic_g20.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5658]] /* vrNordic_g20.leadLag1.a[1] PARAM */),"vrNordic_g20.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 13078;
}

/*
equation index: 13079
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.a_end = if vrNordic_g20.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g20.leadLag1.a[1] ^ 2.0 + vrNordic_g20.leadLag1.a[2] ^ 2.0) then vrNordic_g20.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13079};
  modelica_real tmp388;
  modelica_real tmp389;
  modelica_real tmp390;
  modelica_boolean tmp391;
  tmp388 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5658]] /* vrNordic_g20.leadLag1.a[1] PARAM */);
  tmp389 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5659]] /* vrNordic_g20.leadLag1.a[2] PARAM */);
  tmp390 = (tmp388 * tmp388) + (tmp389 * tmp389);
  if(!(tmp390 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g20.leadLag1.a[1] ^ 2.0 + vrNordic_g20.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp390);
    }
  }tmp391 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5659]] /* vrNordic_g20.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp390)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5660]] /* vrNordic_g20.leadLag1.a_end PARAM */) = (tmp391?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5659]] /* vrNordic_g20.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 13079;
}

/*
equation index: 13080
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.X0[1] = if vrNordic_g20.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g20.leadLag1.u_start / vrNordic_g20.leadLag1.a_end else if vrNordic_g20.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g20.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g20.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5656]] /* vrNordic_g20.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[740]] /* vrNordic_g20.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5666]] /* vrNordic_g20.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5660]] /* vrNordic_g20.leadLag1.a_end PARAM */),"vrNordic_g20.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[740]] /* vrNordic_g20.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[740]] /* vrNordic_g20.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5667]] /* vrNordic_g20.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 13080;
}

/*
equation index: 13081
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag1.Y0 = if vrNordic_g20.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g20.leadLag1.u_start * vrNordic_g20.leadLag1.b[2] / vrNordic_g20.leadLag1.a_end else if vrNordic_g20.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g20.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g20.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5657]] /* vrNordic_g20.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[740]] /* vrNordic_g20.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5666]] /* vrNordic_g20.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5662]] /* vrNordic_g20.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5660]] /* vrNordic_g20.leadLag1.a_end PARAM */),"vrNordic_g20.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[740]] /* vrNordic_g20.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[740]] /* vrNordic_g20.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5668]] /* vrNordic_g20.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 13081;
}

/*
equation index: 13082
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.b[1] = vrNordic_g20.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5674]] /* vrNordic_g20.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5693]] /* vrNordic_g20.tLeadPss PARAM */);
  threadData->lastEquationSolved = 13082;
}

/*
equation index: 13083
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.a[1] = vrNordic_g20.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5671]] /* vrNordic_g20.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5691]] /* vrNordic_g20.tLagPss PARAM */);
  threadData->lastEquationSolved = 13083;
}

/*
equation index: 13087
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.bb[1] = vrNordic_g20.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5676]] /* vrNordic_g20.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5674]] /* vrNordic_g20.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 13087;
}

/*
equation index: 13088
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.bb[2] = vrNordic_g20.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13088};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5677]] /* vrNordic_g20.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5675]] /* vrNordic_g20.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 13088;
}

/*
equation index: 13089
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.d = vrNordic_g20.leadLag2.bb[1] / vrNordic_g20.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13089};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5678]] /* vrNordic_g20.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5676]] /* vrNordic_g20.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5671]] /* vrNordic_g20.leadLag2.a[1] PARAM */),"vrNordic_g20.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 13089;
}

/*
equation index: 13090
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.a_end = if vrNordic_g20.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g20.leadLag2.a[1] ^ 2.0 + vrNordic_g20.leadLag2.a[2] ^ 2.0) then vrNordic_g20.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13090};
  modelica_real tmp392;
  modelica_real tmp393;
  modelica_real tmp394;
  modelica_boolean tmp395;
  tmp392 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5671]] /* vrNordic_g20.leadLag2.a[1] PARAM */);
  tmp393 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5672]] /* vrNordic_g20.leadLag2.a[2] PARAM */);
  tmp394 = (tmp392 * tmp392) + (tmp393 * tmp393);
  if(!(tmp394 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g20.leadLag2.a[1] ^ 2.0 + vrNordic_g20.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp394);
    }
  }tmp395 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5672]] /* vrNordic_g20.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp394)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5673]] /* vrNordic_g20.leadLag2.a_end PARAM */) = (tmp395?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5672]] /* vrNordic_g20.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 13090;
}

/*
equation index: 13091
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.X0[1] = if vrNordic_g20.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g20.leadLag2.u_start / vrNordic_g20.leadLag2.a_end else if vrNordic_g20.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g20.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g20.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13091};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5669]] /* vrNordic_g20.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[744]] /* vrNordic_g20.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5679]] /* vrNordic_g20.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5673]] /* vrNordic_g20.leadLag2.a_end PARAM */),"vrNordic_g20.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[744]] /* vrNordic_g20.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[744]] /* vrNordic_g20.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5680]] /* vrNordic_g20.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 13091;
}

/*
equation index: 13092
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag2.Y0 = if vrNordic_g20.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g20.leadLag2.u_start * vrNordic_g20.leadLag2.b[2] / vrNordic_g20.leadLag2.a_end else if vrNordic_g20.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g20.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g20.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13092};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5670]] /* vrNordic_g20.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[744]] /* vrNordic_g20.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5679]] /* vrNordic_g20.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5675]] /* vrNordic_g20.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5673]] /* vrNordic_g20.leadLag2.a_end PARAM */),"vrNordic_g20.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[744]] /* vrNordic_g20.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[744]] /* vrNordic_g20.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5681]] /* vrNordic_g20.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 13092;
}

/*
equation index: 13093
type: SIMPLE_ASSIGN
vrNordic_g20.limiter.uMin = -vrNordic_g20.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5687]] /* vrNordic_g20.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5686]] /* vrNordic_g20.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 13093;
}

/*
equation index: 13097
type: SIMPLE_ASSIGN
vrNordic_g20.const2.k = vrNordic_g20.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13097};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5634]] /* vrNordic_g20.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5624]] /* vrNordic_g20.IrLimPu PARAM */);
  threadData->lastEquationSolved = 13097;
}

/*
equation index: 13098
type: SIMPLE_ASSIGN
vrNordic_g20.kMulDU.k = vrNordic_g20.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13098};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5642]] /* vrNordic_g20.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5626]] /* vrNordic_g20.KTgr PARAM */);
  threadData->lastEquationSolved = 13098;
}

/*
equation index: 13099
type: SIMPLE_ASSIGN
vrNordic_g20.overExcitationLimitation.OelMode = vrNordic_g20.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5688]] /* vrNordic_g20.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5627]] /* vrNordic_g20.OelMode PARAM */);
  threadData->lastEquationSolved = 13099;
}

/*
equation index: 13100
type: SIMPLE_ASSIGN
vrNordic_g20.limIntegrator.outMax = vrNordic_g20.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5683]] /* vrNordic_g20.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5622]] /* vrNordic_g20.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 13100;
}

/*
equation index: 13106
type: SIMPLE_ASSIGN
vrNordic_g20.timer.outMin = vrNordic_g20.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5698]] /* vrNordic_g20.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5695]] /* vrNordic_g20.tOelMin PARAM */);
  threadData->lastEquationSolved = 13106;
}

/*
equation index: 13111
type: SIMPLE_ASSIGN
vrNordic_g20.timer.y_start = vrNordic_g20.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5699]] /* vrNordic_g20.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5695]] /* vrNordic_g20.tOelMin PARAM */);
  threadData->lastEquationSolved = 13111;
}

/*
equation index: 13113
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.b[1] = vrNordic_g20.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5648]] /* vrNordic_g20.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5694]] /* vrNordic_g20.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 13113;
}

/*
equation index: 13114
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.a[1] = vrNordic_g20.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13114};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5645]] /* vrNordic_g20.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5692]] /* vrNordic_g20.tLagTgr PARAM */);
  threadData->lastEquationSolved = 13114;
}

/*
equation index: 13118
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.bb[1] = vrNordic_g20.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5650]] /* vrNordic_g20.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5648]] /* vrNordic_g20.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 13118;
}

/*
equation index: 13119
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.bb[2] = vrNordic_g20.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5651]] /* vrNordic_g20.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5649]] /* vrNordic_g20.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 13119;
}

/*
equation index: 13120
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.d = vrNordic_g20.leadLag.bb[1] / vrNordic_g20.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5652]] /* vrNordic_g20.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5650]] /* vrNordic_g20.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5645]] /* vrNordic_g20.leadLag.a[1] PARAM */),"vrNordic_g20.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 13120;
}

/*
equation index: 13121
type: SIMPLE_ASSIGN
vrNordic_g20.leadLag.a_end = if vrNordic_g20.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g20.leadLag.a[1] ^ 2.0 + vrNordic_g20.leadLag.a[2] ^ 2.0) then vrNordic_g20.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13121};
  modelica_real tmp396;
  modelica_real tmp397;
  modelica_real tmp398;
  modelica_boolean tmp399;
  tmp396 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5645]] /* vrNordic_g20.leadLag.a[1] PARAM */);
  tmp397 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5646]] /* vrNordic_g20.leadLag.a[2] PARAM */);
  tmp398 = (tmp396 * tmp396) + (tmp397 * tmp397);
  if(!(tmp398 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g20.leadLag.a[1] ^ 2.0 + vrNordic_g20.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp398);
    }
  }tmp399 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5646]] /* vrNordic_g20.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp398)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5647]] /* vrNordic_g20.leadLag.a_end PARAM */) = (tmp399?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5646]] /* vrNordic_g20.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 13121;
}

/*
equation index: 13125
type: SIMPLE_ASSIGN
goverNordic_g20.govKp.k = goverNordic_g20.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2953]] /* goverNordic_g20.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2939]] /* goverNordic_g20.Kp PARAM */);
  threadData->lastEquationSolved = 13125;
}

/*
equation index: 13126
type: SIMPLE_ASSIGN
goverNordic_g20.govKi.k = goverNordic_g20.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2952]] /* goverNordic_g20.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2938]] /* goverNordic_g20.Ki PARAM */);
  threadData->lastEquationSolved = 13126;
}

/*
equation index: 13130
type: SIMPLE_ASSIGN
goverNordic_g20.dOmegaPlusDroop.k2 = goverNordic_g20.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2946]] /* goverNordic_g20.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2937]] /* goverNordic_g20.KSigma PARAM */);
  threadData->lastEquationSolved = 13130;
}

/*
equation index: 13133
type: SIMPLE_ASSIGN
goverNordic_g20.perUnitP.k = 100.0 / goverNordic_g20.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* goverNordic_g20.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2940]] /* goverNordic_g20.PNom PARAM */),"goverNordic_g20.PNom",equationIndexes);
  threadData->lastEquationSolved = 13133;
}

/*
equation index: 13134
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.DuMin = -goverNordic_g20.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2958]] /* goverNordic_g20.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2957]] /* goverNordic_g20.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 13134;
}

/*
equation index: 13135
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limiter.uMax = goverNordic_g20.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2957]] /* goverNordic_g20.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 13135;
}

/*
equation index: 13136
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limiter.uMin = goverNordic_g20.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* goverNordic_g20.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2958]] /* goverNordic_g20.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 13136;
}

/*
equation index: 13140
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g20.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13140};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2962]] /* goverNordic_g20.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* goverNordic_g20.limRateLimFirstOrder.tS PARAM */),"goverNordic_g20.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 13140;
}

/*
equation index: 13141
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g20.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2960]] /* goverNordic_g20.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 13141;
}

/*
equation index: 13142
type: SIMPLE_ASSIGN
goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g20.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2961]] /* goverNordic_g20.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 13142;
}

/*
equation index: 13148
type: SIMPLE_ASSIGN
nodeFault.ZPu.re = nodeFault.RPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3568]] /* nodeFault.ZPu.re PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3565]] /* nodeFault.RPu PARAM */);
  threadData->lastEquationSolved = 13148;
}

/*
equation index: 13149
type: SIMPLE_ASSIGN
nodeFault.ZPu.im = nodeFault.XPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3567]] /* nodeFault.ZPu.im PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3566]] /* nodeFault.XPu PARAM */);
  threadData->lastEquationSolved = 13149;
}

/*
equation index: 13151
type: ALGORITHM

  assert(line_1011_1013a.NbSwitchOffSignals >= 1 and line_1011_1013a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1011_1013a.NbSwitchOffSignals <= 3, has value: " + String(line_1011_1013a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13151};
  modelica_boolean tmp400;
  modelica_boolean tmp401;
  static const MMC_DEFSTRINGLIT(tmp402,96,"Variable violating min/max constraint: 1 <= line_1011_1013a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp403;
  modelica_metatype tmpMeta404;
  static int tmp405 = 0;
  if(!tmp405)
  {
    tmp400 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[161]] /* line_1011_1013a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp401 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[161]] /* line_1011_1013a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp400 && tmp401))
    {
      tmp403 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[161]] /* line_1011_1013a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta404 = stringAppend(MMC_REFSTRINGLIT(tmp402),tmp403);
      {
        const char* assert_cond = "(line_1011_1013a.NbSwitchOffSignals >= 1 and line_1011_1013a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta404));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta404));
        }
      }
      tmp405 = 1;
    }
  }
  threadData->lastEquationSolved = 13151;
}

/*
equation index: 13152
type: ALGORITHM

  assert(line_1011_1013a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1011_1013a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1011_1013a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1011_1013a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13152};
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  static const MMC_DEFSTRINGLIT(tmp408,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1011_1013a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp409;
  modelica_metatype tmpMeta410;
  static int tmp411 = 0;
  if(!tmp411)
  {
    tmp406 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[162]] /* line_1011_1013a.State0 PARAM */),1);
    tmp407 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[162]] /* line_1011_1013a.State0 PARAM */),6);
    if(!(tmp406 && tmp407))
    {
      tmp409 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[162]] /* line_1011_1013a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta410 = stringAppend(MMC_REFSTRINGLIT(tmp408),tmp409);
      {
        const char* assert_cond = "(line_1011_1013a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1011_1013a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta410));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta410));
        }
      }
      tmp411 = 1;
    }
  }
  threadData->lastEquationSolved = 13152;
}

/*
equation index: 13153
type: ALGORITHM

  assert(line_1011_1013b.NbSwitchOffSignals >= 1 and line_1011_1013b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1011_1013b.NbSwitchOffSignals <= 3, has value: " + String(line_1011_1013b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13153};
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  static const MMC_DEFSTRINGLIT(tmp414,96,"Variable violating min/max constraint: 1 <= line_1011_1013b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp415;
  modelica_metatype tmpMeta416;
  static int tmp417 = 0;
  if(!tmp417)
  {
    tmp412 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[163]] /* line_1011_1013b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp413 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[163]] /* line_1011_1013b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp412 && tmp413))
    {
      tmp415 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[163]] /* line_1011_1013b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta416 = stringAppend(MMC_REFSTRINGLIT(tmp414),tmp415);
      {
        const char* assert_cond = "(line_1011_1013b.NbSwitchOffSignals >= 1 and line_1011_1013b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta416));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta416));
        }
      }
      tmp417 = 1;
    }
  }
  threadData->lastEquationSolved = 13153;
}

/*
equation index: 13154
type: ALGORITHM

  assert(line_1011_1013b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1011_1013b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1011_1013b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1011_1013b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13154};
  modelica_boolean tmp418;
  modelica_boolean tmp419;
  static const MMC_DEFSTRINGLIT(tmp420,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1011_1013b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp421;
  modelica_metatype tmpMeta422;
  static int tmp423 = 0;
  if(!tmp423)
  {
    tmp418 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[164]] /* line_1011_1013b.State0 PARAM */),1);
    tmp419 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[164]] /* line_1011_1013b.State0 PARAM */),6);
    if(!(tmp418 && tmp419))
    {
      tmp421 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[164]] /* line_1011_1013b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta422 = stringAppend(MMC_REFSTRINGLIT(tmp420),tmp421);
      {
        const char* assert_cond = "(line_1011_1013b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1011_1013b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta422));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta422));
        }
      }
      tmp423 = 1;
    }
  }
  threadData->lastEquationSolved = 13154;
}

/*
equation index: 13155
type: ALGORITHM

  assert(line_1012_1014a.NbSwitchOffSignals >= 1 and line_1012_1014a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1012_1014a.NbSwitchOffSignals <= 3, has value: " + String(line_1012_1014a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13155};
  modelica_boolean tmp424;
  modelica_boolean tmp425;
  static const MMC_DEFSTRINGLIT(tmp426,96,"Variable violating min/max constraint: 1 <= line_1012_1014a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp427;
  modelica_metatype tmpMeta428;
  static int tmp429 = 0;
  if(!tmp429)
  {
    tmp424 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[165]] /* line_1012_1014a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp425 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[165]] /* line_1012_1014a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp424 && tmp425))
    {
      tmp427 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[165]] /* line_1012_1014a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta428 = stringAppend(MMC_REFSTRINGLIT(tmp426),tmp427);
      {
        const char* assert_cond = "(line_1012_1014a.NbSwitchOffSignals >= 1 and line_1012_1014a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta428));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta428));
        }
      }
      tmp429 = 1;
    }
  }
  threadData->lastEquationSolved = 13155;
}

/*
equation index: 13156
type: ALGORITHM

  assert(line_1012_1014a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1012_1014a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1012_1014a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1012_1014a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13156};
  modelica_boolean tmp430;
  modelica_boolean tmp431;
  static const MMC_DEFSTRINGLIT(tmp432,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1012_1014a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp433;
  modelica_metatype tmpMeta434;
  static int tmp435 = 0;
  if(!tmp435)
  {
    tmp430 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[166]] /* line_1012_1014a.State0 PARAM */),1);
    tmp431 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[166]] /* line_1012_1014a.State0 PARAM */),6);
    if(!(tmp430 && tmp431))
    {
      tmp433 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[166]] /* line_1012_1014a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta434 = stringAppend(MMC_REFSTRINGLIT(tmp432),tmp433);
      {
        const char* assert_cond = "(line_1012_1014a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1012_1014a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta434));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta434));
        }
      }
      tmp435 = 1;
    }
  }
  threadData->lastEquationSolved = 13156;
}

/*
equation index: 13157
type: ALGORITHM

  assert(line_1012_1014b.NbSwitchOffSignals >= 1 and line_1012_1014b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1012_1014b.NbSwitchOffSignals <= 3, has value: " + String(line_1012_1014b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13157};
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  static const MMC_DEFSTRINGLIT(tmp438,96,"Variable violating min/max constraint: 1 <= line_1012_1014b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp439;
  modelica_metatype tmpMeta440;
  static int tmp441 = 0;
  if(!tmp441)
  {
    tmp436 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[167]] /* line_1012_1014b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp437 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[167]] /* line_1012_1014b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp436 && tmp437))
    {
      tmp439 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[167]] /* line_1012_1014b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta440 = stringAppend(MMC_REFSTRINGLIT(tmp438),tmp439);
      {
        const char* assert_cond = "(line_1012_1014b.NbSwitchOffSignals >= 1 and line_1012_1014b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta440));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta440));
        }
      }
      tmp441 = 1;
    }
  }
  threadData->lastEquationSolved = 13157;
}

/*
equation index: 13158
type: ALGORITHM

  assert(line_1012_1014b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1012_1014b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1012_1014b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1012_1014b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13158};
  modelica_boolean tmp442;
  modelica_boolean tmp443;
  static const MMC_DEFSTRINGLIT(tmp444,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1012_1014b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp445;
  modelica_metatype tmpMeta446;
  static int tmp447 = 0;
  if(!tmp447)
  {
    tmp442 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[168]] /* line_1012_1014b.State0 PARAM */),1);
    tmp443 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[168]] /* line_1012_1014b.State0 PARAM */),6);
    if(!(tmp442 && tmp443))
    {
      tmp445 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[168]] /* line_1012_1014b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta446 = stringAppend(MMC_REFSTRINGLIT(tmp444),tmp445);
      {
        const char* assert_cond = "(line_1012_1014b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1012_1014b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta446));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta446));
        }
      }
      tmp447 = 1;
    }
  }
  threadData->lastEquationSolved = 13158;
}

/*
equation index: 13159
type: ALGORITHM

  assert(line_1013_1014a.NbSwitchOffSignals >= 1 and line_1013_1014a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1013_1014a.NbSwitchOffSignals <= 3, has value: " + String(line_1013_1014a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13159};
  modelica_boolean tmp448;
  modelica_boolean tmp449;
  static const MMC_DEFSTRINGLIT(tmp450,96,"Variable violating min/max constraint: 1 <= line_1013_1014a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp451;
  modelica_metatype tmpMeta452;
  static int tmp453 = 0;
  if(!tmp453)
  {
    tmp448 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[169]] /* line_1013_1014a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp449 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[169]] /* line_1013_1014a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp448 && tmp449))
    {
      tmp451 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[169]] /* line_1013_1014a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta452 = stringAppend(MMC_REFSTRINGLIT(tmp450),tmp451);
      {
        const char* assert_cond = "(line_1013_1014a.NbSwitchOffSignals >= 1 and line_1013_1014a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta452));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta452));
        }
      }
      tmp453 = 1;
    }
  }
  threadData->lastEquationSolved = 13159;
}

/*
equation index: 13160
type: ALGORITHM

  assert(line_1013_1014a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1013_1014a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1013_1014a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1013_1014a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13160};
  modelica_boolean tmp454;
  modelica_boolean tmp455;
  static const MMC_DEFSTRINGLIT(tmp456,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1013_1014a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp457;
  modelica_metatype tmpMeta458;
  static int tmp459 = 0;
  if(!tmp459)
  {
    tmp454 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[170]] /* line_1013_1014a.State0 PARAM */),1);
    tmp455 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[170]] /* line_1013_1014a.State0 PARAM */),6);
    if(!(tmp454 && tmp455))
    {
      tmp457 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[170]] /* line_1013_1014a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta458 = stringAppend(MMC_REFSTRINGLIT(tmp456),tmp457);
      {
        const char* assert_cond = "(line_1013_1014a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1013_1014a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta458));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta458));
        }
      }
      tmp459 = 1;
    }
  }
  threadData->lastEquationSolved = 13160;
}

/*
equation index: 13161
type: ALGORITHM

  assert(line_1013_1014b.NbSwitchOffSignals >= 1 and line_1013_1014b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1013_1014b.NbSwitchOffSignals <= 3, has value: " + String(line_1013_1014b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13161};
  modelica_boolean tmp460;
  modelica_boolean tmp461;
  static const MMC_DEFSTRINGLIT(tmp462,96,"Variable violating min/max constraint: 1 <= line_1013_1014b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp463;
  modelica_metatype tmpMeta464;
  static int tmp465 = 0;
  if(!tmp465)
  {
    tmp460 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[171]] /* line_1013_1014b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp461 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[171]] /* line_1013_1014b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp460 && tmp461))
    {
      tmp463 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[171]] /* line_1013_1014b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta464 = stringAppend(MMC_REFSTRINGLIT(tmp462),tmp463);
      {
        const char* assert_cond = "(line_1013_1014b.NbSwitchOffSignals >= 1 and line_1013_1014b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta464));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta464));
        }
      }
      tmp465 = 1;
    }
  }
  threadData->lastEquationSolved = 13161;
}

/*
equation index: 13162
type: ALGORITHM

  assert(line_1013_1014b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1013_1014b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1013_1014b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1013_1014b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13162};
  modelica_boolean tmp466;
  modelica_boolean tmp467;
  static const MMC_DEFSTRINGLIT(tmp468,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1013_1014b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp469;
  modelica_metatype tmpMeta470;
  static int tmp471 = 0;
  if(!tmp471)
  {
    tmp466 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[172]] /* line_1013_1014b.State0 PARAM */),1);
    tmp467 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[172]] /* line_1013_1014b.State0 PARAM */),6);
    if(!(tmp466 && tmp467))
    {
      tmp469 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[172]] /* line_1013_1014b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta470 = stringAppend(MMC_REFSTRINGLIT(tmp468),tmp469);
      {
        const char* assert_cond = "(line_1013_1014b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1013_1014b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta470));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta470));
        }
      }
      tmp471 = 1;
    }
  }
  threadData->lastEquationSolved = 13162;
}

/*
equation index: 13163
type: ALGORITHM

  assert(line_1021_1022a.NbSwitchOffSignals >= 1 and line_1021_1022a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1021_1022a.NbSwitchOffSignals <= 3, has value: " + String(line_1021_1022a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13163};
  modelica_boolean tmp472;
  modelica_boolean tmp473;
  static const MMC_DEFSTRINGLIT(tmp474,96,"Variable violating min/max constraint: 1 <= line_1021_1022a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp475;
  modelica_metatype tmpMeta476;
  static int tmp477 = 0;
  if(!tmp477)
  {
    tmp472 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* line_1021_1022a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp473 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* line_1021_1022a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp472 && tmp473))
    {
      tmp475 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[173]] /* line_1021_1022a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta476 = stringAppend(MMC_REFSTRINGLIT(tmp474),tmp475);
      {
        const char* assert_cond = "(line_1021_1022a.NbSwitchOffSignals >= 1 and line_1021_1022a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta476));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta476));
        }
      }
      tmp477 = 1;
    }
  }
  threadData->lastEquationSolved = 13163;
}

/*
equation index: 13164
type: ALGORITHM

  assert(line_1021_1022a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1021_1022a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1021_1022a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1021_1022a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13164};
  modelica_boolean tmp478;
  modelica_boolean tmp479;
  static const MMC_DEFSTRINGLIT(tmp480,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1021_1022a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp481;
  modelica_metatype tmpMeta482;
  static int tmp483 = 0;
  if(!tmp483)
  {
    tmp478 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[174]] /* line_1021_1022a.State0 PARAM */),1);
    tmp479 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[174]] /* line_1021_1022a.State0 PARAM */),6);
    if(!(tmp478 && tmp479))
    {
      tmp481 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[174]] /* line_1021_1022a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta482 = stringAppend(MMC_REFSTRINGLIT(tmp480),tmp481);
      {
        const char* assert_cond = "(line_1021_1022a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1021_1022a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta482));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta482));
        }
      }
      tmp483 = 1;
    }
  }
  threadData->lastEquationSolved = 13164;
}

/*
equation index: 13165
type: ALGORITHM

  assert(line_1021_1022b.NbSwitchOffSignals >= 1 and line_1021_1022b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1021_1022b.NbSwitchOffSignals <= 3, has value: " + String(line_1021_1022b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13165};
  modelica_boolean tmp484;
  modelica_boolean tmp485;
  static const MMC_DEFSTRINGLIT(tmp486,96,"Variable violating min/max constraint: 1 <= line_1021_1022b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp487;
  modelica_metatype tmpMeta488;
  static int tmp489 = 0;
  if(!tmp489)
  {
    tmp484 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[175]] /* line_1021_1022b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp485 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[175]] /* line_1021_1022b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp484 && tmp485))
    {
      tmp487 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[175]] /* line_1021_1022b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta488 = stringAppend(MMC_REFSTRINGLIT(tmp486),tmp487);
      {
        const char* assert_cond = "(line_1021_1022b.NbSwitchOffSignals >= 1 and line_1021_1022b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta488));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta488));
        }
      }
      tmp489 = 1;
    }
  }
  threadData->lastEquationSolved = 13165;
}

/*
equation index: 13166
type: ALGORITHM

  assert(line_1021_1022b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1021_1022b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1021_1022b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1021_1022b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13166};
  modelica_boolean tmp490;
  modelica_boolean tmp491;
  static const MMC_DEFSTRINGLIT(tmp492,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1021_1022b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp493;
  modelica_metatype tmpMeta494;
  static int tmp495 = 0;
  if(!tmp495)
  {
    tmp490 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[176]] /* line_1021_1022b.State0 PARAM */),1);
    tmp491 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[176]] /* line_1021_1022b.State0 PARAM */),6);
    if(!(tmp490 && tmp491))
    {
      tmp493 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[176]] /* line_1021_1022b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta494 = stringAppend(MMC_REFSTRINGLIT(tmp492),tmp493);
      {
        const char* assert_cond = "(line_1021_1022b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1021_1022b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta494));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta494));
        }
      }
      tmp495 = 1;
    }
  }
  threadData->lastEquationSolved = 13166;
}

/*
equation index: 13167
type: ALGORITHM

  assert(line_1041_1043a.NbSwitchOffSignals >= 1 and line_1041_1043a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1041_1043a.NbSwitchOffSignals <= 3, has value: " + String(line_1041_1043a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13167};
  modelica_boolean tmp496;
  modelica_boolean tmp497;
  static const MMC_DEFSTRINGLIT(tmp498,96,"Variable violating min/max constraint: 1 <= line_1041_1043a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp499;
  modelica_metatype tmpMeta500;
  static int tmp501 = 0;
  if(!tmp501)
  {
    tmp496 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[177]] /* line_1041_1043a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp497 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[177]] /* line_1041_1043a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp496 && tmp497))
    {
      tmp499 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[177]] /* line_1041_1043a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta500 = stringAppend(MMC_REFSTRINGLIT(tmp498),tmp499);
      {
        const char* assert_cond = "(line_1041_1043a.NbSwitchOffSignals >= 1 and line_1041_1043a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta500));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta500));
        }
      }
      tmp501 = 1;
    }
  }
  threadData->lastEquationSolved = 13167;
}

/*
equation index: 13168
type: ALGORITHM

  assert(line_1041_1043a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1041_1043a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1041_1043a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1041_1043a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13168};
  modelica_boolean tmp502;
  modelica_boolean tmp503;
  static const MMC_DEFSTRINGLIT(tmp504,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1041_1043a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp505;
  modelica_metatype tmpMeta506;
  static int tmp507 = 0;
  if(!tmp507)
  {
    tmp502 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[178]] /* line_1041_1043a.State0 PARAM */),1);
    tmp503 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[178]] /* line_1041_1043a.State0 PARAM */),6);
    if(!(tmp502 && tmp503))
    {
      tmp505 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[178]] /* line_1041_1043a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta506 = stringAppend(MMC_REFSTRINGLIT(tmp504),tmp505);
      {
        const char* assert_cond = "(line_1041_1043a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1041_1043a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta506));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta506));
        }
      }
      tmp507 = 1;
    }
  }
  threadData->lastEquationSolved = 13168;
}

/*
equation index: 13169
type: ALGORITHM

  assert(line_1041_1043b.NbSwitchOffSignals >= 1 and line_1041_1043b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1041_1043b.NbSwitchOffSignals <= 3, has value: " + String(line_1041_1043b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13169};
  modelica_boolean tmp508;
  modelica_boolean tmp509;
  static const MMC_DEFSTRINGLIT(tmp510,96,"Variable violating min/max constraint: 1 <= line_1041_1043b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp511;
  modelica_metatype tmpMeta512;
  static int tmp513 = 0;
  if(!tmp513)
  {
    tmp508 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* line_1041_1043b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp509 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* line_1041_1043b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp508 && tmp509))
    {
      tmp511 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[179]] /* line_1041_1043b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta512 = stringAppend(MMC_REFSTRINGLIT(tmp510),tmp511);
      {
        const char* assert_cond = "(line_1041_1043b.NbSwitchOffSignals >= 1 and line_1041_1043b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta512));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta512));
        }
      }
      tmp513 = 1;
    }
  }
  threadData->lastEquationSolved = 13169;
}

/*
equation index: 13170
type: ALGORITHM

  assert(line_1041_1043b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1041_1043b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1041_1043b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1041_1043b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13170};
  modelica_boolean tmp514;
  modelica_boolean tmp515;
  static const MMC_DEFSTRINGLIT(tmp516,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1041_1043b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp517;
  modelica_metatype tmpMeta518;
  static int tmp519 = 0;
  if(!tmp519)
  {
    tmp514 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[180]] /* line_1041_1043b.State0 PARAM */),1);
    tmp515 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[180]] /* line_1041_1043b.State0 PARAM */),6);
    if(!(tmp514 && tmp515))
    {
      tmp517 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[180]] /* line_1041_1043b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta518 = stringAppend(MMC_REFSTRINGLIT(tmp516),tmp517);
      {
        const char* assert_cond = "(line_1041_1043b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1041_1043b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta518));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta518));
        }
      }
      tmp519 = 1;
    }
  }
  threadData->lastEquationSolved = 13170;
}

/*
equation index: 13171
type: ALGORITHM

  assert(line_1041_1045a.NbSwitchOffSignals >= 1 and line_1041_1045a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1041_1045a.NbSwitchOffSignals <= 3, has value: " + String(line_1041_1045a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13171};
  modelica_boolean tmp520;
  modelica_boolean tmp521;
  static const MMC_DEFSTRINGLIT(tmp522,96,"Variable violating min/max constraint: 1 <= line_1041_1045a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp523;
  modelica_metatype tmpMeta524;
  static int tmp525 = 0;
  if(!tmp525)
  {
    tmp520 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[181]] /* line_1041_1045a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp521 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[181]] /* line_1041_1045a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp520 && tmp521))
    {
      tmp523 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[181]] /* line_1041_1045a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta524 = stringAppend(MMC_REFSTRINGLIT(tmp522),tmp523);
      {
        const char* assert_cond = "(line_1041_1045a.NbSwitchOffSignals >= 1 and line_1041_1045a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta524));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta524));
        }
      }
      tmp525 = 1;
    }
  }
  threadData->lastEquationSolved = 13171;
}

/*
equation index: 13172
type: ALGORITHM

  assert(line_1041_1045a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1041_1045a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1041_1045a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1041_1045a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13172};
  modelica_boolean tmp526;
  modelica_boolean tmp527;
  static const MMC_DEFSTRINGLIT(tmp528,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1041_1045a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp529;
  modelica_metatype tmpMeta530;
  static int tmp531 = 0;
  if(!tmp531)
  {
    tmp526 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[182]] /* line_1041_1045a.State0 PARAM */),1);
    tmp527 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[182]] /* line_1041_1045a.State0 PARAM */),6);
    if(!(tmp526 && tmp527))
    {
      tmp529 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[182]] /* line_1041_1045a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta530 = stringAppend(MMC_REFSTRINGLIT(tmp528),tmp529);
      {
        const char* assert_cond = "(line_1041_1045a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1041_1045a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta530));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta530));
        }
      }
      tmp531 = 1;
    }
  }
  threadData->lastEquationSolved = 13172;
}

/*
equation index: 13173
type: ALGORITHM

  assert(line_1041_1045b.NbSwitchOffSignals >= 1 and line_1041_1045b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1041_1045b.NbSwitchOffSignals <= 3, has value: " + String(line_1041_1045b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13173};
  modelica_boolean tmp532;
  modelica_boolean tmp533;
  static const MMC_DEFSTRINGLIT(tmp534,96,"Variable violating min/max constraint: 1 <= line_1041_1045b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp535;
  modelica_metatype tmpMeta536;
  static int tmp537 = 0;
  if(!tmp537)
  {
    tmp532 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[183]] /* line_1041_1045b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp533 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[183]] /* line_1041_1045b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp532 && tmp533))
    {
      tmp535 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[183]] /* line_1041_1045b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta536 = stringAppend(MMC_REFSTRINGLIT(tmp534),tmp535);
      {
        const char* assert_cond = "(line_1041_1045b.NbSwitchOffSignals >= 1 and line_1041_1045b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta536));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta536));
        }
      }
      tmp537 = 1;
    }
  }
  threadData->lastEquationSolved = 13173;
}

/*
equation index: 13174
type: ALGORITHM

  assert(line_1041_1045b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1041_1045b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1041_1045b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1041_1045b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13174};
  modelica_boolean tmp538;
  modelica_boolean tmp539;
  static const MMC_DEFSTRINGLIT(tmp540,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1041_1045b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp541;
  modelica_metatype tmpMeta542;
  static int tmp543 = 0;
  if(!tmp543)
  {
    tmp538 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[184]] /* line_1041_1045b.State0 PARAM */),1);
    tmp539 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[184]] /* line_1041_1045b.State0 PARAM */),6);
    if(!(tmp538 && tmp539))
    {
      tmp541 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[184]] /* line_1041_1045b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta542 = stringAppend(MMC_REFSTRINGLIT(tmp540),tmp541);
      {
        const char* assert_cond = "(line_1041_1045b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1041_1045b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta542));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta542));
        }
      }
      tmp543 = 1;
    }
  }
  threadData->lastEquationSolved = 13174;
}

/*
equation index: 13175
type: ALGORITHM

  assert(line_1042_1044a.NbSwitchOffSignals >= 1 and line_1042_1044a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1042_1044a.NbSwitchOffSignals <= 3, has value: " + String(line_1042_1044a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13175};
  modelica_boolean tmp544;
  modelica_boolean tmp545;
  static const MMC_DEFSTRINGLIT(tmp546,96,"Variable violating min/max constraint: 1 <= line_1042_1044a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp547;
  modelica_metatype tmpMeta548;
  static int tmp549 = 0;
  if(!tmp549)
  {
    tmp544 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[185]] /* line_1042_1044a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp545 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[185]] /* line_1042_1044a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp544 && tmp545))
    {
      tmp547 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[185]] /* line_1042_1044a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta548 = stringAppend(MMC_REFSTRINGLIT(tmp546),tmp547);
      {
        const char* assert_cond = "(line_1042_1044a.NbSwitchOffSignals >= 1 and line_1042_1044a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta548));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta548));
        }
      }
      tmp549 = 1;
    }
  }
  threadData->lastEquationSolved = 13175;
}

/*
equation index: 13176
type: ALGORITHM

  assert(line_1042_1044a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1042_1044a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1042_1044a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1042_1044a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13176};
  modelica_boolean tmp550;
  modelica_boolean tmp551;
  static const MMC_DEFSTRINGLIT(tmp552,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1042_1044a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp553;
  modelica_metatype tmpMeta554;
  static int tmp555 = 0;
  if(!tmp555)
  {
    tmp550 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[186]] /* line_1042_1044a.State0 PARAM */),1);
    tmp551 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[186]] /* line_1042_1044a.State0 PARAM */),6);
    if(!(tmp550 && tmp551))
    {
      tmp553 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[186]] /* line_1042_1044a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta554 = stringAppend(MMC_REFSTRINGLIT(tmp552),tmp553);
      {
        const char* assert_cond = "(line_1042_1044a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1042_1044a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta554));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta554));
        }
      }
      tmp555 = 1;
    }
  }
  threadData->lastEquationSolved = 13176;
}

/*
equation index: 13177
type: ALGORITHM

  assert(line_1042_1044b.NbSwitchOffSignals >= 1 and line_1042_1044b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1042_1044b.NbSwitchOffSignals <= 3, has value: " + String(line_1042_1044b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13177};
  modelica_boolean tmp556;
  modelica_boolean tmp557;
  static const MMC_DEFSTRINGLIT(tmp558,96,"Variable violating min/max constraint: 1 <= line_1042_1044b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp559;
  modelica_metatype tmpMeta560;
  static int tmp561 = 0;
  if(!tmp561)
  {
    tmp556 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[187]] /* line_1042_1044b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp557 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[187]] /* line_1042_1044b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp556 && tmp557))
    {
      tmp559 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[187]] /* line_1042_1044b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta560 = stringAppend(MMC_REFSTRINGLIT(tmp558),tmp559);
      {
        const char* assert_cond = "(line_1042_1044b.NbSwitchOffSignals >= 1 and line_1042_1044b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta560));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta560));
        }
      }
      tmp561 = 1;
    }
  }
  threadData->lastEquationSolved = 13177;
}

/*
equation index: 13178
type: ALGORITHM

  assert(line_1042_1044b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1042_1044b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1042_1044b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1042_1044b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13178};
  modelica_boolean tmp562;
  modelica_boolean tmp563;
  static const MMC_DEFSTRINGLIT(tmp564,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1042_1044b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp565;
  modelica_metatype tmpMeta566;
  static int tmp567 = 0;
  if(!tmp567)
  {
    tmp562 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[188]] /* line_1042_1044b.State0 PARAM */),1);
    tmp563 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[188]] /* line_1042_1044b.State0 PARAM */),6);
    if(!(tmp562 && tmp563))
    {
      tmp565 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[188]] /* line_1042_1044b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta566 = stringAppend(MMC_REFSTRINGLIT(tmp564),tmp565);
      {
        const char* assert_cond = "(line_1042_1044b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1042_1044b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta566));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta566));
        }
      }
      tmp567 = 1;
    }
  }
  threadData->lastEquationSolved = 13178;
}

/*
equation index: 13179
type: ALGORITHM

  assert(line_1042_1045.NbSwitchOffSignals >= 1 and line_1042_1045.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1042_1045.NbSwitchOffSignals <= 3, has value: " + String(line_1042_1045.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13179};
  modelica_boolean tmp568;
  modelica_boolean tmp569;
  static const MMC_DEFSTRINGLIT(tmp570,95,"Variable violating min/max constraint: 1 <= line_1042_1045.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp571;
  modelica_metatype tmpMeta572;
  static int tmp573 = 0;
  if(!tmp573)
  {
    tmp568 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[189]] /* line_1042_1045.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp569 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[189]] /* line_1042_1045.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp568 && tmp569))
    {
      tmp571 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[189]] /* line_1042_1045.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta572 = stringAppend(MMC_REFSTRINGLIT(tmp570),tmp571);
      {
        const char* assert_cond = "(line_1042_1045.NbSwitchOffSignals >= 1 and line_1042_1045.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta572));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta572));
        }
      }
      tmp573 = 1;
    }
  }
  threadData->lastEquationSolved = 13179;
}

/*
equation index: 13180
type: ALGORITHM

  assert(line_1042_1045.State0 >= Dynawo.Electrical.Constants.state.Open and line_1042_1045.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1042_1045.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1042_1045.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13180};
  modelica_boolean tmp574;
  modelica_boolean tmp575;
  static const MMC_DEFSTRINGLIT(tmp576,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1042_1045.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp577;
  modelica_metatype tmpMeta578;
  static int tmp579 = 0;
  if(!tmp579)
  {
    tmp574 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[190]] /* line_1042_1045.State0 PARAM */),1);
    tmp575 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[190]] /* line_1042_1045.State0 PARAM */),6);
    if(!(tmp574 && tmp575))
    {
      tmp577 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[190]] /* line_1042_1045.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta578 = stringAppend(MMC_REFSTRINGLIT(tmp576),tmp577);
      {
        const char* assert_cond = "(line_1042_1045.State0 >= Dynawo.Electrical.Constants.state.Open and line_1042_1045.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta578));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta578));
        }
      }
      tmp579 = 1;
    }
  }
  threadData->lastEquationSolved = 13180;
}

/*
equation index: 13181
type: ALGORITHM

  assert(line_1043_1044a.NbSwitchOffSignals >= 1 and line_1043_1044a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1043_1044a.NbSwitchOffSignals <= 3, has value: " + String(line_1043_1044a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13181};
  modelica_boolean tmp580;
  modelica_boolean tmp581;
  static const MMC_DEFSTRINGLIT(tmp582,96,"Variable violating min/max constraint: 1 <= line_1043_1044a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp583;
  modelica_metatype tmpMeta584;
  static int tmp585 = 0;
  if(!tmp585)
  {
    tmp580 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[191]] /* line_1043_1044a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp581 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[191]] /* line_1043_1044a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp580 && tmp581))
    {
      tmp583 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[191]] /* line_1043_1044a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta584 = stringAppend(MMC_REFSTRINGLIT(tmp582),tmp583);
      {
        const char* assert_cond = "(line_1043_1044a.NbSwitchOffSignals >= 1 and line_1043_1044a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta584));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta584));
        }
      }
      tmp585 = 1;
    }
  }
  threadData->lastEquationSolved = 13181;
}

/*
equation index: 13182
type: ALGORITHM

  assert(line_1043_1044a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1043_1044a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1043_1044a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1043_1044a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13182};
  modelica_boolean tmp586;
  modelica_boolean tmp587;
  static const MMC_DEFSTRINGLIT(tmp588,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1043_1044a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp589;
  modelica_metatype tmpMeta590;
  static int tmp591 = 0;
  if(!tmp591)
  {
    tmp586 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[192]] /* line_1043_1044a.State0 PARAM */),1);
    tmp587 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[192]] /* line_1043_1044a.State0 PARAM */),6);
    if(!(tmp586 && tmp587))
    {
      tmp589 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[192]] /* line_1043_1044a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta590 = stringAppend(MMC_REFSTRINGLIT(tmp588),tmp589);
      {
        const char* assert_cond = "(line_1043_1044a.State0 >= Dynawo.Electrical.Constants.state.Open and line_1043_1044a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta590));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta590));
        }
      }
      tmp591 = 1;
    }
  }
  threadData->lastEquationSolved = 13182;
}

/*
equation index: 13183
type: ALGORITHM

  assert(line_1043_1044b.NbSwitchOffSignals >= 1 and line_1043_1044b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_1043_1044b.NbSwitchOffSignals <= 3, has value: " + String(line_1043_1044b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13183};
  modelica_boolean tmp592;
  modelica_boolean tmp593;
  static const MMC_DEFSTRINGLIT(tmp594,96,"Variable violating min/max constraint: 1 <= line_1043_1044b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp595;
  modelica_metatype tmpMeta596;
  static int tmp597 = 0;
  if(!tmp597)
  {
    tmp592 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[193]] /* line_1043_1044b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp593 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[193]] /* line_1043_1044b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp592 && tmp593))
    {
      tmp595 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[193]] /* line_1043_1044b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta596 = stringAppend(MMC_REFSTRINGLIT(tmp594),tmp595);
      {
        const char* assert_cond = "(line_1043_1044b.NbSwitchOffSignals >= 1 and line_1043_1044b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta596));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta596));
        }
      }
      tmp597 = 1;
    }
  }
  threadData->lastEquationSolved = 13183;
}

/*
equation index: 13184
type: ALGORITHM

  assert(line_1043_1044b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1043_1044b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1043_1044b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_1043_1044b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13184};
  modelica_boolean tmp598;
  modelica_boolean tmp599;
  static const MMC_DEFSTRINGLIT(tmp600,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_1043_1044b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp601;
  modelica_metatype tmpMeta602;
  static int tmp603 = 0;
  if(!tmp603)
  {
    tmp598 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[194]] /* line_1043_1044b.State0 PARAM */),1);
    tmp599 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[194]] /* line_1043_1044b.State0 PARAM */),6);
    if(!(tmp598 && tmp599))
    {
      tmp601 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[194]] /* line_1043_1044b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta602 = stringAppend(MMC_REFSTRINGLIT(tmp600),tmp601);
      {
        const char* assert_cond = "(line_1043_1044b.State0 >= Dynawo.Electrical.Constants.state.Open and line_1043_1044b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta602));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta602));
        }
      }
      tmp603 = 1;
    }
  }
  threadData->lastEquationSolved = 13184;
}

/*
equation index: 13185
type: ALGORITHM

  assert(line_2031_2032a.NbSwitchOffSignals >= 1 and line_2031_2032a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_2031_2032a.NbSwitchOffSignals <= 3, has value: " + String(line_2031_2032a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13185};
  modelica_boolean tmp604;
  modelica_boolean tmp605;
  static const MMC_DEFSTRINGLIT(tmp606,96,"Variable violating min/max constraint: 1 <= line_2031_2032a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp607;
  modelica_metatype tmpMeta608;
  static int tmp609 = 0;
  if(!tmp609)
  {
    tmp604 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[195]] /* line_2031_2032a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp605 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[195]] /* line_2031_2032a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp604 && tmp605))
    {
      tmp607 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[195]] /* line_2031_2032a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta608 = stringAppend(MMC_REFSTRINGLIT(tmp606),tmp607);
      {
        const char* assert_cond = "(line_2031_2032a.NbSwitchOffSignals >= 1 and line_2031_2032a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta608));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta608));
        }
      }
      tmp609 = 1;
    }
  }
  threadData->lastEquationSolved = 13185;
}

/*
equation index: 13186
type: ALGORITHM

  assert(line_2031_2032a.State0 >= Dynawo.Electrical.Constants.state.Open and line_2031_2032a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_2031_2032a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_2031_2032a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13186};
  modelica_boolean tmp610;
  modelica_boolean tmp611;
  static const MMC_DEFSTRINGLIT(tmp612,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_2031_2032a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp613;
  modelica_metatype tmpMeta614;
  static int tmp615 = 0;
  if(!tmp615)
  {
    tmp610 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[196]] /* line_2031_2032a.State0 PARAM */),1);
    tmp611 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[196]] /* line_2031_2032a.State0 PARAM */),6);
    if(!(tmp610 && tmp611))
    {
      tmp613 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[196]] /* line_2031_2032a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta614 = stringAppend(MMC_REFSTRINGLIT(tmp612),tmp613);
      {
        const char* assert_cond = "(line_2031_2032a.State0 >= Dynawo.Electrical.Constants.state.Open and line_2031_2032a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta614));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta614));
        }
      }
      tmp615 = 1;
    }
  }
  threadData->lastEquationSolved = 13186;
}

/*
equation index: 13187
type: ALGORITHM

  assert(line_2031_2032b.NbSwitchOffSignals >= 1 and line_2031_2032b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_2031_2032b.NbSwitchOffSignals <= 3, has value: " + String(line_2031_2032b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13187};
  modelica_boolean tmp616;
  modelica_boolean tmp617;
  static const MMC_DEFSTRINGLIT(tmp618,96,"Variable violating min/max constraint: 1 <= line_2031_2032b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp619;
  modelica_metatype tmpMeta620;
  static int tmp621 = 0;
  if(!tmp621)
  {
    tmp616 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[197]] /* line_2031_2032b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp617 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[197]] /* line_2031_2032b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp616 && tmp617))
    {
      tmp619 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[197]] /* line_2031_2032b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta620 = stringAppend(MMC_REFSTRINGLIT(tmp618),tmp619);
      {
        const char* assert_cond = "(line_2031_2032b.NbSwitchOffSignals >= 1 and line_2031_2032b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta620));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta620));
        }
      }
      tmp621 = 1;
    }
  }
  threadData->lastEquationSolved = 13187;
}

/*
equation index: 13188
type: ALGORITHM

  assert(line_2031_2032b.State0 >= Dynawo.Electrical.Constants.state.Open and line_2031_2032b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_2031_2032b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_2031_2032b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13188};
  modelica_boolean tmp622;
  modelica_boolean tmp623;
  static const MMC_DEFSTRINGLIT(tmp624,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_2031_2032b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp625;
  modelica_metatype tmpMeta626;
  static int tmp627 = 0;
  if(!tmp627)
  {
    tmp622 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[198]] /* line_2031_2032b.State0 PARAM */),1);
    tmp623 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[198]] /* line_2031_2032b.State0 PARAM */),6);
    if(!(tmp622 && tmp623))
    {
      tmp625 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[198]] /* line_2031_2032b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta626 = stringAppend(MMC_REFSTRINGLIT(tmp624),tmp625);
      {
        const char* assert_cond = "(line_2031_2032b.State0 >= Dynawo.Electrical.Constants.state.Open and line_2031_2032b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta626));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta626));
        }
      }
      tmp627 = 1;
    }
  }
  threadData->lastEquationSolved = 13188;
}

/*
equation index: 13189
type: ALGORITHM

  assert(line_4011_4012.NbSwitchOffSignals >= 1 and line_4011_4012.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4011_4012.NbSwitchOffSignals <= 3, has value: " + String(line_4011_4012.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13189};
  modelica_boolean tmp628;
  modelica_boolean tmp629;
  static const MMC_DEFSTRINGLIT(tmp630,95,"Variable violating min/max constraint: 1 <= line_4011_4012.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp631;
  modelica_metatype tmpMeta632;
  static int tmp633 = 0;
  if(!tmp633)
  {
    tmp628 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[199]] /* line_4011_4012.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp629 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[199]] /* line_4011_4012.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp628 && tmp629))
    {
      tmp631 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[199]] /* line_4011_4012.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta632 = stringAppend(MMC_REFSTRINGLIT(tmp630),tmp631);
      {
        const char* assert_cond = "(line_4011_4012.NbSwitchOffSignals >= 1 and line_4011_4012.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta632));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta632));
        }
      }
      tmp633 = 1;
    }
  }
  threadData->lastEquationSolved = 13189;
}

/*
equation index: 13190
type: ALGORITHM

  assert(line_4011_4012.State0 >= Dynawo.Electrical.Constants.state.Open and line_4011_4012.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4011_4012.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4011_4012.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13190};
  modelica_boolean tmp634;
  modelica_boolean tmp635;
  static const MMC_DEFSTRINGLIT(tmp636,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4011_4012.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp637;
  modelica_metatype tmpMeta638;
  static int tmp639 = 0;
  if(!tmp639)
  {
    tmp634 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[200]] /* line_4011_4012.State0 PARAM */),1);
    tmp635 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[200]] /* line_4011_4012.State0 PARAM */),6);
    if(!(tmp634 && tmp635))
    {
      tmp637 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[200]] /* line_4011_4012.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta638 = stringAppend(MMC_REFSTRINGLIT(tmp636),tmp637);
      {
        const char* assert_cond = "(line_4011_4012.State0 >= Dynawo.Electrical.Constants.state.Open and line_4011_4012.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta638));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta638));
        }
      }
      tmp639 = 1;
    }
  }
  threadData->lastEquationSolved = 13190;
}

/*
equation index: 13191
type: ALGORITHM

  assert(line_4011_4021.NbSwitchOffSignals >= 1 and line_4011_4021.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4011_4021.NbSwitchOffSignals <= 3, has value: " + String(line_4011_4021.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13191};
  modelica_boolean tmp640;
  modelica_boolean tmp641;
  static const MMC_DEFSTRINGLIT(tmp642,95,"Variable violating min/max constraint: 1 <= line_4011_4021.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp643;
  modelica_metatype tmpMeta644;
  static int tmp645 = 0;
  if(!tmp645)
  {
    tmp640 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[201]] /* line_4011_4021.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp641 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[201]] /* line_4011_4021.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp640 && tmp641))
    {
      tmp643 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[201]] /* line_4011_4021.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta644 = stringAppend(MMC_REFSTRINGLIT(tmp642),tmp643);
      {
        const char* assert_cond = "(line_4011_4021.NbSwitchOffSignals >= 1 and line_4011_4021.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta644));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta644));
        }
      }
      tmp645 = 1;
    }
  }
  threadData->lastEquationSolved = 13191;
}

/*
equation index: 13192
type: ALGORITHM

  assert(line_4011_4021.State0 >= Dynawo.Electrical.Constants.state.Open and line_4011_4021.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4011_4021.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4011_4021.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13192};
  modelica_boolean tmp646;
  modelica_boolean tmp647;
  static const MMC_DEFSTRINGLIT(tmp648,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4011_4021.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp649;
  modelica_metatype tmpMeta650;
  static int tmp651 = 0;
  if(!tmp651)
  {
    tmp646 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[202]] /* line_4011_4021.State0 PARAM */),1);
    tmp647 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[202]] /* line_4011_4021.State0 PARAM */),6);
    if(!(tmp646 && tmp647))
    {
      tmp649 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[202]] /* line_4011_4021.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta650 = stringAppend(MMC_REFSTRINGLIT(tmp648),tmp649);
      {
        const char* assert_cond = "(line_4011_4021.State0 >= Dynawo.Electrical.Constants.state.Open and line_4011_4021.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta650));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta650));
        }
      }
      tmp651 = 1;
    }
  }
  threadData->lastEquationSolved = 13192;
}

/*
equation index: 13193
type: ALGORITHM

  assert(line_4011_4022.NbSwitchOffSignals >= 1 and line_4011_4022.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4011_4022.NbSwitchOffSignals <= 3, has value: " + String(line_4011_4022.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13193};
  modelica_boolean tmp652;
  modelica_boolean tmp653;
  static const MMC_DEFSTRINGLIT(tmp654,95,"Variable violating min/max constraint: 1 <= line_4011_4022.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp655;
  modelica_metatype tmpMeta656;
  static int tmp657 = 0;
  if(!tmp657)
  {
    tmp652 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[203]] /* line_4011_4022.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp653 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[203]] /* line_4011_4022.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp652 && tmp653))
    {
      tmp655 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[203]] /* line_4011_4022.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta656 = stringAppend(MMC_REFSTRINGLIT(tmp654),tmp655);
      {
        const char* assert_cond = "(line_4011_4022.NbSwitchOffSignals >= 1 and line_4011_4022.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta656));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta656));
        }
      }
      tmp657 = 1;
    }
  }
  threadData->lastEquationSolved = 13193;
}

/*
equation index: 13194
type: ALGORITHM

  assert(line_4011_4022.State0 >= Dynawo.Electrical.Constants.state.Open and line_4011_4022.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4011_4022.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4011_4022.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13194};
  modelica_boolean tmp658;
  modelica_boolean tmp659;
  static const MMC_DEFSTRINGLIT(tmp660,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4011_4022.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp661;
  modelica_metatype tmpMeta662;
  static int tmp663 = 0;
  if(!tmp663)
  {
    tmp658 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[204]] /* line_4011_4022.State0 PARAM */),1);
    tmp659 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[204]] /* line_4011_4022.State0 PARAM */),6);
    if(!(tmp658 && tmp659))
    {
      tmp661 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[204]] /* line_4011_4022.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta662 = stringAppend(MMC_REFSTRINGLIT(tmp660),tmp661);
      {
        const char* assert_cond = "(line_4011_4022.State0 >= Dynawo.Electrical.Constants.state.Open and line_4011_4022.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta662));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta662));
        }
      }
      tmp663 = 1;
    }
  }
  threadData->lastEquationSolved = 13194;
}

/*
equation index: 13195
type: ALGORITHM

  assert(line_4011_4071.NbSwitchOffSignals >= 1 and line_4011_4071.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4011_4071.NbSwitchOffSignals <= 3, has value: " + String(line_4011_4071.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13195};
  modelica_boolean tmp664;
  modelica_boolean tmp665;
  static const MMC_DEFSTRINGLIT(tmp666,95,"Variable violating min/max constraint: 1 <= line_4011_4071.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp667;
  modelica_metatype tmpMeta668;
  static int tmp669 = 0;
  if(!tmp669)
  {
    tmp664 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[205]] /* line_4011_4071.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp665 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[205]] /* line_4011_4071.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp664 && tmp665))
    {
      tmp667 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[205]] /* line_4011_4071.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta668 = stringAppend(MMC_REFSTRINGLIT(tmp666),tmp667);
      {
        const char* assert_cond = "(line_4011_4071.NbSwitchOffSignals >= 1 and line_4011_4071.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta668));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta668));
        }
      }
      tmp669 = 1;
    }
  }
  threadData->lastEquationSolved = 13195;
}

/*
equation index: 13196
type: ALGORITHM

  assert(line_4011_4071.State0 >= Dynawo.Electrical.Constants.state.Open and line_4011_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4011_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4011_4071.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13196};
  modelica_boolean tmp670;
  modelica_boolean tmp671;
  static const MMC_DEFSTRINGLIT(tmp672,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4011_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp673;
  modelica_metatype tmpMeta674;
  static int tmp675 = 0;
  if(!tmp675)
  {
    tmp670 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[206]] /* line_4011_4071.State0 PARAM */),1);
    tmp671 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[206]] /* line_4011_4071.State0 PARAM */),6);
    if(!(tmp670 && tmp671))
    {
      tmp673 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[206]] /* line_4011_4071.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta674 = stringAppend(MMC_REFSTRINGLIT(tmp672),tmp673);
      {
        const char* assert_cond = "(line_4011_4071.State0 >= Dynawo.Electrical.Constants.state.Open and line_4011_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta674));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta674));
        }
      }
      tmp675 = 1;
    }
  }
  threadData->lastEquationSolved = 13196;
}

/*
equation index: 13197
type: ALGORITHM

  assert(line_4012_4022.NbSwitchOffSignals >= 1 and line_4012_4022.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4012_4022.NbSwitchOffSignals <= 3, has value: " + String(line_4012_4022.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13197};
  modelica_boolean tmp676;
  modelica_boolean tmp677;
  static const MMC_DEFSTRINGLIT(tmp678,95,"Variable violating min/max constraint: 1 <= line_4012_4022.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp679;
  modelica_metatype tmpMeta680;
  static int tmp681 = 0;
  if(!tmp681)
  {
    tmp676 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[207]] /* line_4012_4022.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp677 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[207]] /* line_4012_4022.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp676 && tmp677))
    {
      tmp679 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[207]] /* line_4012_4022.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta680 = stringAppend(MMC_REFSTRINGLIT(tmp678),tmp679);
      {
        const char* assert_cond = "(line_4012_4022.NbSwitchOffSignals >= 1 and line_4012_4022.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta680));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta680));
        }
      }
      tmp681 = 1;
    }
  }
  threadData->lastEquationSolved = 13197;
}

/*
equation index: 13198
type: ALGORITHM

  assert(line_4012_4022.State0 >= Dynawo.Electrical.Constants.state.Open and line_4012_4022.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4012_4022.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4012_4022.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13198};
  modelica_boolean tmp682;
  modelica_boolean tmp683;
  static const MMC_DEFSTRINGLIT(tmp684,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4012_4022.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp685;
  modelica_metatype tmpMeta686;
  static int tmp687 = 0;
  if(!tmp687)
  {
    tmp682 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[208]] /* line_4012_4022.State0 PARAM */),1);
    tmp683 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[208]] /* line_4012_4022.State0 PARAM */),6);
    if(!(tmp682 && tmp683))
    {
      tmp685 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[208]] /* line_4012_4022.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta686 = stringAppend(MMC_REFSTRINGLIT(tmp684),tmp685);
      {
        const char* assert_cond = "(line_4012_4022.State0 >= Dynawo.Electrical.Constants.state.Open and line_4012_4022.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta686));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta686));
        }
      }
      tmp687 = 1;
    }
  }
  threadData->lastEquationSolved = 13198;
}

/*
equation index: 13199
type: ALGORITHM

  assert(line_4012_4071.NbSwitchOffSignals >= 1 and line_4012_4071.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4012_4071.NbSwitchOffSignals <= 3, has value: " + String(line_4012_4071.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13199};
  modelica_boolean tmp688;
  modelica_boolean tmp689;
  static const MMC_DEFSTRINGLIT(tmp690,95,"Variable violating min/max constraint: 1 <= line_4012_4071.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp691;
  modelica_metatype tmpMeta692;
  static int tmp693 = 0;
  if(!tmp693)
  {
    tmp688 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[209]] /* line_4012_4071.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp689 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[209]] /* line_4012_4071.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp688 && tmp689))
    {
      tmp691 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[209]] /* line_4012_4071.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta692 = stringAppend(MMC_REFSTRINGLIT(tmp690),tmp691);
      {
        const char* assert_cond = "(line_4012_4071.NbSwitchOffSignals >= 1 and line_4012_4071.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta692));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta692));
        }
      }
      tmp693 = 1;
    }
  }
  threadData->lastEquationSolved = 13199;
}

/*
equation index: 13200
type: ALGORITHM

  assert(line_4012_4071.State0 >= Dynawo.Electrical.Constants.state.Open and line_4012_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4012_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4012_4071.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13200};
  modelica_boolean tmp694;
  modelica_boolean tmp695;
  static const MMC_DEFSTRINGLIT(tmp696,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4012_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp697;
  modelica_metatype tmpMeta698;
  static int tmp699 = 0;
  if(!tmp699)
  {
    tmp694 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[210]] /* line_4012_4071.State0 PARAM */),1);
    tmp695 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[210]] /* line_4012_4071.State0 PARAM */),6);
    if(!(tmp694 && tmp695))
    {
      tmp697 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[210]] /* line_4012_4071.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta698 = stringAppend(MMC_REFSTRINGLIT(tmp696),tmp697);
      {
        const char* assert_cond = "(line_4012_4071.State0 >= Dynawo.Electrical.Constants.state.Open and line_4012_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta698));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta698));
        }
      }
      tmp699 = 1;
    }
  }
  threadData->lastEquationSolved = 13200;
}

/*
equation index: 13201
type: ALGORITHM

  assert(line_4021_4032.NbSwitchOffSignals >= 1 and line_4021_4032.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4021_4032.NbSwitchOffSignals <= 3, has value: " + String(line_4021_4032.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13201};
  modelica_boolean tmp700;
  modelica_boolean tmp701;
  static const MMC_DEFSTRINGLIT(tmp702,95,"Variable violating min/max constraint: 1 <= line_4021_4032.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp703;
  modelica_metatype tmpMeta704;
  static int tmp705 = 0;
  if(!tmp705)
  {
    tmp700 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[211]] /* line_4021_4032.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp701 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[211]] /* line_4021_4032.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp700 && tmp701))
    {
      tmp703 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[211]] /* line_4021_4032.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta704 = stringAppend(MMC_REFSTRINGLIT(tmp702),tmp703);
      {
        const char* assert_cond = "(line_4021_4032.NbSwitchOffSignals >= 1 and line_4021_4032.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta704));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta704));
        }
      }
      tmp705 = 1;
    }
  }
  threadData->lastEquationSolved = 13201;
}

/*
equation index: 13202
type: ALGORITHM

  assert(line_4021_4032.State0 >= Dynawo.Electrical.Constants.state.Open and line_4021_4032.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4021_4032.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4021_4032.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13202};
  modelica_boolean tmp706;
  modelica_boolean tmp707;
  static const MMC_DEFSTRINGLIT(tmp708,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4021_4032.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp709;
  modelica_metatype tmpMeta710;
  static int tmp711 = 0;
  if(!tmp711)
  {
    tmp706 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[212]] /* line_4021_4032.State0 PARAM */),1);
    tmp707 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[212]] /* line_4021_4032.State0 PARAM */),6);
    if(!(tmp706 && tmp707))
    {
      tmp709 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[212]] /* line_4021_4032.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta710 = stringAppend(MMC_REFSTRINGLIT(tmp708),tmp709);
      {
        const char* assert_cond = "(line_4021_4032.State0 >= Dynawo.Electrical.Constants.state.Open and line_4021_4032.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta710));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta710));
        }
      }
      tmp711 = 1;
    }
  }
  threadData->lastEquationSolved = 13202;
}

/*
equation index: 13203
type: ALGORITHM

  assert(line_4021_4042.NbSwitchOffSignals >= 1 and line_4021_4042.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4021_4042.NbSwitchOffSignals <= 3, has value: " + String(line_4021_4042.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13203};
  modelica_boolean tmp712;
  modelica_boolean tmp713;
  static const MMC_DEFSTRINGLIT(tmp714,95,"Variable violating min/max constraint: 1 <= line_4021_4042.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp715;
  modelica_metatype tmpMeta716;
  static int tmp717 = 0;
  if(!tmp717)
  {
    tmp712 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[213]] /* line_4021_4042.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp713 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[213]] /* line_4021_4042.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp712 && tmp713))
    {
      tmp715 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[213]] /* line_4021_4042.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta716 = stringAppend(MMC_REFSTRINGLIT(tmp714),tmp715);
      {
        const char* assert_cond = "(line_4021_4042.NbSwitchOffSignals >= 1 and line_4021_4042.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta716));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta716));
        }
      }
      tmp717 = 1;
    }
  }
  threadData->lastEquationSolved = 13203;
}

/*
equation index: 13204
type: ALGORITHM

  assert(line_4021_4042.State0 >= Dynawo.Electrical.Constants.state.Open and line_4021_4042.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4021_4042.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4021_4042.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13204};
  modelica_boolean tmp718;
  modelica_boolean tmp719;
  static const MMC_DEFSTRINGLIT(tmp720,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4021_4042.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp721;
  modelica_metatype tmpMeta722;
  static int tmp723 = 0;
  if(!tmp723)
  {
    tmp718 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[214]] /* line_4021_4042.State0 PARAM */),1);
    tmp719 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[214]] /* line_4021_4042.State0 PARAM */),6);
    if(!(tmp718 && tmp719))
    {
      tmp721 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[214]] /* line_4021_4042.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta722 = stringAppend(MMC_REFSTRINGLIT(tmp720),tmp721);
      {
        const char* assert_cond = "(line_4021_4042.State0 >= Dynawo.Electrical.Constants.state.Open and line_4021_4042.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta722));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta722));
        }
      }
      tmp723 = 1;
    }
  }
  threadData->lastEquationSolved = 13204;
}

/*
equation index: 13205
type: ALGORITHM

  assert(line_4022_4031a.NbSwitchOffSignals >= 1 and line_4022_4031a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4022_4031a.NbSwitchOffSignals <= 3, has value: " + String(line_4022_4031a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13205};
  modelica_boolean tmp724;
  modelica_boolean tmp725;
  static const MMC_DEFSTRINGLIT(tmp726,96,"Variable violating min/max constraint: 1 <= line_4022_4031a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp727;
  modelica_metatype tmpMeta728;
  static int tmp729 = 0;
  if(!tmp729)
  {
    tmp724 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[215]] /* line_4022_4031a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp725 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[215]] /* line_4022_4031a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp724 && tmp725))
    {
      tmp727 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[215]] /* line_4022_4031a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta728 = stringAppend(MMC_REFSTRINGLIT(tmp726),tmp727);
      {
        const char* assert_cond = "(line_4022_4031a.NbSwitchOffSignals >= 1 and line_4022_4031a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta728));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta728));
        }
      }
      tmp729 = 1;
    }
  }
  threadData->lastEquationSolved = 13205;
}

/*
equation index: 13206
type: ALGORITHM

  assert(line_4022_4031a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4022_4031a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4022_4031a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4022_4031a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13206};
  modelica_boolean tmp730;
  modelica_boolean tmp731;
  static const MMC_DEFSTRINGLIT(tmp732,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4022_4031a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp733;
  modelica_metatype tmpMeta734;
  static int tmp735 = 0;
  if(!tmp735)
  {
    tmp730 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[216]] /* line_4022_4031a.State0 PARAM */),1);
    tmp731 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[216]] /* line_4022_4031a.State0 PARAM */),6);
    if(!(tmp730 && tmp731))
    {
      tmp733 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[216]] /* line_4022_4031a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta734 = stringAppend(MMC_REFSTRINGLIT(tmp732),tmp733);
      {
        const char* assert_cond = "(line_4022_4031a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4022_4031a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta734));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta734));
        }
      }
      tmp735 = 1;
    }
  }
  threadData->lastEquationSolved = 13206;
}

/*
equation index: 13207
type: ALGORITHM

  assert(line_4022_4031b.NbSwitchOffSignals >= 1 and line_4022_4031b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4022_4031b.NbSwitchOffSignals <= 3, has value: " + String(line_4022_4031b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13207};
  modelica_boolean tmp736;
  modelica_boolean tmp737;
  static const MMC_DEFSTRINGLIT(tmp738,96,"Variable violating min/max constraint: 1 <= line_4022_4031b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp739;
  modelica_metatype tmpMeta740;
  static int tmp741 = 0;
  if(!tmp741)
  {
    tmp736 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[217]] /* line_4022_4031b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp737 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[217]] /* line_4022_4031b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp736 && tmp737))
    {
      tmp739 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[217]] /* line_4022_4031b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta740 = stringAppend(MMC_REFSTRINGLIT(tmp738),tmp739);
      {
        const char* assert_cond = "(line_4022_4031b.NbSwitchOffSignals >= 1 and line_4022_4031b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta740));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta740));
        }
      }
      tmp741 = 1;
    }
  }
  threadData->lastEquationSolved = 13207;
}

/*
equation index: 13208
type: ALGORITHM

  assert(line_4022_4031b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4022_4031b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4022_4031b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4022_4031b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13208};
  modelica_boolean tmp742;
  modelica_boolean tmp743;
  static const MMC_DEFSTRINGLIT(tmp744,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4022_4031b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp745;
  modelica_metatype tmpMeta746;
  static int tmp747 = 0;
  if(!tmp747)
  {
    tmp742 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[218]] /* line_4022_4031b.State0 PARAM */),1);
    tmp743 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[218]] /* line_4022_4031b.State0 PARAM */),6);
    if(!(tmp742 && tmp743))
    {
      tmp745 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[218]] /* line_4022_4031b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta746 = stringAppend(MMC_REFSTRINGLIT(tmp744),tmp745);
      {
        const char* assert_cond = "(line_4022_4031b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4022_4031b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta746));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta746));
        }
      }
      tmp747 = 1;
    }
  }
  threadData->lastEquationSolved = 13208;
}

/*
equation index: 13209
type: ALGORITHM

  assert(line_4031_4032.NbSwitchOffSignals >= 1 and line_4031_4032.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4031_4032.NbSwitchOffSignals <= 3, has value: " + String(line_4031_4032.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13209};
  modelica_boolean tmp748;
  modelica_boolean tmp749;
  static const MMC_DEFSTRINGLIT(tmp750,95,"Variable violating min/max constraint: 1 <= line_4031_4032.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp751;
  modelica_metatype tmpMeta752;
  static int tmp753 = 0;
  if(!tmp753)
  {
    tmp748 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[219]] /* line_4031_4032.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp749 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[219]] /* line_4031_4032.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp748 && tmp749))
    {
      tmp751 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[219]] /* line_4031_4032.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta752 = stringAppend(MMC_REFSTRINGLIT(tmp750),tmp751);
      {
        const char* assert_cond = "(line_4031_4032.NbSwitchOffSignals >= 1 and line_4031_4032.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta752));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta752));
        }
      }
      tmp753 = 1;
    }
  }
  threadData->lastEquationSolved = 13209;
}

/*
equation index: 13210
type: ALGORITHM

  assert(line_4031_4032.State0 >= Dynawo.Electrical.Constants.state.Open and line_4031_4032.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4031_4032.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4031_4032.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13210};
  modelica_boolean tmp754;
  modelica_boolean tmp755;
  static const MMC_DEFSTRINGLIT(tmp756,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4031_4032.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp757;
  modelica_metatype tmpMeta758;
  static int tmp759 = 0;
  if(!tmp759)
  {
    tmp754 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[220]] /* line_4031_4032.State0 PARAM */),1);
    tmp755 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[220]] /* line_4031_4032.State0 PARAM */),6);
    if(!(tmp754 && tmp755))
    {
      tmp757 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[220]] /* line_4031_4032.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta758 = stringAppend(MMC_REFSTRINGLIT(tmp756),tmp757);
      {
        const char* assert_cond = "(line_4031_4032.State0 >= Dynawo.Electrical.Constants.state.Open and line_4031_4032.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta758));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta758));
        }
      }
      tmp759 = 1;
    }
  }
  threadData->lastEquationSolved = 13210;
}

/*
equation index: 13211
type: ALGORITHM

  assert(line_4031_4041a.NbSwitchOffSignals >= 1 and line_4031_4041a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4031_4041a.NbSwitchOffSignals <= 3, has value: " + String(line_4031_4041a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13211};
  modelica_boolean tmp760;
  modelica_boolean tmp761;
  static const MMC_DEFSTRINGLIT(tmp762,96,"Variable violating min/max constraint: 1 <= line_4031_4041a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp763;
  modelica_metatype tmpMeta764;
  static int tmp765 = 0;
  if(!tmp765)
  {
    tmp760 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[221]] /* line_4031_4041a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp761 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[221]] /* line_4031_4041a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp760 && tmp761))
    {
      tmp763 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[221]] /* line_4031_4041a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta764 = stringAppend(MMC_REFSTRINGLIT(tmp762),tmp763);
      {
        const char* assert_cond = "(line_4031_4041a.NbSwitchOffSignals >= 1 and line_4031_4041a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta764));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta764));
        }
      }
      tmp765 = 1;
    }
  }
  threadData->lastEquationSolved = 13211;
}

/*
equation index: 13212
type: ALGORITHM

  assert(line_4031_4041a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4031_4041a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4031_4041a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4031_4041a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13212};
  modelica_boolean tmp766;
  modelica_boolean tmp767;
  static const MMC_DEFSTRINGLIT(tmp768,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4031_4041a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp769;
  modelica_metatype tmpMeta770;
  static int tmp771 = 0;
  if(!tmp771)
  {
    tmp766 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[222]] /* line_4031_4041a.State0 PARAM */),1);
    tmp767 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[222]] /* line_4031_4041a.State0 PARAM */),6);
    if(!(tmp766 && tmp767))
    {
      tmp769 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[222]] /* line_4031_4041a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta770 = stringAppend(MMC_REFSTRINGLIT(tmp768),tmp769);
      {
        const char* assert_cond = "(line_4031_4041a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4031_4041a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta770));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta770));
        }
      }
      tmp771 = 1;
    }
  }
  threadData->lastEquationSolved = 13212;
}

/*
equation index: 13213
type: ALGORITHM

  assert(line_4031_4041b.NbSwitchOffSignals >= 1 and line_4031_4041b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4031_4041b.NbSwitchOffSignals <= 3, has value: " + String(line_4031_4041b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13213};
  modelica_boolean tmp772;
  modelica_boolean tmp773;
  static const MMC_DEFSTRINGLIT(tmp774,96,"Variable violating min/max constraint: 1 <= line_4031_4041b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp775;
  modelica_metatype tmpMeta776;
  static int tmp777 = 0;
  if(!tmp777)
  {
    tmp772 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[223]] /* line_4031_4041b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp773 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[223]] /* line_4031_4041b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp772 && tmp773))
    {
      tmp775 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[223]] /* line_4031_4041b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta776 = stringAppend(MMC_REFSTRINGLIT(tmp774),tmp775);
      {
        const char* assert_cond = "(line_4031_4041b.NbSwitchOffSignals >= 1 and line_4031_4041b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta776));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta776));
        }
      }
      tmp777 = 1;
    }
  }
  threadData->lastEquationSolved = 13213;
}

/*
equation index: 13214
type: ALGORITHM

  assert(line_4031_4041b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4031_4041b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4031_4041b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4031_4041b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13214};
  modelica_boolean tmp778;
  modelica_boolean tmp779;
  static const MMC_DEFSTRINGLIT(tmp780,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4031_4041b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp781;
  modelica_metatype tmpMeta782;
  static int tmp783 = 0;
  if(!tmp783)
  {
    tmp778 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[224]] /* line_4031_4041b.State0 PARAM */),1);
    tmp779 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[224]] /* line_4031_4041b.State0 PARAM */),6);
    if(!(tmp778 && tmp779))
    {
      tmp781 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[224]] /* line_4031_4041b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta782 = stringAppend(MMC_REFSTRINGLIT(tmp780),tmp781);
      {
        const char* assert_cond = "(line_4031_4041b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4031_4041b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta782));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta782));
        }
      }
      tmp783 = 1;
    }
  }
  threadData->lastEquationSolved = 13214;
}

/*
equation index: 13215
type: ALGORITHM

  assert(line_4032_4042.NbSwitchOffSignals >= 1 and line_4032_4042.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4032_4042.NbSwitchOffSignals <= 3, has value: " + String(line_4032_4042.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13215};
  modelica_boolean tmp784;
  modelica_boolean tmp785;
  static const MMC_DEFSTRINGLIT(tmp786,95,"Variable violating min/max constraint: 1 <= line_4032_4042.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp787;
  modelica_metatype tmpMeta788;
  static int tmp789 = 0;
  if(!tmp789)
  {
    tmp784 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[225]] /* line_4032_4042.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp785 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[225]] /* line_4032_4042.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp784 && tmp785))
    {
      tmp787 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[225]] /* line_4032_4042.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta788 = stringAppend(MMC_REFSTRINGLIT(tmp786),tmp787);
      {
        const char* assert_cond = "(line_4032_4042.NbSwitchOffSignals >= 1 and line_4032_4042.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta788));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta788));
        }
      }
      tmp789 = 1;
    }
  }
  threadData->lastEquationSolved = 13215;
}

/*
equation index: 13216
type: ALGORITHM

  assert(line_4032_4042.State0 >= Dynawo.Electrical.Constants.state.Open and line_4032_4042.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4032_4042.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4032_4042.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13216};
  modelica_boolean tmp790;
  modelica_boolean tmp791;
  static const MMC_DEFSTRINGLIT(tmp792,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4032_4042.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp793;
  modelica_metatype tmpMeta794;
  static int tmp795 = 0;
  if(!tmp795)
  {
    tmp790 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[226]] /* line_4032_4042.State0 PARAM */),1);
    tmp791 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[226]] /* line_4032_4042.State0 PARAM */),6);
    if(!(tmp790 && tmp791))
    {
      tmp793 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[226]] /* line_4032_4042.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta794 = stringAppend(MMC_REFSTRINGLIT(tmp792),tmp793);
      {
        const char* assert_cond = "(line_4032_4042.State0 >= Dynawo.Electrical.Constants.state.Open and line_4032_4042.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta794));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta794));
        }
      }
      tmp795 = 1;
    }
  }
  threadData->lastEquationSolved = 13216;
}

/*
equation index: 13217
type: ALGORITHM

  assert(line_4032_4044.NbSwitchOffSignals >= 1 and line_4032_4044.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4032_4044.NbSwitchOffSignals <= 3, has value: " + String(line_4032_4044.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13217};
  modelica_boolean tmp796;
  modelica_boolean tmp797;
  static const MMC_DEFSTRINGLIT(tmp798,95,"Variable violating min/max constraint: 1 <= line_4032_4044.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp799;
  modelica_metatype tmpMeta800;
  static int tmp801 = 0;
  if(!tmp801)
  {
    tmp796 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[227]] /* line_4032_4044.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp797 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[227]] /* line_4032_4044.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp796 && tmp797))
    {
      tmp799 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[227]] /* line_4032_4044.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta800 = stringAppend(MMC_REFSTRINGLIT(tmp798),tmp799);
      {
        const char* assert_cond = "(line_4032_4044.NbSwitchOffSignals >= 1 and line_4032_4044.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta800));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta800));
        }
      }
      tmp801 = 1;
    }
  }
  threadData->lastEquationSolved = 13217;
}

/*
equation index: 13218
type: ALGORITHM

  assert(line_4032_4044.State0 >= Dynawo.Electrical.Constants.state.Open and line_4032_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4032_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4032_4044.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13218};
  modelica_boolean tmp802;
  modelica_boolean tmp803;
  static const MMC_DEFSTRINGLIT(tmp804,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4032_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp805;
  modelica_metatype tmpMeta806;
  static int tmp807 = 0;
  if(!tmp807)
  {
    tmp802 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[228]] /* line_4032_4044.State0 PARAM */),1);
    tmp803 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[228]] /* line_4032_4044.State0 PARAM */),6);
    if(!(tmp802 && tmp803))
    {
      tmp805 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[228]] /* line_4032_4044.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta806 = stringAppend(MMC_REFSTRINGLIT(tmp804),tmp805);
      {
        const char* assert_cond = "(line_4032_4044.State0 >= Dynawo.Electrical.Constants.state.Open and line_4032_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta806));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta806));
        }
      }
      tmp807 = 1;
    }
  }
  threadData->lastEquationSolved = 13218;
}

/*
equation index: 13219
type: ALGORITHM

  assert(line_4041_4044.NbSwitchOffSignals >= 1 and line_4041_4044.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4041_4044.NbSwitchOffSignals <= 3, has value: " + String(line_4041_4044.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13219};
  modelica_boolean tmp808;
  modelica_boolean tmp809;
  static const MMC_DEFSTRINGLIT(tmp810,95,"Variable violating min/max constraint: 1 <= line_4041_4044.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp811;
  modelica_metatype tmpMeta812;
  static int tmp813 = 0;
  if(!tmp813)
  {
    tmp808 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[229]] /* line_4041_4044.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp809 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[229]] /* line_4041_4044.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp808 && tmp809))
    {
      tmp811 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[229]] /* line_4041_4044.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta812 = stringAppend(MMC_REFSTRINGLIT(tmp810),tmp811);
      {
        const char* assert_cond = "(line_4041_4044.NbSwitchOffSignals >= 1 and line_4041_4044.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta812));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta812));
        }
      }
      tmp813 = 1;
    }
  }
  threadData->lastEquationSolved = 13219;
}

/*
equation index: 13220
type: ALGORITHM

  assert(line_4041_4044.State0 >= Dynawo.Electrical.Constants.state.Open and line_4041_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4041_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4041_4044.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13220};
  modelica_boolean tmp814;
  modelica_boolean tmp815;
  static const MMC_DEFSTRINGLIT(tmp816,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4041_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp817;
  modelica_metatype tmpMeta818;
  static int tmp819 = 0;
  if(!tmp819)
  {
    tmp814 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[230]] /* line_4041_4044.State0 PARAM */),1);
    tmp815 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[230]] /* line_4041_4044.State0 PARAM */),6);
    if(!(tmp814 && tmp815))
    {
      tmp817 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[230]] /* line_4041_4044.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta818 = stringAppend(MMC_REFSTRINGLIT(tmp816),tmp817);
      {
        const char* assert_cond = "(line_4041_4044.State0 >= Dynawo.Electrical.Constants.state.Open and line_4041_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta818));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta818));
        }
      }
      tmp819 = 1;
    }
  }
  threadData->lastEquationSolved = 13220;
}

/*
equation index: 13221
type: ALGORITHM

  assert(line_4041_4061.NbSwitchOffSignals >= 1 and line_4041_4061.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4041_4061.NbSwitchOffSignals <= 3, has value: " + String(line_4041_4061.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13221};
  modelica_boolean tmp820;
  modelica_boolean tmp821;
  static const MMC_DEFSTRINGLIT(tmp822,95,"Variable violating min/max constraint: 1 <= line_4041_4061.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp823;
  modelica_metatype tmpMeta824;
  static int tmp825 = 0;
  if(!tmp825)
  {
    tmp820 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[231]] /* line_4041_4061.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp821 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[231]] /* line_4041_4061.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp820 && tmp821))
    {
      tmp823 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[231]] /* line_4041_4061.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta824 = stringAppend(MMC_REFSTRINGLIT(tmp822),tmp823);
      {
        const char* assert_cond = "(line_4041_4061.NbSwitchOffSignals >= 1 and line_4041_4061.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta824));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta824));
        }
      }
      tmp825 = 1;
    }
  }
  threadData->lastEquationSolved = 13221;
}

/*
equation index: 13222
type: ALGORITHM

  assert(line_4041_4061.State0 >= Dynawo.Electrical.Constants.state.Open and line_4041_4061.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4041_4061.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4041_4061.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13222};
  modelica_boolean tmp826;
  modelica_boolean tmp827;
  static const MMC_DEFSTRINGLIT(tmp828,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4041_4061.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp829;
  modelica_metatype tmpMeta830;
  static int tmp831 = 0;
  if(!tmp831)
  {
    tmp826 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[232]] /* line_4041_4061.State0 PARAM */),1);
    tmp827 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[232]] /* line_4041_4061.State0 PARAM */),6);
    if(!(tmp826 && tmp827))
    {
      tmp829 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[232]] /* line_4041_4061.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta830 = stringAppend(MMC_REFSTRINGLIT(tmp828),tmp829);
      {
        const char* assert_cond = "(line_4041_4061.State0 >= Dynawo.Electrical.Constants.state.Open and line_4041_4061.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta830));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta830));
        }
      }
      tmp831 = 1;
    }
  }
  threadData->lastEquationSolved = 13222;
}

/*
equation index: 13223
type: ALGORITHM

  assert(line_4042_4043.NbSwitchOffSignals >= 1 and line_4042_4043.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4042_4043.NbSwitchOffSignals <= 3, has value: " + String(line_4042_4043.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13223};
  modelica_boolean tmp832;
  modelica_boolean tmp833;
  static const MMC_DEFSTRINGLIT(tmp834,95,"Variable violating min/max constraint: 1 <= line_4042_4043.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp835;
  modelica_metatype tmpMeta836;
  static int tmp837 = 0;
  if(!tmp837)
  {
    tmp832 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[233]] /* line_4042_4043.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp833 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[233]] /* line_4042_4043.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp832 && tmp833))
    {
      tmp835 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[233]] /* line_4042_4043.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta836 = stringAppend(MMC_REFSTRINGLIT(tmp834),tmp835);
      {
        const char* assert_cond = "(line_4042_4043.NbSwitchOffSignals >= 1 and line_4042_4043.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta836));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta836));
        }
      }
      tmp837 = 1;
    }
  }
  threadData->lastEquationSolved = 13223;
}

/*
equation index: 13224
type: ALGORITHM

  assert(line_4042_4043.State0 >= Dynawo.Electrical.Constants.state.Open and line_4042_4043.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4042_4043.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4042_4043.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13224};
  modelica_boolean tmp838;
  modelica_boolean tmp839;
  static const MMC_DEFSTRINGLIT(tmp840,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4042_4043.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp841;
  modelica_metatype tmpMeta842;
  static int tmp843 = 0;
  if(!tmp843)
  {
    tmp838 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[234]] /* line_4042_4043.State0 PARAM */),1);
    tmp839 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[234]] /* line_4042_4043.State0 PARAM */),6);
    if(!(tmp838 && tmp839))
    {
      tmp841 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[234]] /* line_4042_4043.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta842 = stringAppend(MMC_REFSTRINGLIT(tmp840),tmp841);
      {
        const char* assert_cond = "(line_4042_4043.State0 >= Dynawo.Electrical.Constants.state.Open and line_4042_4043.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta842));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta842));
        }
      }
      tmp843 = 1;
    }
  }
  threadData->lastEquationSolved = 13224;
}

/*
equation index: 13225
type: ALGORITHM

  assert(line_4042_4044.NbSwitchOffSignals >= 1 and line_4042_4044.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4042_4044.NbSwitchOffSignals <= 3, has value: " + String(line_4042_4044.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13225};
  modelica_boolean tmp844;
  modelica_boolean tmp845;
  static const MMC_DEFSTRINGLIT(tmp846,95,"Variable violating min/max constraint: 1 <= line_4042_4044.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp847;
  modelica_metatype tmpMeta848;
  static int tmp849 = 0;
  if(!tmp849)
  {
    tmp844 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[235]] /* line_4042_4044.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp845 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[235]] /* line_4042_4044.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp844 && tmp845))
    {
      tmp847 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[235]] /* line_4042_4044.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta848 = stringAppend(MMC_REFSTRINGLIT(tmp846),tmp847);
      {
        const char* assert_cond = "(line_4042_4044.NbSwitchOffSignals >= 1 and line_4042_4044.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta848));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta848));
        }
      }
      tmp849 = 1;
    }
  }
  threadData->lastEquationSolved = 13225;
}

/*
equation index: 13226
type: ALGORITHM

  assert(line_4042_4044.State0 >= Dynawo.Electrical.Constants.state.Open and line_4042_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4042_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4042_4044.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13226};
  modelica_boolean tmp850;
  modelica_boolean tmp851;
  static const MMC_DEFSTRINGLIT(tmp852,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4042_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp853;
  modelica_metatype tmpMeta854;
  static int tmp855 = 0;
  if(!tmp855)
  {
    tmp850 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[236]] /* line_4042_4044.State0 PARAM */),1);
    tmp851 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[236]] /* line_4042_4044.State0 PARAM */),6);
    if(!(tmp850 && tmp851))
    {
      tmp853 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[236]] /* line_4042_4044.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta854 = stringAppend(MMC_REFSTRINGLIT(tmp852),tmp853);
      {
        const char* assert_cond = "(line_4042_4044.State0 >= Dynawo.Electrical.Constants.state.Open and line_4042_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta854));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta854));
        }
      }
      tmp855 = 1;
    }
  }
  threadData->lastEquationSolved = 13226;
}

/*
equation index: 13227
type: ALGORITHM

  assert(line_4043_4044.NbSwitchOffSignals >= 1 and line_4043_4044.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4043_4044.NbSwitchOffSignals <= 3, has value: " + String(line_4043_4044.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13227};
  modelica_boolean tmp856;
  modelica_boolean tmp857;
  static const MMC_DEFSTRINGLIT(tmp858,95,"Variable violating min/max constraint: 1 <= line_4043_4044.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp859;
  modelica_metatype tmpMeta860;
  static int tmp861 = 0;
  if(!tmp861)
  {
    tmp856 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[237]] /* line_4043_4044.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp857 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[237]] /* line_4043_4044.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp856 && tmp857))
    {
      tmp859 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[237]] /* line_4043_4044.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta860 = stringAppend(MMC_REFSTRINGLIT(tmp858),tmp859);
      {
        const char* assert_cond = "(line_4043_4044.NbSwitchOffSignals >= 1 and line_4043_4044.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta860));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta860));
        }
      }
      tmp861 = 1;
    }
  }
  threadData->lastEquationSolved = 13227;
}

/*
equation index: 13228
type: ALGORITHM

  assert(line_4043_4044.State0 >= Dynawo.Electrical.Constants.state.Open and line_4043_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4043_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4043_4044.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13228};
  modelica_boolean tmp862;
  modelica_boolean tmp863;
  static const MMC_DEFSTRINGLIT(tmp864,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4043_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp865;
  modelica_metatype tmpMeta866;
  static int tmp867 = 0;
  if(!tmp867)
  {
    tmp862 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[238]] /* line_4043_4044.State0 PARAM */),1);
    tmp863 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[238]] /* line_4043_4044.State0 PARAM */),6);
    if(!(tmp862 && tmp863))
    {
      tmp865 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[238]] /* line_4043_4044.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta866 = stringAppend(MMC_REFSTRINGLIT(tmp864),tmp865);
      {
        const char* assert_cond = "(line_4043_4044.State0 >= Dynawo.Electrical.Constants.state.Open and line_4043_4044.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta866));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta866));
        }
      }
      tmp867 = 1;
    }
  }
  threadData->lastEquationSolved = 13228;
}

/*
equation index: 13229
type: ALGORITHM

  assert(line_4043_4046.NbSwitchOffSignals >= 1 and line_4043_4046.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4043_4046.NbSwitchOffSignals <= 3, has value: " + String(line_4043_4046.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13229};
  modelica_boolean tmp868;
  modelica_boolean tmp869;
  static const MMC_DEFSTRINGLIT(tmp870,95,"Variable violating min/max constraint: 1 <= line_4043_4046.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp871;
  modelica_metatype tmpMeta872;
  static int tmp873 = 0;
  if(!tmp873)
  {
    tmp868 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[239]] /* line_4043_4046.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp869 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[239]] /* line_4043_4046.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp868 && tmp869))
    {
      tmp871 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[239]] /* line_4043_4046.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta872 = stringAppend(MMC_REFSTRINGLIT(tmp870),tmp871);
      {
        const char* assert_cond = "(line_4043_4046.NbSwitchOffSignals >= 1 and line_4043_4046.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta872));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta872));
        }
      }
      tmp873 = 1;
    }
  }
  threadData->lastEquationSolved = 13229;
}

/*
equation index: 13230
type: ALGORITHM

  assert(line_4043_4046.State0 >= Dynawo.Electrical.Constants.state.Open and line_4043_4046.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4043_4046.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4043_4046.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13230};
  modelica_boolean tmp874;
  modelica_boolean tmp875;
  static const MMC_DEFSTRINGLIT(tmp876,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4043_4046.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp877;
  modelica_metatype tmpMeta878;
  static int tmp879 = 0;
  if(!tmp879)
  {
    tmp874 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[240]] /* line_4043_4046.State0 PARAM */),1);
    tmp875 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[240]] /* line_4043_4046.State0 PARAM */),6);
    if(!(tmp874 && tmp875))
    {
      tmp877 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[240]] /* line_4043_4046.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta878 = stringAppend(MMC_REFSTRINGLIT(tmp876),tmp877);
      {
        const char* assert_cond = "(line_4043_4046.State0 >= Dynawo.Electrical.Constants.state.Open and line_4043_4046.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta878));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta878));
        }
      }
      tmp879 = 1;
    }
  }
  threadData->lastEquationSolved = 13230;
}

/*
equation index: 13231
type: ALGORITHM

  assert(line_4043_4047.NbSwitchOffSignals >= 1 and line_4043_4047.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4043_4047.NbSwitchOffSignals <= 3, has value: " + String(line_4043_4047.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13231};
  modelica_boolean tmp880;
  modelica_boolean tmp881;
  static const MMC_DEFSTRINGLIT(tmp882,95,"Variable violating min/max constraint: 1 <= line_4043_4047.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp883;
  modelica_metatype tmpMeta884;
  static int tmp885 = 0;
  if(!tmp885)
  {
    tmp880 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[241]] /* line_4043_4047.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp881 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[241]] /* line_4043_4047.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp880 && tmp881))
    {
      tmp883 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[241]] /* line_4043_4047.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta884 = stringAppend(MMC_REFSTRINGLIT(tmp882),tmp883);
      {
        const char* assert_cond = "(line_4043_4047.NbSwitchOffSignals >= 1 and line_4043_4047.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta884));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta884));
        }
      }
      tmp885 = 1;
    }
  }
  threadData->lastEquationSolved = 13231;
}

/*
equation index: 13232
type: ALGORITHM

  assert(line_4043_4047.State0 >= Dynawo.Electrical.Constants.state.Open and line_4043_4047.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4043_4047.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4043_4047.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13232};
  modelica_boolean tmp886;
  modelica_boolean tmp887;
  static const MMC_DEFSTRINGLIT(tmp888,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4043_4047.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp889;
  modelica_metatype tmpMeta890;
  static int tmp891 = 0;
  if(!tmp891)
  {
    tmp886 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[242]] /* line_4043_4047.State0 PARAM */),1);
    tmp887 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[242]] /* line_4043_4047.State0 PARAM */),6);
    if(!(tmp886 && tmp887))
    {
      tmp889 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[242]] /* line_4043_4047.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta890 = stringAppend(MMC_REFSTRINGLIT(tmp888),tmp889);
      {
        const char* assert_cond = "(line_4043_4047.State0 >= Dynawo.Electrical.Constants.state.Open and line_4043_4047.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta890));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta890));
        }
      }
      tmp891 = 1;
    }
  }
  threadData->lastEquationSolved = 13232;
}

/*
equation index: 13233
type: ALGORITHM

  assert(line_4044_4045a.NbSwitchOffSignals >= 1 and line_4044_4045a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4044_4045a.NbSwitchOffSignals <= 3, has value: " + String(line_4044_4045a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13233};
  modelica_boolean tmp892;
  modelica_boolean tmp893;
  static const MMC_DEFSTRINGLIT(tmp894,96,"Variable violating min/max constraint: 1 <= line_4044_4045a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp895;
  modelica_metatype tmpMeta896;
  static int tmp897 = 0;
  if(!tmp897)
  {
    tmp892 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* line_4044_4045a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp893 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* line_4044_4045a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp892 && tmp893))
    {
      tmp895 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[243]] /* line_4044_4045a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta896 = stringAppend(MMC_REFSTRINGLIT(tmp894),tmp895);
      {
        const char* assert_cond = "(line_4044_4045a.NbSwitchOffSignals >= 1 and line_4044_4045a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta896));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta896));
        }
      }
      tmp897 = 1;
    }
  }
  threadData->lastEquationSolved = 13233;
}

/*
equation index: 13234
type: ALGORITHM

  assert(line_4044_4045a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4044_4045a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4044_4045a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4044_4045a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13234};
  modelica_boolean tmp898;
  modelica_boolean tmp899;
  static const MMC_DEFSTRINGLIT(tmp900,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4044_4045a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp901;
  modelica_metatype tmpMeta902;
  static int tmp903 = 0;
  if(!tmp903)
  {
    tmp898 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[244]] /* line_4044_4045a.State0 PARAM */),1);
    tmp899 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[244]] /* line_4044_4045a.State0 PARAM */),6);
    if(!(tmp898 && tmp899))
    {
      tmp901 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[244]] /* line_4044_4045a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta902 = stringAppend(MMC_REFSTRINGLIT(tmp900),tmp901);
      {
        const char* assert_cond = "(line_4044_4045a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4044_4045a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta902));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta902));
        }
      }
      tmp903 = 1;
    }
  }
  threadData->lastEquationSolved = 13234;
}

/*
equation index: 13235
type: ALGORITHM

  assert(line_4044_4045b.NbSwitchOffSignals >= 1 and line_4044_4045b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4044_4045b.NbSwitchOffSignals <= 3, has value: " + String(line_4044_4045b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13235};
  modelica_boolean tmp904;
  modelica_boolean tmp905;
  static const MMC_DEFSTRINGLIT(tmp906,96,"Variable violating min/max constraint: 1 <= line_4044_4045b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp907;
  modelica_metatype tmpMeta908;
  static int tmp909 = 0;
  if(!tmp909)
  {
    tmp904 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* line_4044_4045b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp905 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* line_4044_4045b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp904 && tmp905))
    {
      tmp907 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[245]] /* line_4044_4045b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta908 = stringAppend(MMC_REFSTRINGLIT(tmp906),tmp907);
      {
        const char* assert_cond = "(line_4044_4045b.NbSwitchOffSignals >= 1 and line_4044_4045b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta908));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta908));
        }
      }
      tmp909 = 1;
    }
  }
  threadData->lastEquationSolved = 13235;
}

/*
equation index: 13236
type: ALGORITHM

  assert(line_4044_4045b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4044_4045b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4044_4045b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4044_4045b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13236};
  modelica_boolean tmp910;
  modelica_boolean tmp911;
  static const MMC_DEFSTRINGLIT(tmp912,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4044_4045b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp913;
  modelica_metatype tmpMeta914;
  static int tmp915 = 0;
  if(!tmp915)
  {
    tmp910 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* line_4044_4045b.State0 PARAM */),1);
    tmp911 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* line_4044_4045b.State0 PARAM */),6);
    if(!(tmp910 && tmp911))
    {
      tmp913 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[246]] /* line_4044_4045b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta914 = stringAppend(MMC_REFSTRINGLIT(tmp912),tmp913);
      {
        const char* assert_cond = "(line_4044_4045b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4044_4045b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta914));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta914));
        }
      }
      tmp915 = 1;
    }
  }
  threadData->lastEquationSolved = 13236;
}

/*
equation index: 13237
type: ALGORITHM

  assert(line_4045_4051a.NbSwitchOffSignals >= 1 and line_4045_4051a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4045_4051a.NbSwitchOffSignals <= 3, has value: " + String(line_4045_4051a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13237};
  modelica_boolean tmp916;
  modelica_boolean tmp917;
  static const MMC_DEFSTRINGLIT(tmp918,96,"Variable violating min/max constraint: 1 <= line_4045_4051a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp919;
  modelica_metatype tmpMeta920;
  static int tmp921 = 0;
  if(!tmp921)
  {
    tmp916 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* line_4045_4051a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp917 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* line_4045_4051a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp916 && tmp917))
    {
      tmp919 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[247]] /* line_4045_4051a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta920 = stringAppend(MMC_REFSTRINGLIT(tmp918),tmp919);
      {
        const char* assert_cond = "(line_4045_4051a.NbSwitchOffSignals >= 1 and line_4045_4051a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta920));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta920));
        }
      }
      tmp921 = 1;
    }
  }
  threadData->lastEquationSolved = 13237;
}

/*
equation index: 13238
type: ALGORITHM

  assert(line_4045_4051a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4045_4051a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4045_4051a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4045_4051a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13238};
  modelica_boolean tmp922;
  modelica_boolean tmp923;
  static const MMC_DEFSTRINGLIT(tmp924,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4045_4051a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp925;
  modelica_metatype tmpMeta926;
  static int tmp927 = 0;
  if(!tmp927)
  {
    tmp922 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* line_4045_4051a.State0 PARAM */),1);
    tmp923 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* line_4045_4051a.State0 PARAM */),6);
    if(!(tmp922 && tmp923))
    {
      tmp925 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[248]] /* line_4045_4051a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta926 = stringAppend(MMC_REFSTRINGLIT(tmp924),tmp925);
      {
        const char* assert_cond = "(line_4045_4051a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4045_4051a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta926));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta926));
        }
      }
      tmp927 = 1;
    }
  }
  threadData->lastEquationSolved = 13238;
}

/*
equation index: 13239
type: ALGORITHM

  assert(line_4045_4051b.NbSwitchOffSignals >= 1 and line_4045_4051b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4045_4051b.NbSwitchOffSignals <= 3, has value: " + String(line_4045_4051b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13239};
  modelica_boolean tmp928;
  modelica_boolean tmp929;
  static const MMC_DEFSTRINGLIT(tmp930,96,"Variable violating min/max constraint: 1 <= line_4045_4051b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp931;
  modelica_metatype tmpMeta932;
  static int tmp933 = 0;
  if(!tmp933)
  {
    tmp928 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[249]] /* line_4045_4051b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp929 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[249]] /* line_4045_4051b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp928 && tmp929))
    {
      tmp931 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[249]] /* line_4045_4051b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta932 = stringAppend(MMC_REFSTRINGLIT(tmp930),tmp931);
      {
        const char* assert_cond = "(line_4045_4051b.NbSwitchOffSignals >= 1 and line_4045_4051b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta932));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta932));
        }
      }
      tmp933 = 1;
    }
  }
  threadData->lastEquationSolved = 13239;
}

/*
equation index: 13240
type: ALGORITHM

  assert(line_4045_4051b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4045_4051b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4045_4051b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4045_4051b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13240};
  modelica_boolean tmp934;
  modelica_boolean tmp935;
  static const MMC_DEFSTRINGLIT(tmp936,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4045_4051b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp937;
  modelica_metatype tmpMeta938;
  static int tmp939 = 0;
  if(!tmp939)
  {
    tmp934 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[250]] /* line_4045_4051b.State0 PARAM */),1);
    tmp935 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[250]] /* line_4045_4051b.State0 PARAM */),6);
    if(!(tmp934 && tmp935))
    {
      tmp937 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[250]] /* line_4045_4051b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta938 = stringAppend(MMC_REFSTRINGLIT(tmp936),tmp937);
      {
        const char* assert_cond = "(line_4045_4051b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4045_4051b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta938));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta938));
        }
      }
      tmp939 = 1;
    }
  }
  threadData->lastEquationSolved = 13240;
}

/*
equation index: 13241
type: ALGORITHM

  assert(line_4045_4062.NbSwitchOffSignals >= 1 and line_4045_4062.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4045_4062.NbSwitchOffSignals <= 3, has value: " + String(line_4045_4062.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13241};
  modelica_boolean tmp940;
  modelica_boolean tmp941;
  static const MMC_DEFSTRINGLIT(tmp942,95,"Variable violating min/max constraint: 1 <= line_4045_4062.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp943;
  modelica_metatype tmpMeta944;
  static int tmp945 = 0;
  if(!tmp945)
  {
    tmp940 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* line_4045_4062.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp941 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* line_4045_4062.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp940 && tmp941))
    {
      tmp943 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[251]] /* line_4045_4062.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta944 = stringAppend(MMC_REFSTRINGLIT(tmp942),tmp943);
      {
        const char* assert_cond = "(line_4045_4062.NbSwitchOffSignals >= 1 and line_4045_4062.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta944));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta944));
        }
      }
      tmp945 = 1;
    }
  }
  threadData->lastEquationSolved = 13241;
}

/*
equation index: 13242
type: ALGORITHM

  assert(line_4045_4062.State0 >= Dynawo.Electrical.Constants.state.Open and line_4045_4062.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4045_4062.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4045_4062.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13242};
  modelica_boolean tmp946;
  modelica_boolean tmp947;
  static const MMC_DEFSTRINGLIT(tmp948,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4045_4062.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp949;
  modelica_metatype tmpMeta950;
  static int tmp951 = 0;
  if(!tmp951)
  {
    tmp946 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* line_4045_4062.State0 PARAM */),1);
    tmp947 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* line_4045_4062.State0 PARAM */),6);
    if(!(tmp946 && tmp947))
    {
      tmp949 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[252]] /* line_4045_4062.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta950 = stringAppend(MMC_REFSTRINGLIT(tmp948),tmp949);
      {
        const char* assert_cond = "(line_4045_4062.State0 >= Dynawo.Electrical.Constants.state.Open and line_4045_4062.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta950));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta950));
        }
      }
      tmp951 = 1;
    }
  }
  threadData->lastEquationSolved = 13242;
}

/*
equation index: 13243
type: ALGORITHM

  assert(line_4046_4047.NbSwitchOffSignals >= 1 and line_4046_4047.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4046_4047.NbSwitchOffSignals <= 3, has value: " + String(line_4046_4047.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13243};
  modelica_boolean tmp952;
  modelica_boolean tmp953;
  static const MMC_DEFSTRINGLIT(tmp954,95,"Variable violating min/max constraint: 1 <= line_4046_4047.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp955;
  modelica_metatype tmpMeta956;
  static int tmp957 = 0;
  if(!tmp957)
  {
    tmp952 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* line_4046_4047.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp953 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* line_4046_4047.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp952 && tmp953))
    {
      tmp955 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[253]] /* line_4046_4047.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta956 = stringAppend(MMC_REFSTRINGLIT(tmp954),tmp955);
      {
        const char* assert_cond = "(line_4046_4047.NbSwitchOffSignals >= 1 and line_4046_4047.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta956));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta956));
        }
      }
      tmp957 = 1;
    }
  }
  threadData->lastEquationSolved = 13243;
}

/*
equation index: 13244
type: ALGORITHM

  assert(line_4046_4047.State0 >= Dynawo.Electrical.Constants.state.Open and line_4046_4047.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4046_4047.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4046_4047.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13244};
  modelica_boolean tmp958;
  modelica_boolean tmp959;
  static const MMC_DEFSTRINGLIT(tmp960,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4046_4047.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp961;
  modelica_metatype tmpMeta962;
  static int tmp963 = 0;
  if(!tmp963)
  {
    tmp958 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* line_4046_4047.State0 PARAM */),1);
    tmp959 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* line_4046_4047.State0 PARAM */),6);
    if(!(tmp958 && tmp959))
    {
      tmp961 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[254]] /* line_4046_4047.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta962 = stringAppend(MMC_REFSTRINGLIT(tmp960),tmp961);
      {
        const char* assert_cond = "(line_4046_4047.State0 >= Dynawo.Electrical.Constants.state.Open and line_4046_4047.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta962));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta962));
        }
      }
      tmp963 = 1;
    }
  }
  threadData->lastEquationSolved = 13244;
}

/*
equation index: 13245
type: ALGORITHM

  assert(line_4061_4062.NbSwitchOffSignals >= 1 and line_4061_4062.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4061_4062.NbSwitchOffSignals <= 3, has value: " + String(line_4061_4062.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13245};
  modelica_boolean tmp964;
  modelica_boolean tmp965;
  static const MMC_DEFSTRINGLIT(tmp966,95,"Variable violating min/max constraint: 1 <= line_4061_4062.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp967;
  modelica_metatype tmpMeta968;
  static int tmp969 = 0;
  if(!tmp969)
  {
    tmp964 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* line_4061_4062.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp965 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* line_4061_4062.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp964 && tmp965))
    {
      tmp967 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[255]] /* line_4061_4062.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta968 = stringAppend(MMC_REFSTRINGLIT(tmp966),tmp967);
      {
        const char* assert_cond = "(line_4061_4062.NbSwitchOffSignals >= 1 and line_4061_4062.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta968));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta968));
        }
      }
      tmp969 = 1;
    }
  }
  threadData->lastEquationSolved = 13245;
}

/*
equation index: 13246
type: ALGORITHM

  assert(line_4061_4062.State0 >= Dynawo.Electrical.Constants.state.Open and line_4061_4062.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4061_4062.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4061_4062.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13246};
  modelica_boolean tmp970;
  modelica_boolean tmp971;
  static const MMC_DEFSTRINGLIT(tmp972,162,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4061_4062.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp973;
  modelica_metatype tmpMeta974;
  static int tmp975 = 0;
  if(!tmp975)
  {
    tmp970 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* line_4061_4062.State0 PARAM */),1);
    tmp971 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* line_4061_4062.State0 PARAM */),6);
    if(!(tmp970 && tmp971))
    {
      tmp973 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[256]] /* line_4061_4062.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta974 = stringAppend(MMC_REFSTRINGLIT(tmp972),tmp973);
      {
        const char* assert_cond = "(line_4061_4062.State0 >= Dynawo.Electrical.Constants.state.Open and line_4061_4062.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta974));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta974));
        }
      }
      tmp975 = 1;
    }
  }
  threadData->lastEquationSolved = 13246;
}

/*
equation index: 13247
type: ALGORITHM

  assert(line_4062_4063a.NbSwitchOffSignals >= 1 and line_4062_4063a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4062_4063a.NbSwitchOffSignals <= 3, has value: " + String(line_4062_4063a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13247};
  modelica_boolean tmp976;
  modelica_boolean tmp977;
  static const MMC_DEFSTRINGLIT(tmp978,96,"Variable violating min/max constraint: 1 <= line_4062_4063a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp979;
  modelica_metatype tmpMeta980;
  static int tmp981 = 0;
  if(!tmp981)
  {
    tmp976 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* line_4062_4063a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp977 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* line_4062_4063a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp976 && tmp977))
    {
      tmp979 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[257]] /* line_4062_4063a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta980 = stringAppend(MMC_REFSTRINGLIT(tmp978),tmp979);
      {
        const char* assert_cond = "(line_4062_4063a.NbSwitchOffSignals >= 1 and line_4062_4063a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta980));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta980));
        }
      }
      tmp981 = 1;
    }
  }
  threadData->lastEquationSolved = 13247;
}

/*
equation index: 13248
type: ALGORITHM

  assert(line_4062_4063a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4062_4063a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4062_4063a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4062_4063a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13248};
  modelica_boolean tmp982;
  modelica_boolean tmp983;
  static const MMC_DEFSTRINGLIT(tmp984,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4062_4063a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp985;
  modelica_metatype tmpMeta986;
  static int tmp987 = 0;
  if(!tmp987)
  {
    tmp982 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* line_4062_4063a.State0 PARAM */),1);
    tmp983 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* line_4062_4063a.State0 PARAM */),6);
    if(!(tmp982 && tmp983))
    {
      tmp985 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[258]] /* line_4062_4063a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta986 = stringAppend(MMC_REFSTRINGLIT(tmp984),tmp985);
      {
        const char* assert_cond = "(line_4062_4063a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4062_4063a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta986));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta986));
        }
      }
      tmp987 = 1;
    }
  }
  threadData->lastEquationSolved = 13248;
}

/*
equation index: 13249
type: ALGORITHM

  assert(line_4062_4063b.NbSwitchOffSignals >= 1 and line_4062_4063b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4062_4063b.NbSwitchOffSignals <= 3, has value: " + String(line_4062_4063b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13249};
  modelica_boolean tmp988;
  modelica_boolean tmp989;
  static const MMC_DEFSTRINGLIT(tmp990,96,"Variable violating min/max constraint: 1 <= line_4062_4063b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp991;
  modelica_metatype tmpMeta992;
  static int tmp993 = 0;
  if(!tmp993)
  {
    tmp988 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* line_4062_4063b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp989 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* line_4062_4063b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp988 && tmp989))
    {
      tmp991 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[259]] /* line_4062_4063b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta992 = stringAppend(MMC_REFSTRINGLIT(tmp990),tmp991);
      {
        const char* assert_cond = "(line_4062_4063b.NbSwitchOffSignals >= 1 and line_4062_4063b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta992));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta992));
        }
      }
      tmp993 = 1;
    }
  }
  threadData->lastEquationSolved = 13249;
}

/*
equation index: 13250
type: ALGORITHM

  assert(line_4062_4063b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4062_4063b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4062_4063b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4062_4063b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13250};
  modelica_boolean tmp994;
  modelica_boolean tmp995;
  static const MMC_DEFSTRINGLIT(tmp996,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4062_4063b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp997;
  modelica_metatype tmpMeta998;
  static int tmp999 = 0;
  if(!tmp999)
  {
    tmp994 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* line_4062_4063b.State0 PARAM */),1);
    tmp995 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* line_4062_4063b.State0 PARAM */),6);
    if(!(tmp994 && tmp995))
    {
      tmp997 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[260]] /* line_4062_4063b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta998 = stringAppend(MMC_REFSTRINGLIT(tmp996),tmp997);
      {
        const char* assert_cond = "(line_4062_4063b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4062_4063b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta998));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta998));
        }
      }
      tmp999 = 1;
    }
  }
  threadData->lastEquationSolved = 13250;
}

/*
equation index: 13251
type: ALGORITHM

  assert(line_4071_4072a.NbSwitchOffSignals >= 1 and line_4071_4072a.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4071_4072a.NbSwitchOffSignals <= 3, has value: " + String(line_4071_4072a.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13251};
  modelica_boolean tmp1000;
  modelica_boolean tmp1001;
  static const MMC_DEFSTRINGLIT(tmp1002,96,"Variable violating min/max constraint: 1 <= line_4071_4072a.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1003;
  modelica_metatype tmpMeta1004;
  static int tmp1005 = 0;
  if(!tmp1005)
  {
    tmp1000 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[261]] /* line_4071_4072a.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1001 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[261]] /* line_4071_4072a.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1000 && tmp1001))
    {
      tmp1003 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[261]] /* line_4071_4072a.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1004 = stringAppend(MMC_REFSTRINGLIT(tmp1002),tmp1003);
      {
        const char* assert_cond = "(line_4071_4072a.NbSwitchOffSignals >= 1 and line_4071_4072a.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1004));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1004));
        }
      }
      tmp1005 = 1;
    }
  }
  threadData->lastEquationSolved = 13251;
}

/*
equation index: 13252
type: ALGORITHM

  assert(line_4071_4072a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4071_4072a.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4071_4072a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4071_4072a.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13252};
  modelica_boolean tmp1006;
  modelica_boolean tmp1007;
  static const MMC_DEFSTRINGLIT(tmp1008,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4071_4072a.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1009;
  modelica_metatype tmpMeta1010;
  static int tmp1011 = 0;
  if(!tmp1011)
  {
    tmp1006 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* line_4071_4072a.State0 PARAM */),1);
    tmp1007 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* line_4071_4072a.State0 PARAM */),6);
    if(!(tmp1006 && tmp1007))
    {
      tmp1009 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[262]] /* line_4071_4072a.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1010 = stringAppend(MMC_REFSTRINGLIT(tmp1008),tmp1009);
      {
        const char* assert_cond = "(line_4071_4072a.State0 >= Dynawo.Electrical.Constants.state.Open and line_4071_4072a.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1010));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1010));
        }
      }
      tmp1011 = 1;
    }
  }
  threadData->lastEquationSolved = 13252;
}

/*
equation index: 13253
type: ALGORITHM

  assert(line_4071_4072b.NbSwitchOffSignals >= 1 and line_4071_4072b.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= line_4071_4072b.NbSwitchOffSignals <= 3, has value: " + String(line_4071_4072b.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13253};
  modelica_boolean tmp1012;
  modelica_boolean tmp1013;
  static const MMC_DEFSTRINGLIT(tmp1014,96,"Variable violating min/max constraint: 1 <= line_4071_4072b.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1015;
  modelica_metatype tmpMeta1016;
  static int tmp1017 = 0;
  if(!tmp1017)
  {
    tmp1012 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* line_4071_4072b.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1013 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* line_4071_4072b.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1012 && tmp1013))
    {
      tmp1015 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[263]] /* line_4071_4072b.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1016 = stringAppend(MMC_REFSTRINGLIT(tmp1014),tmp1015);
      {
        const char* assert_cond = "(line_4071_4072b.NbSwitchOffSignals >= 1 and line_4071_4072b.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1016));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1016));
        }
      }
      tmp1017 = 1;
    }
  }
  threadData->lastEquationSolved = 13253;
}

/*
equation index: 13254
type: ALGORITHM

  assert(line_4071_4072b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4071_4072b.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4071_4072b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(line_4071_4072b.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13254};
  modelica_boolean tmp1018;
  modelica_boolean tmp1019;
  static const MMC_DEFSTRINGLIT(tmp1020,163,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= line_4071_4072b.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1021;
  modelica_metatype tmpMeta1022;
  static int tmp1023 = 0;
  if(!tmp1023)
  {
    tmp1018 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* line_4071_4072b.State0 PARAM */),1);
    tmp1019 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* line_4071_4072b.State0 PARAM */),6);
    if(!(tmp1018 && tmp1019))
    {
      tmp1021 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[264]] /* line_4071_4072b.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1022 = stringAppend(MMC_REFSTRINGLIT(tmp1020),tmp1021);
      {
        const char* assert_cond = "(line_4071_4072b.State0 >= Dynawo.Electrical.Constants.state.Open and line_4071_4072b.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1022));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLine.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1022));
        }
      }
      tmp1023 = 1;
    }
  }
  threadData->lastEquationSolved = 13254;
}

/*
equation index: 13255
type: ALGORITHM

  assert(load_01.NbSwitchOffSignals >= 1 and load_01.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_01.NbSwitchOffSignals <= 3, has value: " + String(load_01.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13255};
  modelica_boolean tmp1024;
  modelica_boolean tmp1025;
  static const MMC_DEFSTRINGLIT(tmp1026,88,"Variable violating min/max constraint: 1 <= load_01.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1027;
  modelica_metatype tmpMeta1028;
  static int tmp1029 = 0;
  if(!tmp1029)
  {
    tmp1024 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* load_01.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1025 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* load_01.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1024 && tmp1025))
    {
      tmp1027 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[265]] /* load_01.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1028 = stringAppend(MMC_REFSTRINGLIT(tmp1026),tmp1027);
      {
        const char* assert_cond = "(load_01.NbSwitchOffSignals >= 1 and load_01.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1028));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1028));
        }
      }
      tmp1029 = 1;
    }
  }
  threadData->lastEquationSolved = 13255;
}

/*
equation index: 13256
type: ALGORITHM

  assert(load_01.State0 >= Dynawo.Electrical.Constants.state.Open and load_01.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_01.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_01.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13256};
  modelica_boolean tmp1030;
  modelica_boolean tmp1031;
  static const MMC_DEFSTRINGLIT(tmp1032,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_01.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1033;
  modelica_metatype tmpMeta1034;
  static int tmp1035 = 0;
  if(!tmp1035)
  {
    tmp1030 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[266]] /* load_01.State0 PARAM */),1);
    tmp1031 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[266]] /* load_01.State0 PARAM */),6);
    if(!(tmp1030 && tmp1031))
    {
      tmp1033 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[266]] /* load_01.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1034 = stringAppend(MMC_REFSTRINGLIT(tmp1032),tmp1033);
      {
        const char* assert_cond = "(load_01.State0 >= Dynawo.Electrical.Constants.state.Open and load_01.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1034));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1034));
        }
      }
      tmp1035 = 1;
    }
  }
  threadData->lastEquationSolved = 13256;
}

/*
equation index: 13257
type: ALGORITHM

  assert(load_02.NbSwitchOffSignals >= 1 and load_02.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_02.NbSwitchOffSignals <= 3, has value: " + String(load_02.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13257};
  modelica_boolean tmp1036;
  modelica_boolean tmp1037;
  static const MMC_DEFSTRINGLIT(tmp1038,88,"Variable violating min/max constraint: 1 <= load_02.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1039;
  modelica_metatype tmpMeta1040;
  static int tmp1041 = 0;
  if(!tmp1041)
  {
    tmp1036 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* load_02.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1037 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* load_02.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1036 && tmp1037))
    {
      tmp1039 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[267]] /* load_02.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1040 = stringAppend(MMC_REFSTRINGLIT(tmp1038),tmp1039);
      {
        const char* assert_cond = "(load_02.NbSwitchOffSignals >= 1 and load_02.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1040));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1040));
        }
      }
      tmp1041 = 1;
    }
  }
  threadData->lastEquationSolved = 13257;
}

/*
equation index: 13258
type: ALGORITHM

  assert(load_02.State0 >= Dynawo.Electrical.Constants.state.Open and load_02.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_02.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_02.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13258};
  modelica_boolean tmp1042;
  modelica_boolean tmp1043;
  static const MMC_DEFSTRINGLIT(tmp1044,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_02.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1045;
  modelica_metatype tmpMeta1046;
  static int tmp1047 = 0;
  if(!tmp1047)
  {
    tmp1042 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* load_02.State0 PARAM */),1);
    tmp1043 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* load_02.State0 PARAM */),6);
    if(!(tmp1042 && tmp1043))
    {
      tmp1045 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[268]] /* load_02.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1046 = stringAppend(MMC_REFSTRINGLIT(tmp1044),tmp1045);
      {
        const char* assert_cond = "(load_02.State0 >= Dynawo.Electrical.Constants.state.Open and load_02.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1046));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1046));
        }
      }
      tmp1047 = 1;
    }
  }
  threadData->lastEquationSolved = 13258;
}

/*
equation index: 13259
type: ALGORITHM

  assert(load_03.NbSwitchOffSignals >= 1 and load_03.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_03.NbSwitchOffSignals <= 3, has value: " + String(load_03.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13259};
  modelica_boolean tmp1048;
  modelica_boolean tmp1049;
  static const MMC_DEFSTRINGLIT(tmp1050,88,"Variable violating min/max constraint: 1 <= load_03.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1051;
  modelica_metatype tmpMeta1052;
  static int tmp1053 = 0;
  if(!tmp1053)
  {
    tmp1048 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[269]] /* load_03.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1049 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[269]] /* load_03.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1048 && tmp1049))
    {
      tmp1051 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[269]] /* load_03.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1052 = stringAppend(MMC_REFSTRINGLIT(tmp1050),tmp1051);
      {
        const char* assert_cond = "(load_03.NbSwitchOffSignals >= 1 and load_03.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1052));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1052));
        }
      }
      tmp1053 = 1;
    }
  }
  threadData->lastEquationSolved = 13259;
}

/*
equation index: 13260
type: ALGORITHM

  assert(load_03.State0 >= Dynawo.Electrical.Constants.state.Open and load_03.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_03.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_03.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13260};
  modelica_boolean tmp1054;
  modelica_boolean tmp1055;
  static const MMC_DEFSTRINGLIT(tmp1056,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_03.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1057;
  modelica_metatype tmpMeta1058;
  static int tmp1059 = 0;
  if(!tmp1059)
  {
    tmp1054 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[270]] /* load_03.State0 PARAM */),1);
    tmp1055 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[270]] /* load_03.State0 PARAM */),6);
    if(!(tmp1054 && tmp1055))
    {
      tmp1057 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[270]] /* load_03.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1058 = stringAppend(MMC_REFSTRINGLIT(tmp1056),tmp1057);
      {
        const char* assert_cond = "(load_03.State0 >= Dynawo.Electrical.Constants.state.Open and load_03.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1058));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1058));
        }
      }
      tmp1059 = 1;
    }
  }
  threadData->lastEquationSolved = 13260;
}

/*
equation index: 13261
type: ALGORITHM

  assert(load_04.NbSwitchOffSignals >= 1 and load_04.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_04.NbSwitchOffSignals <= 3, has value: " + String(load_04.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13261};
  modelica_boolean tmp1060;
  modelica_boolean tmp1061;
  static const MMC_DEFSTRINGLIT(tmp1062,88,"Variable violating min/max constraint: 1 <= load_04.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1063;
  modelica_metatype tmpMeta1064;
  static int tmp1065 = 0;
  if(!tmp1065)
  {
    tmp1060 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[271]] /* load_04.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1061 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[271]] /* load_04.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1060 && tmp1061))
    {
      tmp1063 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[271]] /* load_04.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1064 = stringAppend(MMC_REFSTRINGLIT(tmp1062),tmp1063);
      {
        const char* assert_cond = "(load_04.NbSwitchOffSignals >= 1 and load_04.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1064));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1064));
        }
      }
      tmp1065 = 1;
    }
  }
  threadData->lastEquationSolved = 13261;
}

/*
equation index: 13262
type: ALGORITHM

  assert(load_04.State0 >= Dynawo.Electrical.Constants.state.Open and load_04.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_04.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_04.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13262};
  modelica_boolean tmp1066;
  modelica_boolean tmp1067;
  static const MMC_DEFSTRINGLIT(tmp1068,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_04.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1069;
  modelica_metatype tmpMeta1070;
  static int tmp1071 = 0;
  if(!tmp1071)
  {
    tmp1066 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[272]] /* load_04.State0 PARAM */),1);
    tmp1067 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[272]] /* load_04.State0 PARAM */),6);
    if(!(tmp1066 && tmp1067))
    {
      tmp1069 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[272]] /* load_04.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1070 = stringAppend(MMC_REFSTRINGLIT(tmp1068),tmp1069);
      {
        const char* assert_cond = "(load_04.State0 >= Dynawo.Electrical.Constants.state.Open and load_04.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1070));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1070));
        }
      }
      tmp1071 = 1;
    }
  }
  threadData->lastEquationSolved = 13262;
}

/*
equation index: 13263
type: ALGORITHM

  assert(load_05.NbSwitchOffSignals >= 1 and load_05.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_05.NbSwitchOffSignals <= 3, has value: " + String(load_05.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13263};
  modelica_boolean tmp1072;
  modelica_boolean tmp1073;
  static const MMC_DEFSTRINGLIT(tmp1074,88,"Variable violating min/max constraint: 1 <= load_05.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1075;
  modelica_metatype tmpMeta1076;
  static int tmp1077 = 0;
  if(!tmp1077)
  {
    tmp1072 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[273]] /* load_05.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1073 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[273]] /* load_05.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1072 && tmp1073))
    {
      tmp1075 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[273]] /* load_05.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1076 = stringAppend(MMC_REFSTRINGLIT(tmp1074),tmp1075);
      {
        const char* assert_cond = "(load_05.NbSwitchOffSignals >= 1 and load_05.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1076));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1076));
        }
      }
      tmp1077 = 1;
    }
  }
  threadData->lastEquationSolved = 13263;
}

/*
equation index: 13264
type: ALGORITHM

  assert(load_05.State0 >= Dynawo.Electrical.Constants.state.Open and load_05.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_05.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_05.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13264};
  modelica_boolean tmp1078;
  modelica_boolean tmp1079;
  static const MMC_DEFSTRINGLIT(tmp1080,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_05.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1081;
  modelica_metatype tmpMeta1082;
  static int tmp1083 = 0;
  if(!tmp1083)
  {
    tmp1078 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[274]] /* load_05.State0 PARAM */),1);
    tmp1079 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[274]] /* load_05.State0 PARAM */),6);
    if(!(tmp1078 && tmp1079))
    {
      tmp1081 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[274]] /* load_05.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1082 = stringAppend(MMC_REFSTRINGLIT(tmp1080),tmp1081);
      {
        const char* assert_cond = "(load_05.State0 >= Dynawo.Electrical.Constants.state.Open and load_05.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1082));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1082));
        }
      }
      tmp1083 = 1;
    }
  }
  threadData->lastEquationSolved = 13264;
}

/*
equation index: 13265
type: ALGORITHM

  assert(load_11.NbSwitchOffSignals >= 1 and load_11.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_11.NbSwitchOffSignals <= 3, has value: " + String(load_11.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13265};
  modelica_boolean tmp1084;
  modelica_boolean tmp1085;
  static const MMC_DEFSTRINGLIT(tmp1086,88,"Variable violating min/max constraint: 1 <= load_11.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1087;
  modelica_metatype tmpMeta1088;
  static int tmp1089 = 0;
  if(!tmp1089)
  {
    tmp1084 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[275]] /* load_11.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1085 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[275]] /* load_11.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1084 && tmp1085))
    {
      tmp1087 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[275]] /* load_11.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1088 = stringAppend(MMC_REFSTRINGLIT(tmp1086),tmp1087);
      {
        const char* assert_cond = "(load_11.NbSwitchOffSignals >= 1 and load_11.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1088));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1088));
        }
      }
      tmp1089 = 1;
    }
  }
  threadData->lastEquationSolved = 13265;
}

/*
equation index: 13266
type: ALGORITHM

  assert(load_11.State0 >= Dynawo.Electrical.Constants.state.Open and load_11.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_11.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_11.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13266};
  modelica_boolean tmp1090;
  modelica_boolean tmp1091;
  static const MMC_DEFSTRINGLIT(tmp1092,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_11.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1093;
  modelica_metatype tmpMeta1094;
  static int tmp1095 = 0;
  if(!tmp1095)
  {
    tmp1090 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[276]] /* load_11.State0 PARAM */),1);
    tmp1091 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[276]] /* load_11.State0 PARAM */),6);
    if(!(tmp1090 && tmp1091))
    {
      tmp1093 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[276]] /* load_11.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1094 = stringAppend(MMC_REFSTRINGLIT(tmp1092),tmp1093);
      {
        const char* assert_cond = "(load_11.State0 >= Dynawo.Electrical.Constants.state.Open and load_11.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1094));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1094));
        }
      }
      tmp1095 = 1;
    }
  }
  threadData->lastEquationSolved = 13266;
}

/*
equation index: 13267
type: ALGORITHM

  assert(load_12.NbSwitchOffSignals >= 1 and load_12.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_12.NbSwitchOffSignals <= 3, has value: " + String(load_12.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13267};
  modelica_boolean tmp1096;
  modelica_boolean tmp1097;
  static const MMC_DEFSTRINGLIT(tmp1098,88,"Variable violating min/max constraint: 1 <= load_12.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1099;
  modelica_metatype tmpMeta1100;
  static int tmp1101 = 0;
  if(!tmp1101)
  {
    tmp1096 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[277]] /* load_12.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1097 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[277]] /* load_12.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1096 && tmp1097))
    {
      tmp1099 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[277]] /* load_12.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1100 = stringAppend(MMC_REFSTRINGLIT(tmp1098),tmp1099);
      {
        const char* assert_cond = "(load_12.NbSwitchOffSignals >= 1 and load_12.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1100));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1100));
        }
      }
      tmp1101 = 1;
    }
  }
  threadData->lastEquationSolved = 13267;
}

/*
equation index: 13268
type: ALGORITHM

  assert(load_12.State0 >= Dynawo.Electrical.Constants.state.Open and load_12.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_12.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_12.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13268};
  modelica_boolean tmp1102;
  modelica_boolean tmp1103;
  static const MMC_DEFSTRINGLIT(tmp1104,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_12.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1105;
  modelica_metatype tmpMeta1106;
  static int tmp1107 = 0;
  if(!tmp1107)
  {
    tmp1102 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[278]] /* load_12.State0 PARAM */),1);
    tmp1103 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[278]] /* load_12.State0 PARAM */),6);
    if(!(tmp1102 && tmp1103))
    {
      tmp1105 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[278]] /* load_12.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1106 = stringAppend(MMC_REFSTRINGLIT(tmp1104),tmp1105);
      {
        const char* assert_cond = "(load_12.State0 >= Dynawo.Electrical.Constants.state.Open and load_12.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1106));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1106));
        }
      }
      tmp1107 = 1;
    }
  }
  threadData->lastEquationSolved = 13268;
}

/*
equation index: 13269
type: ALGORITHM

  assert(load_13.NbSwitchOffSignals >= 1 and load_13.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_13.NbSwitchOffSignals <= 3, has value: " + String(load_13.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13269};
  modelica_boolean tmp1108;
  modelica_boolean tmp1109;
  static const MMC_DEFSTRINGLIT(tmp1110,88,"Variable violating min/max constraint: 1 <= load_13.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1111;
  modelica_metatype tmpMeta1112;
  static int tmp1113 = 0;
  if(!tmp1113)
  {
    tmp1108 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[279]] /* load_13.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1109 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[279]] /* load_13.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1108 && tmp1109))
    {
      tmp1111 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[279]] /* load_13.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1112 = stringAppend(MMC_REFSTRINGLIT(tmp1110),tmp1111);
      {
        const char* assert_cond = "(load_13.NbSwitchOffSignals >= 1 and load_13.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1112));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1112));
        }
      }
      tmp1113 = 1;
    }
  }
  threadData->lastEquationSolved = 13269;
}

/*
equation index: 13270
type: ALGORITHM

  assert(load_13.State0 >= Dynawo.Electrical.Constants.state.Open and load_13.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_13.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_13.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13270};
  modelica_boolean tmp1114;
  modelica_boolean tmp1115;
  static const MMC_DEFSTRINGLIT(tmp1116,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_13.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1117;
  modelica_metatype tmpMeta1118;
  static int tmp1119 = 0;
  if(!tmp1119)
  {
    tmp1114 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[280]] /* load_13.State0 PARAM */),1);
    tmp1115 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[280]] /* load_13.State0 PARAM */),6);
    if(!(tmp1114 && tmp1115))
    {
      tmp1117 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[280]] /* load_13.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1118 = stringAppend(MMC_REFSTRINGLIT(tmp1116),tmp1117);
      {
        const char* assert_cond = "(load_13.State0 >= Dynawo.Electrical.Constants.state.Open and load_13.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1118));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1118));
        }
      }
      tmp1119 = 1;
    }
  }
  threadData->lastEquationSolved = 13270;
}

/*
equation index: 13271
type: ALGORITHM

  assert(load_22.NbSwitchOffSignals >= 1 and load_22.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_22.NbSwitchOffSignals <= 3, has value: " + String(load_22.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13271};
  modelica_boolean tmp1120;
  modelica_boolean tmp1121;
  static const MMC_DEFSTRINGLIT(tmp1122,88,"Variable violating min/max constraint: 1 <= load_22.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1123;
  modelica_metatype tmpMeta1124;
  static int tmp1125 = 0;
  if(!tmp1125)
  {
    tmp1120 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[281]] /* load_22.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1121 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[281]] /* load_22.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1120 && tmp1121))
    {
      tmp1123 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[281]] /* load_22.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1124 = stringAppend(MMC_REFSTRINGLIT(tmp1122),tmp1123);
      {
        const char* assert_cond = "(load_22.NbSwitchOffSignals >= 1 and load_22.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1124));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1124));
        }
      }
      tmp1125 = 1;
    }
  }
  threadData->lastEquationSolved = 13271;
}

/*
equation index: 13272
type: ALGORITHM

  assert(load_22.State0 >= Dynawo.Electrical.Constants.state.Open and load_22.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_22.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_22.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13272};
  modelica_boolean tmp1126;
  modelica_boolean tmp1127;
  static const MMC_DEFSTRINGLIT(tmp1128,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_22.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1129;
  modelica_metatype tmpMeta1130;
  static int tmp1131 = 0;
  if(!tmp1131)
  {
    tmp1126 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[282]] /* load_22.State0 PARAM */),1);
    tmp1127 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[282]] /* load_22.State0 PARAM */),6);
    if(!(tmp1126 && tmp1127))
    {
      tmp1129 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[282]] /* load_22.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1130 = stringAppend(MMC_REFSTRINGLIT(tmp1128),tmp1129);
      {
        const char* assert_cond = "(load_22.State0 >= Dynawo.Electrical.Constants.state.Open and load_22.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1130));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1130));
        }
      }
      tmp1131 = 1;
    }
  }
  threadData->lastEquationSolved = 13272;
}

/*
equation index: 13273
type: ALGORITHM

  assert(load_31.NbSwitchOffSignals >= 1 and load_31.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_31.NbSwitchOffSignals <= 3, has value: " + String(load_31.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13273};
  modelica_boolean tmp1132;
  modelica_boolean tmp1133;
  static const MMC_DEFSTRINGLIT(tmp1134,88,"Variable violating min/max constraint: 1 <= load_31.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1135;
  modelica_metatype tmpMeta1136;
  static int tmp1137 = 0;
  if(!tmp1137)
  {
    tmp1132 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[283]] /* load_31.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1133 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[283]] /* load_31.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1132 && tmp1133))
    {
      tmp1135 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[283]] /* load_31.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1136 = stringAppend(MMC_REFSTRINGLIT(tmp1134),tmp1135);
      {
        const char* assert_cond = "(load_31.NbSwitchOffSignals >= 1 and load_31.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1136));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1136));
        }
      }
      tmp1137 = 1;
    }
  }
  threadData->lastEquationSolved = 13273;
}

/*
equation index: 13274
type: ALGORITHM

  assert(load_31.State0 >= Dynawo.Electrical.Constants.state.Open and load_31.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_31.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_31.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13274};
  modelica_boolean tmp1138;
  modelica_boolean tmp1139;
  static const MMC_DEFSTRINGLIT(tmp1140,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_31.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1141;
  modelica_metatype tmpMeta1142;
  static int tmp1143 = 0;
  if(!tmp1143)
  {
    tmp1138 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[284]] /* load_31.State0 PARAM */),1);
    tmp1139 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[284]] /* load_31.State0 PARAM */),6);
    if(!(tmp1138 && tmp1139))
    {
      tmp1141 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[284]] /* load_31.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1142 = stringAppend(MMC_REFSTRINGLIT(tmp1140),tmp1141);
      {
        const char* assert_cond = "(load_31.State0 >= Dynawo.Electrical.Constants.state.Open and load_31.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1142));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1142));
        }
      }
      tmp1143 = 1;
    }
  }
  threadData->lastEquationSolved = 13274;
}

/*
equation index: 13275
type: ALGORITHM

  assert(load_32.NbSwitchOffSignals >= 1 and load_32.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_32.NbSwitchOffSignals <= 3, has value: " + String(load_32.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13275};
  modelica_boolean tmp1144;
  modelica_boolean tmp1145;
  static const MMC_DEFSTRINGLIT(tmp1146,88,"Variable violating min/max constraint: 1 <= load_32.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1147;
  modelica_metatype tmpMeta1148;
  static int tmp1149 = 0;
  if(!tmp1149)
  {
    tmp1144 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[285]] /* load_32.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1145 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[285]] /* load_32.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1144 && tmp1145))
    {
      tmp1147 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[285]] /* load_32.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1148 = stringAppend(MMC_REFSTRINGLIT(tmp1146),tmp1147);
      {
        const char* assert_cond = "(load_32.NbSwitchOffSignals >= 1 and load_32.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1148));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1148));
        }
      }
      tmp1149 = 1;
    }
  }
  threadData->lastEquationSolved = 13275;
}

/*
equation index: 13276
type: ALGORITHM

  assert(load_32.State0 >= Dynawo.Electrical.Constants.state.Open and load_32.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_32.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_32.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13276};
  modelica_boolean tmp1150;
  modelica_boolean tmp1151;
  static const MMC_DEFSTRINGLIT(tmp1152,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_32.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1153;
  modelica_metatype tmpMeta1154;
  static int tmp1155 = 0;
  if(!tmp1155)
  {
    tmp1150 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* load_32.State0 PARAM */),1);
    tmp1151 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* load_32.State0 PARAM */),6);
    if(!(tmp1150 && tmp1151))
    {
      tmp1153 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[286]] /* load_32.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1154 = stringAppend(MMC_REFSTRINGLIT(tmp1152),tmp1153);
      {
        const char* assert_cond = "(load_32.State0 >= Dynawo.Electrical.Constants.state.Open and load_32.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1154));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1154));
        }
      }
      tmp1155 = 1;
    }
  }
  threadData->lastEquationSolved = 13276;
}

/*
equation index: 13277
type: ALGORITHM

  assert(load_41.NbSwitchOffSignals >= 1 and load_41.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_41.NbSwitchOffSignals <= 3, has value: " + String(load_41.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13277};
  modelica_boolean tmp1156;
  modelica_boolean tmp1157;
  static const MMC_DEFSTRINGLIT(tmp1158,88,"Variable violating min/max constraint: 1 <= load_41.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1159;
  modelica_metatype tmpMeta1160;
  static int tmp1161 = 0;
  if(!tmp1161)
  {
    tmp1156 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* load_41.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1157 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* load_41.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1156 && tmp1157))
    {
      tmp1159 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[287]] /* load_41.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1160 = stringAppend(MMC_REFSTRINGLIT(tmp1158),tmp1159);
      {
        const char* assert_cond = "(load_41.NbSwitchOffSignals >= 1 and load_41.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1160));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1160));
        }
      }
      tmp1161 = 1;
    }
  }
  threadData->lastEquationSolved = 13277;
}

/*
equation index: 13278
type: ALGORITHM

  assert(load_41.State0 >= Dynawo.Electrical.Constants.state.Open and load_41.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_41.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_41.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13278};
  modelica_boolean tmp1162;
  modelica_boolean tmp1163;
  static const MMC_DEFSTRINGLIT(tmp1164,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_41.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1165;
  modelica_metatype tmpMeta1166;
  static int tmp1167 = 0;
  if(!tmp1167)
  {
    tmp1162 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* load_41.State0 PARAM */),1);
    tmp1163 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* load_41.State0 PARAM */),6);
    if(!(tmp1162 && tmp1163))
    {
      tmp1165 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[288]] /* load_41.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1166 = stringAppend(MMC_REFSTRINGLIT(tmp1164),tmp1165);
      {
        const char* assert_cond = "(load_41.State0 >= Dynawo.Electrical.Constants.state.Open and load_41.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1166));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1166));
        }
      }
      tmp1167 = 1;
    }
  }
  threadData->lastEquationSolved = 13278;
}

/*
equation index: 13279
type: ALGORITHM

  assert(load_42.NbSwitchOffSignals >= 1 and load_42.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_42.NbSwitchOffSignals <= 3, has value: " + String(load_42.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13279};
  modelica_boolean tmp1168;
  modelica_boolean tmp1169;
  static const MMC_DEFSTRINGLIT(tmp1170,88,"Variable violating min/max constraint: 1 <= load_42.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1171;
  modelica_metatype tmpMeta1172;
  static int tmp1173 = 0;
  if(!tmp1173)
  {
    tmp1168 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* load_42.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1169 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* load_42.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1168 && tmp1169))
    {
      tmp1171 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[289]] /* load_42.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1172 = stringAppend(MMC_REFSTRINGLIT(tmp1170),tmp1171);
      {
        const char* assert_cond = "(load_42.NbSwitchOffSignals >= 1 and load_42.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1172));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1172));
        }
      }
      tmp1173 = 1;
    }
  }
  threadData->lastEquationSolved = 13279;
}

/*
equation index: 13280
type: ALGORITHM

  assert(load_42.State0 >= Dynawo.Electrical.Constants.state.Open and load_42.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_42.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_42.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13280};
  modelica_boolean tmp1174;
  modelica_boolean tmp1175;
  static const MMC_DEFSTRINGLIT(tmp1176,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_42.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1177;
  modelica_metatype tmpMeta1178;
  static int tmp1179 = 0;
  if(!tmp1179)
  {
    tmp1174 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* load_42.State0 PARAM */),1);
    tmp1175 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* load_42.State0 PARAM */),6);
    if(!(tmp1174 && tmp1175))
    {
      tmp1177 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[290]] /* load_42.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1178 = stringAppend(MMC_REFSTRINGLIT(tmp1176),tmp1177);
      {
        const char* assert_cond = "(load_42.State0 >= Dynawo.Electrical.Constants.state.Open and load_42.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1178));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1178));
        }
      }
      tmp1179 = 1;
    }
  }
  threadData->lastEquationSolved = 13280;
}

/*
equation index: 13281
type: ALGORITHM

  assert(load_43.NbSwitchOffSignals >= 1 and load_43.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_43.NbSwitchOffSignals <= 3, has value: " + String(load_43.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13281};
  modelica_boolean tmp1180;
  modelica_boolean tmp1181;
  static const MMC_DEFSTRINGLIT(tmp1182,88,"Variable violating min/max constraint: 1 <= load_43.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1183;
  modelica_metatype tmpMeta1184;
  static int tmp1185 = 0;
  if(!tmp1185)
  {
    tmp1180 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* load_43.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1181 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* load_43.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1180 && tmp1181))
    {
      tmp1183 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[291]] /* load_43.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1184 = stringAppend(MMC_REFSTRINGLIT(tmp1182),tmp1183);
      {
        const char* assert_cond = "(load_43.NbSwitchOffSignals >= 1 and load_43.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1184));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1184));
        }
      }
      tmp1185 = 1;
    }
  }
  threadData->lastEquationSolved = 13281;
}

/*
equation index: 13282
type: ALGORITHM

  assert(load_43.State0 >= Dynawo.Electrical.Constants.state.Open and load_43.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_43.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_43.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13282};
  modelica_boolean tmp1186;
  modelica_boolean tmp1187;
  static const MMC_DEFSTRINGLIT(tmp1188,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_43.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1189;
  modelica_metatype tmpMeta1190;
  static int tmp1191 = 0;
  if(!tmp1191)
  {
    tmp1186 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* load_43.State0 PARAM */),1);
    tmp1187 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* load_43.State0 PARAM */),6);
    if(!(tmp1186 && tmp1187))
    {
      tmp1189 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[292]] /* load_43.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1190 = stringAppend(MMC_REFSTRINGLIT(tmp1188),tmp1189);
      {
        const char* assert_cond = "(load_43.State0 >= Dynawo.Electrical.Constants.state.Open and load_43.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1190));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1190));
        }
      }
      tmp1191 = 1;
    }
  }
  threadData->lastEquationSolved = 13282;
}

/*
equation index: 13283
type: ALGORITHM

  assert(load_46.NbSwitchOffSignals >= 1 and load_46.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_46.NbSwitchOffSignals <= 3, has value: " + String(load_46.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13283};
  modelica_boolean tmp1192;
  modelica_boolean tmp1193;
  static const MMC_DEFSTRINGLIT(tmp1194,88,"Variable violating min/max constraint: 1 <= load_46.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1195;
  modelica_metatype tmpMeta1196;
  static int tmp1197 = 0;
  if(!tmp1197)
  {
    tmp1192 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* load_46.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1193 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* load_46.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1192 && tmp1193))
    {
      tmp1195 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[293]] /* load_46.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1196 = stringAppend(MMC_REFSTRINGLIT(tmp1194),tmp1195);
      {
        const char* assert_cond = "(load_46.NbSwitchOffSignals >= 1 and load_46.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1196));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1196));
        }
      }
      tmp1197 = 1;
    }
  }
  threadData->lastEquationSolved = 13283;
}

/*
equation index: 13284
type: ALGORITHM

  assert(load_46.State0 >= Dynawo.Electrical.Constants.state.Open and load_46.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_46.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_46.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13284};
  modelica_boolean tmp1198;
  modelica_boolean tmp1199;
  static const MMC_DEFSTRINGLIT(tmp1200,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_46.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1201;
  modelica_metatype tmpMeta1202;
  static int tmp1203 = 0;
  if(!tmp1203)
  {
    tmp1198 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* load_46.State0 PARAM */),1);
    tmp1199 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* load_46.State0 PARAM */),6);
    if(!(tmp1198 && tmp1199))
    {
      tmp1201 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[294]] /* load_46.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1202 = stringAppend(MMC_REFSTRINGLIT(tmp1200),tmp1201);
      {
        const char* assert_cond = "(load_46.State0 >= Dynawo.Electrical.Constants.state.Open and load_46.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1202));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1202));
        }
      }
      tmp1203 = 1;
    }
  }
  threadData->lastEquationSolved = 13284;
}

/*
equation index: 13285
type: ALGORITHM

  assert(load_47.NbSwitchOffSignals >= 1 and load_47.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_47.NbSwitchOffSignals <= 3, has value: " + String(load_47.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13285};
  modelica_boolean tmp1204;
  modelica_boolean tmp1205;
  static const MMC_DEFSTRINGLIT(tmp1206,88,"Variable violating min/max constraint: 1 <= load_47.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1207;
  modelica_metatype tmpMeta1208;
  static int tmp1209 = 0;
  if(!tmp1209)
  {
    tmp1204 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[295]] /* load_47.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1205 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[295]] /* load_47.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1204 && tmp1205))
    {
      tmp1207 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[295]] /* load_47.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1208 = stringAppend(MMC_REFSTRINGLIT(tmp1206),tmp1207);
      {
        const char* assert_cond = "(load_47.NbSwitchOffSignals >= 1 and load_47.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1208));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1208));
        }
      }
      tmp1209 = 1;
    }
  }
  threadData->lastEquationSolved = 13285;
}

/*
equation index: 13286
type: ALGORITHM

  assert(load_47.State0 >= Dynawo.Electrical.Constants.state.Open and load_47.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_47.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_47.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13286};
  modelica_boolean tmp1210;
  modelica_boolean tmp1211;
  static const MMC_DEFSTRINGLIT(tmp1212,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_47.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1213;
  modelica_metatype tmpMeta1214;
  static int tmp1215 = 0;
  if(!tmp1215)
  {
    tmp1210 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* load_47.State0 PARAM */),1);
    tmp1211 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* load_47.State0 PARAM */),6);
    if(!(tmp1210 && tmp1211))
    {
      tmp1213 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[296]] /* load_47.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1214 = stringAppend(MMC_REFSTRINGLIT(tmp1212),tmp1213);
      {
        const char* assert_cond = "(load_47.State0 >= Dynawo.Electrical.Constants.state.Open and load_47.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1214));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1214));
        }
      }
      tmp1215 = 1;
    }
  }
  threadData->lastEquationSolved = 13286;
}

/*
equation index: 13287
type: ALGORITHM

  assert(load_51.NbSwitchOffSignals >= 1 and load_51.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_51.NbSwitchOffSignals <= 3, has value: " + String(load_51.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13287};
  modelica_boolean tmp1216;
  modelica_boolean tmp1217;
  static const MMC_DEFSTRINGLIT(tmp1218,88,"Variable violating min/max constraint: 1 <= load_51.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1219;
  modelica_metatype tmpMeta1220;
  static int tmp1221 = 0;
  if(!tmp1221)
  {
    tmp1216 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* load_51.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1217 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* load_51.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1216 && tmp1217))
    {
      tmp1219 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[297]] /* load_51.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1220 = stringAppend(MMC_REFSTRINGLIT(tmp1218),tmp1219);
      {
        const char* assert_cond = "(load_51.NbSwitchOffSignals >= 1 and load_51.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1220));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1220));
        }
      }
      tmp1221 = 1;
    }
  }
  threadData->lastEquationSolved = 13287;
}

/*
equation index: 13288
type: ALGORITHM

  assert(load_51.State0 >= Dynawo.Electrical.Constants.state.Open and load_51.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_51.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_51.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13288};
  modelica_boolean tmp1222;
  modelica_boolean tmp1223;
  static const MMC_DEFSTRINGLIT(tmp1224,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_51.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1225;
  modelica_metatype tmpMeta1226;
  static int tmp1227 = 0;
  if(!tmp1227)
  {
    tmp1222 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* load_51.State0 PARAM */),1);
    tmp1223 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* load_51.State0 PARAM */),6);
    if(!(tmp1222 && tmp1223))
    {
      tmp1225 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[298]] /* load_51.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1226 = stringAppend(MMC_REFSTRINGLIT(tmp1224),tmp1225);
      {
        const char* assert_cond = "(load_51.State0 >= Dynawo.Electrical.Constants.state.Open and load_51.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1226));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1226));
        }
      }
      tmp1227 = 1;
    }
  }
  threadData->lastEquationSolved = 13288;
}

/*
equation index: 13289
type: ALGORITHM

  assert(load_61.NbSwitchOffSignals >= 1 and load_61.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_61.NbSwitchOffSignals <= 3, has value: " + String(load_61.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13289};
  modelica_boolean tmp1228;
  modelica_boolean tmp1229;
  static const MMC_DEFSTRINGLIT(tmp1230,88,"Variable violating min/max constraint: 1 <= load_61.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1231;
  modelica_metatype tmpMeta1232;
  static int tmp1233 = 0;
  if(!tmp1233)
  {
    tmp1228 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[299]] /* load_61.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1229 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[299]] /* load_61.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1228 && tmp1229))
    {
      tmp1231 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[299]] /* load_61.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1232 = stringAppend(MMC_REFSTRINGLIT(tmp1230),tmp1231);
      {
        const char* assert_cond = "(load_61.NbSwitchOffSignals >= 1 and load_61.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1232));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1232));
        }
      }
      tmp1233 = 1;
    }
  }
  threadData->lastEquationSolved = 13289;
}

/*
equation index: 13290
type: ALGORITHM

  assert(load_61.State0 >= Dynawo.Electrical.Constants.state.Open and load_61.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_61.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_61.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13290};
  modelica_boolean tmp1234;
  modelica_boolean tmp1235;
  static const MMC_DEFSTRINGLIT(tmp1236,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_61.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1237;
  modelica_metatype tmpMeta1238;
  static int tmp1239 = 0;
  if(!tmp1239)
  {
    tmp1234 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[300]] /* load_61.State0 PARAM */),1);
    tmp1235 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[300]] /* load_61.State0 PARAM */),6);
    if(!(tmp1234 && tmp1235))
    {
      tmp1237 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[300]] /* load_61.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1238 = stringAppend(MMC_REFSTRINGLIT(tmp1236),tmp1237);
      {
        const char* assert_cond = "(load_61.State0 >= Dynawo.Electrical.Constants.state.Open and load_61.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1238));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1238));
        }
      }
      tmp1239 = 1;
    }
  }
  threadData->lastEquationSolved = 13290;
}

/*
equation index: 13291
type: ALGORITHM

  assert(load_62.NbSwitchOffSignals >= 1 and load_62.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_62.NbSwitchOffSignals <= 3, has value: " + String(load_62.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13291};
  modelica_boolean tmp1240;
  modelica_boolean tmp1241;
  static const MMC_DEFSTRINGLIT(tmp1242,88,"Variable violating min/max constraint: 1 <= load_62.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1243;
  modelica_metatype tmpMeta1244;
  static int tmp1245 = 0;
  if(!tmp1245)
  {
    tmp1240 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* load_62.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1241 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* load_62.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1240 && tmp1241))
    {
      tmp1243 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[301]] /* load_62.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1244 = stringAppend(MMC_REFSTRINGLIT(tmp1242),tmp1243);
      {
        const char* assert_cond = "(load_62.NbSwitchOffSignals >= 1 and load_62.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1244));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1244));
        }
      }
      tmp1245 = 1;
    }
  }
  threadData->lastEquationSolved = 13291;
}

/*
equation index: 13292
type: ALGORITHM

  assert(load_62.State0 >= Dynawo.Electrical.Constants.state.Open and load_62.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_62.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_62.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13292};
  modelica_boolean tmp1246;
  modelica_boolean tmp1247;
  static const MMC_DEFSTRINGLIT(tmp1248,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_62.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1249;
  modelica_metatype tmpMeta1250;
  static int tmp1251 = 0;
  if(!tmp1251)
  {
    tmp1246 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* load_62.State0 PARAM */),1);
    tmp1247 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* load_62.State0 PARAM */),6);
    if(!(tmp1246 && tmp1247))
    {
      tmp1249 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[302]] /* load_62.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1250 = stringAppend(MMC_REFSTRINGLIT(tmp1248),tmp1249);
      {
        const char* assert_cond = "(load_62.State0 >= Dynawo.Electrical.Constants.state.Open and load_62.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1250));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1250));
        }
      }
      tmp1251 = 1;
    }
  }
  threadData->lastEquationSolved = 13292;
}

/*
equation index: 13293
type: ALGORITHM

  assert(load_63.NbSwitchOffSignals >= 1 and load_63.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_63.NbSwitchOffSignals <= 3, has value: " + String(load_63.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13293};
  modelica_boolean tmp1252;
  modelica_boolean tmp1253;
  static const MMC_DEFSTRINGLIT(tmp1254,88,"Variable violating min/max constraint: 1 <= load_63.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1255;
  modelica_metatype tmpMeta1256;
  static int tmp1257 = 0;
  if(!tmp1257)
  {
    tmp1252 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[303]] /* load_63.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1253 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[303]] /* load_63.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1252 && tmp1253))
    {
      tmp1255 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[303]] /* load_63.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1256 = stringAppend(MMC_REFSTRINGLIT(tmp1254),tmp1255);
      {
        const char* assert_cond = "(load_63.NbSwitchOffSignals >= 1 and load_63.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1256));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1256));
        }
      }
      tmp1257 = 1;
    }
  }
  threadData->lastEquationSolved = 13293;
}

/*
equation index: 13294
type: ALGORITHM

  assert(load_63.State0 >= Dynawo.Electrical.Constants.state.Open and load_63.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_63.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_63.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13294};
  modelica_boolean tmp1258;
  modelica_boolean tmp1259;
  static const MMC_DEFSTRINGLIT(tmp1260,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_63.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1261;
  modelica_metatype tmpMeta1262;
  static int tmp1263 = 0;
  if(!tmp1263)
  {
    tmp1258 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[304]] /* load_63.State0 PARAM */),1);
    tmp1259 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[304]] /* load_63.State0 PARAM */),6);
    if(!(tmp1258 && tmp1259))
    {
      tmp1261 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[304]] /* load_63.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1262 = stringAppend(MMC_REFSTRINGLIT(tmp1260),tmp1261);
      {
        const char* assert_cond = "(load_63.State0 >= Dynawo.Electrical.Constants.state.Open and load_63.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1262));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1262));
        }
      }
      tmp1263 = 1;
    }
  }
  threadData->lastEquationSolved = 13294;
}

/*
equation index: 13295
type: ALGORITHM

  assert(load_71.NbSwitchOffSignals >= 1 and load_71.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_71.NbSwitchOffSignals <= 3, has value: " + String(load_71.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13295};
  modelica_boolean tmp1264;
  modelica_boolean tmp1265;
  static const MMC_DEFSTRINGLIT(tmp1266,88,"Variable violating min/max constraint: 1 <= load_71.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1267;
  modelica_metatype tmpMeta1268;
  static int tmp1269 = 0;
  if(!tmp1269)
  {
    tmp1264 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[305]] /* load_71.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1265 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[305]] /* load_71.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1264 && tmp1265))
    {
      tmp1267 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[305]] /* load_71.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1268 = stringAppend(MMC_REFSTRINGLIT(tmp1266),tmp1267);
      {
        const char* assert_cond = "(load_71.NbSwitchOffSignals >= 1 and load_71.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1268));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1268));
        }
      }
      tmp1269 = 1;
    }
  }
  threadData->lastEquationSolved = 13295;
}

/*
equation index: 13296
type: ALGORITHM

  assert(load_71.State0 >= Dynawo.Electrical.Constants.state.Open and load_71.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_71.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_71.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13296};
  modelica_boolean tmp1270;
  modelica_boolean tmp1271;
  static const MMC_DEFSTRINGLIT(tmp1272,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_71.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1273;
  modelica_metatype tmpMeta1274;
  static int tmp1275 = 0;
  if(!tmp1275)
  {
    tmp1270 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[306]] /* load_71.State0 PARAM */),1);
    tmp1271 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[306]] /* load_71.State0 PARAM */),6);
    if(!(tmp1270 && tmp1271))
    {
      tmp1273 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[306]] /* load_71.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1274 = stringAppend(MMC_REFSTRINGLIT(tmp1272),tmp1273);
      {
        const char* assert_cond = "(load_71.State0 >= Dynawo.Electrical.Constants.state.Open and load_71.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1274));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1274));
        }
      }
      tmp1275 = 1;
    }
  }
  threadData->lastEquationSolved = 13296;
}

/*
equation index: 13297
type: ALGORITHM

  assert(load_72.NbSwitchOffSignals >= 1 and load_72.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= load_72.NbSwitchOffSignals <= 3, has value: " + String(load_72.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13297};
  modelica_boolean tmp1276;
  modelica_boolean tmp1277;
  static const MMC_DEFSTRINGLIT(tmp1278,88,"Variable violating min/max constraint: 1 <= load_72.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1279;
  modelica_metatype tmpMeta1280;
  static int tmp1281 = 0;
  if(!tmp1281)
  {
    tmp1276 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[307]] /* load_72.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1277 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[307]] /* load_72.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1276 && tmp1277))
    {
      tmp1279 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[307]] /* load_72.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1280 = stringAppend(MMC_REFSTRINGLIT(tmp1278),tmp1279);
      {
        const char* assert_cond = "(load_72.NbSwitchOffSignals >= 1 and load_72.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1280));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1280));
        }
      }
      tmp1281 = 1;
    }
  }
  threadData->lastEquationSolved = 13297;
}

/*
equation index: 13298
type: ALGORITHM

  assert(load_72.State0 >= Dynawo.Electrical.Constants.state.Open and load_72.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_72.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(load_72.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13298};
  modelica_boolean tmp1282;
  modelica_boolean tmp1283;
  static const MMC_DEFSTRINGLIT(tmp1284,155,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= load_72.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1285;
  modelica_metatype tmpMeta1286;
  static int tmp1287 = 0;
  if(!tmp1287)
  {
    tmp1282 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[308]] /* load_72.State0 PARAM */),1);
    tmp1283 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[308]] /* load_72.State0 PARAM */),6);
    if(!(tmp1282 && tmp1283))
    {
      tmp1285 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[308]] /* load_72.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1286 = stringAppend(MMC_REFSTRINGLIT(tmp1284),tmp1285);
      {
        const char* assert_cond = "(load_72.State0 >= Dynawo.Electrical.Constants.state.Open and load_72.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1286));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLoad.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1286));
        }
      }
      tmp1287 = 1;
    }
  }
  threadData->lastEquationSolved = 13298;
}

/*
equation index: 13299
type: ALGORITHM

  assert(shunt_1022.NbSwitchOffSignals >= 1 and shunt_1022.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_1022.NbSwitchOffSignals <= 3, has value: " + String(shunt_1022.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13299};
  modelica_boolean tmp1288;
  modelica_boolean tmp1289;
  static const MMC_DEFSTRINGLIT(tmp1290,91,"Variable violating min/max constraint: 1 <= shunt_1022.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1291;
  modelica_metatype tmpMeta1292;
  static int tmp1293 = 0;
  if(!tmp1293)
  {
    tmp1288 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[309]] /* shunt_1022.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1289 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[309]] /* shunt_1022.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1288 && tmp1289))
    {
      tmp1291 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[309]] /* shunt_1022.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1292 = stringAppend(MMC_REFSTRINGLIT(tmp1290),tmp1291);
      {
        const char* assert_cond = "(shunt_1022.NbSwitchOffSignals >= 1 and shunt_1022.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1292));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1292));
        }
      }
      tmp1293 = 1;
    }
  }
  threadData->lastEquationSolved = 13299;
}

/*
equation index: 13300
type: ALGORITHM

  assert(shunt_1022.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_1022.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_1022.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_1022.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13300};
  modelica_boolean tmp1294;
  modelica_boolean tmp1295;
  static const MMC_DEFSTRINGLIT(tmp1296,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_1022.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1297;
  modelica_metatype tmpMeta1298;
  static int tmp1299 = 0;
  if(!tmp1299)
  {
    tmp1294 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[310]] /* shunt_1022.State0 PARAM */),1);
    tmp1295 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[310]] /* shunt_1022.State0 PARAM */),6);
    if(!(tmp1294 && tmp1295))
    {
      tmp1297 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[310]] /* shunt_1022.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1298 = stringAppend(MMC_REFSTRINGLIT(tmp1296),tmp1297);
      {
        const char* assert_cond = "(shunt_1022.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_1022.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1298));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1298));
        }
      }
      tmp1299 = 1;
    }
  }
  threadData->lastEquationSolved = 13300;
}

/*
equation index: 13301
type: ALGORITHM

  assert(shunt_1041.NbSwitchOffSignals >= 1 and shunt_1041.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_1041.NbSwitchOffSignals <= 3, has value: " + String(shunt_1041.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13301};
  modelica_boolean tmp1300;
  modelica_boolean tmp1301;
  static const MMC_DEFSTRINGLIT(tmp1302,91,"Variable violating min/max constraint: 1 <= shunt_1041.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1303;
  modelica_metatype tmpMeta1304;
  static int tmp1305 = 0;
  if(!tmp1305)
  {
    tmp1300 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[311]] /* shunt_1041.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1301 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[311]] /* shunt_1041.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1300 && tmp1301))
    {
      tmp1303 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[311]] /* shunt_1041.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1304 = stringAppend(MMC_REFSTRINGLIT(tmp1302),tmp1303);
      {
        const char* assert_cond = "(shunt_1041.NbSwitchOffSignals >= 1 and shunt_1041.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1304));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1304));
        }
      }
      tmp1305 = 1;
    }
  }
  threadData->lastEquationSolved = 13301;
}

/*
equation index: 13302
type: ALGORITHM

  assert(shunt_1041.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_1041.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_1041.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_1041.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13302};
  modelica_boolean tmp1306;
  modelica_boolean tmp1307;
  static const MMC_DEFSTRINGLIT(tmp1308,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_1041.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1309;
  modelica_metatype tmpMeta1310;
  static int tmp1311 = 0;
  if(!tmp1311)
  {
    tmp1306 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[312]] /* shunt_1041.State0 PARAM */),1);
    tmp1307 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[312]] /* shunt_1041.State0 PARAM */),6);
    if(!(tmp1306 && tmp1307))
    {
      tmp1309 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[312]] /* shunt_1041.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1310 = stringAppend(MMC_REFSTRINGLIT(tmp1308),tmp1309);
      {
        const char* assert_cond = "(shunt_1041.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_1041.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1310));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1310));
        }
      }
      tmp1311 = 1;
    }
  }
  threadData->lastEquationSolved = 13302;
}

/*
equation index: 13303
type: ALGORITHM

  assert(shunt_1043.NbSwitchOffSignals >= 1 and shunt_1043.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_1043.NbSwitchOffSignals <= 3, has value: " + String(shunt_1043.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13303};
  modelica_boolean tmp1312;
  modelica_boolean tmp1313;
  static const MMC_DEFSTRINGLIT(tmp1314,91,"Variable violating min/max constraint: 1 <= shunt_1043.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1315;
  modelica_metatype tmpMeta1316;
  static int tmp1317 = 0;
  if(!tmp1317)
  {
    tmp1312 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[313]] /* shunt_1043.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1313 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[313]] /* shunt_1043.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1312 && tmp1313))
    {
      tmp1315 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[313]] /* shunt_1043.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1316 = stringAppend(MMC_REFSTRINGLIT(tmp1314),tmp1315);
      {
        const char* assert_cond = "(shunt_1043.NbSwitchOffSignals >= 1 and shunt_1043.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1316));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1316));
        }
      }
      tmp1317 = 1;
    }
  }
  threadData->lastEquationSolved = 13303;
}

/*
equation index: 13304
type: ALGORITHM

  assert(shunt_1043.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_1043.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_1043.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_1043.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13304};
  modelica_boolean tmp1318;
  modelica_boolean tmp1319;
  static const MMC_DEFSTRINGLIT(tmp1320,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_1043.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1321;
  modelica_metatype tmpMeta1322;
  static int tmp1323 = 0;
  if(!tmp1323)
  {
    tmp1318 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[314]] /* shunt_1043.State0 PARAM */),1);
    tmp1319 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[314]] /* shunt_1043.State0 PARAM */),6);
    if(!(tmp1318 && tmp1319))
    {
      tmp1321 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[314]] /* shunt_1043.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1322 = stringAppend(MMC_REFSTRINGLIT(tmp1320),tmp1321);
      {
        const char* assert_cond = "(shunt_1043.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_1043.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1322));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1322));
        }
      }
      tmp1323 = 1;
    }
  }
  threadData->lastEquationSolved = 13304;
}

/*
equation index: 13305
type: ALGORITHM

  assert(shunt_1044.NbSwitchOffSignals >= 1 and shunt_1044.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_1044.NbSwitchOffSignals <= 3, has value: " + String(shunt_1044.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13305};
  modelica_boolean tmp1324;
  modelica_boolean tmp1325;
  static const MMC_DEFSTRINGLIT(tmp1326,91,"Variable violating min/max constraint: 1 <= shunt_1044.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1327;
  modelica_metatype tmpMeta1328;
  static int tmp1329 = 0;
  if(!tmp1329)
  {
    tmp1324 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[315]] /* shunt_1044.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1325 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[315]] /* shunt_1044.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1324 && tmp1325))
    {
      tmp1327 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[315]] /* shunt_1044.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1328 = stringAppend(MMC_REFSTRINGLIT(tmp1326),tmp1327);
      {
        const char* assert_cond = "(shunt_1044.NbSwitchOffSignals >= 1 and shunt_1044.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1328));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1328));
        }
      }
      tmp1329 = 1;
    }
  }
  threadData->lastEquationSolved = 13305;
}

/*
equation index: 13306
type: ALGORITHM

  assert(shunt_1044.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_1044.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_1044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_1044.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13306};
  modelica_boolean tmp1330;
  modelica_boolean tmp1331;
  static const MMC_DEFSTRINGLIT(tmp1332,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_1044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1333;
  modelica_metatype tmpMeta1334;
  static int tmp1335 = 0;
  if(!tmp1335)
  {
    tmp1330 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* shunt_1044.State0 PARAM */),1);
    tmp1331 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* shunt_1044.State0 PARAM */),6);
    if(!(tmp1330 && tmp1331))
    {
      tmp1333 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[316]] /* shunt_1044.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1334 = stringAppend(MMC_REFSTRINGLIT(tmp1332),tmp1333);
      {
        const char* assert_cond = "(shunt_1044.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_1044.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1334));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1334));
        }
      }
      tmp1335 = 1;
    }
  }
  threadData->lastEquationSolved = 13306;
}

/*
equation index: 13307
type: ALGORITHM

  assert(shunt_1045.NbSwitchOffSignals >= 1 and shunt_1045.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_1045.NbSwitchOffSignals <= 3, has value: " + String(shunt_1045.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13307};
  modelica_boolean tmp1336;
  modelica_boolean tmp1337;
  static const MMC_DEFSTRINGLIT(tmp1338,91,"Variable violating min/max constraint: 1 <= shunt_1045.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1339;
  modelica_metatype tmpMeta1340;
  static int tmp1341 = 0;
  if(!tmp1341)
  {
    tmp1336 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* shunt_1045.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1337 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* shunt_1045.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1336 && tmp1337))
    {
      tmp1339 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[317]] /* shunt_1045.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1340 = stringAppend(MMC_REFSTRINGLIT(tmp1338),tmp1339);
      {
        const char* assert_cond = "(shunt_1045.NbSwitchOffSignals >= 1 and shunt_1045.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1340));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1340));
        }
      }
      tmp1341 = 1;
    }
  }
  threadData->lastEquationSolved = 13307;
}

/*
equation index: 13308
type: ALGORITHM

  assert(shunt_1045.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_1045.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_1045.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_1045.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13308};
  modelica_boolean tmp1342;
  modelica_boolean tmp1343;
  static const MMC_DEFSTRINGLIT(tmp1344,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_1045.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1345;
  modelica_metatype tmpMeta1346;
  static int tmp1347 = 0;
  if(!tmp1347)
  {
    tmp1342 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* shunt_1045.State0 PARAM */),1);
    tmp1343 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* shunt_1045.State0 PARAM */),6);
    if(!(tmp1342 && tmp1343))
    {
      tmp1345 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[318]] /* shunt_1045.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1346 = stringAppend(MMC_REFSTRINGLIT(tmp1344),tmp1345);
      {
        const char* assert_cond = "(shunt_1045.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_1045.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1346));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1346));
        }
      }
      tmp1347 = 1;
    }
  }
  threadData->lastEquationSolved = 13308;
}

/*
equation index: 13309
type: ALGORITHM

  assert(shunt_4012.NbSwitchOffSignals >= 1 and shunt_4012.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_4012.NbSwitchOffSignals <= 3, has value: " + String(shunt_4012.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13309};
  modelica_boolean tmp1348;
  modelica_boolean tmp1349;
  static const MMC_DEFSTRINGLIT(tmp1350,91,"Variable violating min/max constraint: 1 <= shunt_4012.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1351;
  modelica_metatype tmpMeta1352;
  static int tmp1353 = 0;
  if(!tmp1353)
  {
    tmp1348 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* shunt_4012.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1349 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* shunt_4012.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1348 && tmp1349))
    {
      tmp1351 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[319]] /* shunt_4012.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1352 = stringAppend(MMC_REFSTRINGLIT(tmp1350),tmp1351);
      {
        const char* assert_cond = "(shunt_4012.NbSwitchOffSignals >= 1 and shunt_4012.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1352));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1352));
        }
      }
      tmp1353 = 1;
    }
  }
  threadData->lastEquationSolved = 13309;
}

/*
equation index: 13310
type: ALGORITHM

  assert(shunt_4012.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4012.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4012.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_4012.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13310};
  modelica_boolean tmp1354;
  modelica_boolean tmp1355;
  static const MMC_DEFSTRINGLIT(tmp1356,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4012.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1357;
  modelica_metatype tmpMeta1358;
  static int tmp1359 = 0;
  if(!tmp1359)
  {
    tmp1354 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* shunt_4012.State0 PARAM */),1);
    tmp1355 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* shunt_4012.State0 PARAM */),6);
    if(!(tmp1354 && tmp1355))
    {
      tmp1357 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[320]] /* shunt_4012.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1358 = stringAppend(MMC_REFSTRINGLIT(tmp1356),tmp1357);
      {
        const char* assert_cond = "(shunt_4012.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4012.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1358));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1358));
        }
      }
      tmp1359 = 1;
    }
  }
  threadData->lastEquationSolved = 13310;
}

/*
equation index: 13311
type: ALGORITHM

  assert(shunt_4041.NbSwitchOffSignals >= 1 and shunt_4041.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_4041.NbSwitchOffSignals <= 3, has value: " + String(shunt_4041.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13311};
  modelica_boolean tmp1360;
  modelica_boolean tmp1361;
  static const MMC_DEFSTRINGLIT(tmp1362,91,"Variable violating min/max constraint: 1 <= shunt_4041.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1363;
  modelica_metatype tmpMeta1364;
  static int tmp1365 = 0;
  if(!tmp1365)
  {
    tmp1360 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* shunt_4041.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1361 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* shunt_4041.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1360 && tmp1361))
    {
      tmp1363 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[321]] /* shunt_4041.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1364 = stringAppend(MMC_REFSTRINGLIT(tmp1362),tmp1363);
      {
        const char* assert_cond = "(shunt_4041.NbSwitchOffSignals >= 1 and shunt_4041.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1364));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1364));
        }
      }
      tmp1365 = 1;
    }
  }
  threadData->lastEquationSolved = 13311;
}

/*
equation index: 13312
type: ALGORITHM

  assert(shunt_4041.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4041.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4041.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_4041.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13312};
  modelica_boolean tmp1366;
  modelica_boolean tmp1367;
  static const MMC_DEFSTRINGLIT(tmp1368,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4041.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1369;
  modelica_metatype tmpMeta1370;
  static int tmp1371 = 0;
  if(!tmp1371)
  {
    tmp1366 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* shunt_4041.State0 PARAM */),1);
    tmp1367 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* shunt_4041.State0 PARAM */),6);
    if(!(tmp1366 && tmp1367))
    {
      tmp1369 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[322]] /* shunt_4041.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1370 = stringAppend(MMC_REFSTRINGLIT(tmp1368),tmp1369);
      {
        const char* assert_cond = "(shunt_4041.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4041.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1370));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1370));
        }
      }
      tmp1371 = 1;
    }
  }
  threadData->lastEquationSolved = 13312;
}

/*
equation index: 13313
type: ALGORITHM

  assert(shunt_4043.NbSwitchOffSignals >= 1 and shunt_4043.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_4043.NbSwitchOffSignals <= 3, has value: " + String(shunt_4043.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13313};
  modelica_boolean tmp1372;
  modelica_boolean tmp1373;
  static const MMC_DEFSTRINGLIT(tmp1374,91,"Variable violating min/max constraint: 1 <= shunt_4043.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1375;
  modelica_metatype tmpMeta1376;
  static int tmp1377 = 0;
  if(!tmp1377)
  {
    tmp1372 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* shunt_4043.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1373 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* shunt_4043.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1372 && tmp1373))
    {
      tmp1375 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[323]] /* shunt_4043.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1376 = stringAppend(MMC_REFSTRINGLIT(tmp1374),tmp1375);
      {
        const char* assert_cond = "(shunt_4043.NbSwitchOffSignals >= 1 and shunt_4043.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1376));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1376));
        }
      }
      tmp1377 = 1;
    }
  }
  threadData->lastEquationSolved = 13313;
}

/*
equation index: 13314
type: ALGORITHM

  assert(shunt_4043.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4043.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4043.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_4043.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13314};
  modelica_boolean tmp1378;
  modelica_boolean tmp1379;
  static const MMC_DEFSTRINGLIT(tmp1380,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4043.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1381;
  modelica_metatype tmpMeta1382;
  static int tmp1383 = 0;
  if(!tmp1383)
  {
    tmp1378 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* shunt_4043.State0 PARAM */),1);
    tmp1379 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* shunt_4043.State0 PARAM */),6);
    if(!(tmp1378 && tmp1379))
    {
      tmp1381 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[324]] /* shunt_4043.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1382 = stringAppend(MMC_REFSTRINGLIT(tmp1380),tmp1381);
      {
        const char* assert_cond = "(shunt_4043.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4043.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1382));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1382));
        }
      }
      tmp1383 = 1;
    }
  }
  threadData->lastEquationSolved = 13314;
}

/*
equation index: 13315
type: ALGORITHM

  assert(shunt_4046.NbSwitchOffSignals >= 1 and shunt_4046.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_4046.NbSwitchOffSignals <= 3, has value: " + String(shunt_4046.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13315};
  modelica_boolean tmp1384;
  modelica_boolean tmp1385;
  static const MMC_DEFSTRINGLIT(tmp1386,91,"Variable violating min/max constraint: 1 <= shunt_4046.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1387;
  modelica_metatype tmpMeta1388;
  static int tmp1389 = 0;
  if(!tmp1389)
  {
    tmp1384 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* shunt_4046.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1385 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* shunt_4046.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1384 && tmp1385))
    {
      tmp1387 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[325]] /* shunt_4046.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1388 = stringAppend(MMC_REFSTRINGLIT(tmp1386),tmp1387);
      {
        const char* assert_cond = "(shunt_4046.NbSwitchOffSignals >= 1 and shunt_4046.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1388));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1388));
        }
      }
      tmp1389 = 1;
    }
  }
  threadData->lastEquationSolved = 13315;
}

/*
equation index: 13316
type: ALGORITHM

  assert(shunt_4046.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4046.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4046.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_4046.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13316};
  modelica_boolean tmp1390;
  modelica_boolean tmp1391;
  static const MMC_DEFSTRINGLIT(tmp1392,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4046.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1393;
  modelica_metatype tmpMeta1394;
  static int tmp1395 = 0;
  if(!tmp1395)
  {
    tmp1390 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* shunt_4046.State0 PARAM */),1);
    tmp1391 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* shunt_4046.State0 PARAM */),6);
    if(!(tmp1390 && tmp1391))
    {
      tmp1393 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[326]] /* shunt_4046.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1394 = stringAppend(MMC_REFSTRINGLIT(tmp1392),tmp1393);
      {
        const char* assert_cond = "(shunt_4046.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4046.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1394));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1394));
        }
      }
      tmp1395 = 1;
    }
  }
  threadData->lastEquationSolved = 13316;
}

/*
equation index: 13317
type: ALGORITHM

  assert(shunt_4051.NbSwitchOffSignals >= 1 and shunt_4051.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_4051.NbSwitchOffSignals <= 3, has value: " + String(shunt_4051.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13317};
  modelica_boolean tmp1396;
  modelica_boolean tmp1397;
  static const MMC_DEFSTRINGLIT(tmp1398,91,"Variable violating min/max constraint: 1 <= shunt_4051.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1399;
  modelica_metatype tmpMeta1400;
  static int tmp1401 = 0;
  if(!tmp1401)
  {
    tmp1396 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* shunt_4051.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1397 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* shunt_4051.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1396 && tmp1397))
    {
      tmp1399 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[327]] /* shunt_4051.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1400 = stringAppend(MMC_REFSTRINGLIT(tmp1398),tmp1399);
      {
        const char* assert_cond = "(shunt_4051.NbSwitchOffSignals >= 1 and shunt_4051.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1400));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1400));
        }
      }
      tmp1401 = 1;
    }
  }
  threadData->lastEquationSolved = 13317;
}

/*
equation index: 13318
type: ALGORITHM

  assert(shunt_4051.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4051.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4051.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_4051.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13318};
  modelica_boolean tmp1402;
  modelica_boolean tmp1403;
  static const MMC_DEFSTRINGLIT(tmp1404,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4051.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1405;
  modelica_metatype tmpMeta1406;
  static int tmp1407 = 0;
  if(!tmp1407)
  {
    tmp1402 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* shunt_4051.State0 PARAM */),1);
    tmp1403 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* shunt_4051.State0 PARAM */),6);
    if(!(tmp1402 && tmp1403))
    {
      tmp1405 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[328]] /* shunt_4051.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1406 = stringAppend(MMC_REFSTRINGLIT(tmp1404),tmp1405);
      {
        const char* assert_cond = "(shunt_4051.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4051.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1406));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1406));
        }
      }
      tmp1407 = 1;
    }
  }
  threadData->lastEquationSolved = 13318;
}

/*
equation index: 13319
type: ALGORITHM

  assert(shunt_4071.NbSwitchOffSignals >= 1 and shunt_4071.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= shunt_4071.NbSwitchOffSignals <= 3, has value: " + String(shunt_4071.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13319};
  modelica_boolean tmp1408;
  modelica_boolean tmp1409;
  static const MMC_DEFSTRINGLIT(tmp1410,91,"Variable violating min/max constraint: 1 <= shunt_4071.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1411;
  modelica_metatype tmpMeta1412;
  static int tmp1413 = 0;
  if(!tmp1413)
  {
    tmp1408 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[329]] /* shunt_4071.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1409 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[329]] /* shunt_4071.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1408 && tmp1409))
    {
      tmp1411 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[329]] /* shunt_4071.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1412 = stringAppend(MMC_REFSTRINGLIT(tmp1410),tmp1411);
      {
        const char* assert_cond = "(shunt_4071.NbSwitchOffSignals >= 1 and shunt_4071.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1412));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1412));
        }
      }
      tmp1413 = 1;
    }
  }
  threadData->lastEquationSolved = 13319;
}

/*
equation index: 13320
type: ALGORITHM

  assert(shunt_4071.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(shunt_4071.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13320};
  modelica_boolean tmp1414;
  modelica_boolean tmp1415;
  static const MMC_DEFSTRINGLIT(tmp1416,158,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= shunt_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1417;
  modelica_metatype tmpMeta1418;
  static int tmp1419 = 0;
  if(!tmp1419)
  {
    tmp1414 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[330]] /* shunt_4071.State0 PARAM */),1);
    tmp1415 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[330]] /* shunt_4071.State0 PARAM */),6);
    if(!(tmp1414 && tmp1415))
    {
      tmp1417 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[330]] /* shunt_4071.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1418 = stringAppend(MMC_REFSTRINGLIT(tmp1416),tmp1417);
      {
        const char* assert_cond = "(shunt_4071.State0 >= Dynawo.Electrical.Constants.state.Open and shunt_4071.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1418));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffShunt.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1418));
        }
      }
      tmp1419 = 1;
    }
  }
  threadData->lastEquationSolved = 13320;
}

/*
equation index: 13321
type: ALGORITHM

  assert(trafo_1_1041.NbSwitchOffSignals >= 1 and trafo_1_1041.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= trafo_1_1041.NbSwitchOffSignals <= 3, has value: " + String(trafo_1_1041.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13321};
  modelica_boolean tmp1420;
  modelica_boolean tmp1421;
  static const MMC_DEFSTRINGLIT(tmp1422,93,"Variable violating min/max constraint: 1 <= trafo_1_1041.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1423;
  modelica_metatype tmpMeta1424;
  static int tmp1425 = 0;
  if(!tmp1425)
  {
    tmp1420 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[351]] /* trafo_1_1041.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1421 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[351]] /* trafo_1_1041.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1420 && tmp1421))
    {
      tmp1423 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[351]] /* trafo_1_1041.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1424 = stringAppend(MMC_REFSTRINGLIT(tmp1422),tmp1423);
      {
        const char* assert_cond = "(trafo_1_1041.NbSwitchOffSignals >= 1 and trafo_1_1041.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1424));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1424));
        }
      }
      tmp1425 = 1;
    }
  }
  threadData->lastEquationSolved = 13321;
}

/*
equation index: 13322
type: ALGORITHM

  assert(trafo_1_1041.State0 >= Dynawo.Electrical.Constants.state.Open and trafo_1_1041.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= trafo_1_1041.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(trafo_1_1041.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13322};
  modelica_boolean tmp1426;
  modelica_boolean tmp1427;
  static const MMC_DEFSTRINGLIT(tmp1428,160,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= trafo_1_1041.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1429;
  modelica_metatype tmpMeta1430;
  static int tmp1431 = 0;
  if(!tmp1431)
  {
    tmp1426 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[352]] /* trafo_1_1041.State0 PARAM */),1);
    tmp1427 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[352]] /* trafo_1_1041.State0 PARAM */),6);
    if(!(tmp1426 && tmp1427))
    {
      tmp1429 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[352]] /* trafo_1_1041.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1430 = stringAppend(MMC_REFSTRINGLIT(tmp1428),tmp1429);
      {
        const char* assert_cond = "(trafo_1_1041.State0 >= Dynawo.Electrical.Constants.state.Open and trafo_1_1041.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffTransformer.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1430));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffTransformer.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1430));
        }
      }
      tmp1431 = 1;
    }
  }
  threadData->lastEquationSolved = 13322;
}

/*
equation index: 13323
type: ALGORITHM

  assert(trafo_2_1042.NbSwitchOffSignals >= 1 and trafo_2_1042.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= trafo_2_1042.NbSwitchOffSignals <= 3, has value: " + String(trafo_2_1042.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13323};
  modelica_boolean tmp1432;
  modelica_boolean tmp1433;
  static const MMC_DEFSTRINGLIT(tmp1434,93,"Variable violating min/max constraint: 1 <= trafo_2_1042.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1435;
  modelica_metatype tmpMeta1436;
  static int tmp1437 = 0;
  if(!tmp1437)
  {
    tmp1432 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[357]] /* trafo_2_1042.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1433 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[357]] /* trafo_2_1042.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1432 && tmp1433))
    {
      tmp1435 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[357]] /* trafo_2_1042.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1436 = stringAppend(MMC_REFSTRINGLIT(tmp1434),tmp1435);
      {
        const char* assert_cond = "(trafo_2_1042.NbSwitchOffSignals >= 1 and trafo_2_1042.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1436));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1436));
        }
      }
      tmp1437 = 1;
    }
  }
  threadData->lastEquationSolved = 13323;
}

/*
equation index: 13324
type: ALGORITHM

  assert(trafo_2_1042.State0 >= Dynawo.Electrical.Constants.state.Open and trafo_2_1042.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= trafo_2_1042.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(trafo_2_1042.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13324};
  modelica_boolean tmp1438;
  modelica_boolean tmp1439;
  static const MMC_DEFSTRINGLIT(tmp1440,160,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= trafo_2_1042.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1441;
  modelica_metatype tmpMeta1442;
  static int tmp1443 = 0;
  if(!tmp1443)
  {
    tmp1438 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[358]] /* trafo_2_1042.State0 PARAM */),1);
    tmp1439 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[358]] /* trafo_2_1042.State0 PARAM */),6);
    if(!(tmp1438 && tmp1439))
    {
      tmp1441 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[358]] /* trafo_2_1042.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1442 = stringAppend(MMC_REFSTRINGLIT(tmp1440),tmp1441);
      {
        const char* assert_cond = "(trafo_2_1042.State0 >= Dynawo.Electrical.Constants.state.Open and trafo_2_1042.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffTransformer.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1442));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffTransformer.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1442));
        }
      }
      tmp1443 = 1;
    }
  }
  threadData->lastEquationSolved = 13324;
}

/*
equation index: 13325
type: ALGORITHM

  assert(trafo_3_1043.NbSwitchOffSignals >= 1 and trafo_3_1043.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= trafo_3_1043.NbSwitchOffSignals <= 3, has value: " + String(trafo_3_1043.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13325};
  modelica_boolean tmp1444;
  modelica_boolean tmp1445;
  static const MMC_DEFSTRINGLIT(tmp1446,93,"Variable violating min/max constraint: 1 <= trafo_3_1043.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1447;
  modelica_metatype tmpMeta1448;
  static int tmp1449 = 0;
  if(!tmp1449)
  {
    tmp1444 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[363]] /* trafo_3_1043.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1445 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[363]] /* trafo_3_1043.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1444 && tmp1445))
    {
      tmp1447 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[363]] /* trafo_3_1043.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1448 = stringAppend(MMC_REFSTRINGLIT(tmp1446),tmp1447);
      {
        const char* assert_cond = "(trafo_3_1043.NbSwitchOffSignals >= 1 and trafo_3_1043.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1448));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1448));
        }
      }
      tmp1449 = 1;
    }
  }
  threadData->lastEquationSolved = 13325;
}

/*
equation index: 13326
type: ALGORITHM

  assert(trafo_3_1043.State0 >= Dynawo.Electrical.Constants.state.Open and trafo_3_1043.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= trafo_3_1043.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(trafo_3_1043.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13326};
  modelica_boolean tmp1450;
  modelica_boolean tmp1451;
  static const MMC_DEFSTRINGLIT(tmp1452,160,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= trafo_3_1043.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1453;
  modelica_metatype tmpMeta1454;
  static int tmp1455 = 0;
  if(!tmp1455)
  {
    tmp1450 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[364]] /* trafo_3_1043.State0 PARAM */),1);
    tmp1451 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[364]] /* trafo_3_1043.State0 PARAM */),6);
    if(!(tmp1450 && tmp1451))
    {
      tmp1453 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[364]] /* trafo_3_1043.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1454 = stringAppend(MMC_REFSTRINGLIT(tmp1452),tmp1453);
      {
        const char* assert_cond = "(trafo_3_1043.State0 >= Dynawo.Electrical.Constants.state.Open and trafo_3_1043.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffTransformer.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1454));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffTransformer.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1454));
        }
      }
      tmp1455 = 1;
    }
  }
  threadData->lastEquationSolved = 13326;
}

/*
equation index: 13327
type: ALGORITHM

  assert(trafo_4_1044.NbSwitchOffSignals >= 1 and trafo_4_1044.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= trafo_4_1044.NbSwitchOffSignals <= 3, has value: " + String(trafo_4_1044.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13327};
  modelica_boolean tmp1456;
  modelica_boolean tmp1457;
  static const MMC_DEFSTRINGLIT(tmp1458,93,"Variable violating min/max constraint: 1 <= trafo_4_1044.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1459;
  modelica_metatype tmpMeta1460;
  static int tmp1461 = 0;
  if(!tmp1461)
  {
    tmp1456 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* trafo_4_1044.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1457 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* trafo_4_1044.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1456 && tmp1457))
    {
      tmp1459 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[375]] /* trafo_4_1044.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1460 = stringAppend(MMC_REFSTRINGLIT(tmp1458),tmp1459);
      {
        const char* assert_cond = "(trafo_4_1044.NbSwitchOffSignals >= 1 and trafo_4_1044.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1460));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1460));
        }
      }
      tmp1461 = 1;
    }
  }
  threadData->lastEquationSolved = 13327;
}

/*
equation index: 13328
type: ALGORITHM

  assert(trafo_4_1044.State0 >= Dynawo.Electrical.Constants.state.Open and trafo_4_1044.State0 <= Dynawo.Electrical.Constants.state.Undefined, "Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= trafo_4_1044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: " + String(trafo_4_1044.State0, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13328};
  modelica_boolean tmp1462;
  modelica_boolean tmp1463;
  static const MMC_DEFSTRINGLIT(tmp1464,160,"Variable violating min/max constraint: Dynawo.Electrical.Constants.state.Open <= trafo_4_1044.State0 <= Dynawo.Electrical.Constants.state.Undefined, has value: ");
  modelica_string tmp1465;
  modelica_metatype tmpMeta1466;
  static int tmp1467 = 0;
  if(!tmp1467)
  {
    tmp1462 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* trafo_4_1044.State0 PARAM */),1);
    tmp1463 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* trafo_4_1044.State0 PARAM */),6);
    if(!(tmp1462 && tmp1463))
    {
      tmp1465 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[376]] /* trafo_4_1044.State0 PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1466 = stringAppend(MMC_REFSTRINGLIT(tmp1464),tmp1465);
      {
        const char* assert_cond = "(trafo_4_1044.State0 >= Dynawo.Electrical.Constants.state.Open and trafo_4_1044.State0 <= Dynawo.Electrical.Constants.state.Undefined)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffTransformer.mo",25,3,25,94,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1466));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffTransformer.mo",25,3,25,94,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1466));
        }
      }
      tmp1467 = 1;
    }
  }
  threadData->lastEquationSolved = 13328;
}

/*
equation index: 13329
type: ALGORITHM

  assert(trafo_5_1045.NbSwitchOffSignals >= 1 and trafo_5_1045.NbSwitchOffSignals <= 3, "Variable violating min/max constraint: 1 <= trafo_5_1045.NbSwitchOffSignals <= 3, has value: " + String(trafo_5_1045.NbSwitchOffSignals, "d"));
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_13329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13329};
  modelica_boolean tmp1468;
  modelica_boolean tmp1469;
  static const MMC_DEFSTRINGLIT(tmp1470,93,"Variable violating min/max constraint: 1 <= trafo_5_1045.NbSwitchOffSignals <= 3, has value: ");
  modelica_string tmp1471;
  modelica_metatype tmpMeta1472;
  static int tmp1473 = 0;
  if(!tmp1473)
  {
    tmp1468 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* trafo_5_1045.NbSwitchOffSignals PARAM */),((modelica_integer) 1));
    tmp1469 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* trafo_5_1045.NbSwitchOffSignals PARAM */),((modelica_integer) 3));
    if(!(tmp1468 && tmp1469))
    {
      tmp1471 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[379]] /* trafo_5_1045.NbSwitchOffSignals PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1472 = stringAppend(MMC_REFSTRINGLIT(tmp1470),tmp1471);
      {
        const char* assert_cond = "(trafo_5_1045.NbSwitchOffSignals >= 1 and trafo_5_1045.NbSwitchOffSignals <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1472));
        } else {
          FILE_INFO info = {"/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo/Electrical/Controls/Basics/SwitchOff/SwitchOffLogic.mo",18,3,18,119,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1472));
        }
      }
      tmp1473 = 1;
    }
  }
  threadData->lastEquationSolved = 13329;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_updateBoundParameters_3(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[415])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_12687,
    MyNordic_initialized_TestCase_initialized_eqFunction_12688,
    MyNordic_initialized_TestCase_initialized_eqFunction_12692,
    MyNordic_initialized_TestCase_initialized_eqFunction_12693,
    MyNordic_initialized_TestCase_initialized_eqFunction_12694,
    MyNordic_initialized_TestCase_initialized_eqFunction_12695,
    MyNordic_initialized_TestCase_initialized_eqFunction_12701,
    MyNordic_initialized_TestCase_initialized_eqFunction_12706,
    MyNordic_initialized_TestCase_initialized_eqFunction_12708,
    MyNordic_initialized_TestCase_initialized_eqFunction_12709,
    MyNordic_initialized_TestCase_initialized_eqFunction_12713,
    MyNordic_initialized_TestCase_initialized_eqFunction_12714,
    MyNordic_initialized_TestCase_initialized_eqFunction_12715,
    MyNordic_initialized_TestCase_initialized_eqFunction_12716,
    MyNordic_initialized_TestCase_initialized_eqFunction_12720,
    MyNordic_initialized_TestCase_initialized_eqFunction_12721,
    MyNordic_initialized_TestCase_initialized_eqFunction_12725,
    MyNordic_initialized_TestCase_initialized_eqFunction_12728,
    MyNordic_initialized_TestCase_initialized_eqFunction_12729,
    MyNordic_initialized_TestCase_initialized_eqFunction_12730,
    MyNordic_initialized_TestCase_initialized_eqFunction_12731,
    MyNordic_initialized_TestCase_initialized_eqFunction_12735,
    MyNordic_initialized_TestCase_initialized_eqFunction_12736,
    MyNordic_initialized_TestCase_initialized_eqFunction_12737,
    MyNordic_initialized_TestCase_initialized_eqFunction_12743,
    MyNordic_initialized_TestCase_initialized_eqFunction_12744,
    MyNordic_initialized_TestCase_initialized_eqFunction_12746,
    MyNordic_initialized_TestCase_initialized_eqFunction_12747,
    MyNordic_initialized_TestCase_initialized_eqFunction_12748,
    MyNordic_initialized_TestCase_initialized_eqFunction_12752,
    MyNordic_initialized_TestCase_initialized_eqFunction_12753,
    MyNordic_initialized_TestCase_initialized_eqFunction_12754,
    MyNordic_initialized_TestCase_initialized_eqFunction_12755,
    MyNordic_initialized_TestCase_initialized_eqFunction_12756,
    MyNordic_initialized_TestCase_initialized_eqFunction_12757,
    MyNordic_initialized_TestCase_initialized_eqFunction_12758,
    MyNordic_initialized_TestCase_initialized_eqFunction_12759,
    MyNordic_initialized_TestCase_initialized_eqFunction_12763,
    MyNordic_initialized_TestCase_initialized_eqFunction_12764,
    MyNordic_initialized_TestCase_initialized_eqFunction_12765,
    MyNordic_initialized_TestCase_initialized_eqFunction_12766,
    MyNordic_initialized_TestCase_initialized_eqFunction_12767,
    MyNordic_initialized_TestCase_initialized_eqFunction_12768,
    MyNordic_initialized_TestCase_initialized_eqFunction_12769,
    MyNordic_initialized_TestCase_initialized_eqFunction_12773,
    MyNordic_initialized_TestCase_initialized_eqFunction_12774,
    MyNordic_initialized_TestCase_initialized_eqFunction_12775,
    MyNordic_initialized_TestCase_initialized_eqFunction_12776,
    MyNordic_initialized_TestCase_initialized_eqFunction_12782,
    MyNordic_initialized_TestCase_initialized_eqFunction_12787,
    MyNordic_initialized_TestCase_initialized_eqFunction_12789,
    MyNordic_initialized_TestCase_initialized_eqFunction_12790,
    MyNordic_initialized_TestCase_initialized_eqFunction_12794,
    MyNordic_initialized_TestCase_initialized_eqFunction_12795,
    MyNordic_initialized_TestCase_initialized_eqFunction_12796,
    MyNordic_initialized_TestCase_initialized_eqFunction_12797,
    MyNordic_initialized_TestCase_initialized_eqFunction_12801,
    MyNordic_initialized_TestCase_initialized_eqFunction_12802,
    MyNordic_initialized_TestCase_initialized_eqFunction_12806,
    MyNordic_initialized_TestCase_initialized_eqFunction_12809,
    MyNordic_initialized_TestCase_initialized_eqFunction_12810,
    MyNordic_initialized_TestCase_initialized_eqFunction_12811,
    MyNordic_initialized_TestCase_initialized_eqFunction_12812,
    MyNordic_initialized_TestCase_initialized_eqFunction_12816,
    MyNordic_initialized_TestCase_initialized_eqFunction_12817,
    MyNordic_initialized_TestCase_initialized_eqFunction_12818,
    MyNordic_initialized_TestCase_initialized_eqFunction_12824,
    MyNordic_initialized_TestCase_initialized_eqFunction_12825,
    MyNordic_initialized_TestCase_initialized_eqFunction_12827,
    MyNordic_initialized_TestCase_initialized_eqFunction_12828,
    MyNordic_initialized_TestCase_initialized_eqFunction_12829,
    MyNordic_initialized_TestCase_initialized_eqFunction_12833,
    MyNordic_initialized_TestCase_initialized_eqFunction_12834,
    MyNordic_initialized_TestCase_initialized_eqFunction_12835,
    MyNordic_initialized_TestCase_initialized_eqFunction_12836,
    MyNordic_initialized_TestCase_initialized_eqFunction_12837,
    MyNordic_initialized_TestCase_initialized_eqFunction_12838,
    MyNordic_initialized_TestCase_initialized_eqFunction_12839,
    MyNordic_initialized_TestCase_initialized_eqFunction_12840,
    MyNordic_initialized_TestCase_initialized_eqFunction_12844,
    MyNordic_initialized_TestCase_initialized_eqFunction_12845,
    MyNordic_initialized_TestCase_initialized_eqFunction_12846,
    MyNordic_initialized_TestCase_initialized_eqFunction_12847,
    MyNordic_initialized_TestCase_initialized_eqFunction_12848,
    MyNordic_initialized_TestCase_initialized_eqFunction_12849,
    MyNordic_initialized_TestCase_initialized_eqFunction_12850,
    MyNordic_initialized_TestCase_initialized_eqFunction_12854,
    MyNordic_initialized_TestCase_initialized_eqFunction_12855,
    MyNordic_initialized_TestCase_initialized_eqFunction_12856,
    MyNordic_initialized_TestCase_initialized_eqFunction_12857,
    MyNordic_initialized_TestCase_initialized_eqFunction_12863,
    MyNordic_initialized_TestCase_initialized_eqFunction_12868,
    MyNordic_initialized_TestCase_initialized_eqFunction_12870,
    MyNordic_initialized_TestCase_initialized_eqFunction_12871,
    MyNordic_initialized_TestCase_initialized_eqFunction_12875,
    MyNordic_initialized_TestCase_initialized_eqFunction_12876,
    MyNordic_initialized_TestCase_initialized_eqFunction_12877,
    MyNordic_initialized_TestCase_initialized_eqFunction_12878,
    MyNordic_initialized_TestCase_initialized_eqFunction_12882,
    MyNordic_initialized_TestCase_initialized_eqFunction_12883,
    MyNordic_initialized_TestCase_initialized_eqFunction_12887,
    MyNordic_initialized_TestCase_initialized_eqFunction_12890,
    MyNordic_initialized_TestCase_initialized_eqFunction_12891,
    MyNordic_initialized_TestCase_initialized_eqFunction_12892,
    MyNordic_initialized_TestCase_initialized_eqFunction_12893,
    MyNordic_initialized_TestCase_initialized_eqFunction_12897,
    MyNordic_initialized_TestCase_initialized_eqFunction_12898,
    MyNordic_initialized_TestCase_initialized_eqFunction_12899,
    MyNordic_initialized_TestCase_initialized_eqFunction_12905,
    MyNordic_initialized_TestCase_initialized_eqFunction_12906,
    MyNordic_initialized_TestCase_initialized_eqFunction_12908,
    MyNordic_initialized_TestCase_initialized_eqFunction_12909,
    MyNordic_initialized_TestCase_initialized_eqFunction_12910,
    MyNordic_initialized_TestCase_initialized_eqFunction_12914,
    MyNordic_initialized_TestCase_initialized_eqFunction_12915,
    MyNordic_initialized_TestCase_initialized_eqFunction_12916,
    MyNordic_initialized_TestCase_initialized_eqFunction_12917,
    MyNordic_initialized_TestCase_initialized_eqFunction_12918,
    MyNordic_initialized_TestCase_initialized_eqFunction_12919,
    MyNordic_initialized_TestCase_initialized_eqFunction_12920,
    MyNordic_initialized_TestCase_initialized_eqFunction_12921,
    MyNordic_initialized_TestCase_initialized_eqFunction_12925,
    MyNordic_initialized_TestCase_initialized_eqFunction_12926,
    MyNordic_initialized_TestCase_initialized_eqFunction_12927,
    MyNordic_initialized_TestCase_initialized_eqFunction_12928,
    MyNordic_initialized_TestCase_initialized_eqFunction_12929,
    MyNordic_initialized_TestCase_initialized_eqFunction_12930,
    MyNordic_initialized_TestCase_initialized_eqFunction_12931,
    MyNordic_initialized_TestCase_initialized_eqFunction_12935,
    MyNordic_initialized_TestCase_initialized_eqFunction_12936,
    MyNordic_initialized_TestCase_initialized_eqFunction_12937,
    MyNordic_initialized_TestCase_initialized_eqFunction_12938,
    MyNordic_initialized_TestCase_initialized_eqFunction_12944,
    MyNordic_initialized_TestCase_initialized_eqFunction_12949,
    MyNordic_initialized_TestCase_initialized_eqFunction_12951,
    MyNordic_initialized_TestCase_initialized_eqFunction_12952,
    MyNordic_initialized_TestCase_initialized_eqFunction_12956,
    MyNordic_initialized_TestCase_initialized_eqFunction_12957,
    MyNordic_initialized_TestCase_initialized_eqFunction_12958,
    MyNordic_initialized_TestCase_initialized_eqFunction_12959,
    MyNordic_initialized_TestCase_initialized_eqFunction_12963,
    MyNordic_initialized_TestCase_initialized_eqFunction_12964,
    MyNordic_initialized_TestCase_initialized_eqFunction_12968,
    MyNordic_initialized_TestCase_initialized_eqFunction_12971,
    MyNordic_initialized_TestCase_initialized_eqFunction_12972,
    MyNordic_initialized_TestCase_initialized_eqFunction_12973,
    MyNordic_initialized_TestCase_initialized_eqFunction_12974,
    MyNordic_initialized_TestCase_initialized_eqFunction_12978,
    MyNordic_initialized_TestCase_initialized_eqFunction_12979,
    MyNordic_initialized_TestCase_initialized_eqFunction_12980,
    MyNordic_initialized_TestCase_initialized_eqFunction_12986,
    MyNordic_initialized_TestCase_initialized_eqFunction_12987,
    MyNordic_initialized_TestCase_initialized_eqFunction_12989,
    MyNordic_initialized_TestCase_initialized_eqFunction_12990,
    MyNordic_initialized_TestCase_initialized_eqFunction_12991,
    MyNordic_initialized_TestCase_initialized_eqFunction_12995,
    MyNordic_initialized_TestCase_initialized_eqFunction_12996,
    MyNordic_initialized_TestCase_initialized_eqFunction_12997,
    MyNordic_initialized_TestCase_initialized_eqFunction_12998,
    MyNordic_initialized_TestCase_initialized_eqFunction_12999,
    MyNordic_initialized_TestCase_initialized_eqFunction_13000,
    MyNordic_initialized_TestCase_initialized_eqFunction_13001,
    MyNordic_initialized_TestCase_initialized_eqFunction_13002,
    MyNordic_initialized_TestCase_initialized_eqFunction_13006,
    MyNordic_initialized_TestCase_initialized_eqFunction_13007,
    MyNordic_initialized_TestCase_initialized_eqFunction_13008,
    MyNordic_initialized_TestCase_initialized_eqFunction_13009,
    MyNordic_initialized_TestCase_initialized_eqFunction_13010,
    MyNordic_initialized_TestCase_initialized_eqFunction_13011,
    MyNordic_initialized_TestCase_initialized_eqFunction_13012,
    MyNordic_initialized_TestCase_initialized_eqFunction_13016,
    MyNordic_initialized_TestCase_initialized_eqFunction_13017,
    MyNordic_initialized_TestCase_initialized_eqFunction_13018,
    MyNordic_initialized_TestCase_initialized_eqFunction_13019,
    MyNordic_initialized_TestCase_initialized_eqFunction_13025,
    MyNordic_initialized_TestCase_initialized_eqFunction_13030,
    MyNordic_initialized_TestCase_initialized_eqFunction_13032,
    MyNordic_initialized_TestCase_initialized_eqFunction_13033,
    MyNordic_initialized_TestCase_initialized_eqFunction_13037,
    MyNordic_initialized_TestCase_initialized_eqFunction_13038,
    MyNordic_initialized_TestCase_initialized_eqFunction_13039,
    MyNordic_initialized_TestCase_initialized_eqFunction_13040,
    MyNordic_initialized_TestCase_initialized_eqFunction_13044,
    MyNordic_initialized_TestCase_initialized_eqFunction_13045,
    MyNordic_initialized_TestCase_initialized_eqFunction_13049,
    MyNordic_initialized_TestCase_initialized_eqFunction_13052,
    MyNordic_initialized_TestCase_initialized_eqFunction_13053,
    MyNordic_initialized_TestCase_initialized_eqFunction_13054,
    MyNordic_initialized_TestCase_initialized_eqFunction_13055,
    MyNordic_initialized_TestCase_initialized_eqFunction_13059,
    MyNordic_initialized_TestCase_initialized_eqFunction_13060,
    MyNordic_initialized_TestCase_initialized_eqFunction_13061,
    MyNordic_initialized_TestCase_initialized_eqFunction_13067,
    MyNordic_initialized_TestCase_initialized_eqFunction_13068,
    MyNordic_initialized_TestCase_initialized_eqFunction_13070,
    MyNordic_initialized_TestCase_initialized_eqFunction_13071,
    MyNordic_initialized_TestCase_initialized_eqFunction_13072,
    MyNordic_initialized_TestCase_initialized_eqFunction_13076,
    MyNordic_initialized_TestCase_initialized_eqFunction_13077,
    MyNordic_initialized_TestCase_initialized_eqFunction_13078,
    MyNordic_initialized_TestCase_initialized_eqFunction_13079,
    MyNordic_initialized_TestCase_initialized_eqFunction_13080,
    MyNordic_initialized_TestCase_initialized_eqFunction_13081,
    MyNordic_initialized_TestCase_initialized_eqFunction_13082,
    MyNordic_initialized_TestCase_initialized_eqFunction_13083,
    MyNordic_initialized_TestCase_initialized_eqFunction_13087,
    MyNordic_initialized_TestCase_initialized_eqFunction_13088,
    MyNordic_initialized_TestCase_initialized_eqFunction_13089,
    MyNordic_initialized_TestCase_initialized_eqFunction_13090,
    MyNordic_initialized_TestCase_initialized_eqFunction_13091,
    MyNordic_initialized_TestCase_initialized_eqFunction_13092,
    MyNordic_initialized_TestCase_initialized_eqFunction_13093,
    MyNordic_initialized_TestCase_initialized_eqFunction_13097,
    MyNordic_initialized_TestCase_initialized_eqFunction_13098,
    MyNordic_initialized_TestCase_initialized_eqFunction_13099,
    MyNordic_initialized_TestCase_initialized_eqFunction_13100,
    MyNordic_initialized_TestCase_initialized_eqFunction_13106,
    MyNordic_initialized_TestCase_initialized_eqFunction_13111,
    MyNordic_initialized_TestCase_initialized_eqFunction_13113,
    MyNordic_initialized_TestCase_initialized_eqFunction_13114,
    MyNordic_initialized_TestCase_initialized_eqFunction_13118,
    MyNordic_initialized_TestCase_initialized_eqFunction_13119,
    MyNordic_initialized_TestCase_initialized_eqFunction_13120,
    MyNordic_initialized_TestCase_initialized_eqFunction_13121,
    MyNordic_initialized_TestCase_initialized_eqFunction_13125,
    MyNordic_initialized_TestCase_initialized_eqFunction_13126,
    MyNordic_initialized_TestCase_initialized_eqFunction_13130,
    MyNordic_initialized_TestCase_initialized_eqFunction_13133,
    MyNordic_initialized_TestCase_initialized_eqFunction_13134,
    MyNordic_initialized_TestCase_initialized_eqFunction_13135,
    MyNordic_initialized_TestCase_initialized_eqFunction_13136,
    MyNordic_initialized_TestCase_initialized_eqFunction_13140,
    MyNordic_initialized_TestCase_initialized_eqFunction_13141,
    MyNordic_initialized_TestCase_initialized_eqFunction_13142,
    MyNordic_initialized_TestCase_initialized_eqFunction_13148,
    MyNordic_initialized_TestCase_initialized_eqFunction_13149,
    MyNordic_initialized_TestCase_initialized_eqFunction_13151,
    MyNordic_initialized_TestCase_initialized_eqFunction_13152,
    MyNordic_initialized_TestCase_initialized_eqFunction_13153,
    MyNordic_initialized_TestCase_initialized_eqFunction_13154,
    MyNordic_initialized_TestCase_initialized_eqFunction_13155,
    MyNordic_initialized_TestCase_initialized_eqFunction_13156,
    MyNordic_initialized_TestCase_initialized_eqFunction_13157,
    MyNordic_initialized_TestCase_initialized_eqFunction_13158,
    MyNordic_initialized_TestCase_initialized_eqFunction_13159,
    MyNordic_initialized_TestCase_initialized_eqFunction_13160,
    MyNordic_initialized_TestCase_initialized_eqFunction_13161,
    MyNordic_initialized_TestCase_initialized_eqFunction_13162,
    MyNordic_initialized_TestCase_initialized_eqFunction_13163,
    MyNordic_initialized_TestCase_initialized_eqFunction_13164,
    MyNordic_initialized_TestCase_initialized_eqFunction_13165,
    MyNordic_initialized_TestCase_initialized_eqFunction_13166,
    MyNordic_initialized_TestCase_initialized_eqFunction_13167,
    MyNordic_initialized_TestCase_initialized_eqFunction_13168,
    MyNordic_initialized_TestCase_initialized_eqFunction_13169,
    MyNordic_initialized_TestCase_initialized_eqFunction_13170,
    MyNordic_initialized_TestCase_initialized_eqFunction_13171,
    MyNordic_initialized_TestCase_initialized_eqFunction_13172,
    MyNordic_initialized_TestCase_initialized_eqFunction_13173,
    MyNordic_initialized_TestCase_initialized_eqFunction_13174,
    MyNordic_initialized_TestCase_initialized_eqFunction_13175,
    MyNordic_initialized_TestCase_initialized_eqFunction_13176,
    MyNordic_initialized_TestCase_initialized_eqFunction_13177,
    MyNordic_initialized_TestCase_initialized_eqFunction_13178,
    MyNordic_initialized_TestCase_initialized_eqFunction_13179,
    MyNordic_initialized_TestCase_initialized_eqFunction_13180,
    MyNordic_initialized_TestCase_initialized_eqFunction_13181,
    MyNordic_initialized_TestCase_initialized_eqFunction_13182,
    MyNordic_initialized_TestCase_initialized_eqFunction_13183,
    MyNordic_initialized_TestCase_initialized_eqFunction_13184,
    MyNordic_initialized_TestCase_initialized_eqFunction_13185,
    MyNordic_initialized_TestCase_initialized_eqFunction_13186,
    MyNordic_initialized_TestCase_initialized_eqFunction_13187,
    MyNordic_initialized_TestCase_initialized_eqFunction_13188,
    MyNordic_initialized_TestCase_initialized_eqFunction_13189,
    MyNordic_initialized_TestCase_initialized_eqFunction_13190,
    MyNordic_initialized_TestCase_initialized_eqFunction_13191,
    MyNordic_initialized_TestCase_initialized_eqFunction_13192,
    MyNordic_initialized_TestCase_initialized_eqFunction_13193,
    MyNordic_initialized_TestCase_initialized_eqFunction_13194,
    MyNordic_initialized_TestCase_initialized_eqFunction_13195,
    MyNordic_initialized_TestCase_initialized_eqFunction_13196,
    MyNordic_initialized_TestCase_initialized_eqFunction_13197,
    MyNordic_initialized_TestCase_initialized_eqFunction_13198,
    MyNordic_initialized_TestCase_initialized_eqFunction_13199,
    MyNordic_initialized_TestCase_initialized_eqFunction_13200,
    MyNordic_initialized_TestCase_initialized_eqFunction_13201,
    MyNordic_initialized_TestCase_initialized_eqFunction_13202,
    MyNordic_initialized_TestCase_initialized_eqFunction_13203,
    MyNordic_initialized_TestCase_initialized_eqFunction_13204,
    MyNordic_initialized_TestCase_initialized_eqFunction_13205,
    MyNordic_initialized_TestCase_initialized_eqFunction_13206,
    MyNordic_initialized_TestCase_initialized_eqFunction_13207,
    MyNordic_initialized_TestCase_initialized_eqFunction_13208,
    MyNordic_initialized_TestCase_initialized_eqFunction_13209,
    MyNordic_initialized_TestCase_initialized_eqFunction_13210,
    MyNordic_initialized_TestCase_initialized_eqFunction_13211,
    MyNordic_initialized_TestCase_initialized_eqFunction_13212,
    MyNordic_initialized_TestCase_initialized_eqFunction_13213,
    MyNordic_initialized_TestCase_initialized_eqFunction_13214,
    MyNordic_initialized_TestCase_initialized_eqFunction_13215,
    MyNordic_initialized_TestCase_initialized_eqFunction_13216,
    MyNordic_initialized_TestCase_initialized_eqFunction_13217,
    MyNordic_initialized_TestCase_initialized_eqFunction_13218,
    MyNordic_initialized_TestCase_initialized_eqFunction_13219,
    MyNordic_initialized_TestCase_initialized_eqFunction_13220,
    MyNordic_initialized_TestCase_initialized_eqFunction_13221,
    MyNordic_initialized_TestCase_initialized_eqFunction_13222,
    MyNordic_initialized_TestCase_initialized_eqFunction_13223,
    MyNordic_initialized_TestCase_initialized_eqFunction_13224,
    MyNordic_initialized_TestCase_initialized_eqFunction_13225,
    MyNordic_initialized_TestCase_initialized_eqFunction_13226,
    MyNordic_initialized_TestCase_initialized_eqFunction_13227,
    MyNordic_initialized_TestCase_initialized_eqFunction_13228,
    MyNordic_initialized_TestCase_initialized_eqFunction_13229,
    MyNordic_initialized_TestCase_initialized_eqFunction_13230,
    MyNordic_initialized_TestCase_initialized_eqFunction_13231,
    MyNordic_initialized_TestCase_initialized_eqFunction_13232,
    MyNordic_initialized_TestCase_initialized_eqFunction_13233,
    MyNordic_initialized_TestCase_initialized_eqFunction_13234,
    MyNordic_initialized_TestCase_initialized_eqFunction_13235,
    MyNordic_initialized_TestCase_initialized_eqFunction_13236,
    MyNordic_initialized_TestCase_initialized_eqFunction_13237,
    MyNordic_initialized_TestCase_initialized_eqFunction_13238,
    MyNordic_initialized_TestCase_initialized_eqFunction_13239,
    MyNordic_initialized_TestCase_initialized_eqFunction_13240,
    MyNordic_initialized_TestCase_initialized_eqFunction_13241,
    MyNordic_initialized_TestCase_initialized_eqFunction_13242,
    MyNordic_initialized_TestCase_initialized_eqFunction_13243,
    MyNordic_initialized_TestCase_initialized_eqFunction_13244,
    MyNordic_initialized_TestCase_initialized_eqFunction_13245,
    MyNordic_initialized_TestCase_initialized_eqFunction_13246,
    MyNordic_initialized_TestCase_initialized_eqFunction_13247,
    MyNordic_initialized_TestCase_initialized_eqFunction_13248,
    MyNordic_initialized_TestCase_initialized_eqFunction_13249,
    MyNordic_initialized_TestCase_initialized_eqFunction_13250,
    MyNordic_initialized_TestCase_initialized_eqFunction_13251,
    MyNordic_initialized_TestCase_initialized_eqFunction_13252,
    MyNordic_initialized_TestCase_initialized_eqFunction_13253,
    MyNordic_initialized_TestCase_initialized_eqFunction_13254,
    MyNordic_initialized_TestCase_initialized_eqFunction_13255,
    MyNordic_initialized_TestCase_initialized_eqFunction_13256,
    MyNordic_initialized_TestCase_initialized_eqFunction_13257,
    MyNordic_initialized_TestCase_initialized_eqFunction_13258,
    MyNordic_initialized_TestCase_initialized_eqFunction_13259,
    MyNordic_initialized_TestCase_initialized_eqFunction_13260,
    MyNordic_initialized_TestCase_initialized_eqFunction_13261,
    MyNordic_initialized_TestCase_initialized_eqFunction_13262,
    MyNordic_initialized_TestCase_initialized_eqFunction_13263,
    MyNordic_initialized_TestCase_initialized_eqFunction_13264,
    MyNordic_initialized_TestCase_initialized_eqFunction_13265,
    MyNordic_initialized_TestCase_initialized_eqFunction_13266,
    MyNordic_initialized_TestCase_initialized_eqFunction_13267,
    MyNordic_initialized_TestCase_initialized_eqFunction_13268,
    MyNordic_initialized_TestCase_initialized_eqFunction_13269,
    MyNordic_initialized_TestCase_initialized_eqFunction_13270,
    MyNordic_initialized_TestCase_initialized_eqFunction_13271,
    MyNordic_initialized_TestCase_initialized_eqFunction_13272,
    MyNordic_initialized_TestCase_initialized_eqFunction_13273,
    MyNordic_initialized_TestCase_initialized_eqFunction_13274,
    MyNordic_initialized_TestCase_initialized_eqFunction_13275,
    MyNordic_initialized_TestCase_initialized_eqFunction_13276,
    MyNordic_initialized_TestCase_initialized_eqFunction_13277,
    MyNordic_initialized_TestCase_initialized_eqFunction_13278,
    MyNordic_initialized_TestCase_initialized_eqFunction_13279,
    MyNordic_initialized_TestCase_initialized_eqFunction_13280,
    MyNordic_initialized_TestCase_initialized_eqFunction_13281,
    MyNordic_initialized_TestCase_initialized_eqFunction_13282,
    MyNordic_initialized_TestCase_initialized_eqFunction_13283,
    MyNordic_initialized_TestCase_initialized_eqFunction_13284,
    MyNordic_initialized_TestCase_initialized_eqFunction_13285,
    MyNordic_initialized_TestCase_initialized_eqFunction_13286,
    MyNordic_initialized_TestCase_initialized_eqFunction_13287,
    MyNordic_initialized_TestCase_initialized_eqFunction_13288,
    MyNordic_initialized_TestCase_initialized_eqFunction_13289,
    MyNordic_initialized_TestCase_initialized_eqFunction_13290,
    MyNordic_initialized_TestCase_initialized_eqFunction_13291,
    MyNordic_initialized_TestCase_initialized_eqFunction_13292,
    MyNordic_initialized_TestCase_initialized_eqFunction_13293,
    MyNordic_initialized_TestCase_initialized_eqFunction_13294,
    MyNordic_initialized_TestCase_initialized_eqFunction_13295,
    MyNordic_initialized_TestCase_initialized_eqFunction_13296,
    MyNordic_initialized_TestCase_initialized_eqFunction_13297,
    MyNordic_initialized_TestCase_initialized_eqFunction_13298,
    MyNordic_initialized_TestCase_initialized_eqFunction_13299,
    MyNordic_initialized_TestCase_initialized_eqFunction_13300,
    MyNordic_initialized_TestCase_initialized_eqFunction_13301,
    MyNordic_initialized_TestCase_initialized_eqFunction_13302,
    MyNordic_initialized_TestCase_initialized_eqFunction_13303,
    MyNordic_initialized_TestCase_initialized_eqFunction_13304,
    MyNordic_initialized_TestCase_initialized_eqFunction_13305,
    MyNordic_initialized_TestCase_initialized_eqFunction_13306,
    MyNordic_initialized_TestCase_initialized_eqFunction_13307,
    MyNordic_initialized_TestCase_initialized_eqFunction_13308,
    MyNordic_initialized_TestCase_initialized_eqFunction_13309,
    MyNordic_initialized_TestCase_initialized_eqFunction_13310,
    MyNordic_initialized_TestCase_initialized_eqFunction_13311,
    MyNordic_initialized_TestCase_initialized_eqFunction_13312,
    MyNordic_initialized_TestCase_initialized_eqFunction_13313,
    MyNordic_initialized_TestCase_initialized_eqFunction_13314,
    MyNordic_initialized_TestCase_initialized_eqFunction_13315,
    MyNordic_initialized_TestCase_initialized_eqFunction_13316,
    MyNordic_initialized_TestCase_initialized_eqFunction_13317,
    MyNordic_initialized_TestCase_initialized_eqFunction_13318,
    MyNordic_initialized_TestCase_initialized_eqFunction_13319,
    MyNordic_initialized_TestCase_initialized_eqFunction_13320,
    MyNordic_initialized_TestCase_initialized_eqFunction_13321,
    MyNordic_initialized_TestCase_initialized_eqFunction_13322,
    MyNordic_initialized_TestCase_initialized_eqFunction_13323,
    MyNordic_initialized_TestCase_initialized_eqFunction_13324,
    MyNordic_initialized_TestCase_initialized_eqFunction_13325,
    MyNordic_initialized_TestCase_initialized_eqFunction_13326,
    MyNordic_initialized_TestCase_initialized_eqFunction_13327,
    MyNordic_initialized_TestCase_initialized_eqFunction_13328,
    MyNordic_initialized_TestCase_initialized_eqFunction_13329
  };
  
  for (int id = 0; id < 415; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif