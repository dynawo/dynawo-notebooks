#include "omc_simulation_settings.h"
#include "MyNordic_initialized.TestCase_initialized_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "MyNordic_initialized.TestCase_initialized_includes.h"


Complex omc_Complex(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Complex tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Complex(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Complex__desc, _re, _im);
}

DLLDirection
Complex omc_Complex__omcQ_27_2B_27(threadData_t *threadData, Complex _c1, Complex _c2)
{
  Complex _c3;
  Complex tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  Complex_construct(threadData, _c3); // _c3 has no default value.
  tmp1 = omc_Complex__omcQ_27constructor_27_fromReal(threadData, _c1._re + _c2._re, _c1._im + _c2._im);
  Complex_copy(tmp1, _c3);;
  _return: OMC_LABEL_UNUSED
  return _c3;
}
modelica_metatype boxptr_Complex__omcQ_27_2B_27(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  Complex tmp6;
  modelica_metatype tmpMeta7;
  modelica_real tmp8;
  modelica_metatype tmpMeta9;
  modelica_real tmp10;
  Complex _c3;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype out_c3;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 2)));
  tmp8 = mmc_unbox_real(tmpMeta7);
  tmp6._re = tmp8;
  tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 3)));
  tmp10 = mmc_unbox_real(tmpMeta9);
  tmp6._im = tmp10;
  _c3 = omc_Complex__omcQ_27_2B_27(threadData, tmp1, tmp6);
  tmpMeta11 = mmc_mk_rcon(_c3._re);
  tmpMeta12 = mmc_mk_rcon(_c3._im);
  out_c3 = mmc_mk_box3(3, &Complex__desc, tmpMeta11, tmpMeta12);
  return out_c3;
}

DLLDirection
Complex omc_Complex__omcQ_27_2F_27(threadData_t *threadData, Complex _c1, Complex _c2)
{
  Complex _c3;
  Complex tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  Complex_construct(threadData, _c3); // _c3 has no default value.
  tmp2 = (_c2._re) * (_c2._re) + (_c2._im) * (_c2._im);
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(c1.re * c2.re + c1.im * c2.im) / (c2.re * c2.re + c2.im * c2.im)");}
  tmp3 = (_c2._re) * (_c2._re) + (_c2._im) * (_c2._im);
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(c1.im * c2.re - c1.re * c2.im) / (c2.re * c2.re + c2.im * c2.im)");}
  tmp1 = omc_Complex__omcQ_27constructor_27_fromReal(threadData, ((_c1._re) * (_c2._re) + (_c1._im) * (_c2._im)) / tmp2, ((_c1._im) * (_c2._re) - ((_c1._re) * (_c2._im))) / tmp3);
  Complex_copy(tmp1, _c3);;
  _return: OMC_LABEL_UNUSED
  return _c3;
}
modelica_metatype boxptr_Complex__omcQ_27_2F_27(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  Complex tmp6;
  modelica_metatype tmpMeta7;
  modelica_real tmp8;
  modelica_metatype tmpMeta9;
  modelica_real tmp10;
  Complex _c3;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype out_c3;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 2)));
  tmp8 = mmc_unbox_real(tmpMeta7);
  tmp6._re = tmp8;
  tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 3)));
  tmp10 = mmc_unbox_real(tmpMeta9);
  tmp6._im = tmp10;
  _c3 = omc_Complex__omcQ_27_2F_27(threadData, tmp1, tmp6);
  tmpMeta11 = mmc_mk_rcon(_c3._re);
  tmpMeta12 = mmc_mk_rcon(_c3._im);
  out_c3 = mmc_mk_box3(3, &Complex__desc, tmpMeta11, tmpMeta12);
  return out_c3;
}

DLLDirection
Complex omc_Complex__omcQ_27_2A_27_multiply(threadData_t *threadData, Complex _c1, Complex _c2)
{
  Complex _c3;
  Complex tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  Complex_construct(threadData, _c3); // _c3 has no default value.
  tmp1 = omc_Complex__omcQ_27constructor_27_fromReal(threadData, (_c1._re) * (_c2._re) - ((_c1._im) * (_c2._im)), (_c1._re) * (_c2._im) + (_c1._im) * (_c2._re));
  Complex_copy(tmp1, _c3);;
  _return: OMC_LABEL_UNUSED
  return _c3;
}
modelica_metatype boxptr_Complex__omcQ_27_2A_27_multiply(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  Complex tmp6;
  modelica_metatype tmpMeta7;
  modelica_real tmp8;
  modelica_metatype tmpMeta9;
  modelica_real tmp10;
  Complex _c3;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype out_c3;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 2)));
  tmp8 = mmc_unbox_real(tmpMeta7);
  tmp6._re = tmp8;
  tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 3)));
  tmp10 = mmc_unbox_real(tmpMeta9);
  tmp6._im = tmp10;
  _c3 = omc_Complex__omcQ_27_2A_27_multiply(threadData, tmp1, tmp6);
  tmpMeta11 = mmc_mk_rcon(_c3._re);
  tmpMeta12 = mmc_mk_rcon(_c3._im);
  out_c3 = mmc_mk_box3(3, &Complex__desc, tmpMeta11, tmpMeta12);
  return out_c3;
}

