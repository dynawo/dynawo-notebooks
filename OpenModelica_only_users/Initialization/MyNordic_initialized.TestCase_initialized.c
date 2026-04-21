/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#include "simulation/solver/events.h"
#include "util/real_array.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation MyNordic_initialized_TestCase_initialized_performSimulation
#define prefixedName_updateContinuousSystem MyNordic_initialized_TestCase_initialized_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation MyNordic_initialized_TestCase_initialized_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int MyNordic_initialized_TestCase_initialized_input_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int MyNordic_initialized_TestCase_initialized_input_function_init(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int MyNordic_initialized_TestCase_initialized_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int MyNordic_initialized_TestCase_initialized_inputNames(DATA *data, char ** names){
  
  return 0;
}

int MyNordic_initialized_TestCase_initialized_data_function(DATA *data, threadData_t *threadData)
{
  return 0;
}

int MyNordic_initialized_TestCase_initialized_dataReconciliationInputNames(DATA *data, char ** names){
  
  return 0;
}

int MyNordic_initialized_TestCase_initialized_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  
  return 0;
}

int MyNordic_initialized_TestCase_initialized_output_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int MyNordic_initialized_TestCase_initialized_setc_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int MyNordic_initialized_TestCase_initialized_setb_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}


OMC_DISABLE_OPT
int MyNordic_initialized_TestCase_initialized_functionDAE(DATA *data, threadData_t *threadData)
{
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  MyNordic_initialized_TestCase_initialized_functionLocalKnownVars(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  return 0;
}


int MyNordic_initialized_TestCase_initialized_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  
  return 0;
}


int MyNordic_initialized_TestCase_initialized_functionODE(DATA *data, threadData_t *threadData)
{
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  MyNordic_initialized_TestCase_initialized_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);
extern int _main_OptimizationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);

