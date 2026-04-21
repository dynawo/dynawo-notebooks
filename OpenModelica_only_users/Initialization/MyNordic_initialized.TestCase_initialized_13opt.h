#if defined(__cplusplus)
  extern "C" {
#endif
  int MyNordic_initialized_TestCase_initialized_mayer(DATA* data, modelica_real** res, short*);
  int MyNordic_initialized_TestCase_initialized_lagrange(DATA* data, modelica_real** res, short *, short *);
  int MyNordic_initialized_TestCase_initialized_getInputVarIndicesInOptimization(DATA* data, int* input_var_indices);
  int MyNordic_initialized_TestCase_initialized_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int MyNordic_initialized_TestCase_initialized_setInputData(DATA *data, const modelica_boolean file);
  int MyNordic_initialized_TestCase_initialized_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif
