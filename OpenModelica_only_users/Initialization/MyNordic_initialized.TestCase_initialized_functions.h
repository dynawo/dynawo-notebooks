#ifndef MyNordic_initialized_TestCase_initialized__H
#define MyNordic_initialized_TestCase_initialized__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  modelica_real _re;
  modelica_real _im;
} Complex;
extern struct record_description Complex__desc;

void Complex_construct_p(threadData_t *threadData, void* v_ths );
#define Complex_construct(td, ths ) Complex_construct_p(td, &ths )
void Complex_copy_p(void* v_src, void* v_dst);
#define Complex_copy(src,dst) Complex_copy_p(&src, &dst)


void Complex_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_re, modelica_real in_im);
#define Complex_wrap_vars(td, dst , in_re, in_im) Complex_wrap_vars_p(td, &dst , in_re, in_im)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Complex_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Complex_copy_to_vars(src,...) Complex_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Complex_array;
#define alloc_Complex_array(dst,ndims,...) generic_array_create(NULL, dst, Complex_construct_p, ndims, sizeof(Complex), __VA_ARGS__)
#define Complex_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Complex_copy_p, sizeof(Complex))
#define Complex_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Complex_copy_p, sizeof(Complex))
#define Complex_array_get(src,ndims,...)   (*(Complex*)(generic_array_get(&src, sizeof(Complex), __VA_ARGS__)))
#define Complex_set(dst,val,...)           generic_array_set(&dst, &val, Complex_copy_p, sizeof(Complex), __VA_ARGS__)

void Complex_1_2_construct_p(threadData_t *threadData, void* v_ths , modelica_real in_re, modelica_real in_im);
#define Complex_1_2_construct(td, ths , in_re, in_im) Complex_1_2_construct_p(td, &ths , in_re, in_im)

#define alloc_Complex_1_2_array(dst,ndims,...) generic_array_create(NULL, dst, Complex_1_2_construct_p, ndims, sizeof(Complex), __VA_ARGS__)

typedef Complex Dynawo_Connectors_ComplexCurrentPuConnector;
extern struct record_description Dynawo_Connectors_ComplexCurrentPuConnector__desc;

void Dynawo_Connectors_ComplexCurrentPuConnector_construct_p(threadData_t *threadData, void* v_ths );
#define Dynawo_Connectors_ComplexCurrentPuConnector_construct(td, ths ) Dynawo_Connectors_ComplexCurrentPuConnector_construct_p(td, &ths )
void Dynawo_Connectors_ComplexCurrentPuConnector_copy_p(void* v_src, void* v_dst);
#define Dynawo_Connectors_ComplexCurrentPuConnector_copy(src,dst) Dynawo_Connectors_ComplexCurrentPuConnector_copy_p(&src, &dst)


void Dynawo_Connectors_ComplexCurrentPuConnector_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_re, modelica_real in_im);
#define Dynawo_Connectors_ComplexCurrentPuConnector_wrap_vars(td, dst , in_re, in_im) Dynawo_Connectors_ComplexCurrentPuConnector_wrap_vars_p(td, &dst , in_re, in_im)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Dynawo_Connectors_ComplexCurrentPuConnector_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Dynawo_Connectors_ComplexCurrentPuConnector_copy_to_vars(src,...) Dynawo_Connectors_ComplexCurrentPuConnector_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Dynawo_Connectors_ComplexCurrentPuConnector_array;
#define alloc_Dynawo_Connectors_ComplexCurrentPuConnector_array(dst,ndims,...) generic_array_create(NULL, dst, Dynawo_Connectors_ComplexCurrentPuConnector_construct_p, ndims, sizeof(Dynawo_Connectors_ComplexCurrentPuConnector), __VA_ARGS__)
#define Dynawo_Connectors_ComplexCurrentPuConnector_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Dynawo_Connectors_ComplexCurrentPuConnector_copy_p, sizeof(Dynawo_Connectors_ComplexCurrentPuConnector))
#define Dynawo_Connectors_ComplexCurrentPuConnector_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Dynawo_Connectors_ComplexCurrentPuConnector_copy_p, sizeof(Dynawo_Connectors_ComplexCurrentPuConnector))
#define Dynawo_Connectors_ComplexCurrentPuConnector_array_get(src,ndims,...)   (*(Dynawo_Connectors_ComplexCurrentPuConnector*)(generic_array_get(&src, sizeof(Dynawo_Connectors_ComplexCurrentPuConnector), __VA_ARGS__)))
#define Dynawo_Connectors_ComplexCurrentPuConnector_set(dst,val,...)           generic_array_set(&dst, &val, Dynawo_Connectors_ComplexCurrentPuConnector_copy_p, sizeof(Dynawo_Connectors_ComplexCurrentPuConnector), __VA_ARGS__)