DLLDirection
Complex omc_Complex__omcQ_27_2D_27_subtract(threadData_t *threadData, Complex _c1, Complex _c2)
{
  Complex _c3;
  Complex tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  Complex_construct(threadData, _c3); // _c3 has no default value.
  tmp1 = omc_Complex__omcQ_27constructor_27_fromReal(threadData, _c1._re - _c2._re, _c1._im - _c2._im);
  Complex_copy(tmp1, _c3);;
  _return: OMC_LABEL_UNUSED
  return _c3;
}
modelica_metatype boxptr_Complex__omcQ_27_2D_27_subtract(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  Complex tmp6;
  modelica_metatype tmpMeta7;
  modelica_real tmp8;
  modelica_metatype tmpMeta9;
  modelica_real tmp10;
  Complex _c3;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype out_c3;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 2)));
  tmp8 = mmc_unbox_real(tmpMeta7);
  tmp6._re = tmp8;
  tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 3)));
  tmp10 = mmc_unbox_real(tmpMeta9);
  tmp6._im = tmp10;
  _c3 = omc_Complex__omcQ_27_2D_27_subtract(threadData, tmp1, tmp6);
  tmpMeta11 = mmc_mk_rcon(_c3._re);
  tmpMeta12 = mmc_mk_rcon(_c3._im);
  out_c3 = mmc_mk_box3(3, &Complex__desc, tmpMeta11, tmpMeta12);
  return out_c3;
}

DLLDirection
Complex omc_Complex__omcQ_27constructor_27_fromReal(threadData_t *threadData, modelica_real _re, modelica_real _im)
{
  Complex _result;
  _tailrecursive: OMC_LABEL_UNUSED
  Complex_1_2_construct(threadData, _result, _re, _im); // _result has no default value.
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Complex__omcQ_27constructor_27_fromReal(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Complex _result;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_real(_re);
  tmp2 = mmc_unbox_real(_im);
  _result = omc_Complex__omcQ_27constructor_27_fromReal(threadData, tmp1, tmp2);
  tmpMeta3 = mmc_mk_rcon(_result._re);
  tmpMeta4 = mmc_mk_rcon(_result._im);
  out_result = mmc_mk_box3(3, &Complex__desc, tmpMeta3, tmpMeta4);
  return out_result;
}

Dynawo_Connectors_ComplexCurrentPuConnector omc_Dynawo_Connectors_ComplexCurrentPuConnector(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Dynawo_Connectors_ComplexCurrentPuConnector tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Dynawo_Connectors_ComplexCurrentPuConnector(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Dynawo_Connectors_ComplexCurrentPuConnector__desc, _re, _im);
}

Dynawo_Connectors_ComplexVoltagePuConnector omc_Dynawo_Connectors_ComplexVoltagePuConnector(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Dynawo_Connectors_ComplexVoltagePuConnector tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Dynawo_Connectors_ComplexVoltagePuConnector(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Dynawo_Connectors_ComplexVoltagePuConnector__desc, _re, _im);
}

void omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData_t *threadData, modelica_integer _key)
{
  int _key_ext;
  _key_ext = (int)_key;
  addLogEvent1(_key_ext);
  return;
}
void boxptr_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData_t *threadData, modelica_metatype _key)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_key);
  omc_Dynawo_NonElectrical_Logs_Timeline_logEvent1(threadData, tmp1);
  return;
}

Dynawo_Types_ComplexAdmittancePu omc_Dynawo_Types_ComplexAdmittancePu(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Dynawo_Types_ComplexAdmittancePu tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Dynawo_Types_ComplexAdmittancePu(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Dynawo_Types_ComplexAdmittancePu__desc, _re, _im);
}

