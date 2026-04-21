#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 15186
type: SIMPLE_ASSIGN
$DAEres510 = if g19.running.value then g19.MqSatPPu - (g19.miPu - g19.MsalPu * g19.cos2Eta) else g19.MqSatPPu - g19.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15186};
  (data->simulationInfo->daeModeData->residualVars[510]) /* $DAEres510 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1871]] /* g19.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2088]] /* g19.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1855]] /* g19.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2084]] /* g19.MqPPu PARAM */));
  threadData->lastEquationSolved = 15186;
}
/*
equation index: 15187
type: SIMPLE_ASSIGN
$DAEres511 = if g19.running.value then g19.MdSatPPu - (g19.miPu + g19.MsalPu * g19.sin2Eta) else g19.MdSatPPu - g19.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15187};
  (data->simulationInfo->daeModeData->residualVars[511]) /* $DAEres511 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1871]] /* g19.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2088]] /* g19.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1875]] /* g19.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2078]] /* g19.MdPPu PARAM */));
  threadData->lastEquationSolved = 15187;
}
/*
equation index: 15188
type: SIMPLE_ASSIGN
$DAEres512 = if g19.running.value then g19.sin2Eta - (g19.lambdaAQPu / g19.lambdaAirGapPu) ^ 2.0 else g19.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15188};
  modelica_real tmp1067;
  modelica_boolean tmp1068;
  modelica_real tmp1069;
  tmp1068 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1068)
  {
    tmp1067 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* g19.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1867]] /* g19.lambdaAirGapPu variable */),"g19.lambdaAirGapPu");
    tmp1069 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1875]] /* g19.sin2Eta variable */) - ((tmp1067 * tmp1067));
  }
  else
  {
    tmp1069 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1875]] /* g19.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[512]) /* $DAEres512 DAE_RESIDUAL_VAR */ = tmp1069;
  threadData->lastEquationSolved = 15188;
}
/*
equation index: 15189
type: SIMPLE_ASSIGN
$DAEres513 = if g19.running.value then g19.mqsPu - g19.MqPPu / (1.0 + g19.mq * g19.lambdaAirGapPu ^ g19.nq) else g19.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15189};
  modelica_real tmp1070;
  modelica_real tmp1071;
  modelica_real tmp1072;
  modelica_real tmp1073;
  modelica_real tmp1074;
  modelica_real tmp1075;
  modelica_real tmp1076;
  modelica_boolean tmp1077;
  modelica_real tmp1078;
  tmp1077 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1077)
  {
    tmp1070 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1867]] /* g19.lambdaAirGapPu variable */);
    tmp1071 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2131]] /* g19.nq PARAM */);
    if(tmp1070 < 0.0 && tmp1071 != 0.0)
    {
      tmp1073 = modf(tmp1071, &tmp1074);
      
      if(tmp1073 > 0.5)
      {
        tmp1073 -= 1.0;
        tmp1074 += 1.0;
      }
      else if(tmp1073 < -0.5)
      {
        tmp1073 += 1.0;
        tmp1074 -= 1.0;
      }
      
      if(fabs(tmp1073) < 1e-10)
        tmp1072 = pow(tmp1070, tmp1074);
      else
      {
        tmp1076 = modf(1.0/tmp1071, &tmp1075);
        if(tmp1076 > 0.5)
        {
          tmp1076 -= 1.0;
          tmp1075 += 1.0;
        }
        else if(tmp1076 < -0.5)
        {
          tmp1076 += 1.0;
          tmp1075 -= 1.0;
        }
        if(fabs(tmp1076) < 1e-10 && ((unsigned long)tmp1075 & 1))
        {
          tmp1072 = -pow(-tmp1070, tmp1073)*pow(tmp1070, tmp1074);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1070, tmp1071);
        }
      }
    }
    else
    {
      tmp1072 = pow(tmp1070, tmp1071);
    }
    if(isnan(tmp1072) || isinf(tmp1072))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1070, tmp1071);
    }
    tmp1078 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1872]] /* g19.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2084]] /* g19.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2129]] /* g19.mq PARAM */)) * (tmp1072),"1.0 + g19.mq * g19.lambdaAirGapPu ^ g19.nq"));
  }
  else
  {
    tmp1078 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1872]] /* g19.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[513]) /* $DAEres513 DAE_RESIDUAL_VAR */ = tmp1078;
  threadData->lastEquationSolved = 15189;
}
/*
equation index: 15190
type: SIMPLE_ASSIGN
$DAEres514 = if g19.running.value then g19.mdsPu - g19.MdPPu / (1.0 + g19.md * g19.lambdaAirGapPu ^ g19.nd) else g19.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15190};
  modelica_real tmp1079;
  modelica_real tmp1080;
  modelica_real tmp1081;
  modelica_real tmp1082;
  modelica_real tmp1083;
  modelica_real tmp1084;
  modelica_real tmp1085;
  modelica_boolean tmp1086;
  modelica_real tmp1087;
  tmp1086 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1086)
  {
    tmp1079 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1867]] /* g19.lambdaAirGapPu variable */);
    tmp1080 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2130]] /* g19.nd PARAM */);
    if(tmp1079 < 0.0 && tmp1080 != 0.0)
    {
      tmp1082 = modf(tmp1080, &tmp1083);
      
      if(tmp1082 > 0.5)
      {
        tmp1082 -= 1.0;
        tmp1083 += 1.0;
      }
      else if(tmp1082 < -0.5)
      {
        tmp1082 += 1.0;
        tmp1083 -= 1.0;
      }
      
      if(fabs(tmp1082) < 1e-10)
        tmp1081 = pow(tmp1079, tmp1083);
      else
      {
        tmp1085 = modf(1.0/tmp1080, &tmp1084);
        if(tmp1085 > 0.5)
        {
          tmp1085 -= 1.0;
          tmp1084 += 1.0;
        }
        else if(tmp1085 < -0.5)
        {
          tmp1085 += 1.0;
          tmp1084 -= 1.0;
        }
        if(fabs(tmp1085) < 1e-10 && ((unsigned long)tmp1084 & 1))
        {
          tmp1081 = -pow(-tmp1079, tmp1082)*pow(tmp1079, tmp1083);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1079, tmp1080);
        }
      }
    }
    else
    {
      tmp1081 = pow(tmp1079, tmp1080);
    }
    if(isnan(tmp1081) || isinf(tmp1081))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1079, tmp1080);
    }
    tmp1087 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1870]] /* g19.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2078]] /* g19.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2128]] /* g19.md PARAM */)) * (tmp1081),"1.0 + g19.md * g19.lambdaAirGapPu ^ g19.nd"));
  }
  else
  {
    tmp1087 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1870]] /* g19.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[514]) /* $DAEres514 DAE_RESIDUAL_VAR */ = tmp1087;
  threadData->lastEquationSolved = 15190;
}
/*
equation index: 15191
type: SIMPLE_ASSIGN
$DAEres515 = if g19.running.value then g19.miPu - (g19.mdsPu * g19.cos2Eta + g19.mqsPu * g19.sin2Eta) else g19.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15191};
  (data->simulationInfo->daeModeData->residualVars[515]) /* $DAEres515 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1871]] /* g19.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1870]] /* g19.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1855]] /* g19.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1872]] /* g19.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1875]] /* g19.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1871]] /* g19.miPu variable */));
  threadData->lastEquationSolved = 15191;
}
/*
equation index: 15192
type: SIMPLE_ASSIGN
$DAEres516 = if g19.running.value then g19.cos2Eta - (g19.lambdaADPu / g19.lambdaAirGapPu) ^ 2.0 else g19.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15192};
  modelica_real tmp1088;
  modelica_boolean tmp1089;
  modelica_real tmp1090;
  tmp1089 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1089)
  {
    tmp1088 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1865]] /* g19.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1867]] /* g19.lambdaAirGapPu variable */),"g19.lambdaAirGapPu");
    tmp1090 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1855]] /* g19.cos2Eta variable */) - ((tmp1088 * tmp1088));
  }
  else
  {
    tmp1090 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1855]] /* g19.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[516]) /* $DAEres516 DAE_RESIDUAL_VAR */ = tmp1090;
  threadData->lastEquationSolved = 15192;
}
/*
equation index: 15193
type: SIMPLE_ASSIGN
$DAEres517 = if g19.running.value then g19.lambdaDPu - (g19.MdSatPPu * g19.idPu + (g19.MdSatPPu + g19.MrcPPu) * g19.ifPu + (g19.MdSatPPu + g19.LDPPu + g19.MrcPPu) * g19.iDPu) else g19.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15193};
  (data->simulationInfo->daeModeData->residualVars[517]) /* $DAEres517 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* g19.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2087]] /* g19.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2063]] /* g19.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2087]] /* g19.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1857]] /* g19.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */));
  threadData->lastEquationSolved = 15193;
}
/*
equation index: 15194
type: SIMPLE_ASSIGN
$DAEres518 = if g19.running.value then g19.lambdaADPu - g19.MdSatPPu * (g19.idPu + g19.ifPu + g19.iDPu) else g19.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15194};
  (data->simulationInfo->daeModeData->residualVars[518]) /* $DAEres518 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1865]] /* g19.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1857]] /* g19.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1865]] /* g19.lambdaADPu variable */));
  threadData->lastEquationSolved = 15194;
}
/*
equation index: 15195
type: SIMPLE_ASSIGN
$DAEres519 = if g19.running.value then g19.lambdaAirGapPu - sqrt(g19.lambdaADPu ^ 2.0 + g19.lambdaAQPu ^ 2.0) else g19.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15195};
  modelica_real tmp1091;
  modelica_real tmp1092;
  modelica_real tmp1093;
  modelica_boolean tmp1094;
  modelica_real tmp1095;
  tmp1094 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1094)
  {
    tmp1091 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1865]] /* g19.lambdaADPu variable */);
    tmp1092 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* g19.lambdaAQPu variable */);
    tmp1093 = (tmp1091 * tmp1091) + (tmp1092 * tmp1092);
    if(!(tmp1093 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g19.lambdaADPu ^ 2.0 + g19.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1093);
      }
    }
    tmp1095 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1867]] /* g19.lambdaAirGapPu variable */) - sqrt(tmp1093);
  }
  else
  {
    tmp1095 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1867]] /* g19.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[519]) /* $DAEres519 DAE_RESIDUAL_VAR */ = tmp1095;
  threadData->lastEquationSolved = 15195;
}
/*
equation index: 15196
type: SIMPLE_ASSIGN
$DAEres520 = if g19.running.value then g19.lambdaAQPu - g19.MqSatPPu * (g19.iqPu + g19.iQ1Pu + g19.iQ2Pu) else g19.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15196};
  (data->simulationInfo->daeModeData->residualVars[520]) /* $DAEres520 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* g19.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1858]] /* g19.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1859]] /* g19.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1866]] /* g19.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15196;
}
/*
equation index: 15197
type: SIMPLE_ASSIGN
$DAEres521 = if g19.running.value then g19.lambdaQ2Pu - (g19.MqSatPPu * (g19.iqPu + g19.iQ1Pu) + (g19.MqSatPPu + g19.LQ2PPu) * g19.iQ2Pu) else g19.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15197};
  (data->simulationInfo->daeModeData->residualVars[521]) /* $DAEres521 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* g19.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1858]] /* g19.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2065]] /* g19.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1859]] /* g19.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1859]] /* g19.iQ2Pu variable */));
  threadData->lastEquationSolved = 15197;
}
/*
equation index: 15198
type: SIMPLE_ASSIGN
$DAEres522 = if g19.running.value then g19.lambdaQ1Pu - (g19.MqSatPPu * g19.iqPu + (g19.MqSatPPu + g19.LQ1PPu) * g19.iQ1Pu + g19.MqSatPPu * g19.iQ2Pu) else g19.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15198};
  (data->simulationInfo->daeModeData->residualVars[522]) /* $DAEres522 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* g19.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2064]] /* g19.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1858]] /* g19.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1859]] /* g19.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1858]] /* g19.iQ1Pu variable */));
  threadData->lastEquationSolved = 15198;
}
/*
equation index: 15199
type: SIMPLE_ASSIGN
$DAEres523 = if g19.running.value then g19.lambdaqPu - ((g19.MqSatPPu + g19.LqPPu + g19.XTfoPu) * g19.iqPu + g19.MqSatPPu * (g19.iQ1Pu + g19.iQ2Pu)) else g19.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15199};
  (data->simulationInfo->daeModeData->residualVars[523]) /* $DAEres523 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1869]] /* g19.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2077]] /* g19.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* g19.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* g19.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1858]] /* g19.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1859]] /* g19.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1857]] /* g19.iDPu variable */));
  threadData->lastEquationSolved = 15199;
}
/*
equation index: 15200
type: SIMPLE_ASSIGN
$DAEres524 = if g19.running.value then g19.uqPu - ((g19.RaPPu + g19.RTfoPu) * g19.iqPu + g19.omegaPu * g19.lambdadPu) else g19.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15200};
  (data->simulationInfo->daeModeData->residualVars[524]) /* $DAEres524 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* g19.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2104]] /* g19.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* g19.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1868]] /* g19.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1869]] /* g19.lambdaqPu variable */));
  threadData->lastEquationSolved = 15200;
}
/*
equation index: 15201
type: SIMPLE_ASSIGN
$DAEres525 = if g19.running.value then g19.udPu - ((g19.RaPPu + g19.RTfoPu) * g19.idPu - g19.omegaPu * g19.lambdaqPu) else g19.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15201};
  (data->simulationInfo->daeModeData->residualVars[525]) /* $DAEres525 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1885]] /* g19.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2104]] /* g19.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* g19.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1869]] /* g19.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1868]] /* g19.lambdadPu variable */));
  threadData->lastEquationSolved = 15201;
}
/*
equation index: 15202
type: SIMPLE_ASSIGN
$DAEres526 = if g19.running.value then g19.lambdadPu - ((g19.MdSatPPu + g19.LdPPu + g19.XTfoPu) * g19.idPu + g19.MdSatPPu * (g19.ifPu + g19.iDPu)) else g19.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15202};
  (data->simulationInfo->daeModeData->residualVars[526]) /* $DAEres526 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1868]] /* g19.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2075]] /* g19.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* g19.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1857]] /* g19.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */));
  threadData->lastEquationSolved = 15202;
}
/*
equation index: 15203
type: SIMPLE_ASSIGN
$DAEres527 = if g19.running.value then g19.lambdafPu - (g19.MdSatPPu * g19.idPu + (g19.MdSatPPu + g19.LfPPu + g19.MrcPPu) * g19.ifPu + (g19.MdSatPPu + g19.MrcPPu) * g19.iDPu) else g19.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15203};
  (data->simulationInfo->daeModeData->residualVars[527]) /* $DAEres527 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* g19.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2076]] /* g19.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2087]] /* g19.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* g19.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2087]] /* g19.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1857]] /* g19.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */));
  threadData->lastEquationSolved = 15203;
}
/*
equation index: 15204
type: SIMPLE_ASSIGN
$DAEres605 = if g19.running.value then 100.0 * g19.terminal.i.re / g19.SNom - (sin(g19.theta) * g19.idPu + cos(g19.theta) * g19.iqPu) else g19.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15204};
  (data->simulationInfo->daeModeData->residualVars[605]) /* $DAEres605 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */),"g19.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* g19.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* g19.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */));
  threadData->lastEquationSolved = 15204;
}
/*
equation index: 15205
type: SIMPLE_ASSIGN
$DAEres606 = if g19.running.value then 100.0 * g19.terminal.i.im / g19.SNom - (sin(g19.theta) * g19.iqPu - cos(g19.theta) * g19.idPu) else g19.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15205};
  (data->simulationInfo->daeModeData->residualVars[606]) /* $DAEres606 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */),"g19.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* g19.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* g19.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */));
  threadData->lastEquationSolved = 15205;
}
/*
equation index: 15206
type: SIMPLE_ASSIGN
$DAEres608 = if g19.running.value then g19.terminal.V.im - (sin(g19.theta) * g19.uqPu - cos(g19.theta) * g19.udPu) else g19.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15206};
  (data->simulationInfo->daeModeData->residualVars[608]) /* $DAEres608 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* g19.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* g19.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* g19.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1885]] /* g19.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* g19.uqPu variable */));
  threadData->lastEquationSolved = 15206;
}
/*
equation index: 15207
type: SIMPLE_ASSIGN
$DAEres609 = if g19.running.value then g19.terminal.V.re - (sin(g19.theta) * g19.udPu + cos(g19.theta) * g19.uqPu) else g19.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15207};
  (data->simulationInfo->daeModeData->residualVars[609]) /* $DAEres609 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* g19.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1885]] /* g19.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* g19.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* g19.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1885]] /* g19.udPu variable */));
  threadData->lastEquationSolved = 15207;
}
/*
equation index: 15208
type: SIMPLE_ASSIGN
g19.uPu.re = if g19.running.value then g19.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1882]] /* g19.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15208;
}
/*
equation index: 15209
type: SIMPLE_ASSIGN
g19.iStatorPu.im = if g19.running.value then g19.rTfoPu * g19.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15209;
}
/*
equation index: 15210
type: SIMPLE_ASSIGN
g19.cePu = if g19.running.value then g19.lambdaqPu * g19.idPu - g19.lambdadPu * g19.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* g19.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1869]] /* g19.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1862]] /* g19.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1868]] /* g19.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1864]] /* g19.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15210;
}
/*
equation index: 15211
type: SIMPLE_ASSIGN
g19.PePu = if g19.running.value then g19.cePu * g19.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1846]] /* g19.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* g19.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15211;
}
/*
equation index: 15212
type: SIMPLE_ASSIGN
$DAEres1278 = if g19.running.value then 2.0 * g19.H * der(g19.omegaPu) - (g19.cmPu * g19.PNomTurb / g19.SNom + g19.DPu * (omegaCOI - g19.omegaPu) - g19.cePu) else der(g19.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15212};
  (data->simulationInfo->daeModeData->residualVars[1278]) /* $DAEres1278 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2056]] /* g19.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* der(g19.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1854]] /* g19.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2092]] /* g19.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */),"g19.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2054]] /* g19.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* g19.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1853]] /* g19.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* der(g19.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15212;
}
/*
equation index: 15213
type: SIMPLE_ASSIGN
$DAEres1279 = if g19.running.value then (-g19.RQ1PPu) * g19.iQ1Pu - 0.0031830988618379067 * der(g19.lambdaQ1Pu) else der(g19.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15213};
  (data->simulationInfo->daeModeData->residualVars[1279]) /* $DAEres1279 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2100]] /* g19.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1858]] /* g19.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* der(g19.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* der(g19.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15213;
}
/*
equation index: 15214
type: SIMPLE_ASSIGN
$DAEres1280 = if g19.running.value then (-g19.RQ2PPu) * g19.iQ2Pu - 0.0031830988618379067 * der(g19.lambdaQ2Pu) else der(g19.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15214};
  (data->simulationInfo->daeModeData->residualVars[1280]) /* $DAEres1280 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2101]] /* g19.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1859]] /* g19.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* der(g19.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* der(g19.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15214;
}
/*
equation index: 15215
type: SIMPLE_ASSIGN
$DAEres1281 = if g19.running.value then (-g19.RDPPu) * g19.iDPu - 0.0031830988618379067 * der(g19.lambdaDPu) else der(g19.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15215};
  (data->simulationInfo->daeModeData->residualVars[1281]) /* $DAEres1281 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2099]] /* g19.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1857]] /* g19.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* der(g19.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* der(g19.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15215;
}
/*
equation index: 15216
type: SIMPLE_ASSIGN
vrNordic_g19.IrPu = if g19.running.value then g19.RfPPu * g19.ifPu / (g19.rTfoPu * g19.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3878]] /* vrNordic_g19.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* g19.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2062]] /* g19.Kuf PARAM */)),"g19.rTfoPu * g19.Kuf")):0.0);
  threadData->lastEquationSolved = 15216;
}
/*
equation index: 15217
type: SIMPLE_ASSIGN
vrNordic_g19.dIf.y = vrNordic_g19.IrPu - vrNordic_g19.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3878]] /* vrNordic_g19.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5555]] /* vrNordic_g19.const2.k PARAM */);
  threadData->lastEquationSolved = 15217;
}
/*
equation index: 15218
type: SIMPLE_ASSIGN
vrNordic_g19.gain1.y = vrNordic_g19.gain1.k * vrNordic_g19.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3887]] /* vrNordic_g19.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5561]] /* vrNordic_g19.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */));
  threadData->lastEquationSolved = 15218;
}
/*
equation index: 15219
type: SIMPLE_ASSIGN
vrNordic_g19.overExcitationLimitation.y = if vrNordic_g19.dIf.y < -0.1 then -1.0 else if vrNordic_g19.dIf.y < 0.0 then 0.0 else if vrNordic_g19.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g19.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15219};
  modelica_boolean tmp1096;
  modelica_real tmp1097;
  modelica_real tmp1098;
  modelica_boolean tmp1099;
  modelica_real tmp1100;
  modelica_real tmp1101;
  modelica_boolean tmp1102;
  modelica_boolean tmp1103;
  modelica_real tmp1104;
  modelica_boolean tmp1105;
  modelica_real tmp1106;
  tmp1097 = 1.0;
  tmp1098 = 0.1;
  relationhysteresis(data, &tmp1096, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */), -0.1, tmp1097, tmp1098, 518, Less, LessZC);
  tmp1105 = (modelica_boolean)tmp1096;
  if(tmp1105)
  {
    tmp1106 = -1.0;
  }
  else
  {
    tmp1100 = 1.0;
    tmp1101 = 0.0;
    relationhysteresis(data, &tmp1099, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */), 0.0, tmp1100, tmp1101, 519, Less, LessZC);
    tmp1103 = (modelica_boolean)tmp1099;
    if(tmp1103)
    {
      tmp1104 = 0.0;
    }
    else
    {
      tmp1102 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5609]] /* vrNordic_g19.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1104 = (tmp1102?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */));
    }
    tmp1106 = tmp1104;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */) = tmp1106;
  threadData->lastEquationSolved = 15219;
}
/*
equation index: 15220
type: SIMPLE_ASSIGN
$DAEres1282 = (if vrNordic_g19.timer.y < vrNordic_g19.timer.outMin and vrNordic_g19.timer.k * vrNordic_g19.overExcitationLimitation.y < 0.0 or vrNordic_g19.timer.y > vrNordic_g19.timer.outMax and vrNordic_g19.timer.k * vrNordic_g19.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g19.timer.k * vrNordic_g19.overExcitationLimitation.y) - der(vrNordic_g19.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15220};
  modelica_boolean tmp1107;
  modelica_real tmp1108;
  modelica_real tmp1109;
  modelica_boolean tmp1110;
  modelica_real tmp1111;
  modelica_real tmp1112;
  modelica_boolean tmp1113;
  modelica_real tmp1114;
  modelica_real tmp1115;
  modelica_boolean tmp1116;
  modelica_real tmp1117;
  modelica_real tmp1118;
  tmp1108 = 1.0;
  tmp1109 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5619]] /* vrNordic_g19.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1107, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5619]] /* vrNordic_g19.timer.outMin PARAM */), tmp1108, tmp1109, 524, Less, LessZC);
  tmp1111 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */))) * (1.0);
  tmp1112 = 0.0;
  relationhysteresis(data, &tmp1110, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)), 0.0, tmp1111, tmp1112, 525, Less, LessZC);
  tmp1114 = 1.0;
  tmp1115 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5618]] /* vrNordic_g19.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1113, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5618]] /* vrNordic_g19.timer.outMax PARAM */), tmp1114, tmp1115, 526, Greater, GreaterZC);
  tmp1117 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */))) * (1.0);
  tmp1118 = 0.0;
  relationhysteresis(data, &tmp1116, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)), 0.0, tmp1117, tmp1118, 527, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1282]) /* $DAEres1282 DAE_RESIDUAL_VAR */ = (((tmp1107 && tmp1110) || (tmp1113 && tmp1116))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* der(vrNordic_g19.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15220;
}
/*
equation index: 15221
type: SIMPLE_ASSIGN
$DAEres1283 = if g19.running.value then g19.ufPu - (g19.RfPPu * g19.ifPu + 0.0031830988618379067 * der(g19.lambdafPu)) else der(g19.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15221};
  (data->simulationInfo->daeModeData->residualVars[1283]) /* $DAEres1283 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1886]] /* g19.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* g19.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1863]] /* g19.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* der(g19.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* der(g19.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15221;
}
/*
equation index: 15222
type: SIMPLE_ASSIGN
g19.thetaInternal.value = if g19.running.value then Modelica.Math.atan3(g19.udPu, g19.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* g19.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1885]] /* g19.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* g19.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15222;
}
/*
equation index: 15223
type: SIMPLE_ASSIGN
g19.uStatorPu.re = if g19.running.value then (g19.terminal.V.re + (-100.0) * (g19.terminal.i.re * g19.RTfoPu - g19.terminal.i.im * g19.XTfoPu) / g19.SNom) / g19.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* g19.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* g19.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */),"g19.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */),"g19.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15223;
}
/*
equation index: 15224
type: SIMPLE_ASSIGN
g19.iStatorPu.re = if g19.running.value then g19.rTfoPu * g19.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15224;
}
/*
equation index: 15225
type: SIMPLE_ASSIGN
g19.IStatorPu = if g19.running.value then if g19.iStatorPu.re == 0.0 and g19.iStatorPu.im == 0.0 then 0.0 else (g19.iStatorPu.re ^ 2.0 + g19.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15225};
  modelica_real tmp1119;
  modelica_real tmp1120;
  modelica_real tmp1121;
  modelica_boolean tmp1122;
  modelica_real tmp1123;
  modelica_boolean tmp1124;
  modelica_real tmp1125;
  tmp1124 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1124)
  {
    tmp1122 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */) == 0.0));
    if(tmp1122)
    {
      tmp1123 = 0.0;
    }
    else
    {
      tmp1119 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */);
      tmp1120 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */);
      tmp1121 = (tmp1119 * tmp1119) + (tmp1120 * tmp1120);
      if(tmp1121 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1121, 0.5);
      }
      tmp1123 = sqrt(tmp1121);
    }
    tmp1125 = tmp1123;
  }
  else
  {
    tmp1125 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1842]] /* g19.IStatorPu variable */) = tmp1125;
  threadData->lastEquationSolved = 15225;
}
/*
equation index: 15226
type: SIMPLE_ASSIGN
g19.uPu.im = if g19.running.value then g19.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* g19.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15226;
}
/*
equation index: 15227
type: SIMPLE_ASSIGN
g19.UPu = if g19.running.value then (g19.terminal.V.re ^ 2.0 + g19.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15227};
  modelica_real tmp1126;
  modelica_real tmp1127;
  modelica_real tmp1128;
  modelica_boolean tmp1129;
  modelica_real tmp1130;
  tmp1129 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1129)
  {
    tmp1126 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */);
    tmp1127 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */);
    tmp1128 = (tmp1126 * tmp1126) + (tmp1127 * tmp1127);
    if(tmp1128 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1128, 0.5);
    }
    tmp1130 = sqrt(tmp1128);
  }
  else
  {
    tmp1130 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1852]] /* g19.UPu variable */) = tmp1130;
  threadData->lastEquationSolved = 15227;
}
/*
equation index: 15228
type: SIMPLE_ASSIGN
goverNordic_g19.PGenPu = if g19.running.value then (-g19.terminal.V.re) * g19.terminal.i.re - g19.terminal.V.im * g19.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2256]] /* goverNordic_g19.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15228;
}
/*
equation index: 15229
type: SIMPLE_ASSIGN
goverNordic_g19.perUnitP.y = goverNordic_g19.perUnitP.k * goverNordic_g19.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* goverNordic_g19.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2934]] /* goverNordic_g19.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2256]] /* goverNordic_g19.PGenPu variable */));
  threadData->lastEquationSolved = 15229;
}
/*
equation index: 15230
type: SIMPLE_ASSIGN
$DAEres1293 = goverNordic_g19.firstOrder1.k * goverNordic_g19.perUnitP.y + (-goverNordic_g19.firstOrder1.y) - der(goverNordic_g19.firstOrder1.y) * goverNordic_g19.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15230};
  (data->simulationInfo->daeModeData->residualVars[1293]) /* $DAEres1293 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* goverNordic_g19.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* goverNordic_g19.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* goverNordic_g19.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* der(goverNordic_g19.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* goverNordic_g19.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15230;
}
/*
equation index: 15231
type: SIMPLE_ASSIGN
g19.PGen = if g19.running.value then 100.0 * goverNordic_g19.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1845]] /* g19.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2256]] /* goverNordic_g19.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15231;
}
/*
equation index: 15232
type: SIMPLE_ASSIGN
g19.QGenPu = if g19.running.value then g19.terminal.V.re * g19.terminal.i.im - g19.terminal.V.im * g19.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1849]] /* g19.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15232;
}
/*
equation index: 15233
type: SIMPLE_ASSIGN
g19.QGen = if g19.running.value then 100.0 * g19.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1848]] /* g19.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1849]] /* g19.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15233;
}
/*
equation index: 15234
type: SIMPLE_ASSIGN
g19.uStatorPu.im = if g19.running.value then (g19.terminal.V.im + (-100.0) * (g19.terminal.i.re * g19.XTfoPu + g19.terminal.i.im * g19.RTfoPu) / g19.SNom) / g19.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* g19.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* g19.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* g19.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* g19.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* g19.SNom PARAM */),"g19.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* g19.rTfoPu PARAM */),"g19.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15234;
}
/*
equation index: 15235
type: SIMPLE_ASSIGN
g19.sStatorPu.re = if g19.running.value then g19.uStatorPu.re * g19.iStatorPu.re + g19.uStatorPu.im * g19.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1874]] /* g19.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15235;
}
/*
equation index: 15236
type: SIMPLE_ASSIGN
g19.sStatorPu.im = if g19.running.value then g19.uStatorPu.im * g19.iStatorPu.re - g19.uStatorPu.re * g19.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1873]] /* g19.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15236;
}
/*
equation index: 15237
type: SIMPLE_ASSIGN
g19.QStatorPu = if g19.running.value then -g19.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1850]] /* g19.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1873]] /* g19.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15237;
}
/*
equation index: 15238
type: SIMPLE_ASSIGN
g19.QStatorPuQNom = if g19.running.value then 100.0 * g19.QStatorPu / g19.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1851]] /* g19.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1850]] /* g19.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2096]] /* g19.QNomAlt PARAM */),"g19.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15238;
}
/*
equation index: 15239
type: SIMPLE_ASSIGN
vrNordic_g19.UsPu = if g19.running.value then if g19.uStatorPu.re == 0.0 and g19.uStatorPu.im == 0.0 then 0.0 else (g19.uStatorPu.re ^ 2.0 + g19.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15239};
  modelica_real tmp1131;
  modelica_real tmp1132;
  modelica_real tmp1133;
  modelica_boolean tmp1134;
  modelica_real tmp1135;
  modelica_boolean tmp1136;
  modelica_real tmp1137;
  tmp1136 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[542]] /* g19.running.value DISCRETE */);
  if(tmp1136)
  {
    tmp1134 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */) == 0.0));
    if(tmp1134)
    {
      tmp1135 = 0.0;
    }
    else
    {
      tmp1131 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */);
      tmp1132 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */);
      tmp1133 = (tmp1131 * tmp1131) + (tmp1132 * tmp1132);
      if(tmp1133 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1133, 0.5);
      }
      tmp1135 = sqrt(tmp1133);
    }
    tmp1137 = tmp1135;
  }
  else
  {
    tmp1137 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3879]] /* vrNordic_g19.UsPu variable */) = tmp1137;
  threadData->lastEquationSolved = 15239;
}
/*
equation index: 15240
type: SIMPLE_ASSIGN
vrNordic_g19.dU.y = vrNordic_g19.const1.k - vrNordic_g19.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3883]] /* vrNordic_g19.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5554]] /* vrNordic_g19.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3879]] /* vrNordic_g19.UsPu variable */);
  threadData->lastEquationSolved = 15240;
}
/*
equation index: 15241
type: SIMPLE_ASSIGN
vrNordic_g19.add.y = vrNordic_g19.add.k1 * vrNordic_g19.dU.y + vrNordic_g19.add.k2 * vrNordic_g19.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5551]] /* vrNordic_g19.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3883]] /* vrNordic_g19.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5552]] /* vrNordic_g19.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* vrNordic_g19.limiter.y variable */));
  threadData->lastEquationSolved = 15241;
}
/*
equation index: 15242
type: SIMPLE_ASSIGN
vrNordic_g19.switch.y = if vrNordic_g19.greaterEqualThreshold.y then vrNordic_g19.gain1.y else vrNordic_g19.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vrNordic_g19.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1069]] /* vrNordic_g19.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3887]] /* vrNordic_g19.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */));
  threadData->lastEquationSolved = 15242;
}
/*
equation index: 15243
type: SIMPLE_ASSIGN
vrNordic_g19.min1.y = if vrNordic_g19.switch.y < vrNordic_g19.add.y then vrNordic_g19.switch.y else vrNordic_g19.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15243};
  modelica_boolean tmp1138;
  modelica_real tmp1139;
  modelica_real tmp1140;
  tmp1139 = 1.0;
  tmp1140 = 1.0;
  relationhysteresis(data, &tmp1138, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vrNordic_g19.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */), tmp1139, tmp1140, 516, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3898]] /* vrNordic_g19.min1.y variable */) = (tmp1138?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vrNordic_g19.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */));
  threadData->lastEquationSolved = 15243;
}
/*
equation index: 15244
type: SIMPLE_ASSIGN
vrNordic_g19.kMulDU.y = vrNordic_g19.kMulDU.k * vrNordic_g19.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3888]] /* vrNordic_g19.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5563]] /* vrNordic_g19.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3898]] /* vrNordic_g19.min1.y variable */));
  threadData->lastEquationSolved = 15244;
}
/*
equation index: 15245
type: SIMPLE_ASSIGN
$DAEres1294 = vrNordic_g19.leadLag.a_end * vrNordic_g19.kMulDU.y + (-vrNordic_g19.leadLag.a[2]) * vrNordic_g19.leadLag.x_scaled[1] - der(vrNordic_g19.leadLag.x_scaled[1]) * vrNordic_g19.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15245};
  (data->simulationInfo->daeModeData->residualVars[1294]) /* $DAEres1294 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5568]] /* vrNordic_g19.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3888]] /* vrNordic_g19.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5567]] /* vrNordic_g19.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* vrNordic_g19.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* der(vrNordic_g19.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5566]] /* vrNordic_g19.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15245;
}
/*
equation index: 15246
type: SIMPLE_ASSIGN
vrNordic_g19.leadLag.y = (vrNordic_g19.leadLag.bb[2] - vrNordic_g19.leadLag.d * vrNordic_g19.leadLag.a[2]) * vrNordic_g19.leadLag.x[1] + vrNordic_g19.leadLag.d * vrNordic_g19.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3890]] /* vrNordic_g19.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5572]] /* vrNordic_g19.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5573]] /* vrNordic_g19.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5567]] /* vrNordic_g19.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3889]] /* vrNordic_g19.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5573]] /* vrNordic_g19.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3888]] /* vrNordic_g19.kMulDU.y variable */));
  threadData->lastEquationSolved = 15246;
}
/*
equation index: 15247
type: SIMPLE_ASSIGN
vrNordic_g19.feedback1.y = vrNordic_g19.leadLag.y - vrNordic_g19.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3885]] /* vrNordic_g19.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3890]] /* vrNordic_g19.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15247;
}
/*
equation index: 15248
type: SIMPLE_ASSIGN
vrNordic_g19.gain.y = vrNordic_g19.gain.k * vrNordic_g19.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5560]] /* vrNordic_g19.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3885]] /* vrNordic_g19.feedback1.y variable */));
  threadData->lastEquationSolved = 15248;
}
/*
equation index: 15249
type: SIMPLE_ASSIGN
$DAEres1295 = (if vrNordic_g19.limIntegrator.y < vrNordic_g19.limIntegrator.outMin and vrNordic_g19.limIntegrator.k * vrNordic_g19.gain.y < 0.0 or vrNordic_g19.limIntegrator.y > vrNordic_g19.limIntegrator.outMax and vrNordic_g19.limIntegrator.k * vrNordic_g19.gain.y > 0.0 then 0.0 else vrNordic_g19.limIntegrator.k * vrNordic_g19.gain.y) - der(vrNordic_g19.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15249};
  modelica_boolean tmp1141;
  modelica_real tmp1142;
  modelica_real tmp1143;
  modelica_boolean tmp1144;
  modelica_real tmp1145;
  modelica_real tmp1146;
  modelica_boolean tmp1147;
  modelica_real tmp1148;
  modelica_real tmp1149;
  modelica_boolean tmp1150;
  modelica_real tmp1151;
  modelica_real tmp1152;
  tmp1142 = 1.0;
  tmp1143 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5605]] /* vrNordic_g19.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1141, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5605]] /* vrNordic_g19.limIntegrator.outMin PARAM */), tmp1142, tmp1143, 520, Less, LessZC);
  tmp1145 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */))) * (1.0);
  tmp1146 = 0.0;
  relationhysteresis(data, &tmp1144, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)), 0.0, tmp1145, tmp1146, 521, Less, LessZC);
  tmp1148 = 1.0;
  tmp1149 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5604]] /* vrNordic_g19.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1147, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5604]] /* vrNordic_g19.limIntegrator.outMax PARAM */), tmp1148, tmp1149, 522, Greater, GreaterZC);
  tmp1151 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */))) * (1.0);
  tmp1152 = 0.0;
  relationhysteresis(data, &tmp1150, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)), 0.0, tmp1151, tmp1152, 523, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1295]) /* $DAEres1295 DAE_RESIDUAL_VAR */ = (((tmp1141 && tmp1144) || (tmp1147 && tmp1150))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* der(vrNordic_g19.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15249;
}
/*
equation index: 15250
type: SIMPLE_ASSIGN
$whenCondition10 = not pre(g18.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15250};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition10 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[538] /* g18.running.value DISCRETE */));
  threadData->lastEquationSolved = 15250;
}
/*
equation index: 15251
type: WHEN

when {} then
  g18.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15251};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition10 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[1] /* $whenCondition10 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15251;
}
/*
equation index: 15253
type: SIMPLE_ASSIGN
$whenCondition12 = not g18.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15253};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[23]] /* $whenCondition12 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */));
  threadData->lastEquationSolved = 15253;
}
/*
equation index: 15254
type: SIMPLE_ASSIGN
$whenCondition11 = g18.running.value and not pre(g18.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15254};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* $whenCondition11 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[538] /* g18.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15254;
}
/*
equation index: 15255
type: WHEN

when {$whenCondition12} then
  g18.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15255};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[23]] /* $whenCondition12 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[23] /* $whenCondition12 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* g18.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* $whenCondition11 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[12] /* $whenCondition11 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* g18.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15255;
}
/*
equation index: 15257
type: SIMPLE_ASSIGN
g18.converter.u = Integer(g18.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15257};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[34]] /* g18.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* g18.state DISCRETE */)));
  threadData->lastEquationSolved = 15257;
}
/*
equation index: 15258
type: SIMPLE_ASSIGN
g18.genState = (*Real*)(g18.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1810]] /* g18.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[34]] /* g18.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15258;
}
/*
equation index: 15259
type: SIMPLE_ASSIGN
$DAEres122 = if g18.running.value then der(g18.theta) - 314.1592653589793 * (g18.omegaPu - omegaCOI) else der(g18.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15259};
  (data->simulationInfo->daeModeData->residualVars[122]) /* $DAEres122 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* der(g18.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* der(g18.theta) STATE_DER */));
  threadData->lastEquationSolved = 15259;
}
/*
equation index: 15260
type: SIMPLE_ASSIGN
g18.cmPu = if g18.running.value then g18.PmPu / g18.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1808]] /* g18.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1801]] /* g18.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */),"g18.omegaPu"):0.0);
  threadData->lastEquationSolved = 15260;
}
/*
equation index: 15261
type: SIMPLE_ASSIGN
g18.ufPu = if g18.running.value then vrNordic_g18.limIntegrator.y * g18.Kuf * g18.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1840]] /* g18.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1959]] /* g18.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15261;
}
/*
equation index: 15262
type: SIMPLE_ASSIGN
$DAEres144 = if g18.running.value then g18.mqsPu - g18.MqPPu / (1.0 + g18.mq * g18.lambdaAirGapPu ^ g18.nq) else g18.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15262};
  modelica_real tmp1153;
  modelica_real tmp1154;
  modelica_real tmp1155;
  modelica_real tmp1156;
  modelica_real tmp1157;
  modelica_real tmp1158;
  modelica_real tmp1159;
  modelica_boolean tmp1160;
  modelica_real tmp1161;
  tmp1160 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp1160)
  {
    tmp1153 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1821]] /* g18.lambdaAirGapPu variable */);
    tmp1154 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* g18.nq PARAM */);
    if(tmp1153 < 0.0 && tmp1154 != 0.0)
    {
      tmp1156 = modf(tmp1154, &tmp1157);
      
      if(tmp1156 > 0.5)
      {
        tmp1156 -= 1.0;
        tmp1157 += 1.0;
      }
      else if(tmp1156 < -0.5)
      {
        tmp1156 += 1.0;
        tmp1157 -= 1.0;
      }
      
      if(fabs(tmp1156) < 1e-10)
        tmp1155 = pow(tmp1153, tmp1157);
      else
      {
        tmp1159 = modf(1.0/tmp1154, &tmp1158);
        if(tmp1159 > 0.5)
        {
          tmp1159 -= 1.0;
          tmp1158 += 1.0;
        }
        else if(tmp1159 < -0.5)
        {
          tmp1159 += 1.0;
          tmp1158 -= 1.0;
        }
        if(fabs(tmp1159) < 1e-10 && ((unsigned long)tmp1158 & 1))
        {
          tmp1155 = -pow(-tmp1153, tmp1156)*pow(tmp1153, tmp1157);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1153, tmp1154);
        }
      }
    }
    else
    {
      tmp1155 = pow(tmp1153, tmp1154);
    }
    if(isnan(tmp1155) || isinf(tmp1155))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1153, tmp1154);
    }
    tmp1161 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1826]] /* g18.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1981]] /* g18.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2026]] /* g18.mq PARAM */)) * (tmp1155),"1.0 + g18.mq * g18.lambdaAirGapPu ^ g18.nq"));
  }
  else
  {
    tmp1161 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1826]] /* g18.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[144]) /* $DAEres144 DAE_RESIDUAL_VAR */ = tmp1161;
  threadData->lastEquationSolved = 15262;
}
/*
equation index: 15263
type: SIMPLE_ASSIGN
$DAEres145 = if g18.running.value then g18.mdsPu - g18.MdPPu / (1.0 + g18.md * g18.lambdaAirGapPu ^ g18.nd) else g18.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15263};
  modelica_real tmp1162;
  modelica_real tmp1163;
  modelica_real tmp1164;
  modelica_real tmp1165;
  modelica_real tmp1166;
  modelica_real tmp1167;
  modelica_real tmp1168;
  modelica_boolean tmp1169;
  modelica_real tmp1170;
  tmp1169 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp1169)
  {
    tmp1162 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1821]] /* g18.lambdaAirGapPu variable */);
    tmp1163 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2027]] /* g18.nd PARAM */);
    if(tmp1162 < 0.0 && tmp1163 != 0.0)
    {
      tmp1165 = modf(tmp1163, &tmp1166);
      
      if(tmp1165 > 0.5)
      {
        tmp1165 -= 1.0;
        tmp1166 += 1.0;
      }
      else if(tmp1165 < -0.5)
      {
        tmp1165 += 1.0;
        tmp1166 -= 1.0;
      }
      
      if(fabs(tmp1165) < 1e-10)
        tmp1164 = pow(tmp1162, tmp1166);
      else
      {
        tmp1168 = modf(1.0/tmp1163, &tmp1167);
        if(tmp1168 > 0.5)
        {
          tmp1168 -= 1.0;
          tmp1167 += 1.0;
        }
        else if(tmp1168 < -0.5)
        {
          tmp1168 += 1.0;
          tmp1167 -= 1.0;
        }
        if(fabs(tmp1168) < 1e-10 && ((unsigned long)tmp1167 & 1))
        {
          tmp1164 = -pow(-tmp1162, tmp1165)*pow(tmp1162, tmp1166);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1162, tmp1163);
        }
      }
    }
    else
    {
      tmp1164 = pow(tmp1162, tmp1163);
    }
    if(isnan(tmp1164) || isinf(tmp1164))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1162, tmp1163);
    }
    tmp1170 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* g18.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1975]] /* g18.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* g18.md PARAM */)) * (tmp1164),"1.0 + g18.md * g18.lambdaAirGapPu ^ g18.nd"));
  }
  else
  {
    tmp1170 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* g18.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[145]) /* $DAEres145 DAE_RESIDUAL_VAR */ = tmp1170;
  threadData->lastEquationSolved = 15263;
}
/*
equation index: 15264
type: SIMPLE_ASSIGN
$DAEres146 = if g18.running.value then g18.lambdaAirGapPu - sqrt(g18.lambdaADPu ^ 2.0 + g18.lambdaAQPu ^ 2.0) else g18.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15264};
  modelica_real tmp1171;
  modelica_real tmp1172;
  modelica_real tmp1173;
  modelica_boolean tmp1174;
  modelica_real tmp1175;
  tmp1174 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp1174)
  {
    tmp1171 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1819]] /* g18.lambdaADPu variable */);
    tmp1172 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1820]] /* g18.lambdaAQPu variable */);
    tmp1173 = (tmp1171 * tmp1171) + (tmp1172 * tmp1172);
    if(!(tmp1173 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g18.lambdaADPu ^ 2.0 + g18.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1173);
      }
    }
    tmp1175 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1821]] /* g18.lambdaAirGapPu variable */) - sqrt(tmp1173);
  }
  else
  {
    tmp1175 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1821]] /* g18.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[146]) /* $DAEres146 DAE_RESIDUAL_VAR */ = tmp1175;
  threadData->lastEquationSolved = 15264;
}
/*
equation index: 15265
type: SIMPLE_ASSIGN
$DAEres147 = if g18.running.value then g18.cos2Eta - (g18.lambdaADPu / g18.lambdaAirGapPu) ^ 2.0 else g18.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15265};
  modelica_real tmp1176;
  modelica_boolean tmp1177;
  modelica_real tmp1178;
  tmp1177 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp1177)
  {
    tmp1176 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1819]] /* g18.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1821]] /* g18.lambdaAirGapPu variable */),"g18.lambdaAirGapPu");
    tmp1178 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1809]] /* g18.cos2Eta variable */) - ((tmp1176 * tmp1176));
  }
  else
  {
    tmp1178 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1809]] /* g18.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[147]) /* $DAEres147 DAE_RESIDUAL_VAR */ = tmp1178;
  threadData->lastEquationSolved = 15265;
}
/*
equation index: 15266
type: SIMPLE_ASSIGN
$DAEres148 = if g18.running.value then g18.MqSatPPu - (g18.miPu - g18.MsalPu * g18.cos2Eta) else g18.MqSatPPu - g18.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15266};
  (data->simulationInfo->daeModeData->residualVars[148]) /* $DAEres148 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* g18.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1985]] /* g18.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1809]] /* g18.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1981]] /* g18.MqPPu PARAM */));
  threadData->lastEquationSolved = 15266;
}
/*
equation index: 15267
type: SIMPLE_ASSIGN
$DAEres149 = if g18.running.value then g18.lambdaQ2Pu - (g18.MqSatPPu * (g18.iqPu + g18.iQ1Pu) + (g18.MqSatPPu + g18.LQ2PPu) * g18.iQ2Pu) else g18.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15267};
  (data->simulationInfo->daeModeData->residualVars[149]) /* $DAEres149 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* g18.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1812]] /* g18.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* g18.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1813]] /* g18.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1813]] /* g18.iQ2Pu variable */));
  threadData->lastEquationSolved = 15267;
}
/*
equation index: 15268
type: SIMPLE_ASSIGN
$DAEres150 = if g18.running.value then g18.lambdaQ1Pu - (g18.MqSatPPu * g18.iqPu + (g18.MqSatPPu + g18.LQ1PPu) * g18.iQ1Pu + g18.MqSatPPu * g18.iQ2Pu) else g18.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15268};
  (data->simulationInfo->daeModeData->residualVars[150]) /* $DAEres150 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* g18.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1961]] /* g18.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1812]] /* g18.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1813]] /* g18.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1812]] /* g18.iQ1Pu variable */));
  threadData->lastEquationSolved = 15268;
}
/*
equation index: 15269
type: SIMPLE_ASSIGN
$DAEres151 = if g18.running.value then g18.lambdaqPu - ((g18.MqSatPPu + g18.LqPPu + g18.XTfoPu) * g18.iqPu + g18.MqSatPPu * (g18.iQ1Pu + g18.iQ2Pu)) else g18.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15269};
  (data->simulationInfo->daeModeData->residualVars[151]) /* $DAEres151 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1823]] /* g18.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1974]] /* g18.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* g18.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1812]] /* g18.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1813]] /* g18.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1811]] /* g18.iDPu variable */));
  threadData->lastEquationSolved = 15269;
}
/*
equation index: 15270
type: SIMPLE_ASSIGN
$DAEres152 = if g18.running.value then g18.lambdaAQPu - g18.MqSatPPu * (g18.iqPu + g18.iQ1Pu + g18.iQ2Pu) else g18.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15270};
  (data->simulationInfo->daeModeData->residualVars[152]) /* $DAEres152 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1820]] /* g18.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* g18.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1812]] /* g18.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1813]] /* g18.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1820]] /* g18.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15270;
}
/*
equation index: 15271
type: SIMPLE_ASSIGN
$DAEres153 = if g18.running.value then g18.sin2Eta - (g18.lambdaAQPu / g18.lambdaAirGapPu) ^ 2.0 else g18.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15271};
  modelica_real tmp1179;
  modelica_boolean tmp1180;
  modelica_real tmp1181;
  tmp1180 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp1180)
  {
    tmp1179 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1820]] /* g18.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1821]] /* g18.lambdaAirGapPu variable */),"g18.lambdaAirGapPu");
    tmp1181 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1829]] /* g18.sin2Eta variable */) - ((tmp1179 * tmp1179));
  }
  else
  {
    tmp1181 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1829]] /* g18.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[153]) /* $DAEres153 DAE_RESIDUAL_VAR */ = tmp1181;
  threadData->lastEquationSolved = 15271;
}
/*
equation index: 15272
type: SIMPLE_ASSIGN
$DAEres154 = if g18.running.value then g18.miPu - (g18.mdsPu * g18.cos2Eta + g18.mqsPu * g18.sin2Eta) else g18.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15272};
  (data->simulationInfo->daeModeData->residualVars[154]) /* $DAEres154 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* g18.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* g18.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1809]] /* g18.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1826]] /* g18.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1829]] /* g18.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* g18.miPu variable */));
  threadData->lastEquationSolved = 15272;
}
/*
equation index: 15273
type: SIMPLE_ASSIGN
$DAEres155 = if g18.running.value then g18.MdSatPPu - (g18.miPu + g18.MsalPu * g18.sin2Eta) else g18.MdSatPPu - g18.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15273};
  (data->simulationInfo->daeModeData->residualVars[155]) /* $DAEres155 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* g18.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1985]] /* g18.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1829]] /* g18.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1975]] /* g18.MdPPu PARAM */));
  threadData->lastEquationSolved = 15273;
}
/*
equation index: 15274
type: SIMPLE_ASSIGN
$DAEres156 = if g18.running.value then g18.lambdaADPu - g18.MdSatPPu * (g18.idPu + g18.ifPu + g18.iDPu) else g18.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15274};
  (data->simulationInfo->daeModeData->residualVars[156]) /* $DAEres156 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1819]] /* g18.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1811]] /* g18.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1819]] /* g18.lambdaADPu variable */));
  threadData->lastEquationSolved = 15274;
}
/*
equation index: 15275
type: SIMPLE_ASSIGN
$DAEres157 = if g18.running.value then g18.lambdaDPu - (g18.MdSatPPu * g18.idPu + (g18.MdSatPPu + g18.MrcPPu) * g18.ifPu + (g18.MdSatPPu + g18.LDPPu + g18.MrcPPu) * g18.iDPu) else g18.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15275};
  (data->simulationInfo->daeModeData->residualVars[157]) /* $DAEres157 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* g18.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1984]] /* g18.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1960]] /* g18.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1984]] /* g18.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1811]] /* g18.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */));
  threadData->lastEquationSolved = 15275;
}
/*
equation index: 15276
type: SIMPLE_ASSIGN
$DAEres158 = if g18.running.value then g18.lambdafPu - (g18.MdSatPPu * g18.idPu + (g18.MdSatPPu + g18.LfPPu + g18.MrcPPu) * g18.ifPu + (g18.MdSatPPu + g18.MrcPPu) * g18.iDPu) else g18.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15276};
  (data->simulationInfo->daeModeData->residualVars[158]) /* $DAEres158 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* g18.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1973]] /* g18.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1984]] /* g18.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1984]] /* g18.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1811]] /* g18.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */));
  threadData->lastEquationSolved = 15276;
}
/*
equation index: 15277
type: SIMPLE_ASSIGN
$DAEres159 = if g18.running.value then g18.uqPu - ((g18.RaPPu + g18.RTfoPu) * g18.iqPu + g18.omegaPu * g18.lambdadPu) else g18.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15277};
  (data->simulationInfo->daeModeData->residualVars[159]) /* $DAEres159 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1841]] /* g18.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2001]] /* g18.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2000]] /* g18.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1822]] /* g18.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1823]] /* g18.lambdaqPu variable */));
  threadData->lastEquationSolved = 15277;
}
/*
equation index: 15278
type: SIMPLE_ASSIGN
$DAEres160 = if g18.running.value then g18.lambdadPu - ((g18.MdSatPPu + g18.LdPPu + g18.XTfoPu) * g18.idPu + g18.MdSatPPu * (g18.ifPu + g18.iDPu)) else g18.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15278};
  (data->simulationInfo->daeModeData->residualVars[160]) /* $DAEres160 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1822]] /* g18.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1972]] /* g18.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* g18.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* g18.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1811]] /* g18.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */));
  threadData->lastEquationSolved = 15278;
}
/*
equation index: 15279
type: SIMPLE_ASSIGN
$DAEres168 = if g18.running.value then 100.0 * g18.terminal.i.im / g18.SNom - (sin(g18.theta) * g18.iqPu - cos(g18.theta) * g18.idPu) else g18.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15279};
  (data->simulationInfo->daeModeData->residualVars[168]) /* $DAEres168 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */),"g18.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* g18.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* g18.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */));
  threadData->lastEquationSolved = 15279;
}
/*
equation index: 15280
type: SIMPLE_ASSIGN
$DAEres171 = if g18.running.value then 100.0 * g18.terminal.i.re / g18.SNom - (sin(g18.theta) * g18.idPu + cos(g18.theta) * g18.iqPu) else g18.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15280};
  (data->simulationInfo->daeModeData->residualVars[171]) /* $DAEres171 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */),"g18.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* g18.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* g18.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */));
  threadData->lastEquationSolved = 15280;
}
/*
equation index: 15281
type: SIMPLE_ASSIGN
$DAEres172 = if g18.running.value then g18.udPu - ((g18.RaPPu + g18.RTfoPu) * g18.idPu - g18.omegaPu * g18.lambdaqPu) else g18.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15281};
  (data->simulationInfo->daeModeData->residualVars[172]) /* $DAEres172 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1839]] /* g18.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2001]] /* g18.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2000]] /* g18.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1823]] /* g18.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1822]] /* g18.lambdadPu variable */));
  threadData->lastEquationSolved = 15281;
}
/*
equation index: 15282
type: SIMPLE_ASSIGN
$DAEres173 = if g18.running.value then g18.terminal.V.re - (sin(g18.theta) * g18.udPu + cos(g18.theta) * g18.uqPu) else g18.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15282};
  (data->simulationInfo->daeModeData->residualVars[173]) /* $DAEres173 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* g18.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1839]] /* g18.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* g18.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1841]] /* g18.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1839]] /* g18.udPu variable */));
  threadData->lastEquationSolved = 15282;
}
/*
equation index: 15283
type: SIMPLE_ASSIGN
$DAEres174 = if g18.running.value then g18.terminal.V.im - (sin(g18.theta) * g18.uqPu - cos(g18.theta) * g18.udPu) else g18.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15283};
  (data->simulationInfo->daeModeData->residualVars[174]) /* $DAEres174 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* g18.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1841]] /* g18.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* g18.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1839]] /* g18.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1841]] /* g18.uqPu variable */));
  threadData->lastEquationSolved = 15283;
}
/*
equation index: 15284
type: SIMPLE_ASSIGN
g18.uPu.im = if g18.running.value then g18.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1835]] /* g18.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15284;
}
/*
equation index: 15285
type: SIMPLE_ASSIGN
g18.thetaInternal.value = if g18.running.value then Modelica.Math.atan3(g18.udPu, g18.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1834]] /* g18.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1839]] /* g18.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1841]] /* g18.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15285;
}
/*
equation index: 15286
type: SIMPLE_ASSIGN
$DAEres1197 = if g18.running.value then (-g18.RDPPu) * g18.iDPu - 0.0031830988618379067 * der(g18.lambdaDPu) else der(g18.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15286};
  (data->simulationInfo->daeModeData->residualVars[1197]) /* $DAEres1197 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1996]] /* g18.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1811]] /* g18.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* der(g18.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* der(g18.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15286;
}
/*
equation index: 15287
type: SIMPLE_ASSIGN
$DAEres1198 = if g18.running.value then (-g18.RQ2PPu) * g18.iQ2Pu - 0.0031830988618379067 * der(g18.lambdaQ2Pu) else der(g18.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15287};
  (data->simulationInfo->daeModeData->residualVars[1198]) /* $DAEres1198 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1998]] /* g18.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1813]] /* g18.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* der(g18.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* der(g18.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15287;
}
/*
equation index: 15288
type: SIMPLE_ASSIGN
$DAEres1199 = if g18.running.value then (-g18.RQ1PPu) * g18.iQ1Pu - 0.0031830988618379067 * der(g18.lambdaQ1Pu) else der(g18.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15288};
  (data->simulationInfo->daeModeData->residualVars[1199]) /* $DAEres1199 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1997]] /* g18.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1812]] /* g18.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* der(g18.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* der(g18.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15288;
}
/*
equation index: 15289
type: SIMPLE_ASSIGN
g18.cePu = if g18.running.value then g18.lambdaqPu * g18.idPu - g18.lambdadPu * g18.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1807]] /* g18.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1823]] /* g18.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* g18.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1822]] /* g18.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1818]] /* g18.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15289;
}
/*
equation index: 15290
type: SIMPLE_ASSIGN
g18.PePu = if g18.running.value then g18.cePu * g18.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1800]] /* g18.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1807]] /* g18.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15290;
}
/*
equation index: 15291
type: SIMPLE_ASSIGN
$DAEres1200 = if g18.running.value then 2.0 * g18.H * der(g18.omegaPu) - (g18.cmPu * g18.PNomTurb / g18.SNom + g18.DPu * (omegaCOI - g18.omegaPu) - g18.cePu) else der(g18.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15291};
  (data->simulationInfo->daeModeData->residualVars[1200]) /* $DAEres1200 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* g18.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* der(g18.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1808]] /* g18.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1989]] /* g18.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */),"g18.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1951]] /* g18.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* g18.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1807]] /* g18.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* der(g18.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15291;
}
/*
equation index: 15292
type: SIMPLE_ASSIGN
vrNordic_g18.IrPu = if g18.running.value then g18.RfPPu * g18.ifPu / (g18.rTfoPu * g18.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* vrNordic_g18.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2002]] /* g18.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1959]] /* g18.Kuf PARAM */)),"g18.rTfoPu * g18.Kuf")):0.0);
  threadData->lastEquationSolved = 15292;
}
/*
equation index: 15293
type: SIMPLE_ASSIGN
vrNordic_g18.dIf.y = vrNordic_g18.IrPu - vrNordic_g18.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* vrNordic_g18.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5476]] /* vrNordic_g18.const2.k PARAM */);
  threadData->lastEquationSolved = 15293;
}
/*
equation index: 15294
type: SIMPLE_ASSIGN
vrNordic_g18.gain1.y = vrNordic_g18.gain1.k * vrNordic_g18.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3863]] /* vrNordic_g18.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5482]] /* vrNordic_g18.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */));
  threadData->lastEquationSolved = 15294;
}
/*
equation index: 15295
type: SIMPLE_ASSIGN
vrNordic_g18.overExcitationLimitation.y = if vrNordic_g18.dIf.y < -0.1 then -1.0 else if vrNordic_g18.dIf.y < 0.0 then 0.0 else if vrNordic_g18.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g18.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15295};
  modelica_boolean tmp1182;
  modelica_real tmp1183;
  modelica_real tmp1184;
  modelica_boolean tmp1185;
  modelica_real tmp1186;
  modelica_real tmp1187;
  modelica_boolean tmp1188;
  modelica_boolean tmp1189;
  modelica_real tmp1190;
  modelica_boolean tmp1191;
  modelica_real tmp1192;
  tmp1183 = 1.0;
  tmp1184 = 0.1;
  relationhysteresis(data, &tmp1182, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */), -0.1, tmp1183, tmp1184, 502, Less, LessZC);
  tmp1191 = (modelica_boolean)tmp1182;
  if(tmp1191)
  {
    tmp1192 = -1.0;
  }
  else
  {
    tmp1186 = 1.0;
    tmp1187 = 0.0;
    relationhysteresis(data, &tmp1185, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */), 0.0, tmp1186, tmp1187, 503, Less, LessZC);
    tmp1189 = (modelica_boolean)tmp1185;
    if(tmp1189)
    {
      tmp1190 = 0.0;
    }
    else
    {
      tmp1188 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5530]] /* vrNordic_g18.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1190 = (tmp1188?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */));
    }
    tmp1192 = tmp1190;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */) = tmp1192;
  threadData->lastEquationSolved = 15295;
}
/*
equation index: 15296
type: SIMPLE_ASSIGN
$DAEres1201 = (if vrNordic_g18.timer.y < vrNordic_g18.timer.outMin and vrNordic_g18.timer.k * vrNordic_g18.overExcitationLimitation.y < 0.0 or vrNordic_g18.timer.y > vrNordic_g18.timer.outMax and vrNordic_g18.timer.k * vrNordic_g18.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g18.timer.k * vrNordic_g18.overExcitationLimitation.y) - der(vrNordic_g18.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15296};
  modelica_boolean tmp1193;
  modelica_real tmp1194;
  modelica_real tmp1195;
  modelica_boolean tmp1196;
  modelica_real tmp1197;
  modelica_real tmp1198;
  modelica_boolean tmp1199;
  modelica_real tmp1200;
  modelica_real tmp1201;
  modelica_boolean tmp1202;
  modelica_real tmp1203;
  modelica_real tmp1204;
  tmp1194 = 1.0;
  tmp1195 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5540]] /* vrNordic_g18.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1193, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5540]] /* vrNordic_g18.timer.outMin PARAM */), tmp1194, tmp1195, 508, Less, LessZC);
  tmp1197 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */))) * (1.0);
  tmp1198 = 0.0;
  relationhysteresis(data, &tmp1196, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)), 0.0, tmp1197, tmp1198, 509, Less, LessZC);
  tmp1200 = 1.0;
  tmp1201 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5539]] /* vrNordic_g18.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1199, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5539]] /* vrNordic_g18.timer.outMax PARAM */), tmp1200, tmp1201, 510, Greater, GreaterZC);
  tmp1203 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */))) * (1.0);
  tmp1204 = 0.0;
  relationhysteresis(data, &tmp1202, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)), 0.0, tmp1203, tmp1204, 511, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1201]) /* $DAEres1201 DAE_RESIDUAL_VAR */ = (((tmp1193 && tmp1196) || (tmp1199 && tmp1202))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* der(vrNordic_g18.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15296;
}
/*
equation index: 15297
type: SIMPLE_ASSIGN
$DAEres1202 = if g18.running.value then g18.ufPu - (g18.RfPPu * g18.ifPu + 0.0031830988618379067 * der(g18.lambdafPu)) else der(g18.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15297};
  (data->simulationInfo->daeModeData->residualVars[1202]) /* $DAEres1202 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1840]] /* g18.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2002]] /* g18.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1817]] /* g18.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* der(g18.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* der(g18.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15297;
}
/*
equation index: 15298
type: SIMPLE_ASSIGN
g18.iStatorPu.im = if g18.running.value then g18.rTfoPu * g18.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15298;
}
/*
equation index: 15299
type: SIMPLE_ASSIGN
g18.uPu.re = if g18.running.value then g18.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1836]] /* g18.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15299;
}
/*
equation index: 15300
type: SIMPLE_ASSIGN
g18.UPu = if g18.running.value then (g18.terminal.V.re ^ 2.0 + g18.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15300};
  modelica_real tmp1205;
  modelica_real tmp1206;
  modelica_real tmp1207;
  modelica_boolean tmp1208;
  modelica_real tmp1209;
  tmp1208 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp1208)
  {
    tmp1205 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */);
    tmp1206 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */);
    tmp1207 = (tmp1205 * tmp1205) + (tmp1206 * tmp1206);
    if(tmp1207 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1207, 0.5);
    }
    tmp1209 = sqrt(tmp1207);
  }
  else
  {
    tmp1209 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* g18.UPu variable */) = tmp1209;
  threadData->lastEquationSolved = 15300;
}
/*
equation index: 15301
type: SIMPLE_ASSIGN
goverNordic_g18.PGenPu = if g18.running.value then (-g18.terminal.V.re) * g18.terminal.i.re - g18.terminal.V.im * g18.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* goverNordic_g18.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15301;
}
/*
equation index: 15302
type: SIMPLE_ASSIGN
goverNordic_g18.perUnitP.y = goverNordic_g18.perUnitP.k * goverNordic_g18.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2254]] /* goverNordic_g18.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* goverNordic_g18.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* goverNordic_g18.PGenPu variable */));
  threadData->lastEquationSolved = 15302;
}
/*
equation index: 15303
type: SIMPLE_ASSIGN
$DAEres1203 = goverNordic_g18.firstOrder1.k * goverNordic_g18.perUnitP.y + (-goverNordic_g18.firstOrder1.y) - der(goverNordic_g18.firstOrder1.y) * goverNordic_g18.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15303};
  (data->simulationInfo->daeModeData->residualVars[1203]) /* $DAEres1203 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* goverNordic_g18.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2254]] /* goverNordic_g18.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* goverNordic_g18.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[508]] /* der(goverNordic_g18.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2875]] /* goverNordic_g18.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15303;
}
/*
equation index: 15304
type: SIMPLE_ASSIGN
g18.PGen = if g18.running.value then 100.0 * goverNordic_g18.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* g18.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* goverNordic_g18.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15304;
}
/*
equation index: 15305
type: SIMPLE_ASSIGN
g18.QGenPu = if g18.running.value then g18.terminal.V.re * g18.terminal.i.im - g18.terminal.V.im * g18.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1803]] /* g18.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15305;
}
/*
equation index: 15306
type: SIMPLE_ASSIGN
g18.QGen = if g18.running.value then 100.0 * g18.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1802]] /* g18.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1803]] /* g18.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15306;
}
/*
equation index: 15307
type: SIMPLE_ASSIGN
g18.uStatorPu.re = if g18.running.value then (g18.terminal.V.re + (-100.0) * (g18.terminal.i.re * g18.RTfoPu - g18.terminal.i.im * g18.XTfoPu) / g18.SNom) / g18.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2000]] /* g18.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* g18.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */),"g18.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */),"g18.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15307;
}
/*
equation index: 15308
type: SIMPLE_ASSIGN
g18.uStatorPu.im = if g18.running.value then (g18.terminal.V.im + (-100.0) * (g18.terminal.i.re * g18.XTfoPu + g18.terminal.i.im * g18.RTfoPu) / g18.SNom) / g18.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* g18.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* g18.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2000]] /* g18.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2003]] /* g18.SNom PARAM */),"g18.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */),"g18.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15308;
}
/*
equation index: 15309
type: SIMPLE_ASSIGN
vrNordic_g18.UsPu = if g18.running.value then if g18.uStatorPu.re == 0.0 and g18.uStatorPu.im == 0.0 then 0.0 else (g18.uStatorPu.re ^ 2.0 + g18.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15309};
  modelica_real tmp1210;
  modelica_real tmp1211;
  modelica_real tmp1212;
  modelica_boolean tmp1213;
  modelica_real tmp1214;
  modelica_boolean tmp1215;
  modelica_real tmp1216;
  tmp1215 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp1215)
  {
    tmp1213 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */) == 0.0));
    if(tmp1213)
    {
      tmp1214 = 0.0;
    }
    else
    {
      tmp1210 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */);
      tmp1211 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */);
      tmp1212 = (tmp1210 * tmp1210) + (tmp1211 * tmp1211);
      if(tmp1212 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1212, 0.5);
      }
      tmp1214 = sqrt(tmp1212);
    }
    tmp1216 = tmp1214;
  }
  else
  {
    tmp1216 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3855]] /* vrNordic_g18.UsPu variable */) = tmp1216;
  threadData->lastEquationSolved = 15309;
}
/*
equation index: 15310
type: SIMPLE_ASSIGN
vrNordic_g18.dU.y = vrNordic_g18.const1.k - vrNordic_g18.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3859]] /* vrNordic_g18.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5475]] /* vrNordic_g18.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3855]] /* vrNordic_g18.UsPu variable */);
  threadData->lastEquationSolved = 15310;
}
/*
equation index: 15311
type: SIMPLE_ASSIGN
vrNordic_g18.add.y = vrNordic_g18.add.k1 * vrNordic_g18.dU.y + vrNordic_g18.add.k2 * vrNordic_g18.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5472]] /* vrNordic_g18.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3859]] /* vrNordic_g18.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5473]] /* vrNordic_g18.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3873]] /* vrNordic_g18.limiter.y variable */));
  threadData->lastEquationSolved = 15311;
}
/*
equation index: 15312
type: SIMPLE_ASSIGN
vrNordic_g18.switch.y = if vrNordic_g18.greaterEqualThreshold.y then vrNordic_g18.gain1.y else vrNordic_g18.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3876]] /* vrNordic_g18.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1066]] /* vrNordic_g18.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3863]] /* vrNordic_g18.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */));
  threadData->lastEquationSolved = 15312;
}
/*
equation index: 15313
type: SIMPLE_ASSIGN
vrNordic_g18.min1.y = if vrNordic_g18.switch.y < vrNordic_g18.add.y then vrNordic_g18.switch.y else vrNordic_g18.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15313};
  modelica_boolean tmp1217;
  modelica_real tmp1218;
  modelica_real tmp1219;
  tmp1218 = 1.0;
  tmp1219 = 1.0;
  relationhysteresis(data, &tmp1217, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3876]] /* vrNordic_g18.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */), tmp1218, tmp1219, 500, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3874]] /* vrNordic_g18.min1.y variable */) = (tmp1217?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3876]] /* vrNordic_g18.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */));
  threadData->lastEquationSolved = 15313;
}
/*
equation index: 15314
type: SIMPLE_ASSIGN
vrNordic_g18.kMulDU.y = vrNordic_g18.kMulDU.k * vrNordic_g18.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3864]] /* vrNordic_g18.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5484]] /* vrNordic_g18.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3874]] /* vrNordic_g18.min1.y variable */));
  threadData->lastEquationSolved = 15314;
}
/*
equation index: 15315
type: SIMPLE_ASSIGN
$DAEres1204 = vrNordic_g18.leadLag.a_end * vrNordic_g18.kMulDU.y + (-vrNordic_g18.leadLag.a[2]) * vrNordic_g18.leadLag.x_scaled[1] - der(vrNordic_g18.leadLag.x_scaled[1]) * vrNordic_g18.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15315};
  (data->simulationInfo->daeModeData->residualVars[1204]) /* $DAEres1204 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5489]] /* vrNordic_g18.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3864]] /* vrNordic_g18.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5488]] /* vrNordic_g18.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* vrNordic_g18.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* der(vrNordic_g18.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5487]] /* vrNordic_g18.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15315;
}
/*
equation index: 15316
type: SIMPLE_ASSIGN
vrNordic_g18.leadLag.y = (vrNordic_g18.leadLag.bb[2] - vrNordic_g18.leadLag.d * vrNordic_g18.leadLag.a[2]) * vrNordic_g18.leadLag.x[1] + vrNordic_g18.leadLag.d * vrNordic_g18.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3866]] /* vrNordic_g18.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5493]] /* vrNordic_g18.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5494]] /* vrNordic_g18.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5488]] /* vrNordic_g18.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3865]] /* vrNordic_g18.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5494]] /* vrNordic_g18.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3864]] /* vrNordic_g18.kMulDU.y variable */));
  threadData->lastEquationSolved = 15316;
}
/*
equation index: 15317
type: SIMPLE_ASSIGN
vrNordic_g18.feedback1.y = vrNordic_g18.leadLag.y - vrNordic_g18.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3861]] /* vrNordic_g18.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3866]] /* vrNordic_g18.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15317;
}
/*
equation index: 15318
type: SIMPLE_ASSIGN
vrNordic_g18.gain.y = vrNordic_g18.gain.k * vrNordic_g18.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5481]] /* vrNordic_g18.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3861]] /* vrNordic_g18.feedback1.y variable */));
  threadData->lastEquationSolved = 15318;
}
/*
equation index: 15319
type: SIMPLE_ASSIGN
$DAEres1205 = (if vrNordic_g18.limIntegrator.y < vrNordic_g18.limIntegrator.outMin and vrNordic_g18.limIntegrator.k * vrNordic_g18.gain.y < 0.0 or vrNordic_g18.limIntegrator.y > vrNordic_g18.limIntegrator.outMax and vrNordic_g18.limIntegrator.k * vrNordic_g18.gain.y > 0.0 then 0.0 else vrNordic_g18.limIntegrator.k * vrNordic_g18.gain.y) - der(vrNordic_g18.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15319};
  modelica_boolean tmp1220;
  modelica_real tmp1221;
  modelica_real tmp1222;
  modelica_boolean tmp1223;
  modelica_real tmp1224;
  modelica_real tmp1225;
  modelica_boolean tmp1226;
  modelica_real tmp1227;
  modelica_real tmp1228;
  modelica_boolean tmp1229;
  modelica_real tmp1230;
  modelica_real tmp1231;
  tmp1221 = 1.0;
  tmp1222 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5526]] /* vrNordic_g18.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1220, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5526]] /* vrNordic_g18.limIntegrator.outMin PARAM */), tmp1221, tmp1222, 504, Less, LessZC);
  tmp1224 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */))) * (1.0);
  tmp1225 = 0.0;
  relationhysteresis(data, &tmp1223, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)), 0.0, tmp1224, tmp1225, 505, Less, LessZC);
  tmp1227 = 1.0;
  tmp1228 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5525]] /* vrNordic_g18.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1226, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5525]] /* vrNordic_g18.limIntegrator.outMax PARAM */), tmp1227, tmp1228, 506, Greater, GreaterZC);
  tmp1230 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */))) * (1.0);
  tmp1231 = 0.0;
  relationhysteresis(data, &tmp1229, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)), 0.0, tmp1230, tmp1231, 507, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1205]) /* $DAEres1205 DAE_RESIDUAL_VAR */ = (((tmp1220 && tmp1223) || (tmp1226 && tmp1229))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* der(vrNordic_g18.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15319;
}
/*
equation index: 15320
type: SIMPLE_ASSIGN
g18.iStatorPu.re = if g18.running.value then g18.rTfoPu * g18.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* g18.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* g18.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15320;
}
/*
equation index: 15321
type: SIMPLE_ASSIGN
g18.sStatorPu.re = if g18.running.value then g18.uStatorPu.re * g18.iStatorPu.re + g18.uStatorPu.im * g18.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1828]] /* g18.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15321;
}
/*
equation index: 15322
type: SIMPLE_ASSIGN
g18.sStatorPu.im = if g18.running.value then g18.uStatorPu.im * g18.iStatorPu.re - g18.uStatorPu.re * g18.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* g18.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15322;
}
/*
equation index: 15323
type: SIMPLE_ASSIGN
g18.QStatorPu = if g18.running.value then -g18.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* g18.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* g18.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15323;
}
/*
equation index: 15324
type: SIMPLE_ASSIGN
g18.QStatorPuQNom = if g18.running.value then 100.0 * g18.QStatorPu / g18.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1805]] /* g18.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* g18.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* g18.QNomAlt PARAM */),"g18.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15324;
}
/*
equation index: 15325
type: SIMPLE_ASSIGN
g18.IStatorPu = if g18.running.value then if g18.iStatorPu.re == 0.0 and g18.iStatorPu.im == 0.0 then 0.0 else (g18.iStatorPu.re ^ 2.0 + g18.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15325};
  modelica_real tmp1232;
  modelica_real tmp1233;
  modelica_real tmp1234;
  modelica_boolean tmp1235;
  modelica_real tmp1236;
  modelica_boolean tmp1237;
  modelica_real tmp1238;
  tmp1237 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[538]] /* g18.running.value DISCRETE */);
  if(tmp1237)
  {
    tmp1235 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */) == 0.0));
    if(tmp1235)
    {
      tmp1236 = 0.0;
    }
    else
    {
      tmp1232 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */);
      tmp1233 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */);
      tmp1234 = (tmp1232 * tmp1232) + (tmp1233 * tmp1233);
      if(tmp1234 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1234, 0.5);
      }
      tmp1236 = sqrt(tmp1234);
    }
    tmp1238 = tmp1236;
  }
  else
  {
    tmp1238 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* g18.IStatorPu variable */) = tmp1238;
  threadData->lastEquationSolved = 15325;
}
/*
equation index: 15326
type: SIMPLE_ASSIGN
$whenCondition13 = not pre(g17.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15326};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[34]] /* $whenCondition13 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[534] /* g17.running.value DISCRETE */));
  threadData->lastEquationSolved = 15326;
}
/*
equation index: 15327
type: WHEN

when {} then
  g17.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15327};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[34]] /* $whenCondition13 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[34] /* $whenCondition13 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15327;
}
/*
equation index: 15329
type: SIMPLE_ASSIGN
$whenCondition15 = not g17.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15329};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[56]] /* $whenCondition15 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */));
  threadData->lastEquationSolved = 15329;
}
/*
equation index: 15330
type: SIMPLE_ASSIGN
$whenCondition14 = g17.running.value and not pre(g17.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15330};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[45]] /* $whenCondition14 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[534] /* g17.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15330;
}
/*
equation index: 15331
type: WHEN

when {$whenCondition15} then
  g17.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15331};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[56]] /* $whenCondition15 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[56] /* $whenCondition15 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[33]] /* g17.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[45]] /* $whenCondition14 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[45] /* $whenCondition14 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[33]] /* g17.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15331;
}
/*
equation index: 15333
type: SIMPLE_ASSIGN
g17.converter.u = Integer(g17.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15333};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[32]] /* g17.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[33]] /* g17.state DISCRETE */)));
  threadData->lastEquationSolved = 15333;
}
/*
equation index: 15334
type: SIMPLE_ASSIGN
g17.genState = (*Real*)(g17.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* g17.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[32]] /* g17.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15334;
}
/*
equation index: 15335
type: SIMPLE_ASSIGN
$DAEres123 = if g17.running.value then der(g17.theta) - 314.1592653589793 * (g17.omegaPu - omegaCOI) else der(g17.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15335};
  (data->simulationInfo->daeModeData->residualVars[123]) /* $DAEres123 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* der(g17.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* der(g17.theta) STATE_DER */));
  threadData->lastEquationSolved = 15335;
}
/*
equation index: 15336
type: SIMPLE_ASSIGN
g17.cmPu = if g17.running.value then g17.PmPu / g17.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1762]] /* g17.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1755]] /* g17.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */),"g17.omegaPu"):0.0);
  threadData->lastEquationSolved = 15336;
}
/*
equation index: 15337
type: SIMPLE_ASSIGN
g17.ufPu = if g17.running.value then vrNordic_g17.limIntegrator.y * g17.Kuf * g17.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* g17.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1856]] /* g17.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15337;
}
/*
equation index: 15338
type: SIMPLE_ASSIGN
$DAEres192 = if g17.running.value then g17.mqsPu - g17.MqPPu / (1.0 + g17.mq * g17.lambdaAirGapPu ^ g17.nq) else g17.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15338};
  modelica_real tmp1239;
  modelica_real tmp1240;
  modelica_real tmp1241;
  modelica_real tmp1242;
  modelica_real tmp1243;
  modelica_real tmp1244;
  modelica_real tmp1245;
  modelica_boolean tmp1246;
  modelica_real tmp1247;
  tmp1246 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp1246)
  {
    tmp1239 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* g17.lambdaAirGapPu variable */);
    tmp1240 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* g17.nq PARAM */);
    if(tmp1239 < 0.0 && tmp1240 != 0.0)
    {
      tmp1242 = modf(tmp1240, &tmp1243);
      
      if(tmp1242 > 0.5)
      {
        tmp1242 -= 1.0;
        tmp1243 += 1.0;
      }
      else if(tmp1242 < -0.5)
      {
        tmp1242 += 1.0;
        tmp1243 -= 1.0;
      }
      
      if(fabs(tmp1242) < 1e-10)
        tmp1241 = pow(tmp1239, tmp1243);
      else
      {
        tmp1245 = modf(1.0/tmp1240, &tmp1244);
        if(tmp1245 > 0.5)
        {
          tmp1245 -= 1.0;
          tmp1244 += 1.0;
        }
        else if(tmp1245 < -0.5)
        {
          tmp1245 += 1.0;
          tmp1244 -= 1.0;
        }
        if(fabs(tmp1245) < 1e-10 && ((unsigned long)tmp1244 & 1))
        {
          tmp1241 = -pow(-tmp1239, tmp1242)*pow(tmp1239, tmp1243);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1239, tmp1240);
        }
      }
    }
    else
    {
      tmp1241 = pow(tmp1239, tmp1240);
    }
    if(isnan(tmp1241) || isinf(tmp1241))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1239, tmp1240);
    }
    tmp1247 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* g17.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* g17.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* g17.mq PARAM */)) * (tmp1241),"1.0 + g17.mq * g17.lambdaAirGapPu ^ g17.nq"));
  }
  else
  {
    tmp1247 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* g17.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[192]) /* $DAEres192 DAE_RESIDUAL_VAR */ = tmp1247;
  threadData->lastEquationSolved = 15338;
}
/*
equation index: 15339
type: SIMPLE_ASSIGN
$DAEres193 = if g17.running.value then g17.mdsPu - g17.MdPPu / (1.0 + g17.md * g17.lambdaAirGapPu ^ g17.nd) else g17.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15339};
  modelica_real tmp1248;
  modelica_real tmp1249;
  modelica_real tmp1250;
  modelica_real tmp1251;
  modelica_real tmp1252;
  modelica_real tmp1253;
  modelica_real tmp1254;
  modelica_boolean tmp1255;
  modelica_real tmp1256;
  tmp1255 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp1255)
  {
    tmp1248 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* g17.lambdaAirGapPu variable */);
    tmp1249 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1924]] /* g17.nd PARAM */);
    if(tmp1248 < 0.0 && tmp1249 != 0.0)
    {
      tmp1251 = modf(tmp1249, &tmp1252);
      
      if(tmp1251 > 0.5)
      {
        tmp1251 -= 1.0;
        tmp1252 += 1.0;
      }
      else if(tmp1251 < -0.5)
      {
        tmp1251 += 1.0;
        tmp1252 -= 1.0;
      }
      
      if(fabs(tmp1251) < 1e-10)
        tmp1250 = pow(tmp1248, tmp1252);
      else
      {
        tmp1254 = modf(1.0/tmp1249, &tmp1253);
        if(tmp1254 > 0.5)
        {
          tmp1254 -= 1.0;
          tmp1253 += 1.0;
        }
        else if(tmp1254 < -0.5)
        {
          tmp1254 += 1.0;
          tmp1253 -= 1.0;
        }
        if(fabs(tmp1254) < 1e-10 && ((unsigned long)tmp1253 & 1))
        {
          tmp1250 = -pow(-tmp1248, tmp1251)*pow(tmp1248, tmp1252);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1248, tmp1249);
        }
      }
    }
    else
    {
      tmp1250 = pow(tmp1248, tmp1249);
    }
    if(isnan(tmp1250) || isinf(tmp1250))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1248, tmp1249);
    }
    tmp1256 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* g17.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1872]] /* g17.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* g17.md PARAM */)) * (tmp1250),"1.0 + g17.md * g17.lambdaAirGapPu ^ g17.nd"));
  }
  else
  {
    tmp1256 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* g17.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[193]) /* $DAEres193 DAE_RESIDUAL_VAR */ = tmp1256;
  threadData->lastEquationSolved = 15339;
}
/*
equation index: 15340
type: SIMPLE_ASSIGN
$DAEres194 = if g17.running.value then g17.lambdaAirGapPu - sqrt(g17.lambdaADPu ^ 2.0 + g17.lambdaAQPu ^ 2.0) else g17.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15340};
  modelica_real tmp1257;
  modelica_real tmp1258;
  modelica_real tmp1259;
  modelica_boolean tmp1260;
  modelica_real tmp1261;
  tmp1260 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp1260)
  {
    tmp1257 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1773]] /* g17.lambdaADPu variable */);
    tmp1258 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* g17.lambdaAQPu variable */);
    tmp1259 = (tmp1257 * tmp1257) + (tmp1258 * tmp1258);
    if(!(tmp1259 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g17.lambdaADPu ^ 2.0 + g17.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1259);
      }
    }
    tmp1261 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* g17.lambdaAirGapPu variable */) - sqrt(tmp1259);
  }
  else
  {
    tmp1261 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* g17.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[194]) /* $DAEres194 DAE_RESIDUAL_VAR */ = tmp1261;
  threadData->lastEquationSolved = 15340;
}
/*
equation index: 15341
type: SIMPLE_ASSIGN
$DAEres195 = if g17.running.value then g17.cos2Eta - (g17.lambdaADPu / g17.lambdaAirGapPu) ^ 2.0 else g17.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15341};
  modelica_real tmp1262;
  modelica_boolean tmp1263;
  modelica_real tmp1264;
  tmp1263 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp1263)
  {
    tmp1262 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1773]] /* g17.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* g17.lambdaAirGapPu variable */),"g17.lambdaAirGapPu");
    tmp1264 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1763]] /* g17.cos2Eta variable */) - ((tmp1262 * tmp1262));
  }
  else
  {
    tmp1264 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1763]] /* g17.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[195]) /* $DAEres195 DAE_RESIDUAL_VAR */ = tmp1264;
  threadData->lastEquationSolved = 15341;
}
/*
equation index: 15342
type: SIMPLE_ASSIGN
$DAEres196 = if g17.running.value then g17.miPu - (g17.mdsPu * g17.cos2Eta + g17.mqsPu * g17.sin2Eta) else g17.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15342};
  (data->simulationInfo->daeModeData->residualVars[196]) /* $DAEres196 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* g17.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* g17.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1763]] /* g17.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* g17.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1783]] /* g17.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* g17.miPu variable */));
  threadData->lastEquationSolved = 15342;
}
/*
equation index: 15343
type: SIMPLE_ASSIGN
$DAEres197 = if g17.running.value then g17.MqSatPPu - (g17.miPu - g17.MsalPu * g17.cos2Eta) else g17.MqSatPPu - g17.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15343};
  (data->simulationInfo->daeModeData->residualVars[197]) /* $DAEres197 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* g17.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1882]] /* g17.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1763]] /* g17.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* g17.MqPPu PARAM */));
  threadData->lastEquationSolved = 15343;
}
/*
equation index: 15344
type: SIMPLE_ASSIGN
$DAEres198 = if g17.running.value then g17.lambdaQ2Pu - (g17.MqSatPPu * (g17.iqPu + g17.iQ1Pu) + (g17.MqSatPPu + g17.LQ2PPu) * g17.iQ2Pu) else g17.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15344};
  (data->simulationInfo->daeModeData->residualVars[198]) /* $DAEres198 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* g17.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* g17.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1859]] /* g17.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* g17.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* g17.iQ2Pu variable */));
  threadData->lastEquationSolved = 15344;
}
/*
equation index: 15345
type: SIMPLE_ASSIGN
$DAEres199 = if g17.running.value then g17.lambdaQ1Pu - (g17.MqSatPPu * g17.iqPu + (g17.MqSatPPu + g17.LQ1PPu) * g17.iQ1Pu + g17.MqSatPPu * g17.iQ2Pu) else g17.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15345};
  (data->simulationInfo->daeModeData->residualVars[199]) /* $DAEres199 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* g17.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1858]] /* g17.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* g17.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* g17.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* g17.iQ1Pu variable */));
  threadData->lastEquationSolved = 15345;
}
/*
equation index: 15346
type: SIMPLE_ASSIGN
$DAEres200 = if g17.running.value then g17.lambdaAQPu - g17.MqSatPPu * (g17.iqPu + g17.iQ1Pu + g17.iQ2Pu) else g17.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15346};
  (data->simulationInfo->daeModeData->residualVars[200]) /* $DAEres200 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* g17.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* g17.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* g17.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* g17.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15346;
}
/*
equation index: 15347
type: SIMPLE_ASSIGN
$DAEres201 = if g17.running.value then g17.sin2Eta - (g17.lambdaAQPu / g17.lambdaAirGapPu) ^ 2.0 else g17.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15347};
  modelica_real tmp1265;
  modelica_boolean tmp1266;
  modelica_real tmp1267;
  tmp1266 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp1266)
  {
    tmp1265 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* g17.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* g17.lambdaAirGapPu variable */),"g17.lambdaAirGapPu");
    tmp1267 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1783]] /* g17.sin2Eta variable */) - ((tmp1265 * tmp1265));
  }
  else
  {
    tmp1267 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1783]] /* g17.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[201]) /* $DAEres201 DAE_RESIDUAL_VAR */ = tmp1267;
  threadData->lastEquationSolved = 15347;
}
/*
equation index: 15348
type: SIMPLE_ASSIGN
$DAEres202 = if g17.running.value then g17.MdSatPPu - (g17.miPu + g17.MsalPu * g17.sin2Eta) else g17.MdSatPPu - g17.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15348};
  (data->simulationInfo->daeModeData->residualVars[202]) /* $DAEres202 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* g17.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1882]] /* g17.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1783]] /* g17.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1872]] /* g17.MdPPu PARAM */));
  threadData->lastEquationSolved = 15348;
}
/*
equation index: 15349
type: SIMPLE_ASSIGN
$DAEres203 = if g17.running.value then g17.lambdaqPu - ((g17.MqSatPPu + g17.LqPPu + g17.XTfoPu) * g17.iqPu + g17.MqSatPPu * (g17.iQ1Pu + g17.iQ2Pu)) else g17.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15349};
  (data->simulationInfo->daeModeData->residualVars[203]) /* $DAEres203 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1777]] /* g17.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1871]] /* g17.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1917]] /* g17.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* g17.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* g17.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* g17.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1765]] /* g17.iDPu variable */));
  threadData->lastEquationSolved = 15349;
}
/*
equation index: 15350
type: SIMPLE_ASSIGN
$DAEres204 = if g17.running.value then g17.lambdaADPu - g17.MdSatPPu * (g17.idPu + g17.ifPu + g17.iDPu) else g17.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15350};
  (data->simulationInfo->daeModeData->residualVars[204]) /* $DAEres204 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1773]] /* g17.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1765]] /* g17.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1773]] /* g17.lambdaADPu variable */));
  threadData->lastEquationSolved = 15350;
}
/*
equation index: 15351
type: SIMPLE_ASSIGN
$DAEres205 = if g17.running.value then g17.uqPu - ((g17.RaPPu + g17.RTfoPu) * g17.iqPu + g17.omegaPu * g17.lambdadPu) else g17.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15351};
  (data->simulationInfo->daeModeData->residualVars[205]) /* $DAEres205 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* g17.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1898]] /* g17.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* g17.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1776]] /* g17.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1777]] /* g17.lambdaqPu variable */));
  threadData->lastEquationSolved = 15351;
}
/*
equation index: 15352
type: SIMPLE_ASSIGN
$DAEres206 = if g17.running.value then g17.udPu - ((g17.RaPPu + g17.RTfoPu) * g17.idPu - g17.omegaPu * g17.lambdaqPu) else g17.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15352};
  (data->simulationInfo->daeModeData->residualVars[206]) /* $DAEres206 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* g17.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1898]] /* g17.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* g17.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1777]] /* g17.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1776]] /* g17.lambdadPu variable */));
  threadData->lastEquationSolved = 15352;
}
/*
equation index: 15353
type: SIMPLE_ASSIGN
$DAEres207 = if g17.running.value then g17.lambdaDPu - (g17.MdSatPPu * g17.idPu + (g17.MdSatPPu + g17.MrcPPu) * g17.ifPu + (g17.MdSatPPu + g17.LDPPu + g17.MrcPPu) * g17.iDPu) else g17.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15353};
  (data->simulationInfo->daeModeData->residualVars[207]) /* $DAEres207 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* g17.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* g17.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1857]] /* g17.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* g17.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1765]] /* g17.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */));
  threadData->lastEquationSolved = 15353;
}
/*
equation index: 15354
type: SIMPLE_ASSIGN
$DAEres208 = if g17.running.value then g17.lambdadPu - ((g17.MdSatPPu + g17.LdPPu + g17.XTfoPu) * g17.idPu + g17.MdSatPPu * (g17.ifPu + g17.iDPu)) else g17.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15354};
  (data->simulationInfo->daeModeData->residualVars[208]) /* $DAEres208 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1776]] /* g17.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* g17.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1917]] /* g17.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1765]] /* g17.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */));
  threadData->lastEquationSolved = 15354;
}
/*
equation index: 15355
type: SIMPLE_ASSIGN
$DAEres209 = if g17.running.value then g17.lambdafPu - (g17.MdSatPPu * g17.idPu + (g17.MdSatPPu + g17.LfPPu + g17.MrcPPu) * g17.ifPu + (g17.MdSatPPu + g17.MrcPPu) * g17.iDPu) else g17.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15355};
  (data->simulationInfo->daeModeData->residualVars[209]) /* $DAEres209 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* g17.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1870]] /* g17.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* g17.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* g17.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* g17.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1765]] /* g17.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */));
  threadData->lastEquationSolved = 15355;
}
/*
equation index: 15356
type: SIMPLE_ASSIGN
$DAEres210 = if g17.running.value then 100.0 * g17.terminal.i.re / g17.SNom - (sin(g17.theta) * g17.idPu + cos(g17.theta) * g17.iqPu) else g17.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15356};
  (data->simulationInfo->daeModeData->residualVars[210]) /* $DAEres210 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */),"g17.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* g17.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* g17.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */));
  threadData->lastEquationSolved = 15356;
}
/*
equation index: 15357
type: SIMPLE_ASSIGN
$DAEres211 = if g17.running.value then 100.0 * g17.terminal.i.im / g17.SNom - (sin(g17.theta) * g17.iqPu - cos(g17.theta) * g17.idPu) else g17.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15357};
  (data->simulationInfo->daeModeData->residualVars[211]) /* $DAEres211 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */),"g17.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* g17.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* g17.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */));
  threadData->lastEquationSolved = 15357;
}
/*
equation index: 15358
type: SIMPLE_ASSIGN
$DAEres1167 = if g17.running.value then g17.terminal.V.im - (sin(g17.theta) * g17.uqPu - cos(g17.theta) * g17.udPu) else g17.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15358};
  (data->simulationInfo->daeModeData->residualVars[1167]) /* $DAEres1167 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* g17.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* g17.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* g17.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* g17.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* g17.uqPu variable */));
  threadData->lastEquationSolved = 15358;
}
/*
equation index: 15359
type: SIMPLE_ASSIGN
$DAEres1168 = if g17.running.value then g17.terminal.V.re - (sin(g17.theta) * g17.udPu + cos(g17.theta) * g17.uqPu) else g17.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15359};
  (data->simulationInfo->daeModeData->residualVars[1168]) /* $DAEres1168 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* g17.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* g17.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* g17.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* g17.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* g17.udPu variable */));
  threadData->lastEquationSolved = 15359;
}
/*
equation index: 15360
type: SIMPLE_ASSIGN
g17.uPu.re = if g17.running.value then g17.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* g17.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15360;
}
/*
equation index: 15361
type: SIMPLE_ASSIGN
g17.iStatorPu.im = if g17.running.value then g17.rTfoPu * g17.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15361;
}
/*
equation index: 15362
type: SIMPLE_ASSIGN
vrNordic_g17.IrPu = if g17.running.value then g17.RfPPu * g17.ifPu / (g17.rTfoPu * g17.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3830]] /* vrNordic_g17.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1899]] /* g17.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1856]] /* g17.Kuf PARAM */)),"g17.rTfoPu * g17.Kuf")):0.0);
  threadData->lastEquationSolved = 15362;
}
/*
equation index: 15363
type: SIMPLE_ASSIGN
vrNordic_g17.dIf.y = vrNordic_g17.IrPu - vrNordic_g17.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3830]] /* vrNordic_g17.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5397]] /* vrNordic_g17.const2.k PARAM */);
  threadData->lastEquationSolved = 15363;
}
/*
equation index: 15364
type: SIMPLE_ASSIGN
vrNordic_g17.gain1.y = vrNordic_g17.gain1.k * vrNordic_g17.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3839]] /* vrNordic_g17.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5403]] /* vrNordic_g17.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */));
  threadData->lastEquationSolved = 15364;
}
/*
equation index: 15365
type: SIMPLE_ASSIGN
vrNordic_g17.overExcitationLimitation.y = if vrNordic_g17.dIf.y < -0.1 then -1.0 else if vrNordic_g17.dIf.y < 0.0 then 0.0 else if vrNordic_g17.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g17.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15365};
  modelica_boolean tmp1268;
  modelica_real tmp1269;
  modelica_real tmp1270;
  modelica_boolean tmp1271;
  modelica_real tmp1272;
  modelica_real tmp1273;
  modelica_boolean tmp1274;
  modelica_boolean tmp1275;
  modelica_real tmp1276;
  modelica_boolean tmp1277;
  modelica_real tmp1278;
  tmp1269 = 1.0;
  tmp1270 = 0.1;
  relationhysteresis(data, &tmp1268, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */), -0.1, tmp1269, tmp1270, 486, Less, LessZC);
  tmp1277 = (modelica_boolean)tmp1268;
  if(tmp1277)
  {
    tmp1278 = -1.0;
  }
  else
  {
    tmp1272 = 1.0;
    tmp1273 = 0.0;
    relationhysteresis(data, &tmp1271, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */), 0.0, tmp1272, tmp1273, 487, Less, LessZC);
    tmp1275 = (modelica_boolean)tmp1271;
    if(tmp1275)
    {
      tmp1276 = 0.0;
    }
    else
    {
      tmp1274 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5451]] /* vrNordic_g17.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1276 = (tmp1274?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */));
    }
    tmp1278 = tmp1276;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */) = tmp1278;
  threadData->lastEquationSolved = 15365;
}
/*
equation index: 15366
type: SIMPLE_ASSIGN
$DAEres1206 = (if vrNordic_g17.timer.y < vrNordic_g17.timer.outMin and vrNordic_g17.timer.k * vrNordic_g17.overExcitationLimitation.y < 0.0 or vrNordic_g17.timer.y > vrNordic_g17.timer.outMax and vrNordic_g17.timer.k * vrNordic_g17.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g17.timer.k * vrNordic_g17.overExcitationLimitation.y) - der(vrNordic_g17.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15366};
  modelica_boolean tmp1279;
  modelica_real tmp1280;
  modelica_real tmp1281;
  modelica_boolean tmp1282;
  modelica_real tmp1283;
  modelica_real tmp1284;
  modelica_boolean tmp1285;
  modelica_real tmp1286;
  modelica_real tmp1287;
  modelica_boolean tmp1288;
  modelica_real tmp1289;
  modelica_real tmp1290;
  tmp1280 = 1.0;
  tmp1281 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5461]] /* vrNordic_g17.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1279, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5461]] /* vrNordic_g17.timer.outMin PARAM */), tmp1280, tmp1281, 492, Less, LessZC);
  tmp1283 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */))) * (1.0);
  tmp1284 = 0.0;
  relationhysteresis(data, &tmp1282, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)), 0.0, tmp1283, tmp1284, 493, Less, LessZC);
  tmp1286 = 1.0;
  tmp1287 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5460]] /* vrNordic_g17.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1285, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5460]] /* vrNordic_g17.timer.outMax PARAM */), tmp1286, tmp1287, 494, Greater, GreaterZC);
  tmp1289 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */))) * (1.0);
  tmp1290 = 0.0;
  relationhysteresis(data, &tmp1288, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)), 0.0, tmp1289, tmp1290, 495, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1206]) /* $DAEres1206 DAE_RESIDUAL_VAR */ = (((tmp1279 && tmp1282) || (tmp1285 && tmp1288))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* der(vrNordic_g17.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15366;
}
/*
equation index: 15367
type: SIMPLE_ASSIGN
$DAEres1207 = if g17.running.value then g17.ufPu - (g17.RfPPu * g17.ifPu + 0.0031830988618379067 * der(g17.lambdafPu)) else der(g17.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15367};
  (data->simulationInfo->daeModeData->residualVars[1207]) /* $DAEres1207 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* g17.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1899]] /* g17.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* g17.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* der(g17.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* der(g17.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15367;
}
/*
equation index: 15368
type: SIMPLE_ASSIGN
$DAEres1208 = if g17.running.value then (-g17.RQ1PPu) * g17.iQ1Pu - 0.0031830988618379067 * der(g17.lambdaQ1Pu) else der(g17.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15368};
  (data->simulationInfo->daeModeData->residualVars[1208]) /* $DAEres1208 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* g17.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* g17.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* der(g17.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* der(g17.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15368;
}
/*
equation index: 15369
type: SIMPLE_ASSIGN
$DAEres1209 = if g17.running.value then (-g17.RQ2PPu) * g17.iQ2Pu - 0.0031830988618379067 * der(g17.lambdaQ2Pu) else der(g17.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15369};
  (data->simulationInfo->daeModeData->residualVars[1209]) /* $DAEres1209 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* g17.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1767]] /* g17.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* der(g17.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* der(g17.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15369;
}
/*
equation index: 15370
type: SIMPLE_ASSIGN
$DAEres1210 = if g17.running.value then (-g17.RDPPu) * g17.iDPu - 0.0031830988618379067 * der(g17.lambdaDPu) else der(g17.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15370};
  (data->simulationInfo->daeModeData->residualVars[1210]) /* $DAEres1210 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1893]] /* g17.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1765]] /* g17.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* der(g17.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* der(g17.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15370;
}
/*
equation index: 15371
type: SIMPLE_ASSIGN
g17.cePu = if g17.running.value then g17.lambdaqPu * g17.idPu - g17.lambdadPu * g17.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* g17.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1777]] /* g17.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1770]] /* g17.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1776]] /* g17.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* g17.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15371;
}
/*
equation index: 15372
type: SIMPLE_ASSIGN
g17.PePu = if g17.running.value then g17.cePu * g17.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* g17.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* g17.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15372;
}
/*
equation index: 15373
type: SIMPLE_ASSIGN
$DAEres1211 = if g17.running.value then 2.0 * g17.H * der(g17.omegaPu) - (g17.cmPu * g17.PNomTurb / g17.SNom + g17.DPu * (omegaCOI - g17.omegaPu) - g17.cePu) else der(g17.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15373};
  (data->simulationInfo->daeModeData->residualVars[1211]) /* $DAEres1211 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* g17.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* der(g17.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1762]] /* g17.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1886]] /* g17.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */),"g17.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* g17.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* g17.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* g17.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* der(g17.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15373;
}
/*
equation index: 15374
type: SIMPLE_ASSIGN
g17.thetaInternal.value = if g17.running.value then Modelica.Math.atan3(g17.udPu, g17.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* g17.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* g17.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* g17.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15374;
}
/*
equation index: 15375
type: SIMPLE_ASSIGN
g17.uStatorPu.re = if g17.running.value then (g17.terminal.V.re + (-100.0) * (g17.terminal.i.re * g17.RTfoPu - g17.terminal.i.im * g17.XTfoPu) / g17.SNom) / g17.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* g17.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1917]] /* g17.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */),"g17.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */),"g17.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15375;
}
/*
equation index: 15376
type: SIMPLE_ASSIGN
g17.iStatorPu.re = if g17.running.value then g17.rTfoPu * g17.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15376;
}
/*
equation index: 15377
type: SIMPLE_ASSIGN
g17.IStatorPu = if g17.running.value then if g17.iStatorPu.re == 0.0 and g17.iStatorPu.im == 0.0 then 0.0 else (g17.iStatorPu.re ^ 2.0 + g17.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15377};
  modelica_real tmp1291;
  modelica_real tmp1292;
  modelica_real tmp1293;
  modelica_boolean tmp1294;
  modelica_real tmp1295;
  modelica_boolean tmp1296;
  modelica_real tmp1297;
  tmp1296 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp1296)
  {
    tmp1294 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */) == 0.0));
    if(tmp1294)
    {
      tmp1295 = 0.0;
    }
    else
    {
      tmp1291 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */);
      tmp1292 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */);
      tmp1293 = (tmp1291 * tmp1291) + (tmp1292 * tmp1292);
      if(tmp1293 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1293, 0.5);
      }
      tmp1295 = sqrt(tmp1293);
    }
    tmp1297 = tmp1295;
  }
  else
  {
    tmp1297 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* g17.IStatorPu variable */) = tmp1297;
  threadData->lastEquationSolved = 15377;
}
/*
equation index: 15378
type: SIMPLE_ASSIGN
g17.uPu.im = if g17.running.value then g17.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* g17.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15378;
}
/*
equation index: 15379
type: SIMPLE_ASSIGN
g17.UPu = if g17.running.value then (g17.terminal.V.re ^ 2.0 + g17.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15379};
  modelica_real tmp1298;
  modelica_real tmp1299;
  modelica_real tmp1300;
  modelica_boolean tmp1301;
  modelica_real tmp1302;
  tmp1301 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp1301)
  {
    tmp1298 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */);
    tmp1299 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */);
    tmp1300 = (tmp1298 * tmp1298) + (tmp1299 * tmp1299);
    if(tmp1300 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1300, 0.5);
    }
    tmp1302 = sqrt(tmp1300);
  }
  else
  {
    tmp1302 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1760]] /* g17.UPu variable */) = tmp1302;
  threadData->lastEquationSolved = 15379;
}
/*
equation index: 15380
type: SIMPLE_ASSIGN
goverNordic_g17.PGenPu = if g17.running.value then (-g17.terminal.V.re) * g17.terminal.i.re - g17.terminal.V.im * g17.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2220]] /* goverNordic_g17.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15380;
}
/*
equation index: 15381
type: SIMPLE_ASSIGN
goverNordic_g17.perUnitP.y = goverNordic_g17.perUnitP.k * goverNordic_g17.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2236]] /* goverNordic_g17.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2862]] /* goverNordic_g17.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2220]] /* goverNordic_g17.PGenPu variable */));
  threadData->lastEquationSolved = 15381;
}
/*
equation index: 15382
type: SIMPLE_ASSIGN
$DAEres1374 = goverNordic_g17.firstOrder1.k * goverNordic_g17.perUnitP.y + (-goverNordic_g17.firstOrder1.y) - der(goverNordic_g17.firstOrder1.y) * goverNordic_g17.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15382};
  (data->simulationInfo->daeModeData->residualVars[1374]) /* $DAEres1374 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* goverNordic_g17.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2236]] /* goverNordic_g17.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* goverNordic_g17.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* der(goverNordic_g17.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* goverNordic_g17.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15382;
}
/*
equation index: 15383
type: SIMPLE_ASSIGN
g17.PGen = if g17.running.value then 100.0 * goverNordic_g17.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1753]] /* g17.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2220]] /* goverNordic_g17.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15383;
}
/*
equation index: 15384
type: SIMPLE_ASSIGN
g17.QGenPu = if g17.running.value then g17.terminal.V.re * g17.terminal.i.im - g17.terminal.V.im * g17.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1757]] /* g17.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15384;
}
/*
equation index: 15385
type: SIMPLE_ASSIGN
g17.QGen = if g17.running.value then 100.0 * g17.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1756]] /* g17.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1757]] /* g17.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15385;
}
/*
equation index: 15386
type: SIMPLE_ASSIGN
g17.uStatorPu.im = if g17.running.value then (g17.terminal.V.im + (-100.0) * (g17.terminal.i.re * g17.XTfoPu + g17.terminal.i.im * g17.RTfoPu) / g17.SNom) / g17.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* g17.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1917]] /* g17.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* g17.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* g17.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* g17.SNom PARAM */),"g17.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* g17.rTfoPu PARAM */),"g17.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15386;
}
/*
equation index: 15387
type: SIMPLE_ASSIGN
g17.sStatorPu.re = if g17.running.value then g17.uStatorPu.re * g17.iStatorPu.re + g17.uStatorPu.im * g17.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1782]] /* g17.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15387;
}
/*
equation index: 15388
type: SIMPLE_ASSIGN
g17.sStatorPu.im = if g17.running.value then g17.uStatorPu.im * g17.iStatorPu.re - g17.uStatorPu.re * g17.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1781]] /* g17.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15388;
}
/*
equation index: 15389
type: SIMPLE_ASSIGN
g17.QStatorPu = if g17.running.value then -g17.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* g17.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1781]] /* g17.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15389;
}
/*
equation index: 15390
type: SIMPLE_ASSIGN
g17.QStatorPuQNom = if g17.running.value then 100.0 * g17.QStatorPu / g17.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* g17.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* g17.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1890]] /* g17.QNomAlt PARAM */),"g17.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15390;
}
/*
equation index: 15391
type: SIMPLE_ASSIGN
vrNordic_g17.UsPu = if g17.running.value then if g17.uStatorPu.re == 0.0 and g17.uStatorPu.im == 0.0 then 0.0 else (g17.uStatorPu.re ^ 2.0 + g17.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15391};
  modelica_real tmp1303;
  modelica_real tmp1304;
  modelica_real tmp1305;
  modelica_boolean tmp1306;
  modelica_real tmp1307;
  modelica_boolean tmp1308;
  modelica_real tmp1309;
  tmp1308 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[534]] /* g17.running.value DISCRETE */);
  if(tmp1308)
  {
    tmp1306 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */) == 0.0));
    if(tmp1306)
    {
      tmp1307 = 0.0;
    }
    else
    {
      tmp1303 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */);
      tmp1304 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */);
      tmp1305 = (tmp1303 * tmp1303) + (tmp1304 * tmp1304);
      if(tmp1305 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1305, 0.5);
      }
      tmp1307 = sqrt(tmp1305);
    }
    tmp1309 = tmp1307;
  }
  else
  {
    tmp1309 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3831]] /* vrNordic_g17.UsPu variable */) = tmp1309;
  threadData->lastEquationSolved = 15391;
}
/*
equation index: 15392
type: SIMPLE_ASSIGN
vrNordic_g17.dU.y = vrNordic_g17.const1.k - vrNordic_g17.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3835]] /* vrNordic_g17.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5396]] /* vrNordic_g17.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3831]] /* vrNordic_g17.UsPu variable */);
  threadData->lastEquationSolved = 15392;
}
/*
equation index: 15393
type: SIMPLE_ASSIGN
vrNordic_g17.add.y = vrNordic_g17.add.k1 * vrNordic_g17.dU.y + vrNordic_g17.add.k2 * vrNordic_g17.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5393]] /* vrNordic_g17.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3835]] /* vrNordic_g17.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5394]] /* vrNordic_g17.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3849]] /* vrNordic_g17.limiter.y variable */));
  threadData->lastEquationSolved = 15393;
}
/*
equation index: 15394
type: SIMPLE_ASSIGN
vrNordic_g17.switch.y = if vrNordic_g17.greaterEqualThreshold.y then vrNordic_g17.gain1.y else vrNordic_g17.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* vrNordic_g17.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1063]] /* vrNordic_g17.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3839]] /* vrNordic_g17.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */));
  threadData->lastEquationSolved = 15394;
}
/*
equation index: 15395
type: SIMPLE_ASSIGN
vrNordic_g17.min1.y = if vrNordic_g17.switch.y < vrNordic_g17.add.y then vrNordic_g17.switch.y else vrNordic_g17.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15395};
  modelica_boolean tmp1310;
  modelica_real tmp1311;
  modelica_real tmp1312;
  tmp1311 = 1.0;
  tmp1312 = 1.0;
  relationhysteresis(data, &tmp1310, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* vrNordic_g17.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */), tmp1311, tmp1312, 484, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3850]] /* vrNordic_g17.min1.y variable */) = (tmp1310?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* vrNordic_g17.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */));
  threadData->lastEquationSolved = 15395;
}
/*
equation index: 15396
type: SIMPLE_ASSIGN
vrNordic_g17.kMulDU.y = vrNordic_g17.kMulDU.k * vrNordic_g17.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3840]] /* vrNordic_g17.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5405]] /* vrNordic_g17.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3850]] /* vrNordic_g17.min1.y variable */));
  threadData->lastEquationSolved = 15396;
}
/*
equation index: 15397
type: SIMPLE_ASSIGN
$DAEres1375 = vrNordic_g17.leadLag.a_end * vrNordic_g17.kMulDU.y + (-vrNordic_g17.leadLag.a[2]) * vrNordic_g17.leadLag.x_scaled[1] - der(vrNordic_g17.leadLag.x_scaled[1]) * vrNordic_g17.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15397};
  (data->simulationInfo->daeModeData->residualVars[1375]) /* $DAEres1375 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5410]] /* vrNordic_g17.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3840]] /* vrNordic_g17.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5409]] /* vrNordic_g17.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* vrNordic_g17.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* der(vrNordic_g17.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5408]] /* vrNordic_g17.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15397;
}
/*
equation index: 15398
type: SIMPLE_ASSIGN
vrNordic_g17.leadLag.y = (vrNordic_g17.leadLag.bb[2] - vrNordic_g17.leadLag.d * vrNordic_g17.leadLag.a[2]) * vrNordic_g17.leadLag.x[1] + vrNordic_g17.leadLag.d * vrNordic_g17.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3842]] /* vrNordic_g17.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5414]] /* vrNordic_g17.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5415]] /* vrNordic_g17.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5409]] /* vrNordic_g17.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3841]] /* vrNordic_g17.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5415]] /* vrNordic_g17.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3840]] /* vrNordic_g17.kMulDU.y variable */));
  threadData->lastEquationSolved = 15398;
}
/*
equation index: 15399
type: SIMPLE_ASSIGN
vrNordic_g17.feedback1.y = vrNordic_g17.leadLag.y - vrNordic_g17.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3837]] /* vrNordic_g17.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3842]] /* vrNordic_g17.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15399;
}
/*
equation index: 15400
type: SIMPLE_ASSIGN
vrNordic_g17.gain.y = vrNordic_g17.gain.k * vrNordic_g17.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5402]] /* vrNordic_g17.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3837]] /* vrNordic_g17.feedback1.y variable */));
  threadData->lastEquationSolved = 15400;
}
/*
equation index: 15401
type: SIMPLE_ASSIGN
$DAEres1376 = (if vrNordic_g17.limIntegrator.y < vrNordic_g17.limIntegrator.outMin and vrNordic_g17.limIntegrator.k * vrNordic_g17.gain.y < 0.0 or vrNordic_g17.limIntegrator.y > vrNordic_g17.limIntegrator.outMax and vrNordic_g17.limIntegrator.k * vrNordic_g17.gain.y > 0.0 then 0.0 else vrNordic_g17.limIntegrator.k * vrNordic_g17.gain.y) - der(vrNordic_g17.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15401};
  modelica_boolean tmp1313;
  modelica_real tmp1314;
  modelica_real tmp1315;
  modelica_boolean tmp1316;
  modelica_real tmp1317;
  modelica_real tmp1318;
  modelica_boolean tmp1319;
  modelica_real tmp1320;
  modelica_real tmp1321;
  modelica_boolean tmp1322;
  modelica_real tmp1323;
  modelica_real tmp1324;
  tmp1314 = 1.0;
  tmp1315 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5447]] /* vrNordic_g17.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1313, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5447]] /* vrNordic_g17.limIntegrator.outMin PARAM */), tmp1314, tmp1315, 488, Less, LessZC);
  tmp1317 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */))) * (1.0);
  tmp1318 = 0.0;
  relationhysteresis(data, &tmp1316, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)), 0.0, tmp1317, tmp1318, 489, Less, LessZC);
  tmp1320 = 1.0;
  tmp1321 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5446]] /* vrNordic_g17.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1319, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5446]] /* vrNordic_g17.limIntegrator.outMax PARAM */), tmp1320, tmp1321, 490, Greater, GreaterZC);
  tmp1323 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */))) * (1.0);
  tmp1324 = 0.0;
  relationhysteresis(data, &tmp1322, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)), 0.0, tmp1323, tmp1324, 491, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1376]) /* $DAEres1376 DAE_RESIDUAL_VAR */ = (((tmp1313 && tmp1316) || (tmp1319 && tmp1322))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* der(vrNordic_g17.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15401;
}
/*
equation index: 15402
type: SIMPLE_ASSIGN
$whenCondition16 = not pre(g16.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15402};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[67]] /* $whenCondition16 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[530] /* g16.running.value DISCRETE */));
  threadData->lastEquationSolved = 15402;
}
/*
equation index: 15403
type: WHEN

when {} then
  g16.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15403};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[67]] /* $whenCondition16 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[67] /* $whenCondition16 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15403;
}
/*
equation index: 15405
type: SIMPLE_ASSIGN
$whenCondition18 = not g16.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15405};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[89]] /* $whenCondition18 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */));
  threadData->lastEquationSolved = 15405;
}
/*
equation index: 15406
type: SIMPLE_ASSIGN
$whenCondition17 = g16.running.value and not pre(g16.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15406};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[78]] /* $whenCondition17 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[530] /* g16.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15406;
}
/*
equation index: 15407
type: WHEN

when {$whenCondition18} then
  g16.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15407};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[89]] /* $whenCondition18 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[89] /* $whenCondition18 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* g16.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[78]] /* $whenCondition17 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[78] /* $whenCondition17 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* g16.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15407;
}
/*
equation index: 15409
type: SIMPLE_ASSIGN
g16.converter.u = Integer(g16.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15409};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[30]] /* g16.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* g16.state DISCRETE */)));
  threadData->lastEquationSolved = 15409;
}
/*
equation index: 15410
type: SIMPLE_ASSIGN
g16.genState = (*Real*)(g16.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1718]] /* g16.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[30]] /* g16.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15410;
}
/*
equation index: 15411
type: SIMPLE_ASSIGN
$DAEres124 = if g16.running.value then der(g16.theta) - 314.1592653589793 * (g16.omegaPu - omegaCOI) else der(g16.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15411};
  (data->simulationInfo->daeModeData->residualVars[124]) /* $DAEres124 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* der(g16.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* der(g16.theta) STATE_DER */));
  threadData->lastEquationSolved = 15411;
}
/*
equation index: 15412
type: SIMPLE_ASSIGN
g16.cmPu = if g16.running.value then g16.PmPu / g16.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15412};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1716]] /* g16.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* g16.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */),"g16.omegaPu"):0.0);
  threadData->lastEquationSolved = 15412;
}
/*
equation index: 15413
type: SIMPLE_ASSIGN
g16.ufPu = if g16.running.value then vrNordic_g16.limIntegrator.y * g16.Kuf * g16.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* g16.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1753]] /* g16.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15413;
}
/*
equation index: 15414
type: SIMPLE_ASSIGN
$DAEres937 = if g16.running.value then g16.mqsPu - g16.MqPPu / (1.0 + g16.mq * g16.lambdaAirGapPu ^ g16.nq) else g16.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15414};
  modelica_real tmp1325;
  modelica_real tmp1326;
  modelica_real tmp1327;
  modelica_real tmp1328;
  modelica_real tmp1329;
  modelica_real tmp1330;
  modelica_real tmp1331;
  modelica_boolean tmp1332;
  modelica_real tmp1333;
  tmp1332 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp1332)
  {
    tmp1325 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* g16.lambdaAirGapPu variable */);
    tmp1326 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1822]] /* g16.nq PARAM */);
    if(tmp1325 < 0.0 && tmp1326 != 0.0)
    {
      tmp1328 = modf(tmp1326, &tmp1329);
      
      if(tmp1328 > 0.5)
      {
        tmp1328 -= 1.0;
        tmp1329 += 1.0;
      }
      else if(tmp1328 < -0.5)
      {
        tmp1328 += 1.0;
        tmp1329 -= 1.0;
      }
      
      if(fabs(tmp1328) < 1e-10)
        tmp1327 = pow(tmp1325, tmp1329);
      else
      {
        tmp1331 = modf(1.0/tmp1326, &tmp1330);
        if(tmp1331 > 0.5)
        {
          tmp1331 -= 1.0;
          tmp1330 += 1.0;
        }
        else if(tmp1331 < -0.5)
        {
          tmp1331 += 1.0;
          tmp1330 -= 1.0;
        }
        if(fabs(tmp1331) < 1e-10 && ((unsigned long)tmp1330 & 1))
        {
          tmp1327 = -pow(-tmp1325, tmp1328)*pow(tmp1325, tmp1329);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1325, tmp1326);
        }
      }
    }
    else
    {
      tmp1327 = pow(tmp1325, tmp1326);
    }
    if(isnan(tmp1327) || isinf(tmp1327))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1325, tmp1326);
    }
    tmp1333 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1734]] /* g16.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1775]] /* g16.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1820]] /* g16.mq PARAM */)) * (tmp1327),"1.0 + g16.mq * g16.lambdaAirGapPu ^ g16.nq"));
  }
  else
  {
    tmp1333 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1734]] /* g16.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[937]) /* $DAEres937 DAE_RESIDUAL_VAR */ = tmp1333;
  threadData->lastEquationSolved = 15414;
}
/*
equation index: 15415
type: SIMPLE_ASSIGN
$DAEres938 = if g16.running.value then g16.cos2Eta - (g16.lambdaADPu / g16.lambdaAirGapPu) ^ 2.0 else g16.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15415};
  modelica_real tmp1334;
  modelica_boolean tmp1335;
  modelica_real tmp1336;
  tmp1335 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp1335)
  {
    tmp1334 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1727]] /* g16.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* g16.lambdaAirGapPu variable */),"g16.lambdaAirGapPu");
    tmp1336 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* g16.cos2Eta variable */) - ((tmp1334 * tmp1334));
  }
  else
  {
    tmp1336 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* g16.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[938]) /* $DAEres938 DAE_RESIDUAL_VAR */ = tmp1336;
  threadData->lastEquationSolved = 15415;
}
/*
equation index: 15416
type: SIMPLE_ASSIGN
$DAEres939 = if g16.running.value then g16.lambdaAirGapPu - sqrt(g16.lambdaADPu ^ 2.0 + g16.lambdaAQPu ^ 2.0) else g16.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15416};
  modelica_real tmp1337;
  modelica_real tmp1338;
  modelica_real tmp1339;
  modelica_boolean tmp1340;
  modelica_real tmp1341;
  tmp1340 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp1340)
  {
    tmp1337 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1727]] /* g16.lambdaADPu variable */);
    tmp1338 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* g16.lambdaAQPu variable */);
    tmp1339 = (tmp1337 * tmp1337) + (tmp1338 * tmp1338);
    if(!(tmp1339 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g16.lambdaADPu ^ 2.0 + g16.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1339);
      }
    }
    tmp1341 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* g16.lambdaAirGapPu variable */) - sqrt(tmp1339);
  }
  else
  {
    tmp1341 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* g16.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[939]) /* $DAEres939 DAE_RESIDUAL_VAR */ = tmp1341;
  threadData->lastEquationSolved = 15416;
}
/*
equation index: 15417
type: SIMPLE_ASSIGN
$DAEres940 = if g16.running.value then g16.mdsPu - g16.MdPPu / (1.0 + g16.md * g16.lambdaAirGapPu ^ g16.nd) else g16.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15417};
  modelica_real tmp1342;
  modelica_real tmp1343;
  modelica_real tmp1344;
  modelica_real tmp1345;
  modelica_real tmp1346;
  modelica_real tmp1347;
  modelica_real tmp1348;
  modelica_boolean tmp1349;
  modelica_real tmp1350;
  tmp1349 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp1349)
  {
    tmp1342 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* g16.lambdaAirGapPu variable */);
    tmp1343 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1821]] /* g16.nd PARAM */);
    if(tmp1342 < 0.0 && tmp1343 != 0.0)
    {
      tmp1345 = modf(tmp1343, &tmp1346);
      
      if(tmp1345 > 0.5)
      {
        tmp1345 -= 1.0;
        tmp1346 += 1.0;
      }
      else if(tmp1345 < -0.5)
      {
        tmp1345 += 1.0;
        tmp1346 -= 1.0;
      }
      
      if(fabs(tmp1345) < 1e-10)
        tmp1344 = pow(tmp1342, tmp1346);
      else
      {
        tmp1348 = modf(1.0/tmp1343, &tmp1347);
        if(tmp1348 > 0.5)
        {
          tmp1348 -= 1.0;
          tmp1347 += 1.0;
        }
        else if(tmp1348 < -0.5)
        {
          tmp1348 += 1.0;
          tmp1347 -= 1.0;
        }
        if(fabs(tmp1348) < 1e-10 && ((unsigned long)tmp1347 & 1))
        {
          tmp1344 = -pow(-tmp1342, tmp1345)*pow(tmp1342, tmp1346);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1342, tmp1343);
        }
      }
    }
    else
    {
      tmp1344 = pow(tmp1342, tmp1343);
    }
    if(isnan(tmp1344) || isinf(tmp1344))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1342, tmp1343);
    }
    tmp1350 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* g16.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1769]] /* g16.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1819]] /* g16.md PARAM */)) * (tmp1344),"1.0 + g16.md * g16.lambdaAirGapPu ^ g16.nd"));
  }
  else
  {
    tmp1350 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* g16.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[940]) /* $DAEres940 DAE_RESIDUAL_VAR */ = tmp1350;
  threadData->lastEquationSolved = 15417;
}
/*
equation index: 15418
type: SIMPLE_ASSIGN
$DAEres941 = if g16.running.value then g16.miPu - (g16.mdsPu * g16.cos2Eta + g16.mqsPu * g16.sin2Eta) else g16.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15418};
  (data->simulationInfo->daeModeData->residualVars[941]) /* $DAEres941 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* g16.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* g16.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* g16.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1734]] /* g16.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* g16.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* g16.miPu variable */));
  threadData->lastEquationSolved = 15418;
}
/*
equation index: 15419
type: SIMPLE_ASSIGN
$DAEres942 = if g16.running.value then g16.MqSatPPu - (g16.miPu - g16.MsalPu * g16.cos2Eta) else g16.MqSatPPu - g16.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15419};
  (data->simulationInfo->daeModeData->residualVars[942]) /* $DAEres942 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* g16.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* g16.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* g16.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1775]] /* g16.MqPPu PARAM */));
  threadData->lastEquationSolved = 15419;
}
/*
equation index: 15420
type: SIMPLE_ASSIGN
$DAEres943 = if g16.running.value then g16.lambdaQ2Pu - (g16.MqSatPPu * (g16.iqPu + g16.iQ1Pu) + (g16.MqSatPPu + g16.LQ2PPu) * g16.iQ2Pu) else g16.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15420};
  (data->simulationInfo->daeModeData->residualVars[943]) /* $DAEres943 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* g16.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* g16.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1756]] /* g16.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* g16.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* g16.iQ2Pu variable */));
  threadData->lastEquationSolved = 15420;
}
/*
equation index: 15421
type: SIMPLE_ASSIGN
$DAEres944 = if g16.running.value then g16.lambdaQ1Pu - (g16.MqSatPPu * g16.iqPu + (g16.MqSatPPu + g16.LQ1PPu) * g16.iQ1Pu + g16.MqSatPPu * g16.iQ2Pu) else g16.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15421};
  (data->simulationInfo->daeModeData->residualVars[944]) /* $DAEres944 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* g16.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1755]] /* g16.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* g16.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* g16.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* g16.iQ1Pu variable */));
  threadData->lastEquationSolved = 15421;
}
/*
equation index: 15422
type: SIMPLE_ASSIGN
$DAEres945 = if g16.running.value then g16.lambdaAQPu - g16.MqSatPPu * (g16.iqPu + g16.iQ1Pu + g16.iQ2Pu) else g16.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15422};
  (data->simulationInfo->daeModeData->residualVars[945]) /* $DAEres945 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* g16.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* g16.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* g16.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* g16.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15422;
}
/*
equation index: 15423
type: SIMPLE_ASSIGN
$DAEres946 = if g16.running.value then g16.sin2Eta - (g16.lambdaAQPu / g16.lambdaAirGapPu) ^ 2.0 else g16.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15423};
  modelica_real tmp1351;
  modelica_boolean tmp1352;
  modelica_real tmp1353;
  tmp1352 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp1352)
  {
    tmp1351 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* g16.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* g16.lambdaAirGapPu variable */),"g16.lambdaAirGapPu");
    tmp1353 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* g16.sin2Eta variable */) - ((tmp1351 * tmp1351));
  }
  else
  {
    tmp1353 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* g16.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[946]) /* $DAEres946 DAE_RESIDUAL_VAR */ = tmp1353;
  threadData->lastEquationSolved = 15423;
}
/*
equation index: 15424
type: SIMPLE_ASSIGN
$DAEres947 = if g16.running.value then g16.MdSatPPu - (g16.miPu + g16.MsalPu * g16.sin2Eta) else g16.MdSatPPu - g16.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15424};
  (data->simulationInfo->daeModeData->residualVars[947]) /* $DAEres947 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* g16.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* g16.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* g16.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1769]] /* g16.MdPPu PARAM */));
  threadData->lastEquationSolved = 15424;
}
/*
equation index: 15425
type: SIMPLE_ASSIGN
$DAEres948 = if g16.running.value then g16.uqPu - ((g16.RaPPu + g16.RTfoPu) * g16.iqPu + g16.omegaPu * g16.lambdadPu) else g16.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15425};
  (data->simulationInfo->daeModeData->residualVars[948]) /* $DAEres948 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* g16.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* g16.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* g16.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1730]] /* g16.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* g16.lambdaqPu variable */));
  threadData->lastEquationSolved = 15425;
}
/*
equation index: 15426
type: SIMPLE_ASSIGN
$DAEres949 = if g16.running.value then g16.udPu - ((g16.RaPPu + g16.RTfoPu) * g16.idPu - g16.omegaPu * g16.lambdaqPu) else g16.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15426};
  (data->simulationInfo->daeModeData->residualVars[949]) /* $DAEres949 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* g16.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* g16.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* g16.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* g16.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1730]] /* g16.lambdadPu variable */));
  threadData->lastEquationSolved = 15426;
}
/*
equation index: 15427
type: SIMPLE_ASSIGN
$DAEres950 = if g16.running.value then g16.lambdaqPu - ((g16.MqSatPPu + g16.LqPPu + g16.XTfoPu) * g16.iqPu + g16.MqSatPPu * (g16.iQ1Pu + g16.iQ2Pu)) else g16.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15427};
  (data->simulationInfo->daeModeData->residualVars[950]) /* $DAEres950 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* g16.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1768]] /* g16.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1814]] /* g16.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* g16.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* g16.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* g16.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* g16.iDPu variable */));
  threadData->lastEquationSolved = 15427;
}
/*
equation index: 15428
type: SIMPLE_ASSIGN
$DAEres951 = if g16.running.value then g16.lambdaADPu - g16.MdSatPPu * (g16.idPu + g16.ifPu + g16.iDPu) else g16.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15428};
  (data->simulationInfo->daeModeData->residualVars[951]) /* $DAEres951 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1727]] /* g16.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* g16.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1727]] /* g16.lambdaADPu variable */));
  threadData->lastEquationSolved = 15428;
}
/*
equation index: 15429
type: SIMPLE_ASSIGN
$DAEres952 = if g16.running.value then g16.lambdaDPu - (g16.MdSatPPu * g16.idPu + (g16.MdSatPPu + g16.MrcPPu) * g16.ifPu + (g16.MdSatPPu + g16.LDPPu + g16.MrcPPu) * g16.iDPu) else g16.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15429};
  (data->simulationInfo->daeModeData->residualVars[952]) /* $DAEres952 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* g16.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* g16.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1754]] /* g16.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* g16.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* g16.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */));
  threadData->lastEquationSolved = 15429;
}
/*
equation index: 15430
type: SIMPLE_ASSIGN
$DAEres953 = if g16.running.value then g16.lambdadPu - ((g16.MdSatPPu + g16.LdPPu + g16.XTfoPu) * g16.idPu + g16.MdSatPPu * (g16.ifPu + g16.iDPu)) else g16.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15430};
  (data->simulationInfo->daeModeData->residualVars[953]) /* $DAEres953 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1730]] /* g16.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1766]] /* g16.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1814]] /* g16.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* g16.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */));
  threadData->lastEquationSolved = 15430;
}
/*
equation index: 15431
type: SIMPLE_ASSIGN
$DAEres954 = if g16.running.value then g16.lambdafPu - (g16.MdSatPPu * g16.idPu + (g16.MdSatPPu + g16.LfPPu + g16.MrcPPu) * g16.ifPu + (g16.MdSatPPu + g16.MrcPPu) * g16.iDPu) else g16.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15431};
  (data->simulationInfo->daeModeData->residualVars[954]) /* $DAEres954 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* g16.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* g16.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* g16.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1705]] /* g16.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* g16.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* g16.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */));
  threadData->lastEquationSolved = 15431;
}
/*
equation index: 15432
type: SIMPLE_ASSIGN
$DAEres955 = if g16.running.value then 100.0 * g16.terminal.i.re / g16.SNom - (sin(g16.theta) * g16.idPu + cos(g16.theta) * g16.iqPu) else g16.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15432};
  (data->simulationInfo->daeModeData->residualVars[955]) /* $DAEres955 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */),"g16.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* g16.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* g16.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */));
  threadData->lastEquationSolved = 15432;
}
/*
equation index: 15433
type: SIMPLE_ASSIGN
$DAEres956 = if g16.running.value then 100.0 * g16.terminal.i.im / g16.SNom - (sin(g16.theta) * g16.iqPu - cos(g16.theta) * g16.idPu) else g16.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15433};
  (data->simulationInfo->daeModeData->residualVars[956]) /* $DAEres956 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */),"g16.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* g16.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* g16.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */));
  threadData->lastEquationSolved = 15433;
}
/*
equation index: 15434
type: SIMPLE_ASSIGN
$DAEres960 = if g16.running.value then g16.terminal.V.re - (sin(g16.theta) * g16.udPu + cos(g16.theta) * g16.uqPu) else g16.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15434};
  (data->simulationInfo->daeModeData->residualVars[960]) /* $DAEres960 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* g16.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* g16.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* g16.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* g16.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* g16.udPu variable */));
  threadData->lastEquationSolved = 15434;
}
/*
equation index: 15435
type: SIMPLE_ASSIGN
$DAEres961 = if g16.running.value then g16.terminal.V.im - (sin(g16.theta) * g16.uqPu - cos(g16.theta) * g16.udPu) else g16.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15435};
  (data->simulationInfo->daeModeData->residualVars[961]) /* $DAEres961 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* g16.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* g16.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* g16.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* g16.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* g16.uqPu variable */));
  threadData->lastEquationSolved = 15435;
}
/*
equation index: 15436
type: SIMPLE_ASSIGN
g16.uPu.im = if g16.running.value then g16.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1743]] /* g16.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15436;
}
/*
equation index: 15437
type: SIMPLE_ASSIGN
g16.iStatorPu.im = if g16.running.value then g16.rTfoPu * g16.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15437;
}
/*
equation index: 15438
type: SIMPLE_ASSIGN
$DAEres1329 = if g16.running.value then (-g16.RQ2PPu) * g16.iQ2Pu - 0.0031830988618379067 * der(g16.lambdaQ2Pu) else der(g16.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15438};
  (data->simulationInfo->daeModeData->residualVars[1329]) /* $DAEres1329 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1792]] /* g16.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* g16.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* der(g16.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* der(g16.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15438;
}
/*
equation index: 15439
type: SIMPLE_ASSIGN
$DAEres1330 = if g16.running.value then (-g16.RQ1PPu) * g16.iQ1Pu - 0.0031830988618379067 * der(g16.lambdaQ1Pu) else der(g16.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15439};
  (data->simulationInfo->daeModeData->residualVars[1330]) /* $DAEres1330 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1791]] /* g16.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* g16.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* der(g16.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* der(g16.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15439;
}
/*
equation index: 15440
type: SIMPLE_ASSIGN
vrNordic_g16.IrPu = if g16.running.value then g16.RfPPu * g16.ifPu / (g16.rTfoPu * g16.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3806]] /* vrNordic_g16.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* g16.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1753]] /* g16.Kuf PARAM */)),"g16.rTfoPu * g16.Kuf")):0.0);
  threadData->lastEquationSolved = 15440;
}
/*
equation index: 15441
type: SIMPLE_ASSIGN
vrNordic_g16.dIf.y = vrNordic_g16.IrPu - vrNordic_g16.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15441};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3806]] /* vrNordic_g16.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5318]] /* vrNordic_g16.const2.k PARAM */);
  threadData->lastEquationSolved = 15441;
}
/*
equation index: 15442
type: SIMPLE_ASSIGN
vrNordic_g16.gain1.y = vrNordic_g16.gain1.k * vrNordic_g16.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3815]] /* vrNordic_g16.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5324]] /* vrNordic_g16.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */));
  threadData->lastEquationSolved = 15442;
}
/*
equation index: 15443
type: SIMPLE_ASSIGN
vrNordic_g16.overExcitationLimitation.y = if vrNordic_g16.dIf.y < -0.1 then -1.0 else if vrNordic_g16.dIf.y < 0.0 then 0.0 else if vrNordic_g16.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g16.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15443};
  modelica_boolean tmp1354;
  modelica_real tmp1355;
  modelica_real tmp1356;
  modelica_boolean tmp1357;
  modelica_real tmp1358;
  modelica_real tmp1359;
  modelica_boolean tmp1360;
  modelica_boolean tmp1361;
  modelica_real tmp1362;
  modelica_boolean tmp1363;
  modelica_real tmp1364;
  tmp1355 = 1.0;
  tmp1356 = 0.1;
  relationhysteresis(data, &tmp1354, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */), -0.1, tmp1355, tmp1356, 470, Less, LessZC);
  tmp1363 = (modelica_boolean)tmp1354;
  if(tmp1363)
  {
    tmp1364 = -1.0;
  }
  else
  {
    tmp1358 = 1.0;
    tmp1359 = 0.0;
    relationhysteresis(data, &tmp1357, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */), 0.0, tmp1358, tmp1359, 471, Less, LessZC);
    tmp1361 = (modelica_boolean)tmp1357;
    if(tmp1361)
    {
      tmp1362 = 0.0;
    }
    else
    {
      tmp1360 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5372]] /* vrNordic_g16.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1362 = (tmp1360?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */));
    }
    tmp1364 = tmp1362;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */) = tmp1364;
  threadData->lastEquationSolved = 15443;
}
/*
equation index: 15444
type: SIMPLE_ASSIGN
$DAEres1331 = (if vrNordic_g16.timer.y < vrNordic_g16.timer.outMin and vrNordic_g16.timer.k * vrNordic_g16.overExcitationLimitation.y < 0.0 or vrNordic_g16.timer.y > vrNordic_g16.timer.outMax and vrNordic_g16.timer.k * vrNordic_g16.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g16.timer.k * vrNordic_g16.overExcitationLimitation.y) - der(vrNordic_g16.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15444};
  modelica_boolean tmp1365;
  modelica_real tmp1366;
  modelica_real tmp1367;
  modelica_boolean tmp1368;
  modelica_real tmp1369;
  modelica_real tmp1370;
  modelica_boolean tmp1371;
  modelica_real tmp1372;
  modelica_real tmp1373;
  modelica_boolean tmp1374;
  modelica_real tmp1375;
  modelica_real tmp1376;
  tmp1366 = 1.0;
  tmp1367 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5382]] /* vrNordic_g16.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1365, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5382]] /* vrNordic_g16.timer.outMin PARAM */), tmp1366, tmp1367, 476, Less, LessZC);
  tmp1369 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */))) * (1.0);
  tmp1370 = 0.0;
  relationhysteresis(data, &tmp1368, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)), 0.0, tmp1369, tmp1370, 477, Less, LessZC);
  tmp1372 = 1.0;
  tmp1373 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5381]] /* vrNordic_g16.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1371, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5381]] /* vrNordic_g16.timer.outMax PARAM */), tmp1372, tmp1373, 478, Greater, GreaterZC);
  tmp1375 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */))) * (1.0);
  tmp1376 = 0.0;
  relationhysteresis(data, &tmp1374, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)), 0.0, tmp1375, tmp1376, 479, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1331]) /* $DAEres1331 DAE_RESIDUAL_VAR */ = (((tmp1365 && tmp1368) || (tmp1371 && tmp1374))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* der(vrNordic_g16.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15444;
}
/*
equation index: 15445
type: SIMPLE_ASSIGN
$DAEres1332 = if g16.running.value then (-g16.RDPPu) * g16.iDPu - 0.0031830988618379067 * der(g16.lambdaDPu) else der(g16.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15445};
  (data->simulationInfo->daeModeData->residualVars[1332]) /* $DAEres1332 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1790]] /* g16.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* g16.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* der(g16.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* der(g16.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15445;
}
/*
equation index: 15446
type: SIMPLE_ASSIGN
g16.cePu = if g16.running.value then g16.lambdaqPu * g16.idPu - g16.lambdadPu * g16.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1715]] /* g16.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* g16.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1724]] /* g16.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1730]] /* g16.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1726]] /* g16.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15446;
}
/*
equation index: 15447
type: SIMPLE_ASSIGN
g16.PePu = if g16.running.value then g16.cePu * g16.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1708]] /* g16.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1715]] /* g16.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15447;
}
/*
equation index: 15448
type: SIMPLE_ASSIGN
$DAEres1333 = if g16.running.value then 2.0 * g16.H * der(g16.omegaPu) - (g16.cmPu * g16.PNomTurb / g16.SNom + g16.DPu * (omegaCOI - g16.omegaPu) - g16.cePu) else der(g16.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15448};
  (data->simulationInfo->daeModeData->residualVars[1333]) /* $DAEres1333 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* g16.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* der(g16.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1716]] /* g16.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* g16.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */),"g16.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1745]] /* g16.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* g16.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1715]] /* g16.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* der(g16.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15448;
}
/*
equation index: 15449
type: SIMPLE_ASSIGN
g16.thetaInternal.value = if g16.running.value then Modelica.Math.atan3(g16.udPu, g16.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1742]] /* g16.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* g16.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* g16.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15449;
}
/*
equation index: 15450
type: SIMPLE_ASSIGN
$DAEres1334 = if g16.running.value then g16.ufPu - (g16.RfPPu * g16.ifPu + 0.0031830988618379067 * der(g16.lambdafPu)) else der(g16.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15450};
  (data->simulationInfo->daeModeData->residualVars[1334]) /* $DAEres1334 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* g16.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* g16.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1725]] /* g16.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* der(g16.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* der(g16.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15450;
}
/*
equation index: 15451
type: SIMPLE_ASSIGN
g16.uStatorPu.im = if g16.running.value then (g16.terminal.V.im + (-100.0) * (g16.terminal.i.re * g16.XTfoPu + g16.terminal.i.im * g16.RTfoPu) / g16.SNom) / g16.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1814]] /* g16.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* g16.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */),"g16.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */),"g16.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15451;
}
/*
equation index: 15452
type: SIMPLE_ASSIGN
g16.iStatorPu.re = if g16.running.value then g16.rTfoPu * g16.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15452;
}
/*
equation index: 15453
type: SIMPLE_ASSIGN
g16.IStatorPu = if g16.running.value then if g16.iStatorPu.re == 0.0 and g16.iStatorPu.im == 0.0 then 0.0 else (g16.iStatorPu.re ^ 2.0 + g16.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15453};
  modelica_real tmp1377;
  modelica_real tmp1378;
  modelica_real tmp1379;
  modelica_boolean tmp1380;
  modelica_real tmp1381;
  modelica_boolean tmp1382;
  modelica_real tmp1383;
  tmp1382 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp1382)
  {
    tmp1380 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */) == 0.0));
    if(tmp1380)
    {
      tmp1381 = 0.0;
    }
    else
    {
      tmp1377 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */);
      tmp1378 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */);
      tmp1379 = (tmp1377 * tmp1377) + (tmp1378 * tmp1378);
      if(tmp1379 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1379, 0.5);
      }
      tmp1381 = sqrt(tmp1379);
    }
    tmp1383 = tmp1381;
  }
  else
  {
    tmp1383 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1704]] /* g16.IStatorPu variable */) = tmp1383;
  threadData->lastEquationSolved = 15453;
}
/*
equation index: 15454
type: SIMPLE_ASSIGN
g16.uPu.re = if g16.running.value then g16.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* g16.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15454;
}
/*
equation index: 15455
type: SIMPLE_ASSIGN
g16.UPu = if g16.running.value then (g16.terminal.V.re ^ 2.0 + g16.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15455};
  modelica_real tmp1384;
  modelica_real tmp1385;
  modelica_real tmp1386;
  modelica_boolean tmp1387;
  modelica_real tmp1388;
  tmp1387 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp1387)
  {
    tmp1384 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */);
    tmp1385 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */);
    tmp1386 = (tmp1384 * tmp1384) + (tmp1385 * tmp1385);
    if(tmp1386 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1386, 0.5);
    }
    tmp1388 = sqrt(tmp1386);
  }
  else
  {
    tmp1388 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1714]] /* g16.UPu variable */) = tmp1388;
  threadData->lastEquationSolved = 15455;
}
/*
equation index: 15456
type: SIMPLE_ASSIGN
goverNordic_g16.PGenPu = if g16.running.value then (-g16.terminal.V.re) * g16.terminal.i.re - g16.terminal.V.im * g16.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2202]] /* goverNordic_g16.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15456;
}
/*
equation index: 15457
type: SIMPLE_ASSIGN
goverNordic_g16.perUnitP.y = goverNordic_g16.perUnitP.k * goverNordic_g16.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2218]] /* goverNordic_g16.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2826]] /* goverNordic_g16.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2202]] /* goverNordic_g16.PGenPu variable */));
  threadData->lastEquationSolved = 15457;
}
/*
equation index: 15458
type: SIMPLE_ASSIGN
$DAEres1335 = goverNordic_g16.firstOrder1.k * goverNordic_g16.perUnitP.y + (-goverNordic_g16.firstOrder1.y) - der(goverNordic_g16.firstOrder1.y) * goverNordic_g16.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15458};
  (data->simulationInfo->daeModeData->residualVars[1335]) /* $DAEres1335 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2804]] /* goverNordic_g16.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2218]] /* goverNordic_g16.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* goverNordic_g16.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* der(goverNordic_g16.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2803]] /* goverNordic_g16.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15458;
}
/*
equation index: 15459
type: SIMPLE_ASSIGN
g16.PGen = if g16.running.value then 100.0 * goverNordic_g16.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* g16.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2202]] /* goverNordic_g16.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15459;
}
/*
equation index: 15460
type: SIMPLE_ASSIGN
g16.QGenPu = if g16.running.value then g16.terminal.V.re * g16.terminal.i.im - g16.terminal.V.im * g16.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1711]] /* g16.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15460;
}
/*
equation index: 15461
type: SIMPLE_ASSIGN
g16.QGen = if g16.running.value then 100.0 * g16.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* g16.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1711]] /* g16.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15461;
}
/*
equation index: 15462
type: SIMPLE_ASSIGN
g16.uStatorPu.re = if g16.running.value then (g16.terminal.V.re + (-100.0) * (g16.terminal.i.re * g16.RTfoPu - g16.terminal.i.im * g16.XTfoPu) / g16.SNom) / g16.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* g16.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* g16.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* g16.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1814]] /* g16.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* g16.SNom PARAM */),"g16.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* g16.rTfoPu PARAM */),"g16.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15462;
}
/*
equation index: 15463
type: SIMPLE_ASSIGN
g16.sStatorPu.re = if g16.running.value then g16.uStatorPu.re * g16.iStatorPu.re + g16.uStatorPu.im * g16.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1736]] /* g16.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15463;
}
/*
equation index: 15464
type: SIMPLE_ASSIGN
g16.sStatorPu.im = if g16.running.value then g16.uStatorPu.im * g16.iStatorPu.re - g16.uStatorPu.re * g16.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1735]] /* g16.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15464;
}
/*
equation index: 15465
type: SIMPLE_ASSIGN
g16.QStatorPu = if g16.running.value then -g16.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15465};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1712]] /* g16.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1735]] /* g16.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15465;
}
/*
equation index: 15466
type: SIMPLE_ASSIGN
g16.QStatorPuQNom = if g16.running.value then 100.0 * g16.QStatorPu / g16.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1713]] /* g16.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1712]] /* g16.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1787]] /* g16.QNomAlt PARAM */),"g16.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15466;
}
/*
equation index: 15467
type: SIMPLE_ASSIGN
vrNordic_g16.UsPu = if g16.running.value then if g16.uStatorPu.re == 0.0 and g16.uStatorPu.im == 0.0 then 0.0 else (g16.uStatorPu.re ^ 2.0 + g16.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15467};
  modelica_real tmp1389;
  modelica_real tmp1390;
  modelica_real tmp1391;
  modelica_boolean tmp1392;
  modelica_real tmp1393;
  modelica_boolean tmp1394;
  modelica_real tmp1395;
  tmp1394 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[530]] /* g16.running.value DISCRETE */);
  if(tmp1394)
  {
    tmp1392 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */) == 0.0));
    if(tmp1392)
    {
      tmp1393 = 0.0;
    }
    else
    {
      tmp1389 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */);
      tmp1390 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */);
      tmp1391 = (tmp1389 * tmp1389) + (tmp1390 * tmp1390);
      if(tmp1391 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1391, 0.5);
      }
      tmp1393 = sqrt(tmp1391);
    }
    tmp1395 = tmp1393;
  }
  else
  {
    tmp1395 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3807]] /* vrNordic_g16.UsPu variable */) = tmp1395;
  threadData->lastEquationSolved = 15467;
}
/*
equation index: 15468
type: SIMPLE_ASSIGN
vrNordic_g16.dU.y = vrNordic_g16.const1.k - vrNordic_g16.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3811]] /* vrNordic_g16.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5317]] /* vrNordic_g16.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3807]] /* vrNordic_g16.UsPu variable */);
  threadData->lastEquationSolved = 15468;
}
/*
equation index: 15469
type: SIMPLE_ASSIGN
vrNordic_g16.add.y = vrNordic_g16.add.k1 * vrNordic_g16.dU.y + vrNordic_g16.add.k2 * vrNordic_g16.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5314]] /* vrNordic_g16.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3811]] /* vrNordic_g16.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5315]] /* vrNordic_g16.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3825]] /* vrNordic_g16.limiter.y variable */));
  threadData->lastEquationSolved = 15469;
}
/*
equation index: 15470
type: SIMPLE_ASSIGN
vrNordic_g16.switch.y = if vrNordic_g16.greaterEqualThreshold.y then vrNordic_g16.gain1.y else vrNordic_g16.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3828]] /* vrNordic_g16.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1060]] /* vrNordic_g16.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3815]] /* vrNordic_g16.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */));
  threadData->lastEquationSolved = 15470;
}
/*
equation index: 15471
type: SIMPLE_ASSIGN
vrNordic_g16.min1.y = if vrNordic_g16.switch.y < vrNordic_g16.add.y then vrNordic_g16.switch.y else vrNordic_g16.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15471};
  modelica_boolean tmp1396;
  modelica_real tmp1397;
  modelica_real tmp1398;
  tmp1397 = 1.0;
  tmp1398 = 1.0;
  relationhysteresis(data, &tmp1396, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3828]] /* vrNordic_g16.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */), tmp1397, tmp1398, 468, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3826]] /* vrNordic_g16.min1.y variable */) = (tmp1396?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3828]] /* vrNordic_g16.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */));
  threadData->lastEquationSolved = 15471;
}
/*
equation index: 15472
type: SIMPLE_ASSIGN
vrNordic_g16.kMulDU.y = vrNordic_g16.kMulDU.k * vrNordic_g16.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3816]] /* vrNordic_g16.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5326]] /* vrNordic_g16.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3826]] /* vrNordic_g16.min1.y variable */));
  threadData->lastEquationSolved = 15472;
}
/*
equation index: 15473
type: SIMPLE_ASSIGN
$DAEres1336 = vrNordic_g16.leadLag.a_end * vrNordic_g16.kMulDU.y + (-vrNordic_g16.leadLag.a[2]) * vrNordic_g16.leadLag.x_scaled[1] - der(vrNordic_g16.leadLag.x_scaled[1]) * vrNordic_g16.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15473};
  (data->simulationInfo->daeModeData->residualVars[1336]) /* $DAEres1336 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5331]] /* vrNordic_g16.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3816]] /* vrNordic_g16.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5330]] /* vrNordic_g16.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* vrNordic_g16.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* der(vrNordic_g16.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5329]] /* vrNordic_g16.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15473;
}
/*
equation index: 15474
type: SIMPLE_ASSIGN
vrNordic_g16.leadLag.y = (vrNordic_g16.leadLag.bb[2] - vrNordic_g16.leadLag.d * vrNordic_g16.leadLag.a[2]) * vrNordic_g16.leadLag.x[1] + vrNordic_g16.leadLag.d * vrNordic_g16.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3818]] /* vrNordic_g16.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5335]] /* vrNordic_g16.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5336]] /* vrNordic_g16.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5330]] /* vrNordic_g16.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3817]] /* vrNordic_g16.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5336]] /* vrNordic_g16.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3816]] /* vrNordic_g16.kMulDU.y variable */));
  threadData->lastEquationSolved = 15474;
}
/*
equation index: 15475
type: SIMPLE_ASSIGN
vrNordic_g16.feedback1.y = vrNordic_g16.leadLag.y - vrNordic_g16.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3813]] /* vrNordic_g16.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3818]] /* vrNordic_g16.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15475;
}
/*
equation index: 15476
type: SIMPLE_ASSIGN
vrNordic_g16.gain.y = vrNordic_g16.gain.k * vrNordic_g16.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5323]] /* vrNordic_g16.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3813]] /* vrNordic_g16.feedback1.y variable */));
  threadData->lastEquationSolved = 15476;
}
/*
equation index: 15477
type: SIMPLE_ASSIGN
$DAEres1337 = (if vrNordic_g16.limIntegrator.y < vrNordic_g16.limIntegrator.outMin and vrNordic_g16.limIntegrator.k * vrNordic_g16.gain.y < 0.0 or vrNordic_g16.limIntegrator.y > vrNordic_g16.limIntegrator.outMax and vrNordic_g16.limIntegrator.k * vrNordic_g16.gain.y > 0.0 then 0.0 else vrNordic_g16.limIntegrator.k * vrNordic_g16.gain.y) - der(vrNordic_g16.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15477};
  modelica_boolean tmp1399;
  modelica_real tmp1400;
  modelica_real tmp1401;
  modelica_boolean tmp1402;
  modelica_real tmp1403;
  modelica_real tmp1404;
  modelica_boolean tmp1405;
  modelica_real tmp1406;
  modelica_real tmp1407;
  modelica_boolean tmp1408;
  modelica_real tmp1409;
  modelica_real tmp1410;
  tmp1400 = 1.0;
  tmp1401 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5368]] /* vrNordic_g16.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1399, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5368]] /* vrNordic_g16.limIntegrator.outMin PARAM */), tmp1400, tmp1401, 472, Less, LessZC);
  tmp1403 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */))) * (1.0);
  tmp1404 = 0.0;
  relationhysteresis(data, &tmp1402, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)), 0.0, tmp1403, tmp1404, 473, Less, LessZC);
  tmp1406 = 1.0;
  tmp1407 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5367]] /* vrNordic_g16.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1405, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5367]] /* vrNordic_g16.limIntegrator.outMax PARAM */), tmp1406, tmp1407, 474, Greater, GreaterZC);
  tmp1409 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */))) * (1.0);
  tmp1410 = 0.0;
  relationhysteresis(data, &tmp1408, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)), 0.0, tmp1409, tmp1410, 475, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1337]) /* $DAEres1337 DAE_RESIDUAL_VAR */ = (((tmp1399 && tmp1402) || (tmp1405 && tmp1408))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* der(vrNordic_g16.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15477;
}
/*
equation index: 15478
type: SIMPLE_ASSIGN
$whenCondition19 = not pre(g15.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15478};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[100]] /* $whenCondition19 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[526] /* g15.running.value DISCRETE */));
  threadData->lastEquationSolved = 15478;
}
/*
equation index: 15479
type: WHEN

when {} then
  g15.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15479};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[100]] /* $whenCondition19 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[100] /* $whenCondition19 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15479;
}
/*
equation index: 15481
type: SIMPLE_ASSIGN
$whenCondition21 = not g15.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15481};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[123]] /* $whenCondition21 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */));
  threadData->lastEquationSolved = 15481;
}
/*
equation index: 15482
type: SIMPLE_ASSIGN
$whenCondition20 = g15.running.value and not pre(g15.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15482};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[112]] /* $whenCondition20 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[526] /* g15.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15482;
}
/*
equation index: 15483
type: WHEN

when {$whenCondition21} then
  g15.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15483};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[123]] /* $whenCondition21 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[123] /* $whenCondition21 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* g15.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[112]] /* $whenCondition20 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[112] /* $whenCondition20 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* g15.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15483;
}
/*
equation index: 15485
type: SIMPLE_ASSIGN
g15.converter.u = Integer(g15.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15485};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* g15.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* g15.state DISCRETE */)));
  threadData->lastEquationSolved = 15485;
}
/*
equation index: 15486
type: SIMPLE_ASSIGN
g15.genState = (*Real*)(g15.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1672]] /* g15.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* g15.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15486;
}
/*
equation index: 15487
type: SIMPLE_ASSIGN
$DAEres125 = if g15.running.value then der(g15.theta) - 314.1592653589793 * (g15.omegaPu - omegaCOI) else der(g15.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15487};
  (data->simulationInfo->daeModeData->residualVars[125]) /* $DAEres125 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* der(g15.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* der(g15.theta) STATE_DER */));
  threadData->lastEquationSolved = 15487;
}
/*
equation index: 15488
type: SIMPLE_ASSIGN
g15.cmPu = if g15.running.value then g15.PmPu / g15.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1670]] /* g15.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1663]] /* g15.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */),"g15.omegaPu"):0.0);
  threadData->lastEquationSolved = 15488;
}
/*
equation index: 15489
type: SIMPLE_ASSIGN
g15.ufPu = if g15.running.value then vrNordic_g15.limIntegrator.y * g15.Kuf * g15.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1702]] /* g15.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1650]] /* g15.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15489;
}
/*
equation index: 15490
type: SIMPLE_ASSIGN
$DAEres740 = if g15.running.value then g15.uqPu - ((g15.RaPPu + g15.RTfoPu) * g15.iqPu + g15.omegaPu * g15.lambdadPu) else g15.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15490};
  (data->simulationInfo->daeModeData->residualVars[740]) /* $DAEres740 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1703]] /* g15.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1692]] /* g15.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* g15.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1684]] /* g15.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1685]] /* g15.lambdaqPu variable */));
  threadData->lastEquationSolved = 15490;
}
/*
equation index: 15491
type: SIMPLE_ASSIGN
$DAEres741 = if g15.running.value then g15.sin2Eta - (g15.lambdaAQPu / g15.lambdaAirGapPu) ^ 2.0 else g15.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15491};
  modelica_real tmp1411;
  modelica_boolean tmp1412;
  modelica_real tmp1413;
  tmp1412 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp1412)
  {
    tmp1411 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1682]] /* g15.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1683]] /* g15.lambdaAirGapPu variable */),"g15.lambdaAirGapPu");
    tmp1413 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1691]] /* g15.sin2Eta variable */) - ((tmp1411 * tmp1411));
  }
  else
  {
    tmp1413 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1691]] /* g15.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[741]) /* $DAEres741 DAE_RESIDUAL_VAR */ = tmp1413;
  threadData->lastEquationSolved = 15491;
}
/*
equation index: 15492
type: SIMPLE_ASSIGN
$DAEres742 = if g15.running.value then g15.mqsPu - g15.MqPPu / (1.0 + g15.mq * g15.lambdaAirGapPu ^ g15.nq) else g15.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15492};
  modelica_real tmp1414;
  modelica_real tmp1415;
  modelica_real tmp1416;
  modelica_real tmp1417;
  modelica_real tmp1418;
  modelica_real tmp1419;
  modelica_real tmp1420;
  modelica_boolean tmp1421;
  modelica_real tmp1422;
  tmp1421 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp1421)
  {
    tmp1414 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1683]] /* g15.lambdaAirGapPu variable */);
    tmp1415 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1719]] /* g15.nq PARAM */);
    if(tmp1414 < 0.0 && tmp1415 != 0.0)
    {
      tmp1417 = modf(tmp1415, &tmp1418);
      
      if(tmp1417 > 0.5)
      {
        tmp1417 -= 1.0;
        tmp1418 += 1.0;
      }
      else if(tmp1417 < -0.5)
      {
        tmp1417 += 1.0;
        tmp1418 -= 1.0;
      }
      
      if(fabs(tmp1417) < 1e-10)
        tmp1416 = pow(tmp1414, tmp1418);
      else
      {
        tmp1420 = modf(1.0/tmp1415, &tmp1419);
        if(tmp1420 > 0.5)
        {
          tmp1420 -= 1.0;
          tmp1419 += 1.0;
        }
        else if(tmp1420 < -0.5)
        {
          tmp1420 += 1.0;
          tmp1419 -= 1.0;
        }
        if(fabs(tmp1420) < 1e-10 && ((unsigned long)tmp1419 & 1))
        {
          tmp1416 = -pow(-tmp1414, tmp1417)*pow(tmp1414, tmp1418);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1414, tmp1415);
        }
      }
    }
    else
    {
      tmp1416 = pow(tmp1414, tmp1415);
    }
    if(isnan(tmp1416) || isinf(tmp1416))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1414, tmp1415);
    }
    tmp1422 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1688]] /* g15.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1672]] /* g15.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1717]] /* g15.mq PARAM */)) * (tmp1416),"1.0 + g15.mq * g15.lambdaAirGapPu ^ g15.nq"));
  }
  else
  {
    tmp1422 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1688]] /* g15.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[742]) /* $DAEres742 DAE_RESIDUAL_VAR */ = tmp1422;
  threadData->lastEquationSolved = 15492;
}
/*
equation index: 15493
type: SIMPLE_ASSIGN
$DAEres743 = if g15.running.value then g15.MqSatPPu - (g15.miPu - g15.MsalPu * g15.cos2Eta) else g15.MqSatPPu - g15.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15493};
  (data->simulationInfo->daeModeData->residualVars[743]) /* $DAEres743 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1687]] /* g15.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* g15.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* g15.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1672]] /* g15.MqPPu PARAM */));
  threadData->lastEquationSolved = 15493;
}
/*
equation index: 15494
type: SIMPLE_ASSIGN
$DAEres744 = if g15.running.value then g15.MdSatPPu - (g15.miPu + g15.MsalPu * g15.sin2Eta) else g15.MdSatPPu - g15.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15494};
  (data->simulationInfo->daeModeData->residualVars[744]) /* $DAEres744 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1687]] /* g15.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* g15.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1691]] /* g15.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1666]] /* g15.MdPPu PARAM */));
  threadData->lastEquationSolved = 15494;
}
/*
equation index: 15495
type: SIMPLE_ASSIGN
$DAEres745 = if g15.running.value then g15.miPu - (g15.mdsPu * g15.cos2Eta + g15.mqsPu * g15.sin2Eta) else g15.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15495};
  (data->simulationInfo->daeModeData->residualVars[745]) /* $DAEres745 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1687]] /* g15.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1686]] /* g15.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* g15.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1688]] /* g15.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1691]] /* g15.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1687]] /* g15.miPu variable */));
  threadData->lastEquationSolved = 15495;
}
/*
equation index: 15496
type: SIMPLE_ASSIGN
$DAEres746 = if g15.running.value then g15.mdsPu - g15.MdPPu / (1.0 + g15.md * g15.lambdaAirGapPu ^ g15.nd) else g15.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15496};
  modelica_real tmp1423;
  modelica_real tmp1424;
  modelica_real tmp1425;
  modelica_real tmp1426;
  modelica_real tmp1427;
  modelica_real tmp1428;
  modelica_real tmp1429;
  modelica_boolean tmp1430;
  modelica_real tmp1431;
  tmp1430 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp1430)
  {
    tmp1423 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1683]] /* g15.lambdaAirGapPu variable */);
    tmp1424 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1718]] /* g15.nd PARAM */);
    if(tmp1423 < 0.0 && tmp1424 != 0.0)
    {
      tmp1426 = modf(tmp1424, &tmp1427);
      
      if(tmp1426 > 0.5)
      {
        tmp1426 -= 1.0;
        tmp1427 += 1.0;
      }
      else if(tmp1426 < -0.5)
      {
        tmp1426 += 1.0;
        tmp1427 -= 1.0;
      }
      
      if(fabs(tmp1426) < 1e-10)
        tmp1425 = pow(tmp1423, tmp1427);
      else
      {
        tmp1429 = modf(1.0/tmp1424, &tmp1428);
        if(tmp1429 > 0.5)
        {
          tmp1429 -= 1.0;
          tmp1428 += 1.0;
        }
        else if(tmp1429 < -0.5)
        {
          tmp1429 += 1.0;
          tmp1428 -= 1.0;
        }
        if(fabs(tmp1429) < 1e-10 && ((unsigned long)tmp1428 & 1))
        {
          tmp1425 = -pow(-tmp1423, tmp1426)*pow(tmp1423, tmp1427);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1423, tmp1424);
        }
      }
    }
    else
    {
      tmp1425 = pow(tmp1423, tmp1424);
    }
    if(isnan(tmp1425) || isinf(tmp1425))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1423, tmp1424);
    }
    tmp1431 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1686]] /* g15.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1666]] /* g15.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1716]] /* g15.md PARAM */)) * (tmp1425),"1.0 + g15.md * g15.lambdaAirGapPu ^ g15.nd"));
  }
  else
  {
    tmp1431 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1686]] /* g15.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[746]) /* $DAEres746 DAE_RESIDUAL_VAR */ = tmp1431;
  threadData->lastEquationSolved = 15496;
}
/*
equation index: 15497
type: SIMPLE_ASSIGN
$DAEres747 = if g15.running.value then g15.cos2Eta - (g15.lambdaADPu / g15.lambdaAirGapPu) ^ 2.0 else g15.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15497};
  modelica_real tmp1432;
  modelica_boolean tmp1433;
  modelica_real tmp1434;
  tmp1433 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp1433)
  {
    tmp1432 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1681]] /* g15.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1683]] /* g15.lambdaAirGapPu variable */),"g15.lambdaAirGapPu");
    tmp1434 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* g15.cos2Eta variable */) - ((tmp1432 * tmp1432));
  }
  else
  {
    tmp1434 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* g15.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[747]) /* $DAEres747 DAE_RESIDUAL_VAR */ = tmp1434;
  threadData->lastEquationSolved = 15497;
}
/*
equation index: 15498
type: SIMPLE_ASSIGN
$DAEres748 = if g15.running.value then g15.lambdaDPu - (g15.MdSatPPu * g15.idPu + (g15.MdSatPPu + g15.MrcPPu) * g15.ifPu + (g15.MdSatPPu + g15.LDPPu + g15.MrcPPu) * g15.iDPu) else g15.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15498};
  (data->simulationInfo->daeModeData->residualVars[748]) /* $DAEres748 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* g15.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1675]] /* g15.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1651]] /* g15.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1675]] /* g15.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* g15.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */));
  threadData->lastEquationSolved = 15498;
}
/*
equation index: 15499
type: SIMPLE_ASSIGN
$DAEres749 = if g15.running.value then g15.lambdaADPu - g15.MdSatPPu * (g15.idPu + g15.ifPu + g15.iDPu) else g15.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15499};
  (data->simulationInfo->daeModeData->residualVars[749]) /* $DAEres749 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1681]] /* g15.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* g15.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1681]] /* g15.lambdaADPu variable */));
  threadData->lastEquationSolved = 15499;
}
/*
equation index: 15500
type: SIMPLE_ASSIGN
$DAEres750 = if g15.running.value then g15.lambdaAirGapPu - sqrt(g15.lambdaADPu ^ 2.0 + g15.lambdaAQPu ^ 2.0) else g15.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15500};
  modelica_real tmp1435;
  modelica_real tmp1436;
  modelica_real tmp1437;
  modelica_boolean tmp1438;
  modelica_real tmp1439;
  tmp1438 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp1438)
  {
    tmp1435 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1681]] /* g15.lambdaADPu variable */);
    tmp1436 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1682]] /* g15.lambdaAQPu variable */);
    tmp1437 = (tmp1435 * tmp1435) + (tmp1436 * tmp1436);
    if(!(tmp1437 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g15.lambdaADPu ^ 2.0 + g15.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1437);
      }
    }
    tmp1439 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1683]] /* g15.lambdaAirGapPu variable */) - sqrt(tmp1437);
  }
  else
  {
    tmp1439 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1683]] /* g15.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[750]) /* $DAEres750 DAE_RESIDUAL_VAR */ = tmp1439;
  threadData->lastEquationSolved = 15500;
}
/*
equation index: 15501
type: SIMPLE_ASSIGN
$DAEres751 = if g15.running.value then g15.lambdaAQPu - g15.MqSatPPu * (g15.iqPu + g15.iQ1Pu + g15.iQ2Pu) else g15.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15501};
  (data->simulationInfo->daeModeData->residualVars[751]) /* $DAEres751 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1682]] /* g15.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* g15.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1675]] /* g15.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1682]] /* g15.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15501;
}
/*
equation index: 15502
type: SIMPLE_ASSIGN
$DAEres752 = if g15.running.value then g15.lambdaQ2Pu - (g15.MqSatPPu * (g15.iqPu + g15.iQ1Pu) + (g15.MqSatPPu + g15.LQ2PPu) * g15.iQ2Pu) else g15.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15502};
  (data->simulationInfo->daeModeData->residualVars[752]) /* $DAEres752 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* g15.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* g15.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1653]] /* g15.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1675]] /* g15.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1675]] /* g15.iQ2Pu variable */));
  threadData->lastEquationSolved = 15502;
}
/*
equation index: 15503
type: SIMPLE_ASSIGN
$DAEres753 = if g15.running.value then g15.lambdaQ1Pu - (g15.MqSatPPu * g15.iqPu + (g15.MqSatPPu + g15.LQ1PPu) * g15.iQ1Pu + g15.MqSatPPu * g15.iQ2Pu) else g15.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15503};
  (data->simulationInfo->daeModeData->residualVars[753]) /* $DAEres753 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* g15.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1652]] /* g15.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* g15.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1675]] /* g15.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* g15.iQ1Pu variable */));
  threadData->lastEquationSolved = 15503;
}
/*
equation index: 15504
type: SIMPLE_ASSIGN
$DAEres754 = if g15.running.value then g15.lambdaqPu - ((g15.MqSatPPu + g15.LqPPu + g15.XTfoPu) * g15.iqPu + g15.MqSatPPu * (g15.iQ1Pu + g15.iQ2Pu)) else g15.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15504};
  (data->simulationInfo->daeModeData->residualVars[754]) /* $DAEres754 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1685]] /* g15.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1665]] /* g15.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* g15.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* g15.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* g15.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1675]] /* g15.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* g15.iDPu variable */));
  threadData->lastEquationSolved = 15504;
}
/*
equation index: 15505
type: SIMPLE_ASSIGN
$DAEres755 = if g15.running.value then g15.udPu - ((g15.RaPPu + g15.RTfoPu) * g15.idPu - g15.omegaPu * g15.lambdaqPu) else g15.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15505};
  (data->simulationInfo->daeModeData->residualVars[755]) /* $DAEres755 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1701]] /* g15.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1692]] /* g15.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* g15.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1685]] /* g15.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1684]] /* g15.lambdadPu variable */));
  threadData->lastEquationSolved = 15505;
}
/*
equation index: 15506
type: SIMPLE_ASSIGN
$DAEres756 = if g15.running.value then g15.lambdadPu - ((g15.MdSatPPu + g15.LdPPu + g15.XTfoPu) * g15.idPu + g15.MdSatPPu * (g15.ifPu + g15.iDPu)) else g15.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15506};
  (data->simulationInfo->daeModeData->residualVars[756]) /* $DAEres756 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1684]] /* g15.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1663]] /* g15.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* g15.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* g15.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */));
  threadData->lastEquationSolved = 15506;
}
/*
equation index: 15507
type: SIMPLE_ASSIGN
$DAEres757 = if g15.running.value then g15.lambdafPu - (g15.MdSatPPu * g15.idPu + (g15.MdSatPPu + g15.LfPPu + g15.MrcPPu) * g15.ifPu + (g15.MdSatPPu + g15.MrcPPu) * g15.iDPu) else g15.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15507};
  (data->simulationInfo->daeModeData->residualVars[757]) /* $DAEres757 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* g15.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1664]] /* g15.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1675]] /* g15.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* g15.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1675]] /* g15.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* g15.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */));
  threadData->lastEquationSolved = 15507;
}
/*
equation index: 15508
type: SIMPLE_ASSIGN
$DAEres758 = if g15.running.value then 100.0 * g15.terminal.i.re / g15.SNom - (sin(g15.theta) * g15.idPu + cos(g15.theta) * g15.iqPu) else g15.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15508};
  (data->simulationInfo->daeModeData->residualVars[758]) /* $DAEres758 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */),"g15.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* g15.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* g15.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */));
  threadData->lastEquationSolved = 15508;
}
/*
equation index: 15509
type: SIMPLE_ASSIGN
$DAEres759 = if g15.running.value then 100.0 * g15.terminal.i.im / g15.SNom - (sin(g15.theta) * g15.iqPu - cos(g15.theta) * g15.idPu) else g15.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15509};
  (data->simulationInfo->daeModeData->residualVars[759]) /* $DAEres759 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */),"g15.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* g15.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* g15.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */));
  threadData->lastEquationSolved = 15509;
}
/*
equation index: 15510
type: SIMPLE_ASSIGN
$DAEres763 = if g15.running.value then g15.terminal.V.re - (sin(g15.theta) * g15.udPu + cos(g15.theta) * g15.uqPu) else g15.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15510};
  (data->simulationInfo->daeModeData->residualVars[763]) /* $DAEres763 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* g15.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1701]] /* g15.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* g15.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1703]] /* g15.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1701]] /* g15.udPu variable */));
  threadData->lastEquationSolved = 15510;
}
/*
equation index: 15511
type: SIMPLE_ASSIGN
$DAEres764 = if g15.running.value then g15.terminal.V.im - (sin(g15.theta) * g15.uqPu - cos(g15.theta) * g15.udPu) else g15.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15511};
  (data->simulationInfo->daeModeData->residualVars[764]) /* $DAEres764 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* g15.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1703]] /* g15.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* g15.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1701]] /* g15.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1703]] /* g15.uqPu variable */));
  threadData->lastEquationSolved = 15511;
}
/*
equation index: 15512
type: SIMPLE_ASSIGN
g15.uPu.im = if g15.running.value then g15.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1697]] /* g15.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15512;
}
/*
equation index: 15513
type: SIMPLE_ASSIGN
g15.iStatorPu.im = if g15.running.value then g15.rTfoPu * g15.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15513;
}
/*
equation index: 15514
type: SIMPLE_ASSIGN
g15.cePu = if g15.running.value then g15.lambdaqPu * g15.idPu - g15.lambdadPu * g15.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* g15.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1685]] /* g15.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1678]] /* g15.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1684]] /* g15.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* g15.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15514;
}
/*
equation index: 15515
type: SIMPLE_ASSIGN
g15.PePu = if g15.running.value then g15.cePu * g15.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1662]] /* g15.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* g15.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15515;
}
/*
equation index: 15516
type: SIMPLE_ASSIGN
$DAEres1305 = if g15.running.value then 2.0 * g15.H * der(g15.omegaPu) - (g15.cmPu * g15.PNomTurb / g15.SNom + g15.DPu * (omegaCOI - g15.omegaPu) - g15.cePu) else der(g15.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15516};
  (data->simulationInfo->daeModeData->residualVars[1305]) /* $DAEres1305 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* g15.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* der(g15.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1670]] /* g15.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* g15.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */),"g15.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* g15.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* g15.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* g15.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* der(g15.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15516;
}
/*
equation index: 15517
type: SIMPLE_ASSIGN
g15.thetaInternal.value = if g15.running.value then Modelica.Math.atan3(g15.udPu, g15.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1696]] /* g15.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1701]] /* g15.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1703]] /* g15.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15517;
}
/*
equation index: 15518
type: SIMPLE_ASSIGN
$DAEres1306 = if g15.running.value then (-g15.RQ1PPu) * g15.iQ1Pu - 0.0031830988618379067 * der(g15.lambdaQ1Pu) else der(g15.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15518};
  (data->simulationInfo->daeModeData->residualVars[1306]) /* $DAEres1306 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* g15.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* g15.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* der(g15.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* der(g15.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15518;
}
/*
equation index: 15519
type: SIMPLE_ASSIGN
$DAEres1307 = if g15.running.value then (-g15.RQ2PPu) * g15.iQ2Pu - 0.0031830988618379067 * der(g15.lambdaQ2Pu) else der(g15.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15519};
  (data->simulationInfo->daeModeData->residualVars[1307]) /* $DAEres1307 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* g15.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1675]] /* g15.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* der(g15.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* der(g15.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15519;
}
/*
equation index: 15520
type: SIMPLE_ASSIGN
$DAEres1308 = if g15.running.value then (-g15.RDPPu) * g15.iDPu - 0.0031830988618379067 * der(g15.lambdaDPu) else der(g15.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15520};
  (data->simulationInfo->daeModeData->residualVars[1308]) /* $DAEres1308 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* g15.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* g15.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* der(g15.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* der(g15.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15520;
}
/*
equation index: 15521
type: SIMPLE_ASSIGN
vrNordic_g15.IrPu = if g15.running.value then g15.RfPPu * g15.ifPu / (g15.rTfoPu * g15.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3782]] /* vrNordic_g15.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* g15.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1650]] /* g15.Kuf PARAM */)),"g15.rTfoPu * g15.Kuf")):0.0);
  threadData->lastEquationSolved = 15521;
}
/*
equation index: 15522
type: SIMPLE_ASSIGN
vrNordic_g15.dIf.y = vrNordic_g15.IrPu - vrNordic_g15.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3782]] /* vrNordic_g15.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5239]] /* vrNordic_g15.const2.k PARAM */);
  threadData->lastEquationSolved = 15522;
}
/*
equation index: 15523
type: SIMPLE_ASSIGN
vrNordic_g15.gain1.y = vrNordic_g15.gain1.k * vrNordic_g15.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3791]] /* vrNordic_g15.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5245]] /* vrNordic_g15.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */));
  threadData->lastEquationSolved = 15523;
}
/*
equation index: 15524
type: SIMPLE_ASSIGN
vrNordic_g15.overExcitationLimitation.y = if vrNordic_g15.dIf.y < -0.1 then -1.0 else if vrNordic_g15.dIf.y < 0.0 then 0.0 else if vrNordic_g15.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g15.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15524};
  modelica_boolean tmp1440;
  modelica_real tmp1441;
  modelica_real tmp1442;
  modelica_boolean tmp1443;
  modelica_real tmp1444;
  modelica_real tmp1445;
  modelica_boolean tmp1446;
  modelica_boolean tmp1447;
  modelica_real tmp1448;
  modelica_boolean tmp1449;
  modelica_real tmp1450;
  tmp1441 = 1.0;
  tmp1442 = 0.1;
  relationhysteresis(data, &tmp1440, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */), -0.1, tmp1441, tmp1442, 454, Less, LessZC);
  tmp1449 = (modelica_boolean)tmp1440;
  if(tmp1449)
  {
    tmp1450 = -1.0;
  }
  else
  {
    tmp1444 = 1.0;
    tmp1445 = 0.0;
    relationhysteresis(data, &tmp1443, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */), 0.0, tmp1444, tmp1445, 455, Less, LessZC);
    tmp1447 = (modelica_boolean)tmp1443;
    if(tmp1447)
    {
      tmp1448 = 0.0;
    }
    else
    {
      tmp1446 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5293]] /* vrNordic_g15.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1448 = (tmp1446?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */));
    }
    tmp1450 = tmp1448;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */) = tmp1450;
  threadData->lastEquationSolved = 15524;
}
/*
equation index: 15525
type: SIMPLE_ASSIGN
$DAEres1309 = (if vrNordic_g15.timer.y < vrNordic_g15.timer.outMin and vrNordic_g15.timer.k * vrNordic_g15.overExcitationLimitation.y < 0.0 or vrNordic_g15.timer.y > vrNordic_g15.timer.outMax and vrNordic_g15.timer.k * vrNordic_g15.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g15.timer.k * vrNordic_g15.overExcitationLimitation.y) - der(vrNordic_g15.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15525};
  modelica_boolean tmp1451;
  modelica_real tmp1452;
  modelica_real tmp1453;
  modelica_boolean tmp1454;
  modelica_real tmp1455;
  modelica_real tmp1456;
  modelica_boolean tmp1457;
  modelica_real tmp1458;
  modelica_real tmp1459;
  modelica_boolean tmp1460;
  modelica_real tmp1461;
  modelica_real tmp1462;
  tmp1452 = 1.0;
  tmp1453 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5303]] /* vrNordic_g15.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1451, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5303]] /* vrNordic_g15.timer.outMin PARAM */), tmp1452, tmp1453, 460, Less, LessZC);
  tmp1455 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */))) * (1.0);
  tmp1456 = 0.0;
  relationhysteresis(data, &tmp1454, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)), 0.0, tmp1455, tmp1456, 461, Less, LessZC);
  tmp1458 = 1.0;
  tmp1459 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5302]] /* vrNordic_g15.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1457, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5302]] /* vrNordic_g15.timer.outMax PARAM */), tmp1458, tmp1459, 462, Greater, GreaterZC);
  tmp1461 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */))) * (1.0);
  tmp1462 = 0.0;
  relationhysteresis(data, &tmp1460, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)), 0.0, tmp1461, tmp1462, 463, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1309]) /* $DAEres1309 DAE_RESIDUAL_VAR */ = (((tmp1451 && tmp1454) || (tmp1457 && tmp1460))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* der(vrNordic_g15.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15525;
}
/*
equation index: 15526
type: SIMPLE_ASSIGN
$DAEres1310 = if g15.running.value then g15.ufPu - (g15.RfPPu * g15.ifPu + 0.0031830988618379067 * der(g15.lambdafPu)) else der(g15.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15526};
  (data->simulationInfo->daeModeData->residualVars[1310]) /* $DAEres1310 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1702]] /* g15.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* g15.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1679]] /* g15.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* der(g15.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* der(g15.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15526;
}
/*
equation index: 15527
type: SIMPLE_ASSIGN
g15.uStatorPu.im = if g15.running.value then (g15.terminal.V.im + (-100.0) * (g15.terminal.i.re * g15.XTfoPu + g15.terminal.i.im * g15.RTfoPu) / g15.SNom) / g15.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* g15.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* g15.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */),"g15.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */),"g15.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15527;
}
/*
equation index: 15528
type: SIMPLE_ASSIGN
g15.iStatorPu.re = if g15.running.value then g15.rTfoPu * g15.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15528;
}
/*
equation index: 15529
type: SIMPLE_ASSIGN
g15.IStatorPu = if g15.running.value then if g15.iStatorPu.re == 0.0 and g15.iStatorPu.im == 0.0 then 0.0 else (g15.iStatorPu.re ^ 2.0 + g15.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15529};
  modelica_real tmp1463;
  modelica_real tmp1464;
  modelica_real tmp1465;
  modelica_boolean tmp1466;
  modelica_real tmp1467;
  modelica_boolean tmp1468;
  modelica_real tmp1469;
  tmp1468 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp1468)
  {
    tmp1466 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */) == 0.0));
    if(tmp1466)
    {
      tmp1467 = 0.0;
    }
    else
    {
      tmp1463 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */);
      tmp1464 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */);
      tmp1465 = (tmp1463 * tmp1463) + (tmp1464 * tmp1464);
      if(tmp1465 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1465, 0.5);
      }
      tmp1467 = sqrt(tmp1465);
    }
    tmp1469 = tmp1467;
  }
  else
  {
    tmp1469 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1658]] /* g15.IStatorPu variable */) = tmp1469;
  threadData->lastEquationSolved = 15529;
}
/*
equation index: 15530
type: SIMPLE_ASSIGN
g15.uPu.re = if g15.running.value then g15.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1698]] /* g15.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15530;
}
/*
equation index: 15531
type: SIMPLE_ASSIGN
g15.UPu = if g15.running.value then (g15.terminal.V.re ^ 2.0 + g15.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15531};
  modelica_real tmp1470;
  modelica_real tmp1471;
  modelica_real tmp1472;
  modelica_boolean tmp1473;
  modelica_real tmp1474;
  tmp1473 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp1473)
  {
    tmp1470 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */);
    tmp1471 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */);
    tmp1472 = (tmp1470 * tmp1470) + (tmp1471 * tmp1471);
    if(tmp1472 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1472, 0.5);
    }
    tmp1474 = sqrt(tmp1472);
  }
  else
  {
    tmp1474 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1668]] /* g15.UPu variable */) = tmp1474;
  threadData->lastEquationSolved = 15531;
}
/*
equation index: 15532
type: SIMPLE_ASSIGN
goverNordic_g15.PGenPu = if g15.running.value then (-g15.terminal.V.re) * g15.terminal.i.re - g15.terminal.V.im * g15.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2184]] /* goverNordic_g15.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15532;
}
/*
equation index: 15533
type: SIMPLE_ASSIGN
goverNordic_g15.perUnitP.y = goverNordic_g15.perUnitP.k * goverNordic_g15.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2200]] /* goverNordic_g15.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2790]] /* goverNordic_g15.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2184]] /* goverNordic_g15.PGenPu variable */));
  threadData->lastEquationSolved = 15533;
}
/*
equation index: 15534
type: SIMPLE_ASSIGN
$DAEres1311 = goverNordic_g15.firstOrder1.k * goverNordic_g15.perUnitP.y + (-goverNordic_g15.firstOrder1.y) - der(goverNordic_g15.firstOrder1.y) * goverNordic_g15.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15534};
  (data->simulationInfo->daeModeData->residualVars[1311]) /* $DAEres1311 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2768]] /* goverNordic_g15.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2200]] /* goverNordic_g15.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* goverNordic_g15.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* der(goverNordic_g15.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2767]] /* goverNordic_g15.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15534;
}
/*
equation index: 15535
type: SIMPLE_ASSIGN
g15.PGen = if g15.running.value then 100.0 * goverNordic_g15.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1661]] /* g15.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2184]] /* goverNordic_g15.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15535;
}
/*
equation index: 15536
type: SIMPLE_ASSIGN
g15.QGenPu = if g15.running.value then g15.terminal.V.re * g15.terminal.i.im - g15.terminal.V.im * g15.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15536};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1665]] /* g15.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15536;
}
/*
equation index: 15537
type: SIMPLE_ASSIGN
g15.QGen = if g15.running.value then 100.0 * g15.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1664]] /* g15.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1665]] /* g15.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15537;
}
/*
equation index: 15538
type: SIMPLE_ASSIGN
g15.uStatorPu.re = if g15.running.value then (g15.terminal.V.re + (-100.0) * (g15.terminal.i.re * g15.RTfoPu - g15.terminal.i.im * g15.XTfoPu) / g15.SNom) / g15.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1695]] /* g15.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* g15.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1694]] /* g15.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* g15.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* g15.SNom PARAM */),"g15.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1720]] /* g15.rTfoPu PARAM */),"g15.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15538;
}
/*
equation index: 15539
type: SIMPLE_ASSIGN
g15.sStatorPu.re = if g15.running.value then g15.uStatorPu.re * g15.iStatorPu.re + g15.uStatorPu.im * g15.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1690]] /* g15.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15539;
}
/*
equation index: 15540
type: SIMPLE_ASSIGN
g15.sStatorPu.im = if g15.running.value then g15.uStatorPu.im * g15.iStatorPu.re - g15.uStatorPu.re * g15.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1689]] /* g15.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15540;
}
/*
equation index: 15541
type: SIMPLE_ASSIGN
g15.QStatorPu = if g15.running.value then -g15.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1666]] /* g15.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1689]] /* g15.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15541;
}
/*
equation index: 15542
type: SIMPLE_ASSIGN
g15.QStatorPuQNom = if g15.running.value then 100.0 * g15.QStatorPu / g15.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1667]] /* g15.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1666]] /* g15.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* g15.QNomAlt PARAM */),"g15.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15542;
}
/*
equation index: 15543
type: SIMPLE_ASSIGN
vrNordic_g15.UsPu = if g15.running.value then if g15.uStatorPu.re == 0.0 and g15.uStatorPu.im == 0.0 then 0.0 else (g15.uStatorPu.re ^ 2.0 + g15.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15543};
  modelica_real tmp1475;
  modelica_real tmp1476;
  modelica_real tmp1477;
  modelica_boolean tmp1478;
  modelica_real tmp1479;
  modelica_boolean tmp1480;
  modelica_real tmp1481;
  tmp1480 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[526]] /* g15.running.value DISCRETE */);
  if(tmp1480)
  {
    tmp1478 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */) == 0.0));
    if(tmp1478)
    {
      tmp1479 = 0.0;
    }
    else
    {
      tmp1475 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */);
      tmp1476 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */);
      tmp1477 = (tmp1475 * tmp1475) + (tmp1476 * tmp1476);
      if(tmp1477 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1477, 0.5);
      }
      tmp1479 = sqrt(tmp1477);
    }
    tmp1481 = tmp1479;
  }
  else
  {
    tmp1481 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3783]] /* vrNordic_g15.UsPu variable */) = tmp1481;
  threadData->lastEquationSolved = 15543;
}
/*
equation index: 15544
type: SIMPLE_ASSIGN
vrNordic_g15.dU.y = vrNordic_g15.const1.k - vrNordic_g15.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15544};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3787]] /* vrNordic_g15.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5238]] /* vrNordic_g15.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3783]] /* vrNordic_g15.UsPu variable */);
  threadData->lastEquationSolved = 15544;
}
/*
equation index: 15545
type: SIMPLE_ASSIGN
vrNordic_g15.add.y = vrNordic_g15.add.k1 * vrNordic_g15.dU.y + vrNordic_g15.add.k2 * vrNordic_g15.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5235]] /* vrNordic_g15.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3787]] /* vrNordic_g15.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5236]] /* vrNordic_g15.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3801]] /* vrNordic_g15.limiter.y variable */));
  threadData->lastEquationSolved = 15545;
}
/*
equation index: 15546
type: SIMPLE_ASSIGN
vrNordic_g15.switch.y = if vrNordic_g15.greaterEqualThreshold.y then vrNordic_g15.gain1.y else vrNordic_g15.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3804]] /* vrNordic_g15.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1057]] /* vrNordic_g15.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3791]] /* vrNordic_g15.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */));
  threadData->lastEquationSolved = 15546;
}
/*
equation index: 15547
type: SIMPLE_ASSIGN
vrNordic_g15.min1.y = if vrNordic_g15.switch.y < vrNordic_g15.add.y then vrNordic_g15.switch.y else vrNordic_g15.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15547};
  modelica_boolean tmp1482;
  modelica_real tmp1483;
  modelica_real tmp1484;
  tmp1483 = 1.0;
  tmp1484 = 1.0;
  relationhysteresis(data, &tmp1482, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3804]] /* vrNordic_g15.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */), tmp1483, tmp1484, 452, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3802]] /* vrNordic_g15.min1.y variable */) = (tmp1482?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3804]] /* vrNordic_g15.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */));
  threadData->lastEquationSolved = 15547;
}
/*
equation index: 15548
type: SIMPLE_ASSIGN
vrNordic_g15.kMulDU.y = vrNordic_g15.kMulDU.k * vrNordic_g15.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15548};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3792]] /* vrNordic_g15.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5247]] /* vrNordic_g15.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3802]] /* vrNordic_g15.min1.y variable */));
  threadData->lastEquationSolved = 15548;
}
/*
equation index: 15549
type: SIMPLE_ASSIGN
$DAEres1312 = vrNordic_g15.leadLag.a_end * vrNordic_g15.kMulDU.y + (-vrNordic_g15.leadLag.a[2]) * vrNordic_g15.leadLag.x_scaled[1] - der(vrNordic_g15.leadLag.x_scaled[1]) * vrNordic_g15.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15549};
  (data->simulationInfo->daeModeData->residualVars[1312]) /* $DAEres1312 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5252]] /* vrNordic_g15.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3792]] /* vrNordic_g15.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5251]] /* vrNordic_g15.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* vrNordic_g15.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* der(vrNordic_g15.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5250]] /* vrNordic_g15.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15549;
}
/*
equation index: 15550
type: SIMPLE_ASSIGN
vrNordic_g15.leadLag.y = (vrNordic_g15.leadLag.bb[2] - vrNordic_g15.leadLag.d * vrNordic_g15.leadLag.a[2]) * vrNordic_g15.leadLag.x[1] + vrNordic_g15.leadLag.d * vrNordic_g15.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3794]] /* vrNordic_g15.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5256]] /* vrNordic_g15.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5257]] /* vrNordic_g15.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5251]] /* vrNordic_g15.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3793]] /* vrNordic_g15.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5257]] /* vrNordic_g15.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3792]] /* vrNordic_g15.kMulDU.y variable */));
  threadData->lastEquationSolved = 15550;
}
/*
equation index: 15551
type: SIMPLE_ASSIGN
vrNordic_g15.feedback1.y = vrNordic_g15.leadLag.y - vrNordic_g15.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3789]] /* vrNordic_g15.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3794]] /* vrNordic_g15.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15551;
}
/*
equation index: 15552
type: SIMPLE_ASSIGN
vrNordic_g15.gain.y = vrNordic_g15.gain.k * vrNordic_g15.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5244]] /* vrNordic_g15.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3789]] /* vrNordic_g15.feedback1.y variable */));
  threadData->lastEquationSolved = 15552;
}
/*
equation index: 15553
type: SIMPLE_ASSIGN
$DAEres1313 = (if vrNordic_g15.limIntegrator.y < vrNordic_g15.limIntegrator.outMin and vrNordic_g15.limIntegrator.k * vrNordic_g15.gain.y < 0.0 or vrNordic_g15.limIntegrator.y > vrNordic_g15.limIntegrator.outMax and vrNordic_g15.limIntegrator.k * vrNordic_g15.gain.y > 0.0 then 0.0 else vrNordic_g15.limIntegrator.k * vrNordic_g15.gain.y) - der(vrNordic_g15.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15553};
  modelica_boolean tmp1485;
  modelica_real tmp1486;
  modelica_real tmp1487;
  modelica_boolean tmp1488;
  modelica_real tmp1489;
  modelica_real tmp1490;
  modelica_boolean tmp1491;
  modelica_real tmp1492;
  modelica_real tmp1493;
  modelica_boolean tmp1494;
  modelica_real tmp1495;
  modelica_real tmp1496;
  tmp1486 = 1.0;
  tmp1487 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5289]] /* vrNordic_g15.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1485, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5289]] /* vrNordic_g15.limIntegrator.outMin PARAM */), tmp1486, tmp1487, 456, Less, LessZC);
  tmp1489 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */))) * (1.0);
  tmp1490 = 0.0;
  relationhysteresis(data, &tmp1488, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)), 0.0, tmp1489, tmp1490, 457, Less, LessZC);
  tmp1492 = 1.0;
  tmp1493 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5288]] /* vrNordic_g15.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1491, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5288]] /* vrNordic_g15.limIntegrator.outMax PARAM */), tmp1492, tmp1493, 458, Greater, GreaterZC);
  tmp1495 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */))) * (1.0);
  tmp1496 = 0.0;
  relationhysteresis(data, &tmp1494, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)), 0.0, tmp1495, tmp1496, 459, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1313]) /* $DAEres1313 DAE_RESIDUAL_VAR */ = (((tmp1485 && tmp1488) || (tmp1491 && tmp1494))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* der(vrNordic_g15.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15553;
}
/*
equation index: 15554
type: SIMPLE_ASSIGN
$whenCondition22 = not pre(g14.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15554};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[134]] /* $whenCondition22 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[522] /* g14.running.value DISCRETE */));
  threadData->lastEquationSolved = 15554;
}
/*
equation index: 15555
type: WHEN

when {} then
  g14.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15555};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[134]] /* $whenCondition22 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[134] /* $whenCondition22 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15555;
}
/*
equation index: 15557
type: SIMPLE_ASSIGN
$whenCondition24 = not g14.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15557};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[156]] /* $whenCondition24 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */));
  threadData->lastEquationSolved = 15557;
}
/*
equation index: 15558
type: SIMPLE_ASSIGN
$whenCondition23 = g14.running.value and not pre(g14.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15558};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[145]] /* $whenCondition23 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[522] /* g14.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15558;
}
/*
equation index: 15559
type: WHEN

when {$whenCondition24} then
  g14.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15559};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[156]] /* $whenCondition24 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[156] /* $whenCondition24 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* g14.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[145]] /* $whenCondition23 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[145] /* $whenCondition23 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* g14.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15559;
}
/*
equation index: 15561
type: SIMPLE_ASSIGN
g14.converter.u = Integer(g14.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15561};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* g14.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[27]] /* g14.state DISCRETE */)));
  threadData->lastEquationSolved = 15561;
}
/*
equation index: 15562
type: SIMPLE_ASSIGN
g14.genState = (*Real*)(g14.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1626]] /* g14.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* g14.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15562;
}
/*
equation index: 15563
type: SIMPLE_ASSIGN
$DAEres126 = if g14.running.value then der(g14.theta) - 314.1592653589793 * (g14.omegaPu - omegaCOI) else der(g14.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15563};
  (data->simulationInfo->daeModeData->residualVars[126]) /* $DAEres126 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* der(g14.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* der(g14.theta) STATE_DER */));
  threadData->lastEquationSolved = 15563;
}
/*
equation index: 15564
type: SIMPLE_ASSIGN
g14.cmPu = if g14.running.value then g14.PmPu / g14.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1624]] /* g14.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1617]] /* g14.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */),"g14.omegaPu"):0.0);
  threadData->lastEquationSolved = 15564;
}
/*
equation index: 15565
type: SIMPLE_ASSIGN
g14.ufPu = if g14.running.value then vrNordic_g14.limIntegrator.y * g14.Kuf * g14.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1656]] /* g14.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1547]] /* g14.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15565;
}
/*
equation index: 15566
type: SIMPLE_ASSIGN
$DAEres677 = if g14.running.value then g14.MqSatPPu - (g14.miPu - g14.MsalPu * g14.cos2Eta) else g14.MqSatPPu - g14.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15566};
  (data->simulationInfo->daeModeData->residualVars[677]) /* $DAEres677 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* g14.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1573]] /* g14.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1625]] /* g14.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1569]] /* g14.MqPPu PARAM */));
  threadData->lastEquationSolved = 15566;
}
/*
equation index: 15567
type: SIMPLE_ASSIGN
$DAEres678 = if g14.running.value then g14.MdSatPPu - (g14.miPu + g14.MsalPu * g14.sin2Eta) else g14.MdSatPPu - g14.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15567};
  (data->simulationInfo->daeModeData->residualVars[678]) /* $DAEres678 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* g14.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1573]] /* g14.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1645]] /* g14.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1563]] /* g14.MdPPu PARAM */));
  threadData->lastEquationSolved = 15567;
}
/*
equation index: 15568
type: SIMPLE_ASSIGN
$DAEres679 = if g14.running.value then g14.mqsPu - g14.MqPPu / (1.0 + g14.mq * g14.lambdaAirGapPu ^ g14.nq) else g14.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15568};
  modelica_real tmp1497;
  modelica_real tmp1498;
  modelica_real tmp1499;
  modelica_real tmp1500;
  modelica_real tmp1501;
  modelica_real tmp1502;
  modelica_real tmp1503;
  modelica_boolean tmp1504;
  modelica_real tmp1505;
  tmp1504 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp1504)
  {
    tmp1497 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1637]] /* g14.lambdaAirGapPu variable */);
    tmp1498 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1616]] /* g14.nq PARAM */);
    if(tmp1497 < 0.0 && tmp1498 != 0.0)
    {
      tmp1500 = modf(tmp1498, &tmp1501);
      
      if(tmp1500 > 0.5)
      {
        tmp1500 -= 1.0;
        tmp1501 += 1.0;
      }
      else if(tmp1500 < -0.5)
      {
        tmp1500 += 1.0;
        tmp1501 -= 1.0;
      }
      
      if(fabs(tmp1500) < 1e-10)
        tmp1499 = pow(tmp1497, tmp1501);
      else
      {
        tmp1503 = modf(1.0/tmp1498, &tmp1502);
        if(tmp1503 > 0.5)
        {
          tmp1503 -= 1.0;
          tmp1502 += 1.0;
        }
        else if(tmp1503 < -0.5)
        {
          tmp1503 += 1.0;
          tmp1502 -= 1.0;
        }
        if(fabs(tmp1503) < 1e-10 && ((unsigned long)tmp1502 & 1))
        {
          tmp1499 = -pow(-tmp1497, tmp1500)*pow(tmp1497, tmp1501);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1497, tmp1498);
        }
      }
    }
    else
    {
      tmp1499 = pow(tmp1497, tmp1498);
    }
    if(isnan(tmp1499) || isinf(tmp1499))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1497, tmp1498);
    }
    tmp1505 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1642]] /* g14.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1569]] /* g14.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1614]] /* g14.mq PARAM */)) * (tmp1499),"1.0 + g14.mq * g14.lambdaAirGapPu ^ g14.nq"));
  }
  else
  {
    tmp1505 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1642]] /* g14.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[679]) /* $DAEres679 DAE_RESIDUAL_VAR */ = tmp1505;
  threadData->lastEquationSolved = 15568;
}
/*
equation index: 15569
type: SIMPLE_ASSIGN
$DAEres680 = if g14.running.value then g14.mdsPu - g14.MdPPu / (1.0 + g14.md * g14.lambdaAirGapPu ^ g14.nd) else g14.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15569};
  modelica_real tmp1506;
  modelica_real tmp1507;
  modelica_real tmp1508;
  modelica_real tmp1509;
  modelica_real tmp1510;
  modelica_real tmp1511;
  modelica_real tmp1512;
  modelica_boolean tmp1513;
  modelica_real tmp1514;
  tmp1513 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp1513)
  {
    tmp1506 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1637]] /* g14.lambdaAirGapPu variable */);
    tmp1507 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1615]] /* g14.nd PARAM */);
    if(tmp1506 < 0.0 && tmp1507 != 0.0)
    {
      tmp1509 = modf(tmp1507, &tmp1510);
      
      if(tmp1509 > 0.5)
      {
        tmp1509 -= 1.0;
        tmp1510 += 1.0;
      }
      else if(tmp1509 < -0.5)
      {
        tmp1509 += 1.0;
        tmp1510 -= 1.0;
      }
      
      if(fabs(tmp1509) < 1e-10)
        tmp1508 = pow(tmp1506, tmp1510);
      else
      {
        tmp1512 = modf(1.0/tmp1507, &tmp1511);
        if(tmp1512 > 0.5)
        {
          tmp1512 -= 1.0;
          tmp1511 += 1.0;
        }
        else if(tmp1512 < -0.5)
        {
          tmp1512 += 1.0;
          tmp1511 -= 1.0;
        }
        if(fabs(tmp1512) < 1e-10 && ((unsigned long)tmp1511 & 1))
        {
          tmp1508 = -pow(-tmp1506, tmp1509)*pow(tmp1506, tmp1510);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1506, tmp1507);
        }
      }
    }
    else
    {
      tmp1508 = pow(tmp1506, tmp1507);
    }
    if(isnan(tmp1508) || isinf(tmp1508))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1506, tmp1507);
    }
    tmp1514 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* g14.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1563]] /* g14.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1613]] /* g14.md PARAM */)) * (tmp1508),"1.0 + g14.md * g14.lambdaAirGapPu ^ g14.nd"));
  }
  else
  {
    tmp1514 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* g14.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[680]) /* $DAEres680 DAE_RESIDUAL_VAR */ = tmp1514;
  threadData->lastEquationSolved = 15569;
}
/*
equation index: 15570
type: SIMPLE_ASSIGN
$DAEres681 = if g14.running.value then g14.sin2Eta - (g14.lambdaAQPu / g14.lambdaAirGapPu) ^ 2.0 else g14.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15570};
  modelica_real tmp1515;
  modelica_boolean tmp1516;
  modelica_real tmp1517;
  tmp1516 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp1516)
  {
    tmp1515 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1636]] /* g14.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1637]] /* g14.lambdaAirGapPu variable */),"g14.lambdaAirGapPu");
    tmp1517 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1645]] /* g14.sin2Eta variable */) - ((tmp1515 * tmp1515));
  }
  else
  {
    tmp1517 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1645]] /* g14.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[681]) /* $DAEres681 DAE_RESIDUAL_VAR */ = tmp1517;
  threadData->lastEquationSolved = 15570;
}
/*
equation index: 15571
type: SIMPLE_ASSIGN
$DAEres682 = if g14.running.value then g14.miPu - (g14.mdsPu * g14.cos2Eta + g14.mqsPu * g14.sin2Eta) else g14.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15571};
  (data->simulationInfo->daeModeData->residualVars[682]) /* $DAEres682 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* g14.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* g14.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1625]] /* g14.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1642]] /* g14.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1645]] /* g14.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* g14.miPu variable */));
  threadData->lastEquationSolved = 15571;
}
/*
equation index: 15572
type: SIMPLE_ASSIGN
$DAEres683 = if g14.running.value then g14.cos2Eta - (g14.lambdaADPu / g14.lambdaAirGapPu) ^ 2.0 else g14.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15572};
  modelica_real tmp1518;
  modelica_boolean tmp1519;
  modelica_real tmp1520;
  tmp1519 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp1519)
  {
    tmp1518 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1635]] /* g14.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1637]] /* g14.lambdaAirGapPu variable */),"g14.lambdaAirGapPu");
    tmp1520 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1625]] /* g14.cos2Eta variable */) - ((tmp1518 * tmp1518));
  }
  else
  {
    tmp1520 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1625]] /* g14.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[683]) /* $DAEres683 DAE_RESIDUAL_VAR */ = tmp1520;
  threadData->lastEquationSolved = 15572;
}
/*
equation index: 15573
type: SIMPLE_ASSIGN
$DAEres684 = if g14.running.value then g14.lambdaDPu - (g14.MdSatPPu * g14.idPu + (g14.MdSatPPu + g14.MrcPPu) * g14.ifPu + (g14.MdSatPPu + g14.LDPPu + g14.MrcPPu) * g14.iDPu) else g14.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15573};
  (data->simulationInfo->daeModeData->residualVars[684]) /* $DAEres684 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* g14.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1572]] /* g14.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1548]] /* g14.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1572]] /* g14.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1627]] /* g14.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */));
  threadData->lastEquationSolved = 15573;
}
/*
equation index: 15574
type: SIMPLE_ASSIGN
$DAEres685 = if g14.running.value then g14.lambdafPu - (g14.MdSatPPu * g14.idPu + (g14.MdSatPPu + g14.LfPPu + g14.MrcPPu) * g14.ifPu + (g14.MdSatPPu + g14.MrcPPu) * g14.iDPu) else g14.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15574};
  (data->simulationInfo->daeModeData->residualVars[685]) /* $DAEres685 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* g14.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1561]] /* g14.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1572]] /* g14.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1572]] /* g14.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1627]] /* g14.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */));
  threadData->lastEquationSolved = 15574;
}
/*
equation index: 15575
type: SIMPLE_ASSIGN
$DAEres686 = if g14.running.value then g14.udPu - ((g14.RaPPu + g14.RTfoPu) * g14.idPu - g14.omegaPu * g14.lambdaqPu) else g14.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15575};
  (data->simulationInfo->daeModeData->residualVars[686]) /* $DAEres686 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* g14.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1589]] /* g14.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* g14.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* g14.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* g14.lambdadPu variable */));
  threadData->lastEquationSolved = 15575;
}
/*
equation index: 15576
type: SIMPLE_ASSIGN
$DAEres687 = if g14.running.value then g14.lambdadPu - ((g14.MdSatPPu + g14.LdPPu + g14.XTfoPu) * g14.idPu + g14.MdSatPPu * (g14.ifPu + g14.iDPu)) else g14.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15576};
  (data->simulationInfo->daeModeData->residualVars[687]) /* $DAEres687 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* g14.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1560]] /* g14.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* g14.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1627]] /* g14.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */));
  threadData->lastEquationSolved = 15576;
}
/*
equation index: 15577
type: SIMPLE_ASSIGN
$DAEres688 = if g14.running.value then g14.lambdaADPu - g14.MdSatPPu * (g14.idPu + g14.ifPu + g14.iDPu) else g14.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15577};
  (data->simulationInfo->daeModeData->residualVars[688]) /* $DAEres688 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1635]] /* g14.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1613]] /* g14.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1627]] /* g14.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1635]] /* g14.lambdaADPu variable */));
  threadData->lastEquationSolved = 15577;
}
/*
equation index: 15578
type: SIMPLE_ASSIGN
$DAEres689 = if g14.running.value then g14.lambdaAirGapPu - sqrt(g14.lambdaADPu ^ 2.0 + g14.lambdaAQPu ^ 2.0) else g14.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15578};
  modelica_real tmp1521;
  modelica_real tmp1522;
  modelica_real tmp1523;
  modelica_boolean tmp1524;
  modelica_real tmp1525;
  tmp1524 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp1524)
  {
    tmp1521 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1635]] /* g14.lambdaADPu variable */);
    tmp1522 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1636]] /* g14.lambdaAQPu variable */);
    tmp1523 = (tmp1521 * tmp1521) + (tmp1522 * tmp1522);
    if(!(tmp1523 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g14.lambdaADPu ^ 2.0 + g14.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1523);
      }
    }
    tmp1525 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1637]] /* g14.lambdaAirGapPu variable */) - sqrt(tmp1523);
  }
  else
  {
    tmp1525 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1637]] /* g14.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[689]) /* $DAEres689 DAE_RESIDUAL_VAR */ = tmp1525;
  threadData->lastEquationSolved = 15578;
}
/*
equation index: 15579
type: SIMPLE_ASSIGN
$DAEres690 = if g14.running.value then g14.lambdaAQPu - g14.MqSatPPu * (g14.iqPu + g14.iQ1Pu + g14.iQ2Pu) else g14.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15579};
  (data->simulationInfo->daeModeData->residualVars[690]) /* $DAEres690 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1636]] /* g14.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1628]] /* g14.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1629]] /* g14.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1636]] /* g14.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15579;
}
/*
equation index: 15580
type: SIMPLE_ASSIGN
$DAEres691 = if g14.running.value then g14.lambdaQ2Pu - (g14.MqSatPPu * (g14.iqPu + g14.iQ1Pu) + (g14.MqSatPPu + g14.LQ2PPu) * g14.iQ2Pu) else g14.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15580};
  (data->simulationInfo->daeModeData->residualVars[691]) /* $DAEres691 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* g14.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1628]] /* g14.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1550]] /* g14.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1629]] /* g14.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1629]] /* g14.iQ2Pu variable */));
  threadData->lastEquationSolved = 15580;
}
/*
equation index: 15581
type: SIMPLE_ASSIGN
$DAEres692 = if g14.running.value then g14.lambdaQ1Pu - (g14.MqSatPPu * g14.iqPu + (g14.MqSatPPu + g14.LQ1PPu) * g14.iQ1Pu + g14.MqSatPPu * g14.iQ2Pu) else g14.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15581};
  (data->simulationInfo->daeModeData->residualVars[692]) /* $DAEres692 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* g14.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1549]] /* g14.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1628]] /* g14.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1629]] /* g14.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1628]] /* g14.iQ1Pu variable */));
  threadData->lastEquationSolved = 15581;
}
/*
equation index: 15582
type: SIMPLE_ASSIGN
$DAEres693 = if g14.running.value then g14.lambdaqPu - ((g14.MqSatPPu + g14.LqPPu + g14.XTfoPu) * g14.iqPu + g14.MqSatPPu * (g14.iQ1Pu + g14.iQ2Pu)) else g14.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15582};
  (data->simulationInfo->daeModeData->residualVars[693]) /* $DAEres693 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* g14.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1562]] /* g14.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* g14.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1614]] /* g14.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1628]] /* g14.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1629]] /* g14.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1627]] /* g14.iDPu variable */));
  threadData->lastEquationSolved = 15582;
}
/*
equation index: 15583
type: SIMPLE_ASSIGN
$DAEres694 = if g14.running.value then g14.uqPu - ((g14.RaPPu + g14.RTfoPu) * g14.iqPu + g14.omegaPu * g14.lambdadPu) else g14.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15583};
  (data->simulationInfo->daeModeData->residualVars[694]) /* $DAEres694 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* g14.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1589]] /* g14.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* g14.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* g14.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* g14.lambdaqPu variable */));
  threadData->lastEquationSolved = 15583;
}
/*
equation index: 15584
type: SIMPLE_ASSIGN
$DAEres695 = if g14.running.value then g14.terminal.V.re - (sin(g14.theta) * g14.udPu + cos(g14.theta) * g14.uqPu) else g14.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15584};
  (data->simulationInfo->daeModeData->residualVars[695]) /* $DAEres695 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* g14.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* g14.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* g14.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* g14.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* g14.udPu variable */));
  threadData->lastEquationSolved = 15584;
}
/*
equation index: 15585
type: SIMPLE_ASSIGN
$DAEres696 = if g14.running.value then g14.terminal.V.im - (sin(g14.theta) * g14.uqPu - cos(g14.theta) * g14.udPu) else g14.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15585};
  (data->simulationInfo->daeModeData->residualVars[696]) /* $DAEres696 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* g14.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* g14.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* g14.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* g14.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* g14.uqPu variable */));
  threadData->lastEquationSolved = 15585;
}
/*
equation index: 15586
type: SIMPLE_ASSIGN
$DAEres704 = if g14.running.value then 100.0 * g14.terminal.i.re / g14.SNom - (sin(g14.theta) * g14.idPu + cos(g14.theta) * g14.iqPu) else g14.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15586};
  (data->simulationInfo->daeModeData->residualVars[704]) /* $DAEres704 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */),"g14.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* g14.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* g14.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */));
  threadData->lastEquationSolved = 15586;
}
/*
equation index: 15587
type: SIMPLE_ASSIGN
$DAEres705 = if g14.running.value then 100.0 * g14.terminal.i.im / g14.SNom - (sin(g14.theta) * g14.iqPu - cos(g14.theta) * g14.idPu) else g14.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15587};
  (data->simulationInfo->daeModeData->residualVars[705]) /* $DAEres705 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */),"g14.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* g14.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* g14.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */));
  threadData->lastEquationSolved = 15587;
}
/*
equation index: 15588
type: SIMPLE_ASSIGN
g14.iStatorPu.im = if g14.running.value then g14.rTfoPu * g14.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)):0.0);
  threadData->lastEquationSolved = 15588;
}
/*
equation index: 15589
type: SIMPLE_ASSIGN
g14.uPu.im = if g14.running.value then g14.terminal.V.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1651]] /* g14.uPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */):0.0);
  threadData->lastEquationSolved = 15589;
}
/*
equation index: 15590
type: SIMPLE_ASSIGN
$DAEres1296 = if g14.running.value then (-g14.RQ2PPu) * g14.iQ2Pu - 0.0031830988618379067 * der(g14.lambdaQ2Pu) else der(g14.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15590};
  (data->simulationInfo->daeModeData->residualVars[1296]) /* $DAEres1296 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1586]] /* g14.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1629]] /* g14.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* der(g14.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* der(g14.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15590;
}
/*
equation index: 15591
type: SIMPLE_ASSIGN
$DAEres1297 = if g14.running.value then (-g14.RQ1PPu) * g14.iQ1Pu - 0.0031830988618379067 * der(g14.lambdaQ1Pu) else der(g14.lambdaQ1Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15591};
  (data->simulationInfo->daeModeData->residualVars[1297]) /* $DAEres1297 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* g14.RQ1PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1628]] /* g14.iQ1Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* der(g14.lambdaQ1Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* der(g14.lambdaQ1Pu) STATE_DER */));
  threadData->lastEquationSolved = 15591;
}
/*
equation index: 15592
type: SIMPLE_ASSIGN
vrNordic_g14.IrPu = if g14.running.value then g14.RfPPu * g14.ifPu / (g14.rTfoPu * g14.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3758]] /* vrNordic_g14.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1590]] /* g14.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1547]] /* g14.Kuf PARAM */)),"g14.rTfoPu * g14.Kuf")):0.0);
  threadData->lastEquationSolved = 15592;
}
/*
equation index: 15593
type: SIMPLE_ASSIGN
vrNordic_g14.dIf.y = vrNordic_g14.IrPu - vrNordic_g14.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3758]] /* vrNordic_g14.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5160]] /* vrNordic_g14.const2.k PARAM */);
  threadData->lastEquationSolved = 15593;
}
/*
equation index: 15594
type: SIMPLE_ASSIGN
vrNordic_g14.gain1.y = vrNordic_g14.gain1.k * vrNordic_g14.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3767]] /* vrNordic_g14.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5166]] /* vrNordic_g14.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */));
  threadData->lastEquationSolved = 15594;
}
/*
equation index: 15595
type: SIMPLE_ASSIGN
vrNordic_g14.overExcitationLimitation.y = if vrNordic_g14.dIf.y < -0.1 then -1.0 else if vrNordic_g14.dIf.y < 0.0 then 0.0 else if vrNordic_g14.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g14.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15595};
  modelica_boolean tmp1526;
  modelica_real tmp1527;
  modelica_real tmp1528;
  modelica_boolean tmp1529;
  modelica_real tmp1530;
  modelica_real tmp1531;
  modelica_boolean tmp1532;
  modelica_boolean tmp1533;
  modelica_real tmp1534;
  modelica_boolean tmp1535;
  modelica_real tmp1536;
  tmp1527 = 1.0;
  tmp1528 = 0.1;
  relationhysteresis(data, &tmp1526, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */), -0.1, tmp1527, tmp1528, 438, Less, LessZC);
  tmp1535 = (modelica_boolean)tmp1526;
  if(tmp1535)
  {
    tmp1536 = -1.0;
  }
  else
  {
    tmp1530 = 1.0;
    tmp1531 = 0.0;
    relationhysteresis(data, &tmp1529, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */), 0.0, tmp1530, tmp1531, 439, Less, LessZC);
    tmp1533 = (modelica_boolean)tmp1529;
    if(tmp1533)
    {
      tmp1534 = 0.0;
    }
    else
    {
      tmp1532 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5214]] /* vrNordic_g14.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1534 = (tmp1532?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */));
    }
    tmp1536 = tmp1534;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */) = tmp1536;
  threadData->lastEquationSolved = 15595;
}
/*
equation index: 15596
type: SIMPLE_ASSIGN
$DAEres1298 = (if vrNordic_g14.timer.y < vrNordic_g14.timer.outMin and vrNordic_g14.timer.k * vrNordic_g14.overExcitationLimitation.y < 0.0 or vrNordic_g14.timer.y > vrNordic_g14.timer.outMax and vrNordic_g14.timer.k * vrNordic_g14.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g14.timer.k * vrNordic_g14.overExcitationLimitation.y) - der(vrNordic_g14.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15596};
  modelica_boolean tmp1537;
  modelica_real tmp1538;
  modelica_real tmp1539;
  modelica_boolean tmp1540;
  modelica_real tmp1541;
  modelica_real tmp1542;
  modelica_boolean tmp1543;
  modelica_real tmp1544;
  modelica_real tmp1545;
  modelica_boolean tmp1546;
  modelica_real tmp1547;
  modelica_real tmp1548;
  tmp1538 = 1.0;
  tmp1539 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5224]] /* vrNordic_g14.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1537, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5224]] /* vrNordic_g14.timer.outMin PARAM */), tmp1538, tmp1539, 444, Less, LessZC);
  tmp1541 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */))) * (1.0);
  tmp1542 = 0.0;
  relationhysteresis(data, &tmp1540, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)), 0.0, tmp1541, tmp1542, 445, Less, LessZC);
  tmp1544 = 1.0;
  tmp1545 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5223]] /* vrNordic_g14.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1543, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5223]] /* vrNordic_g14.timer.outMax PARAM */), tmp1544, tmp1545, 446, Greater, GreaterZC);
  tmp1547 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */))) * (1.0);
  tmp1548 = 0.0;
  relationhysteresis(data, &tmp1546, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)), 0.0, tmp1547, tmp1548, 447, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1298]) /* $DAEres1298 DAE_RESIDUAL_VAR */ = (((tmp1537 && tmp1540) || (tmp1543 && tmp1546))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* der(vrNordic_g14.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15596;
}
/*
equation index: 15597
type: SIMPLE_ASSIGN
$DAEres1299 = if g14.running.value then g14.ufPu - (g14.RfPPu * g14.ifPu + 0.0031830988618379067 * der(g14.lambdafPu)) else der(g14.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15597};
  (data->simulationInfo->daeModeData->residualVars[1299]) /* $DAEres1299 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1656]] /* g14.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1590]] /* g14.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1633]] /* g14.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* der(g14.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* der(g14.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15597;
}
/*
equation index: 15598
type: SIMPLE_ASSIGN
$DAEres1300 = if g14.running.value then (-g14.RDPPu) * g14.iDPu - 0.0031830988618379067 * der(g14.lambdaDPu) else der(g14.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15598};
  (data->simulationInfo->daeModeData->residualVars[1300]) /* $DAEres1300 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1584]] /* g14.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1627]] /* g14.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* der(g14.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* der(g14.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15598;
}
/*
equation index: 15599
type: SIMPLE_ASSIGN
g14.cePu = if g14.running.value then g14.lambdaqPu * g14.idPu - g14.lambdadPu * g14.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1623]] /* g14.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* g14.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1632]] /* g14.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* g14.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1634]] /* g14.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15599;
}
/*
equation index: 15600
type: SIMPLE_ASSIGN
g14.PePu = if g14.running.value then g14.cePu * g14.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1616]] /* g14.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1623]] /* g14.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15600;
}
/*
equation index: 15601
type: SIMPLE_ASSIGN
$DAEres1301 = if g14.running.value then 2.0 * g14.H * der(g14.omegaPu) - (g14.cmPu * g14.PNomTurb / g14.SNom + g14.DPu * (omegaCOI - g14.omegaPu) - g14.cePu) else der(g14.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15601};
  (data->simulationInfo->daeModeData->residualVars[1301]) /* $DAEres1301 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* g14.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* der(g14.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1624]] /* g14.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1577]] /* g14.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */),"g14.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1539]] /* g14.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* g14.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1623]] /* g14.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* der(g14.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15601;
}
/*
equation index: 15602
type: SIMPLE_ASSIGN
g14.thetaInternal.value = if g14.running.value then Modelica.Math.atan3(g14.udPu, g14.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1650]] /* g14.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* g14.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* g14.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15602;
}
/*
equation index: 15603
type: SIMPLE_ASSIGN
g14.uPu.re = if g14.running.value then g14.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1652]] /* g14.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15603;
}
/*
equation index: 15604
type: SIMPLE_ASSIGN
g14.UPu = if g14.running.value then (g14.terminal.V.re ^ 2.0 + g14.terminal.V.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15604};
  modelica_real tmp1549;
  modelica_real tmp1550;
  modelica_real tmp1551;
  modelica_boolean tmp1552;
  modelica_real tmp1553;
  tmp1552 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp1552)
  {
    tmp1549 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */);
    tmp1550 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */);
    tmp1551 = (tmp1549 * tmp1549) + (tmp1550 * tmp1550);
    if(tmp1551 < 0.0) {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1551, 0.5);
    }
    tmp1553 = sqrt(tmp1551);
  }
  else
  {
    tmp1553 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1622]] /* g14.UPu variable */) = tmp1553;
  threadData->lastEquationSolved = 15604;
}
/*
equation index: 15605
type: SIMPLE_ASSIGN
goverNordic_g14.PGenPu = if g14.running.value then (-g14.terminal.V.re) * g14.terminal.i.re - g14.terminal.V.im * g14.terminal.i.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2166]] /* goverNordic_g14.PGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */))):0.0);
  threadData->lastEquationSolved = 15605;
}
/*
equation index: 15606
type: SIMPLE_ASSIGN
goverNordic_g14.perUnitP.y = goverNordic_g14.perUnitP.k * goverNordic_g14.PGenPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2182]] /* goverNordic_g14.perUnitP.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2754]] /* goverNordic_g14.perUnitP.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2166]] /* goverNordic_g14.PGenPu variable */));
  threadData->lastEquationSolved = 15606;
}
/*
equation index: 15607
type: SIMPLE_ASSIGN
$DAEres1302 = goverNordic_g14.firstOrder1.k * goverNordic_g14.perUnitP.y + (-goverNordic_g14.firstOrder1.y) - der(goverNordic_g14.firstOrder1.y) * goverNordic_g14.firstOrder1.T
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15607};
  (data->simulationInfo->daeModeData->residualVars[1302]) /* $DAEres1302 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2732]] /* goverNordic_g14.firstOrder1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2182]] /* goverNordic_g14.perUnitP.y variable */)) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* goverNordic_g14.firstOrder1.y STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* der(goverNordic_g14.firstOrder1.y) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2731]] /* goverNordic_g14.firstOrder1.T PARAM */)));
  threadData->lastEquationSolved = 15607;
}
/*
equation index: 15608
type: SIMPLE_ASSIGN
g14.PGen = if g14.running.value then 100.0 * goverNordic_g14.PGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1615]] /* g14.PGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2166]] /* goverNordic_g14.PGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15608;
}
/*
equation index: 15609
type: SIMPLE_ASSIGN
g14.QGenPu = if g14.running.value then g14.terminal.V.re * g14.terminal.i.im - g14.terminal.V.im * g14.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1619]] /* g14.QGenPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */))):0.0);
  threadData->lastEquationSolved = 15609;
}
/*
equation index: 15610
type: SIMPLE_ASSIGN
g14.QGen = if g14.running.value then 100.0 * g14.QGenPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1618]] /* g14.QGen variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1619]] /* g14.QGenPu variable */)):0.0);
  threadData->lastEquationSolved = 15610;
}
/*
equation index: 15611
type: SIMPLE_ASSIGN
g14.uStatorPu.re = if g14.running.value then (g14.terminal.V.re + (-100.0) * (g14.terminal.i.re * g14.RTfoPu - g14.terminal.i.im * g14.XTfoPu) / g14.SNom) / g14.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* g14.RTfoPu PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* g14.XTfoPu PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */),"g14.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */),"g14.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15611;
}
/*
equation index: 15612
type: SIMPLE_ASSIGN
g14.uStatorPu.im = if g14.running.value then (g14.terminal.V.im + (-100.0) * (g14.terminal.i.re * g14.XTfoPu + g14.terminal.i.im * g14.RTfoPu) / g14.SNom) / g14.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) + (-100.0) * (DIVISION(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* g14.XTfoPu PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* g14.terminal.i.im variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* g14.RTfoPu PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* g14.SNom PARAM */),"g14.SNom")),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */),"g14.rTfoPu"):0.0);
  threadData->lastEquationSolved = 15612;
}
/*
equation index: 15613
type: SIMPLE_ASSIGN
vrNordic_g14.UsPu = if g14.running.value then if g14.uStatorPu.re == 0.0 and g14.uStatorPu.im == 0.0 then 0.0 else (g14.uStatorPu.re ^ 2.0 + g14.uStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15613};
  modelica_real tmp1554;
  modelica_real tmp1555;
  modelica_real tmp1556;
  modelica_boolean tmp1557;
  modelica_real tmp1558;
  modelica_boolean tmp1559;
  modelica_real tmp1560;
  tmp1559 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp1559)
  {
    tmp1557 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */) == 0.0));
    if(tmp1557)
    {
      tmp1558 = 0.0;
    }
    else
    {
      tmp1554 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */);
      tmp1555 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */);
      tmp1556 = (tmp1554 * tmp1554) + (tmp1555 * tmp1555);
      if(tmp1556 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1556, 0.5);
      }
      tmp1558 = sqrt(tmp1556);
    }
    tmp1560 = tmp1558;
  }
  else
  {
    tmp1560 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3759]] /* vrNordic_g14.UsPu variable */) = tmp1560;
  threadData->lastEquationSolved = 15613;
}
/*
equation index: 15614
type: SIMPLE_ASSIGN
vrNordic_g14.dU.y = vrNordic_g14.const1.k - vrNordic_g14.UsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3763]] /* vrNordic_g14.dU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5159]] /* vrNordic_g14.const1.k PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3759]] /* vrNordic_g14.UsPu variable */);
  threadData->lastEquationSolved = 15614;
}
/*
equation index: 15615
type: SIMPLE_ASSIGN
vrNordic_g14.add.y = vrNordic_g14.add.k1 * vrNordic_g14.dU.y + vrNordic_g14.add.k2 * vrNordic_g14.limiter.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5156]] /* vrNordic_g14.add.k1 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3763]] /* vrNordic_g14.dU.y variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5157]] /* vrNordic_g14.add.k2 PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3777]] /* vrNordic_g14.limiter.y variable */));
  threadData->lastEquationSolved = 15615;
}
/*
equation index: 15616
type: SIMPLE_ASSIGN
vrNordic_g14.switch.y = if vrNordic_g14.greaterEqualThreshold.y then vrNordic_g14.gain1.y else vrNordic_g14.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3780]] /* vrNordic_g14.switch.y variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1054]] /* vrNordic_g14.greaterEqualThreshold.y DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3767]] /* vrNordic_g14.gain1.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */));
  threadData->lastEquationSolved = 15616;
}
/*
equation index: 15617
type: SIMPLE_ASSIGN
vrNordic_g14.min1.y = if vrNordic_g14.switch.y < vrNordic_g14.add.y then vrNordic_g14.switch.y else vrNordic_g14.add.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15617};
  modelica_boolean tmp1561;
  modelica_real tmp1562;
  modelica_real tmp1563;
  tmp1562 = 1.0;
  tmp1563 = 1.0;
  relationhysteresis(data, &tmp1561, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3780]] /* vrNordic_g14.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */), tmp1562, tmp1563, 436, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3778]] /* vrNordic_g14.min1.y variable */) = (tmp1561?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3780]] /* vrNordic_g14.switch.y variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */));
  threadData->lastEquationSolved = 15617;
}
/*
equation index: 15618
type: SIMPLE_ASSIGN
vrNordic_g14.kMulDU.y = vrNordic_g14.kMulDU.k * vrNordic_g14.min1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3768]] /* vrNordic_g14.kMulDU.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5168]] /* vrNordic_g14.kMulDU.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3778]] /* vrNordic_g14.min1.y variable */));
  threadData->lastEquationSolved = 15618;
}
/*
equation index: 15619
type: SIMPLE_ASSIGN
$DAEres1303 = vrNordic_g14.leadLag.a_end * vrNordic_g14.kMulDU.y + (-vrNordic_g14.leadLag.a[2]) * vrNordic_g14.leadLag.x_scaled[1] - der(vrNordic_g14.leadLag.x_scaled[1]) * vrNordic_g14.leadLag.a[1]
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15619};
  (data->simulationInfo->daeModeData->residualVars[1303]) /* $DAEres1303 DAE_RESIDUAL_VAR */ = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5173]] /* vrNordic_g14.leadLag.a_end PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3768]] /* vrNordic_g14.kMulDU.y variable */)) + ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5172]] /* vrNordic_g14.leadLag.a[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* vrNordic_g14.leadLag.x_scaled[1] STATE(1) */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* der(vrNordic_g14.leadLag.x_scaled[1]) STATE_DER */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5171]] /* vrNordic_g14.leadLag.a[1] PARAM */)));
  threadData->lastEquationSolved = 15619;
}
/*
equation index: 15620
type: SIMPLE_ASSIGN
vrNordic_g14.leadLag.y = (vrNordic_g14.leadLag.bb[2] - vrNordic_g14.leadLag.d * vrNordic_g14.leadLag.a[2]) * vrNordic_g14.leadLag.x[1] + vrNordic_g14.leadLag.d * vrNordic_g14.kMulDU.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3770]] /* vrNordic_g14.leadLag.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5177]] /* vrNordic_g14.leadLag.bb[2] PARAM */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5178]] /* vrNordic_g14.leadLag.d PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5172]] /* vrNordic_g14.leadLag.a[2] PARAM */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3769]] /* vrNordic_g14.leadLag.x[1] variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5178]] /* vrNordic_g14.leadLag.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3768]] /* vrNordic_g14.kMulDU.y variable */));
  threadData->lastEquationSolved = 15620;
}
/*
equation index: 15621
type: SIMPLE_ASSIGN
vrNordic_g14.feedback1.y = vrNordic_g14.leadLag.y - vrNordic_g14.limIntegrator.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3765]] /* vrNordic_g14.feedback1.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3770]] /* vrNordic_g14.leadLag.y variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */);
  threadData->lastEquationSolved = 15621;
}
/*
equation index: 15622
type: SIMPLE_ASSIGN
vrNordic_g14.gain.y = vrNordic_g14.gain.k * vrNordic_g14.feedback1.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15622};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5165]] /* vrNordic_g14.gain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3765]] /* vrNordic_g14.feedback1.y variable */));
  threadData->lastEquationSolved = 15622;
}
/*
equation index: 15623
type: SIMPLE_ASSIGN
$DAEres1304 = (if vrNordic_g14.limIntegrator.y < vrNordic_g14.limIntegrator.outMin and vrNordic_g14.limIntegrator.k * vrNordic_g14.gain.y < 0.0 or vrNordic_g14.limIntegrator.y > vrNordic_g14.limIntegrator.outMax and vrNordic_g14.limIntegrator.k * vrNordic_g14.gain.y > 0.0 then 0.0 else vrNordic_g14.limIntegrator.k * vrNordic_g14.gain.y) - der(vrNordic_g14.limIntegrator.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15623};
  modelica_boolean tmp1564;
  modelica_real tmp1565;
  modelica_real tmp1566;
  modelica_boolean tmp1567;
  modelica_real tmp1568;
  modelica_real tmp1569;
  modelica_boolean tmp1570;
  modelica_real tmp1571;
  modelica_real tmp1572;
  modelica_boolean tmp1573;
  modelica_real tmp1574;
  modelica_real tmp1575;
  tmp1565 = 1.0;
  tmp1566 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5210]] /* vrNordic_g14.limIntegrator.outMin PARAM */));
  relationhysteresis(data, &tmp1564, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5210]] /* vrNordic_g14.limIntegrator.outMin PARAM */), tmp1565, tmp1566, 440, Less, LessZC);
  tmp1568 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */))) * (1.0);
  tmp1569 = 0.0;
  relationhysteresis(data, &tmp1567, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)), 0.0, tmp1568, tmp1569, 441, Less, LessZC);
  tmp1571 = 1.0;
  tmp1572 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5209]] /* vrNordic_g14.limIntegrator.outMax PARAM */));
  relationhysteresis(data, &tmp1570, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5209]] /* vrNordic_g14.limIntegrator.outMax PARAM */), tmp1571, tmp1572, 442, Greater, GreaterZC);
  tmp1574 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */))) * (1.0);
  tmp1575 = 0.0;
  relationhysteresis(data, &tmp1573, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)), 0.0, tmp1574, tmp1575, 443, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1304]) /* $DAEres1304 DAE_RESIDUAL_VAR */ = (((tmp1564 && tmp1567) || (tmp1570 && tmp1573))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* der(vrNordic_g14.limIntegrator.y) STATE_DER */);
  threadData->lastEquationSolved = 15623;
}
/*
equation index: 15624
type: SIMPLE_ASSIGN
g14.iStatorPu.re = if g14.running.value then g14.rTfoPu * g14.terminal.i.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* g14.rTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* g14.terminal.i.re variable */)):0.0);
  threadData->lastEquationSolved = 15624;
}
/*
equation index: 15625
type: SIMPLE_ASSIGN
g14.sStatorPu.re = if g14.running.value then g14.uStatorPu.re * g14.iStatorPu.re + g14.uStatorPu.im * g14.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1644]] /* g14.sStatorPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15625;
}
/*
equation index: 15626
type: SIMPLE_ASSIGN
g14.sStatorPu.im = if g14.running.value then g14.uStatorPu.im * g14.iStatorPu.re - g14.uStatorPu.re * g14.iStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1643]] /* g14.sStatorPu.im variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */))):0.0);
  threadData->lastEquationSolved = 15626;
}
/*
equation index: 15627
type: SIMPLE_ASSIGN
g14.QStatorPu = if g14.running.value then -g14.sStatorPu.im else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1620]] /* g14.QStatorPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1643]] /* g14.sStatorPu.im variable */)):0.0);
  threadData->lastEquationSolved = 15627;
}
/*
equation index: 15628
type: SIMPLE_ASSIGN
g14.QStatorPuQNom = if g14.running.value then 100.0 * g14.QStatorPu / g14.QNomAlt else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1621]] /* g14.QStatorPuQNom variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1620]] /* g14.QStatorPu variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1581]] /* g14.QNomAlt PARAM */),"g14.QNomAlt")):0.0);
  threadData->lastEquationSolved = 15628;
}
/*
equation index: 15629
type: SIMPLE_ASSIGN
g14.IStatorPu = if g14.running.value then if g14.iStatorPu.re == 0.0 and g14.iStatorPu.im == 0.0 then 0.0 else (g14.iStatorPu.re ^ 2.0 + g14.iStatorPu.im ^ 2.0) ^ 0.5 else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15629};
  modelica_real tmp1576;
  modelica_real tmp1577;
  modelica_real tmp1578;
  modelica_boolean tmp1579;
  modelica_real tmp1580;
  modelica_boolean tmp1581;
  modelica_real tmp1582;
  tmp1581 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[522]] /* g14.running.value DISCRETE */);
  if(tmp1581)
  {
    tmp1579 = (modelica_boolean)(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */) == 0.0));
    if(tmp1579)
    {
      tmp1580 = 0.0;
    }
    else
    {
      tmp1576 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */);
      tmp1577 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */);
      tmp1578 = (tmp1576 * tmp1576) + (tmp1577 * tmp1577);
      if(tmp1578 < 0.0) {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1578, 0.5);
      }
      tmp1580 = sqrt(tmp1578);
    }
    tmp1582 = tmp1580;
  }
  else
  {
    tmp1582 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1612]] /* g14.IStatorPu variable */) = tmp1582;
  threadData->lastEquationSolved = 15629;
}
/*
equation index: 15630
type: SIMPLE_ASSIGN
$whenCondition25 = not pre(g13.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15630};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[167]] /* $whenCondition25 DISCRETE */) = (!(data->simulationInfo->booleanVarsPre[518] /* g13.running.value DISCRETE */));
  threadData->lastEquationSolved = 15630;
}
/*
equation index: 15631
type: WHEN

when {} then
  g13.running.value = false;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15631};
  if(0)
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */) = 0 /* false */;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[167]] /* $whenCondition25 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[167] /* $whenCondition25 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */) = 1 /* true */;
  }
  threadData->lastEquationSolved = 15631;
}
/*
equation index: 15633
type: SIMPLE_ASSIGN
$whenCondition27 = not g13.running.value
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15633};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[189]] /* $whenCondition27 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */));
  threadData->lastEquationSolved = 15633;
}
/*
equation index: 15634
type: SIMPLE_ASSIGN
$whenCondition26 = g13.running.value and not pre(g13.running.value)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15634};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[178]] /* $whenCondition26 DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */) && (!(data->simulationInfo->booleanVarsPre[518] /* g13.running.value DISCRETE */)));
  threadData->lastEquationSolved = 15634;
}
/*
equation index: 15635
type: WHEN

when {$whenCondition27} then
  g13.state = Dynawo.Electrical.Constants.state.Open;
end when;
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15635};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[189]] /* $whenCondition27 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[189] /* $whenCondition27 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* g13.state DISCRETE */) = 1;
  }
  else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[178]] /* $whenCondition26 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[178] /* $whenCondition26 DISCRETE */) /* edge */))
  {
    (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* g13.state DISCRETE */) = 2;
  }
  threadData->lastEquationSolved = 15635;
}
/*
equation index: 15637
type: SIMPLE_ASSIGN
g13.converter.u = Integer(g13.state)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15637};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* g13.converter.u DISCRETE */) = ((modelica_integer)((data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[25]] /* g13.state DISCRETE */)));
  threadData->lastEquationSolved = 15637;
}
/*
equation index: 15638
type: SIMPLE_ASSIGN
g13.genState = (*Real*)(g13.converter.u)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1580]] /* g13.genState variable */) = ((modelica_real)(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* g13.converter.u DISCRETE */));
  threadData->lastEquationSolved = 15638;
}
/*
equation index: 15639
type: SIMPLE_ASSIGN
$DAEres127 = if g13.running.value then der(g13.theta) - 314.1592653589793 * (g13.omegaPu - omegaCOI) else der(g13.theta)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15639};
  (data->simulationInfo->daeModeData->residualVars[127]) /* $DAEres127 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* der(g13.theta) STATE_DER */) - ((314.1592653589793) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* der(g13.theta) STATE_DER */));
  threadData->lastEquationSolved = 15639;
}
/*
equation index: 15640
type: SIMPLE_ASSIGN
g13.cmPu = if g13.running.value then g13.PmPu / g13.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15640};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1578]] /* g13.cmPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1571]] /* g13.PmPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */),"g13.omegaPu"):0.0);
  threadData->lastEquationSolved = 15640;
}
/*
equation index: 15641
type: SIMPLE_ASSIGN
g13.ufPu = if g13.running.value then vrNordic_g13.limIntegrator.y * g13.Kuf * g13.rTfoPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1610]] /* g13.ufPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* g13.Kuf PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */))):0.0);
  threadData->lastEquationSolved = 15641;
}
/*
equation index: 15642
type: SIMPLE_ASSIGN
$DAEres216 = if g13.running.value then g13.MdSatPPu - (g13.miPu + g13.MsalPu * g13.sin2Eta) else g13.MdSatPPu - g13.MdPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15642};
  (data->simulationInfo->daeModeData->residualVars[216]) /* $DAEres216 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1595]] /* g13.miPu variable */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1472]] /* g13.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1599]] /* g13.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1462]] /* g13.MdPPu PARAM */));
  threadData->lastEquationSolved = 15642;
}
/*
equation index: 15643
type: SIMPLE_ASSIGN
$DAEres217 = if g13.running.value then g13.mdsPu - g13.MdPPu / (1.0 + g13.md * g13.lambdaAirGapPu ^ g13.nd) else g13.mdsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15643};
  modelica_real tmp1583;
  modelica_real tmp1584;
  modelica_real tmp1585;
  modelica_real tmp1586;
  modelica_real tmp1587;
  modelica_real tmp1588;
  modelica_real tmp1589;
  modelica_boolean tmp1590;
  modelica_real tmp1591;
  tmp1590 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp1590)
  {
    tmp1583 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1591]] /* g13.lambdaAirGapPu variable */);
    tmp1584 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1514]] /* g13.nd PARAM */);
    if(tmp1583 < 0.0 && tmp1584 != 0.0)
    {
      tmp1586 = modf(tmp1584, &tmp1587);
      
      if(tmp1586 > 0.5)
      {
        tmp1586 -= 1.0;
        tmp1587 += 1.0;
      }
      else if(tmp1586 < -0.5)
      {
        tmp1586 += 1.0;
        tmp1587 -= 1.0;
      }
      
      if(fabs(tmp1586) < 1e-10)
        tmp1585 = pow(tmp1583, tmp1587);
      else
      {
        tmp1589 = modf(1.0/tmp1584, &tmp1588);
        if(tmp1589 > 0.5)
        {
          tmp1589 -= 1.0;
          tmp1588 += 1.0;
        }
        else if(tmp1589 < -0.5)
        {
          tmp1589 += 1.0;
          tmp1588 -= 1.0;
        }
        if(fabs(tmp1589) < 1e-10 && ((unsigned long)tmp1588 & 1))
        {
          tmp1585 = -pow(-tmp1583, tmp1586)*pow(tmp1583, tmp1587);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1583, tmp1584);
        }
      }
    }
    else
    {
      tmp1585 = pow(tmp1583, tmp1584);
    }
    if(isnan(tmp1585) || isinf(tmp1585))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1583, tmp1584);
    }
    tmp1591 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1594]] /* g13.mdsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1462]] /* g13.MdPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* g13.md PARAM */)) * (tmp1585),"1.0 + g13.md * g13.lambdaAirGapPu ^ g13.nd"));
  }
  else
  {
    tmp1591 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1594]] /* g13.mdsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[217]) /* $DAEres217 DAE_RESIDUAL_VAR */ = tmp1591;
  threadData->lastEquationSolved = 15643;
}
/*
equation index: 15644
type: SIMPLE_ASSIGN
$DAEres218 = if g13.running.value then g13.mqsPu - g13.MqPPu / (1.0 + g13.mq * g13.lambdaAirGapPu ^ g13.nq) else g13.mqsPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15644};
  modelica_real tmp1592;
  modelica_real tmp1593;
  modelica_real tmp1594;
  modelica_real tmp1595;
  modelica_real tmp1596;
  modelica_real tmp1597;
  modelica_real tmp1598;
  modelica_boolean tmp1599;
  modelica_real tmp1600;
  tmp1599 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp1599)
  {
    tmp1592 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1591]] /* g13.lambdaAirGapPu variable */);
    tmp1593 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1515]] /* g13.nq PARAM */);
    if(tmp1592 < 0.0 && tmp1593 != 0.0)
    {
      tmp1595 = modf(tmp1593, &tmp1596);
      
      if(tmp1595 > 0.5)
      {
        tmp1595 -= 1.0;
        tmp1596 += 1.0;
      }
      else if(tmp1595 < -0.5)
      {
        tmp1595 += 1.0;
        tmp1596 -= 1.0;
      }
      
      if(fabs(tmp1595) < 1e-10)
        tmp1594 = pow(tmp1592, tmp1596);
      else
      {
        tmp1598 = modf(1.0/tmp1593, &tmp1597);
        if(tmp1598 > 0.5)
        {
          tmp1598 -= 1.0;
          tmp1597 += 1.0;
        }
        else if(tmp1598 < -0.5)
        {
          tmp1598 += 1.0;
          tmp1597 -= 1.0;
        }
        if(fabs(tmp1598) < 1e-10 && ((unsigned long)tmp1597 & 1))
        {
          tmp1594 = -pow(-tmp1592, tmp1595)*pow(tmp1592, tmp1596);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1592, tmp1593);
        }
      }
    }
    else
    {
      tmp1594 = pow(tmp1592, tmp1593);
    }
    if(isnan(tmp1594) || isinf(tmp1594))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1592, tmp1593);
    }
    tmp1600 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1596]] /* g13.mqsPu variable */) - (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1468]] /* g13.MqPPu PARAM */),1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1513]] /* g13.mq PARAM */)) * (tmp1594),"1.0 + g13.mq * g13.lambdaAirGapPu ^ g13.nq"));
  }
  else
  {
    tmp1600 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1596]] /* g13.mqsPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[218]) /* $DAEres218 DAE_RESIDUAL_VAR */ = tmp1600;
  threadData->lastEquationSolved = 15644;
}
/*
equation index: 15645
type: SIMPLE_ASSIGN
$DAEres219 = if g13.running.value then g13.miPu - (g13.mdsPu * g13.cos2Eta + g13.mqsPu * g13.sin2Eta) else g13.miPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15645};
  (data->simulationInfo->daeModeData->residualVars[219]) /* $DAEres219 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1595]] /* g13.miPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1594]] /* g13.mdsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1579]] /* g13.cos2Eta variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1596]] /* g13.mqsPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1599]] /* g13.sin2Eta variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1595]] /* g13.miPu variable */));
  threadData->lastEquationSolved = 15645;
}
/*
equation index: 15646
type: SIMPLE_ASSIGN
$DAEres220 = if g13.running.value then g13.sin2Eta - (g13.lambdaAQPu / g13.lambdaAirGapPu) ^ 2.0 else g13.sin2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15646};
  modelica_real tmp1601;
  modelica_boolean tmp1602;
  modelica_real tmp1603;
  tmp1602 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp1602)
  {
    tmp1601 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1590]] /* g13.lambdaAQPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1591]] /* g13.lambdaAirGapPu variable */),"g13.lambdaAirGapPu");
    tmp1603 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1599]] /* g13.sin2Eta variable */) - ((tmp1601 * tmp1601));
  }
  else
  {
    tmp1603 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1599]] /* g13.sin2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[220]) /* $DAEres220 DAE_RESIDUAL_VAR */ = tmp1603;
  threadData->lastEquationSolved = 15646;
}
/*
equation index: 15647
type: SIMPLE_ASSIGN
$DAEres221 = if g13.running.value then g13.lambdaAirGapPu - sqrt(g13.lambdaADPu ^ 2.0 + g13.lambdaAQPu ^ 2.0) else g13.lambdaAirGapPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15647};
  modelica_real tmp1604;
  modelica_real tmp1605;
  modelica_real tmp1606;
  modelica_boolean tmp1607;
  modelica_real tmp1608;
  tmp1607 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp1607)
  {
    tmp1604 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1589]] /* g13.lambdaADPu variable */);
    tmp1605 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1590]] /* g13.lambdaAQPu variable */);
    tmp1606 = (tmp1604 * tmp1604) + (tmp1605 * tmp1605);
    if(!(tmp1606 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(g13.lambdaADPu ^ 2.0 + g13.lambdaAQPu ^ 2.0) was %g should be >= 0", tmp1606);
      }
    }
    tmp1608 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1591]] /* g13.lambdaAirGapPu variable */) - sqrt(tmp1606);
  }
  else
  {
    tmp1608 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1591]] /* g13.lambdaAirGapPu variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[221]) /* $DAEres221 DAE_RESIDUAL_VAR */ = tmp1608;
  threadData->lastEquationSolved = 15647;
}
/*
equation index: 15648
type: SIMPLE_ASSIGN
$DAEres222 = if g13.running.value then g13.cos2Eta - (g13.lambdaADPu / g13.lambdaAirGapPu) ^ 2.0 else g13.cos2Eta
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15648};
  modelica_real tmp1609;
  modelica_boolean tmp1610;
  modelica_real tmp1611;
  tmp1610 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */);
  if(tmp1610)
  {
    tmp1609 = DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1589]] /* g13.lambdaADPu variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1591]] /* g13.lambdaAirGapPu variable */),"g13.lambdaAirGapPu");
    tmp1611 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1579]] /* g13.cos2Eta variable */) - ((tmp1609 * tmp1609));
  }
  else
  {
    tmp1611 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1579]] /* g13.cos2Eta variable */);
  }
  (data->simulationInfo->daeModeData->residualVars[222]) /* $DAEres222 DAE_RESIDUAL_VAR */ = tmp1611;
  threadData->lastEquationSolved = 15648;
}
/*
equation index: 15649
type: SIMPLE_ASSIGN
$DAEres223 = if g13.running.value then g13.MqSatPPu - (g13.miPu - g13.MsalPu * g13.cos2Eta) else g13.MqSatPPu - g13.MqPPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15649};
  (data->simulationInfo->daeModeData->residualVars[223]) /* $DAEres223 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1595]] /* g13.miPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1472]] /* g13.MsalPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1579]] /* g13.cos2Eta variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1468]] /* g13.MqPPu PARAM */));
  threadData->lastEquationSolved = 15649;
}
/*
equation index: 15650
type: SIMPLE_ASSIGN
$DAEres224 = if g13.running.value then g13.uqPu - ((g13.RaPPu + g13.RTfoPu) * g13.iqPu + g13.omegaPu * g13.lambdadPu) else g13.lambdaqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15650};
  (data->simulationInfo->daeModeData->residualVars[224]) /* $DAEres224 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1611]] /* g13.uqPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1488]] /* g13.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* g13.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1592]] /* g13.lambdadPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1593]] /* g13.lambdaqPu variable */));
  threadData->lastEquationSolved = 15650;
}
/*
equation index: 15651
type: SIMPLE_ASSIGN
$DAEres225 = if g13.running.value then g13.lambdaAQPu - g13.MqSatPPu * (g13.iqPu + g13.iQ1Pu + g13.iQ2Pu) else g13.lambdaAQPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15651};
  (data->simulationInfo->daeModeData->residualVars[225]) /* $DAEres225 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1590]] /* g13.lambdaAQPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1582]] /* g13.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* g13.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1590]] /* g13.lambdaAQPu variable */));
  threadData->lastEquationSolved = 15651;
}
/*
equation index: 15652
type: SIMPLE_ASSIGN
$DAEres226 = if g13.running.value then g13.lambdaQ2Pu - (g13.MqSatPPu * (g13.iqPu + g13.iQ1Pu) + (g13.MqSatPPu + g13.LQ2PPu) * g13.iQ2Pu) else g13.iQ2Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15652};
  (data->simulationInfo->daeModeData->residualVars[226]) /* $DAEres226 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* g13.lambdaQ2Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1582]] /* g13.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1449]] /* g13.LQ2PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* g13.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* g13.iQ2Pu variable */));
  threadData->lastEquationSolved = 15652;
}
/*
equation index: 15653
type: SIMPLE_ASSIGN
$DAEres227 = if g13.running.value then g13.lambdaQ1Pu - (g13.MqSatPPu * g13.iqPu + (g13.MqSatPPu + g13.LQ1PPu) * g13.iQ1Pu + g13.MqSatPPu * g13.iQ2Pu) else g13.iQ1Pu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15653};
  (data->simulationInfo->daeModeData->residualVars[227]) /* $DAEres227 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* g13.lambdaQ1Pu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1448]] /* g13.LQ1PPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1582]] /* g13.iQ1Pu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* g13.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1582]] /* g13.iQ1Pu variable */));
  threadData->lastEquationSolved = 15653;
}
/*
equation index: 15654
type: SIMPLE_ASSIGN
$DAEres228 = if g13.running.value then g13.lambdaqPu - ((g13.MqSatPPu + g13.LqPPu + g13.XTfoPu) * g13.iqPu + g13.MqSatPPu * (g13.iQ1Pu + g13.iQ2Pu)) else g13.iDPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15654};
  (data->simulationInfo->daeModeData->residualVars[228]) /* $DAEres228 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1593]] /* g13.lambdaqPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* g13.LqPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* g13.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1568]] /* g13.MqSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1582]] /* g13.iQ1Pu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* g13.iQ2Pu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* g13.iDPu variable */));
  threadData->lastEquationSolved = 15654;
}
/*
equation index: 15655
type: SIMPLE_ASSIGN
$DAEres229 = if g13.running.value then g13.lambdaADPu - g13.MdSatPPu * (g13.idPu + g13.ifPu + g13.iDPu) else g13.lambdaADPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15655};
  (data->simulationInfo->daeModeData->residualVars[229]) /* $DAEres229 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1589]] /* g13.lambdaADPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* g13.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1589]] /* g13.lambdaADPu variable */));
  threadData->lastEquationSolved = 15655;
}
/*
equation index: 15656
type: SIMPLE_ASSIGN
$DAEres230 = if g13.running.value then g13.lambdaDPu - (g13.MdSatPPu * g13.idPu + (g13.MdSatPPu + g13.MrcPPu) * g13.ifPu + (g13.MdSatPPu + g13.LDPPu + g13.MrcPPu) * g13.iDPu) else g13.ifPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15656};
  (data->simulationInfo->daeModeData->residualVars[230]) /* $DAEres230 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* g13.lambdaDPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* g13.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1447]] /* g13.LDPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* g13.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* g13.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */));
  threadData->lastEquationSolved = 15656;
}
/*
equation index: 15657
type: SIMPLE_ASSIGN
$DAEres231 = if g13.running.value then 100.0 * g13.terminal.i.im / g13.SNom - (sin(g13.theta) * g13.iqPu - cos(g13.theta) * g13.idPu) else g13.terminal.i.im
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15657};
  (data->simulationInfo->daeModeData->residualVars[231]) /* $DAEres231 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */),"g13.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* g13.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* g13.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1602]] /* g13.terminal.i.im variable */));
  threadData->lastEquationSolved = 15657;
}
/*
equation index: 15658
type: SIMPLE_ASSIGN
$DAEres1148 = if g13.running.value then 100.0 * g13.terminal.i.re / g13.SNom - (sin(g13.theta) * g13.idPu + cos(g13.theta) * g13.iqPu) else g13.terminal.i.re
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15658};
  (data->simulationInfo->daeModeData->residualVars[1148]) /* $DAEres1148 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(100.0) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */),"g13.SNom")) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* g13.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* g13.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1603]] /* g13.terminal.i.re variable */));
  threadData->lastEquationSolved = 15658;
}
/*
equation index: 15659
type: SIMPLE_ASSIGN
$DAEres1149 = if g13.running.value then g13.lambdafPu - (g13.MdSatPPu * g13.idPu + (g13.MdSatPPu + g13.LfPPu + g13.MrcPPu) * g13.ifPu + (g13.MdSatPPu + g13.MrcPPu) * g13.iDPu) else g13.iqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15659};
  (data->simulationInfo->daeModeData->residualVars[1149]) /* $DAEres1149 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* g13.lambdafPu STATE(1) */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1460]] /* g13.LfPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* g13.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* g13.MrcPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* g13.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */));
  threadData->lastEquationSolved = 15659;
}
/*
equation index: 15660
type: SIMPLE_ASSIGN
$DAEres1150 = if g13.running.value then g13.lambdadPu - ((g13.MdSatPPu + g13.LdPPu + g13.XTfoPu) * g13.idPu + g13.MdSatPPu * (g13.ifPu + g13.iDPu)) else g13.idPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15660};
  (data->simulationInfo->daeModeData->residualVars[1150]) /* $DAEres1150 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1592]] /* g13.lambdadPu variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1459]] /* g13.LdPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* g13.XTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1567]] /* g13.MdSatPPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* g13.iDPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */));
  threadData->lastEquationSolved = 15660;
}
/*
equation index: 15661
type: SIMPLE_ASSIGN
$DAEres1151 = if g13.running.value then g13.udPu - ((g13.RaPPu + g13.RTfoPu) * g13.idPu - g13.omegaPu * g13.lambdaqPu) else g13.lambdadPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15661};
  (data->simulationInfo->daeModeData->residualVars[1151]) /* $DAEres1151 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1609]] /* g13.udPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1488]] /* g13.RaPPu PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* g13.RTfoPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1593]] /* g13.lambdaqPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1592]] /* g13.lambdadPu variable */));
  threadData->lastEquationSolved = 15661;
}
/*
equation index: 15662
type: SIMPLE_ASSIGN
$DAEres1152 = if g13.running.value then g13.terminal.V.im - (sin(g13.theta) * g13.uqPu - cos(g13.theta) * g13.udPu) else g13.uqPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15662};
  (data->simulationInfo->daeModeData->residualVars[1152]) /* $DAEres1152 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* g13.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1611]] /* g13.uqPu variable */)) - ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* g13.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1609]] /* g13.udPu variable */)))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1611]] /* g13.uqPu variable */));
  threadData->lastEquationSolved = 15662;
}
/*
equation index: 15663
type: SIMPLE_ASSIGN
$DAEres1153 = if g13.running.value then g13.terminal.V.re - (sin(g13.theta) * g13.udPu + cos(g13.theta) * g13.uqPu) else g13.udPu
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15663};
  (data->simulationInfo->daeModeData->residualVars[1153]) /* $DAEres1153 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) - ((sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* g13.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1609]] /* g13.udPu variable */)) + (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* g13.theta STATE(1) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1611]] /* g13.uqPu variable */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1609]] /* g13.udPu variable */));
  threadData->lastEquationSolved = 15663;
}
/*
equation index: 15664
type: SIMPLE_ASSIGN
g13.uPu.re = if g13.running.value then g13.terminal.V.re else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1606]] /* g13.uPu.re variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */):0.0);
  threadData->lastEquationSolved = 15664;
}
/*
equation index: 15665
type: SIMPLE_ASSIGN
g13.thetaInternal.value = if g13.running.value then Modelica.Math.atan3(g13.udPu, g13.uqPu, 0.0) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1604]] /* g13.thetaInternal.value variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?omc_Modelica_Math_atan3(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1609]] /* g13.udPu variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1611]] /* g13.uqPu variable */), 0.0):0.0);
  threadData->lastEquationSolved = 15665;
}
/*
equation index: 15666
type: SIMPLE_ASSIGN
vrNordic_g13.IrPu = if g13.running.value then g13.RfPPu * g13.ifPu / (g13.rTfoPu * g13.Kuf) else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3734]] /* vrNordic_g13.IrPu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* g13.RfPPu PARAM */)) * (DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* g13.rTfoPu PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* g13.Kuf PARAM */)),"g13.rTfoPu * g13.Kuf")):0.0);
  threadData->lastEquationSolved = 15666;
}
/*
equation index: 15667
type: SIMPLE_ASSIGN
vrNordic_g13.dIf.y = vrNordic_g13.IrPu - vrNordic_g13.const2.k
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3734]] /* vrNordic_g13.IrPu variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5081]] /* vrNordic_g13.const2.k PARAM */);
  threadData->lastEquationSolved = 15667;
}
/*
equation index: 15668
type: SIMPLE_ASSIGN
vrNordic_g13.gain1.y = vrNordic_g13.gain1.k * vrNordic_g13.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3743]] /* vrNordic_g13.gain1.y variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5087]] /* vrNordic_g13.gain1.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */));
  threadData->lastEquationSolved = 15668;
}
/*
equation index: 15669
type: SIMPLE_ASSIGN
vrNordic_g13.overExcitationLimitation.y = if vrNordic_g13.dIf.y < -0.1 then -1.0 else if vrNordic_g13.dIf.y < 0.0 then 0.0 else if vrNordic_g13.overExcitationLimitation.OelMode > 0.5 then 1.0 else vrNordic_g13.dIf.y
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15669};
  modelica_boolean tmp1612;
  modelica_real tmp1613;
  modelica_real tmp1614;
  modelica_boolean tmp1615;
  modelica_real tmp1616;
  modelica_real tmp1617;
  modelica_boolean tmp1618;
  modelica_boolean tmp1619;
  modelica_real tmp1620;
  modelica_boolean tmp1621;
  modelica_real tmp1622;
  tmp1613 = 1.0;
  tmp1614 = 0.1;
  relationhysteresis(data, &tmp1612, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */), -0.1, tmp1613, tmp1614, 422, Less, LessZC);
  tmp1621 = (modelica_boolean)tmp1612;
  if(tmp1621)
  {
    tmp1622 = -1.0;
  }
  else
  {
    tmp1616 = 1.0;
    tmp1617 = 0.0;
    relationhysteresis(data, &tmp1615, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */), 0.0, tmp1616, tmp1617, 423, Less, LessZC);
    tmp1619 = (modelica_boolean)tmp1615;
    if(tmp1619)
    {
      tmp1620 = 0.0;
    }
    else
    {
      tmp1618 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5135]] /* vrNordic_g13.overExcitationLimitation.OelMode PARAM */),0.5);
      tmp1620 = (tmp1618?1.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */));
    }
    tmp1622 = tmp1620;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */) = tmp1622;
  threadData->lastEquationSolved = 15669;
}
/*
equation index: 15670
type: SIMPLE_ASSIGN
$DAEres1212 = (if vrNordic_g13.timer.y < vrNordic_g13.timer.outMin and vrNordic_g13.timer.k * vrNordic_g13.overExcitationLimitation.y < 0.0 or vrNordic_g13.timer.y > vrNordic_g13.timer.outMax and vrNordic_g13.timer.k * vrNordic_g13.overExcitationLimitation.y > 0.0 then 0.0 else vrNordic_g13.timer.k * vrNordic_g13.overExcitationLimitation.y) - der(vrNordic_g13.timer.y)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15670};
  modelica_boolean tmp1623;
  modelica_real tmp1624;
  modelica_real tmp1625;
  modelica_boolean tmp1626;
  modelica_real tmp1627;
  modelica_real tmp1628;
  modelica_boolean tmp1629;
  modelica_real tmp1630;
  modelica_real tmp1631;
  modelica_boolean tmp1632;
  modelica_real tmp1633;
  modelica_real tmp1634;
  tmp1624 = 1.0;
  tmp1625 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5145]] /* vrNordic_g13.timer.outMin PARAM */));
  relationhysteresis(data, &tmp1623, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5145]] /* vrNordic_g13.timer.outMin PARAM */), tmp1624, tmp1625, 428, Less, LessZC);
  tmp1627 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */))) * (1.0);
  tmp1628 = 0.0;
  relationhysteresis(data, &tmp1626, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)), 0.0, tmp1627, tmp1628, 429, Less, LessZC);
  tmp1630 = 1.0;
  tmp1631 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5144]] /* vrNordic_g13.timer.outMax PARAM */));
  relationhysteresis(data, &tmp1629, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5144]] /* vrNordic_g13.timer.outMax PARAM */), tmp1630, tmp1631, 430, Greater, GreaterZC);
  tmp1633 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */))) * (1.0);
  tmp1634 = 0.0;
  relationhysteresis(data, &tmp1632, ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)), 0.0, tmp1633, tmp1634, 431, Greater, GreaterZC);
  (data->simulationInfo->daeModeData->residualVars[1212]) /* $DAEres1212 DAE_RESIDUAL_VAR */ = (((tmp1623 && tmp1626) || (tmp1629 && tmp1632))?0.0:((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* der(vrNordic_g13.timer.y) STATE_DER */);
  threadData->lastEquationSolved = 15670;
}
/*
equation index: 15671
type: SIMPLE_ASSIGN
$DAEres1213 = if g13.running.value then g13.ufPu - (g13.RfPPu * g13.ifPu + 0.0031830988618379067 * der(g13.lambdafPu)) else der(g13.lambdafPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15671};
  (data->simulationInfo->daeModeData->residualVars[1213]) /* $DAEres1213 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1610]] /* g13.ufPu variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* g13.RfPPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* g13.ifPu variable */)) + (0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* der(g13.lambdafPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* der(g13.lambdafPu) STATE_DER */));
  threadData->lastEquationSolved = 15671;
}
/*
equation index: 15672
type: SIMPLE_ASSIGN
$DAEres1214 = if g13.running.value then (-g13.RDPPu) * g13.iDPu - 0.0031830988618379067 * der(g13.lambdaDPu) else der(g13.lambdaDPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15672};
  (data->simulationInfo->daeModeData->residualVars[1214]) /* $DAEres1214 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1483]] /* g13.RDPPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1581]] /* g13.iDPu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* der(g13.lambdaDPu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* der(g13.lambdaDPu) STATE_DER */));
  threadData->lastEquationSolved = 15672;
}
/*
equation index: 15673
type: SIMPLE_ASSIGN
$DAEres1215 = if g13.running.value then (-g13.RQ2PPu) * g13.iQ2Pu - 0.0031830988618379067 * der(g13.lambdaQ2Pu) else der(g13.lambdaQ2Pu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15673};
  (data->simulationInfo->daeModeData->residualVars[1215]) /* $DAEres1215 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1485]] /* g13.RQ2PPu PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1583]] /* g13.iQ2Pu variable */)) - ((0.0031830988618379067) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* der(g13.lambdaQ2Pu) STATE_DER */))):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* der(g13.lambdaQ2Pu) STATE_DER */));
  threadData->lastEquationSolved = 15673;
}
/*
equation index: 15674
type: SIMPLE_ASSIGN
g13.cePu = if g13.running.value then g13.lambdaqPu * g13.idPu - g13.lambdadPu * g13.iqPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1577]] /* g13.cePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1593]] /* g13.lambdaqPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1586]] /* g13.idPu variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1592]] /* g13.lambdadPu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1588]] /* g13.iqPu variable */))):0.0);
  threadData->lastEquationSolved = 15674;
}
/*
equation index: 15675
type: SIMPLE_ASSIGN
g13.PePu = if g13.running.value then g13.cePu * g13.omegaPu else 0.0
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1570]] /* g13.PePu variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1577]] /* g13.cePu variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */)):0.0);
  threadData->lastEquationSolved = 15675;
}
/*
equation index: 15676
type: SIMPLE_ASSIGN
$DAEres1216 = if g13.running.value then 2.0 * g13.H * der(g13.omegaPu) - (g13.cmPu * g13.PNomTurb / g13.SNom + g13.DPu * (omegaCOI - g13.omegaPu) - g13.cePu) else der(g13.omegaPu)
*/
OMC_DISABLE_OPT
void MyNordic_initialized_TestCase_initialized_eqFunction_15676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15676};
  (data->simulationInfo->daeModeData->residualVars[1216]) /* $DAEres1216 DAE_RESIDUAL_VAR */ = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[518]] /* g13.running.value DISCRETE */)?(2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* g13.H PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* der(g13.omegaPu) STATE_DER */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1578]] /* g13.cmPu variable */)) * (DIVISION((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1476]] /* g13.PNomTurb PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1490]] /* g13.SNom PARAM */),"g13.SNom")) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* g13.DPu PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2928]] /* omegaCOI variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* g13.omegaPu STATE(1) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1577]] /* g13.cePu variable */)):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* der(g13.omegaPu) STATE_DER */));
  threadData->lastEquationSolved = 15676;
}
#if defined(__cplusplus)
}
#endif