typedef Complex Dynawo_Connectors_ComplexVoltagePuConnector;
extern struct record_description Dynawo_Connectors_ComplexVoltagePuConnector__desc;

void Dynawo_Connectors_ComplexVoltagePuConnector_construct_p(threadData_t *threadData, void* v_ths );
#define Dynawo_Connectors_ComplexVoltagePuConnector_construct(td, ths ) Dynawo_Connectors_ComplexVoltagePuConnector_construct_p(td, &ths )
void Dynawo_Connectors_ComplexVoltagePuConnector_copy_p(void* v_src, void* v_dst);
#define Dynawo_Connectors_ComplexVoltagePuConnector_copy(src,dst) Dynawo_Connectors_ComplexVoltagePuConnector_copy_p(&src, &dst)


void Dynawo_Connectors_ComplexVoltagePuConnector_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_re, modelica_real in_im);
#define Dynawo_Connectors_ComplexVoltagePuConnector_wrap_vars(td, dst , in_re, in_im) Dynawo_Connectors_ComplexVoltagePuConnector_wrap_vars_p(td, &dst , in_re, in_im)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Dynawo_Connectors_ComplexVoltagePuConnector_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Dynawo_Connectors_ComplexVoltagePuConnector_copy_to_vars(src,...) Dynawo_Connectors_ComplexVoltagePuConnector_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Dynawo_Connectors_ComplexVoltagePuConnector_array;
#define alloc_Dynawo_Connectors_ComplexVoltagePuConnector_array(dst,ndims,...) generic_array_create(NULL, dst, Dynawo_Connectors_ComplexVoltagePuConnector_construct_p, ndims, sizeof(Dynawo_Connectors_ComplexVoltagePuConnector), __VA_ARGS__)
#define Dynawo_Connectors_ComplexVoltagePuConnector_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Dynawo_Connectors_ComplexVoltagePuConnector_copy_p, sizeof(Dynawo_Connectors_ComplexVoltagePuConnector))
#define Dynawo_Connectors_ComplexVoltagePuConnector_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Dynawo_Connectors_ComplexVoltagePuConnector_copy_p, sizeof(Dynawo_Connectors_ComplexVoltagePuConnector))
#define Dynawo_Connectors_ComplexVoltagePuConnector_array_get(src,ndims,...)   (*(Dynawo_Connectors_ComplexVoltagePuConnector*)(generic_array_get(&src, sizeof(Dynawo_Connectors_ComplexVoltagePuConnector), __VA_ARGS__)))
#define Dynawo_Connectors_ComplexVoltagePuConnector_set(dst,val,...)           generic_array_set(&dst, &val, Dynawo_Connectors_ComplexVoltagePuConnector_copy_p, sizeof(Dynawo_Connectors_ComplexVoltagePuConnector), __VA_ARGS__)

typedef Complex Dynawo_Types_ComplexAdmittancePu;
extern struct record_description Dynawo_Types_ComplexAdmittancePu__desc;