Dynawo_Types_ComplexApparentPowerPu omc_Dynawo_Types_ComplexApparentPowerPu(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Dynawo_Types_ComplexApparentPowerPu tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Dynawo_Types_ComplexApparentPowerPu(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Dynawo_Types_ComplexApparentPowerPu__desc, _re, _im);
}

Dynawo_Types_ComplexCurrentPu omc_Dynawo_Types_ComplexCurrentPu(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Dynawo_Types_ComplexCurrentPu tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Dynawo_Types_ComplexCurrentPu(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Dynawo_Types_ComplexCurrentPu__desc, _re, _im);
}

Dynawo_Types_ComplexImpedancePu omc_Dynawo_Types_ComplexImpedancePu(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Dynawo_Types_ComplexImpedancePu tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Dynawo_Types_ComplexImpedancePu(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Dynawo_Types_ComplexImpedancePu__desc, _re, _im);
}

Dynawo_Types_ComplexVoltagePu omc_Dynawo_Types_ComplexVoltagePu(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Dynawo_Types_ComplexVoltagePu tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Dynawo_Types_ComplexVoltagePu(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Dynawo_Types_ComplexVoltagePu__desc, _re, _im);
}

DLLDirection
Complex omc_Dynawo_Types_ComplexAdmittancePu__omcQ_27_2A_27_multiply(threadData_t *threadData, Complex _c1, Complex _c2)
{
  Complex _c3;
  Complex tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  Complex_construct(threadData, _c3); // _c3 has no default value.
  tmp1 = omc_Complex__omcQ_27constructor_27_fromReal(threadData, (_c1._re) * (_c2._re) - ((_c1._im) * (_c2._im)), (_c1._re) * (_c2._im) + (_c1._im) * (_c2._re));
  Complex_copy(tmp1, _c3);;
  _return: OMC_LABEL_UNUSED
  return _c3;
}
modelica_metatype boxptr_Dynawo_Types_ComplexAdmittancePu__omcQ_27_2A_27_multiply(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  Complex tmp6;
  modelica_metatype tmpMeta7;
  modelica_real tmp8;
  modelica_metatype tmpMeta9;
  modelica_real tmp10;
  Complex _c3;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype out_c3;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 2)));
  tmp8 = mmc_unbox_real(tmpMeta7);
  tmp6._re = tmp8;
  tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 3)));
  tmp10 = mmc_unbox_real(tmpMeta9);
  tmp6._im = tmp10;
  _c3 = omc_Dynawo_Types_ComplexAdmittancePu__omcQ_27_2A_27_multiply(threadData, tmp1, tmp6);
  tmpMeta11 = mmc_mk_rcon(_c3._re);
  tmpMeta12 = mmc_mk_rcon(_c3._im);
  out_c3 = mmc_mk_box3(3, &Complex__desc, tmpMeta11, tmpMeta12);
  return out_c3;
}

DLLDirection
Complex omc_Dynawo_Types_ComplexCurrentPu__omcQ_27_2D_27_subtract(threadData_t *threadData, Complex _c1, Complex _c2)
{
  Complex _c3;
  Complex tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  Complex_construct(threadData, _c3); // _c3 has no default value.
  tmp1 = omc_Complex__omcQ_27constructor_27_fromReal(threadData, _c1._re - _c2._re, _c1._im - _c2._im);
  Complex_copy(tmp1, _c3);;
  _return: OMC_LABEL_UNUSED
  return _c3;
}
modelica_metatype boxptr_Dynawo_Types_ComplexCurrentPu__omcQ_27_2D_27_subtract(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  Complex tmp6;
  modelica_metatype tmpMeta7;
  modelica_real tmp8;
  modelica_metatype tmpMeta9;
  modelica_real tmp10;
  Complex _c3;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype out_c3;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 2)));
  tmp8 = mmc_unbox_real(tmpMeta7);
  tmp6._re = tmp8;
  tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 3)));
  tmp10 = mmc_unbox_real(tmpMeta9);
  tmp6._im = tmp10;
  _c3 = omc_Dynawo_Types_ComplexCurrentPu__omcQ_27_2D_27_subtract(threadData, tmp1, tmp6);
  tmpMeta11 = mmc_mk_rcon(_c3._re);
  tmpMeta12 = mmc_mk_rcon(_c3._im);
  out_c3 = mmc_mk_box3(3, &Complex__desc, tmpMeta11, tmpMeta12);
  return out_c3;
}

