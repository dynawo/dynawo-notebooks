#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 16170
type: SIMPLE_ASSIGN
g06.genState = (*Real*)(g06.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1258]] /* g06.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[10]] /* g06.converter.u DISCRETE */));
  threadData->lastEquationSolved = 16170;
}
/*
equation index: 16171
type: SIMPLE_ASSIGN
$DAEres134 = if g06.running.value then der(g06.theta) - 314.1592653589793 * (g06.omegaPu - omegaCOI) else der(g06.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16171};
  (data->simulationInfo->daeModeData->residualVars[134]) /* $DAEres134 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* der(g06.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* der(g06.theta) STATE_DER */));
  threadData->lastEquationSolved = 16171;
}
/*
equation index: 16172
type: SIMPLE_ASSIGN
g06.cmPu = if g06.running.value then g06.PmPu / g06.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* g06.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* g06.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */),"g06.omegaPu"):0.0);
  threadData->lastEquationSolved = 16172;
}
/*
equation index: 16173
type: SIMPLE_ASSIGN
g06.ufPu = if g06.running.value then vrNordic_g06.limIntegrator.y * g06.Kuf * g06.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1288]] /* g06.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* g06.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 16173;
}
/*
equation index: 16174
type: SIMPLE_ASSIGN
$DAEres875 = if g06.running.value then g06.uqPu - ((g06.RaPPu + g06.RTfoPu) * g06.iqPu + g06.omegaPu * g06.lambdadPu) else g06.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16174};
  (data->simulationInfo->daeModeData->residualVars[875]) /* $DAEres875 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1289]] /* g06.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* g06.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* g06.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* g06.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* g06.lambdaqPu variable */));
  threadData->lastEquationSolved = 16174;
}
/*
equation index: 16175
type: SIMPLE_ASSIGN
$DAEres876 = if g06.running.value then g06.MqSatPPu - (g06.miPu - g06.MsalPu * g06.cos2Eta) else g06.MqSatPPu - g06.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16175};
  (data->simulationInfo->daeModeData->residualVars[876]) /* $DAEres876 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* g06.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* g06.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* g06.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* g06.MqPPu PARAM */));
  threadData->lastEquationSolved = 16175;
}
/*
equation index: 16176
type: SIMPLE_ASSIGN
$DAEres877 = if g06.running.value then g06.MdSatPPu - (g06.miPu + g06.MsalPu * g06.sin2Eta) else g06.MdSatPPu - g06.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16176};
  (data->simulationInfo->daeModeData->residualVars[877]) /* $DAEres877 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* g06.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* g06.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* g06.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* g06.MdPPu PARAM */));
  threadData->lastEquationSolved = 16176;
}
/*
equation index: 16177
type: SIMPLE_ASSIGN
$DAEres878 = if g06.running.value then g06.sin2Eta - (g06.lambdaAQPu / g06.lambdaAirGapPu) ^ 2.0 else g06.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16177};
  modelica_real tmp2185;
  modelica_boolean tmp2186;
  modelica_real tmp2187;
  tmp2186 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp2186)
  {
    tmp2185 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* g06.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* g06.lambdaAirGapPu variable */),"g06.lambdaAirGapPu");
    tmp2187 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* g06.sin2Eta variable */) - ((tmp2185 * tmp2185));
  }
  else
  {
    tmp2187 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* g06.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[878]) /* $DAEres878 DAE_RESIDUAL_VAR */ = tmp2187;
  threadData->lastEquationSolved = 16177;
}
/*
equation index: 16178
type: SIMPLE_ASSIGN
$DAEres879 = if g06.running.value then g06.mdsPu - g06.MdPPu / (1.0 + g06.md * g06.lambdaAirGapPu ^ g06.nd) else g06.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16178};
  modelica_real tmp2188;
  modelica_real tmp2189;
  modelica_real tmp2190;
  modelica_real tmp2191;
  modelica_real tmp2192;
  modelica_real tmp2193;
  modelica_real tmp2194;
  modelica_boolean tmp2195;
  modelica_real tmp2196;
  tmp2195 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp2195)
  {
    tmp2188 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* g06.lambdaAirGapPu variable */);
    tmp2189 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[803]] /* g06.nd PARAM */);
    if(tmp2188 < 0.0 && tmp2189 != 0.0)
    {
      tmp2191 = modf(tmp2189, &tmp2192);
      
      if(tmp2191 > 0.5)
      {
        tmp2191 -= 1.0;
        tmp2192 += 1.0;
      }
      else if(tmp2191 < -0.5)
      {
        tmp2191 += 1.0;
        tmp2192 -= 1.0;
      }
      
      if(fabs(tmp2191) < 1e-10)
        tmp2190 = pow(tmp2188, tmp2192);
      else
      {
        tmp2194 = modf(1.0/tmp2189, &tmp2193);
        if(tmp2194 > 0.5)
        {
          tmp2194 -= 1.0;
          tmp2193 += 1.0;
        }
        else if(tmp2194 < -0.5)
        {
          tmp2194 += 1.0;
          tmp2193 -= 1.0;
        }
        if(fabs(tmp2194) < 1e-10 && ((unsigned long)tmp2193 & 1))
        {
          tmp2190 = -pow(-tmp2188, tmp2191)*pow(tmp2188, tmp2192);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2188, tmp2189);
        }
      }
    }
    else
    {
      tmp2190 = pow(tmp2188, tmp2189);
    }
    if(isnan(tmp2190) || isinf(tmp2190))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2188, tmp2189);
    }
    tmp2196 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* g06.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* g06.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[801]] /* g06.md PARAM */)) * (tmp2190),"1.0 + g06.md * g06.lambdaAirGapPu ^ g06.nd"));
  }
  else
  {
    tmp2196 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* g06.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[879]) /* $DAEres879 DAE_RESIDUAL_VAR */ = tmp2196;
  threadData->lastEquationSolved = 16178;
}
/*
equation index: 16179
type: SIMPLE_ASSIGN
$DAEres880 = if g06.running.value then g06.mqsPu - g06.MqPPu / (1.0 + g06.mq * g06.lambdaAirGapPu ^ g06.nq) else g06.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16179};
  modelica_real tmp2197;
  modelica_real tmp2198;
  modelica_real tmp2199;
  modelica_real tmp2200;
  modelica_real tmp2201;
  modelica_real tmp2202;
  modelica_real tmp2203;
  modelica_boolean tmp2204;
  modelica_real tmp2205;
  tmp2204 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp2204)
  {
    tmp2197 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* g06.lambdaAirGapPu variable */);
    tmp2198 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* g06.nq PARAM */);
    if(tmp2197 < 0.0 && tmp2198 != 0.0)
    {
      tmp2200 = modf(tmp2198, &tmp2201);
      
      if(tmp2200 > 0.5)
      {
        tmp2200 -= 1.0;
        tmp2201 += 1.0;
      }
      else if(tmp2200 < -0.5)
      {
        tmp2200 += 1.0;
        tmp2201 -= 1.0;
      }
      
      if(fabs(tmp2200) < 1e-10)
        tmp2199 = pow(tmp2197, tmp2201);
      else
      {
        tmp2203 = modf(1.0/tmp2198, &tmp2202);
        if(tmp2203 > 0.5)
        {
          tmp2203 -= 1.0;
          tmp2202 += 1.0;
        }
        else if(tmp2203 < -0.5)
        {
          tmp2203 += 1.0;
          tmp2202 -= 1.0;
        }
        if(fabs(tmp2203) < 1e-10 && ((unsigned long)tmp2202 & 1))
        {
          tmp2199 = -pow(-tmp2197, tmp2200)*pow(tmp2197, tmp2201);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2197, tmp2198);
        }
      }
    }
    else
    {
      tmp2199 = pow(tmp2197, tmp2198);
    }
    if(isnan(tmp2199) || isinf(tmp2199))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2197, tmp2198);
    }
    tmp2205 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* g06.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* g06.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[802]] /* g06.mq PARAM */)) * (tmp2199),"1.0 + g06.mq * g06.lambdaAirGapPu ^ g06.nq"));
  }
  else
  {
    tmp2205 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* g06.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[880]) /* $DAEres880 DAE_RESIDUAL_VAR */ = tmp2205;
  threadData->lastEquationSolved = 16179;
}
/*
equation index: 16180
type: SIMPLE_ASSIGN
$DAEres881 = if g06.running.value then g06.miPu - (g06.mdsPu * g06.cos2Eta + g06.mqsPu * g06.sin2Eta) else g06.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16180};
  (data->simulationInfo->daeModeData->residualVars[881]) /* $DAEres881 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* g06.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* g06.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* g06.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* g06.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* g06.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* g06.miPu variable */));
  threadData->lastEquationSolved = 16180;
}
/*
equation index: 16181
type: SIMPLE_ASSIGN
$DAEres882 = if g06.running.value then g06.cos2Eta - (g06.lambdaADPu / g06.lambdaAirGapPu) ^ 2.0 else g06.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16181};
  modelica_real tmp2206;
  modelica_boolean tmp2207;
  modelica_real tmp2208;
  tmp2207 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp2207)
  {
    tmp2206 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* g06.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* g06.lambdaAirGapPu variable */),"g06.lambdaAirGapPu");
    tmp2208 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* g06.cos2Eta variable */) - ((tmp2206 * tmp2206));
  }
  else
  {
    tmp2208 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* g06.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[882]) /* $DAEres882 DAE_RESIDUAL_VAR */ = tmp2208;
  threadData->lastEquationSolved = 16181;
}
/*
equation index: 16182
type: SIMPLE_ASSIGN
$DAEres883 = if g06.running.value then g06.lambdaDPu - (g06.MdSatPPu * g06.idPu + (g06.MdSatPPu + g06.MrcPPu) * g06.ifPu + (g06.MdSatPPu + g06.LDPPu + g06.MrcPPu) * g06.iDPu) else g06.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16182};
  (data->simulationInfo->daeModeData->residualVars[883]) /* $DAEres883 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* g06.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* g06.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* g06.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* g06.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* g06.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */));
  threadData->lastEquationSolved = 16182;
}
/*
equation index: 16183
type: SIMPLE_ASSIGN
$DAEres884 = if g06.running.value then g06.lambdaADPu - g06.MdSatPPu * (g06.idPu + g06.ifPu + g06.iDPu) else g06.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16183};
  (data->simulationInfo->daeModeData->residualVars[884]) /* $DAEres884 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* g06.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* g06.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* g06.lambdaADPu variable */));
  threadData->lastEquationSolved = 16183;
}
/*
equation index: 16184
type: SIMPLE_ASSIGN
$DAEres885 = if g06.running.value then g06.lambdaAirGapPu - sqrt(g06.lambdaADPu ^ 2.0 + g06.lambdaAQPu ^ 2.0) else g06.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16184};
  modelica_real tmp2209;
  modelica_real tmp2210;
  modelica_real tmp2211;
  modelica_boolean tmp2212;
  modelica_real tmp2213;
  tmp2212 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp2212)
  {
    tmp2209 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* g06.lambdaADPu variable */);
    tmp2210 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* g06.lambdaAQPu variable */);
    tmp2211 = (tmp2209 * tmp2209) + (tmp2210 * tmp2210);
    if(!(tmp2211 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g06.lambdaADPu ^ 2.0 + g06.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp2211);
      }
    }
    tmp2213 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* g06.lambdaAirGapPu variable */) - sqrt(tmp2211);
  }
  else
  {
    tmp2213 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* g06.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[885]) /* $DAEres885 DAE_RESIDUAL_VAR */ = tmp2213;
  threadData->lastEquationSolved = 16184;
}
/*
equation index: 16185
type: SIMPLE_ASSIGN
$DAEres886 = if g06.running.value then g06.lambdaAQPu - g06.MqSatPPu * (g06.iqPu + g06.iQ1Pu + g06.iQ2Pu) else g06.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16185};
  (data->simulationInfo->daeModeData->residualVars[886]) /* $DAEres886 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* g06.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* g06.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* g06.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* g06.lambdaAQPu variable */));
  threadData->lastEquationSolved = 16185;
}
/*
equation index: 16186
type: SIMPLE_ASSIGN
$DAEres887 = if g06.running.value then g06.lambdaQ2Pu - (g06.MqSatPPu * (g06.iqPu + g06.iQ1Pu) + (g06.MqSatPPu + g06.LQ2PPu) * g06.iQ2Pu) else g06.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16186};
  (data->simulationInfo->daeModeData->residualVars[887]) /* $DAEres887 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* g06.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* g06.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* g06.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* g06.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* g06.iQ2Pu variable */));
  threadData->lastEquationSolved = 16186;
}
/*
equation index: 16187
type: SIMPLE_ASSIGN
$DAEres888 = if g06.running.value then g06.lambdaQ1Pu - (g06.MqSatPPu * g06.iqPu + (g06.MqSatPPu + g06.LQ1PPu) * g06.iQ1Pu + g06.MqSatPPu * g06.iQ2Pu) else g06.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16187};
  (data->simulationInfo->daeModeData->residualVars[888]) /* $DAEres888 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* g06.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* g06.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* g06.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* g06.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* g06.iQ1Pu variable */));
  threadData->lastEquationSolved = 16187;
}
/*
equation index: 16188
type: SIMPLE_ASSIGN
$DAEres889 = if g06.running.value then g06.lambdaqPu - ((g06.MqSatPPu + g06.LqPPu + g06.XTfoPu) * g06.iqPu + g06.MqSatPPu * (g06.iQ1Pu + g06.iQ2Pu)) else g06.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16188};
  (data->simulationInfo->daeModeData->residualVars[889]) /* $DAEres889 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* g06.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* g06.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* g06.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* g06.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* g06.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* g06.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* g06.iDPu variable */));
  threadData->lastEquationSolved = 16188;
}
/*
equation index: 16189
type: SIMPLE_ASSIGN
$DAEres890 = if g06.running.value then g06.udPu - ((g06.RaPPu + g06.RTfoPu) * g06.idPu - g06.omegaPu * g06.lambdaqPu) else g06.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16189};
  (data->simulationInfo->daeModeData->residualVars[890]) /* $DAEres890 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1287]] /* g06.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* g06.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* g06.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* g06.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* g06.lambdadPu variable */));
  threadData->lastEquationSolved = 16189;
}
/*
equation index: 16190
type: SIMPLE_ASSIGN
$DAEres891 = if g06.running.value then g06.lambdadPu - ((g06.MdSatPPu + g06.LdPPu + g06.XTfoPu) * g06.idPu + g06.MdSatPPu * (g06.ifPu + g06.iDPu)) else g06.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16190};
  (data->simulationInfo->daeModeData->residualVars[891]) /* $DAEres891 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* g06.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* g06.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* g06.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* g06.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */));
  threadData->lastEquationSolved = 16190;
}
/*
equation index: 16191
type: SIMPLE_ASSIGN
$DAEres892 = if g06.running.value then g06.lambdafPu - (g06.MdSatPPu * g06.idPu + (g06.MdSatPPu + g06.LfPPu + g06.MrcPPu) * g06.ifPu + (g06.MdSatPPu + g06.MrcPPu) * g06.iDPu) else g06.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16191};
  (data->simulationInfo->daeModeData->residualVars[892]) /* $DAEres892 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* g06.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* g06.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* g06.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* g06.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* g06.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* g06.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */));
  threadData->lastEquationSolved = 16191;
}
/*
equation index: 16192
type: SIMPLE_ASSIGN
$DAEres893 = if g06.running.value then 100.0 * g06.terminal.i.re / g06.SNom - (sin(g06.theta) * g06.idPu + cos(g06.theta) * g06.iqPu) else g06.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16192};
  (data->simulationInfo->daeModeData->residualVars[893]) /* $DAEres893 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */),"g06.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* g06.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* g06.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */));
  threadData->lastEquationSolved = 16192;
}
/*
equation index: 16193
type: SIMPLE_ASSIGN
$DAEres894 = if g06.running.value then 100.0 * g06.terminal.i.im / g06.SNom - (sin(g06.theta) * g06.iqPu - cos(g06.theta) * g06.idPu) else g06.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16193};
  (data->simulationInfo->daeModeData->residualVars[894]) /* $DAEres894 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */),"g06.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* g06.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* g06.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */));
  threadData->lastEquationSolved = 16193;
}
/*
equation index: 16194
type: SIMPLE_ASSIGN
$DAEres982 = if g06.running.value then g06.terminal.V.re - (sin(g06.theta) * g06.udPu + cos(g06.theta) * g06.uqPu) else g06.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16194};
  (data->simulationInfo->daeModeData->residualVars[982]) /* $DAEres982 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* g06.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1287]] /* g06.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* g06.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1289]] /* g06.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1287]] /* g06.udPu variable */));
  threadData->lastEquationSolved = 16194;
}
/*
equation index: 16195
type: SIMPLE_ASSIGN
$DAEres983 = if g06.running.value then g06.terminal.V.im - (sin(g06.theta) * g06.uqPu - cos(g06.theta) * g06.udPu) else g06.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16195};
  (data->simulationInfo->daeModeData->residualVars[983]) /* $DAEres983 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* g06.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1289]] /* g06.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* g06.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1287]] /* g06.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1289]] /* g06.uqPu variable */));
  threadData->lastEquationSolved = 16195;
}
/*
equation index: 16196
type: SIMPLE_ASSIGN
g06.uPu.im = if g06.running.value then g06.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* g06.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 16196;
}
/*
equation index: 16197
type: SIMPLE_ASSIGN
g06.iStatorPu.im = if g06.running.value then g06.rTfoPu * g06.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 16197;
}
/*
equation index: 16198
type: SIMPLE_ASSIGN
g06.cePu = if g06.running.value then g06.lambdaqPu * g06.idPu - g06.lambdadPu * g06.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* g06.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* g06.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* g06.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* g06.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* g06.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 16198;
}
/*
equation index: 16199
type: SIMPLE_ASSIGN
g06.PePu = if g06.running.value then g06.cePu * g06.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1248]] /* g06.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* g06.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 16199;
}
/*
equation index: 16200
type: SIMPLE_ASSIGN
$DAEres1323 = if g06.running.value then 2.0 * g06.H * der(g06.omegaPu) - (g06.cmPu * g06.PNomTurb / g06.SNom + g06.DPu * (omegaCOI - g06.omegaPu) - g06.cePu) else der(g06.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16200};
  (data->simulationInfo->daeModeData->residualVars[1323]) /* $DAEres1323 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* g06.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* der(g06.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* g06.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* g06.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */),"g06.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* g06.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* g06.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* g06.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* der(g06.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 16200;
}
/*
equation index: 16201
type: SIMPLE_ASSIGN
g06.thetaInternal.value = if g06.running.value then Modelica.Math.atan3(g06.udPu, g06.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1282]] /* g06.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1287]] /* g06.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1289]] /* g06.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 16201;
}
/*
equation index: 16202
type: SIMPLE_ASSIGN
$DAEres1324 = if g06.running.value then (-g06.RQ1PPu) * g06.iQ1Pu - 0.0031830988618379067 * der(g06.lambdaQ1Pu) else der(g06.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16202};
  (data->simulationInfo->daeModeData->residualVars[1324]) /* $DAEres1324 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* g06.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* g06.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* der(g06.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* der(g06.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 16202;
}
/*
equation index: 16203
type: SIMPLE_ASSIGN
vrNordic_g06.IrPu = if g06.running.value then g06.RfPPu * g06.ifPu / (g06.rTfoPu * g06.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3566]] /* vrNordic_g06.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* g06.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* g06.Kuf PARAM */)),"g06.rTfoPu * g06.Kuf")):0.0);
  threadData->lastEquationSolved = 16203;
}
/*
equation index: 16204
type: SIMPLE_ASSIGN
vrNordic_g06.dIf.y = vrNordic_g06.IrPu - vrNordic_g06.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3566]] /* vrNordic_g06.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4528]] /* vrNordic_g06.const2.k PARAM */);
  threadData->lastEquationSolved = 16204;
}
/*
equation index: 16205
type: SIMPLE_ASSIGN
vrNordic_g06.gain1.y = vrNordic_g06.gain1.k * vrNordic_g06.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3575]] /* vrNordic_g06.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4534]] /* vrNordic_g06.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */));
  threadData->lastEquationSolved = 16205;
}
/*
equation index: 16206
type: SIMPLE_ASSIGN
vrNordic_g06.overExcitationLimitation.y = if vrNordic_g06.dIf.y < -0.1 then -1.0 else if vrNordic_g06.dIf.y < 0.0 then 0.0 else if vrNordic_g06.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g06.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16206};
  modelica_boolean tmp2214;
  modelica_real tmp2215;
  modelica_real tmp2216;
  modelica_boolean tmp2217;
  modelica_real tmp2218;
  modelica_real tmp2219;
  modelica_boolean tmp2220;
  modelica_boolean tmp2221;
  modelica_real tmp2222;
  modelica_boolean tmp2223;
  modelica_real tmp2224;
  tmp2215 = 1.0;
  tmp2216 = 0.1;
  relationhysteresis(data, &tmp2214, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */), -0.1, tmp2215, tmp2216, 310, Less, LessZC);
  tmp2223 = (modelica_boolean)tmp2214;
  if(tmp2223)
  {
    tmp2224 = -1.0;
  }
  else
  {
    tmp2218 = 1.0;
    tmp2219 = 0.0;
    relationhysteresis(data, &tmp2217, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */), 0.0, tmp2218, tmp2219, 311, Less, LessZC);
    tmp2221 = (modelica_boolean)tmp2217;
    if(tmp2221)
    {
      tmp2222 = 0.0;
    }
    else
    {
      tmp2220 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4582]] /* vrNordic_g06.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp2222 = (tmp2220?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */));
    }
    tmp2224 = tmp2222;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */) = tmp2224;
  threadData->lastEquationSolved = 16206;
}
/*
equation index: 16207
type: SIMPLE_ASSIGN
$DAEres1325 = (if vrNordic_g06.timer.y < vrNordic_g06.timer.outMin and vrNordic_g06.timer.k * vrNordic_g06.overExcitationLimitation.y < 0.0 or vrNordic_g06.timer.y > vrNordic_g06.timer.outMax and vrNordic_g06.timer.k * vrNordic_g06.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g06.timer.k * vrNordic_g06.overExcitationLimitation.y) - der(vrNordic_g06.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16207};
  modelica_boolean tmp2225;
  modelica_real tmp2226;
  modelica_real tmp2227;
  modelica_boolean tmp2228;
  modelica_real tmp2229;
  modelica_real tmp2230;
  modelica_boolean tmp2231;
  modelica_real tmp2232;
  modelica_real tmp2233;
  modelica_boolean tmp2234;
  modelica_real tmp2235;
  modelica_real tmp2236;
  tmp2226 = 1.0;
  tmp2227 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4592]] /* vrNordic_g06.timer.outMin PARAM */));
  relationhysteresis(data, &tmp2225, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4592]] /* vrNordic_g06.timer.outMin PARAM */), tmp2226, tmp2227, 316, Less, LessZC);
  tmp2229 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */))) * (1.0);
  tmp2230 = 0.0;
  relationhysteresis(data, &tmp2228, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)), 0.0, tmp2229, tmp2230, 317, Less, LessZC);
  tmp2232 = 1.0;
  tmp2233 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4591]] /* vrNordic_g06.timer.outMax PARAM */));
  relationhysteresis(data, &tmp2231, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4591]] /* vrNordic_g06.timer.outMax PARAM */), tmp2232, tmp2233, 318, Greater, GreaterZC);
  tmp2235 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */))) * (1.0);
  tmp2236 = 0.0;
  relationhysteresis(data, &tmp2234, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)), 0.0, tmp2235, tmp2236, 319, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1325]) /* $DAEres1325 DAE_RESIDUAL_VAR */ = (((tmp2225 && tmp2228) || (tmp2231 && tmp2234))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* der(vrNordic_g06.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 16207;
}
/*
equation index: 16208
type: SIMPLE_ASSIGN
$DAEres1326 = if g06.running.value then g06.ufPu - (g06.RfPPu * g06.ifPu + 0.0031830988618379067 * der(g06.lambdafPu)) else der(g06.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16208};
  (data->simulationInfo->daeModeData->residualVars[1326]) /* $DAEres1326 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1288]] /* g06.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* g06.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* g06.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* der(g06.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* der(g06.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 16208;
}
/*
equation index: 16209
type: SIMPLE_ASSIGN
$DAEres1327 = if g06.running.value then (-g06.RDPPu) * g06.iDPu - 0.0031830988618379067 * der(g06.lambdaDPu) else der(g06.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16209};
  (data->simulationInfo->daeModeData->residualVars[1327]) /* $DAEres1327 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* g06.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* g06.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* der(g06.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* der(g06.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 16209;
}
/*
equation index: 16210
type: SIMPLE_ASSIGN
$DAEres1328 = if g06.running.value then (-g06.RQ2PPu) * g06.iQ2Pu - 0.0031830988618379067 * der(g06.lambdaQ2Pu) else der(g06.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16210};
  (data->simulationInfo->daeModeData->residualVars[1328]) /* $DAEres1328 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* g06.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* g06.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* der(g06.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* der(g06.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 16210;
}
/*
equation index: 16211
type: SIMPLE_ASSIGN
g06.uStatorPu.im = if g06.running.value then (g06.terminal.V.im + (-100.0) * (g06.terminal.i.re * g06.XTfoPu + g06.terminal.i.im * g06.RTfoPu) / g06.SNom) / g06.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* g06.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* g06.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */),"g06.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */),"g06.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16211;
}
/*
equation index: 16212
type: SIMPLE_ASSIGN
g06.iStatorPu.re = if g06.running.value then g06.rTfoPu * g06.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 16212;
}
/*
equation index: 16213
type: SIMPLE_ASSIGN
g06.IStatorPu = if g06.running.value then if g06.iStatorPu.re == 0.0 and g06.iStatorPu.im == 0.0 then 0.0 else (g06.iStatorPu.re ^ 2.0 + g06.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16213};
  modelica_real tmp2237;
  modelica_real tmp2238;
  modelica_real tmp2239;
  modelica_boolean tmp2240;
  modelica_real tmp2241;
  modelica_boolean tmp2242;
  modelica_real tmp2243;
  tmp2242 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp2242)
  {
    tmp2240 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */) == 0.0));
    if(tmp2240)
    {
      tmp2241 = 0.0;
    }
    else
    {
      tmp2237 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */);
      tmp2238 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */);
      tmp2239 = (tmp2237 * tmp2237) + (tmp2238 * tmp2238);
      if(tmp2239 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2239, 0.5);
      }
      tmp2241 = sqrt(tmp2239);
    }
    tmp2243 = tmp2241;
  }
  else
  {
    tmp2243 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* g06.IStatorPu variable */) = tmp2243;
  threadData->lastEquationSolved = 16213;
}
/*
equation index: 16214
type: SIMPLE_ASSIGN
g06.uPu.re = if g06.running.value then g06.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1284]] /* g06.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 16214;
}
/*
equation index: 16215
type: SIMPLE_ASSIGN
g06.UPu = if g06.running.value then (g06.terminal.V.re ^ 2.0 + g06.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16215};
  modelica_real tmp2244;
  modelica_real tmp2245;
  modelica_real tmp2246;
  modelica_boolean tmp2247;
  modelica_real tmp2248;
  tmp2247 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp2247)
  {
    tmp2244 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */);
    tmp2245 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */);
    tmp2246 = (tmp2244 * tmp2244) + (tmp2245 * tmp2245);
    if(tmp2246 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2246, 0.5);
    }
    tmp2248 = sqrt(tmp2246);
  }
  else
  {
    tmp2248 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* g06.UPu variable */) = tmp2248;
  threadData->lastEquationSolved = 16215;
}
/*
equation index: 16216
type: SIMPLE_ASSIGN
goverNordic_g06.PGenPu = if g06.running.value then (-g06.terminal.V.re) * g06.terminal.i.re - g06.terminal.V.im * g06.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2022]] /* goverNordic_g06.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 16216;
}
/*
equation index: 16217
type: SIMPLE_ASSIGN
goverNordic_g06.perUnitP.y = goverNordic_g06.perUnitP.k * goverNordic_g06.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2038]] /* goverNordic_g06.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2466]] /* goverNordic_g06.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2022]] /* goverNordic_g06.PGenPu variable */));
  threadData->lastEquationSolved = 16217;
}
/*
equation index: 16218
type: SIMPLE_ASSIGN
$DAEres1338 = goverNordic_g06.firstOrder1.k * goverNordic_g06.perUnitP.y + (-goverNordic_g06.firstOrder1.y) - der(goverNordic_g06.firstOrder1.y) * goverNordic_g06.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16218};
  (data->simulationInfo->daeModeData->residualVars[1338]) /* $DAEres1338 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2444]] /* goverNordic_g06.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2038]] /* goverNordic_g06.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* goverNordic_g06.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* der(goverNordic_g06.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2443]] /* goverNordic_g06.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 16218;
}
/*
equation index: 16219
type: SIMPLE_ASSIGN
g06.PGen = if g06.running.value then 100.0 * goverNordic_g06.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* g06.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2022]] /* goverNordic_g06.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16219;
}
/*
equation index: 16220
type: SIMPLE_ASSIGN
g06.QGenPu = if g06.running.value then g06.terminal.V.re * g06.terminal.i.im - g06.terminal.V.im * g06.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* g06.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 16220;
}
/*
equation index: 16221
type: SIMPLE_ASSIGN
g06.QGen = if g06.running.value then 100.0 * g06.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* g06.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* g06.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16221;
}
/*
equation index: 16222
type: SIMPLE_ASSIGN
g06.uStatorPu.re = if g06.running.value then (g06.terminal.V.re + (-100.0) * (g06.terminal.i.re * g06.RTfoPu - g06.terminal.i.im * g06.XTfoPu) / g06.SNom) / g06.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* g06.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* g06.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* g06.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* g06.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* g06.SNom PARAM */),"g06.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* g06.rTfoPu PARAM */),"g06.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16222;
}
/*
equation index: 16223
type: SIMPLE_ASSIGN
g06.sStatorPu.re = if g06.running.value then g06.uStatorPu.re * g06.iStatorPu.re + g06.uStatorPu.im * g06.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* g06.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16223;
}
/*
equation index: 16224
type: SIMPLE_ASSIGN
g06.sStatorPu.im = if g06.running.value then g06.uStatorPu.im * g06.iStatorPu.re - g06.uStatorPu.re * g06.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* g06.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 16224;
}
/*
equation index: 16225
type: SIMPLE_ASSIGN
g06.QStatorPu = if g06.running.value then -g06.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* g06.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* g06.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16225;
}
/*
equation index: 16226
type: SIMPLE_ASSIGN
g06.QStatorPuQNom = if g06.running.value then 100.0 * g06.QStatorPu / g06.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1253]] /* g06.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* g06.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[769]] /* g06.QNomAlt PARAM */),"g06.QNomAlt")):0.0);
  threadData->lastEquationSolved = 16226;
}
/*
equation index: 16227
type: SIMPLE_ASSIGN
vrNordic_g06.UsPu = if g06.running.value then if g06.uStatorPu.re == 0.0 and g06.uStatorPu.im == 0.0 then 0.0 else (g06.uStatorPu.re ^ 2.0 + g06.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16227};
  modelica_real tmp2249;
  modelica_real tmp2250;
  modelica_real tmp2251;
  modelica_boolean tmp2252;
  modelica_real tmp2253;
  modelica_boolean tmp2254;
  modelica_real tmp2255;
  tmp2254 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[490]] /* g06.running.value DISCRETE */);
  if(tmp2254)
  {
    tmp2252 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */) == 0.0));
    if(tmp2252)
    {
      tmp2253 = 0.0;
    }
    else
    {
      tmp2249 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */);
      tmp2250 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */);
      tmp2251 = (tmp2249 * tmp2249) + (tmp2250 * tmp2250);
      if(tmp2251 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2251, 0.5);
      }
      tmp2253 = sqrt(tmp2251);
    }
    tmp2255 = tmp2253;
  }
  else
  {
    tmp2255 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3567]] /* vrNordic_g06.UsPu variable */) = tmp2255;
  threadData->lastEquationSolved = 16227;
}
/*
equation index: 16228
type: SIMPLE_ASSIGN
vrNordic_g06.dU.y = vrNordic_g06.const1.k - vrNordic_g06.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3571]] /* vrNordic_g06.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4527]] /* vrNordic_g06.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3567]] /* vrNordic_g06.UsPu variable */);
  threadData->lastEquationSolved = 16228;
}
/*
equation index: 16229
type: SIMPLE_ASSIGN
vrNordic_g06.add.y = vrNordic_g06.add.k1 * vrNordic_g06.dU.y + vrNordic_g06.add.k2 * vrNordic_g06.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4524]] /* vrNordic_g06.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3571]] /* vrNordic_g06.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4525]] /* vrNordic_g06.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3585]] /* vrNordic_g06.limiter.y variable */));
  threadData->lastEquationSolved = 16229;
}
/*
equation index: 16230
type: SIMPLE_ASSIGN
vrNordic_g06.switch.y = if vrNordic_g06.greaterEqualThreshold.y then vrNordic_g06.gain1.y else vrNordic_g06.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3588]] /* vrNordic_g06.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1030]] /* vrNordic_g06.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3575]] /* vrNordic_g06.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */));
  threadData->lastEquationSolved = 16230;
}
/*
equation index: 16231
type: SIMPLE_ASSIGN
vrNordic_g06.min1.y = if vrNordic_g06.switch.y < vrNordic_g06.add.y then vrNordic_g06.switch.y else vrNordic_g06.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16231};
  modelica_boolean tmp2256;
  modelica_real tmp2257;
  modelica_real tmp2258;
  tmp2257 = 1.0;
  tmp2258 = 1.0;
  relationhysteresis(data, &tmp2256, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3588]] /* vrNordic_g06.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */), tmp2257, tmp2258, 308, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3586]] /* vrNordic_g06.min1.y variable */) = (tmp2256?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3588]] /* vrNordic_g06.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */));
  threadData->lastEquationSolved = 16231;
}
/*
equation index: 16232
type: SIMPLE_ASSIGN
vrNordic_g06.kMulDU.y = vrNordic_g06.kMulDU.k * vrNordic_g06.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3576]] /* vrNordic_g06.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4536]] /* vrNordic_g06.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3586]] /* vrNordic_g06.min1.y variable */));
  threadData->lastEquationSolved = 16232;
}
/*
equation index: 16233
type: SIMPLE_ASSIGN
$DAEres1339 = vrNordic_g06.leadLag.a_end * vrNordic_g06.kMulDU.y + (-vrNordic_g06.leadLag.a[2]) * vrNordic_g06.leadLag.x_scaled[1] - der(vrNordic_g06.leadLag.x_scaled[1]) * vrNordic_g06.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16233};
  (data->simulationInfo->daeModeData->residualVars[1339]) /* $DAEres1339 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4541]] /* vrNordic_g06.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3576]] /* vrNordic_g06.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4540]] /* vrNordic_g06.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* vrNordic_g06.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* der(vrNordic_g06.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4539]] /* vrNordic_g06.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 16233;
}
/*
equation index: 16234
type: SIMPLE_ASSIGN
vrNordic_g06.leadLag.y = (vrNordic_g06.leadLag.bb[2] - vrNordic_g06.leadLag.d * vrNordic_g06.leadLag.a[2]) * vrNordic_g06.leadLag.x[1] + vrNordic_g06.leadLag.d * vrNordic_g06.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3578]] /* vrNordic_g06.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4545]] /* vrNordic_g06.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4546]] /* vrNordic_g06.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4540]] /* vrNordic_g06.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3577]] /* vrNordic_g06.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4546]] /* vrNordic_g06.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3576]] /* vrNordic_g06.kMulDU.y variable */));
  threadData->lastEquationSolved = 16234;
}
/*
equation index: 16235
type: SIMPLE_ASSIGN
vrNordic_g06.feedback1.y = vrNordic_g06.leadLag.y - vrNordic_g06.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3573]] /* vrNordic_g06.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3578]] /* vrNordic_g06.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 16235;
}
/*
equation index: 16236
type: SIMPLE_ASSIGN
vrNordic_g06.gain.y = vrNordic_g06.gain.k * vrNordic_g06.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4533]] /* vrNordic_g06.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3573]] /* vrNordic_g06.feedback1.y variable */));
  threadData->lastEquationSolved = 16236;
}
/*
equation index: 16237
type: SIMPLE_ASSIGN
$DAEres1340 = (if vrNordic_g06.limIntegrator.y < vrNordic_g06.limIntegrator.outMin and vrNordic_g06.limIntegrator.k * vrNordic_g06.gain.y < 0.0 or vrNordic_g06.limIntegrator.y > vrNordic_g06.limIntegrator.outMax and vrNordic_g06.limIntegrator.k * vrNordic_g06.gain.y > 0.0 then 0.0 else vrNordic_g06.limIntegrator.k * vrNordic_g06.gain.y) - der(vrNordic_g06.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16237};
  modelica_boolean tmp2259;
  modelica_real tmp2260;
  modelica_real tmp2261;
  modelica_boolean tmp2262;
  modelica_real tmp2263;
  modelica_real tmp2264;
  modelica_boolean tmp2265;
  modelica_real tmp2266;
  modelica_real tmp2267;
  modelica_boolean tmp2268;
  modelica_real tmp2269;
  modelica_real tmp2270;
  tmp2260 = 1.0;
  tmp2261 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4578]] /* vrNordic_g06.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp2259, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4578]] /* vrNordic_g06.limIntegrator.outMin PARAM */), tmp2260, tmp2261, 312, Less, LessZC);
  tmp2263 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */))) * (1.0);
  tmp2264 = 0.0;
  relationhysteresis(data, &tmp2262, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)), 0.0, tmp2263, tmp2264, 313, Less, LessZC);
  tmp2266 = 1.0;
  tmp2267 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4577]] /* vrNordic_g06.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp2265, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4577]] /* vrNordic_g06.limIntegrator.outMax PARAM */), tmp2266, tmp2267, 314, Greater, GreaterZC);
  tmp2269 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */))) * (1.0);
  tmp2270 = 0.0;
  relationhysteresis(data, &tmp2268, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)), 0.0, tmp2269, tmp2270, 315, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1340]) /* $DAEres1340 DAE_RESIDUAL_VAR */ = (((tmp2259 && tmp2262) || (tmp2265 && tmp2268))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* der(vrNordic_g06.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 16237;
}
/*
equation index: 16238
type: SIMPLE_ASSIGN
$whenCondition49 = not pre(g05.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16238};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[413]] /* $whenCondition49 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[486] /* g05.running.value DISCRETE */));
  threadData->lastEquationSolved = 16238;
}
/*
equation index: 16239
type: WHEN

when {} then
  g05.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16239};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[413]] /* $whenCondition49 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[413] /* $whenCondition49 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16239;
}
/*
equation index: 16241
type: SIMPLE_ASSIGN
$whenCondition51 = not g05.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16241};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[416]] /* $whenCondition51 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */));
  threadData->lastEquationSolved = 16241;
}
/*
equation index: 16242
type: SIMPLE_ASSIGN
$whenCondition50 = g05.running.value and not pre(g05.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16242};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[415]] /* $whenCondition50 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[486] /* g05.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16242;
}
/*
equation index: 16243
type: WHEN

when {$whenCondition51} then
  g05.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16243};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[416]] /* $whenCondition51 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[416] /* $whenCondition51 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* g05.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[415]] /* $whenCondition50 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[415] /* $whenCondition50 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* g05.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16243;
}
/*
equation index: 16245
type: SIMPLE_ASSIGN
g05.converter.u = Integer(g05.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16245};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[8]] /* g05.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* g05.state DISCRETE */)));
  threadData->lastEquationSolved = 16245;
}
/*
equation index: 16246
type: SIMPLE_ASSIGN
g05.genState = (*Real*)(g05.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* g05.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[8]] /* g05.converter.u DISCRETE */));
  threadData->lastEquationSolved = 16246;
}
/*
equation index: 16247
type: SIMPLE_ASSIGN
$DAEres135 = if g05.running.value then der(g05.theta) - 314.1592653589793 * (g05.omegaPu - omegaCOI) else der(g05.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16247};
  (data->simulationInfo->daeModeData->residualVars[135]) /* $DAEres135 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* der(g05.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* der(g05.theta) STATE_DER */));
  threadData->lastEquationSolved = 16247;
}
/*
equation index: 16248
type: SIMPLE_ASSIGN
g05.cmPu = if g05.running.value then g05.PmPu / g05.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* g05.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* g05.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */),"g05.omegaPu"):0.0);
  threadData->lastEquationSolved = 16248;
}
/*
equation index: 16249
type: SIMPLE_ASSIGN
g05.ufPu = if g05.running.value then vrNordic_g05.limIntegrator.y * g05.Kuf * g05.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1242]] /* g05.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* g05.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 16249;
}
/*
equation index: 16250
type: SIMPLE_ASSIGN
$DAEres308 = if g05.running.value then g05.MqSatPPu - (g05.miPu - g05.MsalPu * g05.cos2Eta) else g05.MqSatPPu - g05.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16250};
  (data->simulationInfo->daeModeData->residualVars[308]) /* $DAEres308 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* g05.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[660]] /* g05.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* g05.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* g05.MqPPu PARAM */));
  threadData->lastEquationSolved = 16250;
}
/*
equation index: 16251
type: SIMPLE_ASSIGN
$DAEres309 = if g05.running.value then g05.cos2Eta - (g05.lambdaADPu / g05.lambdaAirGapPu) ^ 2.0 else g05.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16251};
  modelica_real tmp2271;
  modelica_boolean tmp2272;
  modelica_real tmp2273;
  tmp2272 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp2272)
  {
    tmp2271 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* g05.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* g05.lambdaAirGapPu variable */),"g05.lambdaAirGapPu");
    tmp2273 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* g05.cos2Eta variable */) - ((tmp2271 * tmp2271));
  }
  else
  {
    tmp2273 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* g05.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[309]) /* $DAEres309 DAE_RESIDUAL_VAR */ = tmp2273;
  threadData->lastEquationSolved = 16251;
}
/*
equation index: 16252
type: SIMPLE_ASSIGN
$DAEres310 = if g05.running.value then g05.mqsPu - g05.MqPPu / (1.0 + g05.mq * g05.lambdaAirGapPu ^ g05.nq) else g05.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16252};
  modelica_real tmp2274;
  modelica_real tmp2275;
  modelica_real tmp2276;
  modelica_real tmp2277;
  modelica_real tmp2278;
  modelica_real tmp2279;
  modelica_real tmp2280;
  modelica_boolean tmp2281;
  modelica_real tmp2282;
  tmp2281 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp2281)
  {
    tmp2274 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* g05.lambdaAirGapPu variable */);
    tmp2275 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* g05.nq PARAM */);
    if(tmp2274 < 0.0 && tmp2275 != 0.0)
    {
      tmp2277 = modf(tmp2275, &tmp2278);
      
      if(tmp2277 > 0.5)
      {
        tmp2277 -= 1.0;
        tmp2278 += 1.0;
      }
      else if(tmp2277 < -0.5)
      {
        tmp2277 += 1.0;
        tmp2278 -= 1.0;
      }
      
      if(fabs(tmp2277) < 1e-10)
        tmp2276 = pow(tmp2274, tmp2278);
      else
      {
        tmp2280 = modf(1.0/tmp2275, &tmp2279);
        if(tmp2280 > 0.5)
        {
          tmp2280 -= 1.0;
          tmp2279 += 1.0;
        }
        else if(tmp2280 < -0.5)
        {
          tmp2280 += 1.0;
          tmp2279 -= 1.0;
        }
        if(fabs(tmp2280) < 1e-10 && ((unsigned long)tmp2279 & 1))
        {
          tmp2276 = -pow(-tmp2274, tmp2277)*pow(tmp2274, tmp2278);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2274, tmp2275);
        }
      }
    }
    else
    {
      tmp2276 = pow(tmp2274, tmp2275);
    }
    if(isnan(tmp2276) || isinf(tmp2276))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2274, tmp2275);
    }
    tmp2282 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* g05.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* g05.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* g05.mq PARAM */)) * (tmp2276),"1.0 + g05.mq * g05.lambdaAirGapPu ^ g05.nq"));
  }
  else
  {
    tmp2282 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* g05.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[310]) /* $DAEres310 DAE_RESIDUAL_VAR */ = tmp2282;
  threadData->lastEquationSolved = 16252;
}
/*
equation index: 16253
type: SIMPLE_ASSIGN
$DAEres311 = if g05.running.value then g05.mdsPu - g05.MdPPu / (1.0 + g05.md * g05.lambdaAirGapPu ^ g05.nd) else g05.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16253};
  modelica_real tmp2283;
  modelica_real tmp2284;
  modelica_real tmp2285;
  modelica_real tmp2286;
  modelica_real tmp2287;
  modelica_real tmp2288;
  modelica_real tmp2289;
  modelica_boolean tmp2290;
  modelica_real tmp2291;
  tmp2290 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp2290)
  {
    tmp2283 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* g05.lambdaAirGapPu variable */);
    tmp2284 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* g05.nd PARAM */);
    if(tmp2283 < 0.0 && tmp2284 != 0.0)
    {
      tmp2286 = modf(tmp2284, &tmp2287);
      
      if(tmp2286 > 0.5)
      {
        tmp2286 -= 1.0;
        tmp2287 += 1.0;
      }
      else if(tmp2286 < -0.5)
      {
        tmp2286 += 1.0;
        tmp2287 -= 1.0;
      }
      
      if(fabs(tmp2286) < 1e-10)
        tmp2285 = pow(tmp2283, tmp2287);
      else
      {
        tmp2289 = modf(1.0/tmp2284, &tmp2288);
        if(tmp2289 > 0.5)
        {
          tmp2289 -= 1.0;
          tmp2288 += 1.0;
        }
        else if(tmp2289 < -0.5)
        {
          tmp2289 += 1.0;
          tmp2288 -= 1.0;
        }
        if(fabs(tmp2289) < 1e-10 && ((unsigned long)tmp2288 & 1))
        {
          tmp2285 = -pow(-tmp2283, tmp2286)*pow(tmp2283, tmp2287);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2283, tmp2284);
        }
      }
    }
    else
    {
      tmp2285 = pow(tmp2283, tmp2284);
    }
    if(isnan(tmp2285) || isinf(tmp2285))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2283, tmp2284);
    }
    tmp2291 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* g05.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* g05.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* g05.md PARAM */)) * (tmp2285),"1.0 + g05.md * g05.lambdaAirGapPu ^ g05.nd"));
  }
  else
  {
    tmp2291 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* g05.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[311]) /* $DAEres311 DAE_RESIDUAL_VAR */ = tmp2291;
  threadData->lastEquationSolved = 16253;
}
/*
equation index: 16254
type: SIMPLE_ASSIGN
$DAEres312 = if g05.running.value then g05.lambdaAQPu - g05.MqSatPPu * (g05.iqPu + g05.iQ1Pu + g05.iQ2Pu) else g05.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16254};
  (data->simulationInfo->daeModeData->residualVars[312]) /* $DAEres312 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* g05.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* g05.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* g05.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* g05.lambdaAQPu variable */));
  threadData->lastEquationSolved = 16254;
}
/*
equation index: 16255
type: SIMPLE_ASSIGN
$DAEres313 = if g05.running.value then g05.lambdaAirGapPu - sqrt(g05.lambdaADPu ^ 2.0 + g05.lambdaAQPu ^ 2.0) else g05.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16255};
  modelica_real tmp2292;
  modelica_real tmp2293;
  modelica_real tmp2294;
  modelica_boolean tmp2295;
  modelica_real tmp2296;
  tmp2295 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp2295)
  {
    tmp2292 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* g05.lambdaADPu variable */);
    tmp2293 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* g05.lambdaAQPu variable */);
    tmp2294 = (tmp2292 * tmp2292) + (tmp2293 * tmp2293);
    if(!(tmp2294 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g05.lambdaADPu ^ 2.0 + g05.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp2294);
      }
    }
    tmp2296 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* g05.lambdaAirGapPu variable */) - sqrt(tmp2294);
  }
  else
  {
    tmp2296 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* g05.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[313]) /* $DAEres313 DAE_RESIDUAL_VAR */ = tmp2296;
  threadData->lastEquationSolved = 16255;
}
/*
equation index: 16256
type: SIMPLE_ASSIGN
$DAEres314 = if g05.running.value then g05.sin2Eta - (g05.lambdaAQPu / g05.lambdaAirGapPu) ^ 2.0 else g05.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16256};
  modelica_real tmp2297;
  modelica_boolean tmp2298;
  modelica_real tmp2299;
  tmp2298 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp2298)
  {
    tmp2297 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* g05.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* g05.lambdaAirGapPu variable */),"g05.lambdaAirGapPu");
    tmp2299 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* g05.sin2Eta variable */) - ((tmp2297 * tmp2297));
  }
  else
  {
    tmp2299 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* g05.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[314]) /* $DAEres314 DAE_RESIDUAL_VAR */ = tmp2299;
  threadData->lastEquationSolved = 16256;
}
/*
equation index: 16257
type: SIMPLE_ASSIGN
$DAEres315 = if g05.running.value then g05.miPu - (g05.mdsPu * g05.cos2Eta + g05.mqsPu * g05.sin2Eta) else g05.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16257};
  (data->simulationInfo->daeModeData->residualVars[315]) /* $DAEres315 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* g05.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* g05.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* g05.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* g05.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* g05.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* g05.miPu variable */));
  threadData->lastEquationSolved = 16257;
}
/*
equation index: 16258
type: SIMPLE_ASSIGN
$DAEres316 = if g05.running.value then g05.MdSatPPu - (g05.miPu + g05.MsalPu * g05.sin2Eta) else g05.MdSatPPu - g05.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16258};
  (data->simulationInfo->daeModeData->residualVars[316]) /* $DAEres316 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* g05.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[660]] /* g05.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* g05.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* g05.MdPPu PARAM */));
  threadData->lastEquationSolved = 16258;
}
/*
equation index: 16259
type: SIMPLE_ASSIGN
$DAEres317 = if g05.running.value then g05.lambdaADPu - g05.MdSatPPu * (g05.idPu + g05.ifPu + g05.iDPu) else g05.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16259};
  (data->simulationInfo->daeModeData->residualVars[317]) /* $DAEres317 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* g05.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* g05.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* g05.lambdaADPu variable */));
  threadData->lastEquationSolved = 16259;
}
/*
equation index: 16260
type: SIMPLE_ASSIGN
$DAEres318 = if g05.running.value then g05.lambdaDPu - (g05.MdSatPPu * g05.idPu + (g05.MdSatPPu + g05.MrcPPu) * g05.ifPu + (g05.MdSatPPu + g05.LDPPu + g05.MrcPPu) * g05.iDPu) else g05.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16260};
  (data->simulationInfo->daeModeData->residualVars[318]) /* $DAEres318 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* g05.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* g05.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[635]] /* g05.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* g05.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* g05.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */));
  threadData->lastEquationSolved = 16260;
}
/*
equation index: 16261
type: SIMPLE_ASSIGN
$DAEres319 = if g05.running.value then g05.lambdafPu - (g05.MdSatPPu * g05.idPu + (g05.MdSatPPu + g05.LfPPu + g05.MrcPPu) * g05.ifPu + (g05.MdSatPPu + g05.MrcPPu) * g05.iDPu) else g05.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16261};
  (data->simulationInfo->daeModeData->residualVars[319]) /* $DAEres319 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* g05.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[648]] /* g05.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* g05.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* g05.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* g05.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */));
  threadData->lastEquationSolved = 16261;
}
/*
equation index: 16262
type: SIMPLE_ASSIGN
$DAEres320 = if g05.running.value then g05.lambdaQ2Pu - (g05.MqSatPPu * (g05.iqPu + g05.iQ1Pu) + (g05.MqSatPPu + g05.LQ2PPu) * g05.iQ2Pu) else g05.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16262};
  (data->simulationInfo->daeModeData->residualVars[320]) /* $DAEres320 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* g05.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* g05.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[637]] /* g05.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* g05.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* g05.iQ2Pu variable */));
  threadData->lastEquationSolved = 16262;
}
/*
equation index: 16263
type: SIMPLE_ASSIGN
$DAEres321 = if g05.running.value then g05.lambdaQ1Pu - (g05.MqSatPPu * g05.iqPu + (g05.MqSatPPu + g05.LQ1PPu) * g05.iQ1Pu + g05.MqSatPPu * g05.iQ2Pu) else g05.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16263};
  (data->simulationInfo->daeModeData->residualVars[321]) /* $DAEres321 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* g05.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[636]] /* g05.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* g05.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* g05.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* g05.iQ1Pu variable */));
  threadData->lastEquationSolved = 16263;
}
/*
equation index: 16264
type: SIMPLE_ASSIGN
$DAEres322 = if g05.running.value then g05.lambdaqPu - ((g05.MqSatPPu + g05.LqPPu + g05.XTfoPu) * g05.iqPu + g05.MqSatPPu * (g05.iQ1Pu + g05.iQ2Pu)) else g05.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16264};
  (data->simulationInfo->daeModeData->residualVars[322]) /* $DAEres322 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* g05.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* g05.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* g05.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* g05.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* g05.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* g05.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* g05.iDPu variable */));
  threadData->lastEquationSolved = 16264;
}
/*
equation index: 16265
type: SIMPLE_ASSIGN
$DAEres323 = if g05.running.value then g05.uqPu - ((g05.RaPPu + g05.RTfoPu) * g05.iqPu + g05.omegaPu * g05.lambdadPu) else g05.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16265};
  (data->simulationInfo->daeModeData->residualVars[323]) /* $DAEres323 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* g05.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* g05.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* g05.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* g05.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* g05.lambdaqPu variable */));
  threadData->lastEquationSolved = 16265;
}
/*
equation index: 16266
type: SIMPLE_ASSIGN
$DAEres324 = if g05.running.value then g05.lambdadPu - ((g05.MdSatPPu + g05.LdPPu + g05.XTfoPu) * g05.idPu + g05.MdSatPPu * (g05.ifPu + g05.iDPu)) else g05.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16266};
  (data->simulationInfo->daeModeData->residualVars[324]) /* $DAEres324 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* g05.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* g05.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* g05.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* g05.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* g05.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */));
  threadData->lastEquationSolved = 16266;
}
/*
equation index: 16267
type: SIMPLE_ASSIGN
$DAEres325 = if g05.running.value then 100.0 * g05.terminal.i.im / g05.SNom - (sin(g05.theta) * g05.iqPu - cos(g05.theta) * g05.idPu) else g05.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16267};
  (data->simulationInfo->daeModeData->residualVars[325]) /* $DAEres325 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */),"g05.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* g05.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* g05.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */));
  threadData->lastEquationSolved = 16267;
}
/*
equation index: 16268
type: SIMPLE_ASSIGN
$DAEres1122 = if g05.running.value then 100.0 * g05.terminal.i.re / g05.SNom - (sin(g05.theta) * g05.idPu + cos(g05.theta) * g05.iqPu) else g05.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16268};
  (data->simulationInfo->daeModeData->residualVars[1122]) /* $DAEres1122 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */),"g05.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* g05.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* g05.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */));
  threadData->lastEquationSolved = 16268;
}
/*
equation index: 16269
type: SIMPLE_ASSIGN
$DAEres1123 = if g05.running.value then g05.udPu - ((g05.RaPPu + g05.RTfoPu) * g05.idPu - g05.omegaPu * g05.lambdaqPu) else g05.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16269};
  (data->simulationInfo->daeModeData->residualVars[1123]) /* $DAEres1123 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* g05.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* g05.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* g05.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* g05.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* g05.lambdadPu variable */));
  threadData->lastEquationSolved = 16269;
}
/*
equation index: 16270
type: SIMPLE_ASSIGN
$DAEres1124 = if g05.running.value then g05.terminal.V.re - (sin(g05.theta) * g05.udPu + cos(g05.theta) * g05.uqPu) else g05.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16270};
  (data->simulationInfo->daeModeData->residualVars[1124]) /* $DAEres1124 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* g05.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* g05.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* g05.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* g05.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* g05.udPu variable */));
  threadData->lastEquationSolved = 16270;
}
/*
equation index: 16271
type: SIMPLE_ASSIGN
$DAEres1125 = if g05.running.value then g05.terminal.V.im - (sin(g05.theta) * g05.uqPu - cos(g05.theta) * g05.udPu) else g05.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16271};
  (data->simulationInfo->daeModeData->residualVars[1125]) /* $DAEres1125 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* g05.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* g05.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* g05.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* g05.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* g05.uqPu variable */));
  threadData->lastEquationSolved = 16271;
}
/*
equation index: 16272
type: SIMPLE_ASSIGN
g05.uPu.im = if g05.running.value then g05.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* g05.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 16272;
}
/*
equation index: 16273
type: SIMPLE_ASSIGN
g05.thetaInternal.value = if g05.running.value then Modelica.Math.atan3(g05.udPu, g05.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* g05.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* g05.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* g05.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 16273;
}
/*
equation index: 16274
type: SIMPLE_ASSIGN
$DAEres1233 = if g05.running.value then (-g05.RQ1PPu) * g05.iQ1Pu - 0.0031830988618379067 * der(g05.lambdaQ1Pu) else der(g05.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16274};
  (data->simulationInfo->daeModeData->residualVars[1233]) /* $DAEres1233 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[672]] /* g05.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* g05.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* der(g05.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* der(g05.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 16274;
}
/*
equation index: 16275
type: SIMPLE_ASSIGN
g05.cePu = if g05.running.value then g05.lambdaqPu * g05.idPu - g05.lambdadPu * g05.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* g05.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* g05.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* g05.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* g05.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* g05.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 16275;
}
/*
equation index: 16276
type: SIMPLE_ASSIGN
g05.PePu = if g05.running.value then g05.cePu * g05.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1202]] /* g05.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* g05.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 16276;
}
/*
equation index: 16277
type: SIMPLE_ASSIGN
$DAEres1234 = if g05.running.value then 2.0 * g05.H * der(g05.omegaPu) - (g05.cmPu * g05.PNomTurb / g05.SNom + g05.DPu * (omegaCOI - g05.omegaPu) - g05.cePu) else der(g05.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16277};
  (data->simulationInfo->daeModeData->residualVars[1234]) /* $DAEres1234 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[628]] /* g05.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* der(g05.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* g05.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* g05.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */),"g05.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[626]] /* g05.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* g05.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* g05.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* der(g05.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 16277;
}
/*
equation index: 16278
type: SIMPLE_ASSIGN
$DAEres1235 = if g05.running.value then (-g05.RQ2PPu) * g05.iQ2Pu - 0.0031830988618379067 * der(g05.lambdaQ2Pu) else der(g05.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16278};
  (data->simulationInfo->daeModeData->residualVars[1235]) /* $DAEres1235 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* g05.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* g05.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* der(g05.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* der(g05.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 16278;
}
/*
equation index: 16279
type: SIMPLE_ASSIGN
vrNordic_g05.IrPu = if g05.running.value then g05.RfPPu * g05.ifPu / (g05.rTfoPu * g05.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* vrNordic_g05.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* g05.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* g05.Kuf PARAM */)),"g05.rTfoPu * g05.Kuf")):0.0);
  threadData->lastEquationSolved = 16279;
}
/*
equation index: 16280
type: SIMPLE_ASSIGN
vrNordic_g05.dIf.y = vrNordic_g05.IrPu - vrNordic_g05.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* vrNordic_g05.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4449]] /* vrNordic_g05.const2.k PARAM */);
  threadData->lastEquationSolved = 16280;
}
/*
equation index: 16281
type: SIMPLE_ASSIGN
vrNordic_g05.gain1.y = vrNordic_g05.gain1.k * vrNordic_g05.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3551]] /* vrNordic_g05.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4455]] /* vrNordic_g05.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */));
  threadData->lastEquationSolved = 16281;
}
/*
equation index: 16282
type: SIMPLE_ASSIGN
vrNordic_g05.overExcitationLimitation.y = if vrNordic_g05.dIf.y < -0.1 then -1.0 else if vrNordic_g05.dIf.y < 0.0 then 0.0 else if vrNordic_g05.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g05.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16282};
  modelica_boolean tmp2300;
  modelica_real tmp2301;
  modelica_real tmp2302;
  modelica_boolean tmp2303;
  modelica_real tmp2304;
  modelica_real tmp2305;
  modelica_boolean tmp2306;
  modelica_boolean tmp2307;
  modelica_real tmp2308;
  modelica_boolean tmp2309;
  modelica_real tmp2310;
  tmp2301 = 1.0;
  tmp2302 = 0.1;
  relationhysteresis(data, &tmp2300, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */), -0.1, tmp2301, tmp2302, 294, Less, LessZC);
  tmp2309 = (modelica_boolean)tmp2300;
  if(tmp2309)
  {
    tmp2310 = -1.0;
  }
  else
  {
    tmp2304 = 1.0;
    tmp2305 = 0.0;
    relationhysteresis(data, &tmp2303, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */), 0.0, tmp2304, tmp2305, 295, Less, LessZC);
    tmp2307 = (modelica_boolean)tmp2303;
    if(tmp2307)
    {
      tmp2308 = 0.0;
    }
    else
    {
      tmp2306 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4503]] /* vrNordic_g05.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp2308 = (tmp2306?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */));
    }
    tmp2310 = tmp2308;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */) = tmp2310;
  threadData->lastEquationSolved = 16282;
}
/*
equation index: 16283
type: SIMPLE_ASSIGN
$DAEres1236 = (if vrNordic_g05.timer.y < vrNordic_g05.timer.outMin and vrNordic_g05.timer.k * vrNordic_g05.overExcitationLimitation.y < 0.0 or vrNordic_g05.timer.y > vrNordic_g05.timer.outMax and vrNordic_g05.timer.k * vrNordic_g05.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g05.timer.k * vrNordic_g05.overExcitationLimitation.y) - der(vrNordic_g05.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16283};
  modelica_boolean tmp2311;
  modelica_real tmp2312;
  modelica_real tmp2313;
  modelica_boolean tmp2314;
  modelica_real tmp2315;
  modelica_real tmp2316;
  modelica_boolean tmp2317;
  modelica_real tmp2318;
  modelica_real tmp2319;
  modelica_boolean tmp2320;
  modelica_real tmp2321;
  modelica_real tmp2322;
  tmp2312 = 1.0;
  tmp2313 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4513]] /* vrNordic_g05.timer.outMin PARAM */));
  relationhysteresis(data, &tmp2311, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4513]] /* vrNordic_g05.timer.outMin PARAM */), tmp2312, tmp2313, 300, Less, LessZC);
  tmp2315 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */))) * (1.0);
  tmp2316 = 0.0;
  relationhysteresis(data, &tmp2314, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)), 0.0, tmp2315, tmp2316, 301, Less, LessZC);
  tmp2318 = 1.0;
  tmp2319 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4512]] /* vrNordic_g05.timer.outMax PARAM */));
  relationhysteresis(data, &tmp2317, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4512]] /* vrNordic_g05.timer.outMax PARAM */), tmp2318, tmp2319, 302, Greater, GreaterZC);
  tmp2321 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */))) * (1.0);
  tmp2322 = 0.0;
  relationhysteresis(data, &tmp2320, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)), 0.0, tmp2321, tmp2322, 303, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1236]) /* $DAEres1236 DAE_RESIDUAL_VAR */ = (((tmp2311 && tmp2314) || (tmp2317 && tmp2320))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* der(vrNordic_g05.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 16283;
}
/*
equation index: 16284
type: SIMPLE_ASSIGN
$DAEres1237 = if g05.running.value then g05.ufPu - (g05.RfPPu * g05.ifPu + 0.0031830988618379067 * der(g05.lambdafPu)) else der(g05.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16284};
  (data->simulationInfo->daeModeData->residualVars[1237]) /* $DAEres1237 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1242]] /* g05.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* g05.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* g05.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* der(g05.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* der(g05.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 16284;
}
/*
equation index: 16285
type: SIMPLE_ASSIGN
$DAEres1238 = if g05.running.value then (-g05.RDPPu) * g05.iDPu - 0.0031830988618379067 * der(g05.lambdaDPu) else der(g05.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16285};
  (data->simulationInfo->daeModeData->residualVars[1238]) /* $DAEres1238 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[671]] /* g05.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* g05.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* der(g05.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* der(g05.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 16285;
}
/*
equation index: 16286
type: SIMPLE_ASSIGN
g05.iStatorPu.im = if g05.running.value then g05.rTfoPu * g05.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 16286;
}
/*
equation index: 16287
type: SIMPLE_ASSIGN
g05.uPu.re = if g05.running.value then g05.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* g05.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 16287;
}
/*
equation index: 16288
type: SIMPLE_ASSIGN
g05.UPu = if g05.running.value then (g05.terminal.V.re ^ 2.0 + g05.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16288};
  modelica_real tmp2323;
  modelica_real tmp2324;
  modelica_real tmp2325;
  modelica_boolean tmp2326;
  modelica_real tmp2327;
  tmp2326 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp2326)
  {
    tmp2323 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */);
    tmp2324 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */);
    tmp2325 = (tmp2323 * tmp2323) + (tmp2324 * tmp2324);
    if(tmp2325 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2325, 0.5);
    }
    tmp2327 = sqrt(tmp2325);
  }
  else
  {
    tmp2327 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* g05.UPu variable */) = tmp2327;
  threadData->lastEquationSolved = 16288;
}
/*
equation index: 16289
type: SIMPLE_ASSIGN
goverNordic_g05.PGenPu = if g05.running.value then (-g05.terminal.V.re) * g05.terminal.i.re - g05.terminal.V.im * g05.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2004]] /* goverNordic_g05.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 16289;
}
/*
equation index: 16290
type: SIMPLE_ASSIGN
goverNordic_g05.perUnitP.y = goverNordic_g05.perUnitP.k * goverNordic_g05.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2020]] /* goverNordic_g05.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2430]] /* goverNordic_g05.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2004]] /* goverNordic_g05.PGenPu variable */));
  threadData->lastEquationSolved = 16290;
}
/*
equation index: 16291
type: SIMPLE_ASSIGN
$DAEres1365 = goverNordic_g05.firstOrder1.k * goverNordic_g05.perUnitP.y + (-goverNordic_g05.firstOrder1.y) - der(goverNordic_g05.firstOrder1.y) * goverNordic_g05.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16291};
  (data->simulationInfo->daeModeData->residualVars[1365]) /* $DAEres1365 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2408]] /* goverNordic_g05.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2020]] /* goverNordic_g05.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* goverNordic_g05.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[456]] /* der(goverNordic_g05.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2407]] /* goverNordic_g05.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 16291;
}
/*
equation index: 16292
type: SIMPLE_ASSIGN
g05.PGen = if g05.running.value then 100.0 * goverNordic_g05.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* g05.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2004]] /* goverNordic_g05.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16292;
}
/*
equation index: 16293
type: SIMPLE_ASSIGN
g05.QGenPu = if g05.running.value then g05.terminal.V.re * g05.terminal.i.im - g05.terminal.V.im * g05.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* g05.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 16293;
}
/*
equation index: 16294
type: SIMPLE_ASSIGN
g05.QGen = if g05.running.value then 100.0 * g05.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* g05.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* g05.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16294;
}
/*
equation index: 16295
type: SIMPLE_ASSIGN
g05.uStatorPu.re = if g05.running.value then (g05.terminal.V.re + (-100.0) * (g05.terminal.i.re * g05.RTfoPu - g05.terminal.i.im * g05.XTfoPu) / g05.SNom) / g05.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* g05.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* g05.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */),"g05.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */),"g05.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16295;
}
/*
equation index: 16296
type: SIMPLE_ASSIGN
g05.uStatorPu.im = if g05.running.value then (g05.terminal.V.im + (-100.0) * (g05.terminal.i.re * g05.XTfoPu + g05.terminal.i.im * g05.RTfoPu) / g05.SNom) / g05.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* g05.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* g05.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* g05.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* g05.SNom PARAM */),"g05.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */),"g05.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16296;
}
/*
equation index: 16297
type: SIMPLE_ASSIGN
vrNordic_g05.UsPu = if g05.running.value then if g05.uStatorPu.re == 0.0 and g05.uStatorPu.im == 0.0 then 0.0 else (g05.uStatorPu.re ^ 2.0 + g05.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16297};
  modelica_real tmp2328;
  modelica_real tmp2329;
  modelica_real tmp2330;
  modelica_boolean tmp2331;
  modelica_real tmp2332;
  modelica_boolean tmp2333;
  modelica_real tmp2334;
  tmp2333 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp2333)
  {
    tmp2331 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */) == 0.0));
    if(tmp2331)
    {
      tmp2332 = 0.0;
    }
    else
    {
      tmp2328 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */);
      tmp2329 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */);
      tmp2330 = (tmp2328 * tmp2328) + (tmp2329 * tmp2329);
      if(tmp2330 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2330, 0.5);
      }
      tmp2332 = sqrt(tmp2330);
    }
    tmp2334 = tmp2332;
  }
  else
  {
    tmp2334 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* vrNordic_g05.UsPu variable */) = tmp2334;
  threadData->lastEquationSolved = 16297;
}
/*
equation index: 16298
type: SIMPLE_ASSIGN
vrNordic_g05.dU.y = vrNordic_g05.const1.k - vrNordic_g05.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3547]] /* vrNordic_g05.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4448]] /* vrNordic_g05.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* vrNordic_g05.UsPu variable */);
  threadData->lastEquationSolved = 16298;
}
/*
equation index: 16299
type: SIMPLE_ASSIGN
vrNordic_g05.add.y = vrNordic_g05.add.k1 * vrNordic_g05.dU.y + vrNordic_g05.add.k2 * vrNordic_g05.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4445]] /* vrNordic_g05.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3547]] /* vrNordic_g05.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4446]] /* vrNordic_g05.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3561]] /* vrNordic_g05.limiter.y variable */));
  threadData->lastEquationSolved = 16299;
}
/*
equation index: 16300
type: SIMPLE_ASSIGN
vrNordic_g05.switch.y = if vrNordic_g05.greaterEqualThreshold.y then vrNordic_g05.gain1.y else vrNordic_g05.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3564]] /* vrNordic_g05.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1027]] /* vrNordic_g05.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3551]] /* vrNordic_g05.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */));
  threadData->lastEquationSolved = 16300;
}
/*
equation index: 16301
type: SIMPLE_ASSIGN
vrNordic_g05.min1.y = if vrNordic_g05.switch.y < vrNordic_g05.add.y then vrNordic_g05.switch.y else vrNordic_g05.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16301};
  modelica_boolean tmp2335;
  modelica_real tmp2336;
  modelica_real tmp2337;
  tmp2336 = 1.0;
  tmp2337 = 1.0;
  relationhysteresis(data, &tmp2335, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3564]] /* vrNordic_g05.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */), tmp2336, tmp2337, 292, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3562]] /* vrNordic_g05.min1.y variable */) = (tmp2335?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3564]] /* vrNordic_g05.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */));
  threadData->lastEquationSolved = 16301;
}
/*
equation index: 16302
type: SIMPLE_ASSIGN
vrNordic_g05.kMulDU.y = vrNordic_g05.kMulDU.k * vrNordic_g05.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3552]] /* vrNordic_g05.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4457]] /* vrNordic_g05.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3562]] /* vrNordic_g05.min1.y variable */));
  threadData->lastEquationSolved = 16302;
}
/*
equation index: 16303
type: SIMPLE_ASSIGN
$DAEres1366 = vrNordic_g05.leadLag.a_end * vrNordic_g05.kMulDU.y + (-vrNordic_g05.leadLag.a[2]) * vrNordic_g05.leadLag.x_scaled[1] - der(vrNordic_g05.leadLag.x_scaled[1]) * vrNordic_g05.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16303};
  (data->simulationInfo->daeModeData->residualVars[1366]) /* $DAEres1366 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4462]] /* vrNordic_g05.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3552]] /* vrNordic_g05.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4461]] /* vrNordic_g05.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* vrNordic_g05.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* der(vrNordic_g05.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4460]] /* vrNordic_g05.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 16303;
}
/*
equation index: 16304
type: SIMPLE_ASSIGN
vrNordic_g05.leadLag.y = (vrNordic_g05.leadLag.bb[2] - vrNordic_g05.leadLag.d * vrNordic_g05.leadLag.a[2]) * vrNordic_g05.leadLag.x[1] + vrNordic_g05.leadLag.d * vrNordic_g05.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3554]] /* vrNordic_g05.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4466]] /* vrNordic_g05.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4467]] /* vrNordic_g05.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4461]] /* vrNordic_g05.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3553]] /* vrNordic_g05.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4467]] /* vrNordic_g05.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3552]] /* vrNordic_g05.kMulDU.y variable */));
  threadData->lastEquationSolved = 16304;
}
/*
equation index: 16305
type: SIMPLE_ASSIGN
vrNordic_g05.feedback1.y = vrNordic_g05.leadLag.y - vrNordic_g05.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3549]] /* vrNordic_g05.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3554]] /* vrNordic_g05.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 16305;
}
/*
equation index: 16306
type: SIMPLE_ASSIGN
vrNordic_g05.gain.y = vrNordic_g05.gain.k * vrNordic_g05.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4454]] /* vrNordic_g05.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3549]] /* vrNordic_g05.feedback1.y variable */));
  threadData->lastEquationSolved = 16306;
}
/*
equation index: 16307
type: SIMPLE_ASSIGN
$DAEres1367 = (if vrNordic_g05.limIntegrator.y < vrNordic_g05.limIntegrator.outMin and vrNordic_g05.limIntegrator.k * vrNordic_g05.gain.y < 0.0 or vrNordic_g05.limIntegrator.y > vrNordic_g05.limIntegrator.outMax and vrNordic_g05.limIntegrator.k * vrNordic_g05.gain.y > 0.0 then 0.0 else vrNordic_g05.limIntegrator.k * vrNordic_g05.gain.y) - der(vrNordic_g05.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16307};
  modelica_boolean tmp2338;
  modelica_real tmp2339;
  modelica_real tmp2340;
  modelica_boolean tmp2341;
  modelica_real tmp2342;
  modelica_real tmp2343;
  modelica_boolean tmp2344;
  modelica_real tmp2345;
  modelica_real tmp2346;
  modelica_boolean tmp2347;
  modelica_real tmp2348;
  modelica_real tmp2349;
  tmp2339 = 1.0;
  tmp2340 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4499]] /* vrNordic_g05.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp2338, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4499]] /* vrNordic_g05.limIntegrator.outMin PARAM */), tmp2339, tmp2340, 296, Less, LessZC);
  tmp2342 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */))) * (1.0);
  tmp2343 = 0.0;
  relationhysteresis(data, &tmp2341, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)), 0.0, tmp2342, tmp2343, 297, Less, LessZC);
  tmp2345 = 1.0;
  tmp2346 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4498]] /* vrNordic_g05.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp2344, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4498]] /* vrNordic_g05.limIntegrator.outMax PARAM */), tmp2345, tmp2346, 298, Greater, GreaterZC);
  tmp2348 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */))) * (1.0);
  tmp2349 = 0.0;
  relationhysteresis(data, &tmp2347, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)), 0.0, tmp2348, tmp2349, 299, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1367]) /* $DAEres1367 DAE_RESIDUAL_VAR */ = (((tmp2338 && tmp2341) || (tmp2344 && tmp2347))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* der(vrNordic_g05.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 16307;
}
/*
equation index: 16308
type: SIMPLE_ASSIGN
g05.iStatorPu.re = if g05.running.value then g05.rTfoPu * g05.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* g05.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* g05.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 16308;
}
/*
equation index: 16309
type: SIMPLE_ASSIGN
g05.sStatorPu.re = if g05.running.value then g05.uStatorPu.re * g05.iStatorPu.re + g05.uStatorPu.im * g05.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* g05.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16309;
}
/*
equation index: 16310
type: SIMPLE_ASSIGN
g05.sStatorPu.im = if g05.running.value then g05.uStatorPu.im * g05.iStatorPu.re - g05.uStatorPu.re * g05.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* g05.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 16310;
}
/*
equation index: 16311
type: SIMPLE_ASSIGN
g05.QStatorPu = if g05.running.value then -g05.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* g05.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* g05.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16311;
}
/*
equation index: 16312
type: SIMPLE_ASSIGN
g05.QStatorPuQNom = if g05.running.value then 100.0 * g05.QStatorPu / g05.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* g05.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* g05.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* g05.QNomAlt PARAM */),"g05.QNomAlt")):0.0);
  threadData->lastEquationSolved = 16312;
}
/*
equation index: 16313
type: SIMPLE_ASSIGN
g05.IStatorPu = if g05.running.value then if g05.iStatorPu.re == 0.0 and g05.iStatorPu.im == 0.0 then 0.0 else (g05.iStatorPu.re ^ 2.0 + g05.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16313};
  modelica_real tmp2350;
  modelica_real tmp2351;
  modelica_real tmp2352;
  modelica_boolean tmp2353;
  modelica_real tmp2354;
  modelica_boolean tmp2355;
  modelica_real tmp2356;
  tmp2355 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[486]] /* g05.running.value DISCRETE */);
  if(tmp2355)
  {
    tmp2353 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */) == 0.0));
    if(tmp2353)
    {
      tmp2354 = 0.0;
    }
    else
    {
      tmp2350 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */);
      tmp2351 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */);
      tmp2352 = (tmp2350 * tmp2350) + (tmp2351 * tmp2351);
      if(tmp2352 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2352, 0.5);
      }
      tmp2354 = sqrt(tmp2352);
    }
    tmp2356 = tmp2354;
  }
  else
  {
    tmp2356 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* g05.IStatorPu variable */) = tmp2356;
  threadData->lastEquationSolved = 16313;
}
/*
equation index: 16314
type: SIMPLE_ASSIGN
$whenCondition52 = not pre(g04.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16314};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[417]] /* $whenCondition52 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[482] /* g04.running.value DISCRETE */));
  threadData->lastEquationSolved = 16314;
}
/*
equation index: 16315
type: WHEN

when {} then
  g04.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16315};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[417]] /* $whenCondition52 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[417] /* $whenCondition52 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16315;
}
/*
equation index: 16317
type: SIMPLE_ASSIGN
$whenCondition54 = not g04.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16317};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[419]] /* $whenCondition54 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */));
  threadData->lastEquationSolved = 16317;
}
/*
equation index: 16318
type: SIMPLE_ASSIGN
$whenCondition53 = g04.running.value and not pre(g04.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16318};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[418]] /* $whenCondition53 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[482] /* g04.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16318;
}
/*
equation index: 16319
type: WHEN

when {$whenCondition54} then
  g04.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16319};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[419]] /* $whenCondition54 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[419] /* $whenCondition54 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[7]] /* g04.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[418]] /* $whenCondition53 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[418] /* $whenCondition53 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[7]] /* g04.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16319;
}
/*
equation index: 16321
type: SIMPLE_ASSIGN
g04.converter.u = Integer(g04.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16321};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[6]] /* g04.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[7]] /* g04.state DISCRETE */)));
  threadData->lastEquationSolved = 16321;
}
/*
equation index: 16322
type: SIMPLE_ASSIGN
g04.genState = (*Real*)(g04.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1166]] /* g04.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[6]] /* g04.converter.u DISCRETE */));
  threadData->lastEquationSolved = 16322;
}
/*
equation index: 16323
type: SIMPLE_ASSIGN
$DAEres136 = if g04.running.value then der(g04.theta) - 314.1592653589793 * (g04.omegaPu - omegaCOI) else der(g04.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16323};
  (data->simulationInfo->daeModeData->residualVars[136]) /* $DAEres136 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(g04.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(g04.theta) STATE_DER */));
  threadData->lastEquationSolved = 16323;
}
/*
equation index: 16324
type: SIMPLE_ASSIGN
g04.cmPu = if g04.running.value then g04.PmPu / g04.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* g04.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* g04.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */),"g04.omegaPu"):0.0);
  threadData->lastEquationSolved = 16324;
}
/*
equation index: 16325
type: SIMPLE_ASSIGN
g04.ufPu = if g04.running.value then vrNordic_g04.limIntegrator.y * g04.Kuf * g04.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* g04.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* g04.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 16325;
}
/*
equation index: 16326
type: SIMPLE_ASSIGN
$DAEres330 = if g04.running.value then g04.mqsPu - g04.MqPPu / (1.0 + g04.mq * g04.lambdaAirGapPu ^ g04.nq) else g04.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16326};
  modelica_real tmp2357;
  modelica_real tmp2358;
  modelica_real tmp2359;
  modelica_real tmp2360;
  modelica_real tmp2361;
  modelica_real tmp2362;
  modelica_real tmp2363;
  modelica_boolean tmp2364;
  modelica_real tmp2365;
  tmp2364 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp2364)
  {
    tmp2357 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* g04.lambdaAirGapPu variable */);
    tmp2358 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* g04.nq PARAM */);
    if(tmp2357 < 0.0 && tmp2358 != 0.0)
    {
      tmp2360 = modf(tmp2358, &tmp2361);
      
      if(tmp2360 > 0.5)
      {
        tmp2360 -= 1.0;
        tmp2361 += 1.0;
      }
      else if(tmp2360 < -0.5)
      {
        tmp2360 += 1.0;
        tmp2361 -= 1.0;
      }
      
      if(fabs(tmp2360) < 1e-10)
        tmp2359 = pow(tmp2357, tmp2361);
      else
      {
        tmp2363 = modf(1.0/tmp2358, &tmp2362);
        if(tmp2363 > 0.5)
        {
          tmp2363 -= 1.0;
          tmp2362 += 1.0;
        }
        else if(tmp2363 < -0.5)
        {
          tmp2363 += 1.0;
          tmp2362 -= 1.0;
        }
        if(fabs(tmp2363) < 1e-10 && ((unsigned long)tmp2362 & 1))
        {
          tmp2359 = -pow(-tmp2357, tmp2360)*pow(tmp2357, tmp2361);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2357, tmp2358);
        }
      }
    }
    else
    {
      tmp2359 = pow(tmp2357, tmp2358);
    }
    if(isnan(tmp2359) || isinf(tmp2359))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2357, tmp2358);
    }
    tmp2365 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1182]] /* g04.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* g04.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* g04.mq PARAM */)) * (tmp2359),"1.0 + g04.mq * g04.lambdaAirGapPu ^ g04.nq"));
  }
  else
  {
    tmp2365 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1182]] /* g04.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[330]) /* $DAEres330 DAE_RESIDUAL_VAR */ = tmp2365;
  threadData->lastEquationSolved = 16326;
}
/*
equation index: 16327
type: SIMPLE_ASSIGN
$DAEres331 = if g04.running.value then g04.mdsPu - g04.MdPPu / (1.0 + g04.md * g04.lambdaAirGapPu ^ g04.nd) else g04.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16327};
  modelica_real tmp2366;
  modelica_real tmp2367;
  modelica_real tmp2368;
  modelica_real tmp2369;
  modelica_real tmp2370;
  modelica_real tmp2371;
  modelica_real tmp2372;
  modelica_boolean tmp2373;
  modelica_real tmp2374;
  tmp2373 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp2373)
  {
    tmp2366 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* g04.lambdaAirGapPu variable */);
    tmp2367 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* g04.nd PARAM */);
    if(tmp2366 < 0.0 && tmp2367 != 0.0)
    {
      tmp2369 = modf(tmp2367, &tmp2370);
      
      if(tmp2369 > 0.5)
      {
        tmp2369 -= 1.0;
        tmp2370 += 1.0;
      }
      else if(tmp2369 < -0.5)
      {
        tmp2369 += 1.0;
        tmp2370 -= 1.0;
      }
      
      if(fabs(tmp2369) < 1e-10)
        tmp2368 = pow(tmp2366, tmp2370);
      else
      {
        tmp2372 = modf(1.0/tmp2367, &tmp2371);
        if(tmp2372 > 0.5)
        {
          tmp2372 -= 1.0;
          tmp2371 += 1.0;
        }
        else if(tmp2372 < -0.5)
        {
          tmp2372 += 1.0;
          tmp2371 -= 1.0;
        }
        if(fabs(tmp2372) < 1e-10 && ((unsigned long)tmp2371 & 1))
        {
          tmp2368 = -pow(-tmp2366, tmp2369)*pow(tmp2366, tmp2370);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2366, tmp2367);
        }
      }
    }
    else
    {
      tmp2368 = pow(tmp2366, tmp2367);
    }
    if(isnan(tmp2368) || isinf(tmp2368))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2366, tmp2367);
    }
    tmp2374 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* g04.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* g04.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* g04.md PARAM */)) * (tmp2368),"1.0 + g04.md * g04.lambdaAirGapPu ^ g04.nd"));
  }
  else
  {
    tmp2374 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* g04.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[331]) /* $DAEres331 DAE_RESIDUAL_VAR */ = tmp2374;
  threadData->lastEquationSolved = 16327;
}
/*
equation index: 16328
type: SIMPLE_ASSIGN
$DAEres332 = if g04.running.value then g04.lambdaAirGapPu - sqrt(g04.lambdaADPu ^ 2.0 + g04.lambdaAQPu ^ 2.0) else g04.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16328};
  modelica_real tmp2375;
  modelica_real tmp2376;
  modelica_real tmp2377;
  modelica_boolean tmp2378;
  modelica_real tmp2379;
  tmp2378 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp2378)
  {
    tmp2375 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* g04.lambdaADPu variable */);
    tmp2376 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* g04.lambdaAQPu variable */);
    tmp2377 = (tmp2375 * tmp2375) + (tmp2376 * tmp2376);
    if(!(tmp2377 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g04.lambdaADPu ^ 2.0 + g04.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp2377);
      }
    }
    tmp2379 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* g04.lambdaAirGapPu variable */) - sqrt(tmp2377);
  }
  else
  {
    tmp2379 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* g04.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[332]) /* $DAEres332 DAE_RESIDUAL_VAR */ = tmp2379;
  threadData->lastEquationSolved = 16328;
}
/*
equation index: 16329
type: SIMPLE_ASSIGN
$DAEres333 = if g04.running.value then g04.cos2Eta - (g04.lambdaADPu / g04.lambdaAirGapPu) ^ 2.0 else g04.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16329};
  modelica_real tmp2380;
  modelica_boolean tmp2381;
  modelica_real tmp2382;
  tmp2381 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp2381)
  {
    tmp2380 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* g04.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* g04.lambdaAirGapPu variable */),"g04.lambdaAirGapPu");
    tmp2382 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* g04.cos2Eta variable */) - ((tmp2380 * tmp2380));
  }
  else
  {
    tmp2382 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* g04.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[333]) /* $DAEres333 DAE_RESIDUAL_VAR */ = tmp2382;
  threadData->lastEquationSolved = 16329;
}
/*
equation index: 16330
type: SIMPLE_ASSIGN
$DAEres334 = if g04.running.value then g04.MqSatPPu - (g04.miPu - g04.MsalPu * g04.cos2Eta) else g04.MqSatPPu - g04.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16330};
  (data->simulationInfo->daeModeData->residualVars[334]) /* $DAEres334 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* g04.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* g04.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* g04.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* g04.MqPPu PARAM */));
  threadData->lastEquationSolved = 16330;
}
/*
equation index: 16331
type: SIMPLE_ASSIGN
$DAEres335 = if g04.running.value then g04.lambdaQ2Pu - (g04.MqSatPPu * (g04.iqPu + g04.iQ1Pu) + (g04.MqSatPPu + g04.LQ2PPu) * g04.iQ2Pu) else g04.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16331};
  (data->simulationInfo->daeModeData->residualVars[335]) /* $DAEres335 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* g04.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* g04.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* g04.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* g04.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* g04.iQ2Pu variable */));
  threadData->lastEquationSolved = 16331;
}
/*
equation index: 16332
type: SIMPLE_ASSIGN
$DAEres336 = if g04.running.value then g04.lambdaQ1Pu - (g04.MqSatPPu * g04.iqPu + (g04.MqSatPPu + g04.LQ1PPu) * g04.iQ1Pu + g04.MqSatPPu * g04.iQ2Pu) else g04.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16332};
  (data->simulationInfo->daeModeData->residualVars[336]) /* $DAEres336 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* g04.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* g04.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* g04.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* g04.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* g04.iQ1Pu variable */));
  threadData->lastEquationSolved = 16332;
}
/*
equation index: 16333
type: SIMPLE_ASSIGN
$DAEres337 = if g04.running.value then g04.lambdaAQPu - g04.MqSatPPu * (g04.iqPu + g04.iQ1Pu + g04.iQ2Pu) else g04.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16333};
  (data->simulationInfo->daeModeData->residualVars[337]) /* $DAEres337 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* g04.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* g04.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* g04.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* g04.lambdaAQPu variable */));
  threadData->lastEquationSolved = 16333;
}
/*
equation index: 16334
type: SIMPLE_ASSIGN
$DAEres338 = if g04.running.value then g04.sin2Eta - (g04.lambdaAQPu / g04.lambdaAirGapPu) ^ 2.0 else g04.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16334};
  modelica_real tmp2383;
  modelica_boolean tmp2384;
  modelica_real tmp2385;
  tmp2384 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp2384)
  {
    tmp2383 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* g04.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* g04.lambdaAirGapPu variable */),"g04.lambdaAirGapPu");
    tmp2385 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* g04.sin2Eta variable */) - ((tmp2383 * tmp2383));
  }
  else
  {
    tmp2385 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* g04.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[338]) /* $DAEres338 DAE_RESIDUAL_VAR */ = tmp2385;
  threadData->lastEquationSolved = 16334;
}
/*
equation index: 16335
type: SIMPLE_ASSIGN
$DAEres339 = if g04.running.value then g04.miPu - (g04.mdsPu * g04.cos2Eta + g04.mqsPu * g04.sin2Eta) else g04.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16335};
  (data->simulationInfo->daeModeData->residualVars[339]) /* $DAEres339 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* g04.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* g04.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* g04.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1182]] /* g04.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* g04.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* g04.miPu variable */));
  threadData->lastEquationSolved = 16335;
}
/*
equation index: 16336
type: SIMPLE_ASSIGN
$DAEres340 = if g04.running.value then g04.MdSatPPu - (g04.miPu + g04.MsalPu * g04.sin2Eta) else g04.MdSatPPu - g04.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16336};
  (data->simulationInfo->daeModeData->residualVars[340]) /* $DAEres340 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* g04.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* g04.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* g04.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* g04.MdPPu PARAM */));
  threadData->lastEquationSolved = 16336;
}
/*
equation index: 16337
type: SIMPLE_ASSIGN
$DAEres341 = if g04.running.value then g04.uqPu - ((g04.RaPPu + g04.RTfoPu) * g04.iqPu + g04.omegaPu * g04.lambdadPu) else g04.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16337};
  (data->simulationInfo->daeModeData->residualVars[341]) /* $DAEres341 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* g04.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* g04.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* g04.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* g04.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* g04.lambdaqPu variable */));
  threadData->lastEquationSolved = 16337;
}
/*
equation index: 16338
type: SIMPLE_ASSIGN
$DAEres342 = if g04.running.value then g04.lambdaqPu - ((g04.MqSatPPu + g04.LqPPu + g04.XTfoPu) * g04.iqPu + g04.MqSatPPu * (g04.iQ1Pu + g04.iQ2Pu)) else g04.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16338};
  (data->simulationInfo->daeModeData->residualVars[342]) /* $DAEres342 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* g04.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* g04.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* g04.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* g04.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* g04.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* g04.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* g04.iDPu variable */));
  threadData->lastEquationSolved = 16338;
}
/*
equation index: 16339
type: SIMPLE_ASSIGN
$DAEres343 = if g04.running.value then g04.lambdaADPu - g04.MdSatPPu * (g04.idPu + g04.ifPu + g04.iDPu) else g04.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16339};
  (data->simulationInfo->daeModeData->residualVars[343]) /* $DAEres343 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* g04.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* g04.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* g04.lambdaADPu variable */));
  threadData->lastEquationSolved = 16339;
}
/*
equation index: 16340
type: SIMPLE_ASSIGN
$DAEres344 = if g04.running.value then g04.lambdaDPu - (g04.MdSatPPu * g04.idPu + (g04.MdSatPPu + g04.MrcPPu) * g04.ifPu + (g04.MdSatPPu + g04.LDPPu + g04.MrcPPu) * g04.iDPu) else g04.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16340};
  (data->simulationInfo->daeModeData->residualVars[344]) /* $DAEres344 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* g04.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* g04.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* g04.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* g04.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* g04.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */));
  threadData->lastEquationSolved = 16340;
}
/*
equation index: 16341
type: SIMPLE_ASSIGN
$DAEres345 = if g04.running.value then g04.udPu - ((g04.RaPPu + g04.RTfoPu) * g04.idPu - g04.omegaPu * g04.lambdaqPu) else g04.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16341};
  (data->simulationInfo->daeModeData->residualVars[345]) /* $DAEres345 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* g04.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* g04.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* g04.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* g04.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* g04.lambdadPu variable */));
  threadData->lastEquationSolved = 16341;
}
/*
equation index: 16342
type: SIMPLE_ASSIGN
$DAEres346 = if g04.running.value then g04.lambdadPu - ((g04.MdSatPPu + g04.LdPPu + g04.XTfoPu) * g04.idPu + g04.MdSatPPu * (g04.ifPu + g04.iDPu)) else g04.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16342};
  (data->simulationInfo->daeModeData->residualVars[346]) /* $DAEres346 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* g04.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* g04.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* g04.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* g04.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */));
  threadData->lastEquationSolved = 16342;
}
/*
equation index: 16343
type: SIMPLE_ASSIGN
$DAEres347 = if g04.running.value then g04.lambdafPu - (g04.MdSatPPu * g04.idPu + (g04.MdSatPPu + g04.LfPPu + g04.MrcPPu) * g04.ifPu + (g04.MdSatPPu + g04.MrcPPu) * g04.iDPu) else g04.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16343};
  (data->simulationInfo->daeModeData->residualVars[347]) /* $DAEres347 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* g04.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* g04.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* g04.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* g04.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* g04.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* g04.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */));
  threadData->lastEquationSolved = 16343;
}
/*
equation index: 16344
type: SIMPLE_ASSIGN
$DAEres348 = if g04.running.value then 100.0 * g04.terminal.i.re / g04.SNom - (sin(g04.theta) * g04.idPu + cos(g04.theta) * g04.iqPu) else g04.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16344};
  (data->simulationInfo->daeModeData->residualVars[348]) /* $DAEres348 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */),"g04.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* g04.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* g04.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */));
  threadData->lastEquationSolved = 16344;
}
/*
equation index: 16345
type: SIMPLE_ASSIGN
$DAEres349 = if g04.running.value then 100.0 * g04.terminal.i.im / g04.SNom - (sin(g04.theta) * g04.iqPu - cos(g04.theta) * g04.idPu) else g04.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16345};
  (data->simulationInfo->daeModeData->residualVars[349]) /* $DAEres349 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */),"g04.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* g04.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* g04.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */));
  threadData->lastEquationSolved = 16345;
}
/*
equation index: 16346
type: SIMPLE_ASSIGN
$DAEres358 = if g04.running.value then g04.terminal.V.im - (sin(g04.theta) * g04.uqPu - cos(g04.theta) * g04.udPu) else g04.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16346};
  (data->simulationInfo->daeModeData->residualVars[358]) /* $DAEres358 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* g04.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* g04.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* g04.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* g04.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* g04.uqPu variable */));
  threadData->lastEquationSolved = 16346;
}
/*
equation index: 16347
type: SIMPLE_ASSIGN
$DAEres359 = if g04.running.value then g04.terminal.V.re - (sin(g04.theta) * g04.udPu + cos(g04.theta) * g04.uqPu) else g04.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16347};
  (data->simulationInfo->daeModeData->residualVars[359]) /* $DAEres359 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* g04.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* g04.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* g04.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* g04.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* g04.udPu variable */));
  threadData->lastEquationSolved = 16347;
}
/*
equation index: 16348
type: SIMPLE_ASSIGN
g04.uPu.re = if g04.running.value then g04.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1192]] /* g04.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 16348;
}
/*
equation index: 16349
type: SIMPLE_ASSIGN
g04.iStatorPu.im = if g04.running.value then g04.rTfoPu * g04.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 16349;
}
/*
equation index: 16350
type: SIMPLE_ASSIGN
vrNordic_g04.IrPu = if g04.running.value then g04.RfPPu * g04.ifPu / (g04.rTfoPu * g04.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3518]] /* vrNordic_g04.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* g04.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* g04.Kuf PARAM */)),"g04.rTfoPu * g04.Kuf")):0.0);
  threadData->lastEquationSolved = 16350;
}
/*
equation index: 16351
type: SIMPLE_ASSIGN
vrNordic_g04.dIf.y = vrNordic_g04.IrPu - vrNordic_g04.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3518]] /* vrNordic_g04.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4370]] /* vrNordic_g04.const2.k PARAM */);
  threadData->lastEquationSolved = 16351;
}
/*
equation index: 16352
type: SIMPLE_ASSIGN
vrNordic_g04.gain1.y = vrNordic_g04.gain1.k * vrNordic_g04.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3527]] /* vrNordic_g04.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4376]] /* vrNordic_g04.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */));
  threadData->lastEquationSolved = 16352;
}
/*
equation index: 16353
type: SIMPLE_ASSIGN
vrNordic_g04.overExcitationLimitation.y = if vrNordic_g04.dIf.y < -0.1 then -1.0 else if vrNordic_g04.dIf.y < 0.0 then 0.0 else if vrNordic_g04.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g04.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16353};
  modelica_boolean tmp2386;
  modelica_real tmp2387;
  modelica_real tmp2388;
  modelica_boolean tmp2389;
  modelica_real tmp2390;
  modelica_real tmp2391;
  modelica_boolean tmp2392;
  modelica_boolean tmp2393;
  modelica_real tmp2394;
  modelica_boolean tmp2395;
  modelica_real tmp2396;
  tmp2387 = 1.0;
  tmp2388 = 0.1;
  relationhysteresis(data, &tmp2386, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */), -0.1, tmp2387, tmp2388, 278, Less, LessZC);
  tmp2395 = (modelica_boolean)tmp2386;
  if(tmp2395)
  {
    tmp2396 = -1.0;
  }
  else
  {
    tmp2390 = 1.0;
    tmp2391 = 0.0;
    relationhysteresis(data, &tmp2389, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */), 0.0, tmp2390, tmp2391, 279, Less, LessZC);
    tmp2393 = (modelica_boolean)tmp2389;
    if(tmp2393)
    {
      tmp2394 = 0.0;
    }
    else
    {
      tmp2392 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4424]] /* vrNordic_g04.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp2394 = (tmp2392?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */));
    }
    tmp2396 = tmp2394;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */) = tmp2396;
  threadData->lastEquationSolved = 16353;
}
/*
equation index: 16354
type: SIMPLE_ASSIGN
$DAEres1239 = (if vrNordic_g04.timer.y < vrNordic_g04.timer.outMin and vrNordic_g04.timer.k * vrNordic_g04.overExcitationLimitation.y < 0.0 or vrNordic_g04.timer.y > vrNordic_g04.timer.outMax and vrNordic_g04.timer.k * vrNordic_g04.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g04.timer.k * vrNordic_g04.overExcitationLimitation.y) - der(vrNordic_g04.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16354};
  modelica_boolean tmp2397;
  modelica_real tmp2398;
  modelica_real tmp2399;
  modelica_boolean tmp2400;
  modelica_real tmp2401;
  modelica_real tmp2402;
  modelica_boolean tmp2403;
  modelica_real tmp2404;
  modelica_real tmp2405;
  modelica_boolean tmp2406;
  modelica_real tmp2407;
  modelica_real tmp2408;
  tmp2398 = 1.0;
  tmp2399 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4434]] /* vrNordic_g04.timer.outMin PARAM */));
  relationhysteresis(data, &tmp2397, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4434]] /* vrNordic_g04.timer.outMin PARAM */), tmp2398, tmp2399, 284, Less, LessZC);
  tmp2401 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */))) * (1.0);
  tmp2402 = 0.0;
  relationhysteresis(data, &tmp2400, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)), 0.0, tmp2401, tmp2402, 285, Less, LessZC);
  tmp2404 = 1.0;
  tmp2405 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4433]] /* vrNordic_g04.timer.outMax PARAM */));
  relationhysteresis(data, &tmp2403, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4433]] /* vrNordic_g04.timer.outMax PARAM */), tmp2404, tmp2405, 286, Greater, GreaterZC);
  tmp2407 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */))) * (1.0);
  tmp2408 = 0.0;
  relationhysteresis(data, &tmp2406, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)), 0.0, tmp2407, tmp2408, 287, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1239]) /* $DAEres1239 DAE_RESIDUAL_VAR */ = (((tmp2397 && tmp2400) || (tmp2403 && tmp2406))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* der(vrNordic_g04.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 16354;
}
/*
equation index: 16355
type: SIMPLE_ASSIGN
$DAEres1240 = if g04.running.value then g04.ufPu - (g04.RfPPu * g04.ifPu + 0.0031830988618379067 * der(g04.lambdafPu)) else der(g04.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16355};
  (data->simulationInfo->daeModeData->residualVars[1240]) /* $DAEres1240 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* g04.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* g04.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* g04.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(g04.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(g04.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 16355;
}
/*
equation index: 16356
type: SIMPLE_ASSIGN
$DAEres1241 = if g04.running.value then (-g04.RQ1PPu) * g04.iQ1Pu - 0.0031830988618379067 * der(g04.lambdaQ1Pu) else der(g04.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16356};
  (data->simulationInfo->daeModeData->residualVars[1241]) /* $DAEres1241 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* g04.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* g04.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(g04.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(g04.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 16356;
}
/*
equation index: 16357
type: SIMPLE_ASSIGN
$DAEres1242 = if g04.running.value then (-g04.RQ2PPu) * g04.iQ2Pu - 0.0031830988618379067 * der(g04.lambdaQ2Pu) else der(g04.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16357};
  (data->simulationInfo->daeModeData->residualVars[1242]) /* $DAEres1242 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* g04.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* g04.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(g04.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(g04.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 16357;
}
/*
equation index: 16358
type: SIMPLE_ASSIGN
$DAEres1243 = if g04.running.value then (-g04.RDPPu) * g04.iDPu - 0.0031830988618379067 * der(g04.lambdaDPu) else der(g04.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16358};
  (data->simulationInfo->daeModeData->residualVars[1243]) /* $DAEres1243 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* g04.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* g04.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(g04.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(g04.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 16358;
}
/*
equation index: 16359
type: SIMPLE_ASSIGN
g04.cePu = if g04.running.value then g04.lambdaqPu * g04.idPu - g04.lambdadPu * g04.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* g04.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* g04.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* g04.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* g04.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* g04.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 16359;
}
/*
equation index: 16360
type: SIMPLE_ASSIGN
g04.PePu = if g04.running.value then g04.cePu * g04.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* g04.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* g04.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 16360;
}
/*
equation index: 16361
type: SIMPLE_ASSIGN
$DAEres1244 = if g04.running.value then 2.0 * g04.H * der(g04.omegaPu) - (g04.cmPu * g04.PNomTurb / g04.SNom + g04.DPu * (omegaCOI - g04.omegaPu) - g04.cePu) else der(g04.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16361};
  (data->simulationInfo->daeModeData->residualVars[1244]) /* $DAEres1244 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[527]] /* g04.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(g04.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* g04.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* g04.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */),"g04.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[525]] /* g04.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* g04.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* g04.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(g04.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 16361;
}
/*
equation index: 16362
type: SIMPLE_ASSIGN
g04.thetaInternal.value = if g04.running.value then Modelica.Math.atan3(g04.udPu, g04.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1190]] /* g04.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* g04.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* g04.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 16362;
}
/*
equation index: 16363
type: SIMPLE_ASSIGN
g04.uStatorPu.re = if g04.running.value then (g04.terminal.V.re + (-100.0) * (g04.terminal.i.re * g04.RTfoPu - g04.terminal.i.im * g04.XTfoPu) / g04.SNom) / g04.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* g04.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* g04.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */),"g04.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */),"g04.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16363;
}
/*
equation index: 16364
type: SIMPLE_ASSIGN
g04.iStatorPu.re = if g04.running.value then g04.rTfoPu * g04.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 16364;
}
/*
equation index: 16365
type: SIMPLE_ASSIGN
g04.IStatorPu = if g04.running.value then if g04.iStatorPu.re == 0.0 and g04.iStatorPu.im == 0.0 then 0.0 else (g04.iStatorPu.re ^ 2.0 + g04.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16365};
  modelica_real tmp2409;
  modelica_real tmp2410;
  modelica_real tmp2411;
  modelica_boolean tmp2412;
  modelica_real tmp2413;
  modelica_boolean tmp2414;
  modelica_real tmp2415;
  tmp2414 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp2414)
  {
    tmp2412 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */) == 0.0));
    if(tmp2412)
    {
      tmp2413 = 0.0;
    }
    else
    {
      tmp2409 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */);
      tmp2410 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */);
      tmp2411 = (tmp2409 * tmp2409) + (tmp2410 * tmp2410);
      if(tmp2411 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2411, 0.5);
      }
      tmp2413 = sqrt(tmp2411);
    }
    tmp2415 = tmp2413;
  }
  else
  {
    tmp2415 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* g04.IStatorPu variable */) = tmp2415;
  threadData->lastEquationSolved = 16365;
}
/*
equation index: 16366
type: SIMPLE_ASSIGN
g04.uPu.im = if g04.running.value then g04.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1191]] /* g04.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 16366;
}
/*
equation index: 16367
type: SIMPLE_ASSIGN
g04.UPu = if g04.running.value then (g04.terminal.V.re ^ 2.0 + g04.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16367};
  modelica_real tmp2416;
  modelica_real tmp2417;
  modelica_real tmp2418;
  modelica_boolean tmp2419;
  modelica_real tmp2420;
  tmp2419 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp2419)
  {
    tmp2416 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */);
    tmp2417 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */);
    tmp2418 = (tmp2416 * tmp2416) + (tmp2417 * tmp2417);
    if(tmp2418 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2418, 0.5);
    }
    tmp2420 = sqrt(tmp2418);
  }
  else
  {
    tmp2420 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* g04.UPu variable */) = tmp2420;
  threadData->lastEquationSolved = 16367;
}
/*
equation index: 16368
type: SIMPLE_ASSIGN
goverNordic_g04.PGenPu = if g04.running.value then (-g04.terminal.V.re) * g04.terminal.i.re - g04.terminal.V.im * g04.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1986]] /* goverNordic_g04.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 16368;
}
/*
equation index: 16369
type: SIMPLE_ASSIGN
goverNordic_g04.perUnitP.y = goverNordic_g04.perUnitP.k * goverNordic_g04.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2002]] /* goverNordic_g04.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2394]] /* goverNordic_g04.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1986]] /* goverNordic_g04.PGenPu variable */));
  threadData->lastEquationSolved = 16369;
}
/*
equation index: 16370
type: SIMPLE_ASSIGN
$DAEres1245 = goverNordic_g04.firstOrder1.k * goverNordic_g04.perUnitP.y + (-goverNordic_g04.firstOrder1.y) - der(goverNordic_g04.firstOrder1.y) * goverNordic_g04.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16370};
  (data->simulationInfo->daeModeData->residualVars[1245]) /* $DAEres1245 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2372]] /* goverNordic_g04.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2002]] /* goverNordic_g04.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* goverNordic_g04.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* der(goverNordic_g04.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2371]] /* goverNordic_g04.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 16370;
}
/*
equation index: 16371
type: SIMPLE_ASSIGN
g04.PGen = if g04.running.value then 100.0 * goverNordic_g04.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* g04.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1986]] /* goverNordic_g04.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16371;
}
/*
equation index: 16372
type: SIMPLE_ASSIGN
g04.QGenPu = if g04.running.value then g04.terminal.V.re * g04.terminal.i.im - g04.terminal.V.im * g04.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* g04.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 16372;
}
/*
equation index: 16373
type: SIMPLE_ASSIGN
g04.QGen = if g04.running.value then 100.0 * g04.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* g04.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* g04.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16373;
}
/*
equation index: 16374
type: SIMPLE_ASSIGN
g04.uStatorPu.im = if g04.running.value then (g04.terminal.V.im + (-100.0) * (g04.terminal.i.re * g04.XTfoPu + g04.terminal.i.im * g04.RTfoPu) / g04.SNom) / g04.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* g04.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* g04.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* g04.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* g04.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* g04.SNom PARAM */),"g04.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* g04.rTfoPu PARAM */),"g04.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16374;
}
/*
equation index: 16375
type: SIMPLE_ASSIGN
g04.sStatorPu.re = if g04.running.value then g04.uStatorPu.re * g04.iStatorPu.re + g04.uStatorPu.im * g04.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1184]] /* g04.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16375;
}
/*
equation index: 16376
type: SIMPLE_ASSIGN
g04.sStatorPu.im = if g04.running.value then g04.uStatorPu.im * g04.iStatorPu.re - g04.uStatorPu.re * g04.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1183]] /* g04.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 16376;
}
/*
equation index: 16377
type: SIMPLE_ASSIGN
g04.QStatorPu = if g04.running.value then -g04.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* g04.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1183]] /* g04.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16377;
}
/*
equation index: 16378
type: SIMPLE_ASSIGN
g04.QStatorPuQNom = if g04.running.value then 100.0 * g04.QStatorPu / g04.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* g04.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* g04.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* g04.QNomAlt PARAM */),"g04.QNomAlt")):0.0);
  threadData->lastEquationSolved = 16378;
}
/*
equation index: 16379
type: SIMPLE_ASSIGN
vrNordic_g04.UsPu = if g04.running.value then if g04.uStatorPu.re == 0.0 and g04.uStatorPu.im == 0.0 then 0.0 else (g04.uStatorPu.re ^ 2.0 + g04.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16379};
  modelica_real tmp2421;
  modelica_real tmp2422;
  modelica_real tmp2423;
  modelica_boolean tmp2424;
  modelica_real tmp2425;
  modelica_boolean tmp2426;
  modelica_real tmp2427;
  tmp2426 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[482]] /* g04.running.value DISCRETE */);
  if(tmp2426)
  {
    tmp2424 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */) == 0.0));
    if(tmp2424)
    {
      tmp2425 = 0.0;
    }
    else
    {
      tmp2421 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */);
      tmp2422 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */);
      tmp2423 = (tmp2421 * tmp2421) + (tmp2422 * tmp2422);
      if(tmp2423 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2423, 0.5);
      }
      tmp2425 = sqrt(tmp2423);
    }
    tmp2427 = tmp2425;
  }
  else
  {
    tmp2427 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3519]] /* vrNordic_g04.UsPu variable */) = tmp2427;
  threadData->lastEquationSolved = 16379;
}
/*
equation index: 16380
type: SIMPLE_ASSIGN
vrNordic_g04.dU.y = vrNordic_g04.const1.k - vrNordic_g04.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3523]] /* vrNordic_g04.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4369]] /* vrNordic_g04.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3519]] /* vrNordic_g04.UsPu variable */);
  threadData->lastEquationSolved = 16380;
}
/*
equation index: 16381
type: SIMPLE_ASSIGN
vrNordic_g04.add.y = vrNordic_g04.add.k1 * vrNordic_g04.dU.y + vrNordic_g04.add.k2 * vrNordic_g04.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4366]] /* vrNordic_g04.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3523]] /* vrNordic_g04.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4367]] /* vrNordic_g04.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3537]] /* vrNordic_g04.limiter.y variable */));
  threadData->lastEquationSolved = 16381;
}
/*
equation index: 16382
type: SIMPLE_ASSIGN
vrNordic_g04.switch.y = if vrNordic_g04.greaterEqualThreshold.y then vrNordic_g04.gain1.y else vrNordic_g04.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* vrNordic_g04.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1024]] /* vrNordic_g04.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3527]] /* vrNordic_g04.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */));
  threadData->lastEquationSolved = 16382;
}
/*
equation index: 16383
type: SIMPLE_ASSIGN
vrNordic_g04.min1.y = if vrNordic_g04.switch.y < vrNordic_g04.add.y then vrNordic_g04.switch.y else vrNordic_g04.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16383};
  modelica_boolean tmp2428;
  modelica_real tmp2429;
  modelica_real tmp2430;
  tmp2429 = 1.0;
  tmp2430 = 1.0;
  relationhysteresis(data, &tmp2428, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* vrNordic_g04.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */), tmp2429, tmp2430, 276, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* vrNordic_g04.min1.y variable */) = (tmp2428?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* vrNordic_g04.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */));
  threadData->lastEquationSolved = 16383;
}
/*
equation index: 16384
type: SIMPLE_ASSIGN
vrNordic_g04.kMulDU.y = vrNordic_g04.kMulDU.k * vrNordic_g04.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3528]] /* vrNordic_g04.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4378]] /* vrNordic_g04.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* vrNordic_g04.min1.y variable */));
  threadData->lastEquationSolved = 16384;
}
/*
equation index: 16385
type: SIMPLE_ASSIGN
$DAEres1246 = vrNordic_g04.leadLag.a_end * vrNordic_g04.kMulDU.y + (-vrNordic_g04.leadLag.a[2]) * vrNordic_g04.leadLag.x_scaled[1] - der(vrNordic_g04.leadLag.x_scaled[1]) * vrNordic_g04.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16385};
  (data->simulationInfo->daeModeData->residualVars[1246]) /* $DAEres1246 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4383]] /* vrNordic_g04.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3528]] /* vrNordic_g04.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4382]] /* vrNordic_g04.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* vrNordic_g04.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* der(vrNordic_g04.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4381]] /* vrNordic_g04.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 16385;
}
/*
equation index: 16386
type: SIMPLE_ASSIGN
vrNordic_g04.leadLag.y = (vrNordic_g04.leadLag.bb[2] - vrNordic_g04.leadLag.d * vrNordic_g04.leadLag.a[2]) * vrNordic_g04.leadLag.x[1] + vrNordic_g04.leadLag.d * vrNordic_g04.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3530]] /* vrNordic_g04.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4387]] /* vrNordic_g04.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4388]] /* vrNordic_g04.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4382]] /* vrNordic_g04.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3529]] /* vrNordic_g04.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4388]] /* vrNordic_g04.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3528]] /* vrNordic_g04.kMulDU.y variable */));
  threadData->lastEquationSolved = 16386;
}
/*
equation index: 16387
type: SIMPLE_ASSIGN
vrNordic_g04.feedback1.y = vrNordic_g04.leadLag.y - vrNordic_g04.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3525]] /* vrNordic_g04.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3530]] /* vrNordic_g04.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 16387;
}
/*
equation index: 16388
type: SIMPLE_ASSIGN
vrNordic_g04.gain.y = vrNordic_g04.gain.k * vrNordic_g04.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4375]] /* vrNordic_g04.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3525]] /* vrNordic_g04.feedback1.y variable */));
  threadData->lastEquationSolved = 16388;
}
/*
equation index: 16389
type: SIMPLE_ASSIGN
$DAEres1247 = (if vrNordic_g04.limIntegrator.y < vrNordic_g04.limIntegrator.outMin and vrNordic_g04.limIntegrator.k * vrNordic_g04.gain.y < 0.0 or vrNordic_g04.limIntegrator.y > vrNordic_g04.limIntegrator.outMax and vrNordic_g04.limIntegrator.k * vrNordic_g04.gain.y > 0.0 then 0.0 else vrNordic_g04.limIntegrator.k * vrNordic_g04.gain.y) - der(vrNordic_g04.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16389};
  modelica_boolean tmp2431;
  modelica_real tmp2432;
  modelica_real tmp2433;
  modelica_boolean tmp2434;
  modelica_real tmp2435;
  modelica_real tmp2436;
  modelica_boolean tmp2437;
  modelica_real tmp2438;
  modelica_real tmp2439;
  modelica_boolean tmp2440;
  modelica_real tmp2441;
  modelica_real tmp2442;
  tmp2432 = 1.0;
  tmp2433 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4420]] /* vrNordic_g04.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp2431, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4420]] /* vrNordic_g04.limIntegrator.outMin PARAM */), tmp2432, tmp2433, 280, Less, LessZC);
  tmp2435 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */))) * (1.0);
  tmp2436 = 0.0;
  relationhysteresis(data, &tmp2434, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)), 0.0, tmp2435, tmp2436, 281, Less, LessZC);
  tmp2438 = 1.0;
  tmp2439 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4419]] /* vrNordic_g04.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp2437, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4419]] /* vrNordic_g04.limIntegrator.outMax PARAM */), tmp2438, tmp2439, 282, Greater, GreaterZC);
  tmp2441 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */))) * (1.0);
  tmp2442 = 0.0;
  relationhysteresis(data, &tmp2440, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)), 0.0, tmp2441, tmp2442, 283, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1247]) /* $DAEres1247 DAE_RESIDUAL_VAR */ = (((tmp2431 && tmp2434) || (tmp2437 && tmp2440))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* der(vrNordic_g04.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 16389;
}
/*
equation index: 16390
type: SIMPLE_ASSIGN
$whenCondition55 = not pre(g03.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16390};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[420]] /* $whenCondition55 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[478] /* g03.running.value DISCRETE */));
  threadData->lastEquationSolved = 16390;
}
/*
equation index: 16391
type: WHEN

when {} then
  g03.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16391};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[420]] /* $whenCondition55 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[420] /* $whenCondition55 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16391;
}
/*
equation index: 16393
type: SIMPLE_ASSIGN
$whenCondition57 = not g03.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16393};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[422]] /* $whenCondition57 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */));
  threadData->lastEquationSolved = 16393;
}
/*
equation index: 16394
type: SIMPLE_ASSIGN
$whenCondition56 = g03.running.value and not pre(g03.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16394};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[421]] /* $whenCondition56 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[478] /* g03.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16394;
}
/*
equation index: 16395
type: WHEN

when {$whenCondition57} then
  g03.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16395};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[422]] /* $whenCondition57 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[422] /* $whenCondition57 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[5]] /* g03.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[421]] /* $whenCondition56 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[421] /* $whenCondition56 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[5]] /* g03.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16395;
}
/*
equation index: 16397
type: SIMPLE_ASSIGN
g03.converter.u = Integer(g03.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16397};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[4]] /* g03.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[5]] /* g03.state DISCRETE */)));
  threadData->lastEquationSolved = 16397;
}
/*
equation index: 16398
type: SIMPLE_ASSIGN
g03.genState = (*Real*)(g03.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* g03.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[4]] /* g03.converter.u DISCRETE */));
  threadData->lastEquationSolved = 16398;
}
/*
equation index: 16399
type: SIMPLE_ASSIGN
$DAEres137 = if g03.running.value then der(g03.theta) - 314.1592653589793 * (g03.omegaPu - omegaCOI) else der(g03.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16399};
  (data->simulationInfo->daeModeData->residualVars[137]) /* $DAEres137 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* der(g03.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* der(g03.theta) STATE_DER */));
  threadData->lastEquationSolved = 16399;
}
/*
equation index: 16400
type: SIMPLE_ASSIGN
g03.cmPu = if g03.running.value then g03.PmPu / g03.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* g03.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* g03.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */),"g03.omegaPu"):0.0);
  threadData->lastEquationSolved = 16400;
}
/*
equation index: 16401
type: SIMPLE_ASSIGN
g03.ufPu = if g03.running.value then vrNordic_g03.limIntegrator.y * g03.Kuf * g03.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* g03.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* g03.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 16401;
}
/*
equation index: 16402
type: SIMPLE_ASSIGN
$DAEres412 = if g03.running.value then g03.mqsPu - g03.MqPPu / (1.0 + g03.mq * g03.lambdaAirGapPu ^ g03.nq) else g03.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16402};
  modelica_real tmp2443;
  modelica_real tmp2444;
  modelica_real tmp2445;
  modelica_real tmp2446;
  modelica_real tmp2447;
  modelica_real tmp2448;
  modelica_real tmp2449;
  modelica_boolean tmp2450;
  modelica_real tmp2451;
  tmp2450 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp2450)
  {
    tmp2443 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* g03.lambdaAirGapPu variable */);
    tmp2444 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* g03.nq PARAM */);
    if(tmp2443 < 0.0 && tmp2444 != 0.0)
    {
      tmp2446 = modf(tmp2444, &tmp2447);
      
      if(tmp2446 > 0.5)
      {
        tmp2446 -= 1.0;
        tmp2447 += 1.0;
      }
      else if(tmp2446 < -0.5)
      {
        tmp2446 += 1.0;
        tmp2447 -= 1.0;
      }
      
      if(fabs(tmp2446) < 1e-10)
        tmp2445 = pow(tmp2443, tmp2447);
      else
      {
        tmp2449 = modf(1.0/tmp2444, &tmp2448);
        if(tmp2449 > 0.5)
        {
          tmp2449 -= 1.0;
          tmp2448 += 1.0;
        }
        else if(tmp2449 < -0.5)
        {
          tmp2449 += 1.0;
          tmp2448 -= 1.0;
        }
        if(fabs(tmp2449) < 1e-10 && ((unsigned long)tmp2448 & 1))
        {
          tmp2445 = -pow(-tmp2443, tmp2446)*pow(tmp2443, tmp2447);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2443, tmp2444);
        }
      }
    }
    else
    {
      tmp2445 = pow(tmp2443, tmp2444);
    }
    if(isnan(tmp2445) || isinf(tmp2445))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2443, tmp2444);
    }
    tmp2451 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* g03.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[454]] /* g03.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* g03.mq PARAM */)) * (tmp2445),"1.0 + g03.mq * g03.lambdaAirGapPu ^ g03.nq"));
  }
  else
  {
    tmp2451 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* g03.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[412]) /* $DAEres412 DAE_RESIDUAL_VAR */ = tmp2451;
  threadData->lastEquationSolved = 16402;
}
/*
equation index: 16403
type: SIMPLE_ASSIGN
$DAEres413 = if g03.running.value then g03.mdsPu - g03.MdPPu / (1.0 + g03.md * g03.lambdaAirGapPu ^ g03.nd) else g03.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16403};
  modelica_real tmp2452;
  modelica_real tmp2453;
  modelica_real tmp2454;
  modelica_real tmp2455;
  modelica_real tmp2456;
  modelica_real tmp2457;
  modelica_real tmp2458;
  modelica_boolean tmp2459;
  modelica_real tmp2460;
  tmp2459 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp2459)
  {
    tmp2452 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* g03.lambdaAirGapPu variable */);
    tmp2453 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* g03.nd PARAM */);
    if(tmp2452 < 0.0 && tmp2453 != 0.0)
    {
      tmp2455 = modf(tmp2453, &tmp2456);
      
      if(tmp2455 > 0.5)
      {
        tmp2455 -= 1.0;
        tmp2456 += 1.0;
      }
      else if(tmp2455 < -0.5)
      {
        tmp2455 += 1.0;
        tmp2456 -= 1.0;
      }
      
      if(fabs(tmp2455) < 1e-10)
        tmp2454 = pow(tmp2452, tmp2456);
      else
      {
        tmp2458 = modf(1.0/tmp2453, &tmp2457);
        if(tmp2458 > 0.5)
        {
          tmp2458 -= 1.0;
          tmp2457 += 1.0;
        }
        else if(tmp2458 < -0.5)
        {
          tmp2458 += 1.0;
          tmp2457 -= 1.0;
        }
        if(fabs(tmp2458) < 1e-10 && ((unsigned long)tmp2457 & 1))
        {
          tmp2454 = -pow(-tmp2452, tmp2455)*pow(tmp2452, tmp2456);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2452, tmp2453);
        }
      }
    }
    else
    {
      tmp2454 = pow(tmp2452, tmp2453);
    }
    if(isnan(tmp2454) || isinf(tmp2454))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2452, tmp2453);
    }
    tmp2460 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* g03.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[448]] /* g03.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* g03.md PARAM */)) * (tmp2454),"1.0 + g03.md * g03.lambdaAirGapPu ^ g03.nd"));
  }
  else
  {
    tmp2460 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* g03.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[413]) /* $DAEres413 DAE_RESIDUAL_VAR */ = tmp2460;
  threadData->lastEquationSolved = 16403;
}
/*
equation index: 16404
type: SIMPLE_ASSIGN
$DAEres414 = if g03.running.value then g03.lambdaAirGapPu - sqrt(g03.lambdaADPu ^ 2.0 + g03.lambdaAQPu ^ 2.0) else g03.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16404};
  modelica_real tmp2461;
  modelica_real tmp2462;
  modelica_real tmp2463;
  modelica_boolean tmp2464;
  modelica_real tmp2465;
  tmp2464 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp2464)
  {
    tmp2461 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* g03.lambdaADPu variable */);
    tmp2462 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* g03.lambdaAQPu variable */);
    tmp2463 = (tmp2461 * tmp2461) + (tmp2462 * tmp2462);
    if(!(tmp2463 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g03.lambdaADPu ^ 2.0 + g03.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp2463);
      }
    }
    tmp2465 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* g03.lambdaAirGapPu variable */) - sqrt(tmp2463);
  }
  else
  {
    tmp2465 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* g03.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[414]) /* $DAEres414 DAE_RESIDUAL_VAR */ = tmp2465;
  threadData->lastEquationSolved = 16404;
}
/*
equation index: 16405
type: SIMPLE_ASSIGN
$DAEres415 = if g03.running.value then g03.cos2Eta - (g03.lambdaADPu / g03.lambdaAirGapPu) ^ 2.0 else g03.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16405};
  modelica_real tmp2466;
  modelica_boolean tmp2467;
  modelica_real tmp2468;
  tmp2467 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp2467)
  {
    tmp2466 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* g03.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* g03.lambdaAirGapPu variable */),"g03.lambdaAirGapPu");
    tmp2468 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* g03.cos2Eta variable */) - ((tmp2466 * tmp2466));
  }
  else
  {
    tmp2468 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* g03.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[415]) /* $DAEres415 DAE_RESIDUAL_VAR */ = tmp2468;
  threadData->lastEquationSolved = 16405;
}
/*
equation index: 16406
type: SIMPLE_ASSIGN
$DAEres416 = if g03.running.value then g03.miPu - (g03.mdsPu * g03.cos2Eta + g03.mqsPu * g03.sin2Eta) else g03.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16406};
  (data->simulationInfo->daeModeData->residualVars[416]) /* $DAEres416 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* g03.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* g03.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* g03.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* g03.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* g03.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* g03.miPu variable */));
  threadData->lastEquationSolved = 16406;
}
/*
equation index: 16407
type: SIMPLE_ASSIGN
$DAEres417 = if g03.running.value then g03.MqSatPPu - (g03.miPu - g03.MsalPu * g03.cos2Eta) else g03.MqSatPPu - g03.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16407};
  (data->simulationInfo->daeModeData->residualVars[417]) /* $DAEres417 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* g03.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* g03.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* g03.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[454]] /* g03.MqPPu PARAM */));
  threadData->lastEquationSolved = 16407;
}
/*
equation index: 16408
type: SIMPLE_ASSIGN
$DAEres418 = if g03.running.value then g03.lambdaQ2Pu - (g03.MqSatPPu * (g03.iqPu + g03.iQ1Pu) + (g03.MqSatPPu + g03.LQ2PPu) * g03.iQ2Pu) else g03.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16408};
  (data->simulationInfo->daeModeData->residualVars[418]) /* $DAEres418 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* g03.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* g03.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* g03.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* g03.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* g03.iQ2Pu variable */));
  threadData->lastEquationSolved = 16408;
}
/*
equation index: 16409
type: SIMPLE_ASSIGN
$DAEres419 = if g03.running.value then g03.lambdaQ1Pu - (g03.MqSatPPu * g03.iqPu + (g03.MqSatPPu + g03.LQ1PPu) * g03.iQ1Pu + g03.MqSatPPu * g03.iQ2Pu) else g03.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16409};
  (data->simulationInfo->daeModeData->residualVars[419]) /* $DAEres419 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* g03.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* g03.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* g03.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* g03.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* g03.iQ1Pu variable */));
  threadData->lastEquationSolved = 16409;
}
/*
equation index: 16410
type: SIMPLE_ASSIGN
$DAEres420 = if g03.running.value then g03.lambdaAQPu - g03.MqSatPPu * (g03.iqPu + g03.iQ1Pu + g03.iQ2Pu) else g03.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16410};
  (data->simulationInfo->daeModeData->residualVars[420]) /* $DAEres420 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* g03.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* g03.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* g03.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* g03.lambdaAQPu variable */));
  threadData->lastEquationSolved = 16410;
}
/*
equation index: 16411
type: SIMPLE_ASSIGN
$DAEres421 = if g03.running.value then g03.sin2Eta - (g03.lambdaAQPu / g03.lambdaAirGapPu) ^ 2.0 else g03.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16411};
  modelica_real tmp2469;
  modelica_boolean tmp2470;
  modelica_real tmp2471;
  tmp2470 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp2470)
  {
    tmp2469 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* g03.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* g03.lambdaAirGapPu variable */),"g03.lambdaAirGapPu");
    tmp2471 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* g03.sin2Eta variable */) - ((tmp2469 * tmp2469));
  }
  else
  {
    tmp2471 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* g03.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[421]) /* $DAEres421 DAE_RESIDUAL_VAR */ = tmp2471;
  threadData->lastEquationSolved = 16411;
}
/*
equation index: 16412
type: SIMPLE_ASSIGN
$DAEres422 = if g03.running.value then g03.MdSatPPu - (g03.miPu + g03.MsalPu * g03.sin2Eta) else g03.MdSatPPu - g03.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16412};
  (data->simulationInfo->daeModeData->residualVars[422]) /* $DAEres422 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* g03.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* g03.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* g03.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[448]] /* g03.MdPPu PARAM */));
  threadData->lastEquationSolved = 16412;
}
/*
equation index: 16413
type: SIMPLE_ASSIGN
$DAEres423 = if g03.running.value then g03.lambdaADPu - g03.MdSatPPu * (g03.idPu + g03.ifPu + g03.iDPu) else g03.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16413};
  (data->simulationInfo->daeModeData->residualVars[423]) /* $DAEres423 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* g03.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* g03.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* g03.lambdaADPu variable */));
  threadData->lastEquationSolved = 16413;
}
/*
equation index: 16414
type: SIMPLE_ASSIGN
$DAEres424 = if g03.running.value then g03.lambdaDPu - (g03.MdSatPPu * g03.idPu + (g03.MdSatPPu + g03.MrcPPu) * g03.ifPu + (g03.MdSatPPu + g03.LDPPu + g03.MrcPPu) * g03.iDPu) else g03.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16414};
  (data->simulationInfo->daeModeData->residualVars[424]) /* $DAEres424 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* g03.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* g03.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* g03.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* g03.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* g03.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */));
  threadData->lastEquationSolved = 16414;
}
/*
equation index: 16415
type: SIMPLE_ASSIGN
$DAEres425 = if g03.running.value then g03.lambdaqPu - ((g03.MqSatPPu + g03.LqPPu + g03.XTfoPu) * g03.iqPu + g03.MqSatPPu * (g03.iQ1Pu + g03.iQ2Pu)) else g03.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16415};
  (data->simulationInfo->daeModeData->residualVars[425]) /* $DAEres425 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* g03.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[447]] /* g03.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* g03.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* g03.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* g03.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* g03.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* g03.iDPu variable */));
  threadData->lastEquationSolved = 16415;
}
/*
equation index: 16416
type: SIMPLE_ASSIGN
$DAEres426 = if g03.running.value then g03.uqPu - ((g03.RaPPu + g03.RTfoPu) * g03.iqPu + g03.omegaPu * g03.lambdadPu) else g03.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16416};
  (data->simulationInfo->daeModeData->residualVars[426]) /* $DAEres426 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* g03.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* g03.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* g03.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* g03.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* g03.lambdaqPu variable */));
  threadData->lastEquationSolved = 16416;
}
/*
equation index: 16417
type: SIMPLE_ASSIGN
$DAEres427 = if g03.running.value then g03.udPu - ((g03.RaPPu + g03.RTfoPu) * g03.idPu - g03.omegaPu * g03.lambdaqPu) else g03.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16417};
  (data->simulationInfo->daeModeData->residualVars[427]) /* $DAEres427 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* g03.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* g03.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* g03.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* g03.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* g03.lambdadPu variable */));
  threadData->lastEquationSolved = 16417;
}
/*
equation index: 16418
type: SIMPLE_ASSIGN
$DAEres428 = if g03.running.value then g03.lambdadPu - ((g03.MdSatPPu + g03.LdPPu + g03.XTfoPu) * g03.idPu + g03.MdSatPPu * (g03.ifPu + g03.iDPu)) else g03.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16418};
  (data->simulationInfo->daeModeData->residualVars[428]) /* $DAEres428 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* g03.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[445]] /* g03.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* g03.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* g03.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */));
  threadData->lastEquationSolved = 16418;
}
/*
equation index: 16419
type: SIMPLE_ASSIGN
$DAEres429 = if g03.running.value then g03.lambdafPu - (g03.MdSatPPu * g03.idPu + (g03.MdSatPPu + g03.LfPPu + g03.MrcPPu) * g03.ifPu + (g03.MdSatPPu + g03.MrcPPu) * g03.iDPu) else g03.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16419};
  (data->simulationInfo->daeModeData->residualVars[429]) /* $DAEres429 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* g03.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[446]] /* g03.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* g03.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* g03.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* g03.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* g03.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */));
  threadData->lastEquationSolved = 16419;
}
/*
equation index: 16420
type: SIMPLE_ASSIGN
$DAEres1078 = if g03.running.value then 100.0 * g03.terminal.i.re / g03.SNom - (sin(g03.theta) * g03.idPu + cos(g03.theta) * g03.iqPu) else g03.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16420};
  (data->simulationInfo->daeModeData->residualVars[1078]) /* $DAEres1078 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */),"g03.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* g03.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* g03.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */));
  threadData->lastEquationSolved = 16420;
}
/*
equation index: 16421
type: SIMPLE_ASSIGN
$DAEres1079 = if g03.running.value then 100.0 * g03.terminal.i.im / g03.SNom - (sin(g03.theta) * g03.iqPu - cos(g03.theta) * g03.idPu) else g03.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16421};
  (data->simulationInfo->daeModeData->residualVars[1079]) /* $DAEres1079 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */),"g03.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* g03.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* g03.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */));
  threadData->lastEquationSolved = 16421;
}
/*
equation index: 16422
type: SIMPLE_ASSIGN
$DAEres1081 = if g03.running.value then g03.terminal.V.re - (sin(g03.theta) * g03.udPu + cos(g03.theta) * g03.uqPu) else g03.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16422};
  (data->simulationInfo->daeModeData->residualVars[1081]) /* $DAEres1081 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* g03.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* g03.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* g03.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* g03.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* g03.udPu variable */));
  threadData->lastEquationSolved = 16422;
}
/*
equation index: 16423
type: SIMPLE_ASSIGN
$DAEres1082 = if g03.running.value then g03.terminal.V.im - (sin(g03.theta) * g03.uqPu - cos(g03.theta) * g03.udPu) else g03.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16423};
  (data->simulationInfo->daeModeData->residualVars[1082]) /* $DAEres1082 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* g03.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* g03.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* g03.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* g03.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* g03.uqPu variable */));
  threadData->lastEquationSolved = 16423;
}
/*
equation index: 16424
type: SIMPLE_ASSIGN
g03.uPu.im = if g03.running.value then g03.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1145]] /* g03.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 16424;
}
/*
equation index: 16425
type: SIMPLE_ASSIGN
g03.iStatorPu.im = if g03.running.value then g03.rTfoPu * g03.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 16425;
}
/*
equation index: 16426
type: SIMPLE_ASSIGN
g03.cePu = if g03.running.value then g03.lambdaqPu * g03.idPu - g03.lambdadPu * g03.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* g03.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* g03.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* g03.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* g03.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* g03.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 16426;
}
/*
equation index: 16427
type: SIMPLE_ASSIGN
g03.PePu = if g03.running.value then g03.cePu * g03.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* g03.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* g03.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 16427;
}
/*
equation index: 16428
type: SIMPLE_ASSIGN
$DAEres1260 = if g03.running.value then 2.0 * g03.H * der(g03.omegaPu) - (g03.cmPu * g03.PNomTurb / g03.SNom + g03.DPu * (omegaCOI - g03.omegaPu) - g03.cePu) else der(g03.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16428};
  (data->simulationInfo->daeModeData->residualVars[1260]) /* $DAEres1260 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* g03.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* der(g03.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* g03.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* g03.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */),"g03.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* g03.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* g03.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* g03.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* der(g03.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 16428;
}
/*
equation index: 16429
type: SIMPLE_ASSIGN
$DAEres1261 = if g03.running.value then (-g03.RDPPu) * g03.iDPu - 0.0031830988618379067 * der(g03.lambdaDPu) else der(g03.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16429};
  (data->simulationInfo->daeModeData->residualVars[1261]) /* $DAEres1261 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[469]] /* g03.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* g03.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* der(g03.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* der(g03.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 16429;
}
/*
equation index: 16430
type: SIMPLE_ASSIGN
vrNordic_g03.IrPu = if g03.running.value then g03.RfPPu * g03.ifPu / (g03.rTfoPu * g03.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16430};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3494]] /* vrNordic_g03.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* g03.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* g03.Kuf PARAM */)),"g03.rTfoPu * g03.Kuf")):0.0);
  threadData->lastEquationSolved = 16430;
}
/*
equation index: 16431
type: SIMPLE_ASSIGN
vrNordic_g03.dIf.y = vrNordic_g03.IrPu - vrNordic_g03.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3494]] /* vrNordic_g03.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4291]] /* vrNordic_g03.const2.k PARAM */);
  threadData->lastEquationSolved = 16431;
}
/*
equation index: 16432
type: SIMPLE_ASSIGN
vrNordic_g03.gain1.y = vrNordic_g03.gain1.k * vrNordic_g03.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3503]] /* vrNordic_g03.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4297]] /* vrNordic_g03.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */));
  threadData->lastEquationSolved = 16432;
}
/*
equation index: 16433
type: SIMPLE_ASSIGN
vrNordic_g03.overExcitationLimitation.y = if vrNordic_g03.dIf.y < -0.1 then -1.0 else if vrNordic_g03.dIf.y < 0.0 then 0.0 else if vrNordic_g03.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g03.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16433};
  modelica_boolean tmp2472;
  modelica_real tmp2473;
  modelica_real tmp2474;
  modelica_boolean tmp2475;
  modelica_real tmp2476;
  modelica_real tmp2477;
  modelica_boolean tmp2478;
  modelica_boolean tmp2479;
  modelica_real tmp2480;
  modelica_boolean tmp2481;
  modelica_real tmp2482;
  tmp2473 = 1.0;
  tmp2474 = 0.1;
  relationhysteresis(data, &tmp2472, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */), -0.1, tmp2473, tmp2474, 262, Less, LessZC);
  tmp2481 = (modelica_boolean)tmp2472;
  if(tmp2481)
  {
    tmp2482 = -1.0;
  }
  else
  {
    tmp2476 = 1.0;
    tmp2477 = 0.0;
    relationhysteresis(data, &tmp2475, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */), 0.0, tmp2476, tmp2477, 263, Less, LessZC);
    tmp2479 = (modelica_boolean)tmp2475;
    if(tmp2479)
    {
      tmp2480 = 0.0;
    }
    else
    {
      tmp2478 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4345]] /* vrNordic_g03.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp2480 = (tmp2478?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */));
    }
    tmp2482 = tmp2480;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */) = tmp2482;
  threadData->lastEquationSolved = 16433;
}
/*
equation index: 16434
type: SIMPLE_ASSIGN
$DAEres1262 = (if vrNordic_g03.timer.y < vrNordic_g03.timer.outMin and vrNordic_g03.timer.k * vrNordic_g03.overExcitationLimitation.y < 0.0 or vrNordic_g03.timer.y > vrNordic_g03.timer.outMax and vrNordic_g03.timer.k * vrNordic_g03.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g03.timer.k * vrNordic_g03.overExcitationLimitation.y) - der(vrNordic_g03.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16434};
  modelica_boolean tmp2483;
  modelica_real tmp2484;
  modelica_real tmp2485;
  modelica_boolean tmp2486;
  modelica_real tmp2487;
  modelica_real tmp2488;
  modelica_boolean tmp2489;
  modelica_real tmp2490;
  modelica_real tmp2491;
  modelica_boolean tmp2492;
  modelica_real tmp2493;
  modelica_real tmp2494;
  tmp2484 = 1.0;
  tmp2485 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4355]] /* vrNordic_g03.timer.outMin PARAM */));
  relationhysteresis(data, &tmp2483, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4355]] /* vrNordic_g03.timer.outMin PARAM */), tmp2484, tmp2485, 268, Less, LessZC);
  tmp2487 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */))) * (1.0);
  tmp2488 = 0.0;
  relationhysteresis(data, &tmp2486, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)), 0.0, tmp2487, tmp2488, 269, Less, LessZC);
  tmp2490 = 1.0;
  tmp2491 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4354]] /* vrNordic_g03.timer.outMax PARAM */));
  relationhysteresis(data, &tmp2489, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4354]] /* vrNordic_g03.timer.outMax PARAM */), tmp2490, tmp2491, 270, Greater, GreaterZC);
  tmp2493 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */))) * (1.0);
  tmp2494 = 0.0;
  relationhysteresis(data, &tmp2492, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)), 0.0, tmp2493, tmp2494, 271, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1262]) /* $DAEres1262 DAE_RESIDUAL_VAR */ = (((tmp2483 && tmp2486) || (tmp2489 && tmp2492))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* der(vrNordic_g03.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 16434;
}
/*
equation index: 16435
type: SIMPLE_ASSIGN
$DAEres1263 = if g03.running.value then (-g03.RQ1PPu) * g03.iQ1Pu - 0.0031830988618379067 * der(g03.lambdaQ1Pu) else der(g03.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16435};
  (data->simulationInfo->daeModeData->residualVars[1263]) /* $DAEres1263 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* g03.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* g03.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* der(g03.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* der(g03.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 16435;
}
/*
equation index: 16436
type: SIMPLE_ASSIGN
$DAEres1264 = if g03.running.value then (-g03.RQ2PPu) * g03.iQ2Pu - 0.0031830988618379067 * der(g03.lambdaQ2Pu) else der(g03.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16436};
  (data->simulationInfo->daeModeData->residualVars[1264]) /* $DAEres1264 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* g03.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* g03.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* der(g03.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* der(g03.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 16436;
}
/*
equation index: 16437
type: SIMPLE_ASSIGN
$DAEres1265 = if g03.running.value then g03.ufPu - (g03.RfPPu * g03.ifPu + 0.0031830988618379067 * der(g03.lambdafPu)) else der(g03.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16437};
  (data->simulationInfo->daeModeData->residualVars[1265]) /* $DAEres1265 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* g03.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* g03.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* g03.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* der(g03.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* der(g03.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 16437;
}
/*
equation index: 16438
type: SIMPLE_ASSIGN
g03.thetaInternal.value = if g03.running.value then Modelica.Math.atan3(g03.udPu, g03.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16438};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1144]] /* g03.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* g03.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* g03.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 16438;
}
/*
equation index: 16439
type: SIMPLE_ASSIGN
g03.uStatorPu.im = if g03.running.value then (g03.terminal.V.im + (-100.0) * (g03.terminal.i.re * g03.XTfoPu + g03.terminal.i.im * g03.RTfoPu) / g03.SNom) / g03.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* g03.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* g03.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */),"g03.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */),"g03.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16439;
}
/*
equation index: 16440
type: SIMPLE_ASSIGN
g03.iStatorPu.re = if g03.running.value then g03.rTfoPu * g03.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 16440;
}
/*
equation index: 16441
type: SIMPLE_ASSIGN
g03.IStatorPu = if g03.running.value then if g03.iStatorPu.re == 0.0 and g03.iStatorPu.im == 0.0 then 0.0 else (g03.iStatorPu.re ^ 2.0 + g03.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16441};
  modelica_real tmp2495;
  modelica_real tmp2496;
  modelica_real tmp2497;
  modelica_boolean tmp2498;
  modelica_real tmp2499;
  modelica_boolean tmp2500;
  modelica_real tmp2501;
  tmp2500 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp2500)
  {
    tmp2498 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */) == 0.0));
    if(tmp2498)
    {
      tmp2499 = 0.0;
    }
    else
    {
      tmp2495 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */);
      tmp2496 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */);
      tmp2497 = (tmp2495 * tmp2495) + (tmp2496 * tmp2496);
      if(tmp2497 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2497, 0.5);
      }
      tmp2499 = sqrt(tmp2497);
    }
    tmp2501 = tmp2499;
  }
  else
  {
    tmp2501 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* g03.IStatorPu variable */) = tmp2501;
  threadData->lastEquationSolved = 16441;
}
/*
equation index: 16442
type: SIMPLE_ASSIGN
g03.uPu.re = if g03.running.value then g03.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1146]] /* g03.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 16442;
}
/*
equation index: 16443
type: SIMPLE_ASSIGN
g03.UPu = if g03.running.value then (g03.terminal.V.re ^ 2.0 + g03.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16443};
  modelica_real tmp2502;
  modelica_real tmp2503;
  modelica_real tmp2504;
  modelica_boolean tmp2505;
  modelica_real tmp2506;
  tmp2505 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp2505)
  {
    tmp2502 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */);
    tmp2503 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */);
    tmp2504 = (tmp2502 * tmp2502) + (tmp2503 * tmp2503);
    if(tmp2504 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2504, 0.5);
    }
    tmp2506 = sqrt(tmp2504);
  }
  else
  {
    tmp2506 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* g03.UPu variable */) = tmp2506;
  threadData->lastEquationSolved = 16443;
}
/*
equation index: 16444
type: SIMPLE_ASSIGN
goverNordic_g03.PGenPu = if g03.running.value then (-g03.terminal.V.re) * g03.terminal.i.re - g03.terminal.V.im * g03.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1968]] /* goverNordic_g03.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 16444;
}
/*
equation index: 16445
type: SIMPLE_ASSIGN
goverNordic_g03.perUnitP.y = goverNordic_g03.perUnitP.k * goverNordic_g03.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1984]] /* goverNordic_g03.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2358]] /* goverNordic_g03.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1968]] /* goverNordic_g03.PGenPu variable */));
  threadData->lastEquationSolved = 16445;
}
/*
equation index: 16446
type: SIMPLE_ASSIGN
$DAEres1356 = goverNordic_g03.firstOrder1.k * goverNordic_g03.perUnitP.y + (-goverNordic_g03.firstOrder1.y) - der(goverNordic_g03.firstOrder1.y) * goverNordic_g03.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16446};
  (data->simulationInfo->daeModeData->residualVars[1356]) /* $DAEres1356 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2336]] /* goverNordic_g03.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1984]] /* goverNordic_g03.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* goverNordic_g03.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* der(goverNordic_g03.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2335]] /* goverNordic_g03.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 16446;
}
/*
equation index: 16447
type: SIMPLE_ASSIGN
g03.PGen = if g03.running.value then 100.0 * goverNordic_g03.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* g03.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1968]] /* goverNordic_g03.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16447;
}
/*
equation index: 16448
type: SIMPLE_ASSIGN
g03.QGenPu = if g03.running.value then g03.terminal.V.re * g03.terminal.i.im - g03.terminal.V.im * g03.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* g03.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 16448;
}
/*
equation index: 16449
type: SIMPLE_ASSIGN
g03.QGen = if g03.running.value then 100.0 * g03.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* g03.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* g03.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16449;
}
/*
equation index: 16450
type: SIMPLE_ASSIGN
g03.uStatorPu.re = if g03.running.value then (g03.terminal.V.re + (-100.0) * (g03.terminal.i.re * g03.RTfoPu - g03.terminal.i.im * g03.XTfoPu) / g03.SNom) / g03.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* g03.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* g03.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* g03.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* g03.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* g03.SNom PARAM */),"g03.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* g03.rTfoPu PARAM */),"g03.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16450;
}
/*
equation index: 16451
type: SIMPLE_ASSIGN
g03.sStatorPu.re = if g03.running.value then g03.uStatorPu.re * g03.iStatorPu.re + g03.uStatorPu.im * g03.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1138]] /* g03.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16451;
}
/*
equation index: 16452
type: SIMPLE_ASSIGN
g03.sStatorPu.im = if g03.running.value then g03.uStatorPu.im * g03.iStatorPu.re - g03.uStatorPu.re * g03.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* g03.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 16452;
}
/*
equation index: 16453
type: SIMPLE_ASSIGN
g03.QStatorPu = if g03.running.value then -g03.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16453};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* g03.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* g03.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16453;
}
/*
equation index: 16454
type: SIMPLE_ASSIGN
g03.QStatorPuQNom = if g03.running.value then 100.0 * g03.QStatorPu / g03.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* g03.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* g03.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[466]] /* g03.QNomAlt PARAM */),"g03.QNomAlt")):0.0);
  threadData->lastEquationSolved = 16454;
}
/*
equation index: 16455
type: SIMPLE_ASSIGN
vrNordic_g03.UsPu = if g03.running.value then if g03.uStatorPu.re == 0.0 and g03.uStatorPu.im == 0.0 then 0.0 else (g03.uStatorPu.re ^ 2.0 + g03.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16455};
  modelica_real tmp2507;
  modelica_real tmp2508;
  modelica_real tmp2509;
  modelica_boolean tmp2510;
  modelica_real tmp2511;
  modelica_boolean tmp2512;
  modelica_real tmp2513;
  tmp2512 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[478]] /* g03.running.value DISCRETE */);
  if(tmp2512)
  {
    tmp2510 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */) == 0.0));
    if(tmp2510)
    {
      tmp2511 = 0.0;
    }
    else
    {
      tmp2507 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */);
      tmp2508 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */);
      tmp2509 = (tmp2507 * tmp2507) + (tmp2508 * tmp2508);
      if(tmp2509 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2509, 0.5);
      }
      tmp2511 = sqrt(tmp2509);
    }
    tmp2513 = tmp2511;
  }
  else
  {
    tmp2513 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3495]] /* vrNordic_g03.UsPu variable */) = tmp2513;
  threadData->lastEquationSolved = 16455;
}
/*
equation index: 16456
type: SIMPLE_ASSIGN
vrNordic_g03.dU.y = vrNordic_g03.const1.k - vrNordic_g03.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3499]] /* vrNordic_g03.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4290]] /* vrNordic_g03.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3495]] /* vrNordic_g03.UsPu variable */);
  threadData->lastEquationSolved = 16456;
}
/*
equation index: 16457
type: SIMPLE_ASSIGN
vrNordic_g03.add.y = vrNordic_g03.add.k1 * vrNordic_g03.dU.y + vrNordic_g03.add.k2 * vrNordic_g03.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4287]] /* vrNordic_g03.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3499]] /* vrNordic_g03.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4288]] /* vrNordic_g03.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3513]] /* vrNordic_g03.limiter.y variable */));
  threadData->lastEquationSolved = 16457;
}
/*
equation index: 16458
type: SIMPLE_ASSIGN
vrNordic_g03.switch.y = if vrNordic_g03.greaterEqualThreshold.y then vrNordic_g03.gain1.y else vrNordic_g03.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3516]] /* vrNordic_g03.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1021]] /* vrNordic_g03.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3503]] /* vrNordic_g03.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */));
  threadData->lastEquationSolved = 16458;
}
/*
equation index: 16459
type: SIMPLE_ASSIGN
vrNordic_g03.min1.y = if vrNordic_g03.switch.y < vrNordic_g03.add.y then vrNordic_g03.switch.y else vrNordic_g03.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16459};
  modelica_boolean tmp2514;
  modelica_real tmp2515;
  modelica_real tmp2516;
  tmp2515 = 1.0;
  tmp2516 = 1.0;
  relationhysteresis(data, &tmp2514, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3516]] /* vrNordic_g03.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */), tmp2515, tmp2516, 260, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3514]] /* vrNordic_g03.min1.y variable */) = (tmp2514?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3516]] /* vrNordic_g03.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */));
  threadData->lastEquationSolved = 16459;
}
/*
equation index: 16460
type: SIMPLE_ASSIGN
vrNordic_g03.kMulDU.y = vrNordic_g03.kMulDU.k * vrNordic_g03.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3504]] /* vrNordic_g03.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4299]] /* vrNordic_g03.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3514]] /* vrNordic_g03.min1.y variable */));
  threadData->lastEquationSolved = 16460;
}
/*
equation index: 16461
type: SIMPLE_ASSIGN
$DAEres1357 = vrNordic_g03.leadLag.a_end * vrNordic_g03.kMulDU.y + (-vrNordic_g03.leadLag.a[2]) * vrNordic_g03.leadLag.x_scaled[1] - der(vrNordic_g03.leadLag.x_scaled[1]) * vrNordic_g03.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16461};
  (data->simulationInfo->daeModeData->residualVars[1357]) /* $DAEres1357 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4304]] /* vrNordic_g03.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3504]] /* vrNordic_g03.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4303]] /* vrNordic_g03.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* vrNordic_g03.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* der(vrNordic_g03.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4302]] /* vrNordic_g03.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 16461;
}
/*
equation index: 16462
type: SIMPLE_ASSIGN
vrNordic_g03.leadLag.y = (vrNordic_g03.leadLag.bb[2] - vrNordic_g03.leadLag.d * vrNordic_g03.leadLag.a[2]) * vrNordic_g03.leadLag.x[1] + vrNordic_g03.leadLag.d * vrNordic_g03.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3506]] /* vrNordic_g03.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4308]] /* vrNordic_g03.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4309]] /* vrNordic_g03.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4303]] /* vrNordic_g03.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3505]] /* vrNordic_g03.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4309]] /* vrNordic_g03.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3504]] /* vrNordic_g03.kMulDU.y variable */));
  threadData->lastEquationSolved = 16462;
}
/*
equation index: 16463
type: SIMPLE_ASSIGN
vrNordic_g03.feedback1.y = vrNordic_g03.leadLag.y - vrNordic_g03.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3501]] /* vrNordic_g03.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3506]] /* vrNordic_g03.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 16463;
}
/*
equation index: 16464
type: SIMPLE_ASSIGN
vrNordic_g03.gain.y = vrNordic_g03.gain.k * vrNordic_g03.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4296]] /* vrNordic_g03.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3501]] /* vrNordic_g03.feedback1.y variable */));
  threadData->lastEquationSolved = 16464;
}
/*
equation index: 16465
type: SIMPLE_ASSIGN
$DAEres1358 = (if vrNordic_g03.limIntegrator.y < vrNordic_g03.limIntegrator.outMin and vrNordic_g03.limIntegrator.k * vrNordic_g03.gain.y < 0.0 or vrNordic_g03.limIntegrator.y > vrNordic_g03.limIntegrator.outMax and vrNordic_g03.limIntegrator.k * vrNordic_g03.gain.y > 0.0 then 0.0 else vrNordic_g03.limIntegrator.k * vrNordic_g03.gain.y) - der(vrNordic_g03.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16465};
  modelica_boolean tmp2517;
  modelica_real tmp2518;
  modelica_real tmp2519;
  modelica_boolean tmp2520;
  modelica_real tmp2521;
  modelica_real tmp2522;
  modelica_boolean tmp2523;
  modelica_real tmp2524;
  modelica_real tmp2525;
  modelica_boolean tmp2526;
  modelica_real tmp2527;
  modelica_real tmp2528;
  tmp2518 = 1.0;
  tmp2519 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4341]] /* vrNordic_g03.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp2517, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4341]] /* vrNordic_g03.limIntegrator.outMin PARAM */), tmp2518, tmp2519, 264, Less, LessZC);
  tmp2521 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */))) * (1.0);
  tmp2522 = 0.0;
  relationhysteresis(data, &tmp2520, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)), 0.0, tmp2521, tmp2522, 265, Less, LessZC);
  tmp2524 = 1.0;
  tmp2525 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4340]] /* vrNordic_g03.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp2523, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4340]] /* vrNordic_g03.limIntegrator.outMax PARAM */), tmp2524, tmp2525, 266, Greater, GreaterZC);
  tmp2527 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */))) * (1.0);
  tmp2528 = 0.0;
  relationhysteresis(data, &tmp2526, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)), 0.0, tmp2527, tmp2528, 267, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1358]) /* $DAEres1358 DAE_RESIDUAL_VAR */ = (((tmp2517 && tmp2520) || (tmp2523 && tmp2526))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* der(vrNordic_g03.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 16465;
}
/*
equation index: 16466
type: SIMPLE_ASSIGN
$whenCondition58 = not pre(g02.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16466};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[423]] /* $whenCondition58 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[474] /* g02.running.value DISCRETE */));
  threadData->lastEquationSolved = 16466;
}
/*
equation index: 16467
type: WHEN

when {} then
  g02.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16467};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[423]] /* $whenCondition58 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[423] /* $whenCondition58 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16467;
}
/*
equation index: 16469
type: SIMPLE_ASSIGN
$whenCondition60 = not g02.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16469};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[426]] /* $whenCondition60 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */));
  threadData->lastEquationSolved = 16469;
}
/*
equation index: 16470
type: SIMPLE_ASSIGN
$whenCondition59 = g02.running.value and not pre(g02.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16470};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[424]] /* $whenCondition59 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[474] /* g02.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16470;
}
/*
equation index: 16471
type: WHEN

when {$whenCondition60} then
  g02.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16471};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[426]] /* $whenCondition60 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[426] /* $whenCondition60 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[3]] /* g02.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[424]] /* $whenCondition59 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[424] /* $whenCondition59 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[3]] /* g02.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16471;
}
/*
equation index: 16473
type: SIMPLE_ASSIGN
g02.converter.u = Integer(g02.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16473};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* g02.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[3]] /* g02.state DISCRETE */)));
  threadData->lastEquationSolved = 16473;
}
/*
equation index: 16474
type: SIMPLE_ASSIGN
g02.genState = (*Real*)(g02.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* g02.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* g02.converter.u DISCRETE */));
  threadData->lastEquationSolved = 16474;
}
/*
equation index: 16475
type: SIMPLE_ASSIGN
$DAEres138 = if g02.running.value then der(g02.theta) - 314.1592653589793 * (g02.omegaPu - omegaCOI) else der(g02.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16475};
  (data->simulationInfo->daeModeData->residualVars[138]) /* $DAEres138 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* der(g02.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* der(g02.theta) STATE_DER */));
  threadData->lastEquationSolved = 16475;
}
/*
equation index: 16476
type: SIMPLE_ASSIGN
g02.cmPu = if g02.running.value then g02.PmPu / g02.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* g02.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* g02.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */),"g02.omegaPu"):0.0);
  threadData->lastEquationSolved = 16476;
}
/*
equation index: 16477
type: SIMPLE_ASSIGN
g02.ufPu = if g02.running.value then vrNordic_g02.limIntegrator.y * g02.Kuf * g02.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* g02.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* g02.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 16477;
}
/*
equation index: 16478
type: SIMPLE_ASSIGN
$DAEres456 = if g02.running.value then g02.sin2Eta - (g02.lambdaAQPu / g02.lambdaAirGapPu) ^ 2.0 else g02.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16478};
  modelica_real tmp2529;
  modelica_boolean tmp2530;
  modelica_real tmp2531;
  tmp2530 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp2530)
  {
    tmp2529 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* g02.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* g02.lambdaAirGapPu variable */),"g02.lambdaAirGapPu");
    tmp2531 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* g02.sin2Eta variable */) - ((tmp2529 * tmp2529));
  }
  else
  {
    tmp2531 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* g02.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[456]) /* $DAEres456 DAE_RESIDUAL_VAR */ = tmp2531;
  threadData->lastEquationSolved = 16478;
}
/*
equation index: 16479
type: SIMPLE_ASSIGN
$DAEres457 = if g02.running.value then g02.mqsPu - g02.MqPPu / (1.0 + g02.mq * g02.lambdaAirGapPu ^ g02.nq) else g02.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16479};
  modelica_real tmp2532;
  modelica_real tmp2533;
  modelica_real tmp2534;
  modelica_real tmp2535;
  modelica_real tmp2536;
  modelica_real tmp2537;
  modelica_real tmp2538;
  modelica_boolean tmp2539;
  modelica_real tmp2540;
  tmp2539 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp2539)
  {
    tmp2532 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* g02.lambdaAirGapPu variable */);
    tmp2533 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* g02.nq PARAM */);
    if(tmp2532 < 0.0 && tmp2533 != 0.0)
    {
      tmp2535 = modf(tmp2533, &tmp2536);
      
      if(tmp2535 > 0.5)
      {
        tmp2535 -= 1.0;
        tmp2536 += 1.0;
      }
      else if(tmp2535 < -0.5)
      {
        tmp2535 += 1.0;
        tmp2536 -= 1.0;
      }
      
      if(fabs(tmp2535) < 1e-10)
        tmp2534 = pow(tmp2532, tmp2536);
      else
      {
        tmp2538 = modf(1.0/tmp2533, &tmp2537);
        if(tmp2538 > 0.5)
        {
          tmp2538 -= 1.0;
          tmp2537 += 1.0;
        }
        else if(tmp2538 < -0.5)
        {
          tmp2538 += 1.0;
          tmp2537 -= 1.0;
        }
        if(fabs(tmp2538) < 1e-10 && ((unsigned long)tmp2537 & 1))
        {
          tmp2534 = -pow(-tmp2532, tmp2535)*pow(tmp2532, tmp2536);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2532, tmp2533);
        }
      }
    }
    else
    {
      tmp2534 = pow(tmp2532, tmp2533);
    }
    if(isnan(tmp2534) || isinf(tmp2534))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2532, tmp2533);
    }
    tmp2540 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* g02.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* g02.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* g02.mq PARAM */)) * (tmp2534),"1.0 + g02.mq * g02.lambdaAirGapPu ^ g02.nq"));
  }
  else
  {
    tmp2540 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* g02.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[457]) /* $DAEres457 DAE_RESIDUAL_VAR */ = tmp2540;
  threadData->lastEquationSolved = 16479;
}
/*
equation index: 16480
type: SIMPLE_ASSIGN
$DAEres458 = if g02.running.value then g02.cos2Eta - (g02.lambdaADPu / g02.lambdaAirGapPu) ^ 2.0 else g02.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16480};
  modelica_real tmp2541;
  modelica_boolean tmp2542;
  modelica_real tmp2543;
  tmp2542 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp2542)
  {
    tmp2541 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* g02.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* g02.lambdaAirGapPu variable */),"g02.lambdaAirGapPu");
    tmp2543 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* g02.cos2Eta variable */) - ((tmp2541 * tmp2541));
  }
  else
  {
    tmp2543 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* g02.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[458]) /* $DAEres458 DAE_RESIDUAL_VAR */ = tmp2543;
  threadData->lastEquationSolved = 16480;
}
/*
equation index: 16481
type: SIMPLE_ASSIGN
$DAEres459 = if g02.running.value then g02.MqSatPPu - (g02.miPu - g02.MsalPu * g02.cos2Eta) else g02.MqSatPPu - g02.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16481};
  (data->simulationInfo->daeModeData->residualVars[459]) /* $DAEres459 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* g02.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* g02.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* g02.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* g02.MqPPu PARAM */));
  threadData->lastEquationSolved = 16481;
}
/*
equation index: 16482
type: SIMPLE_ASSIGN
$DAEres460 = if g02.running.value then g02.lambdaADPu - g02.MdSatPPu * (g02.idPu + g02.ifPu + g02.iDPu) else g02.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16482};
  (data->simulationInfo->daeModeData->residualVars[460]) /* $DAEres460 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* g02.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* g02.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* g02.lambdaADPu variable */));
  threadData->lastEquationSolved = 16482;
}
/*
equation index: 16483
type: SIMPLE_ASSIGN
$DAEres461 = if g02.running.value then g02.lambdaDPu - (g02.MdSatPPu * g02.idPu + (g02.MdSatPPu + g02.MrcPPu) * g02.ifPu + (g02.MdSatPPu + g02.LDPPu + g02.MrcPPu) * g02.iDPu) else g02.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16483};
  (data->simulationInfo->daeModeData->residualVars[461]) /* $DAEres461 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* g02.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* g02.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* g02.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* g02.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* g02.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */));
  threadData->lastEquationSolved = 16483;
}
/*
equation index: 16484
type: SIMPLE_ASSIGN
$DAEres462 = if g02.running.value then g02.MdSatPPu - (g02.miPu + g02.MsalPu * g02.sin2Eta) else g02.MdSatPPu - g02.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16484};
  (data->simulationInfo->daeModeData->residualVars[462]) /* $DAEres462 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* g02.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* g02.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* g02.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* g02.MdPPu PARAM */));
  threadData->lastEquationSolved = 16484;
}
/*
equation index: 16485
type: SIMPLE_ASSIGN
$DAEres463 = if g02.running.value then g02.miPu - (g02.mdsPu * g02.cos2Eta + g02.mqsPu * g02.sin2Eta) else g02.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16485};
  (data->simulationInfo->daeModeData->residualVars[463]) /* $DAEres463 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* g02.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* g02.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* g02.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* g02.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* g02.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* g02.miPu variable */));
  threadData->lastEquationSolved = 16485;
}
/*
equation index: 16486
type: SIMPLE_ASSIGN
$DAEres464 = if g02.running.value then g02.mdsPu - g02.MdPPu / (1.0 + g02.md * g02.lambdaAirGapPu ^ g02.nd) else g02.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16486};
  modelica_real tmp2544;
  modelica_real tmp2545;
  modelica_real tmp2546;
  modelica_real tmp2547;
  modelica_real tmp2548;
  modelica_real tmp2549;
  modelica_real tmp2550;
  modelica_boolean tmp2551;
  modelica_real tmp2552;
  tmp2551 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp2551)
  {
    tmp2544 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* g02.lambdaAirGapPu variable */);
    tmp2545 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* g02.nd PARAM */);
    if(tmp2544 < 0.0 && tmp2545 != 0.0)
    {
      tmp2547 = modf(tmp2545, &tmp2548);
      
      if(tmp2547 > 0.5)
      {
        tmp2547 -= 1.0;
        tmp2548 += 1.0;
      }
      else if(tmp2547 < -0.5)
      {
        tmp2547 += 1.0;
        tmp2548 -= 1.0;
      }
      
      if(fabs(tmp2547) < 1e-10)
        tmp2546 = pow(tmp2544, tmp2548);
      else
      {
        tmp2550 = modf(1.0/tmp2545, &tmp2549);
        if(tmp2550 > 0.5)
        {
          tmp2550 -= 1.0;
          tmp2549 += 1.0;
        }
        else if(tmp2550 < -0.5)
        {
          tmp2550 += 1.0;
          tmp2549 -= 1.0;
        }
        if(fabs(tmp2550) < 1e-10 && ((unsigned long)tmp2549 & 1))
        {
          tmp2546 = -pow(-tmp2544, tmp2547)*pow(tmp2544, tmp2548);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2544, tmp2545);
        }
      }
    }
    else
    {
      tmp2546 = pow(tmp2544, tmp2545);
    }
    if(isnan(tmp2546) || isinf(tmp2546))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2544, tmp2545);
    }
    tmp2552 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* g02.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* g02.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* g02.md PARAM */)) * (tmp2546),"1.0 + g02.md * g02.lambdaAirGapPu ^ g02.nd"));
  }
  else
  {
    tmp2552 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* g02.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[464]) /* $DAEres464 DAE_RESIDUAL_VAR */ = tmp2552;
  threadData->lastEquationSolved = 16486;
}
/*
equation index: 16487
type: SIMPLE_ASSIGN
$DAEres465 = if g02.running.value then g02.lambdaAirGapPu - sqrt(g02.lambdaADPu ^ 2.0 + g02.lambdaAQPu ^ 2.0) else g02.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16487};
  modelica_real tmp2553;
  modelica_real tmp2554;
  modelica_real tmp2555;
  modelica_boolean tmp2556;
  modelica_real tmp2557;
  tmp2556 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp2556)
  {
    tmp2553 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* g02.lambdaADPu variable */);
    tmp2554 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* g02.lambdaAQPu variable */);
    tmp2555 = (tmp2553 * tmp2553) + (tmp2554 * tmp2554);
    if(!(tmp2555 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g02.lambdaADPu ^ 2.0 + g02.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp2555);
      }
    }
    tmp2557 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* g02.lambdaAirGapPu variable */) - sqrt(tmp2555);
  }
  else
  {
    tmp2557 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* g02.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[465]) /* $DAEres465 DAE_RESIDUAL_VAR */ = tmp2557;
  threadData->lastEquationSolved = 16487;
}
/*
equation index: 16488
type: SIMPLE_ASSIGN
$DAEres466 = if g02.running.value then g02.lambdaAQPu - g02.MqSatPPu * (g02.iqPu + g02.iQ1Pu + g02.iQ2Pu) else g02.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16488};
  (data->simulationInfo->daeModeData->residualVars[466]) /* $DAEres466 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* g02.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* g02.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* g02.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* g02.lambdaAQPu variable */));
  threadData->lastEquationSolved = 16488;
}
/*
equation index: 16489
type: SIMPLE_ASSIGN
$DAEres467 = if g02.running.value then g02.lambdaQ2Pu - (g02.MqSatPPu * (g02.iqPu + g02.iQ1Pu) + (g02.MqSatPPu + g02.LQ2PPu) * g02.iQ2Pu) else g02.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16489};
  (data->simulationInfo->daeModeData->residualVars[467]) /* $DAEres467 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* g02.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* g02.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* g02.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* g02.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* g02.iQ2Pu variable */));
  threadData->lastEquationSolved = 16489;
}
/*
equation index: 16490
type: SIMPLE_ASSIGN
$DAEres468 = if g02.running.value then g02.lambdaQ1Pu - (g02.MqSatPPu * g02.iqPu + (g02.MqSatPPu + g02.LQ1PPu) * g02.iQ1Pu + g02.MqSatPPu * g02.iQ2Pu) else g02.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16490};
  (data->simulationInfo->daeModeData->residualVars[468]) /* $DAEres468 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* g02.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* g02.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* g02.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* g02.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* g02.iQ1Pu variable */));
  threadData->lastEquationSolved = 16490;
}
/*
equation index: 16491
type: SIMPLE_ASSIGN
$DAEres469 = if g02.running.value then g02.lambdaqPu - ((g02.MqSatPPu + g02.LqPPu + g02.XTfoPu) * g02.iqPu + g02.MqSatPPu * (g02.iQ1Pu + g02.iQ2Pu)) else g02.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16491};
  (data->simulationInfo->daeModeData->residualVars[469]) /* $DAEres469 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* g02.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* g02.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* g02.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* g02.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* g02.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* g02.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* g02.iDPu variable */));
  threadData->lastEquationSolved = 16491;
}
/*
equation index: 16492
type: SIMPLE_ASSIGN
$DAEres470 = if g02.running.value then g02.uqPu - ((g02.RaPPu + g02.RTfoPu) * g02.iqPu + g02.omegaPu * g02.lambdadPu) else g02.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16492};
  (data->simulationInfo->daeModeData->residualVars[470]) /* $DAEres470 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* g02.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* g02.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* g02.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* g02.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* g02.lambdaqPu variable */));
  threadData->lastEquationSolved = 16492;
}
/*
equation index: 16493
type: SIMPLE_ASSIGN
$DAEres471 = if g02.running.value then g02.udPu - ((g02.RaPPu + g02.RTfoPu) * g02.idPu - g02.omegaPu * g02.lambdaqPu) else g02.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16493};
  (data->simulationInfo->daeModeData->residualVars[471]) /* $DAEres471 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* g02.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* g02.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* g02.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* g02.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* g02.lambdadPu variable */));
  threadData->lastEquationSolved = 16493;
}
/*
equation index: 16494
type: SIMPLE_ASSIGN
$DAEres472 = if g02.running.value then g02.lambdadPu - ((g02.MdSatPPu + g02.LdPPu + g02.XTfoPu) * g02.idPu + g02.MdSatPPu * (g02.ifPu + g02.iDPu)) else g02.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16494};
  (data->simulationInfo->daeModeData->residualVars[472]) /* $DAEres472 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* g02.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* g02.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* g02.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* g02.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */));
  threadData->lastEquationSolved = 16494;
}
/*
equation index: 16495
type: SIMPLE_ASSIGN
$DAEres473 = if g02.running.value then g02.lambdafPu - (g02.MdSatPPu * g02.idPu + (g02.MdSatPPu + g02.LfPPu + g02.MrcPPu) * g02.ifPu + (g02.MdSatPPu + g02.MrcPPu) * g02.iDPu) else g02.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16495};
  (data->simulationInfo->daeModeData->residualVars[473]) /* $DAEres473 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* g02.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* g02.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* g02.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* g02.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* g02.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* g02.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */));
  threadData->lastEquationSolved = 16495;
}
/*
equation index: 16496
type: SIMPLE_ASSIGN
$DAEres1062 = if g02.running.value then 100.0 * g02.terminal.i.im / g02.SNom - (sin(g02.theta) * g02.iqPu - cos(g02.theta) * g02.idPu) else g02.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16496};
  (data->simulationInfo->daeModeData->residualVars[1062]) /* $DAEres1062 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */),"g02.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* g02.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* g02.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */));
  threadData->lastEquationSolved = 16496;
}
/*
equation index: 16497
type: SIMPLE_ASSIGN
$DAEres1063 = if g02.running.value then 100.0 * g02.terminal.i.re / g02.SNom - (sin(g02.theta) * g02.idPu + cos(g02.theta) * g02.iqPu) else g02.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16497};
  (data->simulationInfo->daeModeData->residualVars[1063]) /* $DAEres1063 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */),"g02.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* g02.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* g02.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */));
  threadData->lastEquationSolved = 16497;
}
/*
equation index: 16498
type: SIMPLE_ASSIGN
$DAEres1066 = if g02.running.value then g02.terminal.V.re - (sin(g02.theta) * g02.udPu + cos(g02.theta) * g02.uqPu) else g02.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16498};
  (data->simulationInfo->daeModeData->residualVars[1066]) /* $DAEres1066 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* g02.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* g02.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* g02.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* g02.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* g02.udPu variable */));
  threadData->lastEquationSolved = 16498;
}
/*
equation index: 16499
type: SIMPLE_ASSIGN
$DAEres1067 = if g02.running.value then g02.terminal.V.im - (sin(g02.theta) * g02.uqPu - cos(g02.theta) * g02.udPu) else g02.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16499};
  (data->simulationInfo->daeModeData->residualVars[1067]) /* $DAEres1067 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* g02.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* g02.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* g02.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* g02.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* g02.uqPu variable */));
  threadData->lastEquationSolved = 16499;
}
/*
equation index: 16500
type: SIMPLE_ASSIGN
g02.uPu.im = if g02.running.value then g02.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* g02.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 16500;
}
/*
equation index: 16501
type: SIMPLE_ASSIGN
g02.iStatorPu.re = if g02.running.value then g02.rTfoPu * g02.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 16501;
}
/*
equation index: 16502
type: SIMPLE_ASSIGN
g02.cePu = if g02.running.value then g02.lambdaqPu * g02.idPu - g02.lambdadPu * g02.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* g02.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* g02.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* g02.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* g02.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* g02.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 16502;
}
/*
equation index: 16503
type: SIMPLE_ASSIGN
g02.PePu = if g02.running.value then g02.cePu * g02.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* g02.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* g02.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 16503;
}
/*
equation index: 16504
type: SIMPLE_ASSIGN
$DAEres1266 = if g02.running.value then 2.0 * g02.H * der(g02.omegaPu) - (g02.cmPu * g02.PNomTurb / g02.SNom + g02.DPu * (omegaCOI - g02.omegaPu) - g02.cePu) else der(g02.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16504};
  (data->simulationInfo->daeModeData->residualVars[1266]) /* $DAEres1266 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* g02.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* der(g02.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* g02.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[361]] /* g02.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */),"g02.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* g02.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* g02.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* g02.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* der(g02.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 16504;
}
/*
equation index: 16505
type: SIMPLE_ASSIGN
$DAEres1267 = if g02.running.value then (-g02.RQ2PPu) * g02.iQ2Pu - 0.0031830988618379067 * der(g02.lambdaQ2Pu) else der(g02.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16505};
  (data->simulationInfo->daeModeData->residualVars[1267]) /* $DAEres1267 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* g02.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* g02.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* der(g02.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* der(g02.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 16505;
}
/*
equation index: 16506
type: SIMPLE_ASSIGN
$DAEres1268 = if g02.running.value then (-g02.RQ1PPu) * g02.iQ1Pu - 0.0031830988618379067 * der(g02.lambdaQ1Pu) else der(g02.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16506};
  (data->simulationInfo->daeModeData->residualVars[1268]) /* $DAEres1268 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* g02.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* g02.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(g02.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(g02.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 16506;
}
/*
equation index: 16507
type: SIMPLE_ASSIGN
vrNordic_g02.IrPu = if g02.running.value then g02.RfPPu * g02.ifPu / (g02.rTfoPu * g02.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3470]] /* vrNordic_g02.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* g02.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* g02.Kuf PARAM */)),"g02.rTfoPu * g02.Kuf")):0.0);
  threadData->lastEquationSolved = 16507;
}
/*
equation index: 16508
type: SIMPLE_ASSIGN
vrNordic_g02.dIf.y = vrNordic_g02.IrPu - vrNordic_g02.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3470]] /* vrNordic_g02.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4212]] /* vrNordic_g02.const2.k PARAM */);
  threadData->lastEquationSolved = 16508;
}
/*
equation index: 16509
type: SIMPLE_ASSIGN
vrNordic_g02.gain1.y = vrNordic_g02.gain1.k * vrNordic_g02.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3479]] /* vrNordic_g02.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4218]] /* vrNordic_g02.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */));
  threadData->lastEquationSolved = 16509;
}
/*
equation index: 16510
type: SIMPLE_ASSIGN
vrNordic_g02.overExcitationLimitation.y = if vrNordic_g02.dIf.y < -0.1 then -1.0 else if vrNordic_g02.dIf.y < 0.0 then 0.0 else if vrNordic_g02.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g02.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16510};
  modelica_boolean tmp2558;
  modelica_real tmp2559;
  modelica_real tmp2560;
  modelica_boolean tmp2561;
  modelica_real tmp2562;
  modelica_real tmp2563;
  modelica_boolean tmp2564;
  modelica_boolean tmp2565;
  modelica_real tmp2566;
  modelica_boolean tmp2567;
  modelica_real tmp2568;
  tmp2559 = 1.0;
  tmp2560 = 0.1;
  relationhysteresis(data, &tmp2558, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */), -0.1, tmp2559, tmp2560, 246, Less, LessZC);
  tmp2567 = (modelica_boolean)tmp2558;
  if(tmp2567)
  {
    tmp2568 = -1.0;
  }
  else
  {
    tmp2562 = 1.0;
    tmp2563 = 0.0;
    relationhysteresis(data, &tmp2561, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */), 0.0, tmp2562, tmp2563, 247, Less, LessZC);
    tmp2565 = (modelica_boolean)tmp2561;
    if(tmp2565)
    {
      tmp2566 = 0.0;
    }
    else
    {
      tmp2564 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4266]] /* vrNordic_g02.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp2566 = (tmp2564?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */));
    }
    tmp2568 = tmp2566;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */) = tmp2568;
  threadData->lastEquationSolved = 16510;
}
/*
equation index: 16511
type: SIMPLE_ASSIGN
$DAEres1269 = (if vrNordic_g02.timer.y < vrNordic_g02.timer.outMin and vrNordic_g02.timer.k * vrNordic_g02.overExcitationLimitation.y < 0.0 or vrNordic_g02.timer.y > vrNordic_g02.timer.outMax and vrNordic_g02.timer.k * vrNordic_g02.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g02.timer.k * vrNordic_g02.overExcitationLimitation.y) - der(vrNordic_g02.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16511};
  modelica_boolean tmp2569;
  modelica_real tmp2570;
  modelica_real tmp2571;
  modelica_boolean tmp2572;
  modelica_real tmp2573;
  modelica_real tmp2574;
  modelica_boolean tmp2575;
  modelica_real tmp2576;
  modelica_real tmp2577;
  modelica_boolean tmp2578;
  modelica_real tmp2579;
  modelica_real tmp2580;
  tmp2570 = 1.0;
  tmp2571 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4276]] /* vrNordic_g02.timer.outMin PARAM */));
  relationhysteresis(data, &tmp2569, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4276]] /* vrNordic_g02.timer.outMin PARAM */), tmp2570, tmp2571, 252, Less, LessZC);
  tmp2573 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */))) * (1.0);
  tmp2574 = 0.0;
  relationhysteresis(data, &tmp2572, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)), 0.0, tmp2573, tmp2574, 253, Less, LessZC);
  tmp2576 = 1.0;
  tmp2577 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4275]] /* vrNordic_g02.timer.outMax PARAM */));
  relationhysteresis(data, &tmp2575, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4275]] /* vrNordic_g02.timer.outMax PARAM */), tmp2576, tmp2577, 254, Greater, GreaterZC);
  tmp2579 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */))) * (1.0);
  tmp2580 = 0.0;
  relationhysteresis(data, &tmp2578, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)), 0.0, tmp2579, tmp2580, 255, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1269]) /* $DAEres1269 DAE_RESIDUAL_VAR */ = (((tmp2569 && tmp2572) || (tmp2575 && tmp2578))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* der(vrNordic_g02.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 16511;
}
/*
equation index: 16512
type: SIMPLE_ASSIGN
$DAEres1270 = if g02.running.value then g02.ufPu - (g02.RfPPu * g02.ifPu + 0.0031830988618379067 * der(g02.lambdafPu)) else der(g02.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16512};
  (data->simulationInfo->daeModeData->residualVars[1270]) /* $DAEres1270 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* g02.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* g02.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* g02.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* der(g02.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* der(g02.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 16512;
}
/*
equation index: 16513
type: SIMPLE_ASSIGN
$DAEres1271 = if g02.running.value then (-g02.RDPPu) * g02.iDPu - 0.0031830988618379067 * der(g02.lambdaDPu) else der(g02.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16513};
  (data->simulationInfo->daeModeData->residualVars[1271]) /* $DAEres1271 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* g02.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* g02.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* der(g02.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* der(g02.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 16513;
}
/*
equation index: 16514
type: SIMPLE_ASSIGN
g02.thetaInternal.value = if g02.running.value then Modelica.Math.atan3(g02.udPu, g02.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1098]] /* g02.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* g02.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* g02.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 16514;
}
/*
equation index: 16515
type: SIMPLE_ASSIGN
g02.uStatorPu.im = if g02.running.value then (g02.terminal.V.im + (-100.0) * (g02.terminal.i.re * g02.XTfoPu + g02.terminal.i.im * g02.RTfoPu) / g02.SNom) / g02.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* g02.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* g02.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */),"g02.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */),"g02.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16515;
}
/*
equation index: 16516
type: SIMPLE_ASSIGN
g02.iStatorPu.im = if g02.running.value then g02.rTfoPu * g02.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 16516;
}
/*
equation index: 16517
type: SIMPLE_ASSIGN
g02.IStatorPu = if g02.running.value then if g02.iStatorPu.re == 0.0 and g02.iStatorPu.im == 0.0 then 0.0 else (g02.iStatorPu.re ^ 2.0 + g02.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16517};
  modelica_real tmp2581;
  modelica_real tmp2582;
  modelica_real tmp2583;
  modelica_boolean tmp2584;
  modelica_real tmp2585;
  modelica_boolean tmp2586;
  modelica_real tmp2587;
  tmp2586 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp2586)
  {
    tmp2584 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */) == 0.0));
    if(tmp2584)
    {
      tmp2585 = 0.0;
    }
    else
    {
      tmp2581 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */);
      tmp2582 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */);
      tmp2583 = (tmp2581 * tmp2581) + (tmp2582 * tmp2582);
      if(tmp2583 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2583, 0.5);
      }
      tmp2585 = sqrt(tmp2583);
    }
    tmp2587 = tmp2585;
  }
  else
  {
    tmp2587 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* g02.IStatorPu variable */) = tmp2587;
  threadData->lastEquationSolved = 16517;
}
/*
equation index: 16518
type: SIMPLE_ASSIGN
g02.uPu.re = if g02.running.value then g02.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1100]] /* g02.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 16518;
}
/*
equation index: 16519
type: SIMPLE_ASSIGN
g02.UPu = if g02.running.value then (g02.terminal.V.re ^ 2.0 + g02.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16519};
  modelica_real tmp2588;
  modelica_real tmp2589;
  modelica_real tmp2590;
  modelica_boolean tmp2591;
  modelica_real tmp2592;
  tmp2591 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp2591)
  {
    tmp2588 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */);
    tmp2589 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */);
    tmp2590 = (tmp2588 * tmp2588) + (tmp2589 * tmp2589);
    if(tmp2590 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2590, 0.5);
    }
    tmp2592 = sqrt(tmp2590);
  }
  else
  {
    tmp2592 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* g02.UPu variable */) = tmp2592;
  threadData->lastEquationSolved = 16519;
}
/*
equation index: 16520
type: SIMPLE_ASSIGN
goverNordic_g02.PGenPu = if g02.running.value then (-g02.terminal.V.re) * g02.terminal.i.re - g02.terminal.V.im * g02.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* goverNordic_g02.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 16520;
}
/*
equation index: 16521
type: SIMPLE_ASSIGN
goverNordic_g02.perUnitP.y = goverNordic_g02.perUnitP.k * goverNordic_g02.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1966]] /* goverNordic_g02.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2322]] /* goverNordic_g02.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* goverNordic_g02.PGenPu variable */));
  threadData->lastEquationSolved = 16521;
}
/*
equation index: 16522
type: SIMPLE_ASSIGN
$DAEres1353 = goverNordic_g02.firstOrder1.k * goverNordic_g02.perUnitP.y + (-goverNordic_g02.firstOrder1.y) - der(goverNordic_g02.firstOrder1.y) * goverNordic_g02.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16522};
  (data->simulationInfo->daeModeData->residualVars[1353]) /* $DAEres1353 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2300]] /* goverNordic_g02.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1966]] /* goverNordic_g02.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* goverNordic_g02.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* der(goverNordic_g02.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2299]] /* goverNordic_g02.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 16522;
}
/*
equation index: 16523
type: SIMPLE_ASSIGN
g02.PGen = if g02.running.value then 100.0 * goverNordic_g02.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* g02.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* goverNordic_g02.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16523;
}
/*
equation index: 16524
type: SIMPLE_ASSIGN
g02.QGenPu = if g02.running.value then g02.terminal.V.re * g02.terminal.i.im - g02.terminal.V.im * g02.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* g02.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 16524;
}
/*
equation index: 16525
type: SIMPLE_ASSIGN
g02.QGen = if g02.running.value then 100.0 * g02.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* g02.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* g02.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16525;
}
/*
equation index: 16526
type: SIMPLE_ASSIGN
g02.uStatorPu.re = if g02.running.value then (g02.terminal.V.re + (-100.0) * (g02.terminal.i.re * g02.RTfoPu - g02.terminal.i.im * g02.XTfoPu) / g02.SNom) / g02.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* g02.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* g02.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* g02.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* g02.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* g02.SNom PARAM */),"g02.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* g02.rTfoPu PARAM */),"g02.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16526;
}
/*
equation index: 16527
type: SIMPLE_ASSIGN
g02.sStatorPu.re = if g02.running.value then g02.uStatorPu.re * g02.iStatorPu.re + g02.uStatorPu.im * g02.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* g02.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16527;
}
/*
equation index: 16528
type: SIMPLE_ASSIGN
g02.sStatorPu.im = if g02.running.value then g02.uStatorPu.im * g02.iStatorPu.re - g02.uStatorPu.re * g02.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* g02.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 16528;
}
/*
equation index: 16529
type: SIMPLE_ASSIGN
g02.QStatorPu = if g02.running.value then -g02.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* g02.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* g02.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16529;
}
/*
equation index: 16530
type: SIMPLE_ASSIGN
g02.QStatorPuQNom = if g02.running.value then 100.0 * g02.QStatorPu / g02.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* g02.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* g02.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* g02.QNomAlt PARAM */),"g02.QNomAlt")):0.0);
  threadData->lastEquationSolved = 16530;
}
/*
equation index: 16531
type: SIMPLE_ASSIGN
vrNordic_g02.UsPu = if g02.running.value then if g02.uStatorPu.re == 0.0 and g02.uStatorPu.im == 0.0 then 0.0 else (g02.uStatorPu.re ^ 2.0 + g02.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16531};
  modelica_real tmp2593;
  modelica_real tmp2594;
  modelica_real tmp2595;
  modelica_boolean tmp2596;
  modelica_real tmp2597;
  modelica_boolean tmp2598;
  modelica_real tmp2599;
  tmp2598 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[474]] /* g02.running.value DISCRETE */);
  if(tmp2598)
  {
    tmp2596 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */) == 0.0));
    if(tmp2596)
    {
      tmp2597 = 0.0;
    }
    else
    {
      tmp2593 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */);
      tmp2594 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */);
      tmp2595 = (tmp2593 * tmp2593) + (tmp2594 * tmp2594);
      if(tmp2595 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2595, 0.5);
      }
      tmp2597 = sqrt(tmp2595);
    }
    tmp2599 = tmp2597;
  }
  else
  {
    tmp2599 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3471]] /* vrNordic_g02.UsPu variable */) = tmp2599;
  threadData->lastEquationSolved = 16531;
}
/*
equation index: 16532
type: SIMPLE_ASSIGN
vrNordic_g02.dU.y = vrNordic_g02.const1.k - vrNordic_g02.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3475]] /* vrNordic_g02.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4211]] /* vrNordic_g02.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3471]] /* vrNordic_g02.UsPu variable */);
  threadData->lastEquationSolved = 16532;
}
/*
equation index: 16533
type: SIMPLE_ASSIGN
vrNordic_g02.add.y = vrNordic_g02.add.k1 * vrNordic_g02.dU.y + vrNordic_g02.add.k2 * vrNordic_g02.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4208]] /* vrNordic_g02.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3475]] /* vrNordic_g02.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4209]] /* vrNordic_g02.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3489]] /* vrNordic_g02.limiter.y variable */));
  threadData->lastEquationSolved = 16533;
}
/*
equation index: 16534
type: SIMPLE_ASSIGN
vrNordic_g02.switch.y = if vrNordic_g02.greaterEqualThreshold.y then vrNordic_g02.gain1.y else vrNordic_g02.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3492]] /* vrNordic_g02.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1018]] /* vrNordic_g02.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3479]] /* vrNordic_g02.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */));
  threadData->lastEquationSolved = 16534;
}
/*
equation index: 16535
type: SIMPLE_ASSIGN
vrNordic_g02.min1.y = if vrNordic_g02.switch.y < vrNordic_g02.add.y then vrNordic_g02.switch.y else vrNordic_g02.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16535};
  modelica_boolean tmp2600;
  modelica_real tmp2601;
  modelica_real tmp2602;
  tmp2601 = 1.0;
  tmp2602 = 1.0;
  relationhysteresis(data, &tmp2600, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3492]] /* vrNordic_g02.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */), tmp2601, tmp2602, 244, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3490]] /* vrNordic_g02.min1.y variable */) = (tmp2600?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3492]] /* vrNordic_g02.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */));
  threadData->lastEquationSolved = 16535;
}
/*
equation index: 16536
type: SIMPLE_ASSIGN
vrNordic_g02.kMulDU.y = vrNordic_g02.kMulDU.k * vrNordic_g02.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16536};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3480]] /* vrNordic_g02.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4220]] /* vrNordic_g02.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3490]] /* vrNordic_g02.min1.y variable */));
  threadData->lastEquationSolved = 16536;
}
/*
equation index: 16537
type: SIMPLE_ASSIGN
$DAEres1354 = vrNordic_g02.leadLag.a_end * vrNordic_g02.kMulDU.y + (-vrNordic_g02.leadLag.a[2]) * vrNordic_g02.leadLag.x_scaled[1] - der(vrNordic_g02.leadLag.x_scaled[1]) * vrNordic_g02.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16537};
  (data->simulationInfo->daeModeData->residualVars[1354]) /* $DAEres1354 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4225]] /* vrNordic_g02.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3480]] /* vrNordic_g02.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4224]] /* vrNordic_g02.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* vrNordic_g02.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* der(vrNordic_g02.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4223]] /* vrNordic_g02.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 16537;
}
/*
equation index: 16538
type: SIMPLE_ASSIGN
vrNordic_g02.leadLag.y = (vrNordic_g02.leadLag.bb[2] - vrNordic_g02.leadLag.d * vrNordic_g02.leadLag.a[2]) * vrNordic_g02.leadLag.x[1] + vrNordic_g02.leadLag.d * vrNordic_g02.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3482]] /* vrNordic_g02.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4229]] /* vrNordic_g02.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4230]] /* vrNordic_g02.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4224]] /* vrNordic_g02.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3481]] /* vrNordic_g02.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4230]] /* vrNordic_g02.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3480]] /* vrNordic_g02.kMulDU.y variable */));
  threadData->lastEquationSolved = 16538;
}
/*
equation index: 16539
type: SIMPLE_ASSIGN
vrNordic_g02.feedback1.y = vrNordic_g02.leadLag.y - vrNordic_g02.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3477]] /* vrNordic_g02.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3482]] /* vrNordic_g02.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 16539;
}
/*
equation index: 16540
type: SIMPLE_ASSIGN
vrNordic_g02.gain.y = vrNordic_g02.gain.k * vrNordic_g02.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4217]] /* vrNordic_g02.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3477]] /* vrNordic_g02.feedback1.y variable */));
  threadData->lastEquationSolved = 16540;
}
/*
equation index: 16541
type: SIMPLE_ASSIGN
$DAEres1355 = (if vrNordic_g02.limIntegrator.y < vrNordic_g02.limIntegrator.outMin and vrNordic_g02.limIntegrator.k * vrNordic_g02.gain.y < 0.0 or vrNordic_g02.limIntegrator.y > vrNordic_g02.limIntegrator.outMax and vrNordic_g02.limIntegrator.k * vrNordic_g02.gain.y > 0.0 then 0.0 else vrNordic_g02.limIntegrator.k * vrNordic_g02.gain.y) - der(vrNordic_g02.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16541};
  modelica_boolean tmp2603;
  modelica_real tmp2604;
  modelica_real tmp2605;
  modelica_boolean tmp2606;
  modelica_real tmp2607;
  modelica_real tmp2608;
  modelica_boolean tmp2609;
  modelica_real tmp2610;
  modelica_real tmp2611;
  modelica_boolean tmp2612;
  modelica_real tmp2613;
  modelica_real tmp2614;
  tmp2604 = 1.0;
  tmp2605 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4262]] /* vrNordic_g02.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp2603, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4262]] /* vrNordic_g02.limIntegrator.outMin PARAM */), tmp2604, tmp2605, 248, Less, LessZC);
  tmp2607 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */))) * (1.0);
  tmp2608 = 0.0;
  relationhysteresis(data, &tmp2606, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)), 0.0, tmp2607, tmp2608, 249, Less, LessZC);
  tmp2610 = 1.0;
  tmp2611 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4261]] /* vrNordic_g02.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp2609, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4261]] /* vrNordic_g02.limIntegrator.outMax PARAM */), tmp2610, tmp2611, 250, Greater, GreaterZC);
  tmp2613 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */))) * (1.0);
  tmp2614 = 0.0;
  relationhysteresis(data, &tmp2612, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)), 0.0, tmp2613, tmp2614, 251, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1355]) /* $DAEres1355 DAE_RESIDUAL_VAR */ = (((tmp2603 && tmp2606) || (tmp2609 && tmp2612))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* der(vrNordic_g02.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 16541;
}
/*
equation index: 16542
type: SIMPLE_ASSIGN
$whenCondition61 = not pre(g01.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16542};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[427]] /* $whenCondition61 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[470] /* g01.running.value DISCRETE */));
  threadData->lastEquationSolved = 16542;
}
/*
equation index: 16543
type: WHEN

when {} then
  g01.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16543};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[427]] /* $whenCondition61 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[427] /* $whenCondition61 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16543;
}
/*
equation index: 16545
type: SIMPLE_ASSIGN
$whenCondition63 = not g01.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16545};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[429]] /* $whenCondition63 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */));
  threadData->lastEquationSolved = 16545;
}
/*
equation index: 16546
type: SIMPLE_ASSIGN
$whenCondition62 = g01.running.value and not pre(g01.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16546};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[428]] /* $whenCondition62 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[470] /* g01.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16546;
}
/*
equation index: 16547
type: WHEN

when {$whenCondition63} then
  g01.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16547};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[429]] /* $whenCondition63 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[429] /* $whenCondition63 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* g01.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[428]] /* $whenCondition62 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[428] /* $whenCondition62 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* g01.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16547;
}
/*
equation index: 16549
type: SIMPLE_ASSIGN
g01.converter.u = Integer(g01.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16549};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* g01.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* g01.state DISCRETE */)));
  threadData->lastEquationSolved = 16549;
}
/*
equation index: 16550
type: SIMPLE_ASSIGN
g01.genState = (*Real*)(g01.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* g01.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* g01.converter.u DISCRETE */));
  threadData->lastEquationSolved = 16550;
}
/*
equation index: 16551
type: SIMPLE_ASSIGN
$DAEres139 = if g01.running.value then der(g01.theta) - 314.1592653589793 * (g01.omegaPu - omegaCOI) else der(g01.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16551};
  (data->simulationInfo->daeModeData->residualVars[139]) /* $DAEres139 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* der(g01.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* der(g01.theta) STATE_DER */));
  threadData->lastEquationSolved = 16551;
}
/*
equation index: 16552
type: SIMPLE_ASSIGN
g01.cmPu = if g01.running.value then g01.PmPu / g01.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* g01.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* g01.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */),"g01.omegaPu"):0.0);
  threadData->lastEquationSolved = 16552;
}
/*
equation index: 16553
type: SIMPLE_ASSIGN
g01.ufPu = if g01.running.value then vrNordic_g01.limIntegrator.y * g01.Kuf * g01.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* g01.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* g01.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 16553;
}
/*
equation index: 16554
type: SIMPLE_ASSIGN
$DAEres394 = if g01.running.value then g01.cos2Eta - (g01.lambdaADPu / g01.lambdaAirGapPu) ^ 2.0 else g01.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16554};
  modelica_real tmp2615;
  modelica_boolean tmp2616;
  modelica_real tmp2617;
  tmp2616 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp2616)
  {
    tmp2615 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* g01.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* g01.lambdaAirGapPu variable */),"g01.lambdaAirGapPu");
    tmp2617 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* g01.cos2Eta variable */) - ((tmp2615 * tmp2615));
  }
  else
  {
    tmp2617 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* g01.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[394]) /* $DAEres394 DAE_RESIDUAL_VAR */ = tmp2617;
  threadData->lastEquationSolved = 16554;
}
/*
equation index: 16555
type: SIMPLE_ASSIGN
$DAEres395 = if g01.running.value then g01.mqsPu - g01.MqPPu / (1.0 + g01.mq * g01.lambdaAirGapPu ^ g01.nq) else g01.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16555};
  modelica_real tmp2618;
  modelica_real tmp2619;
  modelica_real tmp2620;
  modelica_real tmp2621;
  modelica_real tmp2622;
  modelica_real tmp2623;
  modelica_real tmp2624;
  modelica_boolean tmp2625;
  modelica_real tmp2626;
  tmp2625 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp2625)
  {
    tmp2618 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* g01.lambdaAirGapPu variable */);
    tmp2619 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* g01.nq PARAM */);
    if(tmp2618 < 0.0 && tmp2619 != 0.0)
    {
      tmp2621 = modf(tmp2619, &tmp2622);
      
      if(tmp2621 > 0.5)
      {
        tmp2621 -= 1.0;
        tmp2622 += 1.0;
      }
      else if(tmp2621 < -0.5)
      {
        tmp2621 += 1.0;
        tmp2622 -= 1.0;
      }
      
      if(fabs(tmp2621) < 1e-10)
        tmp2620 = pow(tmp2618, tmp2622);
      else
      {
        tmp2624 = modf(1.0/tmp2619, &tmp2623);
        if(tmp2624 > 0.5)
        {
          tmp2624 -= 1.0;
          tmp2623 += 1.0;
        }
        else if(tmp2624 < -0.5)
        {
          tmp2624 += 1.0;
          tmp2623 -= 1.0;
        }
        if(fabs(tmp2624) < 1e-10 && ((unsigned long)tmp2623 & 1))
        {
          tmp2620 = -pow(-tmp2618, tmp2621)*pow(tmp2618, tmp2622);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2618, tmp2619);
        }
      }
    }
    else
    {
      tmp2620 = pow(tmp2618, tmp2619);
    }
    if(isnan(tmp2620) || isinf(tmp2620))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2618, tmp2619);
    }
    tmp2626 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* g01.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[252]] /* g01.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* g01.mq PARAM */)) * (tmp2620),"1.0 + g01.mq * g01.lambdaAirGapPu ^ g01.nq"));
  }
  else
  {
    tmp2626 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* g01.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[395]) /* $DAEres395 DAE_RESIDUAL_VAR */ = tmp2626;
  threadData->lastEquationSolved = 16555;
}
/*
equation index: 16556
type: SIMPLE_ASSIGN
$DAEres396 = if g01.running.value then g01.MqSatPPu - (g01.miPu - g01.MsalPu * g01.cos2Eta) else g01.MqSatPPu - g01.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16556};
  (data->simulationInfo->daeModeData->residualVars[396]) /* $DAEres396 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* g01.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* g01.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* g01.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[252]] /* g01.MqPPu PARAM */));
  threadData->lastEquationSolved = 16556;
}
/*
equation index: 16557
type: SIMPLE_ASSIGN
$DAEres397 = if g01.running.value then g01.MdSatPPu - (g01.miPu + g01.MsalPu * g01.sin2Eta) else g01.MdSatPPu - g01.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16557};
  (data->simulationInfo->daeModeData->residualVars[397]) /* $DAEres397 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* g01.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* g01.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* g01.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[246]] /* g01.MdPPu PARAM */));
  threadData->lastEquationSolved = 16557;
}
/*
equation index: 16558
type: SIMPLE_ASSIGN
$DAEres398 = if g01.running.value then g01.miPu - (g01.mdsPu * g01.cos2Eta + g01.mqsPu * g01.sin2Eta) else g01.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16558};
  (data->simulationInfo->daeModeData->residualVars[398]) /* $DAEres398 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* g01.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* g01.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* g01.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* g01.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* g01.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* g01.miPu variable */));
  threadData->lastEquationSolved = 16558;
}
/*
equation index: 16559
type: SIMPLE_ASSIGN
$DAEres399 = if g01.running.value then g01.mdsPu - g01.MdPPu / (1.0 + g01.md * g01.lambdaAirGapPu ^ g01.nd) else g01.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16559};
  modelica_real tmp2627;
  modelica_real tmp2628;
  modelica_real tmp2629;
  modelica_real tmp2630;
  modelica_real tmp2631;
  modelica_real tmp2632;
  modelica_real tmp2633;
  modelica_boolean tmp2634;
  modelica_real tmp2635;
  tmp2634 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp2634)
  {
    tmp2627 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* g01.lambdaAirGapPu variable */);
    tmp2628 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* g01.nd PARAM */);
    if(tmp2627 < 0.0 && tmp2628 != 0.0)
    {
      tmp2630 = modf(tmp2628, &tmp2631);
      
      if(tmp2630 > 0.5)
      {
        tmp2630 -= 1.0;
        tmp2631 += 1.0;
      }
      else if(tmp2630 < -0.5)
      {
        tmp2630 += 1.0;
        tmp2631 -= 1.0;
      }
      
      if(fabs(tmp2630) < 1e-10)
        tmp2629 = pow(tmp2627, tmp2631);
      else
      {
        tmp2633 = modf(1.0/tmp2628, &tmp2632);
        if(tmp2633 > 0.5)
        {
          tmp2633 -= 1.0;
          tmp2632 += 1.0;
        }
        else if(tmp2633 < -0.5)
        {
          tmp2633 += 1.0;
          tmp2632 -= 1.0;
        }
        if(fabs(tmp2633) < 1e-10 && ((unsigned long)tmp2632 & 1))
        {
          tmp2629 = -pow(-tmp2627, tmp2630)*pow(tmp2627, tmp2631);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2627, tmp2628);
        }
      }
    }
    else
    {
      tmp2629 = pow(tmp2627, tmp2628);
    }
    if(isnan(tmp2629) || isinf(tmp2629))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2627, tmp2628);
    }
    tmp2635 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* g01.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[246]] /* g01.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* g01.md PARAM */)) * (tmp2629),"1.0 + g01.md * g01.lambdaAirGapPu ^ g01.nd"));
  }
  else
  {
    tmp2635 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* g01.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[399]) /* $DAEres399 DAE_RESIDUAL_VAR */ = tmp2635;
  threadData->lastEquationSolved = 16559;
}
/*
equation index: 16560
type: SIMPLE_ASSIGN
$DAEres400 = if g01.running.value then g01.sin2Eta - (g01.lambdaAQPu / g01.lambdaAirGapPu) ^ 2.0 else g01.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16560};
  modelica_real tmp2636;
  modelica_boolean tmp2637;
  modelica_real tmp2638;
  tmp2637 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp2637)
  {
    tmp2636 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* g01.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* g01.lambdaAirGapPu variable */),"g01.lambdaAirGapPu");
    tmp2638 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* g01.sin2Eta variable */) - ((tmp2636 * tmp2636));
  }
  else
  {
    tmp2638 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* g01.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[400]) /* $DAEres400 DAE_RESIDUAL_VAR */ = tmp2638;
  threadData->lastEquationSolved = 16560;
}
/*
equation index: 16561
type: SIMPLE_ASSIGN
$DAEres401 = if g01.running.value then g01.lambdaQ2Pu - (g01.MqSatPPu * (g01.iqPu + g01.iQ1Pu) + (g01.MqSatPPu + g01.LQ2PPu) * g01.iQ2Pu) else g01.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16561};
  (data->simulationInfo->daeModeData->residualVars[401]) /* $DAEres401 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* g01.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* g01.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* g01.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* g01.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* g01.iQ2Pu variable */));
  threadData->lastEquationSolved = 16561;
}
/*
equation index: 16562
type: SIMPLE_ASSIGN
$DAEres402 = if g01.running.value then g01.lambdaQ1Pu - (g01.MqSatPPu * g01.iqPu + (g01.MqSatPPu + g01.LQ1PPu) * g01.iQ1Pu + g01.MqSatPPu * g01.iQ2Pu) else g01.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16562};
  (data->simulationInfo->daeModeData->residualVars[402]) /* $DAEres402 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* g01.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[232]] /* g01.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* g01.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* g01.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* g01.iQ1Pu variable */));
  threadData->lastEquationSolved = 16562;
}
/*
equation index: 16563
type: SIMPLE_ASSIGN
$DAEres403 = if g01.running.value then g01.uqPu - ((g01.RaPPu + g01.RTfoPu) * g01.iqPu + g01.omegaPu * g01.lambdadPu) else g01.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16563};
  (data->simulationInfo->daeModeData->residualVars[403]) /* $DAEres403 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* g01.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[272]] /* g01.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* g01.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* g01.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* g01.lambdaqPu variable */));
  threadData->lastEquationSolved = 16563;
}
/*
equation index: 16564
type: SIMPLE_ASSIGN
$DAEres404 = if g01.running.value then g01.lambdaqPu - ((g01.MqSatPPu + g01.LqPPu + g01.XTfoPu) * g01.iqPu + g01.MqSatPPu * (g01.iQ1Pu + g01.iQ2Pu)) else g01.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16564};
  (data->simulationInfo->daeModeData->residualVars[404]) /* $DAEres404 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* g01.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* g01.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* g01.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* g01.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* g01.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* g01.iDPu variable */));
  threadData->lastEquationSolved = 16564;
}
/*
equation index: 16565
type: SIMPLE_ASSIGN
$DAEres405 = if g01.running.value then g01.lambdaAQPu - g01.MqSatPPu * (g01.iqPu + g01.iQ1Pu + g01.iQ2Pu) else g01.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16565};
  (data->simulationInfo->daeModeData->residualVars[405]) /* $DAEres405 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* g01.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* g01.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* g01.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* g01.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* g01.lambdaAQPu variable */));
  threadData->lastEquationSolved = 16565;
}
/*
equation index: 16566
type: SIMPLE_ASSIGN
$DAEres406 = if g01.running.value then g01.lambdaAirGapPu - sqrt(g01.lambdaADPu ^ 2.0 + g01.lambdaAQPu ^ 2.0) else g01.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16566};
  modelica_real tmp2639;
  modelica_real tmp2640;
  modelica_real tmp2641;
  modelica_boolean tmp2642;
  modelica_real tmp2643;
  tmp2642 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp2642)
  {
    tmp2639 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* g01.lambdaADPu variable */);
    tmp2640 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* g01.lambdaAQPu variable */);
    tmp2641 = (tmp2639 * tmp2639) + (tmp2640 * tmp2640);
    if(!(tmp2641 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g01.lambdaADPu ^ 2.0 + g01.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp2641);
      }
    }
    tmp2643 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* g01.lambdaAirGapPu variable */) - sqrt(tmp2641);
  }
  else
  {
    tmp2643 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* g01.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[406]) /* $DAEres406 DAE_RESIDUAL_VAR */ = tmp2643;
  threadData->lastEquationSolved = 16566;
}
/*
equation index: 16567
type: SIMPLE_ASSIGN
$DAEres407 = if g01.running.value then g01.lambdaADPu - g01.MdSatPPu * (g01.idPu + g01.ifPu + g01.iDPu) else g01.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16567};
  (data->simulationInfo->daeModeData->residualVars[407]) /* $DAEres407 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* g01.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* g01.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* g01.lambdaADPu variable */));
  threadData->lastEquationSolved = 16567;
}
/*
equation index: 16568
type: SIMPLE_ASSIGN
$DAEres408 = if g01.running.value then g01.lambdaDPu - (g01.MdSatPPu * g01.idPu + (g01.MdSatPPu + g01.MrcPPu) * g01.ifPu + (g01.MdSatPPu + g01.LDPPu + g01.MrcPPu) * g01.iDPu) else g01.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16568};
  (data->simulationInfo->daeModeData->residualVars[408]) /* $DAEres408 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* g01.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* g01.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[231]] /* g01.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* g01.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* g01.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */));
  threadData->lastEquationSolved = 16568;
}
/*
equation index: 16569
type: SIMPLE_ASSIGN
$DAEres409 = if g01.running.value then g01.lambdafPu - (g01.MdSatPPu * g01.idPu + (g01.MdSatPPu + g01.LfPPu + g01.MrcPPu) * g01.ifPu + (g01.MdSatPPu + g01.MrcPPu) * g01.iDPu) else g01.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16569};
  (data->simulationInfo->daeModeData->residualVars[409]) /* $DAEres409 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* g01.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[244]] /* g01.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* g01.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* g01.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* g01.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */));
  threadData->lastEquationSolved = 16569;
}
/*
equation index: 16570
type: SIMPLE_ASSIGN
$DAEres410 = if g01.running.value then g01.lambdadPu - ((g01.MdSatPPu + g01.LdPPu + g01.XTfoPu) * g01.idPu + g01.MdSatPPu * (g01.ifPu + g01.iDPu)) else g01.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16570};
  (data->simulationInfo->daeModeData->residualVars[410]) /* $DAEres410 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* g01.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[243]] /* g01.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* g01.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* g01.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* g01.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */));
  threadData->lastEquationSolved = 16570;
}
/*
equation index: 16571
type: SIMPLE_ASSIGN
$DAEres411 = if g01.running.value then 100.0 * g01.terminal.i.im / g01.SNom - (sin(g01.theta) * g01.iqPu - cos(g01.theta) * g01.idPu) else g01.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16571};
  (data->simulationInfo->daeModeData->residualVars[411]) /* $DAEres411 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */),"g01.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* g01.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* g01.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */));
  threadData->lastEquationSolved = 16571;
}
/*
equation index: 16572
type: SIMPLE_ASSIGN
$DAEres1090 = if g01.running.value then 100.0 * g01.terminal.i.re / g01.SNom - (sin(g01.theta) * g01.idPu + cos(g01.theta) * g01.iqPu) else g01.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16572};
  (data->simulationInfo->daeModeData->residualVars[1090]) /* $DAEres1090 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */),"g01.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* g01.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* g01.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */));
  threadData->lastEquationSolved = 16572;
}
/*
equation index: 16573
type: SIMPLE_ASSIGN
$DAEres1091 = if g01.running.value then g01.udPu - ((g01.RaPPu + g01.RTfoPu) * g01.idPu - g01.omegaPu * g01.lambdaqPu) else g01.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16573};
  (data->simulationInfo->daeModeData->residualVars[1091]) /* $DAEres1091 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* g01.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[272]] /* g01.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* g01.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* g01.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* g01.lambdadPu variable */));
  threadData->lastEquationSolved = 16573;
}
/*
equation index: 16574
type: SIMPLE_ASSIGN
$DAEres1092 = if g01.running.value then g01.terminal.V.re - (sin(g01.theta) * g01.udPu + cos(g01.theta) * g01.uqPu) else g01.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16574};
  (data->simulationInfo->daeModeData->residualVars[1092]) /* $DAEres1092 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* g01.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* g01.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* g01.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* g01.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* g01.udPu variable */));
  threadData->lastEquationSolved = 16574;
}
/*
equation index: 16575
type: SIMPLE_ASSIGN
$DAEres1093 = if g01.running.value then g01.terminal.V.im - (sin(g01.theta) * g01.uqPu - cos(g01.theta) * g01.udPu) else g01.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16575};
  (data->simulationInfo->daeModeData->residualVars[1093]) /* $DAEres1093 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* g01.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* g01.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* g01.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* g01.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* g01.uqPu variable */));
  threadData->lastEquationSolved = 16575;
}
/*
equation index: 16576
type: SIMPLE_ASSIGN
g01.uPu.im = if g01.running.value then g01.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1053]] /* g01.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 16576;
}
/*
equation index: 16577
type: SIMPLE_ASSIGN
g01.thetaInternal.value = if g01.running.value then Modelica.Math.atan3(g01.udPu, g01.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* g01.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* g01.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* g01.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 16577;
}
/*
equation index: 16578
type: SIMPLE_ASSIGN
$DAEres1254 = if g01.running.value then (-g01.RDPPu) * g01.iDPu - 0.0031830988618379067 * der(g01.lambdaDPu) else der(g01.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16578};
  (data->simulationInfo->daeModeData->residualVars[1254]) /* $DAEres1254 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* g01.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* g01.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* der(g01.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* der(g01.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 16578;
}
/*
equation index: 16579
type: SIMPLE_ASSIGN
vrNordic_g01.IrPu = if g01.running.value then g01.RfPPu * g01.ifPu / (g01.rTfoPu * g01.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3446]] /* vrNordic_g01.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* g01.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* g01.Kuf PARAM */)),"g01.rTfoPu * g01.Kuf")):0.0);
  threadData->lastEquationSolved = 16579;
}
/*
equation index: 16580
type: SIMPLE_ASSIGN
vrNordic_g01.dIf.y = vrNordic_g01.IrPu - vrNordic_g01.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3446]] /* vrNordic_g01.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4133]] /* vrNordic_g01.const2.k PARAM */);
  threadData->lastEquationSolved = 16580;
}
/*
equation index: 16581
type: SIMPLE_ASSIGN
vrNordic_g01.gain1.y = vrNordic_g01.gain1.k * vrNordic_g01.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3455]] /* vrNordic_g01.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4139]] /* vrNordic_g01.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */));
  threadData->lastEquationSolved = 16581;
}
/*
equation index: 16582
type: SIMPLE_ASSIGN
vrNordic_g01.overExcitationLimitation.y = if vrNordic_g01.dIf.y < -0.1 then -1.0 else if vrNordic_g01.dIf.y < 0.0 then 0.0 else if vrNordic_g01.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g01.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16582};
  modelica_boolean tmp2644;
  modelica_real tmp2645;
  modelica_real tmp2646;
  modelica_boolean tmp2647;
  modelica_real tmp2648;
  modelica_real tmp2649;
  modelica_boolean tmp2650;
  modelica_boolean tmp2651;
  modelica_real tmp2652;
  modelica_boolean tmp2653;
  modelica_real tmp2654;
  tmp2645 = 1.0;
  tmp2646 = 0.1;
  relationhysteresis(data, &tmp2644, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */), -0.1, tmp2645, tmp2646, 230, Less, LessZC);
  tmp2653 = (modelica_boolean)tmp2644;
  if(tmp2653)
  {
    tmp2654 = -1.0;
  }
  else
  {
    tmp2648 = 1.0;
    tmp2649 = 0.0;
    relationhysteresis(data, &tmp2647, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */), 0.0, tmp2648, tmp2649, 231, Less, LessZC);
    tmp2651 = (modelica_boolean)tmp2647;
    if(tmp2651)
    {
      tmp2652 = 0.0;
    }
    else
    {
      tmp2650 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4187]] /* vrNordic_g01.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp2652 = (tmp2650?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */));
    }
    tmp2654 = tmp2652;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */) = tmp2654;
  threadData->lastEquationSolved = 16582;
}
/*
equation index: 16583
type: SIMPLE_ASSIGN
$DAEres1255 = (if vrNordic_g01.timer.y < vrNordic_g01.timer.outMin and vrNordic_g01.timer.k * vrNordic_g01.overExcitationLimitation.y < 0.0 or vrNordic_g01.timer.y > vrNordic_g01.timer.outMax and vrNordic_g01.timer.k * vrNordic_g01.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g01.timer.k * vrNordic_g01.overExcitationLimitation.y) - der(vrNordic_g01.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16583};
  modelica_boolean tmp2655;
  modelica_real tmp2656;
  modelica_real tmp2657;
  modelica_boolean tmp2658;
  modelica_real tmp2659;
  modelica_real tmp2660;
  modelica_boolean tmp2661;
  modelica_real tmp2662;
  modelica_real tmp2663;
  modelica_boolean tmp2664;
  modelica_real tmp2665;
  modelica_real tmp2666;
  tmp2656 = 1.0;
  tmp2657 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4197]] /* vrNordic_g01.timer.outMin PARAM */));
  relationhysteresis(data, &tmp2655, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4197]] /* vrNordic_g01.timer.outMin PARAM */), tmp2656, tmp2657, 236, Less, LessZC);
  tmp2659 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */))) * (1.0);
  tmp2660 = 0.0;
  relationhysteresis(data, &tmp2658, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)), 0.0, tmp2659, tmp2660, 237, Less, LessZC);
  tmp2662 = 1.0;
  tmp2663 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4196]] /* vrNordic_g01.timer.outMax PARAM */));
  relationhysteresis(data, &tmp2661, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4196]] /* vrNordic_g01.timer.outMax PARAM */), tmp2662, tmp2663, 238, Greater, GreaterZC);
  tmp2665 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */))) * (1.0);
  tmp2666 = 0.0;
  relationhysteresis(data, &tmp2664, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)), 0.0, tmp2665, tmp2666, 239, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1255]) /* $DAEres1255 DAE_RESIDUAL_VAR */ = (((tmp2655 && tmp2658) || (tmp2661 && tmp2664))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* der(vrNordic_g01.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 16583;
}
/*
equation index: 16584
type: SIMPLE_ASSIGN
$DAEres1256 = if g01.running.value then (-g01.RQ2PPu) * g01.iQ2Pu - 0.0031830988618379067 * der(g01.lambdaQ2Pu) else der(g01.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16584};
  (data->simulationInfo->daeModeData->residualVars[1256]) /* $DAEres1256 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[269]] /* g01.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* g01.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* der(g01.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* der(g01.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 16584;
}
/*
equation index: 16585
type: SIMPLE_ASSIGN
$DAEres1257 = if g01.running.value then (-g01.RQ1PPu) * g01.iQ1Pu - 0.0031830988618379067 * der(g01.lambdaQ1Pu) else der(g01.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16585};
  (data->simulationInfo->daeModeData->residualVars[1257]) /* $DAEres1257 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[268]] /* g01.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* g01.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* der(g01.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* der(g01.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 16585;
}
/*
equation index: 16586
type: SIMPLE_ASSIGN
g01.cePu = if g01.running.value then g01.lambdaqPu * g01.idPu - g01.lambdadPu * g01.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* g01.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* g01.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* g01.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* g01.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* g01.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 16586;
}
/*
equation index: 16587
type: SIMPLE_ASSIGN
g01.PePu = if g01.running.value then g01.cePu * g01.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* g01.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* g01.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 16587;
}
/*
equation index: 16588
type: SIMPLE_ASSIGN
$DAEres1258 = if g01.running.value then 2.0 * g01.H * der(g01.omegaPu) - (g01.cmPu * g01.PNomTurb / g01.SNom + g01.DPu * (omegaCOI - g01.omegaPu) - g01.cePu) else der(g01.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16588};
  (data->simulationInfo->daeModeData->residualVars[1258]) /* $DAEres1258 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* g01.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* der(g01.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* g01.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* g01.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */),"g01.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[222]] /* g01.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* g01.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* g01.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* der(g01.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 16588;
}
/*
equation index: 16589
type: SIMPLE_ASSIGN
$DAEres1259 = if g01.running.value then g01.ufPu - (g01.RfPPu * g01.ifPu + 0.0031830988618379067 * der(g01.lambdafPu)) else der(g01.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16589};
  (data->simulationInfo->daeModeData->residualVars[1259]) /* $DAEres1259 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* g01.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* g01.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* g01.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* der(g01.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* der(g01.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 16589;
}
/*
equation index: 16590
type: SIMPLE_ASSIGN
g01.iStatorPu.im = if g01.running.value then g01.rTfoPu * g01.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 16590;
}
/*
equation index: 16591
type: SIMPLE_ASSIGN
g01.uPu.re = if g01.running.value then g01.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1054]] /* g01.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 16591;
}
/*
equation index: 16592
type: SIMPLE_ASSIGN
g01.UPu = if g01.running.value then (g01.terminal.V.re ^ 2.0 + g01.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16592};
  modelica_real tmp2667;
  modelica_real tmp2668;
  modelica_real tmp2669;
  modelica_boolean tmp2670;
  modelica_real tmp2671;
  tmp2670 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp2670)
  {
    tmp2667 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */);
    tmp2668 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */);
    tmp2669 = (tmp2667 * tmp2667) + (tmp2668 * tmp2668);
    if(tmp2669 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2669, 0.5);
    }
    tmp2671 = sqrt(tmp2669);
  }
  else
  {
    tmp2671 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* g01.UPu variable */) = tmp2671;
  threadData->lastEquationSolved = 16592;
}
/*
equation index: 16593
type: SIMPLE_ASSIGN
goverNordic_g01.PGenPu = if g01.running.value then (-g01.terminal.V.re) * g01.terminal.i.re - g01.terminal.V.im * g01.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1932]] /* goverNordic_g01.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 16593;
}
/*
equation index: 16594
type: SIMPLE_ASSIGN
goverNordic_g01.perUnitP.y = goverNordic_g01.perUnitP.k * goverNordic_g01.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1948]] /* goverNordic_g01.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2286]] /* goverNordic_g01.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1932]] /* goverNordic_g01.PGenPu variable */));
  threadData->lastEquationSolved = 16594;
}
/*
equation index: 16595
type: SIMPLE_ASSIGN
$DAEres1359 = goverNordic_g01.firstOrder1.k * goverNordic_g01.perUnitP.y + (-goverNordic_g01.firstOrder1.y) - der(goverNordic_g01.firstOrder1.y) * goverNordic_g01.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16595};
  (data->simulationInfo->daeModeData->residualVars[1359]) /* $DAEres1359 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2264]] /* goverNordic_g01.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1948]] /* goverNordic_g01.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* goverNordic_g01.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* der(goverNordic_g01.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2263]] /* goverNordic_g01.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 16595;
}
/*
equation index: 16596
type: SIMPLE_ASSIGN
g01.PGen = if g01.running.value then 100.0 * goverNordic_g01.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* g01.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1932]] /* goverNordic_g01.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16596;
}
/*
equation index: 16597
type: SIMPLE_ASSIGN
g01.QGenPu = if g01.running.value then g01.terminal.V.re * g01.terminal.i.im - g01.terminal.V.im * g01.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* g01.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 16597;
}
/*
equation index: 16598
type: SIMPLE_ASSIGN
g01.QGen = if g01.running.value then 100.0 * g01.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* g01.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* g01.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 16598;
}
/*
equation index: 16599
type: SIMPLE_ASSIGN
g01.uStatorPu.re = if g01.running.value then (g01.terminal.V.re + (-100.0) * (g01.terminal.i.re * g01.RTfoPu - g01.terminal.i.im * g01.XTfoPu) / g01.SNom) / g01.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* g01.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* g01.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */),"g01.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */),"g01.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16599;
}
/*
equation index: 16600
type: SIMPLE_ASSIGN
g01.uStatorPu.im = if g01.running.value then (g01.terminal.V.im + (-100.0) * (g01.terminal.i.re * g01.XTfoPu + g01.terminal.i.im * g01.RTfoPu) / g01.SNom) / g01.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* g01.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* g01.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* g01.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[274]] /* g01.SNom PARAM */),"g01.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */),"g01.rTfoPu"):0.0);
  threadData->lastEquationSolved = 16600;
}
/*
equation index: 16601
type: SIMPLE_ASSIGN
vrNordic_g01.UsPu = if g01.running.value then if g01.uStatorPu.re == 0.0 and g01.uStatorPu.im == 0.0 then 0.0 else (g01.uStatorPu.re ^ 2.0 + g01.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16601};
  modelica_real tmp2672;
  modelica_real tmp2673;
  modelica_real tmp2674;
  modelica_boolean tmp2675;
  modelica_real tmp2676;
  modelica_boolean tmp2677;
  modelica_real tmp2678;
  tmp2677 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp2677)
  {
    tmp2675 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */) == 0.0));
    if(tmp2675)
    {
      tmp2676 = 0.0;
    }
    else
    {
      tmp2672 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */);
      tmp2673 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */);
      tmp2674 = (tmp2672 * tmp2672) + (tmp2673 * tmp2673);
      if(tmp2674 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2674, 0.5);
      }
      tmp2676 = sqrt(tmp2674);
    }
    tmp2678 = tmp2676;
  }
  else
  {
    tmp2678 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3447]] /* vrNordic_g01.UsPu variable */) = tmp2678;
  threadData->lastEquationSolved = 16601;
}
/*
equation index: 16602
type: SIMPLE_ASSIGN
vrNordic_g01.dU.y = vrNordic_g01.const1.k - vrNordic_g01.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3451]] /* vrNordic_g01.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4132]] /* vrNordic_g01.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3447]] /* vrNordic_g01.UsPu variable */);
  threadData->lastEquationSolved = 16602;
}
/*
equation index: 16603
type: SIMPLE_ASSIGN
vrNordic_g01.add.y = vrNordic_g01.add.k1 * vrNordic_g01.dU.y + vrNordic_g01.add.k2 * vrNordic_g01.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4129]] /* vrNordic_g01.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3451]] /* vrNordic_g01.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4130]] /* vrNordic_g01.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3465]] /* vrNordic_g01.limiter.y variable */));
  threadData->lastEquationSolved = 16603;
}
/*
equation index: 16604
type: SIMPLE_ASSIGN
vrNordic_g01.switch.y = if vrNordic_g01.greaterEqualThreshold.y then vrNordic_g01.gain1.y else vrNordic_g01.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3468]] /* vrNordic_g01.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1015]] /* vrNordic_g01.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3455]] /* vrNordic_g01.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */));
  threadData->lastEquationSolved = 16604;
}
/*
equation index: 16605
type: SIMPLE_ASSIGN
vrNordic_g01.min1.y = if vrNordic_g01.switch.y < vrNordic_g01.add.y then vrNordic_g01.switch.y else vrNordic_g01.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16605};
  modelica_boolean tmp2679;
  modelica_real tmp2680;
  modelica_real tmp2681;
  tmp2680 = 1.0;
  tmp2681 = 1.0;
  relationhysteresis(data, &tmp2679, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3468]] /* vrNordic_g01.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */), tmp2680, tmp2681, 228, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3466]] /* vrNordic_g01.min1.y variable */) = (tmp2679?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3468]] /* vrNordic_g01.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */));
  threadData->lastEquationSolved = 16605;
}
/*
equation index: 16606
type: SIMPLE_ASSIGN
vrNordic_g01.kMulDU.y = vrNordic_g01.kMulDU.k * vrNordic_g01.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3456]] /* vrNordic_g01.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4141]] /* vrNordic_g01.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3466]] /* vrNordic_g01.min1.y variable */));
  threadData->lastEquationSolved = 16606;
}
/*
equation index: 16607
type: SIMPLE_ASSIGN
$DAEres1360 = vrNordic_g01.leadLag.a_end * vrNordic_g01.kMulDU.y + (-vrNordic_g01.leadLag.a[2]) * vrNordic_g01.leadLag.x_scaled[1] - der(vrNordic_g01.leadLag.x_scaled[1]) * vrNordic_g01.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16607};
  (data->simulationInfo->daeModeData->residualVars[1360]) /* $DAEres1360 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4146]] /* vrNordic_g01.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3456]] /* vrNordic_g01.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4145]] /* vrNordic_g01.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* vrNordic_g01.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* der(vrNordic_g01.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4144]] /* vrNordic_g01.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 16607;
}
/*
equation index: 16608
type: SIMPLE_ASSIGN
vrNordic_g01.leadLag.y = (vrNordic_g01.leadLag.bb[2] - vrNordic_g01.leadLag.d * vrNordic_g01.leadLag.a[2]) * vrNordic_g01.leadLag.x[1] + vrNordic_g01.leadLag.d * vrNordic_g01.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3458]] /* vrNordic_g01.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4150]] /* vrNordic_g01.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4151]] /* vrNordic_g01.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4145]] /* vrNordic_g01.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3457]] /* vrNordic_g01.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4151]] /* vrNordic_g01.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3456]] /* vrNordic_g01.kMulDU.y variable */));
  threadData->lastEquationSolved = 16608;
}
/*
equation index: 16609
type: SIMPLE_ASSIGN
vrNordic_g01.feedback1.y = vrNordic_g01.leadLag.y - vrNordic_g01.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3453]] /* vrNordic_g01.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3458]] /* vrNordic_g01.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 16609;
}
/*
equation index: 16610
type: SIMPLE_ASSIGN
vrNordic_g01.gain.y = vrNordic_g01.gain.k * vrNordic_g01.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4138]] /* vrNordic_g01.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3453]] /* vrNordic_g01.feedback1.y variable */));
  threadData->lastEquationSolved = 16610;
}
/*
equation index: 16611
type: SIMPLE_ASSIGN
$DAEres1361 = (if vrNordic_g01.limIntegrator.y < vrNordic_g01.limIntegrator.outMin and vrNordic_g01.limIntegrator.k * vrNordic_g01.gain.y < 0.0 or vrNordic_g01.limIntegrator.y > vrNordic_g01.limIntegrator.outMax and vrNordic_g01.limIntegrator.k * vrNordic_g01.gain.y > 0.0 then 0.0 else vrNordic_g01.limIntegrator.k * vrNordic_g01.gain.y) - der(vrNordic_g01.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16611};
  modelica_boolean tmp2682;
  modelica_real tmp2683;
  modelica_real tmp2684;
  modelica_boolean tmp2685;
  modelica_real tmp2686;
  modelica_real tmp2687;
  modelica_boolean tmp2688;
  modelica_real tmp2689;
  modelica_real tmp2690;
  modelica_boolean tmp2691;
  modelica_real tmp2692;
  modelica_real tmp2693;
  tmp2683 = 1.0;
  tmp2684 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4183]] /* vrNordic_g01.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp2682, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4183]] /* vrNordic_g01.limIntegrator.outMin PARAM */), tmp2683, tmp2684, 232, Less, LessZC);
  tmp2686 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */))) * (1.0);
  tmp2687 = 0.0;
  relationhysteresis(data, &tmp2685, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)), 0.0, tmp2686, tmp2687, 233, Less, LessZC);
  tmp2689 = 1.0;
  tmp2690 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4182]] /* vrNordic_g01.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp2688, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4182]] /* vrNordic_g01.limIntegrator.outMax PARAM */), tmp2689, tmp2690, 234, Greater, GreaterZC);
  tmp2692 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */))) * (1.0);
  tmp2693 = 0.0;
  relationhysteresis(data, &tmp2691, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)), 0.0, tmp2692, tmp2693, 235, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1361]) /* $DAEres1361 DAE_RESIDUAL_VAR */ = (((tmp2682 && tmp2685) || (tmp2688 && tmp2691))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* der(vrNordic_g01.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 16611;
}
/*
equation index: 16612
type: SIMPLE_ASSIGN
g01.iStatorPu.re = if g01.running.value then g01.rTfoPu * g01.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* g01.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* g01.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 16612;
}
/*
equation index: 16613
type: SIMPLE_ASSIGN
g01.sStatorPu.re = if g01.running.value then g01.uStatorPu.re * g01.iStatorPu.re + g01.uStatorPu.im * g01.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* g01.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16613;
}
/*
equation index: 16614
type: SIMPLE_ASSIGN
g01.sStatorPu.im = if g01.running.value then g01.uStatorPu.im * g01.iStatorPu.re - g01.uStatorPu.re * g01.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* g01.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 16614;
}
/*
equation index: 16615
type: SIMPLE_ASSIGN
g01.QStatorPu = if g01.running.value then -g01.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* g01.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* g01.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 16615;
}
/*
equation index: 16616
type: SIMPLE_ASSIGN
g01.QStatorPuQNom = if g01.running.value then 100.0 * g01.QStatorPu / g01.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* g01.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* g01.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* g01.QNomAlt PARAM */),"g01.QNomAlt")):0.0);
  threadData->lastEquationSolved = 16616;
}
/*
equation index: 16617
type: SIMPLE_ASSIGN
g01.IStatorPu = if g01.running.value then if g01.iStatorPu.re == 0.0 and g01.iStatorPu.im == 0.0 then 0.0 else (g01.iStatorPu.re ^ 2.0 + g01.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16617};
  modelica_real tmp2694;
  modelica_real tmp2695;
  modelica_real tmp2696;
  modelica_boolean tmp2697;
  modelica_real tmp2698;
  modelica_boolean tmp2699;
  modelica_real tmp2700;
  tmp2699 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[470]] /* g01.running.value DISCRETE */);
  if(tmp2699)
  {
    tmp2697 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */) == 0.0));
    if(tmp2697)
    {
      tmp2698 = 0.0;
    }
    else
    {
      tmp2694 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */);
      tmp2695 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */);
      tmp2696 = (tmp2694 * tmp2694) + (tmp2695 * tmp2695);
      if(tmp2696 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2696, 0.5);
      }
      tmp2698 = sqrt(tmp2696);
    }
    tmp2700 = tmp2698;
  }
  else
  {
    tmp2700 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* g01.IStatorPu variable */) = tmp2700;
  threadData->lastEquationSolved = 16617;
}
/*
equation index: 16618
type: SIMPLE_ASSIGN
$whenCondition64 = not pre(trafo_g20_4072.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16618};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[430]] /* $whenCondition64 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[988] /* trafo_g20_4072.running.value DISCRETE */));
  threadData->lastEquationSolved = 16618;
}
/*
equation index: 16619
type: WHEN

when {} then
  trafo_g20_4072.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16619};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[430]] /* $whenCondition64 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[430] /* $whenCondition64 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16619;
}
/*
equation index: 16621
type: SIMPLE_ASSIGN
$whenCondition66 = not trafo_g20_4072.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16621};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[432]] /* $whenCondition66 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */));
  threadData->lastEquationSolved = 16621;
}
/*
equation index: 16622
type: SIMPLE_ASSIGN
$whenCondition65 = trafo_g20_4072.running.value and not pre(trafo_g20_4072.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16622};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[431]] /* $whenCondition65 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[988] /* trafo_g20_4072.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16622;
}
/*
equation index: 16623
type: WHEN

when {$whenCondition66} then
  trafo_g20_4072.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16623};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[432]] /* $whenCondition66 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[432] /* $whenCondition66 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[166]] /* trafo_g20_4072.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[431]] /* $whenCondition65 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[431] /* $whenCondition65 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[166]] /* trafo_g20_4072.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16623;
}
/*
equation index: 16625
type: SIMPLE_ASSIGN
$DAEres552 = if trafo_g20_4072.running.value then (-g20.terminal.i.re) - trafo_g20_4072.rTfoPu * (trafo_g20_4072.YPu.re * line_4071_4072a.terminal2.V.re + (-trafo_g20_4072.YPu.im) * line_4071_4072a.terminal2.V.im - trafo_g20_4072.terminal2.i.re) else trafo_g20_4072.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16625};
  (data->simulationInfo->daeModeData->residualVars[552]) /* $DAEres552 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4047]] /* trafo_g20_4072.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4044]] /* trafo_g20_4072.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4043]] /* trafo_g20_4072.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3381]] /* trafo_g20_4072.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3381]] /* trafo_g20_4072.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16625;
}
/*
equation index: 16626
type: SIMPLE_ASSIGN
$DAEres571 = if trafo_g20_4072.running.value then (-g20.terminal.i.im) - trafo_g20_4072.rTfoPu * (trafo_g20_4072.YPu.re * line_4071_4072a.terminal2.V.im + trafo_g20_4072.YPu.im * line_4071_4072a.terminal2.V.re - trafo_g20_4072.terminal2.i.im) else trafo_g20_4072.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16626};
  (data->simulationInfo->daeModeData->residualVars[571]) /* $DAEres571 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4047]] /* trafo_g20_4072.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4044]] /* trafo_g20_4072.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4043]] /* trafo_g20_4072.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3380]] /* trafo_g20_4072.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3380]] /* trafo_g20_4072.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16626;
}
/*
equation index: 16627
type: SIMPLE_ASSIGN
$DAEres574 = if trafo_g20_4072.running.value then trafo_g20_4072.rTfoPu ^ 2.0 * trafo_g20_4072.terminal1.V.re - (trafo_g20_4072.rTfoPu * line_4071_4072a.terminal2.V.re + trafo_g20_4072.ZPu.im * g20.terminal.i.im - trafo_g20_4072.ZPu.re * g20.terminal.i.re) else -g20.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16627};
  modelica_real tmp2701;
  modelica_boolean tmp2702;
  modelica_real tmp2703;
  tmp2702 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */);
  if(tmp2702)
  {
    tmp2701 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4047]] /* trafo_g20_4072.rTfoPu PARAM */);
    tmp2703 = ((tmp2701 * tmp2701)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4047]] /* trafo_g20_4072.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4045]] /* trafo_g20_4072.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4046]] /* trafo_g20_4072.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */))));
  }
  else
  {
    tmp2703 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[574]) /* $DAEres574 DAE_RESIDUAL_VAR */ = tmp2703;
  threadData->lastEquationSolved = 16627;
}
/*
equation index: 16628
type: SIMPLE_ASSIGN
$DAEres577 = if trafo_g20_4072.running.value then trafo_g20_4072.rTfoPu ^ 2.0 * trafo_g20_4072.terminal1.V.im - (trafo_g20_4072.rTfoPu * line_4071_4072a.terminal2.V.im + (-trafo_g20_4072.ZPu.re) * g20.terminal.i.im - trafo_g20_4072.ZPu.im * g20.terminal.i.re) else -g20.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16628};
  modelica_real tmp2704;
  modelica_boolean tmp2705;
  modelica_real tmp2706;
  tmp2705 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */);
  if(tmp2705)
  {
    tmp2704 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4047]] /* trafo_g20_4072.rTfoPu PARAM */);
    tmp2706 = ((tmp2704 * tmp2704)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4047]] /* trafo_g20_4072.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4046]] /* trafo_g20_4072.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4045]] /* trafo_g20_4072.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1923]] /* g20.terminal.i.re variable */))));
  }
  else
  {
    tmp2706 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* g20.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[577]) /* $DAEres577 DAE_RESIDUAL_VAR */ = tmp2706;
  threadData->lastEquationSolved = 16628;
}
/*
equation index: 16629
type: SIMPLE_ASSIGN
trafo_g20_4072.U1Pu = if trafo_g20_4072.running.value then if trafo_g20_4072.terminal1.V.re == 0.0 and trafo_g20_4072.terminal1.V.im == 0.0 then 0.0 else (trafo_g20_4072.terminal1.V.re ^ 2.0 + trafo_g20_4072.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16629};
  modelica_real tmp2707;
  modelica_real tmp2708;
  modelica_real tmp2709;
  modelica_boolean tmp2710;
  modelica_real tmp2711;
  modelica_boolean tmp2712;
  modelica_real tmp2713;
  tmp2712 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */);
  if(tmp2712)
  {
    tmp2710 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) == 0.0));
    if(tmp2710)
    {
      tmp2711 = 0.0;
    }
    else
    {
      tmp2707 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */);
      tmp2708 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */);
      tmp2709 = (tmp2707 * tmp2707) + (tmp2708 * tmp2708);
      if(tmp2709 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2709, 0.5);
      }
      tmp2711 = sqrt(tmp2709);
    }
    tmp2713 = tmp2711;
  }
  else
  {
    tmp2713 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3376]] /* trafo_g20_4072.U1Pu variable */) = tmp2713;
  threadData->lastEquationSolved = 16629;
}
/*
equation index: 16630
type: SIMPLE_ASSIGN
trafo_g20_4072.U2Pu = if trafo_g20_4072.running.value then if line_4071_4072a.terminal2.V.re == 0.0 and line_4071_4072a.terminal2.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal2.V.re ^ 2.0 + line_4071_4072a.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16630};
  modelica_real tmp2714;
  modelica_real tmp2715;
  modelica_real tmp2716;
  modelica_boolean tmp2717;
  modelica_real tmp2718;
  modelica_boolean tmp2719;
  modelica_real tmp2720;
  tmp2719 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[988]] /* trafo_g20_4072.running.value DISCRETE */);
  if(tmp2719)
  {
    tmp2717 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) == 0.0));
    if(tmp2717)
    {
      tmp2718 = 0.0;
    }
    else
    {
      tmp2714 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */);
      tmp2715 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */);
      tmp2716 = (tmp2714 * tmp2714) + (tmp2715 * tmp2715);
      if(tmp2716 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2716, 0.5);
      }
      tmp2718 = sqrt(tmp2716);
    }
    tmp2720 = tmp2718;
  }
  else
  {
    tmp2720 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3377]] /* trafo_g20_4072.U2Pu variable */) = tmp2720;
  threadData->lastEquationSolved = 16630;
}
/*
equation index: 16631
type: SIMPLE_ASSIGN
$whenCondition67 = not pre(trafo_g19_4071.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16631};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[433]] /* $whenCondition67 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[982] /* trafo_g19_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 16631;
}
/*
equation index: 16632
type: WHEN

when {} then
  trafo_g19_4071.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16632};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[433]] /* $whenCondition67 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[433] /* $whenCondition67 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16632;
}
/*
equation index: 16634
type: SIMPLE_ASSIGN
$whenCondition69 = not trafo_g19_4071.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16634};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[435]] /* $whenCondition69 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */));
  threadData->lastEquationSolved = 16634;
}
/*
equation index: 16635
type: SIMPLE_ASSIGN
$whenCondition68 = trafo_g19_4071.running.value and not pre(trafo_g19_4071.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16635};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[434]] /* $whenCondition68 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[982] /* trafo_g19_4071.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16635;
}
/*
equation index: 16636
type: WHEN

when {$whenCondition69} then
  trafo_g19_4071.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16636};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[435]] /* $whenCondition69 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[435] /* $whenCondition69 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[164]] /* trafo_g19_4071.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[434]] /* $whenCondition68 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[434] /* $whenCondition68 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[164]] /* trafo_g19_4071.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16636;
}
/*
equation index: 16638
type: SIMPLE_ASSIGN
$DAEres597 = if trafo_g19_4071.running.value then (-g19.terminal.i.im) - trafo_g19_4071.rTfoPu * (trafo_g19_4071.YPu.re * line_4071_4072a.terminal1.V.im + trafo_g19_4071.YPu.im * line_4071_4072a.terminal1.V.re - trafo_g19_4071.terminal2.i.im) else trafo_g19_4071.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16638};
  (data->simulationInfo->daeModeData->residualVars[597]) /* $DAEres597 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4029]] /* trafo_g19_4071.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4026]] /* trafo_g19_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4025]] /* trafo_g19_4071.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3362]] /* trafo_g19_4071.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3362]] /* trafo_g19_4071.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16638;
}
/*
equation index: 16639
type: SIMPLE_ASSIGN
$DAEres604 = if trafo_g19_4071.running.value then (-g19.terminal.i.re) - trafo_g19_4071.rTfoPu * (trafo_g19_4071.YPu.re * line_4071_4072a.terminal1.V.re + (-trafo_g19_4071.YPu.im) * line_4071_4072a.terminal1.V.im - trafo_g19_4071.terminal2.i.re) else trafo_g19_4071.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16639};
  (data->simulationInfo->daeModeData->residualVars[604]) /* $DAEres604 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4029]] /* trafo_g19_4071.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4026]] /* trafo_g19_4071.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4025]] /* trafo_g19_4071.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3363]] /* trafo_g19_4071.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3363]] /* trafo_g19_4071.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16639;
}
/*
equation index: 16640
type: SIMPLE_ASSIGN
$DAEres607 = if trafo_g19_4071.running.value then trafo_g19_4071.rTfoPu ^ 2.0 * g19.terminal.V.im - (trafo_g19_4071.rTfoPu * line_4071_4072a.terminal1.V.im + (-trafo_g19_4071.ZPu.re) * g19.terminal.i.im - trafo_g19_4071.ZPu.im * g19.terminal.i.re) else -g19.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16640};
  modelica_real tmp2721;
  modelica_boolean tmp2722;
  modelica_real tmp2723;
  tmp2722 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */);
  if(tmp2722)
  {
    tmp2721 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4029]] /* trafo_g19_4071.rTfoPu PARAM */);
    tmp2723 = ((tmp2721 * tmp2721)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4029]] /* trafo_g19_4071.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4028]] /* trafo_g19_4071.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4027]] /* trafo_g19_4071.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */))));
  }
  else
  {
    tmp2723 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[607]) /* $DAEres607 DAE_RESIDUAL_VAR */ = tmp2723;
  threadData->lastEquationSolved = 16640;
}
/*
equation index: 16641
type: SIMPLE_ASSIGN
$DAEres610 = if trafo_g19_4071.running.value then trafo_g19_4071.rTfoPu ^ 2.0 * g19.terminal.V.re - (trafo_g19_4071.rTfoPu * line_4071_4072a.terminal1.V.re + trafo_g19_4071.ZPu.im * g19.terminal.i.im - trafo_g19_4071.ZPu.re * g19.terminal.i.re) else -g19.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16641};
  modelica_real tmp2724;
  modelica_boolean tmp2725;
  modelica_real tmp2726;
  tmp2725 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */);
  if(tmp2725)
  {
    tmp2724 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4029]] /* trafo_g19_4071.rTfoPu PARAM */);
    tmp2726 = ((tmp2724 * tmp2724)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4029]] /* trafo_g19_4071.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4027]] /* trafo_g19_4071.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4028]] /* trafo_g19_4071.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */))));
  }
  else
  {
    tmp2726 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[610]) /* $DAEres610 DAE_RESIDUAL_VAR */ = tmp2726;
  threadData->lastEquationSolved = 16641;
}
/*
equation index: 16642
type: SIMPLE_ASSIGN
trafo_g19_4071.U1Pu = if trafo_g19_4071.running.value then if g19.terminal.V.re == 0.0 and g19.terminal.V.im == 0.0 then 0.0 else (g19.terminal.V.re ^ 2.0 + g19.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16642};
  modelica_real tmp2727;
  modelica_real tmp2728;
  modelica_real tmp2729;
  modelica_boolean tmp2730;
  modelica_real tmp2731;
  modelica_boolean tmp2732;
  modelica_real tmp2733;
  tmp2732 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */);
  if(tmp2732)
  {
    tmp2730 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) == 0.0));
    if(tmp2730)
    {
      tmp2731 = 0.0;
    }
    else
    {
      tmp2727 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */);
      tmp2728 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */);
      tmp2729 = (tmp2727 * tmp2727) + (tmp2728 * tmp2728);
      if(tmp2729 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2729, 0.5);
      }
      tmp2731 = sqrt(tmp2729);
    }
    tmp2733 = tmp2731;
  }
  else
  {
    tmp2733 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3360]] /* trafo_g19_4071.U1Pu variable */) = tmp2733;
  threadData->lastEquationSolved = 16642;
}
/*
equation index: 16643
type: SIMPLE_ASSIGN
trafo_g19_4071.U2Pu = if trafo_g19_4071.running.value then if line_4071_4072a.terminal1.V.re == 0.0 and line_4071_4072a.terminal1.V.im == 0.0 then 0.0 else (line_4071_4072a.terminal1.V.re ^ 2.0 + line_4071_4072a.terminal1.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16643};
  modelica_real tmp2734;
  modelica_real tmp2735;
  modelica_real tmp2736;
  modelica_boolean tmp2737;
  modelica_real tmp2738;
  modelica_boolean tmp2739;
  modelica_real tmp2740;
  tmp2739 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[982]] /* trafo_g19_4071.running.value DISCRETE */);
  if(tmp2739)
  {
    tmp2737 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) == 0.0));
    if(tmp2737)
    {
      tmp2738 = 0.0;
    }
    else
    {
      tmp2734 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */);
      tmp2735 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */);
      tmp2736 = (tmp2734 * tmp2734) + (tmp2735 * tmp2735);
      if(tmp2736 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2736, 0.5);
      }
      tmp2738 = sqrt(tmp2736);
    }
    tmp2740 = tmp2738;
  }
  else
  {
    tmp2740 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3361]] /* trafo_g19_4071.U2Pu variable */) = tmp2740;
  threadData->lastEquationSolved = 16643;
}
/*
equation index: 16644
type: SIMPLE_ASSIGN
$whenCondition70 = not pre(trafo_g18_4063.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16644};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[437]] /* $whenCondition70 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[979] /* trafo_g18_4063.running.value DISCRETE */));
  threadData->lastEquationSolved = 16644;
}
/*
equation index: 16645
type: WHEN

when {} then
  trafo_g18_4063.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16645};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[437]] /* $whenCondition70 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[437] /* $whenCondition70 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16645;
}
/*
equation index: 16647
type: SIMPLE_ASSIGN
$whenCondition72 = not trafo_g18_4063.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16647};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[439]] /* $whenCondition72 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */));
  threadData->lastEquationSolved = 16647;
}
/*
equation index: 16648
type: SIMPLE_ASSIGN
$whenCondition71 = trafo_g18_4063.running.value and not pre(trafo_g18_4063.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16648};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[438]] /* $whenCondition71 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[979] /* trafo_g18_4063.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16648;
}
/*
equation index: 16649
type: WHEN

when {$whenCondition72} then
  trafo_g18_4063.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16649};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[439]] /* $whenCondition72 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[439] /* $whenCondition72 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[163]] /* trafo_g18_4063.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[438]] /* $whenCondition71 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[438] /* $whenCondition71 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[163]] /* trafo_g18_4063.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16649;
}
/*
equation index: 16651
type: SIMPLE_ASSIGN
$DAEres167 = if trafo_g18_4063.running.value then (-g18.terminal.i.im) - trafo_g18_4063.rTfoPu * (trafo_g18_4063.YPu.re * line_4062_4063b.terminal2.V.im + trafo_g18_4063.YPu.im * line_4062_4063b.terminal2.V.re - trafo_g18_4063.terminal2.i.im) else trafo_g18_4063.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16651};
  (data->simulationInfo->daeModeData->residualVars[167]) /* $DAEres167 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4020]] /* trafo_g18_4063.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4017]] /* trafo_g18_4063.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4016]] /* trafo_g18_4063.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3354]] /* trafo_g18_4063.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3354]] /* trafo_g18_4063.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16651;
}
/*
equation index: 16652
type: SIMPLE_ASSIGN
$DAEres169 = if trafo_g18_4063.running.value then (-g18.terminal.i.re) - trafo_g18_4063.rTfoPu * (trafo_g18_4063.YPu.re * line_4062_4063b.terminal2.V.re + (-trafo_g18_4063.YPu.im) * line_4062_4063b.terminal2.V.im - trafo_g18_4063.terminal2.i.re) else trafo_g18_4063.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16652};
  (data->simulationInfo->daeModeData->residualVars[169]) /* $DAEres169 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4020]] /* trafo_g18_4063.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4017]] /* trafo_g18_4063.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4016]] /* trafo_g18_4063.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3355]] /* trafo_g18_4063.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3355]] /* trafo_g18_4063.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16652;
}
/*
equation index: 16653
type: SIMPLE_ASSIGN
$DAEres170 = if trafo_g18_4063.running.value then trafo_g18_4063.rTfoPu ^ 2.0 * g18.terminal.V.re - (trafo_g18_4063.rTfoPu * line_4062_4063b.terminal2.V.re + trafo_g18_4063.ZPu.im * g18.terminal.i.im - trafo_g18_4063.ZPu.re * g18.terminal.i.re) else -g18.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16653};
  modelica_real tmp2741;
  modelica_boolean tmp2742;
  modelica_real tmp2743;
  tmp2742 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */);
  if(tmp2742)
  {
    tmp2741 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4020]] /* trafo_g18_4063.rTfoPu PARAM */);
    tmp2743 = ((tmp2741 * tmp2741)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4020]] /* trafo_g18_4063.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4018]] /* trafo_g18_4063.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4019]] /* trafo_g18_4063.ZPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */))));
  }
  else
  {
    tmp2743 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[170]) /* $DAEres170 DAE_RESIDUAL_VAR */ = tmp2743;
  threadData->lastEquationSolved = 16653;
}
/*
equation index: 16654
type: SIMPLE_ASSIGN
$DAEres175 = if trafo_g18_4063.running.value then trafo_g18_4063.rTfoPu ^ 2.0 * g18.terminal.V.im - (trafo_g18_4063.rTfoPu * line_4062_4063b.terminal2.V.im + (-trafo_g18_4063.ZPu.re) * g18.terminal.i.im - trafo_g18_4063.ZPu.im * g18.terminal.i.re) else -g18.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16654};
  modelica_real tmp2744;
  modelica_boolean tmp2745;
  modelica_real tmp2746;
  tmp2745 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */);
  if(tmp2745)
  {
    tmp2744 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4020]] /* trafo_g18_4063.rTfoPu PARAM */);
    tmp2746 = ((tmp2744 * tmp2744)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4020]] /* trafo_g18_4063.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4019]] /* trafo_g18_4063.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4018]] /* trafo_g18_4063.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */))));
  }
  else
  {
    tmp2746 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[175]) /* $DAEres175 DAE_RESIDUAL_VAR */ = tmp2746;
  threadData->lastEquationSolved = 16654;
}
/*
equation index: 16655
type: SIMPLE_ASSIGN
trafo_g18_4063.U1Pu = if trafo_g18_4063.running.value then if g18.terminal.V.re == 0.0 and g18.terminal.V.im == 0.0 then 0.0 else (g18.terminal.V.re ^ 2.0 + g18.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16655};
  modelica_real tmp2747;
  modelica_real tmp2748;
  modelica_real tmp2749;
  modelica_boolean tmp2750;
  modelica_real tmp2751;
  modelica_boolean tmp2752;
  modelica_real tmp2753;
  tmp2752 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */);
  if(tmp2752)
  {
    tmp2750 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) == 0.0));
    if(tmp2750)
    {
      tmp2751 = 0.0;
    }
    else
    {
      tmp2747 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */);
      tmp2748 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */);
      tmp2749 = (tmp2747 * tmp2747) + (tmp2748 * tmp2748);
      if(tmp2749 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2749, 0.5);
      }
      tmp2751 = sqrt(tmp2749);
    }
    tmp2753 = tmp2751;
  }
  else
  {
    tmp2753 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3352]] /* trafo_g18_4063.U1Pu variable */) = tmp2753;
  threadData->lastEquationSolved = 16655;
}
/*
equation index: 16656
type: SIMPLE_ASSIGN
trafo_g18_4063.U2Pu = if trafo_g18_4063.running.value then if line_4062_4063b.terminal2.V.re == 0.0 and line_4062_4063b.terminal2.V.im == 0.0 then 0.0 else (line_4062_4063b.terminal2.V.re ^ 2.0 + line_4062_4063b.terminal2.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16656};
  modelica_real tmp2754;
  modelica_real tmp2755;
  modelica_real tmp2756;
  modelica_boolean tmp2757;
  modelica_real tmp2758;
  modelica_boolean tmp2759;
  modelica_real tmp2760;
  tmp2759 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[979]] /* trafo_g18_4063.running.value DISCRETE */);
  if(tmp2759)
  {
    tmp2757 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) == 0.0));
    if(tmp2757)
    {
      tmp2758 = 0.0;
    }
    else
    {
      tmp2754 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */);
      tmp2755 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */);
      tmp2756 = (tmp2754 * tmp2754) + (tmp2755 * tmp2755);
      if(tmp2756 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2756, 0.5);
      }
      tmp2758 = sqrt(tmp2756);
    }
    tmp2760 = tmp2758;
  }
  else
  {
    tmp2760 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3353]] /* trafo_g18_4063.U2Pu variable */) = tmp2760;
  threadData->lastEquationSolved = 16656;
}
/*
equation index: 16657
type: SIMPLE_ASSIGN
$whenCondition73 = not pre(trafo_g17_4062.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16657};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[440]] /* $whenCondition73 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[976] /* trafo_g17_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 16657;
}
/*
equation index: 16658
type: WHEN

when {} then
  trafo_g17_4062.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16658};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[440]] /* $whenCondition73 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[440] /* $whenCondition73 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 16658;
}
/*
equation index: 16660
type: SIMPLE_ASSIGN
$whenCondition75 = not trafo_g17_4062.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16660};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[442]] /* $whenCondition75 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */));
  threadData->lastEquationSolved = 16660;
}
/*
equation index: 16661
type: SIMPLE_ASSIGN
$whenCondition74 = trafo_g17_4062.running.value and not pre(trafo_g17_4062.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16661};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[441]] /* $whenCondition74 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[976] /* trafo_g17_4062.running.value DISCRETE */)));
  threadData->lastEquationSolved = 16661;
}
/*
equation index: 16662
type: WHEN

when {$whenCondition75} then
  trafo_g17_4062.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16662};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[442]] /* $whenCondition75 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[442] /* $whenCondition75 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[162]] /* trafo_g17_4062.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[441]] /* $whenCondition74 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[441] /* $whenCondition74 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[162]] /* trafo_g17_4062.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 16662;
}
/*
equation index: 16664
type: SIMPLE_ASSIGN
$DAEres212 = if trafo_g17_4062.running.value then (-g17.terminal.i.im) - trafo_g17_4062.rTfoPu * (trafo_g17_4062.YPu.re * line_4062_4063b.terminal1.V.im + trafo_g17_4062.YPu.im * line_4062_4063b.terminal1.V.re - trafo_g17_4062.terminal2.i.im) else trafo_g17_4062.terminal2.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16664};
  (data->simulationInfo->daeModeData->residualVars[212]) /* $DAEres212 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4011]] /* trafo_g17_4062.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4008]] /* trafo_g17_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4007]] /* trafo_g17_4062.YPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3346]] /* trafo_g17_4062.terminal2.i.im variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3346]] /* trafo_g17_4062.terminal2.i.im variable */));
  threadData->lastEquationSolved = 16664;
}
/*
equation index: 16665
type: SIMPLE_ASSIGN
$DAEres1165 = if trafo_g17_4062.running.value then (-g17.terminal.i.re) - trafo_g17_4062.rTfoPu * (trafo_g17_4062.YPu.re * line_4062_4063b.terminal1.V.re + (-trafo_g17_4062.YPu.im) * line_4062_4063b.terminal1.V.im - trafo_g17_4062.terminal2.i.re) else trafo_g17_4062.terminal2.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16665};
  (data->simulationInfo->daeModeData->residualVars[1165]) /* $DAEres1165 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4011]] /* trafo_g17_4062.rTfoPu PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4008]] /* trafo_g17_4062.YPu.re PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4007]] /* trafo_g17_4062.YPu.im PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3347]] /* trafo_g17_4062.terminal2.i.re variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3347]] /* trafo_g17_4062.terminal2.i.re variable */));
  threadData->lastEquationSolved = 16665;
}
/*
equation index: 16666
type: SIMPLE_ASSIGN
$DAEres1166 = if trafo_g17_4062.running.value then trafo_g17_4062.rTfoPu ^ 2.0 * g17.terminal.V.im - (trafo_g17_4062.rTfoPu * line_4062_4063b.terminal1.V.im + (-trafo_g17_4062.ZPu.re) * g17.terminal.i.im - trafo_g17_4062.ZPu.im * g17.terminal.i.re) else -g17.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_16666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16666};
  modelica_real tmp2761;
  modelica_boolean tmp2762;
  modelica_real tmp2763;
  tmp2762 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[976]] /* trafo_g17_4062.running.value DISCRETE */);
  if(tmp2762)
  {
    tmp2761 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4011]] /* trafo_g17_4062.rTfoPu PARAM */);
    tmp2763 = ((tmp2761 * tmp2761)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4011]] /* trafo_g17_4062.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4010]] /* trafo_g17_4062.ZPu.re PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4009]] /* trafo_g17_4062.ZPu.im PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */))));
  }
  else
  {
    tmp2763 = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */));
  }
  (data->simulationInfo->daeModeData->residualVars[1166]) /* $DAEres1166 DAE_RESIDUAL_VAR */ = tmp2763;
  threadData->lastEquationSolved = 16666;
}
#if defined(__cplusplus)
}
#endif