void Dynawo_Types_ComplexAdmittancePu_construct_p(threadData_t *threadData, void* v_ths );
#define Dynawo_Types_ComplexAdmittancePu_construct(td, ths ) Dynawo_Types_ComplexAdmittancePu_construct_p(td, &ths )
void Dynawo_Types_ComplexAdmittancePu_copy_p(void* v_src, void* v_dst);
#define Dynawo_Types_ComplexAdmittancePu_copy(src,dst) Dynawo_Types_ComplexAdmittancePu_copy_p(&src, &dst)


void Dynawo_Types_ComplexAdmittancePu_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_re, modelica_real in_im);
#define Dynawo_Types_ComplexAdmittancePu_wrap_vars(td, dst , in_re, in_im) Dynawo_Types_ComplexAdmittancePu_wrap_vars_p(td, &dst , in_re, in_im)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Dynawo_Types_ComplexAdmittancePu_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Dynawo_Types_ComplexAdmittancePu_copy_to_vars(src,...) Dynawo_Types_ComplexAdmittancePu_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Dynawo_Types_ComplexAdmittancePu_array;
#define alloc_Dynawo_Types_ComplexAdmittancePu_array(dst,ndims,...) generic_array_create(NULL, dst, Dynawo_Types_ComplexAdmittancePu_construct_p, ndims, sizeof(Dynawo_Types_ComplexAdmittancePu), __VA_ARGS__)
#define Dynawo_Types_ComplexAdmittancePu_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Dynawo_Types_ComplexAdmittancePu_copy_p, sizeof(Dynawo_Types_ComplexAdmittancePu))
#define Dynawo_Types_ComplexAdmittancePu_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Dynawo_Types_ComplexAdmittancePu_copy_p, sizeof(Dynawo_Types_ComplexAdmittancePu))
#define Dynawo_Types_ComplexAdmittancePu_array_get(src,ndims,...)   (*(Dynawo_Types_ComplexAdmittancePu*)(generic_array_get(&src, sizeof(Dynawo_Types_ComplexAdmittancePu), __VA_ARGS__)))
#define Dynawo_Types_ComplexAdmittancePu_set(dst,val,...)           generic_array_set(&dst, &val, Dynawo_Types_ComplexAdmittancePu_copy_p, sizeof(Dynawo_Types_ComplexAdmittancePu), __VA_ARGS__)

typedef Complex Dynawo_Types_ComplexApparentPowerPu;
extern struct record_description Dynawo_Types_ComplexApparentPowerPu__desc;

void Dynawo_Types_ComplexApparentPowerPu_construct_p(threadData_t *threadData, void* v_ths );
#define Dynawo_Types_ComplexApparentPowerPu_construct(td, ths ) Dynawo_Types_ComplexApparentPowerPu_construct_p(td, &ths )
void Dynawo_Types_ComplexApparentPowerPu_copy_p(void* v_src, void* v_dst);
#define Dynawo_Types_ComplexApparentPowerPu_copy(src,dst) Dynawo_Types_ComplexApparentPowerPu_copy_p(&src, &dst)


void Dynawo_Types_ComplexApparentPowerPu_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_re, modelica_real in_im);
#define Dynawo_Types_ComplexApparentPowerPu_wrap_vars(td, dst , in_re, in_im) Dynawo_Types_ComplexApparentPowerPu_wrap_vars_p(td, &dst , in_re, in_im)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Dynawo_Types_ComplexApparentPowerPu_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Dynawo_Types_ComplexApparentPowerPu_copy_to_vars(src,...) Dynawo_Types_ComplexApparentPowerPu_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Dynawo_Types_ComplexApparentPowerPu_array;
#define alloc_Dynawo_Types_ComplexApparentPowerPu_array(dst,ndims,...) generic_array_create(NULL, dst, Dynawo_Types_ComplexApparentPowerPu_construct_p, ndims, sizeof(Dynawo_Types_ComplexApparentPowerPu), __VA_ARGS__)
#define Dynawo_Types_ComplexApparentPowerPu_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Dynawo_Types_ComplexApparentPowerPu_copy_p, sizeof(Dynawo_Types_ComplexApparentPowerPu))
#define Dynawo_Types_ComplexApparentPowerPu_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Dynawo_Types_ComplexApparentPowerPu_copy_p, sizeof(Dynawo_Types_ComplexApparentPowerPu))
#define Dynawo_Types_ComplexApparentPowerPu_array_get(src,ndims,...)   (*(Dynawo_Types_ComplexApparentPowerPu*)(generic_array_get(&src, sizeof(Dynawo_Types_ComplexApparentPowerPu), __VA_ARGS__)))
#define Dynawo_Types_ComplexApparentPowerPu_set(dst,val,...)           generic_array_set(&dst, &val, Dynawo_Types_ComplexApparentPowerPu_copy_p, sizeof(Dynawo_Types_ComplexApparentPowerPu), __VA_ARGS__)

typedef Complex Dynawo_Types_ComplexCurrentPu;
extern struct record_description Dynawo_Types_ComplexCurrentPu__desc;

void Dynawo_Types_ComplexCurrentPu_construct_p(threadData_t *threadData, void* v_ths );
#define Dynawo_Types_ComplexCurrentPu_construct(td, ths ) Dynawo_Types_ComplexCurrentPu_construct_p(td, &ths )
void Dynawo_Types_ComplexCurrentPu_copy_p(void* v_src, void* v_dst);
#define Dynawo_Types_ComplexCurrentPu_copy(src,dst) Dynawo_Types_ComplexCurrentPu_copy_p(&src, &dst)


void Dynawo_Types_ComplexCurrentPu_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_re, modelica_real in_im);
#define Dynawo_Types_ComplexCurrentPu_wrap_vars(td, dst , in_re, in_im) Dynawo_Types_ComplexCurrentPu_wrap_vars_p(td, &dst , in_re, in_im)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Dynawo_Types_ComplexCurrentPu_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Dynawo_Types_ComplexCurrentPu_copy_to_vars(src,...) Dynawo_Types_ComplexCurrentPu_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Dynawo_Types_ComplexCurrentPu_array;
#define alloc_Dynawo_Types_ComplexCurrentPu_array(dst,ndims,...) generic_array_create(NULL, dst, Dynawo_Types_ComplexCurrentPu_construct_p, ndims, sizeof(Dynawo_Types_ComplexCurrentPu), __VA_ARGS__)
#define Dynawo_Types_ComplexCurrentPu_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Dynawo_Types_ComplexCurrentPu_copy_p, sizeof(Dynawo_Types_ComplexCurrentPu))
#define Dynawo_Types_ComplexCurrentPu_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Dynawo_Types_ComplexCurrentPu_copy_p, sizeof(Dynawo_Types_ComplexCurrentPu))
#define Dynawo_Types_ComplexCurrentPu_array_get(src,ndims,...)   (*(Dynawo_Types_ComplexCurrentPu*)(generic_array_get(&src, sizeof(Dynawo_Types_ComplexCurrentPu), __VA_ARGS__)))
#define Dynawo_Types_ComplexCurrentPu_set(dst,val,...)           generic_array_set(&dst, &val, Dynawo_Types_ComplexCurrentPu_copy_p, sizeof(Dynawo_Types_ComplexCurrentPu), __VA_ARGS__)

typedef Complex Dynawo_Types_ComplexImpedancePu;
extern struct record_description Dynawo_Types_ComplexImpedancePu__desc;

void Dynawo_Types_ComplexImpedancePu_construct_p(threadData_t *threadData, void* v_ths );
#define Dynawo_Types_ComplexImpedancePu_construct(td, ths ) Dynawo_Types_ComplexImpedancePu_construct_p(td, &ths )
void Dynawo_Types_ComplexImpedancePu_copy_p(void* v_src, void* v_dst);
#define Dynawo_Types_ComplexImpedancePu_copy(src,dst) Dynawo_Types_ComplexImpedancePu_copy_p(&src, &dst)


void Dynawo_Types_ComplexImpedancePu_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_re, modelica_real in_im);
#define Dynawo_Types_ComplexImpedancePu_wrap_vars(td, dst , in_re, in_im) Dynawo_Types_ComplexImpedancePu_wrap_vars_p(td, &dst , in_re, in_im)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Dynawo_Types_ComplexImpedancePu_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Dynawo_Types_ComplexImpedancePu_copy_to_vars(src,...) Dynawo_Types_ComplexImpedancePu_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Dynawo_Types_ComplexImpedancePu_array;
#define alloc_Dynawo_Types_ComplexImpedancePu_array(dst,ndims,...) generic_array_create(NULL, dst, Dynawo_Types_ComplexImpedancePu_construct_p, ndims, sizeof(Dynawo_Types_ComplexImpedancePu), __VA_ARGS__)
#define Dynawo_Types_ComplexImpedancePu_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Dynawo_Types_ComplexImpedancePu_copy_p, sizeof(Dynawo_Types_ComplexImpedancePu))
#define Dynawo_Types_ComplexImpedancePu_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Dynawo_Types_ComplexImpedancePu_copy_p, sizeof(Dynawo_Types_ComplexImpedancePu))
#define Dynawo_Types_ComplexImpedancePu_array_get(src,ndims,...)   (*(Dynawo_Types_ComplexImpedancePu*)(generic_array_get(&src, sizeof(Dynawo_Types_ComplexImpedancePu), __VA_ARGS__)))
#define Dynawo_Types_ComplexImpedancePu_set(dst,val,...)           generic_array_set(&dst, &val, Dynawo_Types_ComplexImpedancePu_copy_p, sizeof(Dynawo_Types_ComplexImpedancePu), __VA_ARGS__)

typedef Complex Dynawo_Types_ComplexVoltagePu;
extern struct record_description Dynawo_Types_ComplexVoltagePu__desc;

void Dynawo_Types_ComplexVoltagePu_construct_p(threadData_t *threadData, void* v_ths );
#define Dynawo_Types_ComplexVoltagePu_construct(td, ths ) Dynawo_Types_ComplexVoltagePu_construct_p(td, &ths )
void Dynawo_Types_ComplexVoltagePu_copy_p(void* v_src, void* v_dst);
#define Dynawo_Types_ComplexVoltagePu_copy(src,dst) Dynawo_Types_ComplexVoltagePu_copy_p(&src, &dst)


void Dynawo_Types_ComplexVoltagePu_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_re, modelica_real in_im);
#define Dynawo_Types_ComplexVoltagePu_wrap_vars(td, dst , in_re, in_im) Dynawo_Types_ComplexVoltagePu_wrap_vars_p(td, &dst , in_re, in_im)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Dynawo_Types_ComplexVoltagePu_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Dynawo_Types_ComplexVoltagePu_copy_to_vars(src,...) Dynawo_Types_ComplexVoltagePu_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Dynawo_Types_ComplexVoltagePu_array;
#define alloc_Dynawo_Types_ComplexVoltagePu_array(dst,ndims,...) generic_array_create(NULL, dst, Dynawo_Types_ComplexVoltagePu_construct_p, ndims, sizeof(Dynawo_Types_ComplexVoltagePu), __VA_ARGS__)
#define Dynawo_Types_ComplexVoltagePu_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Dynawo_Types_ComplexVoltagePu_copy_p, sizeof(Dynawo_Types_ComplexVoltagePu))
#define Dynawo_Types_ComplexVoltagePu_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Dynawo_Types_ComplexVoltagePu_copy_p, sizeof(Dynawo_Types_ComplexVoltagePu))
#define Dynawo_Types_ComplexVoltagePu_array_get(src,ndims,...)   (*(Dynawo_Types_ComplexVoltagePu*)(generic_array_get(&src, sizeof(Dynawo_Types_ComplexVoltagePu), __VA_ARGS__)))
#define Dynawo_Types_ComplexVoltagePu_set(dst,val,...)           generic_array_set(&dst, &val, Dynawo_Types_ComplexVoltagePu_copy_p, sizeof(Dynawo_Types_ComplexVoltagePu), __VA_ARGS__)

DLLDirection
Complex omc_Complex (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLDirection
modelica_metatype boxptr_Complex(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Complex,2,0) {(void*) boxptr_Complex,0}};
#define boxvar_Complex MMC_REFSTRUCTLIT(boxvar_lit_Complex)


DLLDirection
Complex omc_Complex__omcQ_27_2B_27(threadData_t *threadData, Complex _c1, Complex _c2);
DLLDirection
modelica_metatype boxptr_Complex__omcQ_27_2B_27(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Complex__omcQ_27_2B_27,2,0) {(void*) boxptr_Complex__omcQ_27_2B_27,0}};
#define boxvar_Complex__omcQ_27_2B_27 MMC_REFSTRUCTLIT(boxvar_lit_Complex__omcQ_27_2B_27)


DLLDirection
Complex omc_Complex__omcQ_27_2F_27(threadData_t *threadData, Complex _c1, Complex _c2);
DLLDirection
modelica_metatype boxptr_Complex__omcQ_27_2F_27(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Complex__omcQ_27_2F_27,2,0) {(void*) boxptr_Complex__omcQ_27_2F_27,0}};
#define boxvar_Complex__omcQ_27_2F_27 MMC_REFSTRUCTLIT(boxvar_lit_Complex__omcQ_27_2F_27)


DLLDirection
Complex omc_Complex__omcQ_27_2A_27_multiply(threadData_t *threadData, Complex _c1, Complex _c2);
DLLDirection
modelica_metatype boxptr_Complex__omcQ_27_2A_27_multiply(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Complex__omcQ_27_2A_27_multiply,2,0) {(void*) boxptr_Complex__omcQ_27_2A_27_multiply,0}};
#define boxvar_Complex__omcQ_27_2A_27_multiply MMC_REFSTRUCTLIT(boxvar_lit_Complex__omcQ_27_2A_27_multiply)


DLLDirection
Complex omc_Complex__omcQ_27_2D_27_subtract(threadData_t *threadData, Complex _c1, Complex _c2);
DLLDirection
modelica_metatype boxptr_Complex__omcQ_27_2D_27_subtract(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Complex__omcQ_27_2D_27_subtract,2,0) {(void*) boxptr_Complex__omcQ_27_2D_27_subtract,0}};
#define boxvar_Complex__omcQ_27_2D_27_subtract MMC_REFSTRUCTLIT(boxvar_lit_Complex__omcQ_27_2D_27_subtract)


DLLDirection
Complex omc_Complex__omcQ_27constructor_27_fromReal(threadData_t *threadData, modelica_real _re, modelica_real _im);
DLLDirection
modelica_metatype boxptr_Complex__omcQ_27constructor_27_fromReal(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Complex__omcQ_27constructor_27_fromReal,2,0) {(void*) boxptr_Complex__omcQ_27constructor_27_fromReal,0}};
#define boxvar_Complex__omcQ_27constructor_27_fromReal MMC_REFSTRUCTLIT(boxvar_lit_Complex__omcQ_27constructor_27_fromReal)


DLLDirection
Dynawo_Connectors_ComplexCurrentPuConnector omc_Dynawo_Connectors_ComplexCurrentPuConnector (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLDirection
modelica_metatype boxptr_Dynawo_Connectors_ComplexCurrentPuConnector(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dynawo_Connectors_ComplexCurrentPuConnector,2,0) {(void*) boxptr_Dynawo_Connectors_ComplexCurrentPuConnector,0}};
#define boxvar_Dynawo_Connectors_ComplexCurrentPuConnector MMC_REFSTRUCTLIT(boxvar_lit_Dynawo_Connectors_ComplexCurrentPuConnector)


