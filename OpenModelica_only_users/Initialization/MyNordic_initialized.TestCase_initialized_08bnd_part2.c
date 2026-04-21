#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 11885
type: SIMPLE_ASSIGN
vrNordic_g05.limIntegrator.outMax = vrNordic_g05.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11885};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4498]] /* vrNordic_g05.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4437]] /* vrNordic_g05.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 11885;
}

/*
equation index: 11891
type: SIMPLE_ASSIGN
vrNordic_g05.timer.outMin = vrNordic_g05.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11891};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4513]] /* vrNordic_g05.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4510]] /* vrNordic_g05.tOelMin PARAM */);
  threadData->lastEquationSolved = 11891;
}

/*
equation index: 11896
type: SIMPLE_ASSIGN
vrNordic_g05.timer.y_start = vrNordic_g05.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11896};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4514]] /* vrNordic_g05.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4510]] /* vrNordic_g05.tOelMin PARAM */);
  threadData->lastEquationSolved = 11896;
}

/*
equation index: 11898
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.b[1] = vrNordic_g05.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11898};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4463]] /* vrNordic_g05.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4509]] /* vrNordic_g05.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 11898;
}

/*
equation index: 11899
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.a[1] = vrNordic_g05.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11899};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4460]] /* vrNordic_g05.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4507]] /* vrNordic_g05.tLagTgr PARAM */);
  threadData->lastEquationSolved = 11899;
}

/*
equation index: 11903
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.bb[1] = vrNordic_g05.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11903};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4465]] /* vrNordic_g05.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4463]] /* vrNordic_g05.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 11903;
}

/*
equation index: 11904
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.bb[2] = vrNordic_g05.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11904};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4466]] /* vrNordic_g05.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4464]] /* vrNordic_g05.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 11904;
}

/*
equation index: 11905
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.d = vrNordic_g05.leadLag.bb[1] / vrNordic_g05.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11905};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4467]] /* vrNordic_g05.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4465]] /* vrNordic_g05.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4460]] /* vrNordic_g05.leadLag.a[1] PARAM */),"vrNordic_g05.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11905;
}

/*
equation index: 11906
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.a_end = if vrNordic_g05.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g05.leadLag.a[1] ^ 2.0 + vrNordic_g05.leadLag.a[2] ^ 2.0) then vrNordic_g05.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11906};
  modelica_real tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_boolean tmp204;
  tmp201 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4460]] /* vrNordic_g05.leadLag.a[1] PARAM */);
  tmp202 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4461]] /* vrNordic_g05.leadLag.a[2] PARAM */);
  tmp203 = (tmp201 * tmp201) + (tmp202 * tmp202);
  if(!(tmp203 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g05.leadLag.a[1] ^ 2.0 + vrNordic_g05.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp203);
    }
  }tmp204 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4461]] /* vrNordic_g05.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp203)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4462]] /* vrNordic_g05.leadLag.a_end PARAM */) = (tmp204?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4461]] /* vrNordic_g05.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11906;
}

/*
equation index: 11910
type: SIMPLE_ASSIGN
goverNordic_g05.govKp.k = goverNordic_g05.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2413]] /* goverNordic_g05.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2399]] /* goverNordic_g05.Kp PARAM */);
  threadData->lastEquationSolved = 11910;
}

/*
equation index: 11911
type: SIMPLE_ASSIGN
goverNordic_g05.govKi.k = goverNordic_g05.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11911};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2412]] /* goverNordic_g05.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2398]] /* goverNordic_g05.Ki PARAM */);
  threadData->lastEquationSolved = 11911;
}

/*
equation index: 11915
type: SIMPLE_ASSIGN
goverNordic_g05.dOmegaPlusDroop.k2 = goverNordic_g05.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11915};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2406]] /* goverNordic_g05.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2397]] /* goverNordic_g05.KSigma PARAM */);
  threadData->lastEquationSolved = 11915;
}

/*
equation index: 11918
type: SIMPLE_ASSIGN
goverNordic_g05.perUnitP.k = 100.0 / goverNordic_g05.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2430]] /* goverNordic_g05.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2400]] /* goverNordic_g05.PNom PARAM */),"goverNordic_g05.PNom",equationIndexes);
  threadData->lastEquationSolved = 11918;
}

/*
equation index: 11919
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.DuMin = -goverNordic_g05.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11919};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2418]] /* goverNordic_g05.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2417]] /* goverNordic_g05.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 11919;
}

/*
equation index: 11920
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limiter.uMax = goverNordic_g05.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2417]] /* goverNordic_g05.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 11920;
}

/*
equation index: 11921
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limiter.uMin = goverNordic_g05.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11921};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* goverNordic_g05.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2418]] /* goverNordic_g05.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 11921;
}

/*
equation index: 11925
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g05.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11925};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2422]] /* goverNordic_g05.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2429]] /* goverNordic_g05.limRateLimFirstOrder.tS PARAM */),"goverNordic_g05.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 11925;
}

/*
equation index: 11926
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g05.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11926};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2420]] /* goverNordic_g05.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 11926;
}

/*
equation index: 11927
type: SIMPLE_ASSIGN
goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g05.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2421]] /* goverNordic_g05.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 11927;
}

/*
equation index: 11933
type: SIMPLE_ASSIGN
vrNordic_g06.derivative.k = vrNordic_g06.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4530]] /* vrNordic_g06.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4519]] /* vrNordic_g06.KPss PARAM */);
  threadData->lastEquationSolved = 11933;
}

/*
equation index: 11934
type: SIMPLE_ASSIGN
vrNordic_g06.derivative.T = vrNordic_g06.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11934};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4529]] /* vrNordic_g06.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4584]] /* vrNordic_g06.tDerOmega PARAM */);
  threadData->lastEquationSolved = 11934;
}

/*
equation index: 11936
type: SIMPLE_ASSIGN
vrNordic_g06.derivative.zeroGain = abs(vrNordic_g06.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11936};
  modelica_boolean tmp205;
  tmp205 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4530]] /* vrNordic_g06.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[916]] /* vrNordic_g06.derivative.zeroGain PARAM */) = tmp205;
  threadData->lastEquationSolved = 11936;
}

/*
equation index: 11937
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.b[1] = vrNordic_g06.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11937};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4555]] /* vrNordic_g06.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4587]] /* vrNordic_g06.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11937;
}

/*
equation index: 11938
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.a[1] = vrNordic_g06.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11938};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4552]] /* vrNordic_g06.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4585]] /* vrNordic_g06.tLagPss PARAM */);
  threadData->lastEquationSolved = 11938;
}

/*
equation index: 11942
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.bb[1] = vrNordic_g06.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4557]] /* vrNordic_g06.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4555]] /* vrNordic_g06.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 11942;
}

/*
equation index: 11943
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.bb[2] = vrNordic_g06.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11943};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4558]] /* vrNordic_g06.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4556]] /* vrNordic_g06.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 11943;
}

/*
equation index: 11944
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.d = vrNordic_g06.leadLag1.bb[1] / vrNordic_g06.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11944};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4559]] /* vrNordic_g06.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4557]] /* vrNordic_g06.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4552]] /* vrNordic_g06.leadLag1.a[1] PARAM */),"vrNordic_g06.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11944;
}

/*
equation index: 11945
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.a_end = if vrNordic_g06.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g06.leadLag1.a[1] ^ 2.0 + vrNordic_g06.leadLag1.a[2] ^ 2.0) then vrNordic_g06.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11945};
  modelica_real tmp206;
  modelica_real tmp207;
  modelica_real tmp208;
  modelica_boolean tmp209;
  tmp206 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4552]] /* vrNordic_g06.leadLag1.a[1] PARAM */);
  tmp207 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4553]] /* vrNordic_g06.leadLag1.a[2] PARAM */);
  tmp208 = (tmp206 * tmp206) + (tmp207 * tmp207);
  if(!(tmp208 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g06.leadLag1.a[1] ^ 2.0 + vrNordic_g06.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp208);
    }
  }tmp209 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4553]] /* vrNordic_g06.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp208)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4554]] /* vrNordic_g06.leadLag1.a_end PARAM */) = (tmp209?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4553]] /* vrNordic_g06.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11945;
}

/*
equation index: 11946
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.X0[1] = if vrNordic_g06.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g06.leadLag1.u_start / vrNordic_g06.leadLag1.a_end else if vrNordic_g06.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g06.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g06.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11946};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4550]] /* vrNordic_g06.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[516]] /* vrNordic_g06.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4560]] /* vrNordic_g06.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4554]] /* vrNordic_g06.leadLag1.a_end PARAM */),"vrNordic_g06.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[516]] /* vrNordic_g06.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[516]] /* vrNordic_g06.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4561]] /* vrNordic_g06.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11946;
}

/*
equation index: 11947
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag1.Y0 = if vrNordic_g06.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g06.leadLag1.u_start * vrNordic_g06.leadLag1.b[2] / vrNordic_g06.leadLag1.a_end else if vrNordic_g06.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g06.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g06.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11947};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4551]] /* vrNordic_g06.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[516]] /* vrNordic_g06.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4560]] /* vrNordic_g06.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4556]] /* vrNordic_g06.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4554]] /* vrNordic_g06.leadLag1.a_end PARAM */),"vrNordic_g06.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[516]] /* vrNordic_g06.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[516]] /* vrNordic_g06.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4562]] /* vrNordic_g06.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11947;
}

/*
equation index: 11948
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.b[1] = vrNordic_g06.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11948};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4568]] /* vrNordic_g06.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4587]] /* vrNordic_g06.tLeadPss PARAM */);
  threadData->lastEquationSolved = 11948;
}

/*
equation index: 11949
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.a[1] = vrNordic_g06.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11949};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4565]] /* vrNordic_g06.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4585]] /* vrNordic_g06.tLagPss PARAM */);
  threadData->lastEquationSolved = 11949;
}

/*
equation index: 11953
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.bb[1] = vrNordic_g06.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11953};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4570]] /* vrNordic_g06.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4568]] /* vrNordic_g06.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 11953;
}

/*
equation index: 11954
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.bb[2] = vrNordic_g06.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11954};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4571]] /* vrNordic_g06.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4569]] /* vrNordic_g06.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 11954;
}

/*
equation index: 11955
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.d = vrNordic_g06.leadLag2.bb[1] / vrNordic_g06.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11955};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4572]] /* vrNordic_g06.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4570]] /* vrNordic_g06.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4565]] /* vrNordic_g06.leadLag2.a[1] PARAM */),"vrNordic_g06.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11955;
}

/*
equation index: 11956
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.a_end = if vrNordic_g06.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g06.leadLag2.a[1] ^ 2.0 + vrNordic_g06.leadLag2.a[2] ^ 2.0) then vrNordic_g06.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11956};
  modelica_real tmp210;
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_boolean tmp213;
  tmp210 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4565]] /* vrNordic_g06.leadLag2.a[1] PARAM */);
  tmp211 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4566]] /* vrNordic_g06.leadLag2.a[2] PARAM */);
  tmp212 = (tmp210 * tmp210) + (tmp211 * tmp211);
  if(!(tmp212 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g06.leadLag2.a[1] ^ 2.0 + vrNordic_g06.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp212);
    }
  }tmp213 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4566]] /* vrNordic_g06.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp212)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4567]] /* vrNordic_g06.leadLag2.a_end PARAM */) = (tmp213?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4566]] /* vrNordic_g06.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11956;
}

/*
equation index: 11957
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.X0[1] = if vrNordic_g06.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g06.leadLag2.u_start / vrNordic_g06.leadLag2.a_end else if vrNordic_g06.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g06.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g06.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11957};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4563]] /* vrNordic_g06.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[520]] /* vrNordic_g06.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4573]] /* vrNordic_g06.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4567]] /* vrNordic_g06.leadLag2.a_end PARAM */),"vrNordic_g06.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[520]] /* vrNordic_g06.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[520]] /* vrNordic_g06.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4574]] /* vrNordic_g06.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 11957;
}

/*
equation index: 11958
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag2.Y0 = if vrNordic_g06.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g06.leadLag2.u_start * vrNordic_g06.leadLag2.b[2] / vrNordic_g06.leadLag2.a_end else if vrNordic_g06.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g06.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g06.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11958};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4564]] /* vrNordic_g06.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[520]] /* vrNordic_g06.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4573]] /* vrNordic_g06.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4569]] /* vrNordic_g06.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4567]] /* vrNordic_g06.leadLag2.a_end PARAM */),"vrNordic_g06.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[520]] /* vrNordic_g06.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[520]] /* vrNordic_g06.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4575]] /* vrNordic_g06.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 11958;
}

/*
equation index: 11959
type: SIMPLE_ASSIGN
vrNordic_g06.limiter.uMin = -vrNordic_g06.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11959};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4581]] /* vrNordic_g06.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4580]] /* vrNordic_g06.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 11959;
}

/*
equation index: 11963
type: SIMPLE_ASSIGN
vrNordic_g06.const2.k = vrNordic_g06.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11963};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4528]] /* vrNordic_g06.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4518]] /* vrNordic_g06.IrLimPu PARAM */);
  threadData->lastEquationSolved = 11963;
}

/*
equation index: 11964
type: SIMPLE_ASSIGN
vrNordic_g06.kMulDU.k = vrNordic_g06.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11964};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4536]] /* vrNordic_g06.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4520]] /* vrNordic_g06.KTgr PARAM */);
  threadData->lastEquationSolved = 11964;
}

/*
equation index: 11965
type: SIMPLE_ASSIGN
vrNordic_g06.overExcitationLimitation.OelMode = vrNordic_g06.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11965};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4582]] /* vrNordic_g06.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4521]] /* vrNordic_g06.OelMode PARAM */);
  threadData->lastEquationSolved = 11965;
}

/*
equation index: 11966
type: SIMPLE_ASSIGN
vrNordic_g06.limIntegrator.outMax = vrNordic_g06.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11966};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4577]] /* vrNordic_g06.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4516]] /* vrNordic_g06.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 11966;
}

/*
equation index: 11972
type: SIMPLE_ASSIGN
vrNordic_g06.timer.outMin = vrNordic_g06.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11972};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4592]] /* vrNordic_g06.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4589]] /* vrNordic_g06.tOelMin PARAM */);
  threadData->lastEquationSolved = 11972;
}

/*
equation index: 11977
type: SIMPLE_ASSIGN
vrNordic_g06.timer.y_start = vrNordic_g06.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11977};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4593]] /* vrNordic_g06.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4589]] /* vrNordic_g06.tOelMin PARAM */);
  threadData->lastEquationSolved = 11977;
}

/*
equation index: 11979
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.b[1] = vrNordic_g06.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11979};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4542]] /* vrNordic_g06.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4588]] /* vrNordic_g06.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 11979;
}

/*
equation index: 11980
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.a[1] = vrNordic_g06.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11980};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4539]] /* vrNordic_g06.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4586]] /* vrNordic_g06.tLagTgr PARAM */);
  threadData->lastEquationSolved = 11980;
}

/*
equation index: 11984
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.bb[1] = vrNordic_g06.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11984};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4544]] /* vrNordic_g06.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4542]] /* vrNordic_g06.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 11984;
}

/*
equation index: 11985
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.bb[2] = vrNordic_g06.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11985};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4545]] /* vrNordic_g06.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4543]] /* vrNordic_g06.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 11985;
}

/*
equation index: 11986
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.d = vrNordic_g06.leadLag.bb[1] / vrNordic_g06.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11986};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4546]] /* vrNordic_g06.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4544]] /* vrNordic_g06.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4539]] /* vrNordic_g06.leadLag.a[1] PARAM */),"vrNordic_g06.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 11986;
}

/*
equation index: 11987
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.a_end = if vrNordic_g06.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g06.leadLag.a[1] ^ 2.0 + vrNordic_g06.leadLag.a[2] ^ 2.0) then vrNordic_g06.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11987};
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_real tmp216;
  modelica_boolean tmp217;
  tmp214 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4539]] /* vrNordic_g06.leadLag.a[1] PARAM */);
  tmp215 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4540]] /* vrNordic_g06.leadLag.a[2] PARAM */);
  tmp216 = (tmp214 * tmp214) + (tmp215 * tmp215);
  if(!(tmp216 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g06.leadLag.a[1] ^ 2.0 + vrNordic_g06.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp216);
    }
  }tmp217 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4540]] /* vrNordic_g06.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp216)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4541]] /* vrNordic_g06.leadLag.a_end PARAM */) = (tmp217?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4540]] /* vrNordic_g06.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 11987;
}

/*
equation index: 11991
type: SIMPLE_ASSIGN
goverNordic_g06.govKp.k = goverNordic_g06.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11991};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2449]] /* goverNordic_g06.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2435]] /* goverNordic_g06.Kp PARAM */);
  threadData->lastEquationSolved = 11991;
}

/*
equation index: 11992
type: SIMPLE_ASSIGN
goverNordic_g06.govKi.k = goverNordic_g06.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11992};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2448]] /* goverNordic_g06.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2434]] /* goverNordic_g06.Ki PARAM */);
  threadData->lastEquationSolved = 11992;
}

/*
equation index: 11996
type: SIMPLE_ASSIGN
goverNordic_g06.dOmegaPlusDroop.k2 = goverNordic_g06.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11996};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2442]] /* goverNordic_g06.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2433]] /* goverNordic_g06.KSigma PARAM */);
  threadData->lastEquationSolved = 11996;
}

/*
equation index: 11999
type: SIMPLE_ASSIGN
goverNordic_g06.perUnitP.k = 100.0 / goverNordic_g06.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_11999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11999};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2466]] /* goverNordic_g06.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2436]] /* goverNordic_g06.PNom PARAM */),"goverNordic_g06.PNom",equationIndexes);
  threadData->lastEquationSolved = 11999;
}

/*
equation index: 12000
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.DuMin = -goverNordic_g06.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12000};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2454]] /* goverNordic_g06.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2453]] /* goverNordic_g06.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12000;
}

/*
equation index: 12001
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limiter.uMax = goverNordic_g06.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12001};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2453]] /* goverNordic_g06.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12001;
}

/*
equation index: 12002
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limiter.uMin = goverNordic_g06.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12002};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* goverNordic_g06.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2454]] /* goverNordic_g06.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12002;
}

/*
equation index: 12006
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g06.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12006};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2458]] /* goverNordic_g06.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2465]] /* goverNordic_g06.limRateLimFirstOrder.tS PARAM */),"goverNordic_g06.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12006;
}

/*
equation index: 12007
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g06.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12007};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2460]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2456]] /* goverNordic_g06.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12007;
}

/*
equation index: 12008
type: SIMPLE_ASSIGN
goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g06.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12008};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2461]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2457]] /* goverNordic_g06.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12008;
}

/*
equation index: 12014
type: SIMPLE_ASSIGN
vrNordic_g07.derivative.k = vrNordic_g07.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12014};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4609]] /* vrNordic_g07.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4598]] /* vrNordic_g07.KPss PARAM */);
  threadData->lastEquationSolved = 12014;
}

/*
equation index: 12015
type: SIMPLE_ASSIGN
vrNordic_g07.derivative.T = vrNordic_g07.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12015};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4608]] /* vrNordic_g07.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4663]] /* vrNordic_g07.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12015;
}

/*
equation index: 12017
type: SIMPLE_ASSIGN
vrNordic_g07.derivative.zeroGain = abs(vrNordic_g07.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12017};
  modelica_boolean tmp218;
  tmp218 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4609]] /* vrNordic_g07.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[927]] /* vrNordic_g07.derivative.zeroGain PARAM */) = tmp218;
  threadData->lastEquationSolved = 12017;
}

/*
equation index: 12018
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.b[1] = vrNordic_g07.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12018};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4634]] /* vrNordic_g07.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4666]] /* vrNordic_g07.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12018;
}

/*
equation index: 12019
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.a[1] = vrNordic_g07.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12019};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4631]] /* vrNordic_g07.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4664]] /* vrNordic_g07.tLagPss PARAM */);
  threadData->lastEquationSolved = 12019;
}

/*
equation index: 12023
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.bb[1] = vrNordic_g07.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12023};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4636]] /* vrNordic_g07.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4634]] /* vrNordic_g07.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12023;
}

/*
equation index: 12024
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.bb[2] = vrNordic_g07.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12024};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4637]] /* vrNordic_g07.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4635]] /* vrNordic_g07.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12024;
}

/*
equation index: 12025
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.d = vrNordic_g07.leadLag1.bb[1] / vrNordic_g07.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12025};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4638]] /* vrNordic_g07.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4636]] /* vrNordic_g07.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4631]] /* vrNordic_g07.leadLag1.a[1] PARAM */),"vrNordic_g07.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12025;
}