DLLDirection
modelica_real omc_Modelica_ComplexMath__omcQ_27abs_27(threadData_t *threadData, Complex _c)
{
  modelica_real _result;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  tmp1 = _c._re;
  tmp2 = _c._im;
  tmp3 = (tmp1 * tmp1) + (tmp2 * tmp2);
  if(tmp3 < 0.0) {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, 0.5);
  }
  _result = sqrt(tmp3);
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_ComplexMath__omcQ_27abs_27(threadData_t *threadData, modelica_metatype _c)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _result;
  modelica_metatype out_result;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;
  _result = omc_Modelica_ComplexMath__omcQ_27abs_27(threadData, tmp1);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

DLLDirection
modelica_real omc_Modelica_ComplexMath_arg(threadData_t *threadData, Complex _c, modelica_real _phi0)
{
  modelica_real _phi;
  _tailrecursive: OMC_LABEL_UNUSED
  // _phi has no default value.
  _phi = omc_Modelica_Math_atan3(threadData, _c._im, _c._re, _phi0);
  _return: OMC_LABEL_UNUSED
  return _phi;
}
modelica_metatype boxptr_Modelica_ComplexMath_arg(threadData_t *threadData, modelica_metatype _c, modelica_metatype _phi0)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real _phi;
  modelica_metatype out_phi;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;tmp6 = mmc_unbox_real(_phi0);
  _phi = omc_Modelica_ComplexMath_arg(threadData, tmp1, tmp6);
  out_phi = mmc_mk_rcon(_phi);
  return out_phi;
}

DLLDirection
Complex omc_Modelica_ComplexMath_conj(threadData_t *threadData, Complex _c1)
{
  Complex _c2;
  Complex tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  Complex_construct(threadData, _c2); // _c2 has no default value.
  tmp1 = omc_Complex__omcQ_27constructor_27_fromReal(threadData, _c1._re, (-_c1._im));
  Complex_copy(tmp1, _c2);;
  _return: OMC_LABEL_UNUSED
  return _c2;
}
modelica_metatype boxptr_Modelica_ComplexMath_conj(threadData_t *threadData, modelica_metatype _c1)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  Complex _c2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype out_c2;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;
  _c2 = omc_Modelica_ComplexMath_conj(threadData, tmp1);
  tmpMeta6 = mmc_mk_rcon(_c2._re);
  tmpMeta7 = mmc_mk_rcon(_c2._im);
  out_c2 = mmc_mk_box3(3, &Complex__desc, tmpMeta6, tmpMeta7);
  return out_c2;
}

DLLDirection
modelica_real omc_Modelica_ComplexMath_imag(threadData_t *threadData, Complex _c)
{
  modelica_real _r;
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  _r = _c._im;
  _return: OMC_LABEL_UNUSED
  return _r;
}
modelica_metatype boxptr_Modelica_ComplexMath_imag(threadData_t *threadData, modelica_metatype _c)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _r;
  modelica_metatype out_r;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;
  _r = omc_Modelica_ComplexMath_imag(threadData, tmp1);
  out_r = mmc_mk_rcon(_r);
  return out_r;
}

DLLDirection
modelica_real omc_Modelica_ComplexMath_real(threadData_t *threadData, Complex _c)
{
  modelica_real _r;
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  _r = _c._re;
  _return: OMC_LABEL_UNUSED
  return _r;
}
modelica_metatype boxptr_Modelica_ComplexMath_real(threadData_t *threadData, modelica_metatype _c)
{
  Complex tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _r;
  modelica_metatype out_r;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._re = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._im = tmp5;
  _r = omc_Modelica_ComplexMath_real(threadData, tmp1);
  out_r = mmc_mk_rcon(_r);
  return out_r;
}

DLLDirection
modelica_real omc_Modelica_Math_atan3(threadData_t *threadData, modelica_real _u1, modelica_real _u2, modelica_real _y0)
{
  modelica_real _y;
  modelica_real _pi2;
  modelica_real _w;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _pi2 = 6.283185307179586;
  // _w has no default value.
  _w = atan2(_u1, _u2);

  if((_y0 == 0.0))
  {
    _y = _w;
  }
  else
  {
    tmp1 = _pi2;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(3.141592653589793 + y0 - w) / pi2");}
    _y = _w + (_pi2) * (((modelica_real)((modelica_integer)floor((3.141592653589793 + _y0 - _w) / tmp1))));
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Math_atan3(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2, modelica_metatype _y0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_u1);
  tmp2 = mmc_unbox_real(_u2);
  tmp3 = mmc_unbox_real(_y0);
  _y = omc_Modelica_Math_atan3(threadData, tmp1, tmp2, tmp3);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

#ifdef __cplusplus
}
#endif