DLLDirection
Dynawo_Connectors_ComplexVoltagePuConnector omc_Dynawo_Connectors_ComplexVoltagePuConnector (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLDirection
modelica_metatype boxptr_Dynawo_Connectors_ComplexVoltagePuConnector(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dynawo_Connectors_ComplexVoltagePuConnector,2,0) {(void*) boxptr_Dynawo_Connectors_ComplexVoltagePuConnector,0}};
#define boxvar_Dynawo_Connectors_ComplexVoltagePuConnector MMC_REFSTRUCTLIT(boxvar_lit_Dynawo_Connectors_ComplexVoltagePuConnector)


DLLDirection
void omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData_t *threadData, modelica_integer _key);
DLLDirection
void boxptr_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData_t *threadData, modelica_metatype _key);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dynawo_NonElectrical_Logs_Timeline_logEvent1,2,0) {(void*) boxptr_Dynawo_NonElectrical_Logs_Timeline_logEvent1,0}};
#define boxvar_Dynawo_NonElectrical_Logs_Timeline_logEvent1 MMC_REFSTRUCTLIT(boxvar_lit_Dynawo_NonElectrical_Logs_Timeline_logEvent1)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void addLogEvent1(int (*_key*));
 */

DLLDirection
Dynawo_Types_ComplexAdmittancePu omc_Dynawo_Types_ComplexAdmittancePu (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLDirection
modelica_metatype boxptr_Dynawo_Types_ComplexAdmittancePu(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexAdmittancePu,2,0) {(void*) boxptr_Dynawo_Types_ComplexAdmittancePu,0}};
#define boxvar_Dynawo_Types_ComplexAdmittancePu MMC_REFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexAdmittancePu)


DLLDirection
Dynawo_Types_ComplexApparentPowerPu omc_Dynawo_Types_ComplexApparentPowerPu (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLDirection
modelica_metatype boxptr_Dynawo_Types_ComplexApparentPowerPu(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexApparentPowerPu,2,0) {(void*) boxptr_Dynawo_Types_ComplexApparentPowerPu,0}};
#define boxvar_Dynawo_Types_ComplexApparentPowerPu MMC_REFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexApparentPowerPu)


DLLDirection
Dynawo_Types_ComplexCurrentPu omc_Dynawo_Types_ComplexCurrentPu (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLDirection
modelica_metatype boxptr_Dynawo_Types_ComplexCurrentPu(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexCurrentPu,2,0) {(void*) boxptr_Dynawo_Types_ComplexCurrentPu,0}};
#define boxvar_Dynawo_Types_ComplexCurrentPu MMC_REFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexCurrentPu)


DLLDirection
Dynawo_Types_ComplexImpedancePu omc_Dynawo_Types_ComplexImpedancePu (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLDirection
modelica_metatype boxptr_Dynawo_Types_ComplexImpedancePu(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexImpedancePu,2,0) {(void*) boxptr_Dynawo_Types_ComplexImpedancePu,0}};
#define boxvar_Dynawo_Types_ComplexImpedancePu MMC_REFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexImpedancePu)


DLLDirection
Dynawo_Types_ComplexVoltagePu omc_Dynawo_Types_ComplexVoltagePu (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLDirection
modelica_metatype boxptr_Dynawo_Types_ComplexVoltagePu(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexVoltagePu,2,0) {(void*) boxptr_Dynawo_Types_ComplexVoltagePu,0}};
#define boxvar_Dynawo_Types_ComplexVoltagePu MMC_REFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexVoltagePu)


DLLDirection
Complex omc_Dynawo_Types_ComplexAdmittancePu__omcQ_27_2A_27_multiply(threadData_t *threadData, Complex _c1, Complex _c2);
DLLDirection
modelica_metatype boxptr_Dynawo_Types_ComplexAdmittancePu__omcQ_27_2A_27_multiply(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexAdmittancePu__omcQ_27_2A_27_multiply,2,0) {(void*) boxptr_Dynawo_Types_ComplexAdmittancePu__omcQ_27_2A_27_multiply,0}};
#define boxvar_Dynawo_Types_ComplexAdmittancePu__omcQ_27_2A_27_multiply MMC_REFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexAdmittancePu__omcQ_27_2A_27_multiply)


DLLDirection
Complex omc_Dynawo_Types_ComplexCurrentPu__omcQ_27_2D_27_subtract(threadData_t *threadData, Complex _c1, Complex _c2);
DLLDirection
modelica_metatype boxptr_Dynawo_Types_ComplexCurrentPu__omcQ_27_2D_27_subtract(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexCurrentPu__omcQ_27_2D_27_subtract,2,0) {(void*) boxptr_Dynawo_Types_ComplexCurrentPu__omcQ_27_2D_27_subtract,0}};
#define boxvar_Dynawo_Types_ComplexCurrentPu__omcQ_27_2D_27_subtract MMC_REFSTRUCTLIT(boxvar_lit_Dynawo_Types_ComplexCurrentPu__omcQ_27_2D_27_subtract)


DLLDirection
modelica_real omc_Modelica_ComplexMath__omcQ_27abs_27(threadData_t *threadData, Complex _c);
DLLDirection
modelica_metatype boxptr_Modelica_ComplexMath__omcQ_27abs_27(threadData_t *threadData, modelica_metatype _c);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_ComplexMath__omcQ_27abs_27,2,0) {(void*) boxptr_Modelica_ComplexMath__omcQ_27abs_27,0}};
#define boxvar_Modelica_ComplexMath__omcQ_27abs_27 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_ComplexMath__omcQ_27abs_27)


DLLDirection
modelica_real omc_Modelica_ComplexMath_arg(threadData_t *threadData, Complex _c, modelica_real _phi0);
DLLDirection
modelica_metatype boxptr_Modelica_ComplexMath_arg(threadData_t *threadData, modelica_metatype _c, modelica_metatype _phi0);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_ComplexMath_arg,2,0) {(void*) boxptr_Modelica_ComplexMath_arg,0}};
#define boxvar_Modelica_ComplexMath_arg MMC_REFSTRUCTLIT(boxvar_lit_Modelica_ComplexMath_arg)


DLLDirection
Complex omc_Modelica_ComplexMath_conj(threadData_t *threadData, Complex _c1);
DLLDirection
modelica_metatype boxptr_Modelica_ComplexMath_conj(threadData_t *threadData, modelica_metatype _c1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_ComplexMath_conj,2,0) {(void*) boxptr_Modelica_ComplexMath_conj,0}};
#define boxvar_Modelica_ComplexMath_conj MMC_REFSTRUCTLIT(boxvar_lit_Modelica_ComplexMath_conj)


DLLDirection
modelica_real omc_Modelica_ComplexMath_imag(threadData_t *threadData, Complex _c);
DLLDirection
modelica_metatype boxptr_Modelica_ComplexMath_imag(threadData_t *threadData, modelica_metatype _c);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_ComplexMath_imag,2,0) {(void*) boxptr_Modelica_ComplexMath_imag,0}};
#define boxvar_Modelica_ComplexMath_imag MMC_REFSTRUCTLIT(boxvar_lit_Modelica_ComplexMath_imag)


DLLDirection
modelica_real omc_Modelica_ComplexMath_real(threadData_t *threadData, Complex _c);
DLLDirection
modelica_metatype boxptr_Modelica_ComplexMath_real(threadData_t *threadData, modelica_metatype _c);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_ComplexMath_real,2,0) {(void*) boxptr_Modelica_ComplexMath_real,0}};
#define boxvar_Modelica_ComplexMath_real MMC_REFSTRUCTLIT(boxvar_lit_Modelica_ComplexMath_real)


DLLDirection
modelica_real omc_Modelica_Math_atan3(threadData_t *threadData, modelica_real _u1, modelica_real _u2, modelica_real _y0);
DLLDirection
modelica_metatype boxptr_Modelica_Math_atan3(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2, modelica_metatype _y0);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_atan3,2,0) {(void*) boxptr_Modelica_Math_atan3,0}};
#define boxvar_Modelica_Math_atan3 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_atan3)
#include "MyNordic_initialized.TestCase_initialized_model.h"


#ifdef __cplusplus
}
#endif
#endif
