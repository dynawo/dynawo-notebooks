/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define MyNordic_initialized_TestCase_initialized_INDEX_JAC_NLSJac0 0
int MyNordic_initialized_TestCase_initialized_functionJacNLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianNLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define MyNordic_initialized_TestCase_initialized_INDEX_JAC_H 1
int MyNordic_initialized_TestCase_initialized_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define MyNordic_initialized_TestCase_initialized_INDEX_JAC_F 2
int MyNordic_initialized_TestCase_initialized_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define MyNordic_initialized_TestCase_initialized_INDEX_JAC_D 3
int MyNordic_initialized_TestCase_initialized_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define MyNordic_initialized_TestCase_initialized_INDEX_JAC_C 4
int MyNordic_initialized_TestCase_initialized_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define MyNordic_initialized_TestCase_initialized_INDEX_JAC_B 5
int MyNordic_initialized_TestCase_initialized_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define MyNordic_initialized_TestCase_initialized_INDEX_JAC_A 6
int MyNordic_initialized_TestCase_initialized_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int MyNordic_initialized_TestCase_initialized_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