/*
equation index: 12026
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.a_end = if vrNordic_g07.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g07.leadLag1.a[1] ^ 2.0 + vrNordic_g07.leadLag1.a[2] ^ 2.0) then vrNordic_g07.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12026};
  modelica_real tmp219;
  modelica_real tmp220;
  modelica_real tmp221;
  modelica_boolean tmp222;
  tmp219 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4631]] /* vrNordic_g07.leadLag1.a[1] PARAM */);
  tmp220 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4632]] /* vrNordic_g07.leadLag1.a[2] PARAM */);
  tmp221 = (tmp219 * tmp219) + (tmp220 * tmp220);
  if(!(tmp221 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g07.leadLag1.a[1] ^ 2.0 + vrNordic_g07.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp221);
    }
  }tmp222 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4632]] /* vrNordic_g07.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp221)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4633]] /* vrNordic_g07.leadLag1.a_end PARAM */) = (tmp222?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4632]] /* vrNordic_g07.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12026;
}

/*
equation index: 12027
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.X0[1] = if vrNordic_g07.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g07.leadLag1.u_start / vrNordic_g07.leadLag1.a_end else if vrNordic_g07.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g07.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g07.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12027};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4629]] /* vrNordic_g07.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[532]] /* vrNordic_g07.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4639]] /* vrNordic_g07.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4633]] /* vrNordic_g07.leadLag1.a_end PARAM */),"vrNordic_g07.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[532]] /* vrNordic_g07.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[532]] /* vrNordic_g07.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4640]] /* vrNordic_g07.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12027;
}

/*
equation index: 12028
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag1.Y0 = if vrNordic_g07.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g07.leadLag1.u_start * vrNordic_g07.leadLag1.b[2] / vrNordic_g07.leadLag1.a_end else if vrNordic_g07.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g07.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g07.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12028};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4630]] /* vrNordic_g07.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[532]] /* vrNordic_g07.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4639]] /* vrNordic_g07.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4635]] /* vrNordic_g07.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4633]] /* vrNordic_g07.leadLag1.a_end PARAM */),"vrNordic_g07.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[532]] /* vrNordic_g07.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[532]] /* vrNordic_g07.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4641]] /* vrNordic_g07.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12028;
}

/*
equation index: 12029
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.b[1] = vrNordic_g07.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12029};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4647]] /* vrNordic_g07.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4666]] /* vrNordic_g07.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12029;
}

/*
equation index: 12030
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.a[1] = vrNordic_g07.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12030};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4644]] /* vrNordic_g07.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4664]] /* vrNordic_g07.tLagPss PARAM */);
  threadData->lastEquationSolved = 12030;
}

/*
equation index: 12034
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.bb[1] = vrNordic_g07.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12034};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4649]] /* vrNordic_g07.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4647]] /* vrNordic_g07.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12034;
}

/*
equation index: 12035
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.bb[2] = vrNordic_g07.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12035};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4650]] /* vrNordic_g07.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4648]] /* vrNordic_g07.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12035;
}

/*
equation index: 12036
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.d = vrNordic_g07.leadLag2.bb[1] / vrNordic_g07.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12036};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4651]] /* vrNordic_g07.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4649]] /* vrNordic_g07.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4644]] /* vrNordic_g07.leadLag2.a[1] PARAM */),"vrNordic_g07.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12036;
}

/*
equation index: 12037
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.a_end = if vrNordic_g07.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g07.leadLag2.a[1] ^ 2.0 + vrNordic_g07.leadLag2.a[2] ^ 2.0) then vrNordic_g07.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12037};
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_real tmp225;
  modelica_boolean tmp226;
  tmp223 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4644]] /* vrNordic_g07.leadLag2.a[1] PARAM */);
  tmp224 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4645]] /* vrNordic_g07.leadLag2.a[2] PARAM */);
  tmp225 = (tmp223 * tmp223) + (tmp224 * tmp224);
  if(!(tmp225 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g07.leadLag2.a[1] ^ 2.0 + vrNordic_g07.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp225);
    }
  }tmp226 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4645]] /* vrNordic_g07.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp225)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4646]] /* vrNordic_g07.leadLag2.a_end PARAM */) = (tmp226?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4645]] /* vrNordic_g07.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12037;
}

/*
equation index: 12038
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.X0[1] = if vrNordic_g07.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g07.leadLag2.u_start / vrNordic_g07.leadLag2.a_end else if vrNordic_g07.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g07.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g07.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4642]] /* vrNordic_g07.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[536]] /* vrNordic_g07.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4652]] /* vrNordic_g07.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4646]] /* vrNordic_g07.leadLag2.a_end PARAM */),"vrNordic_g07.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[536]] /* vrNordic_g07.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[536]] /* vrNordic_g07.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4653]] /* vrNordic_g07.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12038;
}

/*
equation index: 12039
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag2.Y0 = if vrNordic_g07.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g07.leadLag2.u_start * vrNordic_g07.leadLag2.b[2] / vrNordic_g07.leadLag2.a_end else if vrNordic_g07.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g07.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g07.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4643]] /* vrNordic_g07.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[536]] /* vrNordic_g07.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4652]] /* vrNordic_g07.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4648]] /* vrNordic_g07.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4646]] /* vrNordic_g07.leadLag2.a_end PARAM */),"vrNordic_g07.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[536]] /* vrNordic_g07.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[536]] /* vrNordic_g07.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4654]] /* vrNordic_g07.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12039;
}

/*
equation index: 12040
type: SIMPLE_ASSIGN
vrNordic_g07.limiter.uMin = -vrNordic_g07.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12040};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4660]] /* vrNordic_g07.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4659]] /* vrNordic_g07.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12040;
}

/*
equation index: 12044
type: SIMPLE_ASSIGN
vrNordic_g07.const2.k = vrNordic_g07.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12044};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4607]] /* vrNordic_g07.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4597]] /* vrNordic_g07.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12044;
}

/*
equation index: 12045
type: SIMPLE_ASSIGN
vrNordic_g07.kMulDU.k = vrNordic_g07.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12045};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4615]] /* vrNordic_g07.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4599]] /* vrNordic_g07.KTgr PARAM */);
  threadData->lastEquationSolved = 12045;
}

/*
equation index: 12046
type: SIMPLE_ASSIGN
vrNordic_g07.overExcitationLimitation.OelMode = vrNordic_g07.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12046};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4661]] /* vrNordic_g07.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4600]] /* vrNordic_g07.OelMode PARAM */);
  threadData->lastEquationSolved = 12046;
}

/*
equation index: 12047
type: SIMPLE_ASSIGN
vrNordic_g07.limIntegrator.outMax = vrNordic_g07.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12047};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4656]] /* vrNordic_g07.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4595]] /* vrNordic_g07.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12047;
}

/*
equation index: 12053
type: SIMPLE_ASSIGN
vrNordic_g07.timer.outMin = vrNordic_g07.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12053};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4671]] /* vrNordic_g07.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4668]] /* vrNordic_g07.tOelMin PARAM */);
  threadData->lastEquationSolved = 12053;
}

/*
equation index: 12058
type: SIMPLE_ASSIGN
vrNordic_g07.timer.y_start = vrNordic_g07.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12058};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4672]] /* vrNordic_g07.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4668]] /* vrNordic_g07.tOelMin PARAM */);
  threadData->lastEquationSolved = 12058;
}

/*
equation index: 12060
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.b[1] = vrNordic_g07.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12060};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4621]] /* vrNordic_g07.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4667]] /* vrNordic_g07.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12060;
}

/*
equation index: 12061
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.a[1] = vrNordic_g07.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12061};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4618]] /* vrNordic_g07.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4665]] /* vrNordic_g07.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12061;
}

/*
equation index: 12065
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.bb[1] = vrNordic_g07.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12065};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4623]] /* vrNordic_g07.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4621]] /* vrNordic_g07.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12065;
}

/*
equation index: 12066
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.bb[2] = vrNordic_g07.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12066};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4624]] /* vrNordic_g07.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4622]] /* vrNordic_g07.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12066;
}

/*
equation index: 12067
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.d = vrNordic_g07.leadLag.bb[1] / vrNordic_g07.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12067};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4625]] /* vrNordic_g07.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4623]] /* vrNordic_g07.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4618]] /* vrNordic_g07.leadLag.a[1] PARAM */),"vrNordic_g07.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12067;
}

/*
equation index: 12068
type: SIMPLE_ASSIGN
vrNordic_g07.leadLag.a_end = if vrNordic_g07.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g07.leadLag.a[1] ^ 2.0 + vrNordic_g07.leadLag.a[2] ^ 2.0) then vrNordic_g07.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12068};
  modelica_real tmp227;
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_boolean tmp230;
  tmp227 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4618]] /* vrNordic_g07.leadLag.a[1] PARAM */);
  tmp228 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4619]] /* vrNordic_g07.leadLag.a[2] PARAM */);
  tmp229 = (tmp227 * tmp227) + (tmp228 * tmp228);
  if(!(tmp229 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g07.leadLag.a[1] ^ 2.0 + vrNordic_g07.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp229);
    }
  }tmp230 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4619]] /* vrNordic_g07.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp229)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4620]] /* vrNordic_g07.leadLag.a_end PARAM */) = (tmp230?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4619]] /* vrNordic_g07.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12068;
}

/*
equation index: 12072
type: SIMPLE_ASSIGN
goverNordic_g07.govKp.k = goverNordic_g07.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2485]] /* goverNordic_g07.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2471]] /* goverNordic_g07.Kp PARAM */);
  threadData->lastEquationSolved = 12072;
}

/*
equation index: 12073
type: SIMPLE_ASSIGN
goverNordic_g07.govKi.k = goverNordic_g07.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12073};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2484]] /* goverNordic_g07.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2470]] /* goverNordic_g07.Ki PARAM */);
  threadData->lastEquationSolved = 12073;
}

/*
equation index: 12077
type: SIMPLE_ASSIGN
goverNordic_g07.dOmegaPlusDroop.k2 = goverNordic_g07.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2478]] /* goverNordic_g07.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2469]] /* goverNordic_g07.KSigma PARAM */);
  threadData->lastEquationSolved = 12077;
}

/*
equation index: 12080
type: SIMPLE_ASSIGN
goverNordic_g07.perUnitP.k = 100.0 / goverNordic_g07.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2502]] /* goverNordic_g07.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2472]] /* goverNordic_g07.PNom PARAM */),"goverNordic_g07.PNom",equationIndexes);
  threadData->lastEquationSolved = 12080;
}

/*
equation index: 12081
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.DuMin = -goverNordic_g07.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2490]] /* goverNordic_g07.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2489]] /* goverNordic_g07.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12081;
}

/*
equation index: 12082
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limiter.uMax = goverNordic_g07.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2489]] /* goverNordic_g07.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12082;
}

/*
equation index: 12083
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limiter.uMin = goverNordic_g07.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* goverNordic_g07.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2490]] /* goverNordic_g07.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12083;
}

/*
equation index: 12087
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g07.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2494]] /* goverNordic_g07.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2501]] /* goverNordic_g07.limRateLimFirstOrder.tS PARAM */),"goverNordic_g07.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12087;
}

/*
equation index: 12088
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g07.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12088};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2492]] /* goverNordic_g07.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12088;
}

/*
equation index: 12089
type: SIMPLE_ASSIGN
goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g07.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12089};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2497]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2493]] /* goverNordic_g07.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12089;
}

/*
equation index: 12095
type: SIMPLE_ASSIGN
vrNordic_g08.derivative.k = vrNordic_g08.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4688]] /* vrNordic_g08.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4677]] /* vrNordic_g08.KPss PARAM */);
  threadData->lastEquationSolved = 12095;
}

/*
equation index: 12096
type: SIMPLE_ASSIGN
vrNordic_g08.derivative.T = vrNordic_g08.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4687]] /* vrNordic_g08.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4742]] /* vrNordic_g08.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12096;
}

/*
equation index: 12098
type: SIMPLE_ASSIGN
vrNordic_g08.derivative.zeroGain = abs(vrNordic_g08.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12098};
  modelica_boolean tmp231;
  tmp231 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4688]] /* vrNordic_g08.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[938]] /* vrNordic_g08.derivative.zeroGain PARAM */) = tmp231;
  threadData->lastEquationSolved = 12098;
}

/*
equation index: 12099
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.b[1] = vrNordic_g08.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4713]] /* vrNordic_g08.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4745]] /* vrNordic_g08.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12099;
}

/*
equation index: 12100
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.a[1] = vrNordic_g08.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4710]] /* vrNordic_g08.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4743]] /* vrNordic_g08.tLagPss PARAM */);
  threadData->lastEquationSolved = 12100;
}

/*
equation index: 12104
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.bb[1] = vrNordic_g08.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12104};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4715]] /* vrNordic_g08.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4713]] /* vrNordic_g08.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12104;
}

/*
equation index: 12105
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.bb[2] = vrNordic_g08.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4716]] /* vrNordic_g08.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4714]] /* vrNordic_g08.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12105;
}

/*
equation index: 12106
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.d = vrNordic_g08.leadLag1.bb[1] / vrNordic_g08.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4717]] /* vrNordic_g08.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4715]] /* vrNordic_g08.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4710]] /* vrNordic_g08.leadLag1.a[1] PARAM */),"vrNordic_g08.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12106;
}

/*
equation index: 12107
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.a_end = if vrNordic_g08.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g08.leadLag1.a[1] ^ 2.0 + vrNordic_g08.leadLag1.a[2] ^ 2.0) then vrNordic_g08.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12107};
  modelica_real tmp232;
  modelica_real tmp233;
  modelica_real tmp234;
  modelica_boolean tmp235;
  tmp232 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4710]] /* vrNordic_g08.leadLag1.a[1] PARAM */);
  tmp233 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4711]] /* vrNordic_g08.leadLag1.a[2] PARAM */);
  tmp234 = (tmp232 * tmp232) + (tmp233 * tmp233);
  if(!(tmp234 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g08.leadLag1.a[1] ^ 2.0 + vrNordic_g08.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp234);
    }
  }tmp235 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4711]] /* vrNordic_g08.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp234)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4712]] /* vrNordic_g08.leadLag1.a_end PARAM */) = (tmp235?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4711]] /* vrNordic_g08.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12107;
}

/*
equation index: 12108
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.X0[1] = if vrNordic_g08.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g08.leadLag1.u_start / vrNordic_g08.leadLag1.a_end else if vrNordic_g08.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g08.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g08.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4708]] /* vrNordic_g08.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[548]] /* vrNordic_g08.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4718]] /* vrNordic_g08.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4712]] /* vrNordic_g08.leadLag1.a_end PARAM */),"vrNordic_g08.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[548]] /* vrNordic_g08.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[548]] /* vrNordic_g08.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4719]] /* vrNordic_g08.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12108;
}

/*
equation index: 12109
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag1.Y0 = if vrNordic_g08.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g08.leadLag1.u_start * vrNordic_g08.leadLag1.b[2] / vrNordic_g08.leadLag1.a_end else if vrNordic_g08.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g08.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g08.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4709]] /* vrNordic_g08.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[548]] /* vrNordic_g08.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4718]] /* vrNordic_g08.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4714]] /* vrNordic_g08.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4712]] /* vrNordic_g08.leadLag1.a_end PARAM */),"vrNordic_g08.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[548]] /* vrNordic_g08.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[548]] /* vrNordic_g08.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4720]] /* vrNordic_g08.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12109;
}

/*
equation index: 12110
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.b[1] = vrNordic_g08.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12110};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4726]] /* vrNordic_g08.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4745]] /* vrNordic_g08.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12110;
}

/*
equation index: 12111
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.a[1] = vrNordic_g08.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4723]] /* vrNordic_g08.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4743]] /* vrNordic_g08.tLagPss PARAM */);
  threadData->lastEquationSolved = 12111;
}

/*
equation index: 12115
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.bb[1] = vrNordic_g08.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4728]] /* vrNordic_g08.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4726]] /* vrNordic_g08.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12115;
}

/*
equation index: 12116
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.bb[2] = vrNordic_g08.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4729]] /* vrNordic_g08.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4727]] /* vrNordic_g08.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12116;
}

/*
equation index: 12117
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.d = vrNordic_g08.leadLag2.bb[1] / vrNordic_g08.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4730]] /* vrNordic_g08.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4728]] /* vrNordic_g08.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4723]] /* vrNordic_g08.leadLag2.a[1] PARAM */),"vrNordic_g08.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12117;
}

/*
equation index: 12118
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.a_end = if vrNordic_g08.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g08.leadLag2.a[1] ^ 2.0 + vrNordic_g08.leadLag2.a[2] ^ 2.0) then vrNordic_g08.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12118};
  modelica_real tmp236;
  modelica_real tmp237;
  modelica_real tmp238;
  modelica_boolean tmp239;
  tmp236 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4723]] /* vrNordic_g08.leadLag2.a[1] PARAM */);
  tmp237 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4724]] /* vrNordic_g08.leadLag2.a[2] PARAM */);
  tmp238 = (tmp236 * tmp236) + (tmp237 * tmp237);
  if(!(tmp238 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g08.leadLag2.a[1] ^ 2.0 + vrNordic_g08.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp238);
    }
  }tmp239 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4724]] /* vrNordic_g08.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp238)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4725]] /* vrNordic_g08.leadLag2.a_end PARAM */) = (tmp239?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4724]] /* vrNordic_g08.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12118;
}

/*
equation index: 12119
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.X0[1] = if vrNordic_g08.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g08.leadLag2.u_start / vrNordic_g08.leadLag2.a_end else if vrNordic_g08.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g08.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g08.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4721]] /* vrNordic_g08.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[552]] /* vrNordic_g08.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4731]] /* vrNordic_g08.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4725]] /* vrNordic_g08.leadLag2.a_end PARAM */),"vrNordic_g08.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[552]] /* vrNordic_g08.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[552]] /* vrNordic_g08.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4732]] /* vrNordic_g08.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12119;
}

/*
equation index: 12120
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag2.Y0 = if vrNordic_g08.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g08.leadLag2.u_start * vrNordic_g08.leadLag2.b[2] / vrNordic_g08.leadLag2.a_end else if vrNordic_g08.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g08.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g08.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4722]] /* vrNordic_g08.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[552]] /* vrNordic_g08.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4731]] /* vrNordic_g08.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4727]] /* vrNordic_g08.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4725]] /* vrNordic_g08.leadLag2.a_end PARAM */),"vrNordic_g08.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[552]] /* vrNordic_g08.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[552]] /* vrNordic_g08.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4733]] /* vrNordic_g08.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12120;
}

/*
equation index: 12121
type: SIMPLE_ASSIGN
vrNordic_g08.limiter.uMin = -vrNordic_g08.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4739]] /* vrNordic_g08.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4738]] /* vrNordic_g08.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12121;
}

/*
equation index: 12125
type: SIMPLE_ASSIGN
vrNordic_g08.const2.k = vrNordic_g08.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4686]] /* vrNordic_g08.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4676]] /* vrNordic_g08.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12125;
}

/*
equation index: 12126
type: SIMPLE_ASSIGN
vrNordic_g08.kMulDU.k = vrNordic_g08.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4694]] /* vrNordic_g08.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4678]] /* vrNordic_g08.KTgr PARAM */);
  threadData->lastEquationSolved = 12126;
}

/*
equation index: 12127
type: SIMPLE_ASSIGN
vrNordic_g08.overExcitationLimitation.OelMode = vrNordic_g08.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4740]] /* vrNordic_g08.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4679]] /* vrNordic_g08.OelMode PARAM */);
  threadData->lastEquationSolved = 12127;
}

/*
equation index: 12128
type: SIMPLE_ASSIGN
vrNordic_g08.limIntegrator.outMax = vrNordic_g08.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4735]] /* vrNordic_g08.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4674]] /* vrNordic_g08.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12128;
}

/*
equation index: 12134
type: SIMPLE_ASSIGN
vrNordic_g08.timer.outMin = vrNordic_g08.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4750]] /* vrNordic_g08.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4747]] /* vrNordic_g08.tOelMin PARAM */);
  threadData->lastEquationSolved = 12134;
}

/*
equation index: 12139
type: SIMPLE_ASSIGN
vrNordic_g08.timer.y_start = vrNordic_g08.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4751]] /* vrNordic_g08.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4747]] /* vrNordic_g08.tOelMin PARAM */);
  threadData->lastEquationSolved = 12139;
}

/*
equation index: 12141
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.b[1] = vrNordic_g08.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4700]] /* vrNordic_g08.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4746]] /* vrNordic_g08.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12141;
}

/*
equation index: 12142
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.a[1] = vrNordic_g08.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4697]] /* vrNordic_g08.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4744]] /* vrNordic_g08.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12142;
}

/*
equation index: 12146
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.bb[1] = vrNordic_g08.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12146};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4702]] /* vrNordic_g08.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4700]] /* vrNordic_g08.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12146;
}

/*
equation index: 12147
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.bb[2] = vrNordic_g08.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12147};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4703]] /* vrNordic_g08.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4701]] /* vrNordic_g08.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12147;
}

/*
equation index: 12148
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.d = vrNordic_g08.leadLag.bb[1] / vrNordic_g08.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4704]] /* vrNordic_g08.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4702]] /* vrNordic_g08.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4697]] /* vrNordic_g08.leadLag.a[1] PARAM */),"vrNordic_g08.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12148;
}

/*
equation index: 12149
type: SIMPLE_ASSIGN
vrNordic_g08.leadLag.a_end = if vrNordic_g08.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g08.leadLag.a[1] ^ 2.0 + vrNordic_g08.leadLag.a[2] ^ 2.0) then vrNordic_g08.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12149};
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_boolean tmp243;
  tmp240 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4697]] /* vrNordic_g08.leadLag.a[1] PARAM */);
  tmp241 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4698]] /* vrNordic_g08.leadLag.a[2] PARAM */);
  tmp242 = (tmp240 * tmp240) + (tmp241 * tmp241);
  if(!(tmp242 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g08.leadLag.a[1] ^ 2.0 + vrNordic_g08.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp242);
    }
  }tmp243 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4698]] /* vrNordic_g08.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp242)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4699]] /* vrNordic_g08.leadLag.a_end PARAM */) = (tmp243?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4698]] /* vrNordic_g08.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12149;
}

/*
equation index: 12153
type: SIMPLE_ASSIGN
goverNordic_g08.govKp.k = goverNordic_g08.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* goverNordic_g08.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2507]] /* goverNordic_g08.Kp PARAM */);
  threadData->lastEquationSolved = 12153;
}

/*
equation index: 12154
type: SIMPLE_ASSIGN
goverNordic_g08.govKi.k = goverNordic_g08.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12154};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2520]] /* goverNordic_g08.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2506]] /* goverNordic_g08.Ki PARAM */);
  threadData->lastEquationSolved = 12154;
}

/*
equation index: 12158
type: SIMPLE_ASSIGN
goverNordic_g08.dOmegaPlusDroop.k2 = goverNordic_g08.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12158};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* goverNordic_g08.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2505]] /* goverNordic_g08.KSigma PARAM */);
  threadData->lastEquationSolved = 12158;
}

/*
equation index: 12161
type: SIMPLE_ASSIGN
goverNordic_g08.perUnitP.k = 100.0 / goverNordic_g08.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2538]] /* goverNordic_g08.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2508]] /* goverNordic_g08.PNom PARAM */),"goverNordic_g08.PNom",equationIndexes);
  threadData->lastEquationSolved = 12161;
}

/*
equation index: 12162
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.DuMin = -goverNordic_g08.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12162};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2526]] /* goverNordic_g08.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2525]] /* goverNordic_g08.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12162;
}

/*
equation index: 12163
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limiter.uMax = goverNordic_g08.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2525]] /* goverNordic_g08.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12163;
}

/*
equation index: 12164
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limiter.uMin = goverNordic_g08.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12164};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2536]] /* goverNordic_g08.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2526]] /* goverNordic_g08.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12164;
}

/*
equation index: 12168
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g08.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2530]] /* goverNordic_g08.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2537]] /* goverNordic_g08.limRateLimFirstOrder.tS PARAM */),"goverNordic_g08.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12168;
}

/*
equation index: 12169
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g08.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2528]] /* goverNordic_g08.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12169;
}

/*
equation index: 12170
type: SIMPLE_ASSIGN
goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g08.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2529]] /* goverNordic_g08.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12170;
}

/*
equation index: 12176
type: SIMPLE_ASSIGN
vrNordic_g09.derivative.k = vrNordic_g09.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12176};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4767]] /* vrNordic_g09.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4756]] /* vrNordic_g09.KPss PARAM */);
  threadData->lastEquationSolved = 12176;
}

/*
equation index: 12177
type: SIMPLE_ASSIGN
vrNordic_g09.derivative.T = vrNordic_g09.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12177};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4766]] /* vrNordic_g09.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4821]] /* vrNordic_g09.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12177;
}

/*
equation index: 12179
type: SIMPLE_ASSIGN
vrNordic_g09.derivative.zeroGain = abs(vrNordic_g09.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12179};
  modelica_boolean tmp244;
  tmp244 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4767]] /* vrNordic_g09.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[949]] /* vrNordic_g09.derivative.zeroGain PARAM */) = tmp244;
  threadData->lastEquationSolved = 12179;
}

/*
equation index: 12180
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.b[1] = vrNordic_g09.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12180};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4792]] /* vrNordic_g09.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4824]] /* vrNordic_g09.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12180;
}

/*
equation index: 12181
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.a[1] = vrNordic_g09.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4789]] /* vrNordic_g09.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4822]] /* vrNordic_g09.tLagPss PARAM */);
  threadData->lastEquationSolved = 12181;
}

/*
equation index: 12185
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.bb[1] = vrNordic_g09.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4794]] /* vrNordic_g09.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4792]] /* vrNordic_g09.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12185;
}

/*
equation index: 12186
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.bb[2] = vrNordic_g09.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4795]] /* vrNordic_g09.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4793]] /* vrNordic_g09.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12186;
}

/*
equation index: 12187
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.d = vrNordic_g09.leadLag1.bb[1] / vrNordic_g09.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12187};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4796]] /* vrNordic_g09.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4794]] /* vrNordic_g09.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4789]] /* vrNordic_g09.leadLag1.a[1] PARAM */),"vrNordic_g09.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12187;
}

/*
equation index: 12188
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.a_end = if vrNordic_g09.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g09.leadLag1.a[1] ^ 2.0 + vrNordic_g09.leadLag1.a[2] ^ 2.0) then vrNordic_g09.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12188};
  modelica_real tmp245;
  modelica_real tmp246;
  modelica_real tmp247;
  modelica_boolean tmp248;
  tmp245 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4789]] /* vrNordic_g09.leadLag1.a[1] PARAM */);
  tmp246 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4790]] /* vrNordic_g09.leadLag1.a[2] PARAM */);
  tmp247 = (tmp245 * tmp245) + (tmp246 * tmp246);
  if(!(tmp247 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g09.leadLag1.a[1] ^ 2.0 + vrNordic_g09.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp247);
    }
  }tmp248 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4790]] /* vrNordic_g09.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp247)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4791]] /* vrNordic_g09.leadLag1.a_end PARAM */) = (tmp248?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4790]] /* vrNordic_g09.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12188;
}

/*
equation index: 12189
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.X0[1] = if vrNordic_g09.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g09.leadLag1.u_start / vrNordic_g09.leadLag1.a_end else if vrNordic_g09.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g09.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g09.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4787]] /* vrNordic_g09.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[564]] /* vrNordic_g09.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4797]] /* vrNordic_g09.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4791]] /* vrNordic_g09.leadLag1.a_end PARAM */),"vrNordic_g09.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[564]] /* vrNordic_g09.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[564]] /* vrNordic_g09.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4798]] /* vrNordic_g09.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12189;
}

/*
equation index: 12190
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag1.Y0 = if vrNordic_g09.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g09.leadLag1.u_start * vrNordic_g09.leadLag1.b[2] / vrNordic_g09.leadLag1.a_end else if vrNordic_g09.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g09.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g09.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12190};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4788]] /* vrNordic_g09.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[564]] /* vrNordic_g09.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4797]] /* vrNordic_g09.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4793]] /* vrNordic_g09.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4791]] /* vrNordic_g09.leadLag1.a_end PARAM */),"vrNordic_g09.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[564]] /* vrNordic_g09.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[564]] /* vrNordic_g09.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4799]] /* vrNordic_g09.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12190;
}

/*
equation index: 12191
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.b[1] = vrNordic_g09.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12191};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4805]] /* vrNordic_g09.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4824]] /* vrNordic_g09.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12191;
}

/*
equation index: 12192
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.a[1] = vrNordic_g09.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12192};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4802]] /* vrNordic_g09.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4822]] /* vrNordic_g09.tLagPss PARAM */);
  threadData->lastEquationSolved = 12192;
}

/*
equation index: 12196
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.bb[1] = vrNordic_g09.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12196};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4807]] /* vrNordic_g09.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4805]] /* vrNordic_g09.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12196;
}

/*
equation index: 12197
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.bb[2] = vrNordic_g09.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4808]] /* vrNordic_g09.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4806]] /* vrNordic_g09.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12197;
}

/*
equation index: 12198
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.d = vrNordic_g09.leadLag2.bb[1] / vrNordic_g09.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12198};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4809]] /* vrNordic_g09.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4807]] /* vrNordic_g09.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4802]] /* vrNordic_g09.leadLag2.a[1] PARAM */),"vrNordic_g09.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12198;
}

/*
equation index: 12199
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.a_end = if vrNordic_g09.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g09.leadLag2.a[1] ^ 2.0 + vrNordic_g09.leadLag2.a[2] ^ 2.0) then vrNordic_g09.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12199};
  modelica_real tmp249;
  modelica_real tmp250;
  modelica_real tmp251;
  modelica_boolean tmp252;
  tmp249 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4802]] /* vrNordic_g09.leadLag2.a[1] PARAM */);
  tmp250 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4803]] /* vrNordic_g09.leadLag2.a[2] PARAM */);
  tmp251 = (tmp249 * tmp249) + (tmp250 * tmp250);
  if(!(tmp251 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g09.leadLag2.a[1] ^ 2.0 + vrNordic_g09.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp251);
    }
  }tmp252 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4803]] /* vrNordic_g09.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp251)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4804]] /* vrNordic_g09.leadLag2.a_end PARAM */) = (tmp252?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4803]] /* vrNordic_g09.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12199;
}

/*
equation index: 12200
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.X0[1] = if vrNordic_g09.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g09.leadLag2.u_start / vrNordic_g09.leadLag2.a_end else if vrNordic_g09.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g09.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g09.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12200};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4800]] /* vrNordic_g09.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[568]] /* vrNordic_g09.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4810]] /* vrNordic_g09.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4804]] /* vrNordic_g09.leadLag2.a_end PARAM */),"vrNordic_g09.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[568]] /* vrNordic_g09.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[568]] /* vrNordic_g09.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4811]] /* vrNordic_g09.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12200;
}

/*
equation index: 12201
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag2.Y0 = if vrNordic_g09.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g09.leadLag2.u_start * vrNordic_g09.leadLag2.b[2] / vrNordic_g09.leadLag2.a_end else if vrNordic_g09.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g09.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g09.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4801]] /* vrNordic_g09.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[568]] /* vrNordic_g09.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4810]] /* vrNordic_g09.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4806]] /* vrNordic_g09.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4804]] /* vrNordic_g09.leadLag2.a_end PARAM */),"vrNordic_g09.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[568]] /* vrNordic_g09.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[568]] /* vrNordic_g09.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4812]] /* vrNordic_g09.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12201;
}

/*
equation index: 12202
type: SIMPLE_ASSIGN
vrNordic_g09.limiter.uMin = -vrNordic_g09.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4818]] /* vrNordic_g09.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4817]] /* vrNordic_g09.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12202;
}

/*
equation index: 12206
type: SIMPLE_ASSIGN
vrNordic_g09.const2.k = vrNordic_g09.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12206};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4765]] /* vrNordic_g09.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4755]] /* vrNordic_g09.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12206;
}

/*
equation index: 12207
type: SIMPLE_ASSIGN
vrNordic_g09.kMulDU.k = vrNordic_g09.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12207};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4773]] /* vrNordic_g09.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4757]] /* vrNordic_g09.KTgr PARAM */);
  threadData->lastEquationSolved = 12207;
}

/*
equation index: 12208
type: SIMPLE_ASSIGN
vrNordic_g09.overExcitationLimitation.OelMode = vrNordic_g09.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12208};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4819]] /* vrNordic_g09.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4758]] /* vrNordic_g09.OelMode PARAM */);
  threadData->lastEquationSolved = 12208;
}

/*
equation index: 12209
type: SIMPLE_ASSIGN
vrNordic_g09.limIntegrator.outMax = vrNordic_g09.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12209};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4814]] /* vrNordic_g09.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4753]] /* vrNordic_g09.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12209;
}

/*
equation index: 12215
type: SIMPLE_ASSIGN
vrNordic_g09.timer.outMin = vrNordic_g09.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4829]] /* vrNordic_g09.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4826]] /* vrNordic_g09.tOelMin PARAM */);
  threadData->lastEquationSolved = 12215;
}

/*
equation index: 12220
type: SIMPLE_ASSIGN
vrNordic_g09.timer.y_start = vrNordic_g09.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12220};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4830]] /* vrNordic_g09.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4826]] /* vrNordic_g09.tOelMin PARAM */);
  threadData->lastEquationSolved = 12220;
}

/*
equation index: 12222
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.b[1] = vrNordic_g09.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4779]] /* vrNordic_g09.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4825]] /* vrNordic_g09.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12222;
}

/*
equation index: 12223
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.a[1] = vrNordic_g09.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4776]] /* vrNordic_g09.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4823]] /* vrNordic_g09.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12223;
}

/*
equation index: 12227
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.bb[1] = vrNordic_g09.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4781]] /* vrNordic_g09.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4779]] /* vrNordic_g09.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12227;
}

/*
equation index: 12228
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.bb[2] = vrNordic_g09.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12228};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4782]] /* vrNordic_g09.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4780]] /* vrNordic_g09.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12228;
}

/*
equation index: 12229
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.d = vrNordic_g09.leadLag.bb[1] / vrNordic_g09.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12229};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4783]] /* vrNordic_g09.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4781]] /* vrNordic_g09.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4776]] /* vrNordic_g09.leadLag.a[1] PARAM */),"vrNordic_g09.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12229;
}

/*
equation index: 12230
type: SIMPLE_ASSIGN
vrNordic_g09.leadLag.a_end = if vrNordic_g09.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g09.leadLag.a[1] ^ 2.0 + vrNordic_g09.leadLag.a[2] ^ 2.0) then vrNordic_g09.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12230};
  modelica_real tmp253;
  modelica_real tmp254;
  modelica_real tmp255;
  modelica_boolean tmp256;
  tmp253 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4776]] /* vrNordic_g09.leadLag.a[1] PARAM */);
  tmp254 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4777]] /* vrNordic_g09.leadLag.a[2] PARAM */);
  tmp255 = (tmp253 * tmp253) + (tmp254 * tmp254);
  if(!(tmp255 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g09.leadLag.a[1] ^ 2.0 + vrNordic_g09.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp255);
    }
  }tmp256 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4777]] /* vrNordic_g09.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp255)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4778]] /* vrNordic_g09.leadLag.a_end PARAM */) = (tmp256?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4777]] /* vrNordic_g09.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12230;
}

/*
equation index: 12234
type: SIMPLE_ASSIGN
goverNordic_g09.govKp.k = goverNordic_g09.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2557]] /* goverNordic_g09.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2543]] /* goverNordic_g09.Kp PARAM */);
  threadData->lastEquationSolved = 12234;
}

/*
equation index: 12235
type: SIMPLE_ASSIGN
goverNordic_g09.govKi.k = goverNordic_g09.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2556]] /* goverNordic_g09.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2542]] /* goverNordic_g09.Ki PARAM */);
  threadData->lastEquationSolved = 12235;
}

/*
equation index: 12239
type: SIMPLE_ASSIGN
goverNordic_g09.dOmegaPlusDroop.k2 = goverNordic_g09.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2550]] /* goverNordic_g09.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2541]] /* goverNordic_g09.KSigma PARAM */);
  threadData->lastEquationSolved = 12239;
}

/*
equation index: 12242
type: SIMPLE_ASSIGN
goverNordic_g09.perUnitP.k = 100.0 / goverNordic_g09.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2574]] /* goverNordic_g09.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2544]] /* goverNordic_g09.PNom PARAM */),"goverNordic_g09.PNom",equationIndexes);
  threadData->lastEquationSolved = 12242;
}

/*
equation index: 12243
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.DuMin = -goverNordic_g09.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2562]] /* goverNordic_g09.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2561]] /* goverNordic_g09.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12243;
}

/*
equation index: 12244
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limiter.uMax = goverNordic_g09.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2561]] /* goverNordic_g09.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12244;
}

/*
equation index: 12245
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limiter.uMin = goverNordic_g09.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* goverNordic_g09.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2562]] /* goverNordic_g09.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12245;
}

/*
equation index: 12249
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g09.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12249};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2566]] /* goverNordic_g09.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2573]] /* goverNordic_g09.limRateLimFirstOrder.tS PARAM */),"goverNordic_g09.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12249;
}

/*
equation index: 12250
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g09.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2564]] /* goverNordic_g09.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12250;
}

/*
equation index: 12251
type: SIMPLE_ASSIGN
goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g09.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2565]] /* goverNordic_g09.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12251;
}

/*
equation index: 12257
type: SIMPLE_ASSIGN
vrNordic_g10.derivative.k = vrNordic_g10.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4846]] /* vrNordic_g10.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4835]] /* vrNordic_g10.KPss PARAM */);
  threadData->lastEquationSolved = 12257;
}

/*
equation index: 12258
type: SIMPLE_ASSIGN
vrNordic_g10.derivative.T = vrNordic_g10.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12258};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4845]] /* vrNordic_g10.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4900]] /* vrNordic_g10.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12258;
}

/*
equation index: 12260
type: SIMPLE_ASSIGN
vrNordic_g10.derivative.zeroGain = abs(vrNordic_g10.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12260};
  modelica_boolean tmp257;
  tmp257 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4846]] /* vrNordic_g10.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[960]] /* vrNordic_g10.derivative.zeroGain PARAM */) = tmp257;
  threadData->lastEquationSolved = 12260;
}

/*
equation index: 12261
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.b[1] = vrNordic_g10.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4871]] /* vrNordic_g10.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4903]] /* vrNordic_g10.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12261;
}

/*
equation index: 12262
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.a[1] = vrNordic_g10.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4868]] /* vrNordic_g10.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4901]] /* vrNordic_g10.tLagPss PARAM */);
  threadData->lastEquationSolved = 12262;
}

/*
equation index: 12266
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.bb[1] = vrNordic_g10.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12266};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4873]] /* vrNordic_g10.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4871]] /* vrNordic_g10.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12266;
}

/*
equation index: 12267
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.bb[2] = vrNordic_g10.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4874]] /* vrNordic_g10.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4872]] /* vrNordic_g10.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12267;
}

/*
equation index: 12268
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.d = vrNordic_g10.leadLag1.bb[1] / vrNordic_g10.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12268};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4875]] /* vrNordic_g10.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4873]] /* vrNordic_g10.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4868]] /* vrNordic_g10.leadLag1.a[1] PARAM */),"vrNordic_g10.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12268;
}

/*
equation index: 12269
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.a_end = if vrNordic_g10.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g10.leadLag1.a[1] ^ 2.0 + vrNordic_g10.leadLag1.a[2] ^ 2.0) then vrNordic_g10.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12269};
  modelica_real tmp258;
  modelica_real tmp259;
  modelica_real tmp260;
  modelica_boolean tmp261;
  tmp258 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4868]] /* vrNordic_g10.leadLag1.a[1] PARAM */);
  tmp259 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4869]] /* vrNordic_g10.leadLag1.a[2] PARAM */);
  tmp260 = (tmp258 * tmp258) + (tmp259 * tmp259);
  if(!(tmp260 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g10.leadLag1.a[1] ^ 2.0 + vrNordic_g10.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp260);
    }
  }tmp261 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4869]] /* vrNordic_g10.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp260)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4870]] /* vrNordic_g10.leadLag1.a_end PARAM */) = (tmp261?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4869]] /* vrNordic_g10.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12269;
}

/*
equation index: 12270
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.X0[1] = if vrNordic_g10.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g10.leadLag1.u_start / vrNordic_g10.leadLag1.a_end else if vrNordic_g10.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g10.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g10.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4866]] /* vrNordic_g10.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[580]] /* vrNordic_g10.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4876]] /* vrNordic_g10.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4870]] /* vrNordic_g10.leadLag1.a_end PARAM */),"vrNordic_g10.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[580]] /* vrNordic_g10.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[580]] /* vrNordic_g10.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4877]] /* vrNordic_g10.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12270;
}

/*
equation index: 12271
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag1.Y0 = if vrNordic_g10.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g10.leadLag1.u_start * vrNordic_g10.leadLag1.b[2] / vrNordic_g10.leadLag1.a_end else if vrNordic_g10.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g10.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g10.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4867]] /* vrNordic_g10.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[580]] /* vrNordic_g10.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4876]] /* vrNordic_g10.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4872]] /* vrNordic_g10.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4870]] /* vrNordic_g10.leadLag1.a_end PARAM */),"vrNordic_g10.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[580]] /* vrNordic_g10.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[580]] /* vrNordic_g10.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4878]] /* vrNordic_g10.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12271;
}

/*
equation index: 12272
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.b[1] = vrNordic_g10.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4884]] /* vrNordic_g10.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4903]] /* vrNordic_g10.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12272;
}

/*
equation index: 12273
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.a[1] = vrNordic_g10.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4881]] /* vrNordic_g10.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4901]] /* vrNordic_g10.tLagPss PARAM */);
  threadData->lastEquationSolved = 12273;
}

/*
equation index: 12277
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.bb[1] = vrNordic_g10.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4886]] /* vrNordic_g10.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4884]] /* vrNordic_g10.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12277;
}

/*
equation index: 12278
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.bb[2] = vrNordic_g10.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12278};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4887]] /* vrNordic_g10.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4885]] /* vrNordic_g10.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12278;
}

/*
equation index: 12279
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.d = vrNordic_g10.leadLag2.bb[1] / vrNordic_g10.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12279};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4888]] /* vrNordic_g10.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4886]] /* vrNordic_g10.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4881]] /* vrNordic_g10.leadLag2.a[1] PARAM */),"vrNordic_g10.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12279;
}

/*
equation index: 12280
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.a_end = if vrNordic_g10.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g10.leadLag2.a[1] ^ 2.0 + vrNordic_g10.leadLag2.a[2] ^ 2.0) then vrNordic_g10.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12280};
  modelica_real tmp262;
  modelica_real tmp263;
  modelica_real tmp264;
  modelica_boolean tmp265;
  tmp262 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4881]] /* vrNordic_g10.leadLag2.a[1] PARAM */);
  tmp263 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4882]] /* vrNordic_g10.leadLag2.a[2] PARAM */);
  tmp264 = (tmp262 * tmp262) + (tmp263 * tmp263);
  if(!(tmp264 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g10.leadLag2.a[1] ^ 2.0 + vrNordic_g10.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp264);
    }
  }tmp265 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4882]] /* vrNordic_g10.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp264)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4883]] /* vrNordic_g10.leadLag2.a_end PARAM */) = (tmp265?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4882]] /* vrNordic_g10.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12280;
}

/*
equation index: 12281
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.X0[1] = if vrNordic_g10.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g10.leadLag2.u_start / vrNordic_g10.leadLag2.a_end else if vrNordic_g10.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g10.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g10.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12281};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4879]] /* vrNordic_g10.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[584]] /* vrNordic_g10.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4889]] /* vrNordic_g10.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4883]] /* vrNordic_g10.leadLag2.a_end PARAM */),"vrNordic_g10.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[584]] /* vrNordic_g10.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[584]] /* vrNordic_g10.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4890]] /* vrNordic_g10.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12281;
}

/*
equation index: 12282
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag2.Y0 = if vrNordic_g10.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g10.leadLag2.u_start * vrNordic_g10.leadLag2.b[2] / vrNordic_g10.leadLag2.a_end else if vrNordic_g10.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g10.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g10.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4880]] /* vrNordic_g10.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[584]] /* vrNordic_g10.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4889]] /* vrNordic_g10.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4885]] /* vrNordic_g10.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4883]] /* vrNordic_g10.leadLag2.a_end PARAM */),"vrNordic_g10.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[584]] /* vrNordic_g10.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[584]] /* vrNordic_g10.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4891]] /* vrNordic_g10.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12282;
}

/*
equation index: 12283
type: SIMPLE_ASSIGN
vrNordic_g10.limiter.uMin = -vrNordic_g10.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4897]] /* vrNordic_g10.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4896]] /* vrNordic_g10.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12283;
}

/*
equation index: 12287
type: SIMPLE_ASSIGN
vrNordic_g10.const2.k = vrNordic_g10.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12287};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4844]] /* vrNordic_g10.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4834]] /* vrNordic_g10.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12287;
}

/*
equation index: 12288
type: SIMPLE_ASSIGN
vrNordic_g10.kMulDU.k = vrNordic_g10.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4852]] /* vrNordic_g10.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4836]] /* vrNordic_g10.KTgr PARAM */);
  threadData->lastEquationSolved = 12288;
}

/*
equation index: 12289
type: SIMPLE_ASSIGN
vrNordic_g10.overExcitationLimitation.OelMode = vrNordic_g10.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4898]] /* vrNordic_g10.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4837]] /* vrNordic_g10.OelMode PARAM */);
  threadData->lastEquationSolved = 12289;
}

/*
equation index: 12290
type: SIMPLE_ASSIGN
vrNordic_g10.limIntegrator.outMax = vrNordic_g10.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4893]] /* vrNordic_g10.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4832]] /* vrNordic_g10.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12290;
}

/*
equation index: 12296
type: SIMPLE_ASSIGN
vrNordic_g10.timer.outMin = vrNordic_g10.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12296};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4908]] /* vrNordic_g10.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4905]] /* vrNordic_g10.tOelMin PARAM */);
  threadData->lastEquationSolved = 12296;
}

/*
equation index: 12301
type: SIMPLE_ASSIGN
vrNordic_g10.timer.y_start = vrNordic_g10.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12301};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4909]] /* vrNordic_g10.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4905]] /* vrNordic_g10.tOelMin PARAM */);
  threadData->lastEquationSolved = 12301;
}

/*
equation index: 12303
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.b[1] = vrNordic_g10.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12303};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4858]] /* vrNordic_g10.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4904]] /* vrNordic_g10.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12303;
}

/*
equation index: 12304
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.a[1] = vrNordic_g10.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12304};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4855]] /* vrNordic_g10.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4902]] /* vrNordic_g10.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12304;
}

/*
equation index: 12308
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.bb[1] = vrNordic_g10.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4860]] /* vrNordic_g10.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4858]] /* vrNordic_g10.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12308;
}

/*
equation index: 12309
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.bb[2] = vrNordic_g10.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4861]] /* vrNordic_g10.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4859]] /* vrNordic_g10.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12309;
}

/*
equation index: 12310
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.d = vrNordic_g10.leadLag.bb[1] / vrNordic_g10.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12310};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4862]] /* vrNordic_g10.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4860]] /* vrNordic_g10.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4855]] /* vrNordic_g10.leadLag.a[1] PARAM */),"vrNordic_g10.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12310;
}

/*
equation index: 12311
type: SIMPLE_ASSIGN
vrNordic_g10.leadLag.a_end = if vrNordic_g10.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g10.leadLag.a[1] ^ 2.0 + vrNordic_g10.leadLag.a[2] ^ 2.0) then vrNordic_g10.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12311};
  modelica_real tmp266;
  modelica_real tmp267;
  modelica_real tmp268;
  modelica_boolean tmp269;
  tmp266 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4855]] /* vrNordic_g10.leadLag.a[1] PARAM */);
  tmp267 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4856]] /* vrNordic_g10.leadLag.a[2] PARAM */);
  tmp268 = (tmp266 * tmp266) + (tmp267 * tmp267);
  if(!(tmp268 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g10.leadLag.a[1] ^ 2.0 + vrNordic_g10.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp268);
    }
  }tmp269 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4856]] /* vrNordic_g10.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp268)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4857]] /* vrNordic_g10.leadLag.a_end PARAM */) = (tmp269?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4856]] /* vrNordic_g10.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12311;
}

/*
equation index: 12315
type: SIMPLE_ASSIGN
goverNordic_g10.govKp.k = goverNordic_g10.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12315};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2593]] /* goverNordic_g10.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2579]] /* goverNordic_g10.Kp PARAM */);
  threadData->lastEquationSolved = 12315;
}

/*
equation index: 12316
type: SIMPLE_ASSIGN
goverNordic_g10.govKi.k = goverNordic_g10.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12316};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2592]] /* goverNordic_g10.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2578]] /* goverNordic_g10.Ki PARAM */);
  threadData->lastEquationSolved = 12316;
}

/*
equation index: 12320
type: SIMPLE_ASSIGN
goverNordic_g10.dOmegaPlusDroop.k2 = goverNordic_g10.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12320};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2586]] /* goverNordic_g10.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* goverNordic_g10.KSigma PARAM */);
  threadData->lastEquationSolved = 12320;
}

/*
equation index: 12323
type: SIMPLE_ASSIGN
goverNordic_g10.perUnitP.k = 100.0 / goverNordic_g10.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12323};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2610]] /* goverNordic_g10.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2580]] /* goverNordic_g10.PNom PARAM */),"goverNordic_g10.PNom",equationIndexes);
  threadData->lastEquationSolved = 12323;
}

/*
equation index: 12324
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.DuMin = -goverNordic_g10.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2598]] /* goverNordic_g10.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2597]] /* goverNordic_g10.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12324;
}

/*
equation index: 12325
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limiter.uMax = goverNordic_g10.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2607]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2597]] /* goverNordic_g10.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12325;
}

/*
equation index: 12326
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limiter.uMin = goverNordic_g10.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2608]] /* goverNordic_g10.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2598]] /* goverNordic_g10.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12326;
}

/*
equation index: 12330
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g10.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12330};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2602]] /* goverNordic_g10.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2609]] /* goverNordic_g10.limRateLimFirstOrder.tS PARAM */),"goverNordic_g10.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12330;
}

/*
equation index: 12331
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g10.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12331};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2604]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2600]] /* goverNordic_g10.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12331;
}

/*
equation index: 12332
type: SIMPLE_ASSIGN
goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g10.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12332};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2601]] /* goverNordic_g10.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12332;
}

/*
equation index: 12338
type: SIMPLE_ASSIGN
vrNordic_g11.derivative.k = vrNordic_g11.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4925]] /* vrNordic_g11.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4914]] /* vrNordic_g11.KPss PARAM */);
  threadData->lastEquationSolved = 12338;
}

/*
equation index: 12339
type: SIMPLE_ASSIGN
vrNordic_g11.derivative.T = vrNordic_g11.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12339};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4924]] /* vrNordic_g11.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4979]] /* vrNordic_g11.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12339;
}

/*
equation index: 12341
type: SIMPLE_ASSIGN
vrNordic_g11.derivative.zeroGain = abs(vrNordic_g11.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12341};
  modelica_boolean tmp270;
  tmp270 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4925]] /* vrNordic_g11.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[971]] /* vrNordic_g11.derivative.zeroGain PARAM */) = tmp270;
  threadData->lastEquationSolved = 12341;
}

/*
equation index: 12342
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.b[1] = vrNordic_g11.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4950]] /* vrNordic_g11.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4982]] /* vrNordic_g11.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12342;
}

/*
equation index: 12343
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.a[1] = vrNordic_g11.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12343};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4947]] /* vrNordic_g11.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4980]] /* vrNordic_g11.tLagPss PARAM */);
  threadData->lastEquationSolved = 12343;
}

/*
equation index: 12347
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.bb[1] = vrNordic_g11.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12347};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4952]] /* vrNordic_g11.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4950]] /* vrNordic_g11.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12347;
}

/*
equation index: 12348
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.bb[2] = vrNordic_g11.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4953]] /* vrNordic_g11.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4951]] /* vrNordic_g11.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12348;
}

/*
equation index: 12349
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.d = vrNordic_g11.leadLag1.bb[1] / vrNordic_g11.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12349};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4954]] /* vrNordic_g11.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4952]] /* vrNordic_g11.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4947]] /* vrNordic_g11.leadLag1.a[1] PARAM */),"vrNordic_g11.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12349;
}

/*
equation index: 12350
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.a_end = if vrNordic_g11.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g11.leadLag1.a[1] ^ 2.0 + vrNordic_g11.leadLag1.a[2] ^ 2.0) then vrNordic_g11.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12350};
  modelica_real tmp271;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_boolean tmp274;
  tmp271 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4947]] /* vrNordic_g11.leadLag1.a[1] PARAM */);
  tmp272 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4948]] /* vrNordic_g11.leadLag1.a[2] PARAM */);
  tmp273 = (tmp271 * tmp271) + (tmp272 * tmp272);
  if(!(tmp273 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g11.leadLag1.a[1] ^ 2.0 + vrNordic_g11.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp273);
    }
  }tmp274 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4948]] /* vrNordic_g11.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp273)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4949]] /* vrNordic_g11.leadLag1.a_end PARAM */) = (tmp274?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4948]] /* vrNordic_g11.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12350;
}

/*
equation index: 12351
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.X0[1] = if vrNordic_g11.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g11.leadLag1.u_start / vrNordic_g11.leadLag1.a_end else if vrNordic_g11.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g11.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g11.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12351};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4945]] /* vrNordic_g11.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[596]] /* vrNordic_g11.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4955]] /* vrNordic_g11.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4949]] /* vrNordic_g11.leadLag1.a_end PARAM */),"vrNordic_g11.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[596]] /* vrNordic_g11.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[596]] /* vrNordic_g11.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4956]] /* vrNordic_g11.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12351;
}

/*
equation index: 12352
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag1.Y0 = if vrNordic_g11.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g11.leadLag1.u_start * vrNordic_g11.leadLag1.b[2] / vrNordic_g11.leadLag1.a_end else if vrNordic_g11.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g11.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g11.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12352};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4946]] /* vrNordic_g11.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[596]] /* vrNordic_g11.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4955]] /* vrNordic_g11.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4951]] /* vrNordic_g11.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4949]] /* vrNordic_g11.leadLag1.a_end PARAM */),"vrNordic_g11.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[596]] /* vrNordic_g11.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[596]] /* vrNordic_g11.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4957]] /* vrNordic_g11.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12352;
}

/*
equation index: 12353
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.b[1] = vrNordic_g11.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12353};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4963]] /* vrNordic_g11.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4982]] /* vrNordic_g11.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12353;
}

/*
equation index: 12354
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.a[1] = vrNordic_g11.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4960]] /* vrNordic_g11.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4980]] /* vrNordic_g11.tLagPss PARAM */);
  threadData->lastEquationSolved = 12354;
}

/*
equation index: 12358
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.bb[1] = vrNordic_g11.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12358};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4965]] /* vrNordic_g11.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4963]] /* vrNordic_g11.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12358;
}

/*
equation index: 12359
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.bb[2] = vrNordic_g11.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12359};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4966]] /* vrNordic_g11.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4964]] /* vrNordic_g11.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12359;
}

/*
equation index: 12360
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.d = vrNordic_g11.leadLag2.bb[1] / vrNordic_g11.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4967]] /* vrNordic_g11.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4965]] /* vrNordic_g11.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4960]] /* vrNordic_g11.leadLag2.a[1] PARAM */),"vrNordic_g11.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12360;
}

/*
equation index: 12361
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.a_end = if vrNordic_g11.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g11.leadLag2.a[1] ^ 2.0 + vrNordic_g11.leadLag2.a[2] ^ 2.0) then vrNordic_g11.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12361};
  modelica_real tmp275;
  modelica_real tmp276;
  modelica_real tmp277;
  modelica_boolean tmp278;
  tmp275 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4960]] /* vrNordic_g11.leadLag2.a[1] PARAM */);
  tmp276 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4961]] /* vrNordic_g11.leadLag2.a[2] PARAM */);
  tmp277 = (tmp275 * tmp275) + (tmp276 * tmp276);
  if(!(tmp277 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g11.leadLag2.a[1] ^ 2.0 + vrNordic_g11.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp277);
    }
  }tmp278 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4961]] /* vrNordic_g11.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp277)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4962]] /* vrNordic_g11.leadLag2.a_end PARAM */) = (tmp278?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4961]] /* vrNordic_g11.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12361;
}

/*
equation index: 12362
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.X0[1] = if vrNordic_g11.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g11.leadLag2.u_start / vrNordic_g11.leadLag2.a_end else if vrNordic_g11.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g11.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g11.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4958]] /* vrNordic_g11.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[600]] /* vrNordic_g11.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4968]] /* vrNordic_g11.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4962]] /* vrNordic_g11.leadLag2.a_end PARAM */),"vrNordic_g11.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[600]] /* vrNordic_g11.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[600]] /* vrNordic_g11.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4969]] /* vrNordic_g11.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12362;
}

/*
equation index: 12363
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag2.Y0 = if vrNordic_g11.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g11.leadLag2.u_start * vrNordic_g11.leadLag2.b[2] / vrNordic_g11.leadLag2.a_end else if vrNordic_g11.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g11.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g11.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4959]] /* vrNordic_g11.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[600]] /* vrNordic_g11.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4968]] /* vrNordic_g11.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4964]] /* vrNordic_g11.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4962]] /* vrNordic_g11.leadLag2.a_end PARAM */),"vrNordic_g11.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[600]] /* vrNordic_g11.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[600]] /* vrNordic_g11.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4970]] /* vrNordic_g11.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12363;
}

/*
equation index: 12364
type: SIMPLE_ASSIGN
vrNordic_g11.limiter.uMin = -vrNordic_g11.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4976]] /* vrNordic_g11.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4975]] /* vrNordic_g11.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12364;
}

/*
equation index: 12368
type: SIMPLE_ASSIGN
vrNordic_g11.const2.k = vrNordic_g11.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4923]] /* vrNordic_g11.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4913]] /* vrNordic_g11.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12368;
}

/*
equation index: 12369
type: SIMPLE_ASSIGN
vrNordic_g11.kMulDU.k = vrNordic_g11.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4931]] /* vrNordic_g11.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4915]] /* vrNordic_g11.KTgr PARAM */);
  threadData->lastEquationSolved = 12369;
}

/*
equation index: 12370
type: SIMPLE_ASSIGN
vrNordic_g11.overExcitationLimitation.OelMode = vrNordic_g11.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4977]] /* vrNordic_g11.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4916]] /* vrNordic_g11.OelMode PARAM */);
  threadData->lastEquationSolved = 12370;
}

/*
equation index: 12371
type: SIMPLE_ASSIGN
vrNordic_g11.limIntegrator.outMax = vrNordic_g11.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4972]] /* vrNordic_g11.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4911]] /* vrNordic_g11.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12371;
}

/*
equation index: 12377
type: SIMPLE_ASSIGN
vrNordic_g11.timer.outMin = vrNordic_g11.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4987]] /* vrNordic_g11.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4984]] /* vrNordic_g11.tOelMin PARAM */);
  threadData->lastEquationSolved = 12377;
}

/*
equation index: 12382
type: SIMPLE_ASSIGN
vrNordic_g11.timer.y_start = vrNordic_g11.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4988]] /* vrNordic_g11.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4984]] /* vrNordic_g11.tOelMin PARAM */);
  threadData->lastEquationSolved = 12382;
}

/*
equation index: 12384
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.b[1] = vrNordic_g11.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4937]] /* vrNordic_g11.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4983]] /* vrNordic_g11.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12384;
}

/*
equation index: 12385
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.a[1] = vrNordic_g11.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4934]] /* vrNordic_g11.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4981]] /* vrNordic_g11.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12385;
}

/*
equation index: 12389
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.bb[1] = vrNordic_g11.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4939]] /* vrNordic_g11.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4937]] /* vrNordic_g11.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12389;
}

/*
equation index: 12390
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.bb[2] = vrNordic_g11.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4940]] /* vrNordic_g11.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4938]] /* vrNordic_g11.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12390;
}

/*
equation index: 12391
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.d = vrNordic_g11.leadLag.bb[1] / vrNordic_g11.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12391};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4941]] /* vrNordic_g11.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4939]] /* vrNordic_g11.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4934]] /* vrNordic_g11.leadLag.a[1] PARAM */),"vrNordic_g11.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12391;
}

/*
equation index: 12392
type: SIMPLE_ASSIGN
vrNordic_g11.leadLag.a_end = if vrNordic_g11.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g11.leadLag.a[1] ^ 2.0 + vrNordic_g11.leadLag.a[2] ^ 2.0) then vrNordic_g11.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12392};
  modelica_real tmp279;
  modelica_real tmp280;
  modelica_real tmp281;
  modelica_boolean tmp282;
  tmp279 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4934]] /* vrNordic_g11.leadLag.a[1] PARAM */);
  tmp280 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4935]] /* vrNordic_g11.leadLag.a[2] PARAM */);
  tmp281 = (tmp279 * tmp279) + (tmp280 * tmp280);
  if(!(tmp281 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g11.leadLag.a[1] ^ 2.0 + vrNordic_g11.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp281);
    }
  }tmp282 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4935]] /* vrNordic_g11.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp281)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4936]] /* vrNordic_g11.leadLag.a_end PARAM */) = (tmp282?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4935]] /* vrNordic_g11.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12392;
}

/*
equation index: 12396
type: SIMPLE_ASSIGN
goverNordic_g11.govKp.k = goverNordic_g11.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2629]] /* goverNordic_g11.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2615]] /* goverNordic_g11.Kp PARAM */);
  threadData->lastEquationSolved = 12396;
}

/*
equation index: 12397
type: SIMPLE_ASSIGN
goverNordic_g11.govKi.k = goverNordic_g11.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12397};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* goverNordic_g11.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2614]] /* goverNordic_g11.Ki PARAM */);
  threadData->lastEquationSolved = 12397;
}

