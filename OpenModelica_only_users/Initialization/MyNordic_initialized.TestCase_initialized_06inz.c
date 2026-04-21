/* Initialization */
#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#include "MyNordic_initialized.TestCase_initialized_11mix.h"
#include "MyNordic_initialized.TestCase_initialized_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void MyNordic_initialized_TestCase_initialized_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_1(DATA *data, threadData_t *threadData);
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_2(DATA *data, threadData_t *threadData);
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_3(DATA *data, threadData_t *threadData);
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_4(DATA *data, threadData_t *threadData);
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_5(DATA *data, threadData_t *threadData);
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_6(DATA *data, threadData_t *threadData);
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_7(DATA *data, threadData_t *threadData);
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_8(DATA *data, threadData_t *threadData);
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_9(DATA *data, threadData_t *threadData);
void MyNordic_initialized_TestCase_initialized_functionInitialEquations_10(DATA *data, threadData_t *threadData);

int MyNordic_initialized_TestCase_initialized_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_0(data, threadData);
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_1(data, threadData);
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_2(data, threadData);
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_3(data, threadData);
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_4(data, threadData);
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_5(data, threadData);
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_6(data, threadData);
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_7(data, threadData);
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_8(data, threadData);
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_9(data, threadData);
  MyNordic_initialized_TestCase_initialized_functionInitialEquations_10(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}

/* No MyNordic_initialized_TestCase_initialized_functionInitialEquations_lambda0 function */

int MyNordic_initialized_TestCase_initialized_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  return 0;
}


#if defined(__cplusplus)
}
#endif