#include "MyNordic_initialized.TestCase_initialized_12jac.h"
#include "MyNordic_initialized.TestCase_initialized_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks MyNordic_initialized_TestCase_initialized_callback = {
  (int (*)(DATA *, threadData_t *, void *)) MyNordic_initialized_TestCase_initialized_performSimulation,    /* performSimulation */
  (int (*)(DATA *, threadData_t *, void *)) MyNordic_initialized_TestCase_initialized_performQSSSimulation,    /* performQSSSimulation */
  MyNordic_initialized_TestCase_initialized_updateContinuousSystem,    /* updateContinuousSystem */
  MyNordic_initialized_TestCase_initialized_callExternalObjectDestructors,    /* callExternalObjectDestructors */
  MyNordic_initialized_TestCase_initialized_initialNonLinearSystem,    /* initialNonLinearSystem */
  NULL,    /* initialLinearSystem */
  NULL,    /* initialMixedSystem */
  #if !defined(OMC_NO_STATESELECTION)
  MyNordic_initialized_TestCase_initialized_initializeStateSets,
  #else
  NULL,
  #endif    /* initializeStateSets */
  MyNordic_initialized_TestCase_initialized_initializeDAEmodeData,
  MyNordic_initialized_TestCase_initialized_functionODE,
  MyNordic_initialized_TestCase_initialized_functionAlgebraics,
  MyNordic_initialized_TestCase_initialized_functionDAE,
  MyNordic_initialized_TestCase_initialized_functionLocalKnownVars,
  MyNordic_initialized_TestCase_initialized_input_function,
  MyNordic_initialized_TestCase_initialized_input_function_init,
  MyNordic_initialized_TestCase_initialized_input_function_updateStartValues,
  MyNordic_initialized_TestCase_initialized_data_function,
  MyNordic_initialized_TestCase_initialized_output_function,
  MyNordic_initialized_TestCase_initialized_setc_function,
  MyNordic_initialized_TestCase_initialized_setb_function,
  MyNordic_initialized_TestCase_initialized_function_storeDelayed,
  MyNordic_initialized_TestCase_initialized_function_storeSpatialDistribution,
  MyNordic_initialized_TestCase_initialized_function_initSpatialDistribution,
  MyNordic_initialized_TestCase_initialized_updateBoundVariableAttributes,
  MyNordic_initialized_TestCase_initialized_functionInitialEquations,
  GLOBAL_EQUIDISTANT_HOMOTOPY,
  NULL,
  MyNordic_initialized_TestCase_initialized_functionRemovedInitialEquations,
  MyNordic_initialized_TestCase_initialized_updateBoundParameters,
  MyNordic_initialized_TestCase_initialized_checkForAsserts,
  MyNordic_initialized_TestCase_initialized_function_ZeroCrossingsEquations,
  MyNordic_initialized_TestCase_initialized_function_ZeroCrossings,
  MyNordic_initialized_TestCase_initialized_function_updateRelations,
  MyNordic_initialized_TestCase_initialized_zeroCrossingDescription,
  MyNordic_initialized_TestCase_initialized_relationDescription,
  MyNordic_initialized_TestCase_initialized_function_initSample,
  MyNordic_initialized_TestCase_initialized_INDEX_JAC_A,
  MyNordic_initialized_TestCase_initialized_INDEX_JAC_B,
  MyNordic_initialized_TestCase_initialized_INDEX_JAC_C,
  MyNordic_initialized_TestCase_initialized_INDEX_JAC_D,
  MyNordic_initialized_TestCase_initialized_INDEX_JAC_F,
  MyNordic_initialized_TestCase_initialized_INDEX_JAC_H,
  MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianA,
  MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianB,
  MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianC,
  MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianD,
  MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianF,
  MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianH,
  MyNordic_initialized_TestCase_initialized_functionJacA_column,
  MyNordic_initialized_TestCase_initialized_functionJacB_column,
  MyNordic_initialized_TestCase_initialized_functionJacC_column,
  MyNordic_initialized_TestCase_initialized_functionJacD_column,
  MyNordic_initialized_TestCase_initialized_functionJacF_column,
  MyNordic_initialized_TestCase_initialized_functionJacH_column,
  MyNordic_initialized_TestCase_initialized_linear_model_frame,
  MyNordic_initialized_TestCase_initialized_linear_model_datarecovery_frame,
  MyNordic_initialized_TestCase_initialized_mayer,
  MyNordic_initialized_TestCase_initialized_lagrange,
  MyNordic_initialized_TestCase_initialized_getInputVarIndicesInOptimization,
  MyNordic_initialized_TestCase_initialized_pickUpBoundsForInputsInOptimization,
  MyNordic_initialized_TestCase_initialized_setInputData,
  MyNordic_initialized_TestCase_initialized_getTimeGrid,
  MyNordic_initialized_TestCase_initialized_symbolicInlineSystem,
  MyNordic_initialized_TestCase_initialized_function_initSynchronous,
  MyNordic_initialized_TestCase_initialized_function_updateSynchronous,
  MyNordic_initialized_TestCase_initialized_function_equationsSynchronous,
  MyNordic_initialized_TestCase_initialized_inputNames,
  MyNordic_initialized_TestCase_initialized_dataReconciliationInputNames,
  MyNordic_initialized_TestCase_initialized_dataReconciliationUnmeasuredVariables,
  NULL,
  NULL,
  NULL,
  NULL,
  -1,
  NULL,
  NULL,
  -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/home/clarafercas/.openmodelica/libraries/Complex 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,64,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Dynawo"