/*
equation index: 12401
type: SIMPLE_ASSIGN
goverNordic_g11.dOmegaPlusDroop.k2 = goverNordic_g11.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12401};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2622]] /* goverNordic_g11.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2613]] /* goverNordic_g11.KSigma PARAM */);
  threadData->lastEquationSolved = 12401;
}

/*
equation index: 12404
type: SIMPLE_ASSIGN
goverNordic_g11.perUnitP.k = 100.0 / goverNordic_g11.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12404};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2646]] /* goverNordic_g11.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2616]] /* goverNordic_g11.PNom PARAM */),"goverNordic_g11.PNom",equationIndexes);
  threadData->lastEquationSolved = 12404;
}

/*
equation index: 12405
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.DuMin = -goverNordic_g11.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2634]] /* goverNordic_g11.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2633]] /* goverNordic_g11.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12405;
}

/*
equation index: 12406
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limiter.uMax = goverNordic_g11.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12406};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2633]] /* goverNordic_g11.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12406;
}

/*
equation index: 12407
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limiter.uMin = goverNordic_g11.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12407};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* goverNordic_g11.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2634]] /* goverNordic_g11.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12407;
}

/*
equation index: 12411
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g11.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2638]] /* goverNordic_g11.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2645]] /* goverNordic_g11.limRateLimFirstOrder.tS PARAM */),"goverNordic_g11.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12411;
}

/*
equation index: 12412
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g11.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2636]] /* goverNordic_g11.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12412;
}

/*
equation index: 12413
type: SIMPLE_ASSIGN
goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g11.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2637]] /* goverNordic_g11.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12413;
}

/*
equation index: 12419
type: SIMPLE_ASSIGN
vrNordic_g12.derivative.k = vrNordic_g12.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5004]] /* vrNordic_g12.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4993]] /* vrNordic_g12.KPss PARAM */);
  threadData->lastEquationSolved = 12419;
}

/*
equation index: 12420
type: SIMPLE_ASSIGN
vrNordic_g12.derivative.T = vrNordic_g12.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12420};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5003]] /* vrNordic_g12.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5058]] /* vrNordic_g12.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12420;
}

/*
equation index: 12422
type: SIMPLE_ASSIGN
vrNordic_g12.derivative.zeroGain = abs(vrNordic_g12.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12422};
  modelica_boolean tmp283;
  tmp283 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5004]] /* vrNordic_g12.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[982]] /* vrNordic_g12.derivative.zeroGain PARAM */) = tmp283;
  threadData->lastEquationSolved = 12422;
}

/*
equation index: 12423
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.b[1] = vrNordic_g12.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5029]] /* vrNordic_g12.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5061]] /* vrNordic_g12.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12423;
}

/*
equation index: 12424
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.a[1] = vrNordic_g12.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5026]] /* vrNordic_g12.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5059]] /* vrNordic_g12.tLagPss PARAM */);
  threadData->lastEquationSolved = 12424;
}

/*
equation index: 12428
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.bb[1] = vrNordic_g12.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5031]] /* vrNordic_g12.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5029]] /* vrNordic_g12.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12428;
}

/*
equation index: 12429
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.bb[2] = vrNordic_g12.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12429};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5032]] /* vrNordic_g12.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5030]] /* vrNordic_g12.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12429;
}

/*
equation index: 12430
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.d = vrNordic_g12.leadLag1.bb[1] / vrNordic_g12.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12430};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5033]] /* vrNordic_g12.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5031]] /* vrNordic_g12.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5026]] /* vrNordic_g12.leadLag1.a[1] PARAM */),"vrNordic_g12.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12430;
}

/*
equation index: 12431
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.a_end = if vrNordic_g12.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g12.leadLag1.a[1] ^ 2.0 + vrNordic_g12.leadLag1.a[2] ^ 2.0) then vrNordic_g12.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12431};
  modelica_real tmp284;
  modelica_real tmp285;
  modelica_real tmp286;
  modelica_boolean tmp287;
  tmp284 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5026]] /* vrNordic_g12.leadLag1.a[1] PARAM */);
  tmp285 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5027]] /* vrNordic_g12.leadLag1.a[2] PARAM */);
  tmp286 = (tmp284 * tmp284) + (tmp285 * tmp285);
  if(!(tmp286 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g12.leadLag1.a[1] ^ 2.0 + vrNordic_g12.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp286);
    }
  }tmp287 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5027]] /* vrNordic_g12.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp286)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5028]] /* vrNordic_g12.leadLag1.a_end PARAM */) = (tmp287?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5027]] /* vrNordic_g12.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12431;
}

/*
equation index: 12432
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.X0[1] = if vrNordic_g12.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g12.leadLag1.u_start / vrNordic_g12.leadLag1.a_end else if vrNordic_g12.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g12.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g12.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5024]] /* vrNordic_g12.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[612]] /* vrNordic_g12.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5034]] /* vrNordic_g12.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5028]] /* vrNordic_g12.leadLag1.a_end PARAM */),"vrNordic_g12.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[612]] /* vrNordic_g12.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[612]] /* vrNordic_g12.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5035]] /* vrNordic_g12.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12432;
}

/*
equation index: 12433
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag1.Y0 = if vrNordic_g12.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g12.leadLag1.u_start * vrNordic_g12.leadLag1.b[2] / vrNordic_g12.leadLag1.a_end else if vrNordic_g12.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g12.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g12.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5025]] /* vrNordic_g12.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[612]] /* vrNordic_g12.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5034]] /* vrNordic_g12.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5030]] /* vrNordic_g12.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5028]] /* vrNordic_g12.leadLag1.a_end PARAM */),"vrNordic_g12.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[612]] /* vrNordic_g12.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[612]] /* vrNordic_g12.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5036]] /* vrNordic_g12.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12433;
}

/*
equation index: 12434
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.b[1] = vrNordic_g12.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5042]] /* vrNordic_g12.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5061]] /* vrNordic_g12.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12434;
}

/*
equation index: 12435
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.a[1] = vrNordic_g12.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5039]] /* vrNordic_g12.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5059]] /* vrNordic_g12.tLagPss PARAM */);
  threadData->lastEquationSolved = 12435;
}

/*
equation index: 12439
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.bb[1] = vrNordic_g12.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5044]] /* vrNordic_g12.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5042]] /* vrNordic_g12.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12439;
}

/*
equation index: 12440
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.bb[2] = vrNordic_g12.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5045]] /* vrNordic_g12.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5043]] /* vrNordic_g12.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12440;
}

/*
equation index: 12441
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.d = vrNordic_g12.leadLag2.bb[1] / vrNordic_g12.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12441};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5046]] /* vrNordic_g12.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5044]] /* vrNordic_g12.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5039]] /* vrNordic_g12.leadLag2.a[1] PARAM */),"vrNordic_g12.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12441;
}

/*
equation index: 12442
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.a_end = if vrNordic_g12.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g12.leadLag2.a[1] ^ 2.0 + vrNordic_g12.leadLag2.a[2] ^ 2.0) then vrNordic_g12.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12442};
  modelica_real tmp288;
  modelica_real tmp289;
  modelica_real tmp290;
  modelica_boolean tmp291;
  tmp288 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5039]] /* vrNordic_g12.leadLag2.a[1] PARAM */);
  tmp289 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5040]] /* vrNordic_g12.leadLag2.a[2] PARAM */);
  tmp290 = (tmp288 * tmp288) + (tmp289 * tmp289);
  if(!(tmp290 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g12.leadLag2.a[1] ^ 2.0 + vrNordic_g12.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp290);
    }
  }tmp291 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5040]] /* vrNordic_g12.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp290)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5041]] /* vrNordic_g12.leadLag2.a_end PARAM */) = (tmp291?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5040]] /* vrNordic_g12.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12442;
}

/*
equation index: 12443
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.X0[1] = if vrNordic_g12.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g12.leadLag2.u_start / vrNordic_g12.leadLag2.a_end else if vrNordic_g12.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g12.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g12.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5037]] /* vrNordic_g12.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[616]] /* vrNordic_g12.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5047]] /* vrNordic_g12.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5041]] /* vrNordic_g12.leadLag2.a_end PARAM */),"vrNordic_g12.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[616]] /* vrNordic_g12.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[616]] /* vrNordic_g12.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5048]] /* vrNordic_g12.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12443;
}

/*
equation index: 12444
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag2.Y0 = if vrNordic_g12.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g12.leadLag2.u_start * vrNordic_g12.leadLag2.b[2] / vrNordic_g12.leadLag2.a_end else if vrNordic_g12.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g12.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g12.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5038]] /* vrNordic_g12.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[616]] /* vrNordic_g12.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5047]] /* vrNordic_g12.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5043]] /* vrNordic_g12.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5041]] /* vrNordic_g12.leadLag2.a_end PARAM */),"vrNordic_g12.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[616]] /* vrNordic_g12.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[616]] /* vrNordic_g12.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5049]] /* vrNordic_g12.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12444;
}

/*
equation index: 12445
type: SIMPLE_ASSIGN
vrNordic_g12.limiter.uMin = -vrNordic_g12.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12445};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5055]] /* vrNordic_g12.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5054]] /* vrNordic_g12.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12445;
}

/*
equation index: 12449
type: SIMPLE_ASSIGN
vrNordic_g12.const2.k = vrNordic_g12.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12449};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5002]] /* vrNordic_g12.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4992]] /* vrNordic_g12.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12449;
}

/*
equation index: 12450
type: SIMPLE_ASSIGN
vrNordic_g12.kMulDU.k = vrNordic_g12.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12450};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5010]] /* vrNordic_g12.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4994]] /* vrNordic_g12.KTgr PARAM */);
  threadData->lastEquationSolved = 12450;
}

/*
equation index: 12451
type: SIMPLE_ASSIGN
vrNordic_g12.overExcitationLimitation.OelMode = vrNordic_g12.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12451};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5056]] /* vrNordic_g12.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4995]] /* vrNordic_g12.OelMode PARAM */);
  threadData->lastEquationSolved = 12451;
}

/*
equation index: 12452
type: SIMPLE_ASSIGN
vrNordic_g12.limIntegrator.outMax = vrNordic_g12.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12452};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5051]] /* vrNordic_g12.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4990]] /* vrNordic_g12.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12452;
}

/*
equation index: 12458
type: SIMPLE_ASSIGN
vrNordic_g12.timer.outMin = vrNordic_g12.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12458};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5066]] /* vrNordic_g12.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5063]] /* vrNordic_g12.tOelMin PARAM */);
  threadData->lastEquationSolved = 12458;
}

/*
equation index: 12463
type: SIMPLE_ASSIGN
vrNordic_g12.timer.y_start = vrNordic_g12.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5067]] /* vrNordic_g12.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5063]] /* vrNordic_g12.tOelMin PARAM */);
  threadData->lastEquationSolved = 12463;
}

/*
equation index: 12465
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.b[1] = vrNordic_g12.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5016]] /* vrNordic_g12.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5062]] /* vrNordic_g12.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12465;
}

/*
equation index: 12466
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.a[1] = vrNordic_g12.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5013]] /* vrNordic_g12.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5060]] /* vrNordic_g12.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12466;
}

/*
equation index: 12470
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.bb[1] = vrNordic_g12.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12470};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5018]] /* vrNordic_g12.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5016]] /* vrNordic_g12.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12470;
}

/*
equation index: 12471
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.bb[2] = vrNordic_g12.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5019]] /* vrNordic_g12.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5017]] /* vrNordic_g12.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12471;
}

/*
equation index: 12472
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.d = vrNordic_g12.leadLag.bb[1] / vrNordic_g12.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5020]] /* vrNordic_g12.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5018]] /* vrNordic_g12.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5013]] /* vrNordic_g12.leadLag.a[1] PARAM */),"vrNordic_g12.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12472;
}

/*
equation index: 12473
type: SIMPLE_ASSIGN
vrNordic_g12.leadLag.a_end = if vrNordic_g12.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g12.leadLag.a[1] ^ 2.0 + vrNordic_g12.leadLag.a[2] ^ 2.0) then vrNordic_g12.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12473};
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_boolean tmp295;
  tmp292 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5013]] /* vrNordic_g12.leadLag.a[1] PARAM */);
  tmp293 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5014]] /* vrNordic_g12.leadLag.a[2] PARAM */);
  tmp294 = (tmp292 * tmp292) + (tmp293 * tmp293);
  if(!(tmp294 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g12.leadLag.a[1] ^ 2.0 + vrNordic_g12.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp294);
    }
  }tmp295 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5014]] /* vrNordic_g12.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp294)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5015]] /* vrNordic_g12.leadLag.a_end PARAM */) = (tmp295?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5014]] /* vrNordic_g12.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12473;
}

/*
equation index: 12477
type: SIMPLE_ASSIGN
goverNordic_g12.govKp.k = goverNordic_g12.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2665]] /* goverNordic_g12.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2651]] /* goverNordic_g12.Kp PARAM */);
  threadData->lastEquationSolved = 12477;
}

/*
equation index: 12478
type: SIMPLE_ASSIGN
goverNordic_g12.govKi.k = goverNordic_g12.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2664]] /* goverNordic_g12.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2650]] /* goverNordic_g12.Ki PARAM */);
  threadData->lastEquationSolved = 12478;
}

/*
equation index: 12482
type: SIMPLE_ASSIGN
goverNordic_g12.dOmegaPlusDroop.k2 = goverNordic_g12.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2658]] /* goverNordic_g12.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2649]] /* goverNordic_g12.KSigma PARAM */);
  threadData->lastEquationSolved = 12482;
}

/*
equation index: 12485
type: SIMPLE_ASSIGN
goverNordic_g12.perUnitP.k = 100.0 / goverNordic_g12.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12485};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2682]] /* goverNordic_g12.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2652]] /* goverNordic_g12.PNom PARAM */),"goverNordic_g12.PNom",equationIndexes);
  threadData->lastEquationSolved = 12485;
}

/*
equation index: 12486
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.DuMin = -goverNordic_g12.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12486};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* goverNordic_g12.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2669]] /* goverNordic_g12.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12486;
}

/*
equation index: 12487
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limiter.uMax = goverNordic_g12.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12487};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2669]] /* goverNordic_g12.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12487;
}

/*
equation index: 12488
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limiter.uMin = goverNordic_g12.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* goverNordic_g12.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* goverNordic_g12.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12488;
}

/*
equation index: 12492
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g12.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2674]] /* goverNordic_g12.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2681]] /* goverNordic_g12.limRateLimFirstOrder.tS PARAM */),"goverNordic_g12.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12492;
}

/*
equation index: 12493
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g12.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12493};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2672]] /* goverNordic_g12.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12493;
}

/*
equation index: 12494
type: SIMPLE_ASSIGN
goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g12.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* goverNordic_g12.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12494;
}

/*
equation index: 12500
type: SIMPLE_ASSIGN
vrNordic_g13.derivative.k = vrNordic_g13.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5083]] /* vrNordic_g13.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5072]] /* vrNordic_g13.KPss PARAM */);
  threadData->lastEquationSolved = 12500;
}

/*
equation index: 12501
type: SIMPLE_ASSIGN
vrNordic_g13.derivative.T = vrNordic_g13.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5082]] /* vrNordic_g13.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5137]] /* vrNordic_g13.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12501;
}

/*
equation index: 12503
type: SIMPLE_ASSIGN
vrNordic_g13.derivative.zeroGain = abs(vrNordic_g13.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12503};
  modelica_boolean tmp296;
  tmp296 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5083]] /* vrNordic_g13.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[993]] /* vrNordic_g13.derivative.zeroGain PARAM */) = tmp296;
  threadData->lastEquationSolved = 12503;
}

/*
equation index: 12504
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.b[1] = vrNordic_g13.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5108]] /* vrNordic_g13.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5140]] /* vrNordic_g13.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12504;
}

/*
equation index: 12505
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.a[1] = vrNordic_g13.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12505};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5105]] /* vrNordic_g13.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5138]] /* vrNordic_g13.tLagPss PARAM */);
  threadData->lastEquationSolved = 12505;
}

/*
equation index: 12509
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.bb[1] = vrNordic_g13.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5110]] /* vrNordic_g13.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5108]] /* vrNordic_g13.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12509;
}

/*
equation index: 12510
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.bb[2] = vrNordic_g13.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5111]] /* vrNordic_g13.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5109]] /* vrNordic_g13.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12510;
}

/*
equation index: 12511
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.d = vrNordic_g13.leadLag1.bb[1] / vrNordic_g13.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5112]] /* vrNordic_g13.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5110]] /* vrNordic_g13.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5105]] /* vrNordic_g13.leadLag1.a[1] PARAM */),"vrNordic_g13.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12511;
}

/*
equation index: 12512
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.a_end = if vrNordic_g13.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g13.leadLag1.a[1] ^ 2.0 + vrNordic_g13.leadLag1.a[2] ^ 2.0) then vrNordic_g13.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12512};
  modelica_real tmp297;
  modelica_real tmp298;
  modelica_real tmp299;
  modelica_boolean tmp300;
  tmp297 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5105]] /* vrNordic_g13.leadLag1.a[1] PARAM */);
  tmp298 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5106]] /* vrNordic_g13.leadLag1.a[2] PARAM */);
  tmp299 = (tmp297 * tmp297) + (tmp298 * tmp298);
  if(!(tmp299 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g13.leadLag1.a[1] ^ 2.0 + vrNordic_g13.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp299);
    }
  }tmp300 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5106]] /* vrNordic_g13.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp299)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5107]] /* vrNordic_g13.leadLag1.a_end PARAM */) = (tmp300?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5106]] /* vrNordic_g13.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12512;
}

/*
equation index: 12513
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.X0[1] = if vrNordic_g13.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g13.leadLag1.u_start / vrNordic_g13.leadLag1.a_end else if vrNordic_g13.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g13.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g13.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5103]] /* vrNordic_g13.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[628]] /* vrNordic_g13.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5113]] /* vrNordic_g13.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5107]] /* vrNordic_g13.leadLag1.a_end PARAM */),"vrNordic_g13.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[628]] /* vrNordic_g13.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[628]] /* vrNordic_g13.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5114]] /* vrNordic_g13.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12513;
}

/*
equation index: 12514
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag1.Y0 = if vrNordic_g13.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g13.leadLag1.u_start * vrNordic_g13.leadLag1.b[2] / vrNordic_g13.leadLag1.a_end else if vrNordic_g13.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g13.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g13.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5104]] /* vrNordic_g13.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[628]] /* vrNordic_g13.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5113]] /* vrNordic_g13.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5109]] /* vrNordic_g13.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5107]] /* vrNordic_g13.leadLag1.a_end PARAM */),"vrNordic_g13.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[628]] /* vrNordic_g13.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[628]] /* vrNordic_g13.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5115]] /* vrNordic_g13.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12514;
}

/*
equation index: 12515
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.b[1] = vrNordic_g13.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5121]] /* vrNordic_g13.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5140]] /* vrNordic_g13.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12515;
}

/*
equation index: 12516
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.a[1] = vrNordic_g13.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5118]] /* vrNordic_g13.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5138]] /* vrNordic_g13.tLagPss PARAM */);
  threadData->lastEquationSolved = 12516;
}

/*
equation index: 12520
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.bb[1] = vrNordic_g13.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5123]] /* vrNordic_g13.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5121]] /* vrNordic_g13.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12520;
}

/*
equation index: 12521
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.bb[2] = vrNordic_g13.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5124]] /* vrNordic_g13.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5122]] /* vrNordic_g13.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12521;
}

/*
equation index: 12522
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.d = vrNordic_g13.leadLag2.bb[1] / vrNordic_g13.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12522};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5125]] /* vrNordic_g13.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5123]] /* vrNordic_g13.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5118]] /* vrNordic_g13.leadLag2.a[1] PARAM */),"vrNordic_g13.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12522;
}

/*
equation index: 12523
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.a_end = if vrNordic_g13.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g13.leadLag2.a[1] ^ 2.0 + vrNordic_g13.leadLag2.a[2] ^ 2.0) then vrNordic_g13.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12523};
  modelica_real tmp301;
  modelica_real tmp302;
  modelica_real tmp303;
  modelica_boolean tmp304;
  tmp301 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5118]] /* vrNordic_g13.leadLag2.a[1] PARAM */);
  tmp302 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5119]] /* vrNordic_g13.leadLag2.a[2] PARAM */);
  tmp303 = (tmp301 * tmp301) + (tmp302 * tmp302);
  if(!(tmp303 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g13.leadLag2.a[1] ^ 2.0 + vrNordic_g13.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp303);
    }
  }tmp304 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5119]] /* vrNordic_g13.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp303)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5120]] /* vrNordic_g13.leadLag2.a_end PARAM */) = (tmp304?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5119]] /* vrNordic_g13.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12523;
}

/*
equation index: 12524
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.X0[1] = if vrNordic_g13.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g13.leadLag2.u_start / vrNordic_g13.leadLag2.a_end else if vrNordic_g13.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g13.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g13.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12524};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5116]] /* vrNordic_g13.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[632]] /* vrNordic_g13.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5126]] /* vrNordic_g13.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5120]] /* vrNordic_g13.leadLag2.a_end PARAM */),"vrNordic_g13.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[632]] /* vrNordic_g13.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[632]] /* vrNordic_g13.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5127]] /* vrNordic_g13.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12524;
}

/*
equation index: 12525
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag2.Y0 = if vrNordic_g13.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g13.leadLag2.u_start * vrNordic_g13.leadLag2.b[2] / vrNordic_g13.leadLag2.a_end else if vrNordic_g13.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g13.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g13.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12525};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5117]] /* vrNordic_g13.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[632]] /* vrNordic_g13.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5126]] /* vrNordic_g13.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5122]] /* vrNordic_g13.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5120]] /* vrNordic_g13.leadLag2.a_end PARAM */),"vrNordic_g13.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[632]] /* vrNordic_g13.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[632]] /* vrNordic_g13.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5128]] /* vrNordic_g13.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12525;
}

/*
equation index: 12526
type: SIMPLE_ASSIGN
vrNordic_g13.limiter.uMin = -vrNordic_g13.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5134]] /* vrNordic_g13.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5133]] /* vrNordic_g13.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12526;
}

/*
equation index: 12530
type: SIMPLE_ASSIGN
vrNordic_g13.const2.k = vrNordic_g13.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5081]] /* vrNordic_g13.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5071]] /* vrNordic_g13.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12530;
}

/*
equation index: 12531
type: SIMPLE_ASSIGN
vrNordic_g13.kMulDU.k = vrNordic_g13.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5089]] /* vrNordic_g13.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5073]] /* vrNordic_g13.KTgr PARAM */);
  threadData->lastEquationSolved = 12531;
}

/*
equation index: 12532
type: SIMPLE_ASSIGN
vrNordic_g13.overExcitationLimitation.OelMode = vrNordic_g13.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5135]] /* vrNordic_g13.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5074]] /* vrNordic_g13.OelMode PARAM */);
  threadData->lastEquationSolved = 12532;
}

/*
equation index: 12533
type: SIMPLE_ASSIGN
vrNordic_g13.limIntegrator.outMax = vrNordic_g13.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5130]] /* vrNordic_g13.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5069]] /* vrNordic_g13.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12533;
}

/*
equation index: 12539
type: SIMPLE_ASSIGN
vrNordic_g13.timer.outMin = vrNordic_g13.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5145]] /* vrNordic_g13.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5142]] /* vrNordic_g13.tOelMin PARAM */);
  threadData->lastEquationSolved = 12539;
}

/*
equation index: 12544
type: SIMPLE_ASSIGN
vrNordic_g13.timer.y_start = vrNordic_g13.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5146]] /* vrNordic_g13.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5142]] /* vrNordic_g13.tOelMin PARAM */);
  threadData->lastEquationSolved = 12544;
}

/*
equation index: 12546
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.b[1] = vrNordic_g13.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12546};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5095]] /* vrNordic_g13.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5141]] /* vrNordic_g13.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12546;
}

/*
equation index: 12547
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.a[1] = vrNordic_g13.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5092]] /* vrNordic_g13.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5139]] /* vrNordic_g13.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12547;
}

/*
equation index: 12551
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.bb[1] = vrNordic_g13.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5097]] /* vrNordic_g13.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5095]] /* vrNordic_g13.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12551;
}

/*
equation index: 12552
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.bb[2] = vrNordic_g13.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12552};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5098]] /* vrNordic_g13.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5096]] /* vrNordic_g13.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12552;
}

/*
equation index: 12553
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.d = vrNordic_g13.leadLag.bb[1] / vrNordic_g13.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12553};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5099]] /* vrNordic_g13.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5097]] /* vrNordic_g13.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5092]] /* vrNordic_g13.leadLag.a[1] PARAM */),"vrNordic_g13.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12553;
}

/*
equation index: 12554
type: SIMPLE_ASSIGN
vrNordic_g13.leadLag.a_end = if vrNordic_g13.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g13.leadLag.a[1] ^ 2.0 + vrNordic_g13.leadLag.a[2] ^ 2.0) then vrNordic_g13.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12554};
  modelica_real tmp305;
  modelica_real tmp306;
  modelica_real tmp307;
  modelica_boolean tmp308;
  tmp305 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5092]] /* vrNordic_g13.leadLag.a[1] PARAM */);
  tmp306 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5093]] /* vrNordic_g13.leadLag.a[2] PARAM */);
  tmp307 = (tmp305 * tmp305) + (tmp306 * tmp306);
  if(!(tmp307 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g13.leadLag.a[1] ^ 2.0 + vrNordic_g13.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp307);
    }
  }tmp308 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5093]] /* vrNordic_g13.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp307)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5094]] /* vrNordic_g13.leadLag.a_end PARAM */) = (tmp308?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5093]] /* vrNordic_g13.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12554;
}

/*
equation index: 12558
type: SIMPLE_ASSIGN
goverNordic_g13.govKp.k = goverNordic_g13.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12558};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2701]] /* goverNordic_g13.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2687]] /* goverNordic_g13.Kp PARAM */);
  threadData->lastEquationSolved = 12558;
}

/*
equation index: 12559
type: SIMPLE_ASSIGN
goverNordic_g13.govKi.k = goverNordic_g13.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12559};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* goverNordic_g13.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2686]] /* goverNordic_g13.Ki PARAM */);
  threadData->lastEquationSolved = 12559;
}

/*
equation index: 12563
type: SIMPLE_ASSIGN
goverNordic_g13.dOmegaPlusDroop.k2 = goverNordic_g13.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12563};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2694]] /* goverNordic_g13.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2685]] /* goverNordic_g13.KSigma PARAM */);
  threadData->lastEquationSolved = 12563;
}

/*
equation index: 12566
type: SIMPLE_ASSIGN
goverNordic_g13.perUnitP.k = 100.0 / goverNordic_g13.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12566};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* goverNordic_g13.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2688]] /* goverNordic_g13.PNom PARAM */),"goverNordic_g13.PNom",equationIndexes);
  threadData->lastEquationSolved = 12566;
}

/*
equation index: 12567
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.DuMin = -goverNordic_g13.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12567};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2706]] /* goverNordic_g13.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* goverNordic_g13.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12567;
}

/*
equation index: 12568
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limiter.uMax = goverNordic_g13.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* goverNordic_g13.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12568;
}

/*
equation index: 12569
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limiter.uMin = goverNordic_g13.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12569};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* goverNordic_g13.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2706]] /* goverNordic_g13.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12569;
}

/*
equation index: 12573
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g13.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12573};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2710]] /* goverNordic_g13.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2717]] /* goverNordic_g13.limRateLimFirstOrder.tS PARAM */),"goverNordic_g13.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12573;
}

/*
equation index: 12574
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g13.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2708]] /* goverNordic_g13.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12574;
}

/*
equation index: 12575
type: SIMPLE_ASSIGN
goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g13.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12575};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2709]] /* goverNordic_g13.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12575;
}

/*
equation index: 12581
type: SIMPLE_ASSIGN
vrNordic_g14.derivative.k = vrNordic_g14.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12581};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5162]] /* vrNordic_g14.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5151]] /* vrNordic_g14.KPss PARAM */);
  threadData->lastEquationSolved = 12581;
}

/*
equation index: 12582
type: SIMPLE_ASSIGN
vrNordic_g14.derivative.T = vrNordic_g14.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12582};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5161]] /* vrNordic_g14.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5216]] /* vrNordic_g14.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12582;
}

/*
equation index: 12584
type: SIMPLE_ASSIGN
vrNordic_g14.derivative.zeroGain = abs(vrNordic_g14.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12584};
  modelica_boolean tmp309;
  tmp309 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5162]] /* vrNordic_g14.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1004]] /* vrNordic_g14.derivative.zeroGain PARAM */) = tmp309;
  threadData->lastEquationSolved = 12584;
}

/*
equation index: 12585
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.b[1] = vrNordic_g14.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12585};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5187]] /* vrNordic_g14.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5219]] /* vrNordic_g14.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12585;
}

/*
equation index: 12586
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.a[1] = vrNordic_g14.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12586};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5184]] /* vrNordic_g14.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5217]] /* vrNordic_g14.tLagPss PARAM */);
  threadData->lastEquationSolved = 12586;
}

/*
equation index: 12590
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.bb[1] = vrNordic_g14.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5189]] /* vrNordic_g14.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5187]] /* vrNordic_g14.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12590;
}

/*
equation index: 12591
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.bb[2] = vrNordic_g14.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5190]] /* vrNordic_g14.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5188]] /* vrNordic_g14.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12591;
}

/*
equation index: 12592
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.d = vrNordic_g14.leadLag1.bb[1] / vrNordic_g14.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12592};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5191]] /* vrNordic_g14.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5189]] /* vrNordic_g14.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5184]] /* vrNordic_g14.leadLag1.a[1] PARAM */),"vrNordic_g14.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12592;
}

/*
equation index: 12593
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.a_end = if vrNordic_g14.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g14.leadLag1.a[1] ^ 2.0 + vrNordic_g14.leadLag1.a[2] ^ 2.0) then vrNordic_g14.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12593};
  modelica_real tmp310;
  modelica_real tmp311;
  modelica_real tmp312;
  modelica_boolean tmp313;
  tmp310 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5184]] /* vrNordic_g14.leadLag1.a[1] PARAM */);
  tmp311 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5185]] /* vrNordic_g14.leadLag1.a[2] PARAM */);
  tmp312 = (tmp310 * tmp310) + (tmp311 * tmp311);
  if(!(tmp312 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g14.leadLag1.a[1] ^ 2.0 + vrNordic_g14.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp312);
    }
  }tmp313 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5185]] /* vrNordic_g14.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp312)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5186]] /* vrNordic_g14.leadLag1.a_end PARAM */) = (tmp313?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5185]] /* vrNordic_g14.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12593;
}

/*
equation index: 12594
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.X0[1] = if vrNordic_g14.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g14.leadLag1.u_start / vrNordic_g14.leadLag1.a_end else if vrNordic_g14.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g14.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g14.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12594};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5182]] /* vrNordic_g14.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[644]] /* vrNordic_g14.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5192]] /* vrNordic_g14.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5186]] /* vrNordic_g14.leadLag1.a_end PARAM */),"vrNordic_g14.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[644]] /* vrNordic_g14.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[644]] /* vrNordic_g14.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5193]] /* vrNordic_g14.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12594;
}

/*
equation index: 12595
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag1.Y0 = if vrNordic_g14.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g14.leadLag1.u_start * vrNordic_g14.leadLag1.b[2] / vrNordic_g14.leadLag1.a_end else if vrNordic_g14.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g14.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g14.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12595};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5183]] /* vrNordic_g14.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[644]] /* vrNordic_g14.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5192]] /* vrNordic_g14.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5188]] /* vrNordic_g14.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5186]] /* vrNordic_g14.leadLag1.a_end PARAM */),"vrNordic_g14.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[644]] /* vrNordic_g14.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[644]] /* vrNordic_g14.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5194]] /* vrNordic_g14.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12595;
}

/*
equation index: 12596
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.b[1] = vrNordic_g14.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5200]] /* vrNordic_g14.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5219]] /* vrNordic_g14.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12596;
}

/*
equation index: 12597
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.a[1] = vrNordic_g14.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5197]] /* vrNordic_g14.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5217]] /* vrNordic_g14.tLagPss PARAM */);
  threadData->lastEquationSolved = 12597;
}

/*
equation index: 12601
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.bb[1] = vrNordic_g14.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12601};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5202]] /* vrNordic_g14.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5200]] /* vrNordic_g14.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12601;
}

/*
equation index: 12602
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.bb[2] = vrNordic_g14.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5203]] /* vrNordic_g14.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5201]] /* vrNordic_g14.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12602;
}

/*
equation index: 12603
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.d = vrNordic_g14.leadLag2.bb[1] / vrNordic_g14.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12603};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5204]] /* vrNordic_g14.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5202]] /* vrNordic_g14.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5197]] /* vrNordic_g14.leadLag2.a[1] PARAM */),"vrNordic_g14.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12603;
}

/*
equation index: 12604
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.a_end = if vrNordic_g14.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g14.leadLag2.a[1] ^ 2.0 + vrNordic_g14.leadLag2.a[2] ^ 2.0) then vrNordic_g14.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12604};
  modelica_real tmp314;
  modelica_real tmp315;
  modelica_real tmp316;
  modelica_boolean tmp317;
  tmp314 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5197]] /* vrNordic_g14.leadLag2.a[1] PARAM */);
  tmp315 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5198]] /* vrNordic_g14.leadLag2.a[2] PARAM */);
  tmp316 = (tmp314 * tmp314) + (tmp315 * tmp315);
  if(!(tmp316 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g14.leadLag2.a[1] ^ 2.0 + vrNordic_g14.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp316);
    }
  }tmp317 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5198]] /* vrNordic_g14.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp316)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5199]] /* vrNordic_g14.leadLag2.a_end PARAM */) = (tmp317?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5198]] /* vrNordic_g14.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12604;
}

/*
equation index: 12605
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.X0[1] = if vrNordic_g14.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g14.leadLag2.u_start / vrNordic_g14.leadLag2.a_end else if vrNordic_g14.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g14.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g14.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12605};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5195]] /* vrNordic_g14.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[648]] /* vrNordic_g14.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5205]] /* vrNordic_g14.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5199]] /* vrNordic_g14.leadLag2.a_end PARAM */),"vrNordic_g14.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[648]] /* vrNordic_g14.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[648]] /* vrNordic_g14.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5206]] /* vrNordic_g14.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12605;
}

/*
equation index: 12606
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag2.Y0 = if vrNordic_g14.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g14.leadLag2.u_start * vrNordic_g14.leadLag2.b[2] / vrNordic_g14.leadLag2.a_end else if vrNordic_g14.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g14.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g14.leadLag2.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12606};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5196]] /* vrNordic_g14.leadLag2.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[648]] /* vrNordic_g14.leadLag2.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5205]] /* vrNordic_g14.leadLag2.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5201]] /* vrNordic_g14.leadLag2.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5199]] /* vrNordic_g14.leadLag2.a_end PARAM */),"vrNordic_g14.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[648]] /* vrNordic_g14.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[648]] /* vrNordic_g14.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5207]] /* vrNordic_g14.leadLag2.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12606;
}

/*
equation index: 12607
type: SIMPLE_ASSIGN
vrNordic_g14.limiter.uMin = -vrNordic_g14.limiter.uMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12607};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5213]] /* vrNordic_g14.limiter.uMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5212]] /* vrNordic_g14.limiter.uMax PARAM */));
  threadData->lastEquationSolved = 12607;
}

/*
equation index: 12611
type: SIMPLE_ASSIGN
vrNordic_g14.const2.k = vrNordic_g14.IrLimPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12611};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5160]] /* vrNordic_g14.const2.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5150]] /* vrNordic_g14.IrLimPu PARAM */);
  threadData->lastEquationSolved = 12611;
}

/*
equation index: 12612
type: SIMPLE_ASSIGN
vrNordic_g14.kMulDU.k = vrNordic_g14.KTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12612};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5168]] /* vrNordic_g14.kMulDU.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5152]] /* vrNordic_g14.KTgr PARAM */);
  threadData->lastEquationSolved = 12612;
}

/*
equation index: 12613
type: SIMPLE_ASSIGN
vrNordic_g14.overExcitationLimitation.OelMode = vrNordic_g14.OelMode
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12613};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5214]] /* vrNordic_g14.overExcitationLimitation.OelMode PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5153]] /* vrNordic_g14.OelMode PARAM */);
  threadData->lastEquationSolved = 12613;
}

/*
equation index: 12614
type: SIMPLE_ASSIGN
vrNordic_g14.limIntegrator.outMax = vrNordic_g14.EfdMaxPu
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12614};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5209]] /* vrNordic_g14.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5148]] /* vrNordic_g14.EfdMaxPu PARAM */);
  threadData->lastEquationSolved = 12614;
}

/*
equation index: 12620
type: SIMPLE_ASSIGN
vrNordic_g14.timer.outMin = vrNordic_g14.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12620};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5224]] /* vrNordic_g14.timer.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5221]] /* vrNordic_g14.tOelMin PARAM */);
  threadData->lastEquationSolved = 12620;
}

/*
equation index: 12625
type: SIMPLE_ASSIGN
vrNordic_g14.timer.y_start = vrNordic_g14.tOelMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5225]] /* vrNordic_g14.timer.y_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5221]] /* vrNordic_g14.tOelMin PARAM */);
  threadData->lastEquationSolved = 12625;
}

/*
equation index: 12627
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.b[1] = vrNordic_g14.tLeadTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5174]] /* vrNordic_g14.leadLag.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5220]] /* vrNordic_g14.tLeadTgr PARAM */);
  threadData->lastEquationSolved = 12627;
}

/*
equation index: 12628
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.a[1] = vrNordic_g14.tLagTgr
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12628};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5171]] /* vrNordic_g14.leadLag.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5218]] /* vrNordic_g14.tLagTgr PARAM */);
  threadData->lastEquationSolved = 12628;
}

/*
equation index: 12632
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.bb[1] = vrNordic_g14.leadLag.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12632};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5176]] /* vrNordic_g14.leadLag.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5174]] /* vrNordic_g14.leadLag.b[1] PARAM */);
  threadData->lastEquationSolved = 12632;
}

/*
equation index: 12633
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.bb[2] = vrNordic_g14.leadLag.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12633};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5177]] /* vrNordic_g14.leadLag.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5175]] /* vrNordic_g14.leadLag.b[2] PARAM */);
  threadData->lastEquationSolved = 12633;
}

/*
equation index: 12634
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.d = vrNordic_g14.leadLag.bb[1] / vrNordic_g14.leadLag.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12634};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5178]] /* vrNordic_g14.leadLag.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5176]] /* vrNordic_g14.leadLag.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5171]] /* vrNordic_g14.leadLag.a[1] PARAM */),"vrNordic_g14.leadLag.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12634;
}

/*
equation index: 12635
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.a_end = if vrNordic_g14.leadLag.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g14.leadLag.a[1] ^ 2.0 + vrNordic_g14.leadLag.a[2] ^ 2.0) then vrNordic_g14.leadLag.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12635};
  modelica_real tmp318;
  modelica_real tmp319;
  modelica_real tmp320;
  modelica_boolean tmp321;
  tmp318 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5171]] /* vrNordic_g14.leadLag.a[1] PARAM */);
  tmp319 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5172]] /* vrNordic_g14.leadLag.a[2] PARAM */);
  tmp320 = (tmp318 * tmp318) + (tmp319 * tmp319);
  if(!(tmp320 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g14.leadLag.a[1] ^ 2.0 + vrNordic_g14.leadLag.a[2] ^ 2.0) was %g should be >= 0", tmp320);
    }
  }tmp321 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5172]] /* vrNordic_g14.leadLag.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp320)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5173]] /* vrNordic_g14.leadLag.a_end PARAM */) = (tmp321?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5172]] /* vrNordic_g14.leadLag.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12635;
}

/*
equation index: 12639
type: SIMPLE_ASSIGN
goverNordic_g14.govKp.k = goverNordic_g14.Kp
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2737]] /* goverNordic_g14.govKp.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* goverNordic_g14.Kp PARAM */);
  threadData->lastEquationSolved = 12639;
}

/*
equation index: 12640
type: SIMPLE_ASSIGN
goverNordic_g14.govKi.k = goverNordic_g14.Ki
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2736]] /* goverNordic_g14.govKi.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2722]] /* goverNordic_g14.Ki PARAM */);
  threadData->lastEquationSolved = 12640;
}

/*
equation index: 12644
type: SIMPLE_ASSIGN
goverNordic_g14.dOmegaPlusDroop.k2 = goverNordic_g14.KSigma
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12644};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2730]] /* goverNordic_g14.dOmegaPlusDroop.k2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2721]] /* goverNordic_g14.KSigma PARAM */);
  threadData->lastEquationSolved = 12644;
}

/*
equation index: 12647
type: SIMPLE_ASSIGN
goverNordic_g14.perUnitP.k = 100.0 / goverNordic_g14.PNom
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12647};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2754]] /* goverNordic_g14.perUnitP.k PARAM */) = DIVISION_SIM(100.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2724]] /* goverNordic_g14.PNom PARAM */),"goverNordic_g14.PNom",equationIndexes);
  threadData->lastEquationSolved = 12647;
}

/*
equation index: 12648
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.DuMin = -goverNordic_g14.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2742]] /* goverNordic_g14.limRateLimFirstOrder.DuMin PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2741]] /* goverNordic_g14.limRateLimFirstOrder.DuMax PARAM */));
  threadData->lastEquationSolved = 12648;
}