#define _OMC_LIT_RESOURCE_1_dir_data "/home/clarafercas/Model_library/dynawo/dynawo/sources/Models/Modelica/Dynawo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,6,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,76,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/clarafercas/dynawo/OpenModelica/lib/omlibrary/Modelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,60,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/clarafercas/.openmodelica/libraries/ModelicaServices 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,73,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "MyNordic_initialized"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/clarafercas/dynawo-notebooks/OpenModelica_only_users/Initialization/MyNordic_initialized"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,20,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,94,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void MyNordic_initialized_TestCase_initialized_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &MyNordic_initialized_TestCase_initialized_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "MyNordic_initialized.TestCase_initialized";
  data->modelData->modelFilePrefix = "MyNordic_initialized.TestCase_initialized";
  data->modelData->modelFileName = "TestCase_initialized.mo";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/clarafercas/dynawo-notebooks/OpenModelica_only_users/Initialization/MyNordic_initialized";
  data->modelData->modelGUID = "{d5bf67b1-6646-41b6-813d-71c750e5cf65}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "MyNordic_initialized.TestCase_initialized_init.c"
    ;
  static const char contents_info[] =
    #include "MyNordic_initialized.TestCase_initialized_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "MyNordic_initialized.TestCase_initialized_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "MyNordic_initialized.TestCase_initialized_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->modelDataXml.fileName = "MyNordic_initialized.TestCase_initialized_info.json";
  data->modelData->resourcesDir = NULL;
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 320;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesRealArray = 3926;
  data->modelData->nVariablesIntegerArray = 175;
  data->modelData->nVariablesBooleanArray = 1075;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersRealArray = 5700;
  data->modelData->nParametersIntegerArray = 751;
  data->modelData->nParametersBooleanArray = 1081;
  data->modelData->nParametersStringArray = 0;
  data->modelData->nParametersReal = 5700;
  data->modelData->nParametersInteger = 751;
  data->modelData->nParametersBoolean = 1081;
  data->modelData->nParametersString = 0;
  data->modelData->nAliasRealArray = 2214;
  data->modelData->nAliasIntegerArray = 0;
  data->modelData->nAliasBooleanArray = 21;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  data->modelData->nZeroCrossings = 403;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 551;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 22;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 18520;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 1;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 7;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}


#if defined(__MINGW32__) || defined(_MSC_VER)

#if !defined(_UNICODE)
#define _UNICODE
#endif
#if !defined(UNICODE)
#define UNICODE
#endif

#include <windows.h>
char** omc_fixWindowsArgv(int argc, wchar_t **wargv)
{
  char** newargv;
  /* Support for non-ASCII characters
  * Read the unicode command line arguments and translate it to char*
  */
  newargv = (char**)malloc(argc*sizeof(char*));
  for (int i = 0; i < argc; i++) {
    newargv[i] = omc_wchar_to_multibyte_str(wargv[i]);
  }
  return newargv;
}

#define OMC_MAIN wmain
#define OMC_CHAR wchar_t
#define OMC_EXPORT __declspec(dllexport) extern

#else
#define omc_fixWindowsArgv(N, A) (A)
#define OMC_MAIN main
#define OMC_CHAR char
#define OMC_EXPORT extern
#endif

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
#if defined(OMC_DLL_MAIN_DEFINE)
OMC_EXPORT int omcDllMain(int argc, OMC_CHAR **argv)
#else
int OMC_MAIN(int argc, OMC_CHAR** argv)
#endif
{
  char** newargv = omc_fixWindowsArgv(argc, argv);
  /*
    Set the error functions to be used for simulation.
    The default value for them is 'functions' version. Change it here to 'simulation' versions
  */
  omc_assert = omc_assert_simulation;
  omc_assert_withEquationIndexes = omc_assert_simulation_withEquationIndexes;

  omc_assert_warning_withEquationIndexes = omc_assert_warning_simulation_withEquationIndexes;
  omc_assert_warning = omc_assert_warning_simulation;
  omc_terminate = omc_terminate_simulation;
  omc_throw = omc_throw_simulation;

  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 1;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    MyNordic_initialized_TestCase_initialized_setupDataStruc(&data, threadData);
    res = _main_initRuntimeAndSimulation(argc, newargv, &data, threadData);
    if(res == 0) {
      if (omc_flag[FLAG_MOO_OPTIMIZATION]) {
        res = _main_OptimizationRuntime(argc, newargv, &data, threadData);
      } else {
        res = _main_SimulationRuntime(argc, newargv, &data, threadData);
      }
    }
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  return res;
}

#ifdef __cplusplus
}
#endif