/*
equation index: 12649
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limiter.uMax = goverNordic_g14.limRateLimFirstOrder.DuMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12649};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2741]] /* goverNordic_g14.limRateLimFirstOrder.DuMax PARAM */);
  threadData->lastEquationSolved = 12649;
}

/*
equation index: 12650
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limiter.uMin = goverNordic_g14.limRateLimFirstOrder.DuMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12650};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* goverNordic_g14.limRateLimFirstOrder.limiter.uMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2742]] /* goverNordic_g14.limRateLimFirstOrder.DuMin PARAM */);
  threadData->lastEquationSolved = 12650;
}

/*
equation index: 12654
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.gain.k = 1.0 / goverNordic_g14.limRateLimFirstOrder.tS
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12654};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* goverNordic_g14.limRateLimFirstOrder.gain.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2753]] /* goverNordic_g14.limRateLimFirstOrder.tS PARAM */),"goverNordic_g14.limRateLimFirstOrder.tS",equationIndexes);
  threadData->lastEquationSolved = 12654;
}

/*
equation index: 12655
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax = goverNordic_g14.limRateLimFirstOrder.YMax
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12655};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2744]] /* goverNordic_g14.limRateLimFirstOrder.YMax PARAM */);
  threadData->lastEquationSolved = 12655;
}

/*
equation index: 12656
type: SIMPLE_ASSIGN
goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin = goverNordic_g14.limRateLimFirstOrder.YMin
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12656};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2745]] /* goverNordic_g14.limRateLimFirstOrder.YMin PARAM */);
  threadData->lastEquationSolved = 12656;
}

/*
equation index: 12662
type: SIMPLE_ASSIGN
vrNordic_g15.derivative.k = vrNordic_g15.KPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12662};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5241]] /* vrNordic_g15.derivative.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5230]] /* vrNordic_g15.KPss PARAM */);
  threadData->lastEquationSolved = 12662;
}

/*
equation index: 12663
type: SIMPLE_ASSIGN
vrNordic_g15.derivative.T = vrNordic_g15.tDerOmega
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12663};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5240]] /* vrNordic_g15.derivative.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5295]] /* vrNordic_g15.tDerOmega PARAM */);
  threadData->lastEquationSolved = 12663;
}

/*
equation index: 12665
type: SIMPLE_ASSIGN
vrNordic_g15.derivative.zeroGain = abs(vrNordic_g15.derivative.k) < 2.220446049250313e-16
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12665};
  modelica_boolean tmp322;
  tmp322 = Less(fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5241]] /* vrNordic_g15.derivative.k PARAM */)),2.220446049250313e-16);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1015]] /* vrNordic_g15.derivative.zeroGain PARAM */) = tmp322;
  threadData->lastEquationSolved = 12665;
}

/*
equation index: 12666
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.b[1] = vrNordic_g15.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12666};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5266]] /* vrNordic_g15.leadLag1.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5298]] /* vrNordic_g15.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12666;
}

/*
equation index: 12667
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.a[1] = vrNordic_g15.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12667};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5263]] /* vrNordic_g15.leadLag1.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5296]] /* vrNordic_g15.tLagPss PARAM */);
  threadData->lastEquationSolved = 12667;
}

/*
equation index: 12671
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.bb[1] = vrNordic_g15.leadLag1.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12671};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5268]] /* vrNordic_g15.leadLag1.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5266]] /* vrNordic_g15.leadLag1.b[1] PARAM */);
  threadData->lastEquationSolved = 12671;
}

/*
equation index: 12672
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.bb[2] = vrNordic_g15.leadLag1.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12672};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5269]] /* vrNordic_g15.leadLag1.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5267]] /* vrNordic_g15.leadLag1.b[2] PARAM */);
  threadData->lastEquationSolved = 12672;
}

/*
equation index: 12673
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.d = vrNordic_g15.leadLag1.bb[1] / vrNordic_g15.leadLag1.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12673};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5270]] /* vrNordic_g15.leadLag1.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5268]] /* vrNordic_g15.leadLag1.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5263]] /* vrNordic_g15.leadLag1.a[1] PARAM */),"vrNordic_g15.leadLag1.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12673;
}

/*
equation index: 12674
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.a_end = if vrNordic_g15.leadLag1.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g15.leadLag1.a[1] ^ 2.0 + vrNordic_g15.leadLag1.a[2] ^ 2.0) then vrNordic_g15.leadLag1.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12674};
  modelica_real tmp323;
  modelica_real tmp324;
  modelica_real tmp325;
  modelica_boolean tmp326;
  tmp323 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5263]] /* vrNordic_g15.leadLag1.a[1] PARAM */);
  tmp324 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5264]] /* vrNordic_g15.leadLag1.a[2] PARAM */);
  tmp325 = (tmp323 * tmp323) + (tmp324 * tmp324);
  if(!(tmp325 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g15.leadLag1.a[1] ^ 2.0 + vrNordic_g15.leadLag1.a[2] ^ 2.0) was %g should be >= 0", tmp325);
    }
  }tmp326 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5264]] /* vrNordic_g15.leadLag1.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp325)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5265]] /* vrNordic_g15.leadLag1.a_end PARAM */) = (tmp326?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5264]] /* vrNordic_g15.leadLag1.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12674;
}

/*
equation index: 12675
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.X0[1] = if vrNordic_g15.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g15.leadLag1.u_start / vrNordic_g15.leadLag1.a_end else if vrNordic_g15.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g15.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g15.leadLag1.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12675};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5261]] /* vrNordic_g15.leadLag1.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[660]] /* vrNordic_g15.leadLag1.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5271]] /* vrNordic_g15.leadLag1.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5265]] /* vrNordic_g15.leadLag1.a_end PARAM */),"vrNordic_g15.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[660]] /* vrNordic_g15.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[660]] /* vrNordic_g15.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5272]] /* vrNordic_g15.leadLag1.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12675;
}

/*
equation index: 12676
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag1.Y0 = if vrNordic_g15.leadLag1.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g15.leadLag1.u_start * vrNordic_g15.leadLag1.b[2] / vrNordic_g15.leadLag1.a_end else if vrNordic_g15.leadLag1.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g15.leadLag1.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g15.leadLag1.y_start else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5262]] /* vrNordic_g15.leadLag1.Y0 PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[660]] /* vrNordic_g15.leadLag1.initType PARAM */) == 2)?DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5271]] /* vrNordic_g15.leadLag1.u_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5267]] /* vrNordic_g15.leadLag1.b[2] PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5265]] /* vrNordic_g15.leadLag1.a_end PARAM */),"vrNordic_g15.leadLag1.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[660]] /* vrNordic_g15.leadLag1.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[660]] /* vrNordic_g15.leadLag1.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5273]] /* vrNordic_g15.leadLag1.y_start PARAM */):0.0));
  threadData->lastEquationSolved = 12676;
}

/*
equation index: 12677
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.b[1] = vrNordic_g15.tLeadPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5279]] /* vrNordic_g15.leadLag2.b[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5298]] /* vrNordic_g15.tLeadPss PARAM */);
  threadData->lastEquationSolved = 12677;
}

/*
equation index: 12678
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.a[1] = vrNordic_g15.tLagPss
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12678};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5276]] /* vrNordic_g15.leadLag2.a[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5296]] /* vrNordic_g15.tLagPss PARAM */);
  threadData->lastEquationSolved = 12678;
}

/*
equation index: 12682
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.bb[1] = vrNordic_g15.leadLag2.b[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12682};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5281]] /* vrNordic_g15.leadLag2.bb[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5279]] /* vrNordic_g15.leadLag2.b[1] PARAM */);
  threadData->lastEquationSolved = 12682;
}

/*
equation index: 12683
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.bb[2] = vrNordic_g15.leadLag2.b[2]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12683};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5282]] /* vrNordic_g15.leadLag2.bb[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5280]] /* vrNordic_g15.leadLag2.b[2] PARAM */);
  threadData->lastEquationSolved = 12683;
}

/*
equation index: 12684
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.d = vrNordic_g15.leadLag2.bb[1] / vrNordic_g15.leadLag2.a[1]
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12684};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5283]] /* vrNordic_g15.leadLag2.d PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5281]] /* vrNordic_g15.leadLag2.bb[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5276]] /* vrNordic_g15.leadLag2.a[1] PARAM */),"vrNordic_g15.leadLag2.a[1]",equationIndexes);
  threadData->lastEquationSolved = 12684;
}

/*
equation index: 12685
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.a_end = if vrNordic_g15.leadLag2.a[2] > 2.220446049250313e-14 * sqrt(vrNordic_g15.leadLag2.a[1] ^ 2.0 + vrNordic_g15.leadLag2.a[2] ^ 2.0) then vrNordic_g15.leadLag2.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12685};
  modelica_real tmp327;
  modelica_real tmp328;
  modelica_real tmp329;
  modelica_boolean tmp330;
  tmp327 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5276]] /* vrNordic_g15.leadLag2.a[1] PARAM */);
  tmp328 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5277]] /* vrNordic_g15.leadLag2.a[2] PARAM */);
  tmp329 = (tmp327 * tmp327) + (tmp328 * tmp328);
  if(!(tmp329 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(vrNordic_g15.leadLag2.a[1] ^ 2.0 + vrNordic_g15.leadLag2.a[2] ^ 2.0) was %g should be >= 0", tmp329);
    }
  }tmp330 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5277]] /* vrNordic_g15.leadLag2.a[2] PARAM */),(2.220446049250313e-14) * (sqrt(tmp329)));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5278]] /* vrNordic_g15.leadLag2.a_end PARAM */) = (tmp330?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5277]] /* vrNordic_g15.leadLag2.a[2] PARAM */):1.0);
  threadData->lastEquationSolved = 12685;
}

/*
equation index: 12686
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag2.X0[1] = if vrNordic_g15.leadLag2.initType == Modelica.Blocks.Types.Init.SteadyState then vrNordic_g15.leadLag2.u_start / vrNordic_g15.leadLag2.a_end else if vrNordic_g15.leadLag2.initType == Modelica.Blocks.Types.Init.InitialState or vrNordic_g15.leadLag2.initType == Modelica.Blocks.Types.Init.InitialOutput then vrNordic_g15.leadLag2.x_start[1] else 0.0
*/
OMC_DISABLE_OPT
static void MyNordic_initialized_TestCase_initialized_eqFunction_12686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12686};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5274]] /* vrNordic_g15.leadLag2.X0[1] PARAM */) = (((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[664]] /* vrNordic_g15.leadLag2.initType PARAM */) == 2)?DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5284]] /* vrNordic_g15.leadLag2.u_start PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5278]] /* vrNordic_g15.leadLag2.a_end PARAM */),"vrNordic_g15.leadLag2.a_end",equationIndexes):((((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[664]] /* vrNordic_g15.leadLag2.initType PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[664]] /* vrNordic_g15.leadLag2.initType PARAM */) == 4))?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5285]] /* vrNordic_g15.leadLag2.x_start[1] PARAM */):0.0));
  threadData->lastEquationSolved = 12686;
}
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_updateBoundParameters_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[415])(DATA*, threadData_t*) = {
    MyNordic_initialized_TestCase_initialized_eqFunction_11885,
    MyNordic_initialized_TestCase_initialized_eqFunction_11891,
    MyNordic_initialized_TestCase_initialized_eqFunction_11896,
    MyNordic_initialized_TestCase_initialized_eqFunction_11898,
    MyNordic_initialized_TestCase_initialized_eqFunction_11899,
    MyNordic_initialized_TestCase_initialized_eqFunction_11903,
    MyNordic_initialized_TestCase_initialized_eqFunction_11904,
    MyNordic_initialized_TestCase_initialized_eqFunction_11905,
    MyNordic_initialized_TestCase_initialized_eqFunction_11906,
    MyNordic_initialized_TestCase_initialized_eqFunction_11910,
    MyNordic_initialized_TestCase_initialized_eqFunction_11911,
    MyNordic_initialized_TestCase_initialized_eqFunction_11915,
    MyNordic_initialized_TestCase_initialized_eqFunction_11918,
    MyNordic_initialized_TestCase_initialized_eqFunction_11919,
    MyNordic_initialized_TestCase_initialized_eqFunction_11920,
    MyNordic_initialized_TestCase_initialized_eqFunction_11921,
    MyNordic_initialized_TestCase_initialized_eqFunction_11925,
    MyNordic_initialized_TestCase_initialized_eqFunction_11926,
    MyNordic_initialized_TestCase_initialized_eqFunction_11927,
    MyNordic_initialized_TestCase_initialized_eqFunction_11933,
    MyNordic_initialized_TestCase_initialized_eqFunction_11934,
    MyNordic_initialized_TestCase_initialized_eqFunction_11936,
    MyNordic_initialized_TestCase_initialized_eqFunction_11937,
    MyNordic_initialized_TestCase_initialized_eqFunction_11938,
    MyNordic_initialized_TestCase_initialized_eqFunction_11942,
    MyNordic_initialized_TestCase_initialized_eqFunction_11943,
    MyNordic_initialized_TestCase_initialized_eqFunction_11944,
    MyNordic_initialized_TestCase_initialized_eqFunction_11945,
    MyNordic_initialized_TestCase_initialized_eqFunction_11946,
    MyNordic_initialized_TestCase_initialized_eqFunction_11947,
    MyNordic_initialized_TestCase_initialized_eqFunction_11948,
    MyNordic_initialized_TestCase_initialized_eqFunction_11949,
    MyNordic_initialized_TestCase_initialized_eqFunction_11953,
    MyNordic_initialized_TestCase_initialized_eqFunction_11954,
    MyNordic_initialized_TestCase_initialized_eqFunction_11955,
    MyNordic_initialized_TestCase_initialized_eqFunction_11956,
    MyNordic_initialized_TestCase_initialized_eqFunction_11957,
    MyNordic_initialized_TestCase_initialized_eqFunction_11958,
    MyNordic_initialized_TestCase_initialized_eqFunction_11959,
    MyNordic_initialized_TestCase_initialized_eqFunction_11963,
    MyNordic_initialized_TestCase_initialized_eqFunction_11964,
    MyNordic_initialized_TestCase_initialized_eqFunction_11965,
    MyNordic_initialized_TestCase_initialized_eqFunction_11966,
    MyNordic_initialized_TestCase_initialized_eqFunction_11972,
    MyNordic_initialized_TestCase_initialized_eqFunction_11977,
    MyNordic_initialized_TestCase_initialized_eqFunction_11979,
    MyNordic_initialized_TestCase_initialized_eqFunction_11980,
    MyNordic_initialized_TestCase_initialized_eqFunction_11984,
    MyNordic_initialized_TestCase_initialized_eqFunction_11985,
    MyNordic_initialized_TestCase_initialized_eqFunction_11986,
    MyNordic_initialized_TestCase_initialized_eqFunction_11987,
    MyNordic_initialized_TestCase_initialized_eqFunction_11991,
    MyNordic_initialized_TestCase_initialized_eqFunction_11992,
    MyNordic_initialized_TestCase_initialized_eqFunction_11996,
    MyNordic_initialized_TestCase_initialized_eqFunction_11999,
    MyNordic_initialized_TestCase_initialized_eqFunction_12000,
    MyNordic_initialized_TestCase_initialized_eqFunction_12001,
    MyNordic_initialized_TestCase_initialized_eqFunction_12002,
    MyNordic_initialized_TestCase_initialized_eqFunction_12006,
    MyNordic_initialized_TestCase_initialized_eqFunction_12007,
    MyNordic_initialized_TestCase_initialized_eqFunction_12008,
    MyNordic_initialized_TestCase_initialized_eqFunction_12014,
    MyNordic_initialized_TestCase_initialized_eqFunction_12015,
    MyNordic_initialized_TestCase_initialized_eqFunction_12017,
    MyNordic_initialized_TestCase_initialized_eqFunction_12018,
    MyNordic_initialized_TestCase_initialized_eqFunction_12019,
    MyNordic_initialized_TestCase_initialized_eqFunction_12023,
    MyNordic_initialized_TestCase_initialized_eqFunction_12024,
    MyNordic_initialized_TestCase_initialized_eqFunction_12025,
    MyNordic_initialized_TestCase_initialized_eqFunction_12026,
    MyNordic_initialized_TestCase_initialized_eqFunction_12027,
    MyNordic_initialized_TestCase_initialized_eqFunction_12028,
    MyNordic_initialized_TestCase_initialized_eqFunction_12029,
    MyNordic_initialized_TestCase_initialized_eqFunction_12030,
    MyNordic_initialized_TestCase_initialized_eqFunction_12034,
    MyNordic_initialized_TestCase_initialized_eqFunction_12035,
    MyNordic_initialized_TestCase_initialized_eqFunction_12036,
    MyNordic_initialized_TestCase_initialized_eqFunction_12037,
    MyNordic_initialized_TestCase_initialized_eqFunction_12038,
    MyNordic_initialized_TestCase_initialized_eqFunction_12039,
    MyNordic_initialized_TestCase_initialized_eqFunction_12040,
    MyNordic_initialized_TestCase_initialized_eqFunction_12044,
    MyNordic_initialized_TestCase_initialized_eqFunction_12045,
    MyNordic_initialized_TestCase_initialized_eqFunction_12046,
    MyNordic_initialized_TestCase_initialized_eqFunction_12047,
    MyNordic_initialized_TestCase_initialized_eqFunction_12053,
    MyNordic_initialized_TestCase_initialized_eqFunction_12058,
    MyNordic_initialized_TestCase_initialized_eqFunction_12060,
    MyNordic_initialized_TestCase_initialized_eqFunction_12061,
    MyNordic_initialized_TestCase_initialized_eqFunction_12065,
    MyNordic_initialized_TestCase_initialized_eqFunction_12066,
    MyNordic_initialized_TestCase_initialized_eqFunction_12067,
    MyNordic_initialized_TestCase_initialized_eqFunction_12068,
    MyNordic_initialized_TestCase_initialized_eqFunction_12072,
    MyNordic_initialized_TestCase_initialized_eqFunction_12073,
    MyNordic_initialized_TestCase_initialized_eqFunction_12077,
    MyNordic_initialized_TestCase_initialized_eqFunction_12080,
    MyNordic_initialized_TestCase_initialized_eqFunction_12081,
    MyNordic_initialized_TestCase_initialized_eqFunction_12082,
    MyNordic_initialized_TestCase_initialized_eqFunction_12083,
    MyNordic_initialized_TestCase_initialized_eqFunction_12087,
    MyNordic_initialized_TestCase_initialized_eqFunction_12088,
    MyNordic_initialized_TestCase_initialized_eqFunction_12089,
    MyNordic_initialized_TestCase_initialized_eqFunction_12095,
    MyNordic_initialized_TestCase_initialized_eqFunction_12096,
    MyNordic_initialized_TestCase_initialized_eqFunction_12098,
    MyNordic_initialized_TestCase_initialized_eqFunction_12099,
    MyNordic_initialized_TestCase_initialized_eqFunction_12100,
    MyNordic_initialized_TestCase_initialized_eqFunction_12104,
    MyNordic_initialized_TestCase_initialized_eqFunction_12105,
    MyNordic_initialized_TestCase_initialized_eqFunction_12106,
    MyNordic_initialized_TestCase_initialized_eqFunction_12107,
    MyNordic_initialized_TestCase_initialized_eqFunction_12108,
    MyNordic_initialized_TestCase_initialized_eqFunction_12109,
    MyNordic_initialized_TestCase_initialized_eqFunction_12110,
    MyNordic_initialized_TestCase_initialized_eqFunction_12111,
    MyNordic_initialized_TestCase_initialized_eqFunction_12115,
    MyNordic_initialized_TestCase_initialized_eqFunction_12116,
    MyNordic_initialized_TestCase_initialized_eqFunction_12117,
    MyNordic_initialized_TestCase_initialized_eqFunction_12118,
    MyNordic_initialized_TestCase_initialized_eqFunction_12119,
    MyNordic_initialized_TestCase_initialized_eqFunction_12120,
    MyNordic_initialized_TestCase_initialized_eqFunction_12121,
    MyNordic_initialized_TestCase_initialized_eqFunction_12125,
    MyNordic_initialized_TestCase_initialized_eqFunction_12126,
    MyNordic_initialized_TestCase_initialized_eqFunction_12127,
    MyNordic_initialized_TestCase_initialized_eqFunction_12128,
    MyNordic_initialized_TestCase_initialized_eqFunction_12134,
    MyNordic_initialized_TestCase_initialized_eqFunction_12139,
    MyNordic_initialized_TestCase_initialized_eqFunction_12141,
    MyNordic_initialized_TestCase_initialized_eqFunction_12142,
    MyNordic_initialized_TestCase_initialized_eqFunction_12146,
    MyNordic_initialized_TestCase_initialized_eqFunction_12147,
    MyNordic_initialized_TestCase_initialized_eqFunction_12148,
    MyNordic_initialized_TestCase_initialized_eqFunction_12149,
    MyNordic_initialized_TestCase_initialized_eqFunction_12153,
    MyNordic_initialized_TestCase_initialized_eqFunction_12154,
    MyNordic_initialized_TestCase_initialized_eqFunction_12158,
    MyNordic_initialized_TestCase_initialized_eqFunction_12161,
    MyNordic_initialized_TestCase_initialized_eqFunction_12162,
    MyNordic_initialized_TestCase_initialized_eqFunction_12163,
    MyNordic_initialized_TestCase_initialized_eqFunction_12164,
    MyNordic_initialized_TestCase_initialized_eqFunction_12168,
    MyNordic_initialized_TestCase_initialized_eqFunction_12169,
    MyNordic_initialized_TestCase_initialized_eqFunction_12170,
    MyNordic_initialized_TestCase_initialized_eqFunction_12176,
    MyNordic_initialized_TestCase_initialized_eqFunction_12177,
    MyNordic_initialized_TestCase_initialized_eqFunction_12179,
    MyNordic_initialized_TestCase_initialized_eqFunction_12180,
    MyNordic_initialized_TestCase_initialized_eqFunction_12181,
    MyNordic_initialized_TestCase_initialized_eqFunction_12185,
    MyNordic_initialized_TestCase_initialized_eqFunction_12186,
    MyNordic_initialized_TestCase_initialized_eqFunction_12187,
    MyNordic_initialized_TestCase_initialized_eqFunction_12188,
    MyNordic_initialized_TestCase_initialized_eqFunction_12189,
    MyNordic_initialized_TestCase_initialized_eqFunction_12190,
    MyNordic_initialized_TestCase_initialized_eqFunction_12191,
    MyNordic_initialized_TestCase_initialized_eqFunction_12192,
    MyNordic_initialized_TestCase_initialized_eqFunction_12196,
    MyNordic_initialized_TestCase_initialized_eqFunction_12197,
    MyNordic_initialized_TestCase_initialized_eqFunction_12198,
    MyNordic_initialized_TestCase_initialized_eqFunction_12199,
    MyNordic_initialized_TestCase_initialized_eqFunction_12200,
    MyNordic_initialized_TestCase_initialized_eqFunction_12201,
    MyNordic_initialized_TestCase_initialized_eqFunction_12202,
    MyNordic_initialized_TestCase_initialized_eqFunction_12206,
    MyNordic_initialized_TestCase_initialized_eqFunction_12207,
    MyNordic_initialized_TestCase_initialized_eqFunction_12208,
    MyNordic_initialized_TestCase_initialized_eqFunction_12209,
    MyNordic_initialized_TestCase_initialized_eqFunction_12215,
    MyNordic_initialized_TestCase_initialized_eqFunction_12220,
    MyNordic_initialized_TestCase_initialized_eqFunction_12222,
    MyNordic_initialized_TestCase_initialized_eqFunction_12223,
    MyNordic_initialized_TestCase_initialized_eqFunction_12227,
    MyNordic_initialized_TestCase_initialized_eqFunction_12228,
    MyNordic_initialized_TestCase_initialized_eqFunction_12229,
    MyNordic_initialized_TestCase_initialized_eqFunction_12230,
    MyNordic_initialized_TestCase_initialized_eqFunction_12234,
    MyNordic_initialized_TestCase_initialized_eqFunction_12235,
    MyNordic_initialized_TestCase_initialized_eqFunction_12239,
    MyNordic_initialized_TestCase_initialized_eqFunction_12242,
    MyNordic_initialized_TestCase_initialized_eqFunction_12243,
    MyNordic_initialized_TestCase_initialized_eqFunction_12244,
    MyNordic_initialized_TestCase_initialized_eqFunction_12245,
    MyNordic_initialized_TestCase_initialized_eqFunction_12249,
    MyNordic_initialized_TestCase_initialized_eqFunction_12250,
    MyNordic_initialized_TestCase_initialized_eqFunction_12251,
    MyNordic_initialized_TestCase_initialized_eqFunction_12257,
    MyNordic_initialized_TestCase_initialized_eqFunction_12258,
    MyNordic_initialized_TestCase_initialized_eqFunction_12260,
    MyNordic_initialized_TestCase_initialized_eqFunction_12261,
    MyNordic_initialized_TestCase_initialized_eqFunction_12262,
    MyNordic_initialized_TestCase_initialized_eqFunction_12266,
    MyNordic_initialized_TestCase_initialized_eqFunction_12267,
    MyNordic_initialized_TestCase_initialized_eqFunction_12268,
    MyNordic_initialized_TestCase_initialized_eqFunction_12269,
    MyNordic_initialized_TestCase_initialized_eqFunction_12270,
    MyNordic_initialized_TestCase_initialized_eqFunction_12271,
    MyNordic_initialized_TestCase_initialized_eqFunction_12272,
    MyNordic_initialized_TestCase_initialized_eqFunction_12273,
    MyNordic_initialized_TestCase_initialized_eqFunction_12277,
    MyNordic_initialized_TestCase_initialized_eqFunction_12278,
    MyNordic_initialized_TestCase_initialized_eqFunction_12279,
    MyNordic_initialized_TestCase_initialized_eqFunction_12280,
    MyNordic_initialized_TestCase_initialized_eqFunction_12281,
    MyNordic_initialized_TestCase_initialized_eqFunction_12282,
    MyNordic_initialized_TestCase_initialized_eqFunction_12283,
    MyNordic_initialized_TestCase_initialized_eqFunction_12287,
    MyNordic_initialized_TestCase_initialized_eqFunction_12288,
    MyNordic_initialized_TestCase_initialized_eqFunction_12289,
    MyNordic_initialized_TestCase_initialized_eqFunction_12290,
    MyNordic_initialized_TestCase_initialized_eqFunction_12296,
    MyNordic_initialized_TestCase_initialized_eqFunction_12301,
    MyNordic_initialized_TestCase_initialized_eqFunction_12303,
    MyNordic_initialized_TestCase_initialized_eqFunction_12304,
    MyNordic_initialized_TestCase_initialized_eqFunction_12308,
    MyNordic_initialized_TestCase_initialized_eqFunction_12309,
    MyNordic_initialized_TestCase_initialized_eqFunction_12310,
    MyNordic_initialized_TestCase_initialized_eqFunction_12311,
    MyNordic_initialized_TestCase_initialized_eqFunction_12315,
    MyNordic_initialized_TestCase_initialized_eqFunction_12316,
    MyNordic_initialized_TestCase_initialized_eqFunction_12320,
    MyNordic_initialized_TestCase_initialized_eqFunction_12323,
    MyNordic_initialized_TestCase_initialized_eqFunction_12324,
    MyNordic_initialized_TestCase_initialized_eqFunction_12325,
    MyNordic_initialized_TestCase_initialized_eqFunction_12326,
    MyNordic_initialized_TestCase_initialized_eqFunction_12330,
    MyNordic_initialized_TestCase_initialized_eqFunction_12331,
    MyNordic_initialized_TestCase_initialized_eqFunction_12332,
    MyNordic_initialized_TestCase_initialized_eqFunction_12338,
    MyNordic_initialized_TestCase_initialized_eqFunction_12339,
    MyNordic_initialized_TestCase_initialized_eqFunction_12341,
    MyNordic_initialized_TestCase_initialized_eqFunction_12342,
    MyNordic_initialized_TestCase_initialized_eqFunction_12343,
    MyNordic_initialized_TestCase_initialized_eqFunction_12347,
    MyNordic_initialized_TestCase_initialized_eqFunction_12348,
    MyNordic_initialized_TestCase_initialized_eqFunction_12349,
    MyNordic_initialized_TestCase_initialized_eqFunction_12350,
    MyNordic_initialized_TestCase_initialized_eqFunction_12351,
    MyNordic_initialized_TestCase_initialized_eqFunction_12352,
    MyNordic_initialized_TestCase_initialized_eqFunction_12353,
    MyNordic_initialized_TestCase_initialized_eqFunction_12354,
    MyNordic_initialized_TestCase_initialized_eqFunction_12358,
    MyNordic_initialized_TestCase_initialized_eqFunction_12359,
    MyNordic_initialized_TestCase_initialized_eqFunction_12360,
    MyNordic_initialized_TestCase_initialized_eqFunction_12361,
    MyNordic_initialized_TestCase_initialized_eqFunction_12362,
    MyNordic_initialized_TestCase_initialized_eqFunction_12363,
    MyNordic_initialized_TestCase_initialized_eqFunction_12364,
    MyNordic_initialized_TestCase_initialized_eqFunction_12368,
    MyNordic_initialized_TestCase_initialized_eqFunction_12369,
    MyNordic_initialized_TestCase_initialized_eqFunction_12370,
    MyNordic_initialized_TestCase_initialized_eqFunction_12371,
    MyNordic_initialized_TestCase_initialized_eqFunction_12377,
    MyNordic_initialized_TestCase_initialized_eqFunction_12382,
    MyNordic_initialized_TestCase_initialized_eqFunction_12384,
    MyNordic_initialized_TestCase_initialized_eqFunction_12385,
    MyNordic_initialized_TestCase_initialized_eqFunction_12389,
    MyNordic_initialized_TestCase_initialized_eqFunction_12390,
    MyNordic_initialized_TestCase_initialized_eqFunction_12391,
    MyNordic_initialized_TestCase_initialized_eqFunction_12392,
    MyNordic_initialized_TestCase_initialized_eqFunction_12396,
    MyNordic_initialized_TestCase_initialized_eqFunction_12397,
    MyNordic_initialized_TestCase_initialized_eqFunction_12401,
    MyNordic_initialized_TestCase_initialized_eqFunction_12404,
    MyNordic_initialized_TestCase_initialized_eqFunction_12405,
    MyNordic_initialized_TestCase_initialized_eqFunction_12406,
    MyNordic_initialized_TestCase_initialized_eqFunction_12407,
    MyNordic_initialized_TestCase_initialized_eqFunction_12411,
    MyNordic_initialized_TestCase_initialized_eqFunction_12412,
    MyNordic_initialized_TestCase_initialized_eqFunction_12413,
    MyNordic_initialized_TestCase_initialized_eqFunction_12419,
    MyNordic_initialized_TestCase_initialized_eqFunction_12420,
    MyNordic_initialized_TestCase_initialized_eqFunction_12422,
    MyNordic_initialized_TestCase_initialized_eqFunction_12423,
    MyNordic_initialized_TestCase_initialized_eqFunction_12424,
    MyNordic_initialized_TestCase_initialized_eqFunction_12428,
    MyNordic_initialized_TestCase_initialized_eqFunction_12429,
    MyNordic_initialized_TestCase_initialized_eqFunction_12430,
    MyNordic_initialized_TestCase_initialized_eqFunction_12431,
    MyNordic_initialized_TestCase_initialized_eqFunction_12432,
    MyNordic_initialized_TestCase_initialized_eqFunction_12433,
    MyNordic_initialized_TestCase_initialized_eqFunction_12434,
    MyNordic_initialized_TestCase_initialized_eqFunction_12435,
    MyNordic_initialized_TestCase_initialized_eqFunction_12439,
    MyNordic_initialized_TestCase_initialized_eqFunction_12440,
    MyNordic_initialized_TestCase_initialized_eqFunction_12441,
    MyNordic_initialized_TestCase_initialized_eqFunction_12442,
    MyNordic_initialized_TestCase_initialized_eqFunction_12443,
    MyNordic_initialized_TestCase_initialized_eqFunction_12444,
    MyNordic_initialized_TestCase_initialized_eqFunction_12445,
    MyNordic_initialized_TestCase_initialized_eqFunction_12449,
    MyNordic_initialized_TestCase_initialized_eqFunction_12450,
    MyNordic_initialized_TestCase_initialized_eqFunction_12451,
    MyNordic_initialized_TestCase_initialized_eqFunction_12452,
    MyNordic_initialized_TestCase_initialized_eqFunction_12458,
    MyNordic_initialized_TestCase_initialized_eqFunction_12463,
    MyNordic_initialized_TestCase_initialized_eqFunction_12465,
    MyNordic_initialized_TestCase_initialized_eqFunction_12466,
    MyNordic_initialized_TestCase_initialized_eqFunction_12470,
    MyNordic_initialized_TestCase_initialized_eqFunction_12471,
    MyNordic_initialized_TestCase_initialized_eqFunction_12472,
    MyNordic_initialized_TestCase_initialized_eqFunction_12473,
    MyNordic_initialized_TestCase_initialized_eqFunction_12477,
    MyNordic_initialized_TestCase_initialized_eqFunction_12478,
    MyNordic_initialized_TestCase_initialized_eqFunction_12482,
    MyNordic_initialized_TestCase_initialized_eqFunction_12485,
    MyNordic_initialized_TestCase_initialized_eqFunction_12486,
    MyNordic_initialized_TestCase_initialized_eqFunction_12487,
    MyNordic_initialized_TestCase_initialized_eqFunction_12488,
    MyNordic_initialized_TestCase_initialized_eqFunction_12492,
    MyNordic_initialized_TestCase_initialized_eqFunction_12493,
    MyNordic_initialized_TestCase_initialized_eqFunction_12494,
    MyNordic_initialized_TestCase_initialized_eqFunction_12500,
    MyNordic_initialized_TestCase_initialized_eqFunction_12501,
    MyNordic_initialized_TestCase_initialized_eqFunction_12503,
    MyNordic_initialized_TestCase_initialized_eqFunction_12504,
    MyNordic_initialized_TestCase_initialized_eqFunction_12505,
    MyNordic_initialized_TestCase_initialized_eqFunction_12509,
    MyNordic_initialized_TestCase_initialized_eqFunction_12510,
    MyNordic_initialized_TestCase_initialized_eqFunction_12511,
    MyNordic_initialized_TestCase_initialized_eqFunction_12512,
    MyNordic_initialized_TestCase_initialized_eqFunction_12513,
    MyNordic_initialized_TestCase_initialized_eqFunction_12514,
    MyNordic_initialized_TestCase_initialized_eqFunction_12515,
    MyNordic_initialized_TestCase_initialized_eqFunction_12516,
    MyNordic_initialized_TestCase_initialized_eqFunction_12520,
    MyNordic_initialized_TestCase_initialized_eqFunction_12521,
    MyNordic_initialized_TestCase_initialized_eqFunction_12522,
    MyNordic_initialized_TestCase_initialized_eqFunction_12523,
    MyNordic_initialized_TestCase_initialized_eqFunction_12524,
    MyNordic_initialized_TestCase_initialized_eqFunction_12525,
    MyNordic_initialized_TestCase_initialized_eqFunction_12526,
    MyNordic_initialized_TestCase_initialized_eqFunction_12530,
    MyNordic_initialized_TestCase_initialized_eqFunction_12531,
    MyNordic_initialized_TestCase_initialized_eqFunction_12532,
    MyNordic_initialized_TestCase_initialized_eqFunction_12533,
    MyNordic_initialized_TestCase_initialized_eqFunction_12539,
    MyNordic_initialized_TestCase_initialized_eqFunction_12544,
    MyNordic_initialized_TestCase_initialized_eqFunction_12546,
    MyNordic_initialized_TestCase_initialized_eqFunction_12547,
    MyNordic_initialized_TestCase_initialized_eqFunction_12551,
    MyNordic_initialized_TestCase_initialized_eqFunction_12552,
    MyNordic_initialized_TestCase_initialized_eqFunction_12553,
    MyNordic_initialized_TestCase_initialized_eqFunction_12554,
    MyNordic_initialized_TestCase_initialized_eqFunction_12558,
    MyNordic_initialized_TestCase_initialized_eqFunction_12559,
    MyNordic_initialized_TestCase_initialized_eqFunction_12563,
    MyNordic_initialized_TestCase_initialized_eqFunction_12566,
    MyNordic_initialized_TestCase_initialized_eqFunction_12567,
    MyNordic_initialized_TestCase_initialized_eqFunction_12568,
    MyNordic_initialized_TestCase_initialized_eqFunction_12569,
    MyNordic_initialized_TestCase_initialized_eqFunction_12573,
    MyNordic_initialized_TestCase_initialized_eqFunction_12574,
    MyNordic_initialized_TestCase_initialized_eqFunction_12575,
    MyNordic_initialized_TestCase_initialized_eqFunction_12581,
    MyNordic_initialized_TestCase_initialized_eqFunction_12582,
    MyNordic_initialized_TestCase_initialized_eqFunction_12584,
    MyNordic_initialized_TestCase_initialized_eqFunction_12585,
    MyNordic_initialized_TestCase_initialized_eqFunction_12586,
    MyNordic_initialized_TestCase_initialized_eqFunction_12590,
    MyNordic_initialized_TestCase_initialized_eqFunction_12591,
    MyNordic_initialized_TestCase_initialized_eqFunction_12592,
    MyNordic_initialized_TestCase_initialized_eqFunction_12593,
    MyNordic_initialized_TestCase_initialized_eqFunction_12594,
    MyNordic_initialized_TestCase_initialized_eqFunction_12595,
    MyNordic_initialized_TestCase_initialized_eqFunction_12596,
    MyNordic_initialized_TestCase_initialized_eqFunction_12597,
    MyNordic_initialized_TestCase_initialized_eqFunction_12601,
    MyNordic_initialized_TestCase_initialized_eqFunction_12602,
    MyNordic_initialized_TestCase_initialized_eqFunction_12603,
    MyNordic_initialized_TestCase_initialized_eqFunction_12604,
    MyNordic_initialized_TestCase_initialized_eqFunction_12605,
    MyNordic_initialized_TestCase_initialized_eqFunction_12606,
    MyNordic_initialized_TestCase_initialized_eqFunction_12607,
    MyNordic_initialized_TestCase_initialized_eqFunction_12611,
    MyNordic_initialized_TestCase_initialized_eqFunction_12612,
    MyNordic_initialized_TestCase_initialized_eqFunction_12613,
    MyNordic_initialized_TestCase_initialized_eqFunction_12614,
    MyNordic_initialized_TestCase_initialized_eqFunction_12620,
    MyNordic_initialized_TestCase_initialized_eqFunction_12625,
    MyNordic_initialized_TestCase_initialized_eqFunction_12627,
    MyNordic_initialized_TestCase_initialized_eqFunction_12628,
    MyNordic_initialized_TestCase_initialized_eqFunction_12632,
    MyNordic_initialized_TestCase_initialized_eqFunction_12633,
    MyNordic_initialized_TestCase_initialized_eqFunction_12634,
    MyNordic_initialized_TestCase_initialized_eqFunction_12635,
    MyNordic_initialized_TestCase_initialized_eqFunction_12639,
    MyNordic_initialized_TestCase_initialized_eqFunction_12640,
    MyNordic_initialized_TestCase_initialized_eqFunction_12644,
    MyNordic_initialized_TestCase_initialized_eqFunction_12647,
    MyNordic_initialized_TestCase_initialized_eqFunction_12648,
    MyNordic_initialized_TestCase_initialized_eqFunction_12649,
    MyNordic_initialized_TestCase_initialized_eqFunction_12650,
    MyNordic_initialized_TestCase_initialized_eqFunction_12654,
    MyNordic_initialized_TestCase_initialized_eqFunction_12655,
    MyNordic_initialized_TestCase_initialized_eqFunction_12656,
    MyNordic_initialized_TestCase_initialized_eqFunction_12662,
    MyNordic_initialized_TestCase_initialized_eqFunction_12663,
    MyNordic_initialized_TestCase_initialized_eqFunction_12665,
    MyNordic_initialized_TestCase_initialized_eqFunction_12666,
    MyNordic_initialized_TestCase_initialized_eqFunction_12667,
    MyNordic_initialized_TestCase_initialized_eqFunction_12671,
    MyNordic_initialized_TestCase_initialized_eqFunction_12672,
    MyNordic_initialized_TestCase_initialized_eqFunction_12673,
    MyNordic_initialized_TestCase_initialized_eqFunction_12674,
    MyNordic_initialized_TestCase_initialized_eqFunction_12675,
    MyNordic_initialized_TestCase_initialized_eqFunction_12676,
    MyNordic_initialized_TestCase_initialized_eqFunction_12677,
    MyNordic_initialized_TestCase_initialized_eqFunction_12678,
    MyNordic_initialized_TestCase_initialized_eqFunction_12682,
    MyNordic_initialized_TestCase_initialized_eqFunction_12683,
    MyNordic_initialized_TestCase_initialized_eqFunction_12684,
    MyNordic_initialized_TestCase_initialized_eqFunction_12685,
    MyNordic_initialized_TestCase_initialized_eqFunction_12686
  };
  
  for (int id = 0; id < 415; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif