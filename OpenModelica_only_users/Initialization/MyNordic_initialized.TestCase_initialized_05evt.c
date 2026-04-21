/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void MyNordic_initialized_TestCase_initialized_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *MyNordic_initialized_TestCase_initialized_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"load_01.terminal.V.re == 0.0 and load_01.terminal.V.im == 0.0",
  "load_02.terminal.V.re == 0.0 and load_02.terminal.V.im == 0.0",
  "load_03.terminal.V.re == 0.0 and load_03.terminal.V.im == 0.0",
  "load_04.terminal.V.re == 0.0 and load_04.terminal.V.im == 0.0",
  "load_05.terminal.V.re == 0.0 and load_05.terminal.V.im == 0.0",
  "load_11.terminal.V.re == 0.0 and load_11.terminal.V.im == 0.0",
  "load_12.terminal.V.re == 0.0 and load_12.terminal.V.im == 0.0",
  "load_13.terminal.V.re == 0.0 and load_13.terminal.V.im == 0.0",
  "load_22.terminal.V.re == 0.0 and load_22.terminal.V.im == 0.0",
  "load_31.terminal.V.re == 0.0 and load_31.terminal.V.im == 0.0",
  "load_32.terminal.V.re == 0.0 and load_32.terminal.V.im == 0.0",
  "load_41.terminal.V.re == 0.0 and load_41.terminal.V.im == 0.0",
  "load_42.terminal.V.re == 0.0 and load_42.terminal.V.im == 0.0",
  "load_43.terminal.V.re == 0.0 and load_43.terminal.V.im == 0.0",
  "load_47.terminal.V.re == 0.0 and load_47.terminal.V.im == 0.0",
  "load_46.terminal.V.re == 0.0 and load_46.terminal.V.im == 0.0",
  "load_51.terminal.V.re == 0.0 and load_51.terminal.V.im == 0.0",
  "load_61.terminal.V.re == 0.0 and load_61.terminal.V.im == 0.0",
  "load_62.terminal.V.re == 0.0 and load_62.terminal.V.im == 0.0",
  "load_63.terminal.V.re == 0.0 and load_63.terminal.V.im == 0.0",
  "load_71.terminal.V.re == 0.0 and load_71.terminal.V.im == 0.0",
  "load_72.terminal.V.re == 0.0 and load_72.terminal.V.im == 0.0",
  "g01.terminal.V.re == 0.0 and g01.terminal.V.im == 0.0",
  "g02.terminal.V.re == 0.0 and g02.terminal.V.im == 0.0",
  "g03.terminal.V.re == 0.0 and g03.terminal.V.im == 0.0",
  "g04.terminal.V.re == 0.0 and g04.terminal.V.im == 0.0",
  "g05.terminal.V.re == 0.0 and g05.terminal.V.im == 0.0",
  "g06.terminal.V.re == 0.0 and g06.terminal.V.im == 0.0",
  "g07.terminal.V.re == 0.0 and g07.terminal.V.im == 0.0",
  "g08.terminal.V.re == 0.0 and g08.terminal.V.im == 0.0",
  "g09.terminal.V.re == 0.0 and g09.terminal.V.im == 0.0",
  "g10.terminal.V.re == 0.0 and g10.terminal.V.im == 0.0",
  "g11.terminal.V.re == 0.0 and g11.terminal.V.im == 0.0",
  "g12.terminal.V.re == 0.0 and g12.terminal.V.im == 0.0",
  "g13.terminal.V.re == 0.0 and g13.terminal.V.im == 0.0",
  "g14.terminal.V.re == 0.0 and g14.terminal.V.im == 0.0",
  "g15.terminal.V.re == 0.0 and g15.terminal.V.im == 0.0",
  "g16.terminal.V.re == 0.0 and g16.terminal.V.im == 0.0",
  "g17.terminal.V.re == 0.0 and g17.terminal.V.im == 0.0",
  "g18.terminal.V.re == 0.0 and g18.terminal.V.im == 0.0",
  "g19.terminal.V.re == 0.0 and g19.terminal.V.im == 0.0",
  "trafo_g20_4072.terminal1.V.re == 0.0 and trafo_g20_4072.terminal1.V.im == 0.0",
  "line_1011_1013a.terminal1.V.re == 0.0 and line_1011_1013a.terminal1.V.im == 0.0",
  "line_1012_1014a.terminal1.V.re == 0.0 and line_1012_1014a.terminal1.V.im == 0.0",
  "line_1013_1014a.terminal1.V.re == 0.0 and line_1013_1014a.terminal1.V.im == 0.0",
  "line_1013_1014a.terminal2.V.re == 0.0 and line_1013_1014a.terminal2.V.im == 0.0",
  "line_1021_1022b.terminal1.V.re == 0.0 and line_1021_1022b.terminal1.V.im == 0.0",
  "line_1041_1043a.terminal1.V.re == 0.0 and line_1041_1043a.terminal1.V.im == 0.0",
  "line_1042_1045.terminal1.V.re == 0.0 and line_1042_1045.terminal1.V.im == 0.0",
  "line_2031_2032b.terminal1.V.re == 0.0 and line_2031_2032b.terminal1.V.im == 0.0",
  "line_2031_2032b.terminal2.V.re == 0.0 and line_2031_2032b.terminal2.V.im == 0.0",
  "line_4011_4071.terminal1.V.re == 0.0 and line_4011_4071.terminal1.V.im == 0.0",
  "line_4012_4022.terminal1.V.re == 0.0 and line_4012_4022.terminal1.V.im == 0.0",
  "line_4021_4032.terminal1.V.re == 0.0 and line_4021_4032.terminal1.V.im == 0.0",
  "line_4022_4031b.terminal1.V.re == 0.0 and line_4022_4031b.terminal1.V.im == 0.0",
  "line_4031_4041b.terminal1.V.re == 0.0 and line_4031_4041b.terminal1.V.im == 0.0",
  "line_4032_4044.terminal1.V.re == 0.0 and line_4032_4044.terminal1.V.im == 0.0",
  "line_4042_4043.terminal1.V.re == 0.0 and line_4042_4043.terminal1.V.im == 0.0",
  "line_4044_4045a.terminal1.V.re == 0.0 and line_4044_4045a.terminal1.V.im == 0.0",
  "line_4045_4051b.terminal1.V.re == 0.0 and line_4045_4051b.terminal1.V.im == 0.0",
  "line_4046_4047.terminal2.V.re == 0.0 and line_4046_4047.terminal2.V.im == 0.0",
  "line_4061_4062.terminal1.V.re == 0.0 and line_4061_4062.terminal1.V.im == 0.0",
  "line_4062_4063b.terminal1.V.re == 0.0 and line_4062_4063b.terminal1.V.im == 0.0",
  "line_4062_4063b.terminal2.V.re == 0.0 and line_4062_4063b.terminal2.V.im == 0.0",
  "line_4071_4072a.terminal2.V.re == 0.0 and line_4071_4072a.terminal2.V.im == 0.0",
  "load_01.terminal.V.re == 0.0",
  "load_01.terminal.V.im == 0.0",
  "load_02.terminal.V.re == 0.0",
  "load_02.terminal.V.im == 0.0",
  "load_03.terminal.V.re == 0.0",
  "load_03.terminal.V.im == 0.0",
  "load_04.terminal.V.re == 0.0",
  "load_04.terminal.V.im == 0.0",
  "load_05.terminal.V.re == 0.0",
  "load_05.terminal.V.im == 0.0",
  "load_11.terminal.V.re == 0.0",
  "load_11.terminal.V.im == 0.0",
  "load_12.terminal.V.re == 0.0",
  "load_12.terminal.V.im == 0.0",
  "load_13.terminal.V.re == 0.0",
  "load_13.terminal.V.im == 0.0",
  "load_22.terminal.V.re == 0.0",
  "load_22.terminal.V.im == 0.0",
  "load_31.terminal.V.re == 0.0",
  "load_31.terminal.V.im == 0.0",
  "load_32.terminal.V.re == 0.0",
  "load_32.terminal.V.im == 0.0",
  "load_41.terminal.V.re == 0.0",
  "load_41.terminal.V.im == 0.0",
  "load_42.terminal.V.re == 0.0",
  "load_42.terminal.V.im == 0.0",
  "load_43.terminal.V.re == 0.0",
  "load_43.terminal.V.im == 0.0",
  "load_46.terminal.V.re == 0.0",
  "load_46.terminal.V.im == 0.0",
  "load_47.terminal.V.re == 0.0",
  "load_47.terminal.V.im == 0.0",
  "load_51.terminal.V.re == 0.0",
  "load_51.terminal.V.im == 0.0",
  "load_61.terminal.V.re == 0.0",
  "load_61.terminal.V.im == 0.0",
  "load_62.terminal.V.re == 0.0",
  "load_62.terminal.V.im == 0.0",
  "load_63.terminal.V.re == 0.0",
  "load_63.terminal.V.im == 0.0",
  "load_71.terminal.V.re == 0.0",
  "load_71.terminal.V.im == 0.0",
  "load_72.terminal.V.re == 0.0",
  "load_72.terminal.V.im == 0.0",
  "line_1021_1022b.terminal2.V.re == 0.0 and line_1021_1022b.terminal2.V.im == 0.0",
  "line_1041_1043a.terminal1.V.re == 0.0",
  "line_1041_1043a.terminal1.V.im == 0.0",
  "line_1043_1044a.terminal1.V.re == 0.0 and line_1043_1044a.terminal1.V.im == 0.0",
  "line_1043_1044a.terminal2.V.re == 0.0 and line_1043_1044a.terminal2.V.im == 0.0",
  "line_1042_1045.terminal2.V.re == 0.0 and line_1042_1045.terminal2.V.im == 0.0",
  "line_4012_4022.terminal1.V.re == 0.0",
  "line_4012_4022.terminal1.V.im == 0.0",
  "line_4041_4061.terminal1.V.re == 0.0 and line_4041_4061.terminal1.V.im == 0.0",
  "line_4043_4046.terminal1.V.re == 0.0 and line_4043_4046.terminal1.V.im == 0.0",
  "line_4046_4047.terminal1.V.re == 0.0 and line_4046_4047.terminal1.V.im == 0.0",
  "line_4045_4051b.terminal2.V.re == 0.0 and line_4045_4051b.terminal2.V.im == 0.0",
  "line_4071_4072a.terminal1.V.re == 0.0 and line_4071_4072a.terminal1.V.im == 0.0",
  "line_1042_1045.terminal1.V.re == 0.0",
  "line_1042_1045.terminal1.V.im == 0.0",
  "line_1043_1044a.terminal1.V.re == 0.0",
  "line_1043_1044a.terminal1.V.im == 0.0",
  "line_1043_1044a.terminal2.V.re == 0.0",
  "line_1043_1044a.terminal2.V.im == 0.0",
  "line_1042_1045.terminal2.V.re == 0.0",
  "line_1042_1045.terminal2.V.im == 0.0",
  "line_1011_1013a.terminal1.V.re == 0.0",
  "line_1011_1013a.terminal1.V.im == 0.0",
  "line_1012_1014a.terminal1.V.re == 0.0",
  "line_1012_1014a.terminal1.V.im == 0.0",
  "line_1013_1014a.terminal1.V.re == 0.0",
  "line_1013_1014a.terminal1.V.im == 0.0",
  "line_1021_1022b.terminal2.V.re == 0.0",
  "line_1021_1022b.terminal2.V.im == 0.0",
  "line_2031_2032b.terminal1.V.re == 0.0",
  "line_2031_2032b.terminal1.V.im == 0.0",
  "line_2031_2032b.terminal2.V.re == 0.0",
  "line_2031_2032b.terminal2.V.im == 0.0",
  "line_4041_4061.terminal1.V.re == 0.0",
  "line_4041_4061.terminal1.V.im == 0.0",
  "line_4042_4043.terminal1.V.re == 0.0",
  "line_4042_4043.terminal1.V.im == 0.0",
  "line_4043_4046.terminal1.V.re == 0.0",
  "line_4043_4046.terminal1.V.im == 0.0",
  "line_4046_4047.terminal1.V.re == 0.0",
  "line_4046_4047.terminal1.V.im == 0.0",
  "line_4046_4047.terminal2.V.re == 0.0",
  "line_4046_4047.terminal2.V.im == 0.0",
  "line_4045_4051b.terminal2.V.re == 0.0",
  "line_4045_4051b.terminal2.V.im == 0.0",
  "line_4061_4062.terminal1.V.re == 0.0",
  "line_4061_4062.terminal1.V.im == 0.0",
  "line_4062_4063b.terminal1.V.re == 0.0",
  "line_4062_4063b.terminal1.V.im == 0.0",
  "line_4062_4063b.terminal2.V.re == 0.0",
  "line_4062_4063b.terminal2.V.im == 0.0",
  "line_4071_4072a.terminal1.V.re == 0.0",
  "line_4071_4072a.terminal1.V.im == 0.0",
  "line_4071_4072a.terminal2.V.re == 0.0",
  "line_4071_4072a.terminal2.V.im == 0.0",
  "line_4011_4071.terminal1.V.re == 0.0",
  "line_4011_4071.terminal1.V.im == 0.0",
  "line_4022_4031b.terminal1.V.re == 0.0",
  "line_4022_4031b.terminal1.V.im == 0.0",
  "line_4044_4045a.terminal1.V.re == 0.0",
  "line_4044_4045a.terminal1.V.im == 0.0",
  "line_4045_4051b.terminal1.V.re == 0.0",
  "line_4045_4051b.terminal1.V.im == 0.0",
  "line_4031_4041b.terminal1.V.re == 0.0",
  "line_4031_4041b.terminal1.V.im == 0.0",
  "g01.terminal.V.re == 0.0",
  "g01.terminal.V.im == 0.0",
  "g02.terminal.V.re == 0.0",
  "g02.terminal.V.im == 0.0",
  "g03.terminal.V.re == 0.0",
  "g03.terminal.V.im == 0.0",
  "line_1013_1014a.terminal2.V.re == 0.0",
  "line_1013_1014a.terminal2.V.im == 0.0",
  "g04.terminal.V.re == 0.0",
  "g04.terminal.V.im == 0.0",
  "line_1021_1022b.terminal1.V.re == 0.0",
  "line_1021_1022b.terminal1.V.im == 0.0",
  "g05.terminal.V.re == 0.0",
  "g05.terminal.V.im == 0.0",
  "g06.terminal.V.re == 0.0",
  "g06.terminal.V.im == 0.0",
  "g07.terminal.V.re == 0.0",
  "g07.terminal.V.im == 0.0",
  "g08.terminal.V.re == 0.0",
  "g08.terminal.V.im == 0.0",
  "g09.terminal.V.re == 0.0",
  "g09.terminal.V.im == 0.0",
  "g10.terminal.V.re == 0.0",
  "g10.terminal.V.im == 0.0",
  "g11.terminal.V.re == 0.0",
  "g11.terminal.V.im == 0.0",
  "line_4021_4032.terminal1.V.re == 0.0",
  "line_4021_4032.terminal1.V.im == 0.0",
  "g12.terminal.V.re == 0.0",
  "g12.terminal.V.im == 0.0",
  "g13.terminal.V.re == 0.0",
  "g13.terminal.V.im == 0.0",
  "g14.terminal.V.re == 0.0",
  "g14.terminal.V.im == 0.0",
  "g15.terminal.V.re == 0.0",
  "g15.terminal.V.im == 0.0",
  "g16.terminal.V.re == 0.0",
  "g16.terminal.V.im == 0.0",
  "g17.terminal.V.re == 0.0",
  "g17.terminal.V.im == 0.0",
  "g18.terminal.V.re == 0.0",
  "g18.terminal.V.im == 0.0",
  "g19.terminal.V.re == 0.0",
  "g19.terminal.V.im == 0.0",
  "trafo_g20_4072.terminal1.V.re == 0.0",
  "trafo_g20_4072.terminal1.V.im == 0.0",
  "g01.uStatorPu.re == 0.0 and g01.uStatorPu.im == 0.0",
  "g01.iStatorPu.re == 0.0 and g01.iStatorPu.im == 0.0",
  "g02.uStatorPu.re == 0.0 and g02.uStatorPu.im == 0.0",
  "g02.iStatorPu.re == 0.0 and g02.iStatorPu.im == 0.0",
  "g03.uStatorPu.re == 0.0 and g03.uStatorPu.im == 0.0",
  "g03.iStatorPu.re == 0.0 and g03.iStatorPu.im == 0.0",
  "g04.uStatorPu.re == 0.0 and g04.uStatorPu.im == 0.0",
  "g04.iStatorPu.re == 0.0 and g04.iStatorPu.im == 0.0",
  "g05.uStatorPu.re == 0.0 and g05.uStatorPu.im == 0.0",
  "g05.iStatorPu.re == 0.0 and g05.iStatorPu.im == 0.0",
  "g06.uStatorPu.re == 0.0 and g06.uStatorPu.im == 0.0",
  "g06.iStatorPu.re == 0.0 and g06.iStatorPu.im == 0.0",
  "g07.uStatorPu.re == 0.0 and g07.uStatorPu.im == 0.0",
  "g07.iStatorPu.re == 0.0 and g07.iStatorPu.im == 0.0",
  "g08.uStatorPu.re == 0.0 and g08.uStatorPu.im == 0.0",
  "g08.iStatorPu.re == 0.0 and g08.iStatorPu.im == 0.0",
  "g09.uStatorPu.re == 0.0 and g09.uStatorPu.im == 0.0",
  "g09.iStatorPu.re == 0.0 and g09.iStatorPu.im == 0.0",
  "g10.uStatorPu.re == 0.0 and g10.uStatorPu.im == 0.0",
  "g10.iStatorPu.re == 0.0 and g10.iStatorPu.im == 0.0",
  "g11.uStatorPu.re == 0.0 and g11.uStatorPu.im == 0.0",
  "g11.iStatorPu.re == 0.0 and g11.iStatorPu.im == 0.0",
  "g12.uStatorPu.re == 0.0 and g12.uStatorPu.im == 0.0",
  "g12.iStatorPu.re == 0.0 and g12.iStatorPu.im == 0.0",
  "g13.uStatorPu.re == 0.0 and g13.uStatorPu.im == 0.0",
  "g13.iStatorPu.re == 0.0 and g13.iStatorPu.im == 0.0",
  "g14.uStatorPu.re == 0.0 and g14.uStatorPu.im == 0.0",
  "g14.iStatorPu.re == 0.0 and g14.iStatorPu.im == 0.0",
  "g15.uStatorPu.re == 0.0 and g15.uStatorPu.im == 0.0",
  "g15.iStatorPu.re == 0.0 and g15.iStatorPu.im == 0.0",
  "g16.uStatorPu.re == 0.0 and g16.uStatorPu.im == 0.0",
  "g16.iStatorPu.re == 0.0 and g16.iStatorPu.im == 0.0",
  "g17.uStatorPu.re == 0.0 and g17.uStatorPu.im == 0.0",
  "g17.iStatorPu.re == 0.0 and g17.iStatorPu.im == 0.0",
  "g18.uStatorPu.re == 0.0 and g18.uStatorPu.im == 0.0",
  "g18.iStatorPu.re == 0.0 and g18.iStatorPu.im == 0.0",
  "g19.uStatorPu.re == 0.0 and g19.uStatorPu.im == 0.0",
  "g19.iStatorPu.re == 0.0 and g19.iStatorPu.im == 0.0",
  "g20.uStatorPu.re == 0.0 and g20.uStatorPu.im == 0.0",
  "g20.iStatorPu.re == 0.0 and g20.iStatorPu.im == 0.0",
  "vrNordic_g01.switch.y < vrNordic_g01.add.y",
  "vrNordic_g01.timer.y >= vrNordic_g01.greaterEqualThreshold.threshold",
  "vrNordic_g01.dIf.y < -0.1",
  "vrNordic_g01.dIf.y < 0.0",
  "vrNordic_g01.limIntegrator.y < vrNordic_g01.limIntegrator.outMin and vrNordic_g01.limIntegrator.k * vrNordic_g01.gain.y < 0.0 or vrNordic_g01.limIntegrator.y > vrNordic_g01.limIntegrator.outMax and vrNordic_g01.limIntegrator.k * vrNordic_g01.gain.y > 0.0",
  "vrNordic_g01.timer.y < vrNordic_g01.timer.outMin and vrNordic_g01.timer.k * vrNordic_g01.overExcitationLimitation.y < 0.0 or vrNordic_g01.timer.y > vrNordic_g01.timer.outMax and vrNordic_g01.timer.k * vrNordic_g01.overExcitationLimitation.y > 0.0",
  "goverNordic_g01.limRateLimFirstOrder.limIntegrator.y < goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g01.limRateLimFirstOrder.limIntegrator.k * goverNordic_g01.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g01.limRateLimFirstOrder.limIntegrator.y > goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g01.limRateLimFirstOrder.limIntegrator.k * goverNordic_g01.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g02.switch.y < vrNordic_g02.add.y",
  "vrNordic_g02.timer.y >= vrNordic_g02.greaterEqualThreshold.threshold",
  "vrNordic_g02.dIf.y < -0.1",
  "vrNordic_g02.dIf.y < 0.0",
  "vrNordic_g02.limIntegrator.y < vrNordic_g02.limIntegrator.outMin and vrNordic_g02.limIntegrator.k * vrNordic_g02.gain.y < 0.0 or vrNordic_g02.limIntegrator.y > vrNordic_g02.limIntegrator.outMax and vrNordic_g02.limIntegrator.k * vrNordic_g02.gain.y > 0.0",
  "vrNordic_g02.timer.y < vrNordic_g02.timer.outMin and vrNordic_g02.timer.k * vrNordic_g02.overExcitationLimitation.y < 0.0 or vrNordic_g02.timer.y > vrNordic_g02.timer.outMax and vrNordic_g02.timer.k * vrNordic_g02.overExcitationLimitation.y > 0.0",
  "goverNordic_g02.limRateLimFirstOrder.limIntegrator.y < goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g02.limRateLimFirstOrder.limIntegrator.k * goverNordic_g02.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g02.limRateLimFirstOrder.limIntegrator.y > goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g02.limRateLimFirstOrder.limIntegrator.k * goverNordic_g02.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g03.switch.y < vrNordic_g03.add.y",
  "vrNordic_g03.timer.y >= vrNordic_g03.greaterEqualThreshold.threshold",
  "vrNordic_g03.dIf.y < -0.1",
  "vrNordic_g03.dIf.y < 0.0",
  "vrNordic_g03.limIntegrator.y < vrNordic_g03.limIntegrator.outMin and vrNordic_g03.limIntegrator.k * vrNordic_g03.gain.y < 0.0 or vrNordic_g03.limIntegrator.y > vrNordic_g03.limIntegrator.outMax and vrNordic_g03.limIntegrator.k * vrNordic_g03.gain.y > 0.0",
  "vrNordic_g03.timer.y < vrNordic_g03.timer.outMin and vrNordic_g03.timer.k * vrNordic_g03.overExcitationLimitation.y < 0.0 or vrNordic_g03.timer.y > vrNordic_g03.timer.outMax and vrNordic_g03.timer.k * vrNordic_g03.overExcitationLimitation.y > 0.0",
  "goverNordic_g03.limRateLimFirstOrder.limIntegrator.y < goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g03.limRateLimFirstOrder.limIntegrator.k * goverNordic_g03.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g03.limRateLimFirstOrder.limIntegrator.y > goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g03.limRateLimFirstOrder.limIntegrator.k * goverNordic_g03.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g04.switch.y < vrNordic_g04.add.y",
  "vrNordic_g04.timer.y >= vrNordic_g04.greaterEqualThreshold.threshold",
  "vrNordic_g04.dIf.y < -0.1",
  "vrNordic_g04.dIf.y < 0.0",
  "vrNordic_g04.limIntegrator.y < vrNordic_g04.limIntegrator.outMin and vrNordic_g04.limIntegrator.k * vrNordic_g04.gain.y < 0.0 or vrNordic_g04.limIntegrator.y > vrNordic_g04.limIntegrator.outMax and vrNordic_g04.limIntegrator.k * vrNordic_g04.gain.y > 0.0",
  "vrNordic_g04.timer.y < vrNordic_g04.timer.outMin and vrNordic_g04.timer.k * vrNordic_g04.overExcitationLimitation.y < 0.0 or vrNordic_g04.timer.y > vrNordic_g04.timer.outMax and vrNordic_g04.timer.k * vrNordic_g04.overExcitationLimitation.y > 0.0",
  "goverNordic_g04.limRateLimFirstOrder.limIntegrator.y < goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g04.limRateLimFirstOrder.limIntegrator.k * goverNordic_g04.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g04.limRateLimFirstOrder.limIntegrator.y > goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g04.limRateLimFirstOrder.limIntegrator.k * goverNordic_g04.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g05.switch.y < vrNordic_g05.add.y",
  "vrNordic_g05.timer.y >= vrNordic_g05.greaterEqualThreshold.threshold",
  "vrNordic_g05.dIf.y < -0.1",
  "vrNordic_g05.dIf.y < 0.0",
  "vrNordic_g05.limIntegrator.y < vrNordic_g05.limIntegrator.outMin and vrNordic_g05.limIntegrator.k * vrNordic_g05.gain.y < 0.0 or vrNordic_g05.limIntegrator.y > vrNordic_g05.limIntegrator.outMax and vrNordic_g05.limIntegrator.k * vrNordic_g05.gain.y > 0.0",
  "vrNordic_g05.timer.y < vrNordic_g05.timer.outMin and vrNordic_g05.timer.k * vrNordic_g05.overExcitationLimitation.y < 0.0 or vrNordic_g05.timer.y > vrNordic_g05.timer.outMax and vrNordic_g05.timer.k * vrNordic_g05.overExcitationLimitation.y > 0.0",
  "goverNordic_g05.limRateLimFirstOrder.limIntegrator.y < goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g05.limRateLimFirstOrder.limIntegrator.k * goverNordic_g05.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g05.limRateLimFirstOrder.limIntegrator.y > goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g05.limRateLimFirstOrder.limIntegrator.k * goverNordic_g05.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g06.switch.y < vrNordic_g06.add.y",
  "vrNordic_g06.timer.y >= vrNordic_g06.greaterEqualThreshold.threshold",
  "vrNordic_g06.dIf.y < -0.1",
  "vrNordic_g06.dIf.y < 0.0",
  "vrNordic_g06.limIntegrator.y < vrNordic_g06.limIntegrator.outMin and vrNordic_g06.limIntegrator.k * vrNordic_g06.gain.y < 0.0 or vrNordic_g06.limIntegrator.y > vrNordic_g06.limIntegrator.outMax and vrNordic_g06.limIntegrator.k * vrNordic_g06.gain.y > 0.0",
  "vrNordic_g06.timer.y < vrNordic_g06.timer.outMin and vrNordic_g06.timer.k * vrNordic_g06.overExcitationLimitation.y < 0.0 or vrNordic_g06.timer.y > vrNordic_g06.timer.outMax and vrNordic_g06.timer.k * vrNordic_g06.overExcitationLimitation.y > 0.0",
  "goverNordic_g06.limRateLimFirstOrder.limIntegrator.y < goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g06.limRateLimFirstOrder.limIntegrator.k * goverNordic_g06.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g06.limRateLimFirstOrder.limIntegrator.y > goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g06.limRateLimFirstOrder.limIntegrator.k * goverNordic_g06.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g07.switch.y < vrNordic_g07.add.y",
  "vrNordic_g07.timer.y >= vrNordic_g07.greaterEqualThreshold.threshold",
  "vrNordic_g07.dIf.y < -0.1",
  "vrNordic_g07.dIf.y < 0.0",
  "vrNordic_g07.limIntegrator.y < vrNordic_g07.limIntegrator.outMin and vrNordic_g07.limIntegrator.k * vrNordic_g07.gain.y < 0.0 or vrNordic_g07.limIntegrator.y > vrNordic_g07.limIntegrator.outMax and vrNordic_g07.limIntegrator.k * vrNordic_g07.gain.y > 0.0",
  "vrNordic_g07.timer.y < vrNordic_g07.timer.outMin and vrNordic_g07.timer.k * vrNordic_g07.overExcitationLimitation.y < 0.0 or vrNordic_g07.timer.y > vrNordic_g07.timer.outMax and vrNordic_g07.timer.k * vrNordic_g07.overExcitationLimitation.y > 0.0",
  "goverNordic_g07.limRateLimFirstOrder.limIntegrator.y < goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g07.limRateLimFirstOrder.limIntegrator.k * goverNordic_g07.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g07.limRateLimFirstOrder.limIntegrator.y > goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g07.limRateLimFirstOrder.limIntegrator.k * goverNordic_g07.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g08.switch.y < vrNordic_g08.add.y",
  "vrNordic_g08.timer.y >= vrNordic_g08.greaterEqualThreshold.threshold",
  "vrNordic_g08.dIf.y < -0.1",
  "vrNordic_g08.dIf.y < 0.0",
  "vrNordic_g08.limIntegrator.y < vrNordic_g08.limIntegrator.outMin and vrNordic_g08.limIntegrator.k * vrNordic_g08.gain.y < 0.0 or vrNordic_g08.limIntegrator.y > vrNordic_g08.limIntegrator.outMax and vrNordic_g08.limIntegrator.k * vrNordic_g08.gain.y > 0.0",
  "vrNordic_g08.timer.y < vrNordic_g08.timer.outMin and vrNordic_g08.timer.k * vrNordic_g08.overExcitationLimitation.y < 0.0 or vrNordic_g08.timer.y > vrNordic_g08.timer.outMax and vrNordic_g08.timer.k * vrNordic_g08.overExcitationLimitation.y > 0.0",
  "goverNordic_g08.limRateLimFirstOrder.limIntegrator.y < goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g08.limRateLimFirstOrder.limIntegrator.k * goverNordic_g08.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g08.limRateLimFirstOrder.limIntegrator.y > goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g08.limRateLimFirstOrder.limIntegrator.k * goverNordic_g08.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g09.switch.y < vrNordic_g09.add.y",
  "vrNordic_g09.timer.y >= vrNordic_g09.greaterEqualThreshold.threshold",
  "vrNordic_g09.dIf.y < -0.1",
  "vrNordic_g09.dIf.y < 0.0",
  "vrNordic_g09.limIntegrator.y < vrNordic_g09.limIntegrator.outMin and vrNordic_g09.limIntegrator.k * vrNordic_g09.gain.y < 0.0 or vrNordic_g09.limIntegrator.y > vrNordic_g09.limIntegrator.outMax and vrNordic_g09.limIntegrator.k * vrNordic_g09.gain.y > 0.0",
  "vrNordic_g09.timer.y < vrNordic_g09.timer.outMin and vrNordic_g09.timer.k * vrNordic_g09.overExcitationLimitation.y < 0.0 or vrNordic_g09.timer.y > vrNordic_g09.timer.outMax and vrNordic_g09.timer.k * vrNordic_g09.overExcitationLimitation.y > 0.0",
  "goverNordic_g09.limRateLimFirstOrder.limIntegrator.y < goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g09.limRateLimFirstOrder.limIntegrator.k * goverNordic_g09.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g09.limRateLimFirstOrder.limIntegrator.y > goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g09.limRateLimFirstOrder.limIntegrator.k * goverNordic_g09.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g10.switch.y < vrNordic_g10.add.y",
  "vrNordic_g10.timer.y >= vrNordic_g10.greaterEqualThreshold.threshold",
  "vrNordic_g10.dIf.y < -0.1",
  "vrNordic_g10.dIf.y < 0.0",
  "vrNordic_g10.limIntegrator.y < vrNordic_g10.limIntegrator.outMin and vrNordic_g10.limIntegrator.k * vrNordic_g10.gain.y < 0.0 or vrNordic_g10.limIntegrator.y > vrNordic_g10.limIntegrator.outMax and vrNordic_g10.limIntegrator.k * vrNordic_g10.gain.y > 0.0",
  "vrNordic_g10.timer.y < vrNordic_g10.timer.outMin and vrNordic_g10.timer.k * vrNordic_g10.overExcitationLimitation.y < 0.0 or vrNordic_g10.timer.y > vrNordic_g10.timer.outMax and vrNordic_g10.timer.k * vrNordic_g10.overExcitationLimitation.y > 0.0",
  "goverNordic_g10.limRateLimFirstOrder.limIntegrator.y < goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g10.limRateLimFirstOrder.limIntegrator.k * goverNordic_g10.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g10.limRateLimFirstOrder.limIntegrator.y > goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g10.limRateLimFirstOrder.limIntegrator.k * goverNordic_g10.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g11.switch.y < vrNordic_g11.add.y",
  "vrNordic_g11.timer.y >= vrNordic_g11.greaterEqualThreshold.threshold",
  "vrNordic_g11.dIf.y < -0.1",
  "vrNordic_g11.dIf.y < 0.0",
  "vrNordic_g11.limIntegrator.y < vrNordic_g11.limIntegrator.outMin and vrNordic_g11.limIntegrator.k * vrNordic_g11.gain.y < 0.0 or vrNordic_g11.limIntegrator.y > vrNordic_g11.limIntegrator.outMax and vrNordic_g11.limIntegrator.k * vrNordic_g11.gain.y > 0.0",
  "vrNordic_g11.timer.y < vrNordic_g11.timer.outMin and vrNordic_g11.timer.k * vrNordic_g11.overExcitationLimitation.y < 0.0 or vrNordic_g11.timer.y > vrNordic_g11.timer.outMax and vrNordic_g11.timer.k * vrNordic_g11.overExcitationLimitation.y > 0.0",
  "goverNordic_g11.limRateLimFirstOrder.limIntegrator.y < goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g11.limRateLimFirstOrder.limIntegrator.k * goverNordic_g11.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g11.limRateLimFirstOrder.limIntegrator.y > goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g11.limRateLimFirstOrder.limIntegrator.k * goverNordic_g11.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g12.switch.y < vrNordic_g12.add.y",
  "vrNordic_g12.timer.y >= vrNordic_g12.greaterEqualThreshold.threshold",
  "vrNordic_g12.dIf.y < -0.1",
  "vrNordic_g12.dIf.y < 0.0",
  "vrNordic_g12.limIntegrator.y < vrNordic_g12.limIntegrator.outMin and vrNordic_g12.limIntegrator.k * vrNordic_g12.gain.y < 0.0 or vrNordic_g12.limIntegrator.y > vrNordic_g12.limIntegrator.outMax and vrNordic_g12.limIntegrator.k * vrNordic_g12.gain.y > 0.0",
  "vrNordic_g12.timer.y < vrNordic_g12.timer.outMin and vrNordic_g12.timer.k * vrNordic_g12.overExcitationLimitation.y < 0.0 or vrNordic_g12.timer.y > vrNordic_g12.timer.outMax and vrNordic_g12.timer.k * vrNordic_g12.overExcitationLimitation.y > 0.0",
  "goverNordic_g12.limRateLimFirstOrder.limIntegrator.y < goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g12.limRateLimFirstOrder.limIntegrator.k * goverNordic_g12.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g12.limRateLimFirstOrder.limIntegrator.y > goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g12.limRateLimFirstOrder.limIntegrator.k * goverNordic_g12.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g13.switch.y < vrNordic_g13.add.y",
  "vrNordic_g13.timer.y >= vrNordic_g13.greaterEqualThreshold.threshold",
  "vrNordic_g13.dIf.y < -0.1",
  "vrNordic_g13.dIf.y < 0.0",
  "vrNordic_g13.limIntegrator.y < vrNordic_g13.limIntegrator.outMin and vrNordic_g13.limIntegrator.k * vrNordic_g13.gain.y < 0.0 or vrNordic_g13.limIntegrator.y > vrNordic_g13.limIntegrator.outMax and vrNordic_g13.limIntegrator.k * vrNordic_g13.gain.y > 0.0",
  "vrNordic_g13.timer.y < vrNordic_g13.timer.outMin and vrNordic_g13.timer.k * vrNordic_g13.overExcitationLimitation.y < 0.0 or vrNordic_g13.timer.y > vrNordic_g13.timer.outMax and vrNordic_g13.timer.k * vrNordic_g13.overExcitationLimitation.y > 0.0",
  "goverNordic_g13.limRateLimFirstOrder.limIntegrator.y < goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g13.limRateLimFirstOrder.limIntegrator.k * goverNordic_g13.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g13.limRateLimFirstOrder.limIntegrator.y > goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g13.limRateLimFirstOrder.limIntegrator.k * goverNordic_g13.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g14.switch.y < vrNordic_g14.add.y",
  "vrNordic_g14.timer.y >= vrNordic_g14.greaterEqualThreshold.threshold",
  "vrNordic_g14.dIf.y < -0.1",
  "vrNordic_g14.dIf.y < 0.0",
  "vrNordic_g14.limIntegrator.y < vrNordic_g14.limIntegrator.outMin and vrNordic_g14.limIntegrator.k * vrNordic_g14.gain.y < 0.0 or vrNordic_g14.limIntegrator.y > vrNordic_g14.limIntegrator.outMax and vrNordic_g14.limIntegrator.k * vrNordic_g14.gain.y > 0.0",
  "vrNordic_g14.timer.y < vrNordic_g14.timer.outMin and vrNordic_g14.timer.k * vrNordic_g14.overExcitationLimitation.y < 0.0 or vrNordic_g14.timer.y > vrNordic_g14.timer.outMax and vrNordic_g14.timer.k * vrNordic_g14.overExcitationLimitation.y > 0.0",
  "goverNordic_g14.limRateLimFirstOrder.limIntegrator.y < goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g14.limRateLimFirstOrder.limIntegrator.k * goverNordic_g14.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g14.limRateLimFirstOrder.limIntegrator.y > goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g14.limRateLimFirstOrder.limIntegrator.k * goverNordic_g14.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g15.switch.y < vrNordic_g15.add.y",
  "vrNordic_g15.timer.y >= vrNordic_g15.greaterEqualThreshold.threshold",
  "vrNordic_g15.dIf.y < -0.1",
  "vrNordic_g15.dIf.y < 0.0",
  "vrNordic_g15.limIntegrator.y < vrNordic_g15.limIntegrator.outMin and vrNordic_g15.limIntegrator.k * vrNordic_g15.gain.y < 0.0 or vrNordic_g15.limIntegrator.y > vrNordic_g15.limIntegrator.outMax and vrNordic_g15.limIntegrator.k * vrNordic_g15.gain.y > 0.0",
  "vrNordic_g15.timer.y < vrNordic_g15.timer.outMin and vrNordic_g15.timer.k * vrNordic_g15.overExcitationLimitation.y < 0.0 or vrNordic_g15.timer.y > vrNordic_g15.timer.outMax and vrNordic_g15.timer.k * vrNordic_g15.overExcitationLimitation.y > 0.0",
  "goverNordic_g15.limRateLimFirstOrder.limIntegrator.y < goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g15.limRateLimFirstOrder.limIntegrator.k * goverNordic_g15.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g15.limRateLimFirstOrder.limIntegrator.y > goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g15.limRateLimFirstOrder.limIntegrator.k * goverNordic_g15.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g16.switch.y < vrNordic_g16.add.y",
  "vrNordic_g16.timer.y >= vrNordic_g16.greaterEqualThreshold.threshold",
  "vrNordic_g16.dIf.y < -0.1",
  "vrNordic_g16.dIf.y < 0.0",
  "vrNordic_g16.limIntegrator.y < vrNordic_g16.limIntegrator.outMin and vrNordic_g16.limIntegrator.k * vrNordic_g16.gain.y < 0.0 or vrNordic_g16.limIntegrator.y > vrNordic_g16.limIntegrator.outMax and vrNordic_g16.limIntegrator.k * vrNordic_g16.gain.y > 0.0",
  "vrNordic_g16.timer.y < vrNordic_g16.timer.outMin and vrNordic_g16.timer.k * vrNordic_g16.overExcitationLimitation.y < 0.0 or vrNordic_g16.timer.y > vrNordic_g16.timer.outMax and vrNordic_g16.timer.k * vrNordic_g16.overExcitationLimitation.y > 0.0",
  "goverNordic_g16.limRateLimFirstOrder.limIntegrator.y < goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g16.limRateLimFirstOrder.limIntegrator.k * goverNordic_g16.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g16.limRateLimFirstOrder.limIntegrator.y > goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g16.limRateLimFirstOrder.limIntegrator.k * goverNordic_g16.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g17.switch.y < vrNordic_g17.add.y",
  "vrNordic_g17.timer.y >= vrNordic_g17.greaterEqualThreshold.threshold",
  "vrNordic_g17.dIf.y < -0.1",
  "vrNordic_g17.dIf.y < 0.0",
  "vrNordic_g17.limIntegrator.y < vrNordic_g17.limIntegrator.outMin and vrNordic_g17.limIntegrator.k * vrNordic_g17.gain.y < 0.0 or vrNordic_g17.limIntegrator.y > vrNordic_g17.limIntegrator.outMax and vrNordic_g17.limIntegrator.k * vrNordic_g17.gain.y > 0.0",
  "vrNordic_g17.timer.y < vrNordic_g17.timer.outMin and vrNordic_g17.timer.k * vrNordic_g17.overExcitationLimitation.y < 0.0 or vrNordic_g17.timer.y > vrNordic_g17.timer.outMax and vrNordic_g17.timer.k * vrNordic_g17.overExcitationLimitation.y > 0.0",
  "goverNordic_g17.limRateLimFirstOrder.limIntegrator.y < goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g17.limRateLimFirstOrder.limIntegrator.k * goverNordic_g17.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g17.limRateLimFirstOrder.limIntegrator.y > goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g17.limRateLimFirstOrder.limIntegrator.k * goverNordic_g17.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g18.switch.y < vrNordic_g18.add.y",
  "vrNordic_g18.timer.y >= vrNordic_g18.greaterEqualThreshold.threshold",
  "vrNordic_g18.dIf.y < -0.1",
  "vrNordic_g18.dIf.y < 0.0",
  "vrNordic_g18.limIntegrator.y < vrNordic_g18.limIntegrator.outMin and vrNordic_g18.limIntegrator.k * vrNordic_g18.gain.y < 0.0 or vrNordic_g18.limIntegrator.y > vrNordic_g18.limIntegrator.outMax and vrNordic_g18.limIntegrator.k * vrNordic_g18.gain.y > 0.0",
  "vrNordic_g18.timer.y < vrNordic_g18.timer.outMin and vrNordic_g18.timer.k * vrNordic_g18.overExcitationLimitation.y < 0.0 or vrNordic_g18.timer.y > vrNordic_g18.timer.outMax and vrNordic_g18.timer.k * vrNordic_g18.overExcitationLimitation.y > 0.0",
  "goverNordic_g18.limRateLimFirstOrder.limIntegrator.y < goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g18.limRateLimFirstOrder.limIntegrator.k * goverNordic_g18.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g18.limRateLimFirstOrder.limIntegrator.y > goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g18.limRateLimFirstOrder.limIntegrator.k * goverNordic_g18.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g19.switch.y < vrNordic_g19.add.y",
  "vrNordic_g19.timer.y >= vrNordic_g19.greaterEqualThreshold.threshold",
  "vrNordic_g19.dIf.y < -0.1",
  "vrNordic_g19.dIf.y < 0.0",
  "vrNordic_g19.limIntegrator.y < vrNordic_g19.limIntegrator.outMin and vrNordic_g19.limIntegrator.k * vrNordic_g19.gain.y < 0.0 or vrNordic_g19.limIntegrator.y > vrNordic_g19.limIntegrator.outMax and vrNordic_g19.limIntegrator.k * vrNordic_g19.gain.y > 0.0",
  "vrNordic_g19.timer.y < vrNordic_g19.timer.outMin and vrNordic_g19.timer.k * vrNordic_g19.overExcitationLimitation.y < 0.0 or vrNordic_g19.timer.y > vrNordic_g19.timer.outMax and vrNordic_g19.timer.k * vrNordic_g19.overExcitationLimitation.y > 0.0",
  "goverNordic_g19.limRateLimFirstOrder.limIntegrator.y < goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g19.limRateLimFirstOrder.limIntegrator.k * goverNordic_g19.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g19.limRateLimFirstOrder.limIntegrator.y > goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g19.limRateLimFirstOrder.limIntegrator.k * goverNordic_g19.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g20.switch.y < vrNordic_g20.add.y",
  "vrNordic_g20.timer.y >= vrNordic_g20.greaterEqualThreshold.threshold",
  "vrNordic_g20.dIf.y < -0.1",
  "vrNordic_g20.dIf.y < 0.0",
  "vrNordic_g20.limIntegrator.y < vrNordic_g20.limIntegrator.outMin and vrNordic_g20.limIntegrator.k * vrNordic_g20.gain.y < 0.0 or vrNordic_g20.limIntegrator.y > vrNordic_g20.limIntegrator.outMax and vrNordic_g20.limIntegrator.k * vrNordic_g20.gain.y > 0.0",
  "vrNordic_g20.timer.y < vrNordic_g20.timer.outMin and vrNordic_g20.timer.k * vrNordic_g20.overExcitationLimitation.y < 0.0 or vrNordic_g20.timer.y > vrNordic_g20.timer.outMax and vrNordic_g20.timer.k * vrNordic_g20.overExcitationLimitation.y > 0.0",
  "goverNordic_g20.limRateLimFirstOrder.limIntegrator.y < goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin and goverNordic_g20.limRateLimFirstOrder.limIntegrator.k * goverNordic_g20.limRateLimFirstOrder.limiter.y < 0.0 or goverNordic_g20.limRateLimFirstOrder.limIntegrator.y > goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax and goverNordic_g20.limRateLimFirstOrder.limIntegrator.k * goverNordic_g20.limRateLimFirstOrder.limiter.y > 0.0",
  "time >= disconnection.tEvent",
  "time >= nodeFault.tEnd",
  "time >= nodeFault.tBegin"};
  static const int occurEqs0[] = {1,65};
  static const int occurEqs1[] = {1,67};
  static const int occurEqs2[] = {1,69};
  static const int occurEqs3[] = {1,71};
  static const int occurEqs4[] = {1,73};
  static const int occurEqs5[] = {1,75};
  static const int occurEqs6[] = {1,77};
  static const int occurEqs7[] = {1,79};
  static const int occurEqs8[] = {1,81};
  static const int occurEqs9[] = {1,83};
  static const int occurEqs10[] = {1,85};
  static const int occurEqs11[] = {1,87};
  static const int occurEqs12[] = {1,89};
  static const int occurEqs13[] = {1,91};
  static const int occurEqs14[] = {1,93};
  static const int occurEqs15[] = {1,95};
  static const int occurEqs16[] = {1,97};
  static const int occurEqs17[] = {1,99};
  static const int occurEqs18[] = {1,101};
  static const int occurEqs19[] = {1,103};
  static const int occurEqs20[] = {1,105};
  static const int occurEqs21[] = {1,107};
  static const int occurEqs22[] = {1,109};
  static const int occurEqs23[] = {1,111};
  static const int occurEqs24[] = {1,113};
  static const int occurEqs25[] = {1,115};
  static const int occurEqs26[] = {1,117};
  static const int occurEqs27[] = {1,119};
  static const int occurEqs28[] = {1,121};
  static const int occurEqs29[] = {1,123};
  static const int occurEqs30[] = {1,125};
  static const int occurEqs31[] = {1,127};
  static const int occurEqs32[] = {1,129};
  static const int occurEqs33[] = {1,131};
  static const int occurEqs34[] = {1,133};
  static const int occurEqs35[] = {1,135};
  static const int occurEqs36[] = {1,137};
  static const int occurEqs37[] = {1,139};
  static const int occurEqs38[] = {1,141};
  static const int occurEqs39[] = {1,143};
  static const int occurEqs40[] = {1,145};
  static const int occurEqs41[] = {1,147};
  static const int occurEqs42[] = {1,149};
  static const int occurEqs43[] = {1,151};
  static const int occurEqs44[] = {1,153};
  static const int occurEqs45[] = {1,155};
  static const int occurEqs46[] = {1,157};
  static const int occurEqs47[] = {1,161};
  static const int occurEqs48[] = {1,163};
  static const int occurEqs49[] = {1,171};
  static const int occurEqs50[] = {1,173};
  static const int occurEqs51[] = {1,175};
  static const int occurEqs52[] = {1,177};
  static const int occurEqs53[] = {1,179};
  static const int occurEqs54[] = {1,181};
  static const int occurEqs55[] = {1,183};
  static const int occurEqs56[] = {1,185};
  static const int occurEqs57[] = {1,189};
  static const int occurEqs58[] = {1,193};
  static const int occurEqs59[] = {1,195};
  static const int occurEqs60[] = {1,199};
  static const int occurEqs61[] = {1,203};
  static const int occurEqs62[] = {1,205};
  static const int occurEqs63[] = {1,207};
  static const int occurEqs64[] = {1,211};
  static const int occurEqs65[] = {1,629};
  static const int occurEqs66[] = {1,629};
  static const int occurEqs67[] = {1,634};
  static const int occurEqs68[] = {1,634};
  static const int occurEqs69[] = {1,639};
  static const int occurEqs70[] = {1,639};
  static const int occurEqs71[] = {1,644};
  static const int occurEqs72[] = {1,644};
  static const int occurEqs73[] = {1,649};
  static const int occurEqs74[] = {1,649};
  static const int occurEqs75[] = {1,654};
  static const int occurEqs76[] = {1,654};
  static const int occurEqs77[] = {1,659};
  static const int occurEqs78[] = {1,659};
  static const int occurEqs79[] = {1,664};
  static const int occurEqs80[] = {1,664};
  static const int occurEqs81[] = {1,669};
  static const int occurEqs82[] = {1,669};
  static const int occurEqs83[] = {1,674};
  static const int occurEqs84[] = {1,674};
  static const int occurEqs85[] = {1,679};
  static const int occurEqs86[] = {1,679};
  static const int occurEqs87[] = {1,684};
  static const int occurEqs88[] = {1,684};
  static const int occurEqs89[] = {1,689};
  static const int occurEqs90[] = {1,689};
  static const int occurEqs91[] = {1,694};
  static const int occurEqs92[] = {1,694};
  static const int occurEqs93[] = {1,699};
  static const int occurEqs94[] = {1,699};
  static const int occurEqs95[] = {1,704};
  static const int occurEqs96[] = {1,704};
  static const int occurEqs97[] = {1,709};
  static const int occurEqs98[] = {1,709};
  static const int occurEqs99[] = {1,714};
  static const int occurEqs100[] = {1,714};
  static const int occurEqs101[] = {1,719};
  static const int occurEqs102[] = {1,719};
  static const int occurEqs103[] = {1,724};
  static const int occurEqs104[] = {1,724};
  static const int occurEqs105[] = {1,729};
  static const int occurEqs106[] = {1,729};
  static const int occurEqs107[] = {1,734};
  static const int occurEqs108[] = {1,734};
  static const int occurEqs109[] = {1,741};
  static const int occurEqs110[] = {1,746};
  static const int occurEqs111[] = {1,746};
  static const int occurEqs112[] = {1,751};
  static const int occurEqs113[] = {1,756};
  static const int occurEqs114[] = {1,761};
  static const int occurEqs115[] = {1,766};
  static const int occurEqs116[] = {1,766};
  static const int occurEqs117[] = {1,771};
  static const int occurEqs118[] = {1,776};
  static const int occurEqs119[] = {1,781};
  static const int occurEqs120[] = {1,786};
  static const int occurEqs121[] = {1,791};
  static const int occurEqs122[] = {1,813};
  static const int occurEqs123[] = {1,813};
  static const int occurEqs124[] = {1,823};
  static const int occurEqs125[] = {1,823};
  static const int occurEqs126[] = {1,833};
  static const int occurEqs127[] = {1,833};
  static const int occurEqs128[] = {1,843};
  static const int occurEqs129[] = {1,843};
  static const int occurEqs130[] = {1,853};
  static const int occurEqs131[] = {1,853};
  static const int occurEqs132[] = {1,863};
  static const int occurEqs133[] = {1,863};
  static const int occurEqs134[] = {1,873};
  static const int occurEqs135[] = {1,873};
  static const int occurEqs136[] = {1,883};
  static const int occurEqs137[] = {1,883};
  static const int occurEqs138[] = {1,893};
  static const int occurEqs139[] = {1,893};
  static const int occurEqs140[] = {1,903};
  static const int occurEqs141[] = {1,903};
  static const int occurEqs142[] = {1,913};
  static const int occurEqs143[] = {1,913};
  static const int occurEqs144[] = {1,923};
  static const int occurEqs145[] = {1,923};
  static const int occurEqs146[] = {1,933};
  static const int occurEqs147[] = {1,933};
  static const int occurEqs148[] = {1,943};
  static const int occurEqs149[] = {1,943};
  static const int occurEqs150[] = {1,953};
  static const int occurEqs151[] = {1,953};
  static const int occurEqs152[] = {1,963};
  static const int occurEqs153[] = {1,963};
  static const int occurEqs154[] = {1,973};
  static const int occurEqs155[] = {1,973};
  static const int occurEqs156[] = {1,983};
  static const int occurEqs157[] = {1,983};
  static const int occurEqs158[] = {1,993};
  static const int occurEqs159[] = {1,993};
  static const int occurEqs160[] = {1,1003};
  static const int occurEqs161[] = {1,1003};
  static const int occurEqs162[] = {1,1013};
  static const int occurEqs163[] = {1,1013};
  static const int occurEqs164[] = {1,1023};
  static const int occurEqs165[] = {1,1023};
  static const int occurEqs166[] = {1,1043};
  static const int occurEqs167[] = {1,1043};
  static const int occurEqs168[] = {1,1053};
  static const int occurEqs169[] = {1,1053};
  static const int occurEqs170[] = {1,1073};
  static const int occurEqs171[] = {1,1073};
  static const int occurEqs172[] = {1,1093};
  static const int occurEqs173[] = {1,1093};
  static const int occurEqs174[] = {1,1102};
  static const int occurEqs175[] = {1,1102};
  static const int occurEqs176[] = {1,1112};
  static const int occurEqs177[] = {1,1112};
  static const int occurEqs178[] = {1,1122};
  static const int occurEqs179[] = {1,1122};
  static const int occurEqs180[] = {1,1123};
  static const int occurEqs181[] = {1,1123};
  static const int occurEqs182[] = {1,1132};
  static const int occurEqs183[] = {1,1132};
  static const int occurEqs184[] = {1,1133};
  static const int occurEqs185[] = {1,1133};
  static const int occurEqs186[] = {1,1142};
  static const int occurEqs187[] = {1,1142};
  static const int occurEqs188[] = {1,1152};
  static const int occurEqs189[] = {1,1152};
  static const int occurEqs190[] = {1,1162};
  static const int occurEqs191[] = {1,1162};
  static const int occurEqs192[] = {1,1172};
  static const int occurEqs193[] = {1,1172};
  static const int occurEqs194[] = {1,1182};
  static const int occurEqs195[] = {1,1182};
  static const int occurEqs196[] = {1,1192};
  static const int occurEqs197[] = {1,1192};
  static const int occurEqs198[] = {1,1202};
  static const int occurEqs199[] = {1,1202};
  static const int occurEqs200[] = {1,1203};
  static const int occurEqs201[] = {1,1203};
  static const int occurEqs202[] = {1,1212};
  static const int occurEqs203[] = {1,1212};
  static const int occurEqs204[] = {1,1222};
  static const int occurEqs205[] = {1,1222};
  static const int occurEqs206[] = {1,1232};
  static const int occurEqs207[] = {1,1232};
  static const int occurEqs208[] = {1,1242};
  static const int occurEqs209[] = {1,1242};
  static const int occurEqs210[] = {1,1252};
  static const int occurEqs211[] = {1,1252};
  static const int occurEqs212[] = {1,1262};
  static const int occurEqs213[] = {1,1262};
  static const int occurEqs214[] = {1,1272};
  static const int occurEqs215[] = {1,1272};
  static const int occurEqs216[] = {1,1282};
  static const int occurEqs217[] = {1,1282};
  static const int occurEqs218[] = {1,1292};
  static const int occurEqs219[] = {1,1292};
  static const int occurEqs220[] = {1,1308};
  static const int occurEqs221[] = {1,1309};
  static const int occurEqs222[] = {1,1361};
  static const int occurEqs223[] = {1,1362};
  static const int occurEqs224[] = {1,1414};
  static const int occurEqs225[] = {1,1415};
  static const int occurEqs226[] = {1,1467};
  static const int occurEqs227[] = {1,1468};
  static const int occurEqs228[] = {1,1520};
  static const int occurEqs229[] = {1,1521};
  static const int occurEqs230[] = {1,1573};
  static const int occurEqs231[] = {1,1574};
  static const int occurEqs232[] = {1,1626};
  static const int occurEqs233[] = {1,1627};
  static const int occurEqs234[] = {1,1679};
  static const int occurEqs235[] = {1,1680};
  static const int occurEqs236[] = {1,1732};
  static const int occurEqs237[] = {1,1733};
  static const int occurEqs238[] = {1,1785};
  static const int occurEqs239[] = {1,1786};
  static const int occurEqs240[] = {1,1838};
  static const int occurEqs241[] = {1,1839};
  static const int occurEqs242[] = {1,1891};
  static const int occurEqs243[] = {1,1892};
  static const int occurEqs244[] = {1,1944};
  static const int occurEqs245[] = {1,1945};
  static const int occurEqs246[] = {1,1997};
  static const int occurEqs247[] = {1,1998};
  static const int occurEqs248[] = {1,2050};
  static const int occurEqs249[] = {1,2051};
  static const int occurEqs250[] = {1,2103};
  static const int occurEqs251[] = {1,2104};
  static const int occurEqs252[] = {1,2156};
  static const int occurEqs253[] = {1,2157};
  static const int occurEqs254[] = {1,2209};
  static const int occurEqs255[] = {1,2210};
  static const int occurEqs256[] = {1,2262};
  static const int occurEqs257[] = {1,2263};
  static const int occurEqs258[] = {1,2315};
  static const int occurEqs259[] = {1,2316};
  static const int occurEqs260[] = {1,2354};
  static const int occurEqs261[] = {1,2365};
  static const int occurEqs262[] = {1,2369};
  static const int occurEqs263[] = {1,2369};
  static const int occurEqs264[] = {1,2372};
  static const int occurEqs265[] = {1,2374};
  static const int occurEqs266[] = {1,2397};
  static const int occurEqs267[] = {1,2398};
  static const int occurEqs268[] = {1,2409};
  static const int occurEqs269[] = {1,2413};
  static const int occurEqs270[] = {1,2413};
  static const int occurEqs271[] = {1,2416};
  static const int occurEqs272[] = {1,2418};
  static const int occurEqs273[] = {1,2441};
  static const int occurEqs274[] = {1,2442};
  static const int occurEqs275[] = {1,2453};
  static const int occurEqs276[] = {1,2457};
  static const int occurEqs277[] = {1,2457};
  static const int occurEqs278[] = {1,2460};
  static const int occurEqs279[] = {1,2462};
  static const int occurEqs280[] = {1,2485};
  static const int occurEqs281[] = {1,2486};
  static const int occurEqs282[] = {1,2497};
  static const int occurEqs283[] = {1,2501};
  static const int occurEqs284[] = {1,2501};
  static const int occurEqs285[] = {1,2504};
  static const int occurEqs286[] = {1,2506};
  static const int occurEqs287[] = {1,2529};
  static const int occurEqs288[] = {1,2530};
  static const int occurEqs289[] = {1,2541};
  static const int occurEqs290[] = {1,2545};
  static const int occurEqs291[] = {1,2545};
  static const int occurEqs292[] = {1,2548};
  static const int occurEqs293[] = {1,2550};
  static const int occurEqs294[] = {1,2573};
  static const int occurEqs295[] = {1,2574};
  static const int occurEqs296[] = {1,2585};
  static const int occurEqs297[] = {1,2589};
  static const int occurEqs298[] = {1,2589};
  static const int occurEqs299[] = {1,2592};
  static const int occurEqs300[] = {1,2594};
  static const int occurEqs301[] = {1,2617};
  static const int occurEqs302[] = {1,2618};
  static const int occurEqs303[] = {1,2629};
  static const int occurEqs304[] = {1,2633};
  static const int occurEqs305[] = {1,2633};
  static const int occurEqs306[] = {1,2636};
  static const int occurEqs307[] = {1,2638};
  static const int occurEqs308[] = {1,2661};
  static const int occurEqs309[] = {1,2662};
  static const int occurEqs310[] = {1,2673};
  static const int occurEqs311[] = {1,2677};
  static const int occurEqs312[] = {1,2677};
  static const int occurEqs313[] = {1,2680};
  static const int occurEqs314[] = {1,2682};
  static const int occurEqs315[] = {1,2705};
  static const int occurEqs316[] = {1,2706};
  static const int occurEqs317[] = {1,2717};
  static const int occurEqs318[] = {1,2721};
  static const int occurEqs319[] = {1,2721};
  static const int occurEqs320[] = {1,2724};
  static const int occurEqs321[] = {1,2726};
  static const int occurEqs322[] = {1,2749};
  static const int occurEqs323[] = {1,2750};
  static const int occurEqs324[] = {1,2761};
  static const int occurEqs325[] = {1,2765};
  static const int occurEqs326[] = {1,2765};
  static const int occurEqs327[] = {1,2768};
  static const int occurEqs328[] = {1,2770};
  static const int occurEqs329[] = {1,2793};
  static const int occurEqs330[] = {1,2794};
  static const int occurEqs331[] = {1,2805};
  static const int occurEqs332[] = {1,2809};
  static const int occurEqs333[] = {1,2809};
  static const int occurEqs334[] = {1,2812};
  static const int occurEqs335[] = {1,2814};
  static const int occurEqs336[] = {1,2837};
  static const int occurEqs337[] = {1,2838};
  static const int occurEqs338[] = {1,2849};
  static const int occurEqs339[] = {1,2853};
  static const int occurEqs340[] = {1,2853};
  static const int occurEqs341[] = {1,2856};
  static const int occurEqs342[] = {1,2858};
  static const int occurEqs343[] = {1,2881};
  static const int occurEqs344[] = {1,2882};
  static const int occurEqs345[] = {1,2893};
  static const int occurEqs346[] = {1,2897};
  static const int occurEqs347[] = {1,2897};
  static const int occurEqs348[] = {1,2900};
  static const int occurEqs349[] = {1,2902};
  static const int occurEqs350[] = {1,2925};
  static const int occurEqs351[] = {1,2926};
  static const int occurEqs352[] = {1,2937};
  static const int occurEqs353[] = {1,2941};
  static const int occurEqs354[] = {1,2941};
  static const int occurEqs355[] = {1,2944};
  static const int occurEqs356[] = {1,2946};
  static const int occurEqs357[] = {1,2969};
  static const int occurEqs358[] = {1,2970};
  static const int occurEqs359[] = {1,2981};
  static const int occurEqs360[] = {1,2985};
  static const int occurEqs361[] = {1,2985};
  static const int occurEqs362[] = {1,2988};
  static const int occurEqs363[] = {1,2990};
  static const int occurEqs364[] = {1,3013};
  static const int occurEqs365[] = {1,3014};
  static const int occurEqs366[] = {1,3025};
  static const int occurEqs367[] = {1,3029};
  static const int occurEqs368[] = {1,3029};
  static const int occurEqs369[] = {1,3032};
  static const int occurEqs370[] = {1,3034};
  static const int occurEqs371[] = {1,3057};
  static const int occurEqs372[] = {1,3058};
  static const int occurEqs373[] = {1,3069};
  static const int occurEqs374[] = {1,3073};
  static const int occurEqs375[] = {1,3073};
  static const int occurEqs376[] = {1,3076};
  static const int occurEqs377[] = {1,3078};
  static const int occurEqs378[] = {1,3101};
  static const int occurEqs379[] = {1,3102};
  static const int occurEqs380[] = {1,3113};
  static const int occurEqs381[] = {1,3117};
  static const int occurEqs382[] = {1,3117};
  static const int occurEqs383[] = {1,3120};
  static const int occurEqs384[] = {1,3122};
  static const int occurEqs385[] = {1,3145};
  static const int occurEqs386[] = {1,3146};
  static const int occurEqs387[] = {1,3157};
  static const int occurEqs388[] = {1,3161};
  static const int occurEqs389[] = {1,3161};
  static const int occurEqs390[] = {1,3164};
  static const int occurEqs391[] = {1,3166};
  static const int occurEqs392[] = {1,3189};
  static const int occurEqs393[] = {1,3190};
  static const int occurEqs394[] = {1,3201};
  static const int occurEqs395[] = {1,3205};
  static const int occurEqs396[] = {1,3205};
  static const int occurEqs397[] = {1,3208};
  static const int occurEqs398[] = {1,3210};
  static const int occurEqs399[] = {1,3233};
  static const int occurEqs400[] = {1,3553};
  static const int occurEqs401[] = {1,3554};
  static const int occurEqs402[] = {1,3555};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28,occurEqs29,occurEqs30,occurEqs31,occurEqs32,occurEqs33,occurEqs34,occurEqs35,occurEqs36,occurEqs37,occurEqs38,occurEqs39,occurEqs40,occurEqs41,occurEqs42,occurEqs43,occurEqs44,occurEqs45,occurEqs46,occurEqs47,occurEqs48,occurEqs49,occurEqs50,occurEqs51,occurEqs52,occurEqs53,occurEqs54,occurEqs55,occurEqs56,occurEqs57,occurEqs58,occurEqs59,occurEqs60,occurEqs61,occurEqs62,occurEqs63,occurEqs64,occurEqs65,occurEqs66,occurEqs67,occurEqs68,occurEqs69,occurEqs70,occurEqs71,occurEqs72,occurEqs73,occurEqs74,occurEqs75,occurEqs76,occurEqs77,occurEqs78,occurEqs79,occurEqs80,occurEqs81,occurEqs82,occurEqs83,occurEqs84,occurEqs85,occurEqs86,occurEqs87,occurEqs88,occurEqs89,occurEqs90,occurEqs91,occurEqs92,occurEqs93,occurEqs94,occurEqs95,occurEqs96,occurEqs97,occurEqs98,occurEqs99,occurEqs100,occurEqs101,occurEqs102,occurEqs103,occurEqs104,occurEqs105,occurEqs106,occurEqs107,occurEqs108,occurEqs109,occurEqs110,occurEqs111,occurEqs112,occurEqs113,occurEqs114,occurEqs115,occurEqs116,occurEqs117,occurEqs118,occurEqs119,occurEqs120,occurEqs121,occurEqs122,occurEqs123,occurEqs124,occurEqs125,occurEqs126,occurEqs127,occurEqs128,occurEqs129,occurEqs130,occurEqs131,occurEqs132,occurEqs133,occurEqs134,occurEqs135,occurEqs136,occurEqs137,occurEqs138,occurEqs139,occurEqs140,occurEqs141,occurEqs142,occurEqs143,occurEqs144,occurEqs145,occurEqs146,occurEqs147,occurEqs148,occurEqs149,occurEqs150,occurEqs151,occurEqs152,occurEqs153,occurEqs154,occurEqs155,occurEqs156,occurEqs157,occurEqs158,occurEqs159,occurEqs160,occurEqs161,occurEqs162,occurEqs163,occurEqs164,occurEqs165,occurEqs166,occurEqs167,occurEqs168,occurEqs169,occurEqs170,occurEqs171,occurEqs172,occurEqs173,occurEqs174,occurEqs175,occurEqs176,occurEqs177,occurEqs178,occurEqs179,occurEqs180,occurEqs181,occurEqs182,occurEqs183,occurEqs184,occurEqs185,occurEqs186,occurEqs187,occurEqs188,occurEqs189,occurEqs190,occurEqs191,occurEqs192,occurEqs193,occurEqs194,occurEqs195,occurEqs196,occurEqs197,occurEqs198,occurEqs199,occurEqs200,occurEqs201,occurEqs202,occurEqs203,occurEqs204,occurEqs205,occurEqs206,occurEqs207,occurEqs208,occurEqs209,occurEqs210,occurEqs211,occurEqs212,occurEqs213,occurEqs214,occurEqs215,occurEqs216,occurEqs217,occurEqs218,occurEqs219,occurEqs220,occurEqs221,occurEqs222,occurEqs223,occurEqs224,occurEqs225,occurEqs226,occurEqs227,occurEqs228,occurEqs229,occurEqs230,occurEqs231,occurEqs232,occurEqs233,occurEqs234,occurEqs235,occurEqs236,occurEqs237,occurEqs238,occurEqs239,occurEqs240,occurEqs241,occurEqs242,occurEqs243,occurEqs244,occurEqs245,occurEqs246,occurEqs247,occurEqs248,occurEqs249,occurEqs250,occurEqs251,occurEqs252,occurEqs253,occurEqs254,occurEqs255,occurEqs256,occurEqs257,occurEqs258,occurEqs259,occurEqs260,occurEqs261,occurEqs262,occurEqs263,occurEqs264,occurEqs265,occurEqs266,occurEqs267,occurEqs268,occurEqs269,occurEqs270,occurEqs271,occurEqs272,occurEqs273,occurEqs274,occurEqs275,occurEqs276,occurEqs277,occurEqs278,occurEqs279,occurEqs280,occurEqs281,occurEqs282,occurEqs283,occurEqs284,occurEqs285,occurEqs286,occurEqs287,occurEqs288,occurEqs289,occurEqs290,occurEqs291,occurEqs292,occurEqs293,occurEqs294,occurEqs295,occurEqs296,occurEqs297,occurEqs298,occurEqs299,occurEqs300,occurEqs301,occurEqs302,occurEqs303,occurEqs304,occurEqs305,occurEqs306,occurEqs307,occurEqs308,occurEqs309,occurEqs310,occurEqs311,occurEqs312,occurEqs313,occurEqs314,occurEqs315,occurEqs316,occurEqs317,occurEqs318,occurEqs319,occurEqs320,occurEqs321,occurEqs322,occurEqs323,occurEqs324,occurEqs325,occurEqs326,occurEqs327,occurEqs328,occurEqs329,occurEqs330,occurEqs331,occurEqs332,occurEqs333,occurEqs334,occurEqs335,occurEqs336,occurEqs337,occurEqs338,occurEqs339,occurEqs340,occurEqs341,occurEqs342,occurEqs343,occurEqs344,occurEqs345,occurEqs346,occurEqs347,occurEqs348,occurEqs349,occurEqs350,occurEqs351,occurEqs352,occurEqs353,occurEqs354,occurEqs355,occurEqs356,occurEqs357,occurEqs358,occurEqs359,occurEqs360,occurEqs361,occurEqs362,occurEqs363,occurEqs364,occurEqs365,occurEqs366,occurEqs367,occurEqs368,occurEqs369,occurEqs370,occurEqs371,occurEqs372,occurEqs373,occurEqs374,occurEqs375,occurEqs376,occurEqs377,occurEqs378,occurEqs379,occurEqs380,occurEqs381,occurEqs382,occurEqs383,occurEqs384,occurEqs385,occurEqs386,occurEqs387,occurEqs388,occurEqs389,occurEqs390,occurEqs391,occurEqs392,occurEqs393,occurEqs394,occurEqs395,occurEqs396,occurEqs397,occurEqs398,occurEqs399,occurEqs400,occurEqs401,occurEqs402};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */

int MyNordic_initialized_TestCase_initialized_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  
  return 0;
}

int MyNordic_initialized_TestCase_initialized_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_boolean tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_boolean tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_boolean tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_boolean tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_boolean tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_boolean tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_boolean tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_boolean tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_boolean tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_boolean tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_boolean tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_boolean tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_boolean tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_boolean tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_boolean tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_boolean tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_boolean tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_boolean tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_boolean tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_boolean tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_boolean tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_boolean tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_boolean tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_boolean tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_boolean tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_boolean tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_boolean tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_boolean tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_boolean tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_boolean tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_boolean tmp174;
  modelica_real tmp175;
  modelica_real tmp176;
  modelica_boolean tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_boolean tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_boolean tmp183;
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_boolean tmp186;
  modelica_real tmp187;
  modelica_real tmp188;
  modelica_boolean tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_boolean tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_boolean tmp195;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_boolean tmp198;
  modelica_real tmp199;
  modelica_real tmp200;
  modelica_boolean tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_boolean tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_boolean tmp207;
  modelica_real tmp208;
  modelica_real tmp209;
  modelica_boolean tmp210;
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_boolean tmp213;
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_boolean tmp216;
  modelica_real tmp217;
  modelica_real tmp218;
  modelica_boolean tmp219;
  modelica_real tmp220;
  modelica_real tmp221;
  modelica_boolean tmp222;
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_boolean tmp225;
  modelica_real tmp226;
  modelica_real tmp227;
  modelica_boolean tmp228;
  modelica_real tmp229;
  modelica_real tmp230;
  modelica_boolean tmp231;
  modelica_real tmp232;
  modelica_real tmp233;
  modelica_boolean tmp234;
  modelica_real tmp235;
  modelica_real tmp236;
  modelica_boolean tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_boolean tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_boolean tmp243;
  modelica_real tmp244;
  modelica_real tmp245;
  modelica_boolean tmp246;
  modelica_real tmp247;
  modelica_real tmp248;
  modelica_boolean tmp249;
  modelica_real tmp250;
  modelica_real tmp251;
  modelica_boolean tmp252;
  modelica_real tmp253;
  modelica_real tmp254;
  modelica_boolean tmp255;
  modelica_real tmp256;
  modelica_real tmp257;
  modelica_boolean tmp258;
  modelica_real tmp259;
  modelica_real tmp260;
  modelica_boolean tmp261;
  modelica_real tmp262;
  modelica_real tmp263;
  modelica_boolean tmp264;
  modelica_real tmp265;
  modelica_real tmp266;
  modelica_boolean tmp267;
  modelica_real tmp268;
  modelica_real tmp269;
  modelica_boolean tmp270;
  modelica_real tmp271;
  modelica_real tmp272;
  modelica_boolean tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_boolean tmp276;
  modelica_real tmp277;
  modelica_real tmp278;
  modelica_boolean tmp279;
  modelica_real tmp280;
  modelica_real tmp281;
  modelica_boolean tmp282;
  modelica_real tmp283;
  modelica_real tmp284;
  modelica_boolean tmp285;
  modelica_real tmp286;
  modelica_real tmp287;
  modelica_boolean tmp288;
  modelica_real tmp289;
  modelica_real tmp290;
  modelica_boolean tmp291;
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_boolean tmp294;
  modelica_real tmp295;
  modelica_real tmp296;
  modelica_boolean tmp297;
  modelica_real tmp298;
  modelica_real tmp299;
  modelica_boolean tmp300;
  modelica_real tmp301;
  modelica_real tmp302;
  modelica_boolean tmp303;
  modelica_real tmp304;
  modelica_real tmp305;
  modelica_boolean tmp306;
  modelica_real tmp307;
  modelica_real tmp308;
  modelica_boolean tmp309;
  modelica_real tmp310;
  modelica_real tmp311;
  modelica_boolean tmp312;
  modelica_real tmp313;
  modelica_real tmp314;
  modelica_boolean tmp315;
  modelica_real tmp316;
  modelica_real tmp317;
  modelica_boolean tmp318;
  modelica_real tmp319;
  modelica_real tmp320;
  modelica_boolean tmp321;
  modelica_real tmp322;
  modelica_real tmp323;
  modelica_boolean tmp324;
  modelica_real tmp325;
  modelica_real tmp326;
  modelica_boolean tmp327;
  modelica_real tmp328;
  modelica_real tmp329;
  modelica_boolean tmp330;
  modelica_real tmp331;
  modelica_real tmp332;
  modelica_boolean tmp333;
  modelica_real tmp334;
  modelica_real tmp335;
  modelica_boolean tmp336;
  modelica_real tmp337;
  modelica_real tmp338;
  modelica_boolean tmp339;
  modelica_real tmp340;
  modelica_real tmp341;
  modelica_boolean tmp342;
  modelica_real tmp343;
  modelica_real tmp344;
  modelica_boolean tmp345;
  modelica_real tmp346;
  modelica_real tmp347;
  modelica_boolean tmp348;
  modelica_real tmp349;
  modelica_real tmp350;
  modelica_boolean tmp351;
  modelica_real tmp352;
  modelica_real tmp353;
  modelica_boolean tmp354;
  modelica_real tmp355;
  modelica_real tmp356;
  modelica_boolean tmp357;
  modelica_real tmp358;
  modelica_real tmp359;
  modelica_boolean tmp360;
  modelica_real tmp361;
  modelica_real tmp362;
  modelica_boolean tmp363;
  modelica_real tmp364;
  modelica_real tmp365;
  modelica_boolean tmp366;
  modelica_real tmp367;
  modelica_real tmp368;
  modelica_boolean tmp369;
  modelica_real tmp370;
  modelica_real tmp371;
  modelica_boolean tmp372;
  modelica_real tmp373;
  modelica_real tmp374;
  modelica_boolean tmp375;
  modelica_real tmp376;
  modelica_real tmp377;
  modelica_boolean tmp378;
  modelica_real tmp379;
  modelica_real tmp380;
  modelica_boolean tmp381;
  modelica_real tmp382;
  modelica_real tmp383;
  modelica_boolean tmp384;
  modelica_real tmp385;
  modelica_real tmp386;
  modelica_boolean tmp387;
  modelica_real tmp388;
  modelica_real tmp389;
  modelica_boolean tmp390;
  modelica_real tmp391;
  modelica_real tmp392;
  modelica_boolean tmp393;
  modelica_real tmp394;
  modelica_real tmp395;
  modelica_boolean tmp396;
  modelica_real tmp397;
  modelica_real tmp398;
  modelica_boolean tmp399;
  modelica_real tmp400;
  modelica_real tmp401;
  modelica_boolean tmp402;
  modelica_real tmp403;
  modelica_real tmp404;
  modelica_boolean tmp405;
  modelica_real tmp406;
  modelica_real tmp407;
  modelica_boolean tmp408;
  modelica_real tmp409;
  modelica_real tmp410;
  modelica_boolean tmp411;
  modelica_real tmp412;
  modelica_real tmp413;
  modelica_boolean tmp414;
  modelica_real tmp415;
  modelica_real tmp416;
  modelica_boolean tmp417;
  modelica_real tmp418;
  modelica_real tmp419;
  modelica_boolean tmp420;
  modelica_real tmp421;
  modelica_real tmp422;
  modelica_boolean tmp423;
  modelica_real tmp424;
  modelica_real tmp425;
  modelica_boolean tmp426;
  modelica_real tmp427;
  modelica_real tmp428;
  modelica_boolean tmp429;
  modelica_real tmp430;
  modelica_real tmp431;
  modelica_boolean tmp432;
  modelica_real tmp433;
  modelica_real tmp434;
  modelica_boolean tmp435;
  modelica_real tmp436;
  modelica_real tmp437;
  modelica_boolean tmp438;
  modelica_real tmp439;
  modelica_real tmp440;
  modelica_boolean tmp441;
  modelica_real tmp442;
  modelica_real tmp443;
  modelica_boolean tmp444;
  modelica_real tmp445;
  modelica_real tmp446;
  modelica_boolean tmp447;
  modelica_real tmp448;
  modelica_real tmp449;
  modelica_boolean tmp450;
  modelica_real tmp451;
  modelica_real tmp452;
  modelica_boolean tmp453;
  modelica_real tmp454;
  modelica_real tmp455;
  modelica_boolean tmp456;
  modelica_real tmp457;
  modelica_real tmp458;
  modelica_boolean tmp459;
  modelica_real tmp460;
  modelica_real tmp461;
  modelica_boolean tmp462;
  modelica_real tmp463;
  modelica_real tmp464;
  modelica_boolean tmp465;
  modelica_real tmp466;
  modelica_real tmp467;
  modelica_boolean tmp468;
  modelica_real tmp469;
  modelica_real tmp470;
  modelica_boolean tmp471;
  modelica_real tmp472;
  modelica_real tmp473;
  modelica_boolean tmp474;
  modelica_real tmp475;
  modelica_real tmp476;
  modelica_boolean tmp477;
  modelica_real tmp478;
  modelica_real tmp479;
  modelica_boolean tmp480;
  modelica_real tmp481;
  modelica_real tmp482;
  modelica_boolean tmp483;
  modelica_real tmp484;
  modelica_real tmp485;
  modelica_boolean tmp486;
  modelica_real tmp487;
  modelica_real tmp488;
  modelica_boolean tmp489;
  modelica_real tmp490;
  modelica_real tmp491;
  modelica_boolean tmp492;
  modelica_real tmp493;
  modelica_real tmp494;
  modelica_boolean tmp495;
  modelica_real tmp496;
  modelica_real tmp497;
  modelica_boolean tmp498;
  modelica_real tmp499;
  modelica_real tmp500;
  modelica_boolean tmp501;
  modelica_real tmp502;
  modelica_real tmp503;
  modelica_boolean tmp504;
  modelica_real tmp505;
  modelica_real tmp506;
  modelica_boolean tmp507;
  modelica_real tmp508;
  modelica_real tmp509;
  modelica_boolean tmp510;
  modelica_real tmp511;
  modelica_real tmp512;
  modelica_boolean tmp513;
  modelica_real tmp514;
  modelica_real tmp515;
  modelica_boolean tmp516;
  modelica_real tmp517;
  modelica_real tmp518;
  modelica_boolean tmp519;
  modelica_real tmp520;
  modelica_real tmp521;
  modelica_boolean tmp522;
  modelica_real tmp523;
  modelica_real tmp524;
  modelica_boolean tmp525;
  modelica_real tmp526;
  modelica_real tmp527;
  modelica_boolean tmp528;
  modelica_real tmp529;
  modelica_real tmp530;
  modelica_boolean tmp531;
  modelica_real tmp532;
  modelica_real tmp533;
  modelica_boolean tmp534;
  modelica_real tmp535;
  modelica_real tmp536;
  modelica_boolean tmp537;
  modelica_real tmp538;
  modelica_real tmp539;
  modelica_boolean tmp540;
  modelica_real tmp541;
  modelica_real tmp542;
  modelica_boolean tmp543;
  modelica_real tmp544;
  modelica_real tmp545;
  modelica_boolean tmp546;
  modelica_real tmp547;
  modelica_real tmp548;
  modelica_boolean tmp549;
  modelica_real tmp550;
  modelica_real tmp551;
  modelica_boolean tmp552;
  modelica_real tmp553;
  modelica_real tmp554;
  modelica_boolean tmp555;
  modelica_real tmp556;
  modelica_real tmp557;
  modelica_boolean tmp558;
  modelica_real tmp559;
  modelica_real tmp560;
  modelica_boolean tmp561;
  modelica_real tmp562;
  modelica_real tmp563;
  modelica_boolean tmp564;
  modelica_real tmp565;
  modelica_real tmp566;
  modelica_boolean tmp567;
  modelica_real tmp568;
  modelica_real tmp569;
  modelica_boolean tmp570;
  modelica_real tmp571;
  modelica_real tmp572;
  modelica_boolean tmp573;
  modelica_real tmp574;
  modelica_real tmp575;
  modelica_boolean tmp576;
  modelica_real tmp577;
  modelica_real tmp578;
  modelica_boolean tmp579;
  modelica_real tmp580;
  modelica_real tmp581;
  modelica_boolean tmp582;
  modelica_real tmp583;
  modelica_real tmp584;
  modelica_boolean tmp585;
  modelica_real tmp586;
  modelica_real tmp587;
  modelica_boolean tmp588;
  modelica_real tmp589;
  modelica_real tmp590;
  modelica_boolean tmp591;
  modelica_real tmp592;
  modelica_real tmp593;
  modelica_boolean tmp594;
  modelica_real tmp595;
  modelica_real tmp596;
  modelica_boolean tmp597;
  modelica_real tmp598;
  modelica_real tmp599;
  modelica_boolean tmp600;
  modelica_real tmp601;
  modelica_real tmp602;
  modelica_boolean tmp603;
  modelica_real tmp604;
  modelica_real tmp605;
  modelica_boolean tmp606;
  modelica_real tmp607;
  modelica_real tmp608;
  modelica_boolean tmp609;
  modelica_real tmp610;
  modelica_real tmp611;
  modelica_boolean tmp612;
  modelica_real tmp613;
  modelica_real tmp614;
  modelica_boolean tmp615;
  modelica_real tmp616;
  modelica_real tmp617;
  modelica_boolean tmp618;
  modelica_real tmp619;
  modelica_real tmp620;
  modelica_boolean tmp621;
  modelica_real tmp622;
  modelica_real tmp623;
  modelica_boolean tmp624;
  modelica_real tmp625;
  modelica_real tmp626;
  modelica_boolean tmp627;
  modelica_real tmp628;
  modelica_real tmp629;
  modelica_boolean tmp630;
  modelica_real tmp631;
  modelica_real tmp632;
  modelica_boolean tmp633;
  modelica_real tmp634;
  modelica_real tmp635;
  modelica_boolean tmp636;
  modelica_real tmp637;
  modelica_real tmp638;
  modelica_boolean tmp639;
  modelica_real tmp640;
  modelica_real tmp641;
  modelica_boolean tmp642;
  modelica_real tmp643;
  modelica_real tmp644;
  modelica_boolean tmp645;
  modelica_real tmp646;
  modelica_real tmp647;
  modelica_boolean tmp648;
  modelica_real tmp649;
  modelica_real tmp650;
  modelica_boolean tmp651;
  modelica_real tmp652;
  modelica_real tmp653;
  modelica_boolean tmp654;
  modelica_real tmp655;
  modelica_real tmp656;
  modelica_boolean tmp657;
  modelica_real tmp658;
  modelica_real tmp659;
  modelica_boolean tmp660;
  modelica_real tmp661;
  modelica_real tmp662;
  modelica_boolean tmp663;
  modelica_real tmp664;
  modelica_real tmp665;
  modelica_boolean tmp666;
  modelica_real tmp667;
  modelica_real tmp668;
  modelica_boolean tmp669;
  modelica_real tmp670;
  modelica_real tmp671;
  modelica_boolean tmp672;
  modelica_real tmp673;
  modelica_real tmp674;
  modelica_boolean tmp675;
  modelica_real tmp676;
  modelica_real tmp677;
  modelica_boolean tmp678;
  modelica_real tmp679;
  modelica_real tmp680;
  modelica_boolean tmp681;
  modelica_real tmp682;
  modelica_real tmp683;
  modelica_boolean tmp684;
  modelica_real tmp685;
  modelica_real tmp686;
  modelica_boolean tmp687;
  modelica_real tmp688;
  modelica_real tmp689;
  modelica_boolean tmp690;
  modelica_real tmp691;
  modelica_real tmp692;
  modelica_boolean tmp693;
  modelica_real tmp694;
  modelica_real tmp695;
  modelica_boolean tmp696;
  modelica_real tmp697;
  modelica_real tmp698;
  modelica_boolean tmp699;
  modelica_real tmp700;
  modelica_real tmp701;
  modelica_boolean tmp702;
  modelica_real tmp703;
  modelica_real tmp704;
  modelica_boolean tmp705;
  modelica_real tmp706;
  modelica_real tmp707;
  modelica_boolean tmp708;
  modelica_real tmp709;
  modelica_real tmp710;
  modelica_boolean tmp711;
  modelica_real tmp712;
  modelica_real tmp713;
  modelica_boolean tmp714;
  modelica_real tmp715;
  modelica_real tmp716;
  modelica_boolean tmp717;
  modelica_real tmp718;
  modelica_real tmp719;
  modelica_boolean tmp720;
  modelica_real tmp721;
  modelica_real tmp722;
  modelica_boolean tmp723;
  modelica_real tmp724;
  modelica_real tmp725;
  modelica_boolean tmp726;
  modelica_real tmp727;
  modelica_real tmp728;
  modelica_boolean tmp729;
  modelica_real tmp730;
  modelica_real tmp731;
  modelica_boolean tmp732;
  modelica_real tmp733;
  modelica_real tmp734;
  modelica_boolean tmp735;
  modelica_real tmp736;
  modelica_real tmp737;
  modelica_boolean tmp738;
  modelica_real tmp739;
  modelica_real tmp740;
  modelica_boolean tmp741;
  modelica_real tmp742;
  modelica_real tmp743;
  modelica_boolean tmp744;
  modelica_real tmp745;
  modelica_real tmp746;
  modelica_boolean tmp747;
  modelica_real tmp748;
  modelica_real tmp749;
  modelica_boolean tmp750;
  modelica_real tmp751;
  modelica_real tmp752;
  modelica_boolean tmp753;
  modelica_real tmp754;
  modelica_real tmp755;
  modelica_boolean tmp756;
  modelica_real tmp757;
  modelica_real tmp758;
  modelica_boolean tmp759;
  modelica_real tmp760;
  modelica_real tmp761;
  modelica_boolean tmp762;
  modelica_real tmp763;
  modelica_real tmp764;
  modelica_boolean tmp765;
  modelica_real tmp766;
  modelica_real tmp767;
  modelica_boolean tmp768;
  modelica_real tmp769;
  modelica_real tmp770;
  modelica_boolean tmp771;
  modelica_real tmp772;
  modelica_real tmp773;
  modelica_boolean tmp774;
  modelica_real tmp775;
  modelica_real tmp776;
  modelica_boolean tmp777;
  modelica_real tmp778;
  modelica_real tmp779;
  modelica_boolean tmp780;
  modelica_real tmp781;
  modelica_real tmp782;
  modelica_boolean tmp783;
  modelica_real tmp784;
  modelica_real tmp785;
  modelica_boolean tmp786;
  modelica_real tmp787;
  modelica_real tmp788;
  modelica_boolean tmp789;
  modelica_real tmp790;
  modelica_real tmp791;
  modelica_boolean tmp792;
  modelica_real tmp793;
  modelica_real tmp794;
  modelica_boolean tmp795;
  modelica_real tmp796;
  modelica_real tmp797;
  modelica_boolean tmp798;
  modelica_real tmp799;
  modelica_real tmp800;
  modelica_boolean tmp801;
  modelica_real tmp802;
  modelica_real tmp803;
  modelica_boolean tmp804;
  modelica_real tmp805;
  modelica_real tmp806;
  modelica_boolean tmp807;
  modelica_real tmp808;
  modelica_real tmp809;
  modelica_boolean tmp810;
  modelica_real tmp811;
  modelica_real tmp812;
  modelica_boolean tmp813;
  modelica_real tmp814;
  modelica_real tmp815;
  modelica_boolean tmp816;
  modelica_real tmp817;
  modelica_real tmp818;
  modelica_boolean tmp819;
  modelica_real tmp820;
  modelica_real tmp821;
  modelica_boolean tmp822;
  modelica_real tmp823;
  modelica_real tmp824;
  modelica_boolean tmp825;
  modelica_real tmp826;
  modelica_real tmp827;
  modelica_boolean tmp828;
  modelica_real tmp829;
  modelica_real tmp830;
  modelica_boolean tmp831;
  modelica_real tmp832;
  modelica_real tmp833;
  modelica_boolean tmp834;
  modelica_real tmp835;
  modelica_real tmp836;
  modelica_boolean tmp837;
  modelica_real tmp838;
  modelica_real tmp839;
  modelica_boolean tmp840;
  modelica_real tmp841;
  modelica_real tmp842;
  modelica_boolean tmp843;
  modelica_real tmp844;
  modelica_real tmp845;
  modelica_boolean tmp846;
  modelica_real tmp847;
  modelica_real tmp848;
  modelica_boolean tmp849;
  modelica_real tmp850;
  modelica_real tmp851;
  modelica_boolean tmp852;
  modelica_real tmp853;
  modelica_real tmp854;
  modelica_boolean tmp855;
  modelica_real tmp856;
  modelica_real tmp857;
  modelica_boolean tmp858;
  modelica_real tmp859;
  modelica_real tmp860;
  modelica_boolean tmp861;
  modelica_real tmp862;
  modelica_real tmp863;
  modelica_boolean tmp864;
  modelica_real tmp865;
  modelica_real tmp866;
  modelica_boolean tmp867;
  modelica_real tmp868;
  modelica_real tmp869;
  modelica_boolean tmp870;
  modelica_real tmp871;
  modelica_real tmp872;
  modelica_boolean tmp873;
  modelica_real tmp874;
  modelica_real tmp875;
  modelica_boolean tmp876;
  modelica_real tmp877;
  modelica_real tmp878;
  modelica_boolean tmp879;
  modelica_real tmp880;
  modelica_real tmp881;
  modelica_boolean tmp882;
  modelica_real tmp883;
  modelica_real tmp884;
  modelica_boolean tmp885;
  modelica_real tmp886;
  modelica_real tmp887;
  modelica_boolean tmp888;
  modelica_real tmp889;
  modelica_real tmp890;
  modelica_boolean tmp891;
  modelica_real tmp892;
  modelica_real tmp893;
  modelica_boolean tmp894;
  modelica_real tmp895;
  modelica_real tmp896;
  modelica_boolean tmp897;
  modelica_real tmp898;
  modelica_real tmp899;
  modelica_boolean tmp900;
  modelica_real tmp901;
  modelica_real tmp902;
  modelica_boolean tmp903;
  modelica_real tmp904;
  modelica_real tmp905;
  modelica_boolean tmp906;
  modelica_real tmp907;
  modelica_real tmp908;
  modelica_boolean tmp909;
  modelica_real tmp910;
  modelica_real tmp911;
  modelica_boolean tmp912;
  modelica_real tmp913;
  modelica_real tmp914;
  modelica_boolean tmp915;
  modelica_real tmp916;
  modelica_real tmp917;
  modelica_boolean tmp918;
  modelica_real tmp919;
  modelica_real tmp920;
  modelica_boolean tmp921;
  modelica_real tmp922;
  modelica_real tmp923;
  modelica_boolean tmp924;
  modelica_real tmp925;
  modelica_real tmp926;
  modelica_boolean tmp927;
  modelica_real tmp928;
  modelica_real tmp929;
  modelica_boolean tmp930;
  modelica_real tmp931;
  modelica_real tmp932;
  modelica_boolean tmp933;
  modelica_real tmp934;
  modelica_real tmp935;
  modelica_boolean tmp936;
  modelica_real tmp937;
  modelica_real tmp938;
  modelica_boolean tmp939;
  modelica_real tmp940;
  modelica_real tmp941;
  modelica_boolean tmp942;
  modelica_real tmp943;
  modelica_real tmp944;
  modelica_boolean tmp945;
  modelica_real tmp946;
  modelica_real tmp947;
  modelica_boolean tmp948;
  modelica_real tmp949;
  modelica_real tmp950;
  modelica_boolean tmp951;
  modelica_real tmp952;
  modelica_real tmp953;
  modelica_boolean tmp954;
  modelica_real tmp955;
  modelica_real tmp956;
  modelica_boolean tmp957;
  modelica_real tmp958;
  modelica_real tmp959;
  modelica_boolean tmp960;
  modelica_real tmp961;
  modelica_real tmp962;
  modelica_boolean tmp963;
  modelica_real tmp964;
  modelica_real tmp965;
  modelica_boolean tmp966;
  modelica_real tmp967;
  modelica_real tmp968;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) == 0.0)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = ((((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */) == 0.0) && ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */) == 0.0))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = 1.0;
  tmp0 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3468]] /* vrNordic_g01.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */), tmp1, tmp2, data->simulationInfo->storedRelations[228]);
  gout[start_index] = (tmp0) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp4 = 1.0;
  tmp5 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4140]] /* vrNordic_g01.greaterEqualThreshold.threshold PARAM */));
  tmp3 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4140]] /* vrNordic_g01.greaterEqualThreshold.threshold PARAM */), tmp4, tmp5, data->simulationInfo->storedRelations[229]);
  gout[start_index] = (tmp3) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp7 = 1.0;
  tmp8 = 0.1;
  tmp6 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */), -0.1, tmp7, tmp8, data->simulationInfo->storedRelations[230]);
  gout[start_index] = (tmp6) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp10 = 1.0;
  tmp11 = 0.0;
  tmp9 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */), 0.0, tmp10, tmp11, data->simulationInfo->storedRelations[231]);
  gout[start_index] = (tmp9) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp13 = 1.0;
  tmp14 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4183]] /* vrNordic_g01.limIntegrator.outMin PARAM */));
  tmp12 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4183]] /* vrNordic_g01.limIntegrator.outMin PARAM */), tmp13, tmp14, data->simulationInfo->storedRelations[232]);
  tmp16 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */))) * (1.0);
  tmp17 = 0.0;
  tmp15 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)), 0.0, tmp16, tmp17, data->simulationInfo->storedRelations[233]);
  tmp19 = 1.0;
  tmp20 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4182]] /* vrNordic_g01.limIntegrator.outMax PARAM */));
  tmp18 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4182]] /* vrNordic_g01.limIntegrator.outMax PARAM */), tmp19, tmp20, data->simulationInfo->storedRelations[234]);
  tmp22 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */))) * (1.0);
  tmp23 = 0.0;
  tmp21 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)), 0.0, tmp22, tmp23, data->simulationInfo->storedRelations[235]);
  gout[start_index] = (((tmp12 && tmp15) || (tmp18 && tmp21))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp25 = 1.0;
  tmp26 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4197]] /* vrNordic_g01.timer.outMin PARAM */));
  tmp24 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4197]] /* vrNordic_g01.timer.outMin PARAM */), tmp25, tmp26, data->simulationInfo->storedRelations[236]);
  tmp28 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */))) * (1.0);
  tmp29 = 0.0;
  tmp27 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)), 0.0, tmp28, tmp29, data->simulationInfo->storedRelations[237]);
  tmp31 = 1.0;
  tmp32 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4196]] /* vrNordic_g01.timer.outMax PARAM */));
  tmp30 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4196]] /* vrNordic_g01.timer.outMax PARAM */), tmp31, tmp32, data->simulationInfo->storedRelations[238]);
  tmp34 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */))) * (1.0);
  tmp35 = 0.0;
  tmp33 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)), 0.0, tmp34, tmp35, data->simulationInfo->storedRelations[239]);
  gout[start_index] = (((tmp24 && tmp27) || (tmp30 && tmp33))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp37 = 1.0;
  tmp38 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp36 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp37, tmp38, data->simulationInfo->storedRelations[240]);
  tmp40 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp41 = 0.0;
  tmp39 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp40, tmp41, data->simulationInfo->storedRelations[241]);
  tmp43 = 1.0;
  tmp44 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp42 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp43, tmp44, data->simulationInfo->storedRelations[242]);
  tmp46 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp47 = 0.0;
  tmp45 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp46, tmp47, data->simulationInfo->storedRelations[243]);
  gout[start_index] = (((tmp36 && tmp39) || (tmp42 && tmp45))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp49 = 1.0;
  tmp50 = 1.0;
  tmp48 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3492]] /* vrNordic_g02.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */), tmp49, tmp50, data->simulationInfo->storedRelations[244]);
  gout[start_index] = (tmp48) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp52 = 1.0;
  tmp53 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4219]] /* vrNordic_g02.greaterEqualThreshold.threshold PARAM */));
  tmp51 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4219]] /* vrNordic_g02.greaterEqualThreshold.threshold PARAM */), tmp52, tmp53, data->simulationInfo->storedRelations[245]);
  gout[start_index] = (tmp51) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp55 = 1.0;
  tmp56 = 0.1;
  tmp54 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */), -0.1, tmp55, tmp56, data->simulationInfo->storedRelations[246]);
  gout[start_index] = (tmp54) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp58 = 1.0;
  tmp59 = 0.0;
  tmp57 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */), 0.0, tmp58, tmp59, data->simulationInfo->storedRelations[247]);
  gout[start_index] = (tmp57) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp61 = 1.0;
  tmp62 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4262]] /* vrNordic_g02.limIntegrator.outMin PARAM */));
  tmp60 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4262]] /* vrNordic_g02.limIntegrator.outMin PARAM */), tmp61, tmp62, data->simulationInfo->storedRelations[248]);
  tmp64 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */))) * (1.0);
  tmp65 = 0.0;
  tmp63 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)), 0.0, tmp64, tmp65, data->simulationInfo->storedRelations[249]);
  tmp67 = 1.0;
  tmp68 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4261]] /* vrNordic_g02.limIntegrator.outMax PARAM */));
  tmp66 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4261]] /* vrNordic_g02.limIntegrator.outMax PARAM */), tmp67, tmp68, data->simulationInfo->storedRelations[250]);
  tmp70 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */))) * (1.0);
  tmp71 = 0.0;
  tmp69 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)), 0.0, tmp70, tmp71, data->simulationInfo->storedRelations[251]);
  gout[start_index] = (((tmp60 && tmp63) || (tmp66 && tmp69))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp73 = 1.0;
  tmp74 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4276]] /* vrNordic_g02.timer.outMin PARAM */));
  tmp72 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4276]] /* vrNordic_g02.timer.outMin PARAM */), tmp73, tmp74, data->simulationInfo->storedRelations[252]);
  tmp76 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */))) * (1.0);
  tmp77 = 0.0;
  tmp75 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)), 0.0, tmp76, tmp77, data->simulationInfo->storedRelations[253]);
  tmp79 = 1.0;
  tmp80 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4275]] /* vrNordic_g02.timer.outMax PARAM */));
  tmp78 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4275]] /* vrNordic_g02.timer.outMax PARAM */), tmp79, tmp80, data->simulationInfo->storedRelations[254]);
  tmp82 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */))) * (1.0);
  tmp83 = 0.0;
  tmp81 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)), 0.0, tmp82, tmp83, data->simulationInfo->storedRelations[255]);
  gout[start_index] = (((tmp72 && tmp75) || (tmp78 && tmp81))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp85 = 1.0;
  tmp86 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2317]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp84 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2317]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp85, tmp86, data->simulationInfo->storedRelations[256]);
  tmp88 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp89 = 0.0;
  tmp87 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp88, tmp89, data->simulationInfo->storedRelations[257]);
  tmp91 = 1.0;
  tmp92 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2316]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp90 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2316]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp91, tmp92, data->simulationInfo->storedRelations[258]);
  tmp94 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp95 = 0.0;
  tmp93 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp94, tmp95, data->simulationInfo->storedRelations[259]);
  gout[start_index] = (((tmp84 && tmp87) || (tmp90 && tmp93))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp97 = 1.0;
  tmp98 = 1.0;
  tmp96 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3516]] /* vrNordic_g03.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */), tmp97, tmp98, data->simulationInfo->storedRelations[260]);
  gout[start_index] = (tmp96) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp100 = 1.0;
  tmp101 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4298]] /* vrNordic_g03.greaterEqualThreshold.threshold PARAM */));
  tmp99 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4298]] /* vrNordic_g03.greaterEqualThreshold.threshold PARAM */), tmp100, tmp101, data->simulationInfo->storedRelations[261]);
  gout[start_index] = (tmp99) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp103 = 1.0;
  tmp104 = 0.1;
  tmp102 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */), -0.1, tmp103, tmp104, data->simulationInfo->storedRelations[262]);
  gout[start_index] = (tmp102) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp106 = 1.0;
  tmp107 = 0.0;
  tmp105 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */), 0.0, tmp106, tmp107, data->simulationInfo->storedRelations[263]);
  gout[start_index] = (tmp105) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp109 = 1.0;
  tmp110 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4341]] /* vrNordic_g03.limIntegrator.outMin PARAM */));
  tmp108 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4341]] /* vrNordic_g03.limIntegrator.outMin PARAM */), tmp109, tmp110, data->simulationInfo->storedRelations[264]);
  tmp112 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */))) * (1.0);
  tmp113 = 0.0;
  tmp111 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)), 0.0, tmp112, tmp113, data->simulationInfo->storedRelations[265]);
  tmp115 = 1.0;
  tmp116 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4340]] /* vrNordic_g03.limIntegrator.outMax PARAM */));
  tmp114 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4340]] /* vrNordic_g03.limIntegrator.outMax PARAM */), tmp115, tmp116, data->simulationInfo->storedRelations[266]);
  tmp118 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */))) * (1.0);
  tmp119 = 0.0;
  tmp117 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)), 0.0, tmp118, tmp119, data->simulationInfo->storedRelations[267]);
  gout[start_index] = (((tmp108 && tmp111) || (tmp114 && tmp117))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp121 = 1.0;
  tmp122 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4355]] /* vrNordic_g03.timer.outMin PARAM */));
  tmp120 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4355]] /* vrNordic_g03.timer.outMin PARAM */), tmp121, tmp122, data->simulationInfo->storedRelations[268]);
  tmp124 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */))) * (1.0);
  tmp125 = 0.0;
  tmp123 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)), 0.0, tmp124, tmp125, data->simulationInfo->storedRelations[269]);
  tmp127 = 1.0;
  tmp128 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4354]] /* vrNordic_g03.timer.outMax PARAM */));
  tmp126 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4354]] /* vrNordic_g03.timer.outMax PARAM */), tmp127, tmp128, data->simulationInfo->storedRelations[270]);
  tmp130 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */))) * (1.0);
  tmp131 = 0.0;
  tmp129 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)), 0.0, tmp130, tmp131, data->simulationInfo->storedRelations[271]);
  gout[start_index] = (((tmp120 && tmp123) || (tmp126 && tmp129))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp133 = 1.0;
  tmp134 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp132 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp133, tmp134, data->simulationInfo->storedRelations[272]);
  tmp136 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp137 = 0.0;
  tmp135 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp136, tmp137, data->simulationInfo->storedRelations[273]);
  tmp139 = 1.0;
  tmp140 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2352]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp138 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2352]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp139, tmp140, data->simulationInfo->storedRelations[274]);
  tmp142 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp143 = 0.0;
  tmp141 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp142, tmp143, data->simulationInfo->storedRelations[275]);
  gout[start_index] = (((tmp132 && tmp135) || (tmp138 && tmp141))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp145 = 1.0;
  tmp146 = 1.0;
  tmp144 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* vrNordic_g04.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */), tmp145, tmp146, data->simulationInfo->storedRelations[276]);
  gout[start_index] = (tmp144) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp148 = 1.0;
  tmp149 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4377]] /* vrNordic_g04.greaterEqualThreshold.threshold PARAM */));
  tmp147 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4377]] /* vrNordic_g04.greaterEqualThreshold.threshold PARAM */), tmp148, tmp149, data->simulationInfo->storedRelations[277]);
  gout[start_index] = (tmp147) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp151 = 1.0;
  tmp152 = 0.1;
  tmp150 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */), -0.1, tmp151, tmp152, data->simulationInfo->storedRelations[278]);
  gout[start_index] = (tmp150) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp154 = 1.0;
  tmp155 = 0.0;
  tmp153 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */), 0.0, tmp154, tmp155, data->simulationInfo->storedRelations[279]);
  gout[start_index] = (tmp153) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp157 = 1.0;
  tmp158 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4420]] /* vrNordic_g04.limIntegrator.outMin PARAM */));
  tmp156 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4420]] /* vrNordic_g04.limIntegrator.outMin PARAM */), tmp157, tmp158, data->simulationInfo->storedRelations[280]);
  tmp160 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */))) * (1.0);
  tmp161 = 0.0;
  tmp159 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)), 0.0, tmp160, tmp161, data->simulationInfo->storedRelations[281]);
  tmp163 = 1.0;
  tmp164 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4419]] /* vrNordic_g04.limIntegrator.outMax PARAM */));
  tmp162 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4419]] /* vrNordic_g04.limIntegrator.outMax PARAM */), tmp163, tmp164, data->simulationInfo->storedRelations[282]);
  tmp166 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */))) * (1.0);
  tmp167 = 0.0;
  tmp165 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)), 0.0, tmp166, tmp167, data->simulationInfo->storedRelations[283]);
  gout[start_index] = (((tmp156 && tmp159) || (tmp162 && tmp165))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp169 = 1.0;
  tmp170 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4434]] /* vrNordic_g04.timer.outMin PARAM */));
  tmp168 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4434]] /* vrNordic_g04.timer.outMin PARAM */), tmp169, tmp170, data->simulationInfo->storedRelations[284]);
  tmp172 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */))) * (1.0);
  tmp173 = 0.0;
  tmp171 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)), 0.0, tmp172, tmp173, data->simulationInfo->storedRelations[285]);
  tmp175 = 1.0;
  tmp176 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4433]] /* vrNordic_g04.timer.outMax PARAM */));
  tmp174 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4433]] /* vrNordic_g04.timer.outMax PARAM */), tmp175, tmp176, data->simulationInfo->storedRelations[286]);
  tmp178 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */))) * (1.0);
  tmp179 = 0.0;
  tmp177 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)), 0.0, tmp178, tmp179, data->simulationInfo->storedRelations[287]);
  gout[start_index] = (((tmp168 && tmp171) || (tmp174 && tmp177))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp181 = 1.0;
  tmp182 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp180 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp181, tmp182, data->simulationInfo->storedRelations[288]);
  tmp184 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp185 = 0.0;
  tmp183 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp184, tmp185, data->simulationInfo->storedRelations[289]);
  tmp187 = 1.0;
  tmp188 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp186 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp187, tmp188, data->simulationInfo->storedRelations[290]);
  tmp190 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp191 = 0.0;
  tmp189 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp190, tmp191, data->simulationInfo->storedRelations[291]);
  gout[start_index] = (((tmp180 && tmp183) || (tmp186 && tmp189))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp193 = 1.0;
  tmp194 = 1.0;
  tmp192 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3564]] /* vrNordic_g05.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */), tmp193, tmp194, data->simulationInfo->storedRelations[292]);
  gout[start_index] = (tmp192) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp196 = 1.0;
  tmp197 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4456]] /* vrNordic_g05.greaterEqualThreshold.threshold PARAM */));
  tmp195 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4456]] /* vrNordic_g05.greaterEqualThreshold.threshold PARAM */), tmp196, tmp197, data->simulationInfo->storedRelations[293]);
  gout[start_index] = (tmp195) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp199 = 1.0;
  tmp200 = 0.1;
  tmp198 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */), -0.1, tmp199, tmp200, data->simulationInfo->storedRelations[294]);
  gout[start_index] = (tmp198) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp202 = 1.0;
  tmp203 = 0.0;
  tmp201 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */), 0.0, tmp202, tmp203, data->simulationInfo->storedRelations[295]);
  gout[start_index] = (tmp201) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp205 = 1.0;
  tmp206 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4499]] /* vrNordic_g05.limIntegrator.outMin PARAM */));
  tmp204 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4499]] /* vrNordic_g05.limIntegrator.outMin PARAM */), tmp205, tmp206, data->simulationInfo->storedRelations[296]);
  tmp208 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */))) * (1.0);
  tmp209 = 0.0;
  tmp207 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)), 0.0, tmp208, tmp209, data->simulationInfo->storedRelations[297]);
  tmp211 = 1.0;
  tmp212 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4498]] /* vrNordic_g05.limIntegrator.outMax PARAM */));
  tmp210 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4498]] /* vrNordic_g05.limIntegrator.outMax PARAM */), tmp211, tmp212, data->simulationInfo->storedRelations[298]);
  tmp214 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */))) * (1.0);
  tmp215 = 0.0;
  tmp213 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)), 0.0, tmp214, tmp215, data->simulationInfo->storedRelations[299]);
  gout[start_index] = (((tmp204 && tmp207) || (tmp210 && tmp213))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp217 = 1.0;
  tmp218 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4513]] /* vrNordic_g05.timer.outMin PARAM */));
  tmp216 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4513]] /* vrNordic_g05.timer.outMin PARAM */), tmp217, tmp218, data->simulationInfo->storedRelations[300]);
  tmp220 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */))) * (1.0);
  tmp221 = 0.0;
  tmp219 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)), 0.0, tmp220, tmp221, data->simulationInfo->storedRelations[301]);
  tmp223 = 1.0;
  tmp224 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4512]] /* vrNordic_g05.timer.outMax PARAM */));
  tmp222 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4512]] /* vrNordic_g05.timer.outMax PARAM */), tmp223, tmp224, data->simulationInfo->storedRelations[302]);
  tmp226 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */))) * (1.0);
  tmp227 = 0.0;
  tmp225 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)), 0.0, tmp226, tmp227, data->simulationInfo->storedRelations[303]);
  gout[start_index] = (((tmp216 && tmp219) || (tmp222 && tmp225))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp229 = 1.0;
  tmp230 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp228 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp229, tmp230, data->simulationInfo->storedRelations[304]);
  tmp232 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp233 = 0.0;
  tmp231 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp232, tmp233, data->simulationInfo->storedRelations[305]);
  tmp235 = 1.0;
  tmp236 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp234 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp235, tmp236, data->simulationInfo->storedRelations[306]);
  tmp238 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp239 = 0.0;
  tmp237 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp238, tmp239, data->simulationInfo->storedRelations[307]);
  gout[start_index] = (((tmp228 && tmp231) || (tmp234 && tmp237))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp241 = 1.0;
  tmp242 = 1.0;
  tmp240 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3588]] /* vrNordic_g06.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */), tmp241, tmp242, data->simulationInfo->storedRelations[308]);
  gout[start_index] = (tmp240) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp244 = 1.0;
  tmp245 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4535]] /* vrNordic_g06.greaterEqualThreshold.threshold PARAM */));
  tmp243 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4535]] /* vrNordic_g06.greaterEqualThreshold.threshold PARAM */), tmp244, tmp245, data->simulationInfo->storedRelations[309]);
  gout[start_index] = (tmp243) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp247 = 1.0;
  tmp248 = 0.1;
  tmp246 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */), -0.1, tmp247, tmp248, data->simulationInfo->storedRelations[310]);
  gout[start_index] = (tmp246) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp250 = 1.0;
  tmp251 = 0.0;
  tmp249 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */), 0.0, tmp250, tmp251, data->simulationInfo->storedRelations[311]);
  gout[start_index] = (tmp249) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp253 = 1.0;
  tmp254 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4578]] /* vrNordic_g06.limIntegrator.outMin PARAM */));
  tmp252 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4578]] /* vrNordic_g06.limIntegrator.outMin PARAM */), tmp253, tmp254, data->simulationInfo->storedRelations[312]);
  tmp256 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */))) * (1.0);
  tmp257 = 0.0;
  tmp255 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)), 0.0, tmp256, tmp257, data->simulationInfo->storedRelations[313]);
  tmp259 = 1.0;
  tmp260 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4577]] /* vrNordic_g06.limIntegrator.outMax PARAM */));
  tmp258 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4577]] /* vrNordic_g06.limIntegrator.outMax PARAM */), tmp259, tmp260, data->simulationInfo->storedRelations[314]);
  tmp262 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */))) * (1.0);
  tmp263 = 0.0;
  tmp261 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)), 0.0, tmp262, tmp263, data->simulationInfo->storedRelations[315]);
  gout[start_index] = (((tmp252 && tmp255) || (tmp258 && tmp261))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp265 = 1.0;
  tmp266 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4592]] /* vrNordic_g06.timer.outMin PARAM */));
  tmp264 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4592]] /* vrNordic_g06.timer.outMin PARAM */), tmp265, tmp266, data->simulationInfo->storedRelations[316]);
  tmp268 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */))) * (1.0);
  tmp269 = 0.0;
  tmp267 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)), 0.0, tmp268, tmp269, data->simulationInfo->storedRelations[317]);
  tmp271 = 1.0;
  tmp272 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4591]] /* vrNordic_g06.timer.outMax PARAM */));
  tmp270 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4591]] /* vrNordic_g06.timer.outMax PARAM */), tmp271, tmp272, data->simulationInfo->storedRelations[318]);
  tmp274 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */))) * (1.0);
  tmp275 = 0.0;
  tmp273 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)), 0.0, tmp274, tmp275, data->simulationInfo->storedRelations[319]);
  gout[start_index] = (((tmp264 && tmp267) || (tmp270 && tmp273))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp277 = 1.0;
  tmp278 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2461]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp276 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2461]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp277, tmp278, data->simulationInfo->storedRelations[320]);
  tmp280 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp281 = 0.0;
  tmp279 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp280, tmp281, data->simulationInfo->storedRelations[321]);
  tmp283 = 1.0;
  tmp284 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2460]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp282 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2460]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp283, tmp284, data->simulationInfo->storedRelations[322]);
  tmp286 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp287 = 0.0;
  tmp285 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp286, tmp287, data->simulationInfo->storedRelations[323]);
  gout[start_index] = (((tmp276 && tmp279) || (tmp282 && tmp285))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp289 = 1.0;
  tmp290 = 1.0;
  tmp288 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3612]] /* vrNordic_g07.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */), tmp289, tmp290, data->simulationInfo->storedRelations[324]);
  gout[start_index] = (tmp288) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp292 = 1.0;
  tmp293 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4614]] /* vrNordic_g07.greaterEqualThreshold.threshold PARAM */));
  tmp291 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4614]] /* vrNordic_g07.greaterEqualThreshold.threshold PARAM */), tmp292, tmp293, data->simulationInfo->storedRelations[325]);
  gout[start_index] = (tmp291) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp295 = 1.0;
  tmp296 = 0.1;
  tmp294 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */), -0.1, tmp295, tmp296, data->simulationInfo->storedRelations[326]);
  gout[start_index] = (tmp294) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp298 = 1.0;
  tmp299 = 0.0;
  tmp297 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */), 0.0, tmp298, tmp299, data->simulationInfo->storedRelations[327]);
  gout[start_index] = (tmp297) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp301 = 1.0;
  tmp302 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4657]] /* vrNordic_g07.limIntegrator.outMin PARAM */));
  tmp300 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4657]] /* vrNordic_g07.limIntegrator.outMin PARAM */), tmp301, tmp302, data->simulationInfo->storedRelations[328]);
  tmp304 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */))) * (1.0);
  tmp305 = 0.0;
  tmp303 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)), 0.0, tmp304, tmp305, data->simulationInfo->storedRelations[329]);
  tmp307 = 1.0;
  tmp308 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4656]] /* vrNordic_g07.limIntegrator.outMax PARAM */));
  tmp306 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4656]] /* vrNordic_g07.limIntegrator.outMax PARAM */), tmp307, tmp308, data->simulationInfo->storedRelations[330]);
  tmp310 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */))) * (1.0);
  tmp311 = 0.0;
  tmp309 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)), 0.0, tmp310, tmp311, data->simulationInfo->storedRelations[331]);
  gout[start_index] = (((tmp300 && tmp303) || (tmp306 && tmp309))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp313 = 1.0;
  tmp314 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4671]] /* vrNordic_g07.timer.outMin PARAM */));
  tmp312 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4671]] /* vrNordic_g07.timer.outMin PARAM */), tmp313, tmp314, data->simulationInfo->storedRelations[332]);
  tmp316 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */))) * (1.0);
  tmp317 = 0.0;
  tmp315 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)), 0.0, tmp316, tmp317, data->simulationInfo->storedRelations[333]);
  tmp319 = 1.0;
  tmp320 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4670]] /* vrNordic_g07.timer.outMax PARAM */));
  tmp318 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4670]] /* vrNordic_g07.timer.outMax PARAM */), tmp319, tmp320, data->simulationInfo->storedRelations[334]);
  tmp322 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */))) * (1.0);
  tmp323 = 0.0;
  tmp321 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)), 0.0, tmp322, tmp323, data->simulationInfo->storedRelations[335]);
  gout[start_index] = (((tmp312 && tmp315) || (tmp318 && tmp321))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp325 = 1.0;
  tmp326 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2497]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp324 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2497]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp325, tmp326, data->simulationInfo->storedRelations[336]);
  tmp328 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp329 = 0.0;
  tmp327 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp328, tmp329, data->simulationInfo->storedRelations[337]);
  tmp331 = 1.0;
  tmp332 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp330 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp331, tmp332, data->simulationInfo->storedRelations[338]);
  tmp334 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp335 = 0.0;
  tmp333 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp334, tmp335, data->simulationInfo->storedRelations[339]);
  gout[start_index] = (((tmp324 && tmp327) || (tmp330 && tmp333))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp337 = 1.0;
  tmp338 = 1.0;
  tmp336 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vrNordic_g08.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */), tmp337, tmp338, data->simulationInfo->storedRelations[340]);
  gout[start_index] = (tmp336) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp340 = 1.0;
  tmp341 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4693]] /* vrNordic_g08.greaterEqualThreshold.threshold PARAM */));
  tmp339 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4693]] /* vrNordic_g08.greaterEqualThreshold.threshold PARAM */), tmp340, tmp341, data->simulationInfo->storedRelations[341]);
  gout[start_index] = (tmp339) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp343 = 1.0;
  tmp344 = 0.1;
  tmp342 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */), -0.1, tmp343, tmp344, data->simulationInfo->storedRelations[342]);
  gout[start_index] = (tmp342) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp346 = 1.0;
  tmp347 = 0.0;
  tmp345 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */), 0.0, tmp346, tmp347, data->simulationInfo->storedRelations[343]);
  gout[start_index] = (tmp345) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp349 = 1.0;
  tmp350 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4736]] /* vrNordic_g08.limIntegrator.outMin PARAM */));
  tmp348 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4736]] /* vrNordic_g08.limIntegrator.outMin PARAM */), tmp349, tmp350, data->simulationInfo->storedRelations[344]);
  tmp352 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */))) * (1.0);
  tmp353 = 0.0;
  tmp351 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)), 0.0, tmp352, tmp353, data->simulationInfo->storedRelations[345]);
  tmp355 = 1.0;
  tmp356 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4735]] /* vrNordic_g08.limIntegrator.outMax PARAM */));
  tmp354 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4735]] /* vrNordic_g08.limIntegrator.outMax PARAM */), tmp355, tmp356, data->simulationInfo->storedRelations[346]);
  tmp358 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */))) * (1.0);
  tmp359 = 0.0;
  tmp357 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)), 0.0, tmp358, tmp359, data->simulationInfo->storedRelations[347]);
  gout[start_index] = (((tmp348 && tmp351) || (tmp354 && tmp357))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp361 = 1.0;
  tmp362 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4750]] /* vrNordic_g08.timer.outMin PARAM */));
  tmp360 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4750]] /* vrNordic_g08.timer.outMin PARAM */), tmp361, tmp362, data->simulationInfo->storedRelations[348]);
  tmp364 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */))) * (1.0);
  tmp365 = 0.0;
  tmp363 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)), 0.0, tmp364, tmp365, data->simulationInfo->storedRelations[349]);
  tmp367 = 1.0;
  tmp368 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4749]] /* vrNordic_g08.timer.outMax PARAM */));
  tmp366 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4749]] /* vrNordic_g08.timer.outMax PARAM */), tmp367, tmp368, data->simulationInfo->storedRelations[350]);
  tmp370 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */))) * (1.0);
  tmp371 = 0.0;
  tmp369 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)), 0.0, tmp370, tmp371, data->simulationInfo->storedRelations[351]);
  gout[start_index] = (((tmp360 && tmp363) || (tmp366 && tmp369))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp373 = 1.0;
  tmp374 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp372 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp373, tmp374, data->simulationInfo->storedRelations[352]);
  tmp376 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp377 = 0.0;
  tmp375 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp376, tmp377, data->simulationInfo->storedRelations[353]);
  tmp379 = 1.0;
  tmp380 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp378 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp379, tmp380, data->simulationInfo->storedRelations[354]);
  tmp382 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp383 = 0.0;
  tmp381 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp382, tmp383, data->simulationInfo->storedRelations[355]);
  gout[start_index] = (((tmp372 && tmp375) || (tmp378 && tmp381))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp385 = 1.0;
  tmp386 = 1.0;
  tmp384 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3660]] /* vrNordic_g09.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */), tmp385, tmp386, data->simulationInfo->storedRelations[356]);
  gout[start_index] = (tmp384) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp388 = 1.0;
  tmp389 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4772]] /* vrNordic_g09.greaterEqualThreshold.threshold PARAM */));
  tmp387 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4772]] /* vrNordic_g09.greaterEqualThreshold.threshold PARAM */), tmp388, tmp389, data->simulationInfo->storedRelations[357]);
  gout[start_index] = (tmp387) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp391 = 1.0;
  tmp392 = 0.1;
  tmp390 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */), -0.1, tmp391, tmp392, data->simulationInfo->storedRelations[358]);
  gout[start_index] = (tmp390) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp394 = 1.0;
  tmp395 = 0.0;
  tmp393 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */), 0.0, tmp394, tmp395, data->simulationInfo->storedRelations[359]);
  gout[start_index] = (tmp393) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp397 = 1.0;
  tmp398 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4815]] /* vrNordic_g09.limIntegrator.outMin PARAM */));
  tmp396 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4815]] /* vrNordic_g09.limIntegrator.outMin PARAM */), tmp397, tmp398, data->simulationInfo->storedRelations[360]);
  tmp400 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */))) * (1.0);
  tmp401 = 0.0;
  tmp399 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)), 0.0, tmp400, tmp401, data->simulationInfo->storedRelations[361]);
  tmp403 = 1.0;
  tmp404 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4814]] /* vrNordic_g09.limIntegrator.outMax PARAM */));
  tmp402 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4814]] /* vrNordic_g09.limIntegrator.outMax PARAM */), tmp403, tmp404, data->simulationInfo->storedRelations[362]);
  tmp406 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */))) * (1.0);
  tmp407 = 0.0;
  tmp405 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)), 0.0, tmp406, tmp407, data->simulationInfo->storedRelations[363]);
  gout[start_index] = (((tmp396 && tmp399) || (tmp402 && tmp405))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp409 = 1.0;
  tmp410 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4829]] /* vrNordic_g09.timer.outMin PARAM */));
  tmp408 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4829]] /* vrNordic_g09.timer.outMin PARAM */), tmp409, tmp410, data->simulationInfo->storedRelations[364]);
  tmp412 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */))) * (1.0);
  tmp413 = 0.0;
  tmp411 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)), 0.0, tmp412, tmp413, data->simulationInfo->storedRelations[365]);
  tmp415 = 1.0;
  tmp416 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4828]] /* vrNordic_g09.timer.outMax PARAM */));
  tmp414 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4828]] /* vrNordic_g09.timer.outMax PARAM */), tmp415, tmp416, data->simulationInfo->storedRelations[366]);
  tmp418 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */))) * (1.0);
  tmp419 = 0.0;
  tmp417 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)), 0.0, tmp418, tmp419, data->simulationInfo->storedRelations[367]);
  gout[start_index] = (((tmp408 && tmp411) || (tmp414 && tmp417))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp421 = 1.0;
  tmp422 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp420 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp421, tmp422, data->simulationInfo->storedRelations[368]);
  tmp424 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp425 = 0.0;
  tmp423 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp424, tmp425, data->simulationInfo->storedRelations[369]);
  tmp427 = 1.0;
  tmp428 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp426 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp427, tmp428, data->simulationInfo->storedRelations[370]);
  tmp430 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp431 = 0.0;
  tmp429 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp430, tmp431, data->simulationInfo->storedRelations[371]);
  gout[start_index] = (((tmp420 && tmp423) || (tmp426 && tmp429))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp433 = 1.0;
  tmp434 = 1.0;
  tmp432 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* vrNordic_g10.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */), tmp433, tmp434, data->simulationInfo->storedRelations[372]);
  gout[start_index] = (tmp432) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp436 = 1.0;
  tmp437 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4851]] /* vrNordic_g10.greaterEqualThreshold.threshold PARAM */));
  tmp435 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4851]] /* vrNordic_g10.greaterEqualThreshold.threshold PARAM */), tmp436, tmp437, data->simulationInfo->storedRelations[373]);
  gout[start_index] = (tmp435) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp439 = 1.0;
  tmp440 = 0.1;
  tmp438 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */), -0.1, tmp439, tmp440, data->simulationInfo->storedRelations[374]);
  gout[start_index] = (tmp438) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp442 = 1.0;
  tmp443 = 0.0;
  tmp441 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */), 0.0, tmp442, tmp443, data->simulationInfo->storedRelations[375]);
  gout[start_index] = (tmp441) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp445 = 1.0;
  tmp446 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4894]] /* vrNordic_g10.limIntegrator.outMin PARAM */));
  tmp444 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4894]] /* vrNordic_g10.limIntegrator.outMin PARAM */), tmp445, tmp446, data->simulationInfo->storedRelations[376]);
  tmp448 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */))) * (1.0);
  tmp449 = 0.0;
  tmp447 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)), 0.0, tmp448, tmp449, data->simulationInfo->storedRelations[377]);
  tmp451 = 1.0;
  tmp452 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4893]] /* vrNordic_g10.limIntegrator.outMax PARAM */));
  tmp450 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4893]] /* vrNordic_g10.limIntegrator.outMax PARAM */), tmp451, tmp452, data->simulationInfo->storedRelations[378]);
  tmp454 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */))) * (1.0);
  tmp455 = 0.0;
  tmp453 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)), 0.0, tmp454, tmp455, data->simulationInfo->storedRelations[379]);
  gout[start_index] = (((tmp444 && tmp447) || (tmp450 && tmp453))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp457 = 1.0;
  tmp458 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4908]] /* vrNordic_g10.timer.outMin PARAM */));
  tmp456 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4908]] /* vrNordic_g10.timer.outMin PARAM */), tmp457, tmp458, data->simulationInfo->storedRelations[380]);
  tmp460 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */))) * (1.0);
  tmp461 = 0.0;
  tmp459 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)), 0.0, tmp460, tmp461, data->simulationInfo->storedRelations[381]);
  tmp463 = 1.0;
  tmp464 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4907]] /* vrNordic_g10.timer.outMax PARAM */));
  tmp462 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4907]] /* vrNordic_g10.timer.outMax PARAM */), tmp463, tmp464, data->simulationInfo->storedRelations[382]);
  tmp466 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */))) * (1.0);
  tmp467 = 0.0;
  tmp465 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)), 0.0, tmp466, tmp467, data->simulationInfo->storedRelations[383]);
  gout[start_index] = (((tmp456 && tmp459) || (tmp462 && tmp465))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp469 = 1.0;
  tmp470 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp468 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp469, tmp470, data->simulationInfo->storedRelations[384]);
  tmp472 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp473 = 0.0;
  tmp471 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp472, tmp473, data->simulationInfo->storedRelations[385]);
  tmp475 = 1.0;
  tmp476 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2604]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp474 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2604]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp475, tmp476, data->simulationInfo->storedRelations[386]);
  tmp478 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp479 = 0.0;
  tmp477 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp478, tmp479, data->simulationInfo->storedRelations[387]);
  gout[start_index] = (((tmp468 && tmp471) || (tmp474 && tmp477))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp481 = 1.0;
  tmp482 = 1.0;
  tmp480 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3708]] /* vrNordic_g11.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */), tmp481, tmp482, data->simulationInfo->storedRelations[388]);
  gout[start_index] = (tmp480) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp484 = 1.0;
  tmp485 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4930]] /* vrNordic_g11.greaterEqualThreshold.threshold PARAM */));
  tmp483 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4930]] /* vrNordic_g11.greaterEqualThreshold.threshold PARAM */), tmp484, tmp485, data->simulationInfo->storedRelations[389]);
  gout[start_index] = (tmp483) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp487 = 1.0;
  tmp488 = 0.1;
  tmp486 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */), -0.1, tmp487, tmp488, data->simulationInfo->storedRelations[390]);
  gout[start_index] = (tmp486) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp490 = 1.0;
  tmp491 = 0.0;
  tmp489 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */), 0.0, tmp490, tmp491, data->simulationInfo->storedRelations[391]);
  gout[start_index] = (tmp489) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp493 = 1.0;
  tmp494 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4973]] /* vrNordic_g11.limIntegrator.outMin PARAM */));
  tmp492 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4973]] /* vrNordic_g11.limIntegrator.outMin PARAM */), tmp493, tmp494, data->simulationInfo->storedRelations[392]);
  tmp496 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */))) * (1.0);
  tmp497 = 0.0;
  tmp495 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)), 0.0, tmp496, tmp497, data->simulationInfo->storedRelations[393]);
  tmp499 = 1.0;
  tmp500 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4972]] /* vrNordic_g11.limIntegrator.outMax PARAM */));
  tmp498 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4972]] /* vrNordic_g11.limIntegrator.outMax PARAM */), tmp499, tmp500, data->simulationInfo->storedRelations[394]);
  tmp502 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */))) * (1.0);
  tmp503 = 0.0;
  tmp501 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)), 0.0, tmp502, tmp503, data->simulationInfo->storedRelations[395]);
  gout[start_index] = (((tmp492 && tmp495) || (tmp498 && tmp501))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp505 = 1.0;
  tmp506 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4987]] /* vrNordic_g11.timer.outMin PARAM */));
  tmp504 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4987]] /* vrNordic_g11.timer.outMin PARAM */), tmp505, tmp506, data->simulationInfo->storedRelations[396]);
  tmp508 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */))) * (1.0);
  tmp509 = 0.0;
  tmp507 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)), 0.0, tmp508, tmp509, data->simulationInfo->storedRelations[397]);
  tmp511 = 1.0;
  tmp512 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4986]] /* vrNordic_g11.timer.outMax PARAM */));
  tmp510 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4986]] /* vrNordic_g11.timer.outMax PARAM */), tmp511, tmp512, data->simulationInfo->storedRelations[398]);
  tmp514 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */))) * (1.0);
  tmp515 = 0.0;
  tmp513 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)), 0.0, tmp514, tmp515, data->simulationInfo->storedRelations[399]);
  gout[start_index] = (((tmp504 && tmp507) || (tmp510 && tmp513))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp517 = 1.0;
  tmp518 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp516 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp517, tmp518, data->simulationInfo->storedRelations[400]);
  tmp520 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp521 = 0.0;
  tmp519 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp520, tmp521, data->simulationInfo->storedRelations[401]);
  tmp523 = 1.0;
  tmp524 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp522 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp523, tmp524, data->simulationInfo->storedRelations[402]);
  tmp526 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp527 = 0.0;
  tmp525 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp526, tmp527, data->simulationInfo->storedRelations[403]);
  gout[start_index] = (((tmp516 && tmp519) || (tmp522 && tmp525))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp529 = 1.0;
  tmp530 = 1.0;
  tmp528 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3732]] /* vrNordic_g12.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */), tmp529, tmp530, data->simulationInfo->storedRelations[404]);
  gout[start_index] = (tmp528) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp532 = 1.0;
  tmp533 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5009]] /* vrNordic_g12.greaterEqualThreshold.threshold PARAM */));
  tmp531 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5009]] /* vrNordic_g12.greaterEqualThreshold.threshold PARAM */), tmp532, tmp533, data->simulationInfo->storedRelations[405]);
  gout[start_index] = (tmp531) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp535 = 1.0;
  tmp536 = 0.1;
  tmp534 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */), -0.1, tmp535, tmp536, data->simulationInfo->storedRelations[406]);
  gout[start_index] = (tmp534) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp538 = 1.0;
  tmp539 = 0.0;
  tmp537 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */), 0.0, tmp538, tmp539, data->simulationInfo->storedRelations[407]);
  gout[start_index] = (tmp537) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp541 = 1.0;
  tmp542 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5052]] /* vrNordic_g12.limIntegrator.outMin PARAM */));
  tmp540 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5052]] /* vrNordic_g12.limIntegrator.outMin PARAM */), tmp541, tmp542, data->simulationInfo->storedRelations[408]);
  tmp544 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */))) * (1.0);
  tmp545 = 0.0;
  tmp543 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)), 0.0, tmp544, tmp545, data->simulationInfo->storedRelations[409]);
  tmp547 = 1.0;
  tmp548 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5051]] /* vrNordic_g12.limIntegrator.outMax PARAM */));
  tmp546 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5051]] /* vrNordic_g12.limIntegrator.outMax PARAM */), tmp547, tmp548, data->simulationInfo->storedRelations[410]);
  tmp550 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */))) * (1.0);
  tmp551 = 0.0;
  tmp549 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)), 0.0, tmp550, tmp551, data->simulationInfo->storedRelations[411]);
  gout[start_index] = (((tmp540 && tmp543) || (tmp546 && tmp549))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp553 = 1.0;
  tmp554 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5066]] /* vrNordic_g12.timer.outMin PARAM */));
  tmp552 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5066]] /* vrNordic_g12.timer.outMin PARAM */), tmp553, tmp554, data->simulationInfo->storedRelations[412]);
  tmp556 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */))) * (1.0);
  tmp557 = 0.0;
  tmp555 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)), 0.0, tmp556, tmp557, data->simulationInfo->storedRelations[413]);
  tmp559 = 1.0;
  tmp560 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5065]] /* vrNordic_g12.timer.outMax PARAM */));
  tmp558 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5065]] /* vrNordic_g12.timer.outMax PARAM */), tmp559, tmp560, data->simulationInfo->storedRelations[414]);
  tmp562 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */))) * (1.0);
  tmp563 = 0.0;
  tmp561 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)), 0.0, tmp562, tmp563, data->simulationInfo->storedRelations[415]);
  gout[start_index] = (((tmp552 && tmp555) || (tmp558 && tmp561))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp565 = 1.0;
  tmp566 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp564 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp565, tmp566, data->simulationInfo->storedRelations[416]);
  tmp568 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp569 = 0.0;
  tmp567 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp568, tmp569, data->simulationInfo->storedRelations[417]);
  tmp571 = 1.0;
  tmp572 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp570 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp571, tmp572, data->simulationInfo->storedRelations[418]);
  tmp574 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp575 = 0.0;
  tmp573 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp574, tmp575, data->simulationInfo->storedRelations[419]);
  gout[start_index] = (((tmp564 && tmp567) || (tmp570 && tmp573))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp577 = 1.0;
  tmp578 = 1.0;
  tmp576 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vrNordic_g13.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */), tmp577, tmp578, data->simulationInfo->storedRelations[420]);
  gout[start_index] = (tmp576) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp580 = 1.0;
  tmp581 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5088]] /* vrNordic_g13.greaterEqualThreshold.threshold PARAM */));
  tmp579 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5088]] /* vrNordic_g13.greaterEqualThreshold.threshold PARAM */), tmp580, tmp581, data->simulationInfo->storedRelations[421]);
  gout[start_index] = (tmp579) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp583 = 1.0;
  tmp584 = 0.1;
  tmp582 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */), -0.1, tmp583, tmp584, data->simulationInfo->storedRelations[422]);
  gout[start_index] = (tmp582) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp586 = 1.0;
  tmp587 = 0.0;
  tmp585 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */), 0.0, tmp586, tmp587, data->simulationInfo->storedRelations[423]);
  gout[start_index] = (tmp585) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp589 = 1.0;
  tmp590 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5131]] /* vrNordic_g13.limIntegrator.outMin PARAM */));
  tmp588 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5131]] /* vrNordic_g13.limIntegrator.outMin PARAM */), tmp589, tmp590, data->simulationInfo->storedRelations[424]);
  tmp592 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */))) * (1.0);
  tmp593 = 0.0;
  tmp591 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)), 0.0, tmp592, tmp593, data->simulationInfo->storedRelations[425]);
  tmp595 = 1.0;
  tmp596 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5130]] /* vrNordic_g13.limIntegrator.outMax PARAM */));
  tmp594 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5130]] /* vrNordic_g13.limIntegrator.outMax PARAM */), tmp595, tmp596, data->simulationInfo->storedRelations[426]);
  tmp598 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */))) * (1.0);
  tmp599 = 0.0;
  tmp597 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)), 0.0, tmp598, tmp599, data->simulationInfo->storedRelations[427]);
  gout[start_index] = (((tmp588 && tmp591) || (tmp594 && tmp597))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp601 = 1.0;
  tmp602 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5145]] /* vrNordic_g13.timer.outMin PARAM */));
  tmp600 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5145]] /* vrNordic_g13.timer.outMin PARAM */), tmp601, tmp602, data->simulationInfo->storedRelations[428]);
  tmp604 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */))) * (1.0);
  tmp605 = 0.0;
  tmp603 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)), 0.0, tmp604, tmp605, data->simulationInfo->storedRelations[429]);
  tmp607 = 1.0;
  tmp608 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5144]] /* vrNordic_g13.timer.outMax PARAM */));
  tmp606 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5144]] /* vrNordic_g13.timer.outMax PARAM */), tmp607, tmp608, data->simulationInfo->storedRelations[430]);
  tmp610 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */))) * (1.0);
  tmp611 = 0.0;
  tmp609 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)), 0.0, tmp610, tmp611, data->simulationInfo->storedRelations[431]);
  gout[start_index] = (((tmp600 && tmp603) || (tmp606 && tmp609))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp613 = 1.0;
  tmp614 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp612 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp613, tmp614, data->simulationInfo->storedRelations[432]);
  tmp616 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp617 = 0.0;
  tmp615 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp616, tmp617, data->simulationInfo->storedRelations[433]);
  tmp619 = 1.0;
  tmp620 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp618 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp619, tmp620, data->simulationInfo->storedRelations[434]);
  tmp622 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp623 = 0.0;
  tmp621 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp622, tmp623, data->simulationInfo->storedRelations[435]);
  gout[start_index] = (((tmp612 && tmp615) || (tmp618 && tmp621))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp625 = 1.0;
  tmp626 = 1.0;
  tmp624 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3780]] /* vrNordic_g14.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */), tmp625, tmp626, data->simulationInfo->storedRelations[436]);
  gout[start_index] = (tmp624) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp628 = 1.0;
  tmp629 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5167]] /* vrNordic_g14.greaterEqualThreshold.threshold PARAM */));
  tmp627 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5167]] /* vrNordic_g14.greaterEqualThreshold.threshold PARAM */), tmp628, tmp629, data->simulationInfo->storedRelations[437]);
  gout[start_index] = (tmp627) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp631 = 1.0;
  tmp632 = 0.1;
  tmp630 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */), -0.1, tmp631, tmp632, data->simulationInfo->storedRelations[438]);
  gout[start_index] = (tmp630) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp634 = 1.0;
  tmp635 = 0.0;
  tmp633 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */), 0.0, tmp634, tmp635, data->simulationInfo->storedRelations[439]);
  gout[start_index] = (tmp633) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp637 = 1.0;
  tmp638 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5210]] /* vrNordic_g14.limIntegrator.outMin PARAM */));
  tmp636 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5210]] /* vrNordic_g14.limIntegrator.outMin PARAM */), tmp637, tmp638, data->simulationInfo->storedRelations[440]);
  tmp640 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */))) * (1.0);
  tmp641 = 0.0;
  tmp639 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)), 0.0, tmp640, tmp641, data->simulationInfo->storedRelations[441]);
  tmp643 = 1.0;
  tmp644 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5209]] /* vrNordic_g14.limIntegrator.outMax PARAM */));
  tmp642 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5209]] /* vrNordic_g14.limIntegrator.outMax PARAM */), tmp643, tmp644, data->simulationInfo->storedRelations[442]);
  tmp646 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */))) * (1.0);
  tmp647 = 0.0;
  tmp645 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)), 0.0, tmp646, tmp647, data->simulationInfo->storedRelations[443]);
  gout[start_index] = (((tmp636 && tmp639) || (tmp642 && tmp645))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp649 = 1.0;
  tmp650 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5224]] /* vrNordic_g14.timer.outMin PARAM */));
  tmp648 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5224]] /* vrNordic_g14.timer.outMin PARAM */), tmp649, tmp650, data->simulationInfo->storedRelations[444]);
  tmp652 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */))) * (1.0);
  tmp653 = 0.0;
  tmp651 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)), 0.0, tmp652, tmp653, data->simulationInfo->storedRelations[445]);
  tmp655 = 1.0;
  tmp656 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5223]] /* vrNordic_g14.timer.outMax PARAM */));
  tmp654 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5223]] /* vrNordic_g14.timer.outMax PARAM */), tmp655, tmp656, data->simulationInfo->storedRelations[446]);
  tmp658 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */))) * (1.0);
  tmp659 = 0.0;
  tmp657 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)), 0.0, tmp658, tmp659, data->simulationInfo->storedRelations[447]);
  gout[start_index] = (((tmp648 && tmp651) || (tmp654 && tmp657))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp661 = 1.0;
  tmp662 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp660 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp661, tmp662, data->simulationInfo->storedRelations[448]);
  tmp664 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp665 = 0.0;
  tmp663 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp664, tmp665, data->simulationInfo->storedRelations[449]);
  tmp667 = 1.0;
  tmp668 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp666 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp667, tmp668, data->simulationInfo->storedRelations[450]);
  tmp670 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp671 = 0.0;
  tmp669 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp670, tmp671, data->simulationInfo->storedRelations[451]);
  gout[start_index] = (((tmp660 && tmp663) || (tmp666 && tmp669))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp673 = 1.0;
  tmp674 = 1.0;
  tmp672 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3804]] /* vrNordic_g15.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */), tmp673, tmp674, data->simulationInfo->storedRelations[452]);
  gout[start_index] = (tmp672) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp676 = 1.0;
  tmp677 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5246]] /* vrNordic_g15.greaterEqualThreshold.threshold PARAM */));
  tmp675 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5246]] /* vrNordic_g15.greaterEqualThreshold.threshold PARAM */), tmp676, tmp677, data->simulationInfo->storedRelations[453]);
  gout[start_index] = (tmp675) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp679 = 1.0;
  tmp680 = 0.1;
  tmp678 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */), -0.1, tmp679, tmp680, data->simulationInfo->storedRelations[454]);
  gout[start_index] = (tmp678) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp682 = 1.0;
  tmp683 = 0.0;
  tmp681 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */), 0.0, tmp682, tmp683, data->simulationInfo->storedRelations[455]);
  gout[start_index] = (tmp681) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp685 = 1.0;
  tmp686 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5289]] /* vrNordic_g15.limIntegrator.outMin PARAM */));
  tmp684 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5289]] /* vrNordic_g15.limIntegrator.outMin PARAM */), tmp685, tmp686, data->simulationInfo->storedRelations[456]);
  tmp688 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */))) * (1.0);
  tmp689 = 0.0;
  tmp687 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)), 0.0, tmp688, tmp689, data->simulationInfo->storedRelations[457]);
  tmp691 = 1.0;
  tmp692 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5288]] /* vrNordic_g15.limIntegrator.outMax PARAM */));
  tmp690 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5288]] /* vrNordic_g15.limIntegrator.outMax PARAM */), tmp691, tmp692, data->simulationInfo->storedRelations[458]);
  tmp694 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */))) * (1.0);
  tmp695 = 0.0;
  tmp693 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)), 0.0, tmp694, tmp695, data->simulationInfo->storedRelations[459]);
  gout[start_index] = (((tmp684 && tmp687) || (tmp690 && tmp693))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp697 = 1.0;
  tmp698 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5303]] /* vrNordic_g15.timer.outMin PARAM */));
  tmp696 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5303]] /* vrNordic_g15.timer.outMin PARAM */), tmp697, tmp698, data->simulationInfo->storedRelations[460]);
  tmp700 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */))) * (1.0);
  tmp701 = 0.0;
  tmp699 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)), 0.0, tmp700, tmp701, data->simulationInfo->storedRelations[461]);
  tmp703 = 1.0;
  tmp704 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5302]] /* vrNordic_g15.timer.outMax PARAM */));
  tmp702 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5302]] /* vrNordic_g15.timer.outMax PARAM */), tmp703, tmp704, data->simulationInfo->storedRelations[462]);
  tmp706 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */))) * (1.0);
  tmp707 = 0.0;
  tmp705 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)), 0.0, tmp706, tmp707, data->simulationInfo->storedRelations[463]);
  gout[start_index] = (((tmp696 && tmp699) || (tmp702 && tmp705))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp709 = 1.0;
  tmp710 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp708 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp709, tmp710, data->simulationInfo->storedRelations[464]);
  tmp712 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp713 = 0.0;
  tmp711 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp712, tmp713, data->simulationInfo->storedRelations[465]);
  tmp715 = 1.0;
  tmp716 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp714 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp715, tmp716, data->simulationInfo->storedRelations[466]);
  tmp718 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp719 = 0.0;
  tmp717 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp718, tmp719, data->simulationInfo->storedRelations[467]);
  gout[start_index] = (((tmp708 && tmp711) || (tmp714 && tmp717))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp721 = 1.0;
  tmp722 = 1.0;
  tmp720 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3828]] /* vrNordic_g16.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */), tmp721, tmp722, data->simulationInfo->storedRelations[468]);
  gout[start_index] = (tmp720) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp724 = 1.0;
  tmp725 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5325]] /* vrNordic_g16.greaterEqualThreshold.threshold PARAM */));
  tmp723 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5325]] /* vrNordic_g16.greaterEqualThreshold.threshold PARAM */), tmp724, tmp725, data->simulationInfo->storedRelations[469]);
  gout[start_index] = (tmp723) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp727 = 1.0;
  tmp728 = 0.1;
  tmp726 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */), -0.1, tmp727, tmp728, data->simulationInfo->storedRelations[470]);
  gout[start_index] = (tmp726) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp730 = 1.0;
  tmp731 = 0.0;
  tmp729 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */), 0.0, tmp730, tmp731, data->simulationInfo->storedRelations[471]);
  gout[start_index] = (tmp729) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp733 = 1.0;
  tmp734 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5368]] /* vrNordic_g16.limIntegrator.outMin PARAM */));
  tmp732 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5368]] /* vrNordic_g16.limIntegrator.outMin PARAM */), tmp733, tmp734, data->simulationInfo->storedRelations[472]);
  tmp736 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */))) * (1.0);
  tmp737 = 0.0;
  tmp735 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)), 0.0, tmp736, tmp737, data->simulationInfo->storedRelations[473]);
  tmp739 = 1.0;
  tmp740 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5367]] /* vrNordic_g16.limIntegrator.outMax PARAM */));
  tmp738 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5367]] /* vrNordic_g16.limIntegrator.outMax PARAM */), tmp739, tmp740, data->simulationInfo->storedRelations[474]);
  tmp742 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */))) * (1.0);
  tmp743 = 0.0;
  tmp741 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)), 0.0, tmp742, tmp743, data->simulationInfo->storedRelations[475]);
  gout[start_index] = (((tmp732 && tmp735) || (tmp738 && tmp741))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp745 = 1.0;
  tmp746 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5382]] /* vrNordic_g16.timer.outMin PARAM */));
  tmp744 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5382]] /* vrNordic_g16.timer.outMin PARAM */), tmp745, tmp746, data->simulationInfo->storedRelations[476]);
  tmp748 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */))) * (1.0);
  tmp749 = 0.0;
  tmp747 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)), 0.0, tmp748, tmp749, data->simulationInfo->storedRelations[477]);
  tmp751 = 1.0;
  tmp752 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5381]] /* vrNordic_g16.timer.outMax PARAM */));
  tmp750 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5381]] /* vrNordic_g16.timer.outMax PARAM */), tmp751, tmp752, data->simulationInfo->storedRelations[478]);
  tmp754 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */))) * (1.0);
  tmp755 = 0.0;
  tmp753 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)), 0.0, tmp754, tmp755, data->simulationInfo->storedRelations[479]);
  gout[start_index] = (((tmp744 && tmp747) || (tmp750 && tmp753))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp757 = 1.0;
  tmp758 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp756 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp757, tmp758, data->simulationInfo->storedRelations[480]);
  tmp760 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp761 = 0.0;
  tmp759 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp760, tmp761, data->simulationInfo->storedRelations[481]);
  tmp763 = 1.0;
  tmp764 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp762 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp763, tmp764, data->simulationInfo->storedRelations[482]);
  tmp766 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp767 = 0.0;
  tmp765 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp766, tmp767, data->simulationInfo->storedRelations[483]);
  gout[start_index] = (((tmp756 && tmp759) || (tmp762 && tmp765))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp769 = 1.0;
  tmp770 = 1.0;
  tmp768 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* vrNordic_g17.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */), tmp769, tmp770, data->simulationInfo->storedRelations[484]);
  gout[start_index] = (tmp768) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp772 = 1.0;
  tmp773 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5404]] /* vrNordic_g17.greaterEqualThreshold.threshold PARAM */));
  tmp771 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5404]] /* vrNordic_g17.greaterEqualThreshold.threshold PARAM */), tmp772, tmp773, data->simulationInfo->storedRelations[485]);
  gout[start_index] = (tmp771) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp775 = 1.0;
  tmp776 = 0.1;
  tmp774 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */), -0.1, tmp775, tmp776, data->simulationInfo->storedRelations[486]);
  gout[start_index] = (tmp774) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp778 = 1.0;
  tmp779 = 0.0;
  tmp777 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */), 0.0, tmp778, tmp779, data->simulationInfo->storedRelations[487]);
  gout[start_index] = (tmp777) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp781 = 1.0;
  tmp782 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5447]] /* vrNordic_g17.limIntegrator.outMin PARAM */));
  tmp780 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5447]] /* vrNordic_g17.limIntegrator.outMin PARAM */), tmp781, tmp782, data->simulationInfo->storedRelations[488]);
  tmp784 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */))) * (1.0);
  tmp785 = 0.0;
  tmp783 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)), 0.0, tmp784, tmp785, data->simulationInfo->storedRelations[489]);
  tmp787 = 1.0;
  tmp788 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5446]] /* vrNordic_g17.limIntegrator.outMax PARAM */));
  tmp786 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5446]] /* vrNordic_g17.limIntegrator.outMax PARAM */), tmp787, tmp788, data->simulationInfo->storedRelations[490]);
  tmp790 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */))) * (1.0);
  tmp791 = 0.0;
  tmp789 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)), 0.0, tmp790, tmp791, data->simulationInfo->storedRelations[491]);
  gout[start_index] = (((tmp780 && tmp783) || (tmp786 && tmp789))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp793 = 1.0;
  tmp794 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5461]] /* vrNordic_g17.timer.outMin PARAM */));
  tmp792 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5461]] /* vrNordic_g17.timer.outMin PARAM */), tmp793, tmp794, data->simulationInfo->storedRelations[492]);
  tmp796 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */))) * (1.0);
  tmp797 = 0.0;
  tmp795 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)), 0.0, tmp796, tmp797, data->simulationInfo->storedRelations[493]);
  tmp799 = 1.0;
  tmp800 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5460]] /* vrNordic_g17.timer.outMax PARAM */));
  tmp798 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5460]] /* vrNordic_g17.timer.outMax PARAM */), tmp799, tmp800, data->simulationInfo->storedRelations[494]);
  tmp802 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */))) * (1.0);
  tmp803 = 0.0;
  tmp801 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)), 0.0, tmp802, tmp803, data->simulationInfo->storedRelations[495]);
  gout[start_index] = (((tmp792 && tmp795) || (tmp798 && tmp801))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp805 = 1.0;
  tmp806 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp804 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp805, tmp806, data->simulationInfo->storedRelations[496]);
  tmp808 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp809 = 0.0;
  tmp807 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp808, tmp809, data->simulationInfo->storedRelations[497]);
  tmp811 = 1.0;
  tmp812 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2856]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp810 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2856]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp811, tmp812, data->simulationInfo->storedRelations[498]);
  tmp814 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp815 = 0.0;
  tmp813 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp814, tmp815, data->simulationInfo->storedRelations[499]);
  gout[start_index] = (((tmp804 && tmp807) || (tmp810 && tmp813))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp817 = 1.0;
  tmp818 = 1.0;
  tmp816 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3876]] /* vrNordic_g18.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */), tmp817, tmp818, data->simulationInfo->storedRelations[500]);
  gout[start_index] = (tmp816) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp820 = 1.0;
  tmp821 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5483]] /* vrNordic_g18.greaterEqualThreshold.threshold PARAM */));
  tmp819 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5483]] /* vrNordic_g18.greaterEqualThreshold.threshold PARAM */), tmp820, tmp821, data->simulationInfo->storedRelations[501]);
  gout[start_index] = (tmp819) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp823 = 1.0;
  tmp824 = 0.1;
  tmp822 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */), -0.1, tmp823, tmp824, data->simulationInfo->storedRelations[502]);
  gout[start_index] = (tmp822) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp826 = 1.0;
  tmp827 = 0.0;
  tmp825 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */), 0.0, tmp826, tmp827, data->simulationInfo->storedRelations[503]);
  gout[start_index] = (tmp825) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp829 = 1.0;
  tmp830 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5526]] /* vrNordic_g18.limIntegrator.outMin PARAM */));
  tmp828 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5526]] /* vrNordic_g18.limIntegrator.outMin PARAM */), tmp829, tmp830, data->simulationInfo->storedRelations[504]);
  tmp832 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */))) * (1.0);
  tmp833 = 0.0;
  tmp831 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)), 0.0, tmp832, tmp833, data->simulationInfo->storedRelations[505]);
  tmp835 = 1.0;
  tmp836 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5525]] /* vrNordic_g18.limIntegrator.outMax PARAM */));
  tmp834 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5525]] /* vrNordic_g18.limIntegrator.outMax PARAM */), tmp835, tmp836, data->simulationInfo->storedRelations[506]);
  tmp838 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */))) * (1.0);
  tmp839 = 0.0;
  tmp837 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)), 0.0, tmp838, tmp839, data->simulationInfo->storedRelations[507]);
  gout[start_index] = (((tmp828 && tmp831) || (tmp834 && tmp837))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp841 = 1.0;
  tmp842 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5540]] /* vrNordic_g18.timer.outMin PARAM */));
  tmp840 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5540]] /* vrNordic_g18.timer.outMin PARAM */), tmp841, tmp842, data->simulationInfo->storedRelations[508]);
  tmp844 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */))) * (1.0);
  tmp845 = 0.0;
  tmp843 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)), 0.0, tmp844, tmp845, data->simulationInfo->storedRelations[509]);
  tmp847 = 1.0;
  tmp848 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5539]] /* vrNordic_g18.timer.outMax PARAM */));
  tmp846 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5539]] /* vrNordic_g18.timer.outMax PARAM */), tmp847, tmp848, data->simulationInfo->storedRelations[510]);
  tmp850 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */))) * (1.0);
  tmp851 = 0.0;
  tmp849 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)), 0.0, tmp850, tmp851, data->simulationInfo->storedRelations[511]);
  gout[start_index] = (((tmp840 && tmp843) || (tmp846 && tmp849))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp853 = 1.0;
  tmp854 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp852 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp853, tmp854, data->simulationInfo->storedRelations[512]);
  tmp856 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp857 = 0.0;
  tmp855 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp856, tmp857, data->simulationInfo->storedRelations[513]);
  tmp859 = 1.0;
  tmp860 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp858 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp859, tmp860, data->simulationInfo->storedRelations[514]);
  tmp862 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp863 = 0.0;
  tmp861 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp862, tmp863, data->simulationInfo->storedRelations[515]);
  gout[start_index] = (((tmp852 && tmp855) || (tmp858 && tmp861))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp865 = 1.0;
  tmp866 = 1.0;
  tmp864 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vrNordic_g19.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */), tmp865, tmp866, data->simulationInfo->storedRelations[516]);
  gout[start_index] = (tmp864) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp868 = 1.0;
  tmp869 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5562]] /* vrNordic_g19.greaterEqualThreshold.threshold PARAM */));
  tmp867 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5562]] /* vrNordic_g19.greaterEqualThreshold.threshold PARAM */), tmp868, tmp869, data->simulationInfo->storedRelations[517]);
  gout[start_index] = (tmp867) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp871 = 1.0;
  tmp872 = 0.1;
  tmp870 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */), -0.1, tmp871, tmp872, data->simulationInfo->storedRelations[518]);
  gout[start_index] = (tmp870) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp874 = 1.0;
  tmp875 = 0.0;
  tmp873 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */), 0.0, tmp874, tmp875, data->simulationInfo->storedRelations[519]);
  gout[start_index] = (tmp873) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp877 = 1.0;
  tmp878 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5605]] /* vrNordic_g19.limIntegrator.outMin PARAM */));
  tmp876 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5605]] /* vrNordic_g19.limIntegrator.outMin PARAM */), tmp877, tmp878, data->simulationInfo->storedRelations[520]);
  tmp880 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */))) * (1.0);
  tmp881 = 0.0;
  tmp879 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)), 0.0, tmp880, tmp881, data->simulationInfo->storedRelations[521]);
  tmp883 = 1.0;
  tmp884 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5604]] /* vrNordic_g19.limIntegrator.outMax PARAM */));
  tmp882 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5604]] /* vrNordic_g19.limIntegrator.outMax PARAM */), tmp883, tmp884, data->simulationInfo->storedRelations[522]);
  tmp886 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */))) * (1.0);
  tmp887 = 0.0;
  tmp885 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)), 0.0, tmp886, tmp887, data->simulationInfo->storedRelations[523]);
  gout[start_index] = (((tmp876 && tmp879) || (tmp882 && tmp885))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp889 = 1.0;
  tmp890 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5619]] /* vrNordic_g19.timer.outMin PARAM */));
  tmp888 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5619]] /* vrNordic_g19.timer.outMin PARAM */), tmp889, tmp890, data->simulationInfo->storedRelations[524]);
  tmp892 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */))) * (1.0);
  tmp893 = 0.0;
  tmp891 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)), 0.0, tmp892, tmp893, data->simulationInfo->storedRelations[525]);
  tmp895 = 1.0;
  tmp896 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5618]] /* vrNordic_g19.timer.outMax PARAM */));
  tmp894 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5618]] /* vrNordic_g19.timer.outMax PARAM */), tmp895, tmp896, data->simulationInfo->storedRelations[526]);
  tmp898 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */))) * (1.0);
  tmp899 = 0.0;
  tmp897 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)), 0.0, tmp898, tmp899, data->simulationInfo->storedRelations[527]);
  gout[start_index] = (((tmp888 && tmp891) || (tmp894 && tmp897))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp901 = 1.0;
  tmp902 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp900 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp901, tmp902, data->simulationInfo->storedRelations[528]);
  tmp904 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp905 = 0.0;
  tmp903 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp904, tmp905, data->simulationInfo->storedRelations[529]);
  tmp907 = 1.0;
  tmp908 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp906 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp907, tmp908, data->simulationInfo->storedRelations[530]);
  tmp910 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp911 = 0.0;
  tmp909 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp910, tmp911, data->simulationInfo->storedRelations[531]);
  gout[start_index] = (((tmp900 && tmp903) || (tmp906 && tmp909))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp913 = 1.0;
  tmp914 = 1.0;
  tmp912 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3924]] /* vrNordic_g20.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */), tmp913, tmp914, data->simulationInfo->storedRelations[532]);
  gout[start_index] = (tmp912) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp916 = 1.0;
  tmp917 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5641]] /* vrNordic_g20.greaterEqualThreshold.threshold PARAM */));
  tmp915 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5641]] /* vrNordic_g20.greaterEqualThreshold.threshold PARAM */), tmp916, tmp917, data->simulationInfo->storedRelations[533]);
  gout[start_index] = (tmp915) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp919 = 1.0;
  tmp920 = 0.1;
  tmp918 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */), -0.1, tmp919, tmp920, data->simulationInfo->storedRelations[534]);
  gout[start_index] = (tmp918) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp922 = 1.0;
  tmp923 = 0.0;
  tmp921 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */), 0.0, tmp922, tmp923, data->simulationInfo->storedRelations[535]);
  gout[start_index] = (tmp921) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp925 = 1.0;
  tmp926 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5684]] /* vrNordic_g20.limIntegrator.outMin PARAM */));
  tmp924 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5684]] /* vrNordic_g20.limIntegrator.outMin PARAM */), tmp925, tmp926, data->simulationInfo->storedRelations[536]);
  tmp928 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */))) * (1.0);
  tmp929 = 0.0;
  tmp927 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)), 0.0, tmp928, tmp929, data->simulationInfo->storedRelations[537]);
  tmp931 = 1.0;
  tmp932 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5683]] /* vrNordic_g20.limIntegrator.outMax PARAM */));
  tmp930 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5683]] /* vrNordic_g20.limIntegrator.outMax PARAM */), tmp931, tmp932, data->simulationInfo->storedRelations[538]);
  tmp934 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */))) * (1.0);
  tmp935 = 0.0;
  tmp933 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)), 0.0, tmp934, tmp935, data->simulationInfo->storedRelations[539]);
  gout[start_index] = (((tmp924 && tmp927) || (tmp930 && tmp933))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp937 = 1.0;
  tmp938 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5698]] /* vrNordic_g20.timer.outMin PARAM */));
  tmp936 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5698]] /* vrNordic_g20.timer.outMin PARAM */), tmp937, tmp938, data->simulationInfo->storedRelations[540]);
  tmp940 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */))) * (1.0);
  tmp941 = 0.0;
  tmp939 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)), 0.0, tmp940, tmp941, data->simulationInfo->storedRelations[541]);
  tmp943 = 1.0;
  tmp944 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5697]] /* vrNordic_g20.timer.outMax PARAM */));
  tmp942 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5697]] /* vrNordic_g20.timer.outMax PARAM */), tmp943, tmp944, data->simulationInfo->storedRelations[542]);
  tmp946 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */))) * (1.0);
  tmp947 = 0.0;
  tmp945 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)), 0.0, tmp946, tmp947, data->simulationInfo->storedRelations[543]);
  gout[start_index] = (((tmp936 && tmp939) || (tmp942 && tmp945))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp949 = 1.0;
  tmp950 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
  tmp948 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp949, tmp950, data->simulationInfo->storedRelations[544]);
  tmp952 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp953 = 0.0;
  tmp951 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp952, tmp953, data->simulationInfo->storedRelations[545]);
  tmp955 = 1.0;
  tmp956 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
  tmp954 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp955, tmp956, data->simulationInfo->storedRelations[546]);
  tmp958 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
  tmp959 = 0.0;
  tmp957 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp958, tmp959, data->simulationInfo->storedRelations[547]);
  gout[start_index] = (((tmp948 && tmp951) || (tmp954 && tmp957))) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp961 = 1.0;
  tmp962 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* disconnection.tEvent PARAM */));
  tmp960 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* disconnection.tEvent PARAM */), tmp961, tmp962, data->simulationInfo->storedRelations[548]);
  gout[start_index] = (tmp960) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp964 = 1.0;
  tmp965 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* nodeFault.tEnd PARAM */));
  tmp963 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* nodeFault.tEnd PARAM */), tmp964, tmp965, data->simulationInfo->storedRelations[549]);
  gout[start_index] = (tmp963) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp967 = 1.0;
  tmp968 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3569]] /* nodeFault.tBegin PARAM */));
  tmp966 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3569]] /* nodeFault.tBegin PARAM */), tmp967, tmp968, data->simulationInfo->storedRelations[550]);
  gout[start_index] = (tmp966) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *MyNordic_initialized_TestCase_initialized_relationDescription(int i)
{
  const char *res[] = {"load_01.terminal.V.re == 0.0",
  "load_01.terminal.V.im == 0.0",
  "load_02.terminal.V.re == 0.0",
  "load_02.terminal.V.im == 0.0",
  "load_03.terminal.V.re == 0.0",
  "load_03.terminal.V.im == 0.0",
  "load_04.terminal.V.re == 0.0",
  "load_04.terminal.V.im == 0.0",
  "load_05.terminal.V.re == 0.0",
  "load_05.terminal.V.im == 0.0",
  "load_11.terminal.V.re == 0.0",
  "load_11.terminal.V.im == 0.0",
  "load_12.terminal.V.re == 0.0",
  "load_12.terminal.V.im == 0.0",
  "load_13.terminal.V.re == 0.0",
  "load_13.terminal.V.im == 0.0",
  "load_22.terminal.V.re == 0.0",
  "load_22.terminal.V.im == 0.0",
  "load_31.terminal.V.re == 0.0",
  "load_31.terminal.V.im == 0.0",
  "load_32.terminal.V.re == 0.0",
  "load_32.terminal.V.im == 0.0",
  "load_41.terminal.V.re == 0.0",
  "load_41.terminal.V.im == 0.0",
  "load_42.terminal.V.re == 0.0",
  "load_42.terminal.V.im == 0.0",
  "load_43.terminal.V.re == 0.0",
  "load_43.terminal.V.im == 0.0",
  "load_47.terminal.V.re == 0.0",
  "load_47.terminal.V.im == 0.0",
  "load_46.terminal.V.re == 0.0",
  "load_46.terminal.V.im == 0.0",
  "load_51.terminal.V.re == 0.0",
  "load_51.terminal.V.im == 0.0",
  "load_61.terminal.V.re == 0.0",
  "load_61.terminal.V.im == 0.0",
  "load_62.terminal.V.re == 0.0",
  "load_62.terminal.V.im == 0.0",
  "load_63.terminal.V.re == 0.0",
  "load_63.terminal.V.im == 0.0",
  "load_71.terminal.V.re == 0.0",
  "load_71.terminal.V.im == 0.0",
  "load_72.terminal.V.re == 0.0",
  "load_72.terminal.V.im == 0.0",
  "g01.terminal.V.re == 0.0",
  "g01.terminal.V.im == 0.0",
  "g02.terminal.V.re == 0.0",
  "g02.terminal.V.im == 0.0",
  "g03.terminal.V.re == 0.0",
  "g03.terminal.V.im == 0.0",
  "g04.terminal.V.re == 0.0",
  "g04.terminal.V.im == 0.0",
  "g05.terminal.V.re == 0.0",
  "g05.terminal.V.im == 0.0",
  "g06.terminal.V.re == 0.0",
  "g06.terminal.V.im == 0.0",
  "g07.terminal.V.re == 0.0",
  "g07.terminal.V.im == 0.0",
  "g08.terminal.V.re == 0.0",
  "g08.terminal.V.im == 0.0",
  "g09.terminal.V.re == 0.0",
  "g09.terminal.V.im == 0.0",
  "g10.terminal.V.re == 0.0",
  "g10.terminal.V.im == 0.0",
  "g11.terminal.V.re == 0.0",
  "g11.terminal.V.im == 0.0",
  "g12.terminal.V.re == 0.0",
  "g12.terminal.V.im == 0.0",
  "g13.terminal.V.re == 0.0",
  "g13.terminal.V.im == 0.0",
  "g14.terminal.V.re == 0.0",
  "g14.terminal.V.im == 0.0",
  "g15.terminal.V.re == 0.0",
  "g15.terminal.V.im == 0.0",
  "g16.terminal.V.re == 0.0",
  "g16.terminal.V.im == 0.0",
  "g17.terminal.V.re == 0.0",
  "g17.terminal.V.im == 0.0",
  "g18.terminal.V.re == 0.0",
  "g18.terminal.V.im == 0.0",
  "g19.terminal.V.re == 0.0",
  "g19.terminal.V.im == 0.0",
  "trafo_g20_4072.terminal1.V.re == 0.0",
  "trafo_g20_4072.terminal1.V.im == 0.0",
  "line_1011_1013a.terminal1.V.re == 0.0",
  "line_1011_1013a.terminal1.V.im == 0.0",
  "line_1012_1014a.terminal1.V.re == 0.0",
  "line_1012_1014a.terminal1.V.im == 0.0",
  "line_1013_1014a.terminal1.V.re == 0.0",
  "line_1013_1014a.terminal1.V.im == 0.0",
  "line_1013_1014a.terminal2.V.re == 0.0",
  "line_1013_1014a.terminal2.V.im == 0.0",
  "line_1021_1022b.terminal1.V.re == 0.0",
  "line_1021_1022b.terminal1.V.im == 0.0",
  "line_1041_1043a.terminal1.V.re == 0.0",
  "line_1041_1043a.terminal1.V.im == 0.0",
  "line_1042_1045.terminal1.V.re == 0.0",
  "line_1042_1045.terminal1.V.im == 0.0",
  "line_2031_2032b.terminal1.V.re == 0.0",
  "line_2031_2032b.terminal1.V.im == 0.0",
  "line_2031_2032b.terminal2.V.re == 0.0",
  "line_2031_2032b.terminal2.V.im == 0.0",
  "line_4011_4071.terminal1.V.re == 0.0",
  "line_4011_4071.terminal1.V.im == 0.0",
  "line_4012_4022.terminal1.V.re == 0.0",
  "line_4012_4022.terminal1.V.im == 0.0",
  "line_4021_4032.terminal1.V.re == 0.0",
  "line_4021_4032.terminal1.V.im == 0.0",
  "line_4022_4031b.terminal1.V.re == 0.0",
  "line_4022_4031b.terminal1.V.im == 0.0",
  "line_4031_4041b.terminal1.V.re == 0.0",
  "line_4031_4041b.terminal1.V.im == 0.0",
  "line_4032_4044.terminal1.V.re == 0.0",
  "line_4032_4044.terminal1.V.im == 0.0",
  "line_4042_4043.terminal1.V.re == 0.0",
  "line_4042_4043.terminal1.V.im == 0.0",
  "line_4044_4045a.terminal1.V.re == 0.0",
  "line_4044_4045a.terminal1.V.im == 0.0",
  "line_4045_4051b.terminal1.V.re == 0.0",
  "line_4045_4051b.terminal1.V.im == 0.0",
  "line_4046_4047.terminal2.V.re == 0.0",
  "line_4046_4047.terminal2.V.im == 0.0",
  "line_4061_4062.terminal1.V.re == 0.0",
  "line_4061_4062.terminal1.V.im == 0.0",
  "line_4062_4063b.terminal1.V.re == 0.0",
  "line_4062_4063b.terminal1.V.im == 0.0",
  "line_4062_4063b.terminal2.V.re == 0.0",
  "line_4062_4063b.terminal2.V.im == 0.0",
  "line_4071_4072a.terminal2.V.re == 0.0",
  "line_4071_4072a.terminal2.V.im == 0.0",
  "line_1021_1022b.terminal2.V.re == 0.0",
  "line_1021_1022b.terminal2.V.im == 0.0",
  "line_1043_1044a.terminal1.V.re == 0.0",
  "line_1043_1044a.terminal1.V.im == 0.0",
  "line_1043_1044a.terminal2.V.re == 0.0",
  "line_1043_1044a.terminal2.V.im == 0.0",
  "line_1042_1045.terminal2.V.re == 0.0",
  "line_1042_1045.terminal2.V.im == 0.0",
  "line_4041_4061.terminal1.V.re == 0.0",
  "line_4041_4061.terminal1.V.im == 0.0",
  "line_4043_4046.terminal1.V.re == 0.0",
  "line_4043_4046.terminal1.V.im == 0.0",
  "line_4046_4047.terminal1.V.re == 0.0",
  "line_4046_4047.terminal1.V.im == 0.0",
  "line_4045_4051b.terminal2.V.re == 0.0",
  "line_4045_4051b.terminal2.V.im == 0.0",
  "line_4071_4072a.terminal1.V.re == 0.0",
  "line_4071_4072a.terminal1.V.im == 0.0",
  "g01.uStatorPu.re == 0.0",
  "g01.uStatorPu.im == 0.0",
  "g01.iStatorPu.re == 0.0",
  "g01.iStatorPu.im == 0.0",
  "g02.uStatorPu.re == 0.0",
  "g02.uStatorPu.im == 0.0",
  "g02.iStatorPu.re == 0.0",
  "g02.iStatorPu.im == 0.0",
  "g03.uStatorPu.re == 0.0",
  "g03.uStatorPu.im == 0.0",
  "g03.iStatorPu.re == 0.0",
  "g03.iStatorPu.im == 0.0",
  "g04.uStatorPu.re == 0.0",
  "g04.uStatorPu.im == 0.0",
  "g04.iStatorPu.re == 0.0",
  "g04.iStatorPu.im == 0.0",
  "g05.uStatorPu.re == 0.0",
  "g05.uStatorPu.im == 0.0",
  "g05.iStatorPu.re == 0.0",
  "g05.iStatorPu.im == 0.0",
  "g06.uStatorPu.re == 0.0",
  "g06.uStatorPu.im == 0.0",
  "g06.iStatorPu.re == 0.0",
  "g06.iStatorPu.im == 0.0",
  "g07.uStatorPu.re == 0.0",
  "g07.uStatorPu.im == 0.0",
  "g07.iStatorPu.re == 0.0",
  "g07.iStatorPu.im == 0.0",
  "g08.uStatorPu.re == 0.0",
  "g08.uStatorPu.im == 0.0",
  "g08.iStatorPu.re == 0.0",
  "g08.iStatorPu.im == 0.0",
  "g09.uStatorPu.re == 0.0",
  "g09.uStatorPu.im == 0.0",
  "g09.iStatorPu.re == 0.0",
  "g09.iStatorPu.im == 0.0",
  "g10.uStatorPu.re == 0.0",
  "g10.uStatorPu.im == 0.0",
  "g10.iStatorPu.re == 0.0",
  "g10.iStatorPu.im == 0.0",
  "g11.uStatorPu.re == 0.0",
  "g11.uStatorPu.im == 0.0",
  "g11.iStatorPu.re == 0.0",
  "g11.iStatorPu.im == 0.0",
  "g12.uStatorPu.re == 0.0",
  "g12.uStatorPu.im == 0.0",
  "g12.iStatorPu.re == 0.0",
  "g12.iStatorPu.im == 0.0",
  "g13.uStatorPu.re == 0.0",
  "g13.uStatorPu.im == 0.0",
  "g13.iStatorPu.re == 0.0",
  "g13.iStatorPu.im == 0.0",
  "g14.uStatorPu.re == 0.0",
  "g14.uStatorPu.im == 0.0",
  "g14.iStatorPu.re == 0.0",
  "g14.iStatorPu.im == 0.0",
  "g15.uStatorPu.re == 0.0",
  "g15.uStatorPu.im == 0.0",
  "g15.iStatorPu.re == 0.0",
  "g15.iStatorPu.im == 0.0",
  "g16.uStatorPu.re == 0.0",
  "g16.uStatorPu.im == 0.0",
  "g16.iStatorPu.re == 0.0",
  "g16.iStatorPu.im == 0.0",
  "g17.uStatorPu.re == 0.0",
  "g17.uStatorPu.im == 0.0",
  "g17.iStatorPu.re == 0.0",
  "g17.iStatorPu.im == 0.0",
  "g18.uStatorPu.re == 0.0",
  "g18.uStatorPu.im == 0.0",
  "g18.iStatorPu.re == 0.0",
  "g18.iStatorPu.im == 0.0",
  "g19.uStatorPu.re == 0.0",
  "g19.uStatorPu.im == 0.0",
  "g19.iStatorPu.re == 0.0",
  "g19.iStatorPu.im == 0.0",
  "g20.uStatorPu.re == 0.0",
  "g20.uStatorPu.im == 0.0",
  "g20.iStatorPu.re == 0.0",
  "g20.iStatorPu.im == 0.0",
  "vrNordic_g01.switch.y < vrNordic_g01.add.y",
  "vrNordic_g01.timer.y >= vrNordic_g01.greaterEqualThreshold.threshold",
  "vrNordic_g01.dIf.y < -0.1",
  "vrNordic_g01.dIf.y < 0.0",
  "vrNordic_g01.limIntegrator.y < vrNordic_g01.limIntegrator.outMin",
  "vrNordic_g01.limIntegrator.k * vrNordic_g01.gain.y < 0.0",
  "vrNordic_g01.limIntegrator.y > vrNordic_g01.limIntegrator.outMax",
  "vrNordic_g01.limIntegrator.k * vrNordic_g01.gain.y > 0.0",
  "vrNordic_g01.timer.y < vrNordic_g01.timer.outMin",
  "vrNordic_g01.timer.k * vrNordic_g01.overExcitationLimitation.y < 0.0",
  "vrNordic_g01.timer.y > vrNordic_g01.timer.outMax",
  "vrNordic_g01.timer.k * vrNordic_g01.overExcitationLimitation.y > 0.0",
  "goverNordic_g01.limRateLimFirstOrder.limIntegrator.y < goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g01.limRateLimFirstOrder.limIntegrator.k * goverNordic_g01.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g01.limRateLimFirstOrder.limIntegrator.y > goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g01.limRateLimFirstOrder.limIntegrator.k * goverNordic_g01.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g02.switch.y < vrNordic_g02.add.y",
  "vrNordic_g02.timer.y >= vrNordic_g02.greaterEqualThreshold.threshold",
  "vrNordic_g02.dIf.y < -0.1",
  "vrNordic_g02.dIf.y < 0.0",
  "vrNordic_g02.limIntegrator.y < vrNordic_g02.limIntegrator.outMin",
  "vrNordic_g02.limIntegrator.k * vrNordic_g02.gain.y < 0.0",
  "vrNordic_g02.limIntegrator.y > vrNordic_g02.limIntegrator.outMax",
  "vrNordic_g02.limIntegrator.k * vrNordic_g02.gain.y > 0.0",
  "vrNordic_g02.timer.y < vrNordic_g02.timer.outMin",
  "vrNordic_g02.timer.k * vrNordic_g02.overExcitationLimitation.y < 0.0",
  "vrNordic_g02.timer.y > vrNordic_g02.timer.outMax",
  "vrNordic_g02.timer.k * vrNordic_g02.overExcitationLimitation.y > 0.0",
  "goverNordic_g02.limRateLimFirstOrder.limIntegrator.y < goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g02.limRateLimFirstOrder.limIntegrator.k * goverNordic_g02.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g02.limRateLimFirstOrder.limIntegrator.y > goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g02.limRateLimFirstOrder.limIntegrator.k * goverNordic_g02.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g03.switch.y < vrNordic_g03.add.y",
  "vrNordic_g03.timer.y >= vrNordic_g03.greaterEqualThreshold.threshold",
  "vrNordic_g03.dIf.y < -0.1",
  "vrNordic_g03.dIf.y < 0.0",
  "vrNordic_g03.limIntegrator.y < vrNordic_g03.limIntegrator.outMin",
  "vrNordic_g03.limIntegrator.k * vrNordic_g03.gain.y < 0.0",
  "vrNordic_g03.limIntegrator.y > vrNordic_g03.limIntegrator.outMax",
  "vrNordic_g03.limIntegrator.k * vrNordic_g03.gain.y > 0.0",
  "vrNordic_g03.timer.y < vrNordic_g03.timer.outMin",
  "vrNordic_g03.timer.k * vrNordic_g03.overExcitationLimitation.y < 0.0",
  "vrNordic_g03.timer.y > vrNordic_g03.timer.outMax",
  "vrNordic_g03.timer.k * vrNordic_g03.overExcitationLimitation.y > 0.0",
  "goverNordic_g03.limRateLimFirstOrder.limIntegrator.y < goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g03.limRateLimFirstOrder.limIntegrator.k * goverNordic_g03.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g03.limRateLimFirstOrder.limIntegrator.y > goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g03.limRateLimFirstOrder.limIntegrator.k * goverNordic_g03.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g04.switch.y < vrNordic_g04.add.y",
  "vrNordic_g04.timer.y >= vrNordic_g04.greaterEqualThreshold.threshold",
  "vrNordic_g04.dIf.y < -0.1",
  "vrNordic_g04.dIf.y < 0.0",
  "vrNordic_g04.limIntegrator.y < vrNordic_g04.limIntegrator.outMin",
  "vrNordic_g04.limIntegrator.k * vrNordic_g04.gain.y < 0.0",
  "vrNordic_g04.limIntegrator.y > vrNordic_g04.limIntegrator.outMax",
  "vrNordic_g04.limIntegrator.k * vrNordic_g04.gain.y > 0.0",
  "vrNordic_g04.timer.y < vrNordic_g04.timer.outMin",
  "vrNordic_g04.timer.k * vrNordic_g04.overExcitationLimitation.y < 0.0",
  "vrNordic_g04.timer.y > vrNordic_g04.timer.outMax",
  "vrNordic_g04.timer.k * vrNordic_g04.overExcitationLimitation.y > 0.0",
  "goverNordic_g04.limRateLimFirstOrder.limIntegrator.y < goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g04.limRateLimFirstOrder.limIntegrator.k * goverNordic_g04.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g04.limRateLimFirstOrder.limIntegrator.y > goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g04.limRateLimFirstOrder.limIntegrator.k * goverNordic_g04.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g05.switch.y < vrNordic_g05.add.y",
  "vrNordic_g05.timer.y >= vrNordic_g05.greaterEqualThreshold.threshold",
  "vrNordic_g05.dIf.y < -0.1",
  "vrNordic_g05.dIf.y < 0.0",
  "vrNordic_g05.limIntegrator.y < vrNordic_g05.limIntegrator.outMin",
  "vrNordic_g05.limIntegrator.k * vrNordic_g05.gain.y < 0.0",
  "vrNordic_g05.limIntegrator.y > vrNordic_g05.limIntegrator.outMax",
  "vrNordic_g05.limIntegrator.k * vrNordic_g05.gain.y > 0.0",
  "vrNordic_g05.timer.y < vrNordic_g05.timer.outMin",
  "vrNordic_g05.timer.k * vrNordic_g05.overExcitationLimitation.y < 0.0",
  "vrNordic_g05.timer.y > vrNordic_g05.timer.outMax",
  "vrNordic_g05.timer.k * vrNordic_g05.overExcitationLimitation.y > 0.0",
  "goverNordic_g05.limRateLimFirstOrder.limIntegrator.y < goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g05.limRateLimFirstOrder.limIntegrator.k * goverNordic_g05.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g05.limRateLimFirstOrder.limIntegrator.y > goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g05.limRateLimFirstOrder.limIntegrator.k * goverNordic_g05.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g06.switch.y < vrNordic_g06.add.y",
  "vrNordic_g06.timer.y >= vrNordic_g06.greaterEqualThreshold.threshold",
  "vrNordic_g06.dIf.y < -0.1",
  "vrNordic_g06.dIf.y < 0.0",
  "vrNordic_g06.limIntegrator.y < vrNordic_g06.limIntegrator.outMin",
  "vrNordic_g06.limIntegrator.k * vrNordic_g06.gain.y < 0.0",
  "vrNordic_g06.limIntegrator.y > vrNordic_g06.limIntegrator.outMax",
  "vrNordic_g06.limIntegrator.k * vrNordic_g06.gain.y > 0.0",
  "vrNordic_g06.timer.y < vrNordic_g06.timer.outMin",
  "vrNordic_g06.timer.k * vrNordic_g06.overExcitationLimitation.y < 0.0",
  "vrNordic_g06.timer.y > vrNordic_g06.timer.outMax",
  "vrNordic_g06.timer.k * vrNordic_g06.overExcitationLimitation.y > 0.0",
  "goverNordic_g06.limRateLimFirstOrder.limIntegrator.y < goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g06.limRateLimFirstOrder.limIntegrator.k * goverNordic_g06.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g06.limRateLimFirstOrder.limIntegrator.y > goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g06.limRateLimFirstOrder.limIntegrator.k * goverNordic_g06.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g07.switch.y < vrNordic_g07.add.y",
  "vrNordic_g07.timer.y >= vrNordic_g07.greaterEqualThreshold.threshold",
  "vrNordic_g07.dIf.y < -0.1",
  "vrNordic_g07.dIf.y < 0.0",
  "vrNordic_g07.limIntegrator.y < vrNordic_g07.limIntegrator.outMin",
  "vrNordic_g07.limIntegrator.k * vrNordic_g07.gain.y < 0.0",
  "vrNordic_g07.limIntegrator.y > vrNordic_g07.limIntegrator.outMax",
  "vrNordic_g07.limIntegrator.k * vrNordic_g07.gain.y > 0.0",
  "vrNordic_g07.timer.y < vrNordic_g07.timer.outMin",
  "vrNordic_g07.timer.k * vrNordic_g07.overExcitationLimitation.y < 0.0",
  "vrNordic_g07.timer.y > vrNordic_g07.timer.outMax",
  "vrNordic_g07.timer.k * vrNordic_g07.overExcitationLimitation.y > 0.0",
  "goverNordic_g07.limRateLimFirstOrder.limIntegrator.y < goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g07.limRateLimFirstOrder.limIntegrator.k * goverNordic_g07.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g07.limRateLimFirstOrder.limIntegrator.y > goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g07.limRateLimFirstOrder.limIntegrator.k * goverNordic_g07.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g08.switch.y < vrNordic_g08.add.y",
  "vrNordic_g08.timer.y >= vrNordic_g08.greaterEqualThreshold.threshold",
  "vrNordic_g08.dIf.y < -0.1",
  "vrNordic_g08.dIf.y < 0.0",
  "vrNordic_g08.limIntegrator.y < vrNordic_g08.limIntegrator.outMin",
  "vrNordic_g08.limIntegrator.k * vrNordic_g08.gain.y < 0.0",
  "vrNordic_g08.limIntegrator.y > vrNordic_g08.limIntegrator.outMax",
  "vrNordic_g08.limIntegrator.k * vrNordic_g08.gain.y > 0.0",
  "vrNordic_g08.timer.y < vrNordic_g08.timer.outMin",
  "vrNordic_g08.timer.k * vrNordic_g08.overExcitationLimitation.y < 0.0",
  "vrNordic_g08.timer.y > vrNordic_g08.timer.outMax",
  "vrNordic_g08.timer.k * vrNordic_g08.overExcitationLimitation.y > 0.0",
  "goverNordic_g08.limRateLimFirstOrder.limIntegrator.y < goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g08.limRateLimFirstOrder.limIntegrator.k * goverNordic_g08.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g08.limRateLimFirstOrder.limIntegrator.y > goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g08.limRateLimFirstOrder.limIntegrator.k * goverNordic_g08.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g09.switch.y < vrNordic_g09.add.y",
  "vrNordic_g09.timer.y >= vrNordic_g09.greaterEqualThreshold.threshold",
  "vrNordic_g09.dIf.y < -0.1",
  "vrNordic_g09.dIf.y < 0.0",
  "vrNordic_g09.limIntegrator.y < vrNordic_g09.limIntegrator.outMin",
  "vrNordic_g09.limIntegrator.k * vrNordic_g09.gain.y < 0.0",
  "vrNordic_g09.limIntegrator.y > vrNordic_g09.limIntegrator.outMax",
  "vrNordic_g09.limIntegrator.k * vrNordic_g09.gain.y > 0.0",
  "vrNordic_g09.timer.y < vrNordic_g09.timer.outMin",
  "vrNordic_g09.timer.k * vrNordic_g09.overExcitationLimitation.y < 0.0",
  "vrNordic_g09.timer.y > vrNordic_g09.timer.outMax",
  "vrNordic_g09.timer.k * vrNordic_g09.overExcitationLimitation.y > 0.0",
  "goverNordic_g09.limRateLimFirstOrder.limIntegrator.y < goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g09.limRateLimFirstOrder.limIntegrator.k * goverNordic_g09.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g09.limRateLimFirstOrder.limIntegrator.y > goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g09.limRateLimFirstOrder.limIntegrator.k * goverNordic_g09.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g10.switch.y < vrNordic_g10.add.y",
  "vrNordic_g10.timer.y >= vrNordic_g10.greaterEqualThreshold.threshold",
  "vrNordic_g10.dIf.y < -0.1",
  "vrNordic_g10.dIf.y < 0.0",
  "vrNordic_g10.limIntegrator.y < vrNordic_g10.limIntegrator.outMin",
  "vrNordic_g10.limIntegrator.k * vrNordic_g10.gain.y < 0.0",
  "vrNordic_g10.limIntegrator.y > vrNordic_g10.limIntegrator.outMax",
  "vrNordic_g10.limIntegrator.k * vrNordic_g10.gain.y > 0.0",
  "vrNordic_g10.timer.y < vrNordic_g10.timer.outMin",
  "vrNordic_g10.timer.k * vrNordic_g10.overExcitationLimitation.y < 0.0",
  "vrNordic_g10.timer.y > vrNordic_g10.timer.outMax",
  "vrNordic_g10.timer.k * vrNordic_g10.overExcitationLimitation.y > 0.0",
  "goverNordic_g10.limRateLimFirstOrder.limIntegrator.y < goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g10.limRateLimFirstOrder.limIntegrator.k * goverNordic_g10.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g10.limRateLimFirstOrder.limIntegrator.y > goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g10.limRateLimFirstOrder.limIntegrator.k * goverNordic_g10.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g11.switch.y < vrNordic_g11.add.y",
  "vrNordic_g11.timer.y >= vrNordic_g11.greaterEqualThreshold.threshold",
  "vrNordic_g11.dIf.y < -0.1",
  "vrNordic_g11.dIf.y < 0.0",
  "vrNordic_g11.limIntegrator.y < vrNordic_g11.limIntegrator.outMin",
  "vrNordic_g11.limIntegrator.k * vrNordic_g11.gain.y < 0.0",
  "vrNordic_g11.limIntegrator.y > vrNordic_g11.limIntegrator.outMax",
  "vrNordic_g11.limIntegrator.k * vrNordic_g11.gain.y > 0.0",
  "vrNordic_g11.timer.y < vrNordic_g11.timer.outMin",
  "vrNordic_g11.timer.k * vrNordic_g11.overExcitationLimitation.y < 0.0",
  "vrNordic_g11.timer.y > vrNordic_g11.timer.outMax",
  "vrNordic_g11.timer.k * vrNordic_g11.overExcitationLimitation.y > 0.0",
  "goverNordic_g11.limRateLimFirstOrder.limIntegrator.y < goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g11.limRateLimFirstOrder.limIntegrator.k * goverNordic_g11.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g11.limRateLimFirstOrder.limIntegrator.y > goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g11.limRateLimFirstOrder.limIntegrator.k * goverNordic_g11.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g12.switch.y < vrNordic_g12.add.y",
  "vrNordic_g12.timer.y >= vrNordic_g12.greaterEqualThreshold.threshold",
  "vrNordic_g12.dIf.y < -0.1",
  "vrNordic_g12.dIf.y < 0.0",
  "vrNordic_g12.limIntegrator.y < vrNordic_g12.limIntegrator.outMin",
  "vrNordic_g12.limIntegrator.k * vrNordic_g12.gain.y < 0.0",
  "vrNordic_g12.limIntegrator.y > vrNordic_g12.limIntegrator.outMax",
  "vrNordic_g12.limIntegrator.k * vrNordic_g12.gain.y > 0.0",
  "vrNordic_g12.timer.y < vrNordic_g12.timer.outMin",
  "vrNordic_g12.timer.k * vrNordic_g12.overExcitationLimitation.y < 0.0",
  "vrNordic_g12.timer.y > vrNordic_g12.timer.outMax",
  "vrNordic_g12.timer.k * vrNordic_g12.overExcitationLimitation.y > 0.0",
  "goverNordic_g12.limRateLimFirstOrder.limIntegrator.y < goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g12.limRateLimFirstOrder.limIntegrator.k * goverNordic_g12.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g12.limRateLimFirstOrder.limIntegrator.y > goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g12.limRateLimFirstOrder.limIntegrator.k * goverNordic_g12.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g13.switch.y < vrNordic_g13.add.y",
  "vrNordic_g13.timer.y >= vrNordic_g13.greaterEqualThreshold.threshold",
  "vrNordic_g13.dIf.y < -0.1",
  "vrNordic_g13.dIf.y < 0.0",
  "vrNordic_g13.limIntegrator.y < vrNordic_g13.limIntegrator.outMin",
  "vrNordic_g13.limIntegrator.k * vrNordic_g13.gain.y < 0.0",
  "vrNordic_g13.limIntegrator.y > vrNordic_g13.limIntegrator.outMax",
  "vrNordic_g13.limIntegrator.k * vrNordic_g13.gain.y > 0.0",
  "vrNordic_g13.timer.y < vrNordic_g13.timer.outMin",
  "vrNordic_g13.timer.k * vrNordic_g13.overExcitationLimitation.y < 0.0",
  "vrNordic_g13.timer.y > vrNordic_g13.timer.outMax",
  "vrNordic_g13.timer.k * vrNordic_g13.overExcitationLimitation.y > 0.0",
  "goverNordic_g13.limRateLimFirstOrder.limIntegrator.y < goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g13.limRateLimFirstOrder.limIntegrator.k * goverNordic_g13.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g13.limRateLimFirstOrder.limIntegrator.y > goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g13.limRateLimFirstOrder.limIntegrator.k * goverNordic_g13.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g14.switch.y < vrNordic_g14.add.y",
  "vrNordic_g14.timer.y >= vrNordic_g14.greaterEqualThreshold.threshold",
  "vrNordic_g14.dIf.y < -0.1",
  "vrNordic_g14.dIf.y < 0.0",
  "vrNordic_g14.limIntegrator.y < vrNordic_g14.limIntegrator.outMin",
  "vrNordic_g14.limIntegrator.k * vrNordic_g14.gain.y < 0.0",
  "vrNordic_g14.limIntegrator.y > vrNordic_g14.limIntegrator.outMax",
  "vrNordic_g14.limIntegrator.k * vrNordic_g14.gain.y > 0.0",
  "vrNordic_g14.timer.y < vrNordic_g14.timer.outMin",
  "vrNordic_g14.timer.k * vrNordic_g14.overExcitationLimitation.y < 0.0",
  "vrNordic_g14.timer.y > vrNordic_g14.timer.outMax",
  "vrNordic_g14.timer.k * vrNordic_g14.overExcitationLimitation.y > 0.0",
  "goverNordic_g14.limRateLimFirstOrder.limIntegrator.y < goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g14.limRateLimFirstOrder.limIntegrator.k * goverNordic_g14.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g14.limRateLimFirstOrder.limIntegrator.y > goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g14.limRateLimFirstOrder.limIntegrator.k * goverNordic_g14.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g15.switch.y < vrNordic_g15.add.y",
  "vrNordic_g15.timer.y >= vrNordic_g15.greaterEqualThreshold.threshold",
  "vrNordic_g15.dIf.y < -0.1",
  "vrNordic_g15.dIf.y < 0.0",
  "vrNordic_g15.limIntegrator.y < vrNordic_g15.limIntegrator.outMin",
  "vrNordic_g15.limIntegrator.k * vrNordic_g15.gain.y < 0.0",
  "vrNordic_g15.limIntegrator.y > vrNordic_g15.limIntegrator.outMax",
  "vrNordic_g15.limIntegrator.k * vrNordic_g15.gain.y > 0.0",
  "vrNordic_g15.timer.y < vrNordic_g15.timer.outMin",
  "vrNordic_g15.timer.k * vrNordic_g15.overExcitationLimitation.y < 0.0",
  "vrNordic_g15.timer.y > vrNordic_g15.timer.outMax",
  "vrNordic_g15.timer.k * vrNordic_g15.overExcitationLimitation.y > 0.0",
  "goverNordic_g15.limRateLimFirstOrder.limIntegrator.y < goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g15.limRateLimFirstOrder.limIntegrator.k * goverNordic_g15.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g15.limRateLimFirstOrder.limIntegrator.y > goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g15.limRateLimFirstOrder.limIntegrator.k * goverNordic_g15.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g16.switch.y < vrNordic_g16.add.y",
  "vrNordic_g16.timer.y >= vrNordic_g16.greaterEqualThreshold.threshold",
  "vrNordic_g16.dIf.y < -0.1",
  "vrNordic_g16.dIf.y < 0.0",
  "vrNordic_g16.limIntegrator.y < vrNordic_g16.limIntegrator.outMin",
  "vrNordic_g16.limIntegrator.k * vrNordic_g16.gain.y < 0.0",
  "vrNordic_g16.limIntegrator.y > vrNordic_g16.limIntegrator.outMax",
  "vrNordic_g16.limIntegrator.k * vrNordic_g16.gain.y > 0.0",
  "vrNordic_g16.timer.y < vrNordic_g16.timer.outMin",
  "vrNordic_g16.timer.k * vrNordic_g16.overExcitationLimitation.y < 0.0",
  "vrNordic_g16.timer.y > vrNordic_g16.timer.outMax",
  "vrNordic_g16.timer.k * vrNordic_g16.overExcitationLimitation.y > 0.0",
  "goverNordic_g16.limRateLimFirstOrder.limIntegrator.y < goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g16.limRateLimFirstOrder.limIntegrator.k * goverNordic_g16.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g16.limRateLimFirstOrder.limIntegrator.y > goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g16.limRateLimFirstOrder.limIntegrator.k * goverNordic_g16.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g17.switch.y < vrNordic_g17.add.y",
  "vrNordic_g17.timer.y >= vrNordic_g17.greaterEqualThreshold.threshold",
  "vrNordic_g17.dIf.y < -0.1",
  "vrNordic_g17.dIf.y < 0.0",
  "vrNordic_g17.limIntegrator.y < vrNordic_g17.limIntegrator.outMin",
  "vrNordic_g17.limIntegrator.k * vrNordic_g17.gain.y < 0.0",
  "vrNordic_g17.limIntegrator.y > vrNordic_g17.limIntegrator.outMax",
  "vrNordic_g17.limIntegrator.k * vrNordic_g17.gain.y > 0.0",
  "vrNordic_g17.timer.y < vrNordic_g17.timer.outMin",
  "vrNordic_g17.timer.k * vrNordic_g17.overExcitationLimitation.y < 0.0",
  "vrNordic_g17.timer.y > vrNordic_g17.timer.outMax",
  "vrNordic_g17.timer.k * vrNordic_g17.overExcitationLimitation.y > 0.0",
  "goverNordic_g17.limRateLimFirstOrder.limIntegrator.y < goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g17.limRateLimFirstOrder.limIntegrator.k * goverNordic_g17.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g17.limRateLimFirstOrder.limIntegrator.y > goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g17.limRateLimFirstOrder.limIntegrator.k * goverNordic_g17.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g18.switch.y < vrNordic_g18.add.y",
  "vrNordic_g18.timer.y >= vrNordic_g18.greaterEqualThreshold.threshold",
  "vrNordic_g18.dIf.y < -0.1",
  "vrNordic_g18.dIf.y < 0.0",
  "vrNordic_g18.limIntegrator.y < vrNordic_g18.limIntegrator.outMin",
  "vrNordic_g18.limIntegrator.k * vrNordic_g18.gain.y < 0.0",
  "vrNordic_g18.limIntegrator.y > vrNordic_g18.limIntegrator.outMax",
  "vrNordic_g18.limIntegrator.k * vrNordic_g18.gain.y > 0.0",
  "vrNordic_g18.timer.y < vrNordic_g18.timer.outMin",
  "vrNordic_g18.timer.k * vrNordic_g18.overExcitationLimitation.y < 0.0",
  "vrNordic_g18.timer.y > vrNordic_g18.timer.outMax",
  "vrNordic_g18.timer.k * vrNordic_g18.overExcitationLimitation.y > 0.0",
  "goverNordic_g18.limRateLimFirstOrder.limIntegrator.y < goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g18.limRateLimFirstOrder.limIntegrator.k * goverNordic_g18.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g18.limRateLimFirstOrder.limIntegrator.y > goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g18.limRateLimFirstOrder.limIntegrator.k * goverNordic_g18.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g19.switch.y < vrNordic_g19.add.y",
  "vrNordic_g19.timer.y >= vrNordic_g19.greaterEqualThreshold.threshold",
  "vrNordic_g19.dIf.y < -0.1",
  "vrNordic_g19.dIf.y < 0.0",
  "vrNordic_g19.limIntegrator.y < vrNordic_g19.limIntegrator.outMin",
  "vrNordic_g19.limIntegrator.k * vrNordic_g19.gain.y < 0.0",
  "vrNordic_g19.limIntegrator.y > vrNordic_g19.limIntegrator.outMax",
  "vrNordic_g19.limIntegrator.k * vrNordic_g19.gain.y > 0.0",
  "vrNordic_g19.timer.y < vrNordic_g19.timer.outMin",
  "vrNordic_g19.timer.k * vrNordic_g19.overExcitationLimitation.y < 0.0",
  "vrNordic_g19.timer.y > vrNordic_g19.timer.outMax",
  "vrNordic_g19.timer.k * vrNordic_g19.overExcitationLimitation.y > 0.0",
  "goverNordic_g19.limRateLimFirstOrder.limIntegrator.y < goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g19.limRateLimFirstOrder.limIntegrator.k * goverNordic_g19.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g19.limRateLimFirstOrder.limIntegrator.y > goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g19.limRateLimFirstOrder.limIntegrator.k * goverNordic_g19.limRateLimFirstOrder.limiter.y > 0.0",
  "vrNordic_g20.switch.y < vrNordic_g20.add.y",
  "vrNordic_g20.timer.y >= vrNordic_g20.greaterEqualThreshold.threshold",
  "vrNordic_g20.dIf.y < -0.1",
  "vrNordic_g20.dIf.y < 0.0",
  "vrNordic_g20.limIntegrator.y < vrNordic_g20.limIntegrator.outMin",
  "vrNordic_g20.limIntegrator.k * vrNordic_g20.gain.y < 0.0",
  "vrNordic_g20.limIntegrator.y > vrNordic_g20.limIntegrator.outMax",
  "vrNordic_g20.limIntegrator.k * vrNordic_g20.gain.y > 0.0",
  "vrNordic_g20.timer.y < vrNordic_g20.timer.outMin",
  "vrNordic_g20.timer.k * vrNordic_g20.overExcitationLimitation.y < 0.0",
  "vrNordic_g20.timer.y > vrNordic_g20.timer.outMax",
  "vrNordic_g20.timer.k * vrNordic_g20.overExcitationLimitation.y > 0.0",
  "goverNordic_g20.limRateLimFirstOrder.limIntegrator.y < goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin",
  "goverNordic_g20.limRateLimFirstOrder.limIntegrator.k * goverNordic_g20.limRateLimFirstOrder.limiter.y < 0.0",
  "goverNordic_g20.limRateLimFirstOrder.limIntegrator.y > goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax",
  "goverNordic_g20.limRateLimFirstOrder.limIntegrator.k * goverNordic_g20.limRateLimFirstOrder.limiter.y > 0.0",
  "time >= disconnection.tEvent",
  "time >= nodeFault.tEnd",
  "time >= nodeFault.tBegin"};
  return res[i];
}

int MyNordic_initialized_TestCase_initialized_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp969;
  modelica_real tmp970;
  modelica_real tmp971;
  modelica_boolean tmp972;
  modelica_real tmp973;
  modelica_real tmp974;
  modelica_boolean tmp975;
  modelica_real tmp976;
  modelica_real tmp977;
  modelica_boolean tmp978;
  modelica_real tmp979;
  modelica_real tmp980;
  modelica_boolean tmp981;
  modelica_real tmp982;
  modelica_real tmp983;
  modelica_boolean tmp984;
  modelica_real tmp985;
  modelica_real tmp986;
  modelica_boolean tmp987;
  modelica_real tmp988;
  modelica_real tmp989;
  modelica_boolean tmp990;
  modelica_real tmp991;
  modelica_real tmp992;
  modelica_boolean tmp993;
  modelica_real tmp994;
  modelica_real tmp995;
  modelica_boolean tmp996;
  modelica_real tmp997;
  modelica_real tmp998;
  modelica_boolean tmp999;
  modelica_real tmp1000;
  modelica_real tmp1001;
  modelica_boolean tmp1002;
  modelica_real tmp1003;
  modelica_real tmp1004;
  modelica_boolean tmp1005;
  modelica_real tmp1006;
  modelica_real tmp1007;
  modelica_boolean tmp1008;
  modelica_real tmp1009;
  modelica_real tmp1010;
  modelica_boolean tmp1011;
  modelica_real tmp1012;
  modelica_real tmp1013;
  modelica_boolean tmp1014;
  modelica_real tmp1015;
  modelica_real tmp1016;
  modelica_boolean tmp1017;
  modelica_real tmp1018;
  modelica_real tmp1019;
  modelica_boolean tmp1020;
  modelica_real tmp1021;
  modelica_real tmp1022;
  modelica_boolean tmp1023;
  modelica_real tmp1024;
  modelica_real tmp1025;
  modelica_boolean tmp1026;
  modelica_real tmp1027;
  modelica_real tmp1028;
  modelica_boolean tmp1029;
  modelica_real tmp1030;
  modelica_real tmp1031;
  modelica_boolean tmp1032;
  modelica_real tmp1033;
  modelica_real tmp1034;
  modelica_boolean tmp1035;
  modelica_real tmp1036;
  modelica_real tmp1037;
  modelica_boolean tmp1038;
  modelica_real tmp1039;
  modelica_real tmp1040;
  modelica_boolean tmp1041;
  modelica_real tmp1042;
  modelica_real tmp1043;
  modelica_boolean tmp1044;
  modelica_real tmp1045;
  modelica_real tmp1046;
  modelica_boolean tmp1047;
  modelica_real tmp1048;
  modelica_real tmp1049;
  modelica_boolean tmp1050;
  modelica_real tmp1051;
  modelica_real tmp1052;
  modelica_boolean tmp1053;
  modelica_real tmp1054;
  modelica_real tmp1055;
  modelica_boolean tmp1056;
  modelica_real tmp1057;
  modelica_real tmp1058;
  modelica_boolean tmp1059;
  modelica_real tmp1060;
  modelica_real tmp1061;
  modelica_boolean tmp1062;
  modelica_real tmp1063;
  modelica_real tmp1064;
  modelica_boolean tmp1065;
  modelica_real tmp1066;
  modelica_real tmp1067;
  modelica_boolean tmp1068;
  modelica_real tmp1069;
  modelica_real tmp1070;
  modelica_boolean tmp1071;
  modelica_real tmp1072;
  modelica_real tmp1073;
  modelica_boolean tmp1074;
  modelica_real tmp1075;
  modelica_real tmp1076;
  modelica_boolean tmp1077;
  modelica_real tmp1078;
  modelica_real tmp1079;
  modelica_boolean tmp1080;
  modelica_real tmp1081;
  modelica_real tmp1082;
  modelica_boolean tmp1083;
  modelica_real tmp1084;
  modelica_real tmp1085;
  modelica_boolean tmp1086;
  modelica_real tmp1087;
  modelica_real tmp1088;
  modelica_boolean tmp1089;
  modelica_real tmp1090;
  modelica_real tmp1091;
  modelica_boolean tmp1092;
  modelica_real tmp1093;
  modelica_real tmp1094;
  modelica_boolean tmp1095;
  modelica_real tmp1096;
  modelica_real tmp1097;
  modelica_boolean tmp1098;
  modelica_real tmp1099;
  modelica_real tmp1100;
  modelica_boolean tmp1101;
  modelica_real tmp1102;
  modelica_real tmp1103;
  modelica_boolean tmp1104;
  modelica_real tmp1105;
  modelica_real tmp1106;
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
  modelica_boolean tmp1119;
  modelica_real tmp1120;
  modelica_real tmp1121;
  modelica_boolean tmp1122;
  modelica_real tmp1123;
  modelica_real tmp1124;
  modelica_boolean tmp1125;
  modelica_real tmp1126;
  modelica_real tmp1127;
  modelica_boolean tmp1128;
  modelica_real tmp1129;
  modelica_real tmp1130;
  modelica_boolean tmp1131;
  modelica_real tmp1132;
  modelica_real tmp1133;
  modelica_boolean tmp1134;
  modelica_real tmp1135;
  modelica_real tmp1136;
  modelica_boolean tmp1137;
  modelica_real tmp1138;
  modelica_real tmp1139;
  modelica_boolean tmp1140;
  modelica_real tmp1141;
  modelica_real tmp1142;
  modelica_boolean tmp1143;
  modelica_real tmp1144;
  modelica_real tmp1145;
  modelica_boolean tmp1146;
  modelica_real tmp1147;
  modelica_real tmp1148;
  modelica_boolean tmp1149;
  modelica_real tmp1150;
  modelica_real tmp1151;
  modelica_boolean tmp1152;
  modelica_real tmp1153;
  modelica_real tmp1154;
  modelica_boolean tmp1155;
  modelica_real tmp1156;
  modelica_real tmp1157;
  modelica_boolean tmp1158;
  modelica_real tmp1159;
  modelica_real tmp1160;
  modelica_boolean tmp1161;
  modelica_real tmp1162;
  modelica_real tmp1163;
  modelica_boolean tmp1164;
  modelica_real tmp1165;
  modelica_real tmp1166;
  modelica_boolean tmp1167;
  modelica_real tmp1168;
  modelica_real tmp1169;
  modelica_boolean tmp1170;
  modelica_real tmp1171;
  modelica_real tmp1172;
  modelica_boolean tmp1173;
  modelica_real tmp1174;
  modelica_real tmp1175;
  modelica_boolean tmp1176;
  modelica_real tmp1177;
  modelica_real tmp1178;
  modelica_boolean tmp1179;
  modelica_real tmp1180;
  modelica_real tmp1181;
  modelica_boolean tmp1182;
  modelica_real tmp1183;
  modelica_real tmp1184;
  modelica_boolean tmp1185;
  modelica_real tmp1186;
  modelica_real tmp1187;
  modelica_boolean tmp1188;
  modelica_real tmp1189;
  modelica_real tmp1190;
  modelica_boolean tmp1191;
  modelica_real tmp1192;
  modelica_real tmp1193;
  modelica_boolean tmp1194;
  modelica_real tmp1195;
  modelica_real tmp1196;
  modelica_boolean tmp1197;
  modelica_real tmp1198;
  modelica_real tmp1199;
  modelica_boolean tmp1200;
  modelica_real tmp1201;
  modelica_real tmp1202;
  modelica_boolean tmp1203;
  modelica_real tmp1204;
  modelica_real tmp1205;
  modelica_boolean tmp1206;
  modelica_real tmp1207;
  modelica_real tmp1208;
  modelica_boolean tmp1209;
  modelica_real tmp1210;
  modelica_real tmp1211;
  modelica_boolean tmp1212;
  modelica_real tmp1213;
  modelica_real tmp1214;
  modelica_boolean tmp1215;
  modelica_real tmp1216;
  modelica_real tmp1217;
  modelica_boolean tmp1218;
  modelica_real tmp1219;
  modelica_real tmp1220;
  modelica_boolean tmp1221;
  modelica_real tmp1222;
  modelica_real tmp1223;
  modelica_boolean tmp1224;
  modelica_real tmp1225;
  modelica_real tmp1226;
  modelica_boolean tmp1227;
  modelica_real tmp1228;
  modelica_real tmp1229;
  modelica_boolean tmp1230;
  modelica_real tmp1231;
  modelica_real tmp1232;
  modelica_boolean tmp1233;
  modelica_real tmp1234;
  modelica_real tmp1235;
  modelica_boolean tmp1236;
  modelica_real tmp1237;
  modelica_real tmp1238;
  modelica_boolean tmp1239;
  modelica_real tmp1240;
  modelica_real tmp1241;
  modelica_boolean tmp1242;
  modelica_real tmp1243;
  modelica_real tmp1244;
  modelica_boolean tmp1245;
  modelica_real tmp1246;
  modelica_real tmp1247;
  modelica_boolean tmp1248;
  modelica_real tmp1249;
  modelica_real tmp1250;
  modelica_boolean tmp1251;
  modelica_real tmp1252;
  modelica_real tmp1253;
  modelica_boolean tmp1254;
  modelica_real tmp1255;
  modelica_real tmp1256;
  modelica_boolean tmp1257;
  modelica_real tmp1258;
  modelica_real tmp1259;
  modelica_boolean tmp1260;
  modelica_real tmp1261;
  modelica_real tmp1262;
  modelica_boolean tmp1263;
  modelica_real tmp1264;
  modelica_real tmp1265;
  modelica_boolean tmp1266;
  modelica_real tmp1267;
  modelica_real tmp1268;
  modelica_boolean tmp1269;
  modelica_real tmp1270;
  modelica_real tmp1271;
  modelica_boolean tmp1272;
  modelica_real tmp1273;
  modelica_real tmp1274;
  modelica_boolean tmp1275;
  modelica_real tmp1276;
  modelica_real tmp1277;
  modelica_boolean tmp1278;
  modelica_real tmp1279;
  modelica_real tmp1280;
  modelica_boolean tmp1281;
  modelica_real tmp1282;
  modelica_real tmp1283;
  modelica_boolean tmp1284;
  modelica_real tmp1285;
  modelica_real tmp1286;
  modelica_boolean tmp1287;
  modelica_real tmp1288;
  modelica_real tmp1289;
  modelica_boolean tmp1290;
  modelica_real tmp1291;
  modelica_real tmp1292;
  modelica_boolean tmp1293;
  modelica_real tmp1294;
  modelica_real tmp1295;
  modelica_boolean tmp1296;
  modelica_real tmp1297;
  modelica_real tmp1298;
  modelica_boolean tmp1299;
  modelica_real tmp1300;
  modelica_real tmp1301;
  modelica_boolean tmp1302;
  modelica_real tmp1303;
  modelica_real tmp1304;
  modelica_boolean tmp1305;
  modelica_real tmp1306;
  modelica_real tmp1307;
  modelica_boolean tmp1308;
  modelica_real tmp1309;
  modelica_real tmp1310;
  modelica_boolean tmp1311;
  modelica_real tmp1312;
  modelica_real tmp1313;
  modelica_boolean tmp1314;
  modelica_real tmp1315;
  modelica_real tmp1316;
  modelica_boolean tmp1317;
  modelica_real tmp1318;
  modelica_real tmp1319;
  modelica_boolean tmp1320;
  modelica_real tmp1321;
  modelica_real tmp1322;
  modelica_boolean tmp1323;
  modelica_real tmp1324;
  modelica_real tmp1325;
  modelica_boolean tmp1326;
  modelica_real tmp1327;
  modelica_real tmp1328;
  modelica_boolean tmp1329;
  modelica_real tmp1330;
  modelica_real tmp1331;
  modelica_boolean tmp1332;
  modelica_real tmp1333;
  modelica_real tmp1334;
  modelica_boolean tmp1335;
  modelica_real tmp1336;
  modelica_real tmp1337;
  modelica_boolean tmp1338;
  modelica_real tmp1339;
  modelica_real tmp1340;
  modelica_boolean tmp1341;
  modelica_real tmp1342;
  modelica_real tmp1343;
  modelica_boolean tmp1344;
  modelica_real tmp1345;
  modelica_real tmp1346;
  modelica_boolean tmp1347;
  modelica_real tmp1348;
  modelica_real tmp1349;
  modelica_boolean tmp1350;
  modelica_real tmp1351;
  modelica_real tmp1352;
  modelica_boolean tmp1353;
  modelica_real tmp1354;
  modelica_real tmp1355;
  modelica_boolean tmp1356;
  modelica_real tmp1357;
  modelica_real tmp1358;
  modelica_boolean tmp1359;
  modelica_real tmp1360;
  modelica_real tmp1361;
  modelica_boolean tmp1362;
  modelica_real tmp1363;
  modelica_real tmp1364;
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
  modelica_boolean tmp1377;
  modelica_real tmp1378;
  modelica_real tmp1379;
  modelica_boolean tmp1380;
  modelica_real tmp1381;
  modelica_real tmp1382;
  modelica_boolean tmp1383;
  modelica_real tmp1384;
  modelica_real tmp1385;
  modelica_boolean tmp1386;
  modelica_real tmp1387;
  modelica_real tmp1388;
  modelica_boolean tmp1389;
  modelica_real tmp1390;
  modelica_real tmp1391;
  modelica_boolean tmp1392;
  modelica_real tmp1393;
  modelica_real tmp1394;
  modelica_boolean tmp1395;
  modelica_real tmp1396;
  modelica_real tmp1397;
  modelica_boolean tmp1398;
  modelica_real tmp1399;
  modelica_real tmp1400;
  modelica_boolean tmp1401;
  modelica_real tmp1402;
  modelica_real tmp1403;
  modelica_boolean tmp1404;
  modelica_real tmp1405;
  modelica_real tmp1406;
  modelica_boolean tmp1407;
  modelica_real tmp1408;
  modelica_real tmp1409;
  modelica_boolean tmp1410;
  modelica_real tmp1411;
  modelica_real tmp1412;
  modelica_boolean tmp1413;
  modelica_real tmp1414;
  modelica_real tmp1415;
  modelica_boolean tmp1416;
  modelica_real tmp1417;
  modelica_real tmp1418;
  modelica_boolean tmp1419;
  modelica_real tmp1420;
  modelica_real tmp1421;
  modelica_boolean tmp1422;
  modelica_real tmp1423;
  modelica_real tmp1424;
  modelica_boolean tmp1425;
  modelica_real tmp1426;
  modelica_real tmp1427;
  modelica_boolean tmp1428;
  modelica_real tmp1429;
  modelica_real tmp1430;
  modelica_boolean tmp1431;
  modelica_real tmp1432;
  modelica_real tmp1433;
  modelica_boolean tmp1434;
  modelica_real tmp1435;
  modelica_real tmp1436;
  modelica_boolean tmp1437;
  modelica_real tmp1438;
  modelica_real tmp1439;
  modelica_boolean tmp1440;
  modelica_real tmp1441;
  modelica_real tmp1442;
  modelica_boolean tmp1443;
  modelica_real tmp1444;
  modelica_real tmp1445;
  modelica_boolean tmp1446;
  modelica_real tmp1447;
  modelica_real tmp1448;
  modelica_boolean tmp1449;
  modelica_real tmp1450;
  modelica_real tmp1451;
  modelica_boolean tmp1452;
  modelica_real tmp1453;
  modelica_real tmp1454;
  modelica_boolean tmp1455;
  modelica_real tmp1456;
  modelica_real tmp1457;
  modelica_boolean tmp1458;
  modelica_real tmp1459;
  modelica_real tmp1460;
  modelica_boolean tmp1461;
  modelica_real tmp1462;
  modelica_real tmp1463;
  modelica_boolean tmp1464;
  modelica_real tmp1465;
  modelica_real tmp1466;
  modelica_boolean tmp1467;
  modelica_real tmp1468;
  modelica_real tmp1469;
  modelica_boolean tmp1470;
  modelica_real tmp1471;
  modelica_real tmp1472;
  modelica_boolean tmp1473;
  modelica_real tmp1474;
  modelica_real tmp1475;
  modelica_boolean tmp1476;
  modelica_real tmp1477;
  modelica_real tmp1478;
  modelica_boolean tmp1479;
  modelica_real tmp1480;
  modelica_real tmp1481;
  modelica_boolean tmp1482;
  modelica_real tmp1483;
  modelica_real tmp1484;
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
  modelica_boolean tmp1497;
  modelica_real tmp1498;
  modelica_real tmp1499;
  modelica_boolean tmp1500;
  modelica_real tmp1501;
  modelica_real tmp1502;
  modelica_boolean tmp1503;
  modelica_real tmp1504;
  modelica_real tmp1505;
  modelica_boolean tmp1506;
  modelica_real tmp1507;
  modelica_real tmp1508;
  modelica_boolean tmp1509;
  modelica_real tmp1510;
  modelica_real tmp1511;
  modelica_boolean tmp1512;
  modelica_real tmp1513;
  modelica_real tmp1514;
  modelica_boolean tmp1515;
  modelica_real tmp1516;
  modelica_real tmp1517;
  modelica_boolean tmp1518;
  modelica_real tmp1519;
  modelica_real tmp1520;
  modelica_boolean tmp1521;
  modelica_real tmp1522;
  modelica_real tmp1523;
  modelica_boolean tmp1524;
  modelica_real tmp1525;
  modelica_real tmp1526;
  modelica_boolean tmp1527;
  modelica_real tmp1528;
  modelica_real tmp1529;
  modelica_boolean tmp1530;
  modelica_real tmp1531;
  modelica_real tmp1532;
  modelica_boolean tmp1533;
  modelica_real tmp1534;
  modelica_real tmp1535;
  modelica_boolean tmp1536;
  modelica_real tmp1537;
  modelica_real tmp1538;
  modelica_boolean tmp1539;
  modelica_real tmp1540;
  modelica_real tmp1541;
  modelica_boolean tmp1542;
  modelica_real tmp1543;
  modelica_real tmp1544;
  modelica_boolean tmp1545;
  modelica_real tmp1546;
  modelica_real tmp1547;
  modelica_boolean tmp1548;
  modelica_real tmp1549;
  modelica_real tmp1550;
  modelica_boolean tmp1551;
  modelica_real tmp1552;
  modelica_real tmp1553;
  modelica_boolean tmp1554;
  modelica_real tmp1555;
  modelica_real tmp1556;
  modelica_boolean tmp1557;
  modelica_real tmp1558;
  modelica_real tmp1559;
  modelica_boolean tmp1560;
  modelica_real tmp1561;
  modelica_real tmp1562;
  modelica_boolean tmp1563;
  modelica_real tmp1564;
  modelica_real tmp1565;
  modelica_boolean tmp1566;
  modelica_real tmp1567;
  modelica_real tmp1568;
  modelica_boolean tmp1569;
  modelica_real tmp1570;
  modelica_real tmp1571;
  modelica_boolean tmp1572;
  modelica_real tmp1573;
  modelica_real tmp1574;
  modelica_boolean tmp1575;
  modelica_real tmp1576;
  modelica_real tmp1577;
  modelica_boolean tmp1578;
  modelica_real tmp1579;
  modelica_real tmp1580;
  modelica_boolean tmp1581;
  modelica_real tmp1582;
  modelica_real tmp1583;
  modelica_boolean tmp1584;
  modelica_real tmp1585;
  modelica_real tmp1586;
  modelica_boolean tmp1587;
  modelica_real tmp1588;
  modelica_real tmp1589;
  modelica_boolean tmp1590;
  modelica_real tmp1591;
  modelica_real tmp1592;
  modelica_boolean tmp1593;
  modelica_real tmp1594;
  modelica_real tmp1595;
  modelica_boolean tmp1596;
  modelica_real tmp1597;
  modelica_real tmp1598;
  modelica_boolean tmp1599;
  modelica_real tmp1600;
  modelica_real tmp1601;
  modelica_boolean tmp1602;
  modelica_real tmp1603;
  modelica_real tmp1604;
  modelica_boolean tmp1605;
  modelica_real tmp1606;
  modelica_real tmp1607;
  modelica_boolean tmp1608;
  modelica_real tmp1609;
  modelica_real tmp1610;
  modelica_boolean tmp1611;
  modelica_real tmp1612;
  modelica_real tmp1613;
  modelica_boolean tmp1614;
  modelica_real tmp1615;
  modelica_real tmp1616;
  modelica_boolean tmp1617;
  modelica_real tmp1618;
  modelica_real tmp1619;
  modelica_boolean tmp1620;
  modelica_real tmp1621;
  modelica_real tmp1622;
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
  modelica_boolean tmp1635;
  modelica_real tmp1636;
  modelica_real tmp1637;
  modelica_boolean tmp1638;
  modelica_real tmp1639;
  modelica_real tmp1640;
  modelica_boolean tmp1641;
  modelica_real tmp1642;
  modelica_real tmp1643;
  modelica_boolean tmp1644;
  modelica_real tmp1645;
  modelica_real tmp1646;
  modelica_boolean tmp1647;
  modelica_real tmp1648;
  modelica_real tmp1649;
  modelica_boolean tmp1650;
  modelica_real tmp1651;
  modelica_real tmp1652;
  modelica_boolean tmp1653;
  modelica_real tmp1654;
  modelica_real tmp1655;
  modelica_boolean tmp1656;
  modelica_real tmp1657;
  modelica_real tmp1658;
  modelica_boolean tmp1659;
  modelica_real tmp1660;
  modelica_real tmp1661;
  modelica_boolean tmp1662;
  modelica_real tmp1663;
  modelica_real tmp1664;
  modelica_boolean tmp1665;
  modelica_real tmp1666;
  modelica_real tmp1667;
  modelica_boolean tmp1668;
  modelica_real tmp1669;
  modelica_real tmp1670;
  modelica_boolean tmp1671;
  modelica_real tmp1672;
  modelica_real tmp1673;
  modelica_boolean tmp1674;
  modelica_real tmp1675;
  modelica_real tmp1676;
  modelica_boolean tmp1677;
  modelica_real tmp1678;
  modelica_real tmp1679;
  modelica_boolean tmp1680;
  modelica_real tmp1681;
  modelica_real tmp1682;
  modelica_boolean tmp1683;
  modelica_real tmp1684;
  modelica_real tmp1685;
  modelica_boolean tmp1686;
  modelica_real tmp1687;
  modelica_real tmp1688;
  modelica_boolean tmp1689;
  modelica_real tmp1690;
  modelica_real tmp1691;
  modelica_boolean tmp1692;
  modelica_real tmp1693;
  modelica_real tmp1694;
  modelica_boolean tmp1695;
  modelica_real tmp1696;
  modelica_real tmp1697;
  modelica_boolean tmp1698;
  modelica_real tmp1699;
  modelica_real tmp1700;
  modelica_boolean tmp1701;
  modelica_real tmp1702;
  modelica_real tmp1703;
  modelica_boolean tmp1704;
  modelica_real tmp1705;
  modelica_real tmp1706;
  modelica_boolean tmp1707;
  modelica_real tmp1708;
  modelica_real tmp1709;
  modelica_boolean tmp1710;
  modelica_real tmp1711;
  modelica_real tmp1712;
  modelica_boolean tmp1713;
  modelica_real tmp1714;
  modelica_real tmp1715;
  modelica_boolean tmp1716;
  modelica_real tmp1717;
  modelica_real tmp1718;
  modelica_boolean tmp1719;
  modelica_real tmp1720;
  modelica_real tmp1721;
  modelica_boolean tmp1722;
  modelica_real tmp1723;
  modelica_real tmp1724;
  modelica_boolean tmp1725;
  modelica_real tmp1726;
  modelica_real tmp1727;
  modelica_boolean tmp1728;
  modelica_real tmp1729;
  modelica_real tmp1730;
  modelica_boolean tmp1731;
  modelica_real tmp1732;
  modelica_real tmp1733;
  modelica_boolean tmp1734;
  modelica_real tmp1735;
  modelica_real tmp1736;
  modelica_boolean tmp1737;
  modelica_real tmp1738;
  modelica_real tmp1739;
  modelica_boolean tmp1740;
  modelica_real tmp1741;
  modelica_real tmp1742;
  modelica_boolean tmp1743;
  modelica_real tmp1744;
  modelica_real tmp1745;
  modelica_boolean tmp1746;
  modelica_real tmp1747;
  modelica_real tmp1748;
  modelica_boolean tmp1749;
  modelica_real tmp1750;
  modelica_real tmp1751;
  modelica_boolean tmp1752;
  modelica_real tmp1753;
  modelica_real tmp1754;
  modelica_boolean tmp1755;
  modelica_real tmp1756;
  modelica_real tmp1757;
  modelica_boolean tmp1758;
  modelica_real tmp1759;
  modelica_real tmp1760;
  modelica_boolean tmp1761;
  modelica_real tmp1762;
  modelica_real tmp1763;
  modelica_boolean tmp1764;
  modelica_real tmp1765;
  modelica_real tmp1766;
  modelica_boolean tmp1767;
  modelica_real tmp1768;
  modelica_real tmp1769;
  modelica_boolean tmp1770;
  modelica_real tmp1771;
  modelica_real tmp1772;
  modelica_boolean tmp1773;
  modelica_real tmp1774;
  modelica_real tmp1775;
  modelica_boolean tmp1776;
  modelica_real tmp1777;
  modelica_real tmp1778;
  modelica_boolean tmp1779;
  modelica_real tmp1780;
  modelica_real tmp1781;
  modelica_boolean tmp1782;
  modelica_real tmp1783;
  modelica_real tmp1784;
  modelica_boolean tmp1785;
  modelica_real tmp1786;
  modelica_real tmp1787;
  modelica_boolean tmp1788;
  modelica_real tmp1789;
  modelica_real tmp1790;
  modelica_boolean tmp1791;
  modelica_real tmp1792;
  modelica_real tmp1793;
  modelica_boolean tmp1794;
  modelica_real tmp1795;
  modelica_real tmp1796;
  modelica_boolean tmp1797;
  modelica_real tmp1798;
  modelica_real tmp1799;
  modelica_boolean tmp1800;
  modelica_real tmp1801;
  modelica_real tmp1802;
  modelica_boolean tmp1803;
  modelica_real tmp1804;
  modelica_real tmp1805;
  modelica_boolean tmp1806;
  modelica_real tmp1807;
  modelica_real tmp1808;
  modelica_boolean tmp1809;
  modelica_real tmp1810;
  modelica_real tmp1811;
  modelica_boolean tmp1812;
  modelica_real tmp1813;
  modelica_real tmp1814;
  modelica_boolean tmp1815;
  modelica_real tmp1816;
  modelica_real tmp1817;
  modelica_boolean tmp1818;
  modelica_real tmp1819;
  modelica_real tmp1820;
  modelica_boolean tmp1821;
  modelica_real tmp1822;
  modelica_real tmp1823;
  modelica_boolean tmp1824;
  modelica_real tmp1825;
  modelica_real tmp1826;
  modelica_boolean tmp1827;
  modelica_real tmp1828;
  modelica_real tmp1829;
  modelica_boolean tmp1830;
  modelica_real tmp1831;
  modelica_real tmp1832;
  modelica_boolean tmp1833;
  modelica_real tmp1834;
  modelica_real tmp1835;
  modelica_boolean tmp1836;
  modelica_real tmp1837;
  modelica_real tmp1838;
  modelica_boolean tmp1839;
  modelica_real tmp1840;
  modelica_real tmp1841;
  modelica_boolean tmp1842;
  modelica_real tmp1843;
  modelica_real tmp1844;
  modelica_boolean tmp1845;
  modelica_real tmp1846;
  modelica_real tmp1847;
  modelica_boolean tmp1848;
  modelica_real tmp1849;
  modelica_real tmp1850;
  modelica_boolean tmp1851;
  modelica_real tmp1852;
  modelica_real tmp1853;
  modelica_boolean tmp1854;
  modelica_real tmp1855;
  modelica_real tmp1856;
  modelica_boolean tmp1857;
  modelica_real tmp1858;
  modelica_real tmp1859;
  modelica_boolean tmp1860;
  modelica_real tmp1861;
  modelica_real tmp1862;
  modelica_boolean tmp1863;
  modelica_real tmp1864;
  modelica_real tmp1865;
  modelica_boolean tmp1866;
  modelica_real tmp1867;
  modelica_real tmp1868;
  modelica_boolean tmp1869;
  modelica_real tmp1870;
  modelica_real tmp1871;
  modelica_boolean tmp1872;
  modelica_real tmp1873;
  modelica_real tmp1874;
  modelica_boolean tmp1875;
  modelica_real tmp1876;
  modelica_real tmp1877;
  modelica_boolean tmp1878;
  modelica_real tmp1879;
  modelica_real tmp1880;
  modelica_boolean tmp1881;
  modelica_real tmp1882;
  modelica_real tmp1883;
  modelica_boolean tmp1884;
  modelica_real tmp1885;
  modelica_real tmp1886;
  modelica_boolean tmp1887;
  modelica_real tmp1888;
  modelica_real tmp1889;
  modelica_boolean tmp1890;
  modelica_real tmp1891;
  modelica_real tmp1892;
  modelica_boolean tmp1893;
  modelica_real tmp1894;
  modelica_real tmp1895;
  modelica_boolean tmp1896;
  modelica_real tmp1897;
  modelica_real tmp1898;
  modelica_boolean tmp1899;
  modelica_real tmp1900;
  modelica_real tmp1901;
  modelica_boolean tmp1902;
  modelica_real tmp1903;
  modelica_real tmp1904;
  modelica_boolean tmp1905;
  modelica_real tmp1906;
  modelica_real tmp1907;
  modelica_boolean tmp1908;
  modelica_real tmp1909;
  modelica_real tmp1910;
  modelica_boolean tmp1911;
  modelica_real tmp1912;
  modelica_real tmp1913;
  modelica_boolean tmp1914;
  modelica_real tmp1915;
  modelica_real tmp1916;
  modelica_boolean tmp1917;
  modelica_real tmp1918;
  modelica_real tmp1919;
  modelica_boolean tmp1920;
  modelica_real tmp1921;
  modelica_real tmp1922;
  modelica_boolean tmp1923;
  modelica_real tmp1924;
  modelica_real tmp1925;
  modelica_boolean tmp1926;
  modelica_real tmp1927;
  modelica_real tmp1928;
  modelica_boolean tmp1929;
  modelica_real tmp1930;
  modelica_real tmp1931;
  modelica_boolean tmp1932;
  modelica_real tmp1933;
  modelica_real tmp1934;
  modelica_boolean tmp1935;
  modelica_real tmp1936;
  modelica_real tmp1937;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    tmp970 = 1.0;
    tmp971 = 1.0;
    tmp969 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3468]] /* vrNordic_g01.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */), tmp970, tmp971, data->simulationInfo->storedRelations[228]);
    data->simulationInfo->relations[start_index] = tmp969;
    current_index++;

    start_index = current_index;
    tmp973 = 1.0;
    tmp974 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4140]] /* vrNordic_g01.greaterEqualThreshold.threshold PARAM */));
    tmp972 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4140]] /* vrNordic_g01.greaterEqualThreshold.threshold PARAM */), tmp973, tmp974, data->simulationInfo->storedRelations[229]);
    data->simulationInfo->relations[start_index] = tmp972;
    current_index++;

    start_index = current_index;
    tmp976 = 1.0;
    tmp977 = 0.1;
    tmp975 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */), -0.1, tmp976, tmp977, data->simulationInfo->storedRelations[230]);
    data->simulationInfo->relations[start_index] = tmp975;
    current_index++;

    start_index = current_index;
    tmp979 = 1.0;
    tmp980 = 0.0;
    tmp978 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */), 0.0, tmp979, tmp980, data->simulationInfo->storedRelations[231]);
    data->simulationInfo->relations[start_index] = tmp978;
    current_index++;

    start_index = current_index;
    tmp982 = 1.0;
    tmp983 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4183]] /* vrNordic_g01.limIntegrator.outMin PARAM */));
    tmp981 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4183]] /* vrNordic_g01.limIntegrator.outMin PARAM */), tmp982, tmp983, data->simulationInfo->storedRelations[232]);
    data->simulationInfo->relations[start_index] = tmp981;
    current_index++;

    start_index = current_index;
    tmp985 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */))) * (1.0);
    tmp986 = 0.0;
    tmp984 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)), 0.0, tmp985, tmp986, data->simulationInfo->storedRelations[233]);
    data->simulationInfo->relations[start_index] = tmp984;
    current_index++;

    start_index = current_index;
    tmp988 = 1.0;
    tmp989 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4182]] /* vrNordic_g01.limIntegrator.outMax PARAM */));
    tmp987 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4182]] /* vrNordic_g01.limIntegrator.outMax PARAM */), tmp988, tmp989, data->simulationInfo->storedRelations[234]);
    data->simulationInfo->relations[start_index] = tmp987;
    current_index++;

    start_index = current_index;
    tmp991 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */))) * (1.0);
    tmp992 = 0.0;
    tmp990 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)), 0.0, tmp991, tmp992, data->simulationInfo->storedRelations[235]);
    data->simulationInfo->relations[start_index] = tmp990;
    current_index++;

    start_index = current_index;
    tmp994 = 1.0;
    tmp995 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4197]] /* vrNordic_g01.timer.outMin PARAM */));
    tmp993 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4197]] /* vrNordic_g01.timer.outMin PARAM */), tmp994, tmp995, data->simulationInfo->storedRelations[236]);
    data->simulationInfo->relations[start_index] = tmp993;
    current_index++;

    start_index = current_index;
    tmp997 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */))) * (1.0);
    tmp998 = 0.0;
    tmp996 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)), 0.0, tmp997, tmp998, data->simulationInfo->storedRelations[237]);
    data->simulationInfo->relations[start_index] = tmp996;
    current_index++;

    start_index = current_index;
    tmp1000 = 1.0;
    tmp1001 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4196]] /* vrNordic_g01.timer.outMax PARAM */));
    tmp999 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4196]] /* vrNordic_g01.timer.outMax PARAM */), tmp1000, tmp1001, data->simulationInfo->storedRelations[238]);
    data->simulationInfo->relations[start_index] = tmp999;
    current_index++;

    start_index = current_index;
    tmp1003 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */))) * (1.0);
    tmp1004 = 0.0;
    tmp1002 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)), 0.0, tmp1003, tmp1004, data->simulationInfo->storedRelations[239]);
    data->simulationInfo->relations[start_index] = tmp1002;
    current_index++;

    start_index = current_index;
    tmp1006 = 1.0;
    tmp1007 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1005 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1006, tmp1007, data->simulationInfo->storedRelations[240]);
    data->simulationInfo->relations[start_index] = tmp1005;
    current_index++;

    start_index = current_index;
    tmp1009 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1010 = 0.0;
    tmp1008 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1009, tmp1010, data->simulationInfo->storedRelations[241]);
    data->simulationInfo->relations[start_index] = tmp1008;
    current_index++;

    start_index = current_index;
    tmp1012 = 1.0;
    tmp1013 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1011 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1012, tmp1013, data->simulationInfo->storedRelations[242]);
    data->simulationInfo->relations[start_index] = tmp1011;
    current_index++;

    start_index = current_index;
    tmp1015 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1016 = 0.0;
    tmp1014 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1015, tmp1016, data->simulationInfo->storedRelations[243]);
    data->simulationInfo->relations[start_index] = tmp1014;
    current_index++;

    start_index = current_index;
    tmp1018 = 1.0;
    tmp1019 = 1.0;
    tmp1017 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3492]] /* vrNordic_g02.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */), tmp1018, tmp1019, data->simulationInfo->storedRelations[244]);
    data->simulationInfo->relations[start_index] = tmp1017;
    current_index++;

    start_index = current_index;
    tmp1021 = 1.0;
    tmp1022 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4219]] /* vrNordic_g02.greaterEqualThreshold.threshold PARAM */));
    tmp1020 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4219]] /* vrNordic_g02.greaterEqualThreshold.threshold PARAM */), tmp1021, tmp1022, data->simulationInfo->storedRelations[245]);
    data->simulationInfo->relations[start_index] = tmp1020;
    current_index++;

    start_index = current_index;
    tmp1024 = 1.0;
    tmp1025 = 0.1;
    tmp1023 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */), -0.1, tmp1024, tmp1025, data->simulationInfo->storedRelations[246]);
    data->simulationInfo->relations[start_index] = tmp1023;
    current_index++;

    start_index = current_index;
    tmp1027 = 1.0;
    tmp1028 = 0.0;
    tmp1026 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */), 0.0, tmp1027, tmp1028, data->simulationInfo->storedRelations[247]);
    data->simulationInfo->relations[start_index] = tmp1026;
    current_index++;

    start_index = current_index;
    tmp1030 = 1.0;
    tmp1031 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4262]] /* vrNordic_g02.limIntegrator.outMin PARAM */));
    tmp1029 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4262]] /* vrNordic_g02.limIntegrator.outMin PARAM */), tmp1030, tmp1031, data->simulationInfo->storedRelations[248]);
    data->simulationInfo->relations[start_index] = tmp1029;
    current_index++;

    start_index = current_index;
    tmp1033 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */))) * (1.0);
    tmp1034 = 0.0;
    tmp1032 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)), 0.0, tmp1033, tmp1034, data->simulationInfo->storedRelations[249]);
    data->simulationInfo->relations[start_index] = tmp1032;
    current_index++;

    start_index = current_index;
    tmp1036 = 1.0;
    tmp1037 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4261]] /* vrNordic_g02.limIntegrator.outMax PARAM */));
    tmp1035 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4261]] /* vrNordic_g02.limIntegrator.outMax PARAM */), tmp1036, tmp1037, data->simulationInfo->storedRelations[250]);
    data->simulationInfo->relations[start_index] = tmp1035;
    current_index++;

    start_index = current_index;
    tmp1039 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */))) * (1.0);
    tmp1040 = 0.0;
    tmp1038 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)), 0.0, tmp1039, tmp1040, data->simulationInfo->storedRelations[251]);
    data->simulationInfo->relations[start_index] = tmp1038;
    current_index++;

    start_index = current_index;
    tmp1042 = 1.0;
    tmp1043 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4276]] /* vrNordic_g02.timer.outMin PARAM */));
    tmp1041 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4276]] /* vrNordic_g02.timer.outMin PARAM */), tmp1042, tmp1043, data->simulationInfo->storedRelations[252]);
    data->simulationInfo->relations[start_index] = tmp1041;
    current_index++;

    start_index = current_index;
    tmp1045 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */))) * (1.0);
    tmp1046 = 0.0;
    tmp1044 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)), 0.0, tmp1045, tmp1046, data->simulationInfo->storedRelations[253]);
    data->simulationInfo->relations[start_index] = tmp1044;
    current_index++;

    start_index = current_index;
    tmp1048 = 1.0;
    tmp1049 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4275]] /* vrNordic_g02.timer.outMax PARAM */));
    tmp1047 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4275]] /* vrNordic_g02.timer.outMax PARAM */), tmp1048, tmp1049, data->simulationInfo->storedRelations[254]);
    data->simulationInfo->relations[start_index] = tmp1047;
    current_index++;

    start_index = current_index;
    tmp1051 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */))) * (1.0);
    tmp1052 = 0.0;
    tmp1050 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)), 0.0, tmp1051, tmp1052, data->simulationInfo->storedRelations[255]);
    data->simulationInfo->relations[start_index] = tmp1050;
    current_index++;

    start_index = current_index;
    tmp1054 = 1.0;
    tmp1055 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2317]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1053 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2317]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1054, tmp1055, data->simulationInfo->storedRelations[256]);
    data->simulationInfo->relations[start_index] = tmp1053;
    current_index++;

    start_index = current_index;
    tmp1057 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1058 = 0.0;
    tmp1056 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1057, tmp1058, data->simulationInfo->storedRelations[257]);
    data->simulationInfo->relations[start_index] = tmp1056;
    current_index++;

    start_index = current_index;
    tmp1060 = 1.0;
    tmp1061 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2316]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1059 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2316]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1060, tmp1061, data->simulationInfo->storedRelations[258]);
    data->simulationInfo->relations[start_index] = tmp1059;
    current_index++;

    start_index = current_index;
    tmp1063 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1064 = 0.0;
    tmp1062 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1063, tmp1064, data->simulationInfo->storedRelations[259]);
    data->simulationInfo->relations[start_index] = tmp1062;
    current_index++;

    start_index = current_index;
    tmp1066 = 1.0;
    tmp1067 = 1.0;
    tmp1065 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3516]] /* vrNordic_g03.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */), tmp1066, tmp1067, data->simulationInfo->storedRelations[260]);
    data->simulationInfo->relations[start_index] = tmp1065;
    current_index++;

    start_index = current_index;
    tmp1069 = 1.0;
    tmp1070 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4298]] /* vrNordic_g03.greaterEqualThreshold.threshold PARAM */));
    tmp1068 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4298]] /* vrNordic_g03.greaterEqualThreshold.threshold PARAM */), tmp1069, tmp1070, data->simulationInfo->storedRelations[261]);
    data->simulationInfo->relations[start_index] = tmp1068;
    current_index++;

    start_index = current_index;
    tmp1072 = 1.0;
    tmp1073 = 0.1;
    tmp1071 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */), -0.1, tmp1072, tmp1073, data->simulationInfo->storedRelations[262]);
    data->simulationInfo->relations[start_index] = tmp1071;
    current_index++;

    start_index = current_index;
    tmp1075 = 1.0;
    tmp1076 = 0.0;
    tmp1074 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */), 0.0, tmp1075, tmp1076, data->simulationInfo->storedRelations[263]);
    data->simulationInfo->relations[start_index] = tmp1074;
    current_index++;

    start_index = current_index;
    tmp1078 = 1.0;
    tmp1079 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4341]] /* vrNordic_g03.limIntegrator.outMin PARAM */));
    tmp1077 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4341]] /* vrNordic_g03.limIntegrator.outMin PARAM */), tmp1078, tmp1079, data->simulationInfo->storedRelations[264]);
    data->simulationInfo->relations[start_index] = tmp1077;
    current_index++;

    start_index = current_index;
    tmp1081 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */))) * (1.0);
    tmp1082 = 0.0;
    tmp1080 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)), 0.0, tmp1081, tmp1082, data->simulationInfo->storedRelations[265]);
    data->simulationInfo->relations[start_index] = tmp1080;
    current_index++;

    start_index = current_index;
    tmp1084 = 1.0;
    tmp1085 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4340]] /* vrNordic_g03.limIntegrator.outMax PARAM */));
    tmp1083 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4340]] /* vrNordic_g03.limIntegrator.outMax PARAM */), tmp1084, tmp1085, data->simulationInfo->storedRelations[266]);
    data->simulationInfo->relations[start_index] = tmp1083;
    current_index++;

    start_index = current_index;
    tmp1087 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */))) * (1.0);
    tmp1088 = 0.0;
    tmp1086 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)), 0.0, tmp1087, tmp1088, data->simulationInfo->storedRelations[267]);
    data->simulationInfo->relations[start_index] = tmp1086;
    current_index++;

    start_index = current_index;
    tmp1090 = 1.0;
    tmp1091 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4355]] /* vrNordic_g03.timer.outMin PARAM */));
    tmp1089 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4355]] /* vrNordic_g03.timer.outMin PARAM */), tmp1090, tmp1091, data->simulationInfo->storedRelations[268]);
    data->simulationInfo->relations[start_index] = tmp1089;
    current_index++;

    start_index = current_index;
    tmp1093 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */))) * (1.0);
    tmp1094 = 0.0;
    tmp1092 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)), 0.0, tmp1093, tmp1094, data->simulationInfo->storedRelations[269]);
    data->simulationInfo->relations[start_index] = tmp1092;
    current_index++;

    start_index = current_index;
    tmp1096 = 1.0;
    tmp1097 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4354]] /* vrNordic_g03.timer.outMax PARAM */));
    tmp1095 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4354]] /* vrNordic_g03.timer.outMax PARAM */), tmp1096, tmp1097, data->simulationInfo->storedRelations[270]);
    data->simulationInfo->relations[start_index] = tmp1095;
    current_index++;

    start_index = current_index;
    tmp1099 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */))) * (1.0);
    tmp1100 = 0.0;
    tmp1098 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)), 0.0, tmp1099, tmp1100, data->simulationInfo->storedRelations[271]);
    data->simulationInfo->relations[start_index] = tmp1098;
    current_index++;

    start_index = current_index;
    tmp1102 = 1.0;
    tmp1103 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1101 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1102, tmp1103, data->simulationInfo->storedRelations[272]);
    data->simulationInfo->relations[start_index] = tmp1101;
    current_index++;

    start_index = current_index;
    tmp1105 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1106 = 0.0;
    tmp1104 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1105, tmp1106, data->simulationInfo->storedRelations[273]);
    data->simulationInfo->relations[start_index] = tmp1104;
    current_index++;

    start_index = current_index;
    tmp1108 = 1.0;
    tmp1109 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2352]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1107 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2352]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1108, tmp1109, data->simulationInfo->storedRelations[274]);
    data->simulationInfo->relations[start_index] = tmp1107;
    current_index++;

    start_index = current_index;
    tmp1111 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1112 = 0.0;
    tmp1110 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1111, tmp1112, data->simulationInfo->storedRelations[275]);
    data->simulationInfo->relations[start_index] = tmp1110;
    current_index++;

    start_index = current_index;
    tmp1114 = 1.0;
    tmp1115 = 1.0;
    tmp1113 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* vrNordic_g04.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */), tmp1114, tmp1115, data->simulationInfo->storedRelations[276]);
    data->simulationInfo->relations[start_index] = tmp1113;
    current_index++;

    start_index = current_index;
    tmp1117 = 1.0;
    tmp1118 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4377]] /* vrNordic_g04.greaterEqualThreshold.threshold PARAM */));
    tmp1116 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4377]] /* vrNordic_g04.greaterEqualThreshold.threshold PARAM */), tmp1117, tmp1118, data->simulationInfo->storedRelations[277]);
    data->simulationInfo->relations[start_index] = tmp1116;
    current_index++;

    start_index = current_index;
    tmp1120 = 1.0;
    tmp1121 = 0.1;
    tmp1119 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */), -0.1, tmp1120, tmp1121, data->simulationInfo->storedRelations[278]);
    data->simulationInfo->relations[start_index] = tmp1119;
    current_index++;

    start_index = current_index;
    tmp1123 = 1.0;
    tmp1124 = 0.0;
    tmp1122 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */), 0.0, tmp1123, tmp1124, data->simulationInfo->storedRelations[279]);
    data->simulationInfo->relations[start_index] = tmp1122;
    current_index++;

    start_index = current_index;
    tmp1126 = 1.0;
    tmp1127 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4420]] /* vrNordic_g04.limIntegrator.outMin PARAM */));
    tmp1125 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4420]] /* vrNordic_g04.limIntegrator.outMin PARAM */), tmp1126, tmp1127, data->simulationInfo->storedRelations[280]);
    data->simulationInfo->relations[start_index] = tmp1125;
    current_index++;

    start_index = current_index;
    tmp1129 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */))) * (1.0);
    tmp1130 = 0.0;
    tmp1128 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)), 0.0, tmp1129, tmp1130, data->simulationInfo->storedRelations[281]);
    data->simulationInfo->relations[start_index] = tmp1128;
    current_index++;

    start_index = current_index;
    tmp1132 = 1.0;
    tmp1133 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4419]] /* vrNordic_g04.limIntegrator.outMax PARAM */));
    tmp1131 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4419]] /* vrNordic_g04.limIntegrator.outMax PARAM */), tmp1132, tmp1133, data->simulationInfo->storedRelations[282]);
    data->simulationInfo->relations[start_index] = tmp1131;
    current_index++;

    start_index = current_index;
    tmp1135 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */))) * (1.0);
    tmp1136 = 0.0;
    tmp1134 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)), 0.0, tmp1135, tmp1136, data->simulationInfo->storedRelations[283]);
    data->simulationInfo->relations[start_index] = tmp1134;
    current_index++;

    start_index = current_index;
    tmp1138 = 1.0;
    tmp1139 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4434]] /* vrNordic_g04.timer.outMin PARAM */));
    tmp1137 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4434]] /* vrNordic_g04.timer.outMin PARAM */), tmp1138, tmp1139, data->simulationInfo->storedRelations[284]);
    data->simulationInfo->relations[start_index] = tmp1137;
    current_index++;

    start_index = current_index;
    tmp1141 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */))) * (1.0);
    tmp1142 = 0.0;
    tmp1140 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)), 0.0, tmp1141, tmp1142, data->simulationInfo->storedRelations[285]);
    data->simulationInfo->relations[start_index] = tmp1140;
    current_index++;

    start_index = current_index;
    tmp1144 = 1.0;
    tmp1145 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4433]] /* vrNordic_g04.timer.outMax PARAM */));
    tmp1143 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4433]] /* vrNordic_g04.timer.outMax PARAM */), tmp1144, tmp1145, data->simulationInfo->storedRelations[286]);
    data->simulationInfo->relations[start_index] = tmp1143;
    current_index++;

    start_index = current_index;
    tmp1147 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */))) * (1.0);
    tmp1148 = 0.0;
    tmp1146 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)), 0.0, tmp1147, tmp1148, data->simulationInfo->storedRelations[287]);
    data->simulationInfo->relations[start_index] = tmp1146;
    current_index++;

    start_index = current_index;
    tmp1150 = 1.0;
    tmp1151 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1149 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1150, tmp1151, data->simulationInfo->storedRelations[288]);
    data->simulationInfo->relations[start_index] = tmp1149;
    current_index++;

    start_index = current_index;
    tmp1153 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1154 = 0.0;
    tmp1152 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1153, tmp1154, data->simulationInfo->storedRelations[289]);
    data->simulationInfo->relations[start_index] = tmp1152;
    current_index++;

    start_index = current_index;
    tmp1156 = 1.0;
    tmp1157 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1155 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1156, tmp1157, data->simulationInfo->storedRelations[290]);
    data->simulationInfo->relations[start_index] = tmp1155;
    current_index++;

    start_index = current_index;
    tmp1159 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1160 = 0.0;
    tmp1158 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1159, tmp1160, data->simulationInfo->storedRelations[291]);
    data->simulationInfo->relations[start_index] = tmp1158;
    current_index++;

    start_index = current_index;
    tmp1162 = 1.0;
    tmp1163 = 1.0;
    tmp1161 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3564]] /* vrNordic_g05.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */), tmp1162, tmp1163, data->simulationInfo->storedRelations[292]);
    data->simulationInfo->relations[start_index] = tmp1161;
    current_index++;

    start_index = current_index;
    tmp1165 = 1.0;
    tmp1166 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4456]] /* vrNordic_g05.greaterEqualThreshold.threshold PARAM */));
    tmp1164 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4456]] /* vrNordic_g05.greaterEqualThreshold.threshold PARAM */), tmp1165, tmp1166, data->simulationInfo->storedRelations[293]);
    data->simulationInfo->relations[start_index] = tmp1164;
    current_index++;

    start_index = current_index;
    tmp1168 = 1.0;
    tmp1169 = 0.1;
    tmp1167 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */), -0.1, tmp1168, tmp1169, data->simulationInfo->storedRelations[294]);
    data->simulationInfo->relations[start_index] = tmp1167;
    current_index++;

    start_index = current_index;
    tmp1171 = 1.0;
    tmp1172 = 0.0;
    tmp1170 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */), 0.0, tmp1171, tmp1172, data->simulationInfo->storedRelations[295]);
    data->simulationInfo->relations[start_index] = tmp1170;
    current_index++;

    start_index = current_index;
    tmp1174 = 1.0;
    tmp1175 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4499]] /* vrNordic_g05.limIntegrator.outMin PARAM */));
    tmp1173 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4499]] /* vrNordic_g05.limIntegrator.outMin PARAM */), tmp1174, tmp1175, data->simulationInfo->storedRelations[296]);
    data->simulationInfo->relations[start_index] = tmp1173;
    current_index++;

    start_index = current_index;
    tmp1177 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */))) * (1.0);
    tmp1178 = 0.0;
    tmp1176 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)), 0.0, tmp1177, tmp1178, data->simulationInfo->storedRelations[297]);
    data->simulationInfo->relations[start_index] = tmp1176;
    current_index++;

    start_index = current_index;
    tmp1180 = 1.0;
    tmp1181 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4498]] /* vrNordic_g05.limIntegrator.outMax PARAM */));
    tmp1179 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4498]] /* vrNordic_g05.limIntegrator.outMax PARAM */), tmp1180, tmp1181, data->simulationInfo->storedRelations[298]);
    data->simulationInfo->relations[start_index] = tmp1179;
    current_index++;

    start_index = current_index;
    tmp1183 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */))) * (1.0);
    tmp1184 = 0.0;
    tmp1182 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)), 0.0, tmp1183, tmp1184, data->simulationInfo->storedRelations[299]);
    data->simulationInfo->relations[start_index] = tmp1182;
    current_index++;

    start_index = current_index;
    tmp1186 = 1.0;
    tmp1187 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4513]] /* vrNordic_g05.timer.outMin PARAM */));
    tmp1185 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4513]] /* vrNordic_g05.timer.outMin PARAM */), tmp1186, tmp1187, data->simulationInfo->storedRelations[300]);
    data->simulationInfo->relations[start_index] = tmp1185;
    current_index++;

    start_index = current_index;
    tmp1189 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */))) * (1.0);
    tmp1190 = 0.0;
    tmp1188 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)), 0.0, tmp1189, tmp1190, data->simulationInfo->storedRelations[301]);
    data->simulationInfo->relations[start_index] = tmp1188;
    current_index++;

    start_index = current_index;
    tmp1192 = 1.0;
    tmp1193 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4512]] /* vrNordic_g05.timer.outMax PARAM */));
    tmp1191 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4512]] /* vrNordic_g05.timer.outMax PARAM */), tmp1192, tmp1193, data->simulationInfo->storedRelations[302]);
    data->simulationInfo->relations[start_index] = tmp1191;
    current_index++;

    start_index = current_index;
    tmp1195 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */))) * (1.0);
    tmp1196 = 0.0;
    tmp1194 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)), 0.0, tmp1195, tmp1196, data->simulationInfo->storedRelations[303]);
    data->simulationInfo->relations[start_index] = tmp1194;
    current_index++;

    start_index = current_index;
    tmp1198 = 1.0;
    tmp1199 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1197 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1198, tmp1199, data->simulationInfo->storedRelations[304]);
    data->simulationInfo->relations[start_index] = tmp1197;
    current_index++;

    start_index = current_index;
    tmp1201 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1202 = 0.0;
    tmp1200 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1201, tmp1202, data->simulationInfo->storedRelations[305]);
    data->simulationInfo->relations[start_index] = tmp1200;
    current_index++;

    start_index = current_index;
    tmp1204 = 1.0;
    tmp1205 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1203 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1204, tmp1205, data->simulationInfo->storedRelations[306]);
    data->simulationInfo->relations[start_index] = tmp1203;
    current_index++;

    start_index = current_index;
    tmp1207 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1208 = 0.0;
    tmp1206 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1207, tmp1208, data->simulationInfo->storedRelations[307]);
    data->simulationInfo->relations[start_index] = tmp1206;
    current_index++;

    start_index = current_index;
    tmp1210 = 1.0;
    tmp1211 = 1.0;
    tmp1209 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3588]] /* vrNordic_g06.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */), tmp1210, tmp1211, data->simulationInfo->storedRelations[308]);
    data->simulationInfo->relations[start_index] = tmp1209;
    current_index++;

    start_index = current_index;
    tmp1213 = 1.0;
    tmp1214 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4535]] /* vrNordic_g06.greaterEqualThreshold.threshold PARAM */));
    tmp1212 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4535]] /* vrNordic_g06.greaterEqualThreshold.threshold PARAM */), tmp1213, tmp1214, data->simulationInfo->storedRelations[309]);
    data->simulationInfo->relations[start_index] = tmp1212;
    current_index++;

    start_index = current_index;
    tmp1216 = 1.0;
    tmp1217 = 0.1;
    tmp1215 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */), -0.1, tmp1216, tmp1217, data->simulationInfo->storedRelations[310]);
    data->simulationInfo->relations[start_index] = tmp1215;
    current_index++;

    start_index = current_index;
    tmp1219 = 1.0;
    tmp1220 = 0.0;
    tmp1218 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */), 0.0, tmp1219, tmp1220, data->simulationInfo->storedRelations[311]);
    data->simulationInfo->relations[start_index] = tmp1218;
    current_index++;

    start_index = current_index;
    tmp1222 = 1.0;
    tmp1223 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4578]] /* vrNordic_g06.limIntegrator.outMin PARAM */));
    tmp1221 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4578]] /* vrNordic_g06.limIntegrator.outMin PARAM */), tmp1222, tmp1223, data->simulationInfo->storedRelations[312]);
    data->simulationInfo->relations[start_index] = tmp1221;
    current_index++;

    start_index = current_index;
    tmp1225 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */))) * (1.0);
    tmp1226 = 0.0;
    tmp1224 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)), 0.0, tmp1225, tmp1226, data->simulationInfo->storedRelations[313]);
    data->simulationInfo->relations[start_index] = tmp1224;
    current_index++;

    start_index = current_index;
    tmp1228 = 1.0;
    tmp1229 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4577]] /* vrNordic_g06.limIntegrator.outMax PARAM */));
    tmp1227 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4577]] /* vrNordic_g06.limIntegrator.outMax PARAM */), tmp1228, tmp1229, data->simulationInfo->storedRelations[314]);
    data->simulationInfo->relations[start_index] = tmp1227;
    current_index++;

    start_index = current_index;
    tmp1231 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */))) * (1.0);
    tmp1232 = 0.0;
    tmp1230 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)), 0.0, tmp1231, tmp1232, data->simulationInfo->storedRelations[315]);
    data->simulationInfo->relations[start_index] = tmp1230;
    current_index++;

    start_index = current_index;
    tmp1234 = 1.0;
    tmp1235 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4592]] /* vrNordic_g06.timer.outMin PARAM */));
    tmp1233 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4592]] /* vrNordic_g06.timer.outMin PARAM */), tmp1234, tmp1235, data->simulationInfo->storedRelations[316]);
    data->simulationInfo->relations[start_index] = tmp1233;
    current_index++;

    start_index = current_index;
    tmp1237 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */))) * (1.0);
    tmp1238 = 0.0;
    tmp1236 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)), 0.0, tmp1237, tmp1238, data->simulationInfo->storedRelations[317]);
    data->simulationInfo->relations[start_index] = tmp1236;
    current_index++;

    start_index = current_index;
    tmp1240 = 1.0;
    tmp1241 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4591]] /* vrNordic_g06.timer.outMax PARAM */));
    tmp1239 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4591]] /* vrNordic_g06.timer.outMax PARAM */), tmp1240, tmp1241, data->simulationInfo->storedRelations[318]);
    data->simulationInfo->relations[start_index] = tmp1239;
    current_index++;

    start_index = current_index;
    tmp1243 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */))) * (1.0);
    tmp1244 = 0.0;
    tmp1242 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)), 0.0, tmp1243, tmp1244, data->simulationInfo->storedRelations[319]);
    data->simulationInfo->relations[start_index] = tmp1242;
    current_index++;

    start_index = current_index;
    tmp1246 = 1.0;
    tmp1247 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2461]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1245 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2461]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1246, tmp1247, data->simulationInfo->storedRelations[320]);
    data->simulationInfo->relations[start_index] = tmp1245;
    current_index++;

    start_index = current_index;
    tmp1249 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1250 = 0.0;
    tmp1248 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1249, tmp1250, data->simulationInfo->storedRelations[321]);
    data->simulationInfo->relations[start_index] = tmp1248;
    current_index++;

    start_index = current_index;
    tmp1252 = 1.0;
    tmp1253 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2460]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1251 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2460]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1252, tmp1253, data->simulationInfo->storedRelations[322]);
    data->simulationInfo->relations[start_index] = tmp1251;
    current_index++;

    start_index = current_index;
    tmp1255 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1256 = 0.0;
    tmp1254 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1255, tmp1256, data->simulationInfo->storedRelations[323]);
    data->simulationInfo->relations[start_index] = tmp1254;
    current_index++;

    start_index = current_index;
    tmp1258 = 1.0;
    tmp1259 = 1.0;
    tmp1257 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3612]] /* vrNordic_g07.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */), tmp1258, tmp1259, data->simulationInfo->storedRelations[324]);
    data->simulationInfo->relations[start_index] = tmp1257;
    current_index++;

    start_index = current_index;
    tmp1261 = 1.0;
    tmp1262 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4614]] /* vrNordic_g07.greaterEqualThreshold.threshold PARAM */));
    tmp1260 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4614]] /* vrNordic_g07.greaterEqualThreshold.threshold PARAM */), tmp1261, tmp1262, data->simulationInfo->storedRelations[325]);
    data->simulationInfo->relations[start_index] = tmp1260;
    current_index++;

    start_index = current_index;
    tmp1264 = 1.0;
    tmp1265 = 0.1;
    tmp1263 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */), -0.1, tmp1264, tmp1265, data->simulationInfo->storedRelations[326]);
    data->simulationInfo->relations[start_index] = tmp1263;
    current_index++;

    start_index = current_index;
    tmp1267 = 1.0;
    tmp1268 = 0.0;
    tmp1266 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */), 0.0, tmp1267, tmp1268, data->simulationInfo->storedRelations[327]);
    data->simulationInfo->relations[start_index] = tmp1266;
    current_index++;

    start_index = current_index;
    tmp1270 = 1.0;
    tmp1271 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4657]] /* vrNordic_g07.limIntegrator.outMin PARAM */));
    tmp1269 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4657]] /* vrNordic_g07.limIntegrator.outMin PARAM */), tmp1270, tmp1271, data->simulationInfo->storedRelations[328]);
    data->simulationInfo->relations[start_index] = tmp1269;
    current_index++;

    start_index = current_index;
    tmp1273 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */))) * (1.0);
    tmp1274 = 0.0;
    tmp1272 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)), 0.0, tmp1273, tmp1274, data->simulationInfo->storedRelations[329]);
    data->simulationInfo->relations[start_index] = tmp1272;
    current_index++;

    start_index = current_index;
    tmp1276 = 1.0;
    tmp1277 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4656]] /* vrNordic_g07.limIntegrator.outMax PARAM */));
    tmp1275 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4656]] /* vrNordic_g07.limIntegrator.outMax PARAM */), tmp1276, tmp1277, data->simulationInfo->storedRelations[330]);
    data->simulationInfo->relations[start_index] = tmp1275;
    current_index++;

    start_index = current_index;
    tmp1279 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */))) * (1.0);
    tmp1280 = 0.0;
    tmp1278 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)), 0.0, tmp1279, tmp1280, data->simulationInfo->storedRelations[331]);
    data->simulationInfo->relations[start_index] = tmp1278;
    current_index++;

    start_index = current_index;
    tmp1282 = 1.0;
    tmp1283 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4671]] /* vrNordic_g07.timer.outMin PARAM */));
    tmp1281 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4671]] /* vrNordic_g07.timer.outMin PARAM */), tmp1282, tmp1283, data->simulationInfo->storedRelations[332]);
    data->simulationInfo->relations[start_index] = tmp1281;
    current_index++;

    start_index = current_index;
    tmp1285 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */))) * (1.0);
    tmp1286 = 0.0;
    tmp1284 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)), 0.0, tmp1285, tmp1286, data->simulationInfo->storedRelations[333]);
    data->simulationInfo->relations[start_index] = tmp1284;
    current_index++;

    start_index = current_index;
    tmp1288 = 1.0;
    tmp1289 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4670]] /* vrNordic_g07.timer.outMax PARAM */));
    tmp1287 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4670]] /* vrNordic_g07.timer.outMax PARAM */), tmp1288, tmp1289, data->simulationInfo->storedRelations[334]);
    data->simulationInfo->relations[start_index] = tmp1287;
    current_index++;

    start_index = current_index;
    tmp1291 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */))) * (1.0);
    tmp1292 = 0.0;
    tmp1290 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)), 0.0, tmp1291, tmp1292, data->simulationInfo->storedRelations[335]);
    data->simulationInfo->relations[start_index] = tmp1290;
    current_index++;

    start_index = current_index;
    tmp1294 = 1.0;
    tmp1295 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2497]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1293 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2497]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1294, tmp1295, data->simulationInfo->storedRelations[336]);
    data->simulationInfo->relations[start_index] = tmp1293;
    current_index++;

    start_index = current_index;
    tmp1297 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1298 = 0.0;
    tmp1296 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1297, tmp1298, data->simulationInfo->storedRelations[337]);
    data->simulationInfo->relations[start_index] = tmp1296;
    current_index++;

    start_index = current_index;
    tmp1300 = 1.0;
    tmp1301 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1299 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1300, tmp1301, data->simulationInfo->storedRelations[338]);
    data->simulationInfo->relations[start_index] = tmp1299;
    current_index++;

    start_index = current_index;
    tmp1303 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1304 = 0.0;
    tmp1302 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1303, tmp1304, data->simulationInfo->storedRelations[339]);
    data->simulationInfo->relations[start_index] = tmp1302;
    current_index++;

    start_index = current_index;
    tmp1306 = 1.0;
    tmp1307 = 1.0;
    tmp1305 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vrNordic_g08.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */), tmp1306, tmp1307, data->simulationInfo->storedRelations[340]);
    data->simulationInfo->relations[start_index] = tmp1305;
    current_index++;

    start_index = current_index;
    tmp1309 = 1.0;
    tmp1310 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4693]] /* vrNordic_g08.greaterEqualThreshold.threshold PARAM */));
    tmp1308 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4693]] /* vrNordic_g08.greaterEqualThreshold.threshold PARAM */), tmp1309, tmp1310, data->simulationInfo->storedRelations[341]);
    data->simulationInfo->relations[start_index] = tmp1308;
    current_index++;

    start_index = current_index;
    tmp1312 = 1.0;
    tmp1313 = 0.1;
    tmp1311 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */), -0.1, tmp1312, tmp1313, data->simulationInfo->storedRelations[342]);
    data->simulationInfo->relations[start_index] = tmp1311;
    current_index++;

    start_index = current_index;
    tmp1315 = 1.0;
    tmp1316 = 0.0;
    tmp1314 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */), 0.0, tmp1315, tmp1316, data->simulationInfo->storedRelations[343]);
    data->simulationInfo->relations[start_index] = tmp1314;
    current_index++;

    start_index = current_index;
    tmp1318 = 1.0;
    tmp1319 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4736]] /* vrNordic_g08.limIntegrator.outMin PARAM */));
    tmp1317 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4736]] /* vrNordic_g08.limIntegrator.outMin PARAM */), tmp1318, tmp1319, data->simulationInfo->storedRelations[344]);
    data->simulationInfo->relations[start_index] = tmp1317;
    current_index++;

    start_index = current_index;
    tmp1321 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */))) * (1.0);
    tmp1322 = 0.0;
    tmp1320 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)), 0.0, tmp1321, tmp1322, data->simulationInfo->storedRelations[345]);
    data->simulationInfo->relations[start_index] = tmp1320;
    current_index++;

    start_index = current_index;
    tmp1324 = 1.0;
    tmp1325 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4735]] /* vrNordic_g08.limIntegrator.outMax PARAM */));
    tmp1323 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4735]] /* vrNordic_g08.limIntegrator.outMax PARAM */), tmp1324, tmp1325, data->simulationInfo->storedRelations[346]);
    data->simulationInfo->relations[start_index] = tmp1323;
    current_index++;

    start_index = current_index;
    tmp1327 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */))) * (1.0);
    tmp1328 = 0.0;
    tmp1326 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)), 0.0, tmp1327, tmp1328, data->simulationInfo->storedRelations[347]);
    data->simulationInfo->relations[start_index] = tmp1326;
    current_index++;

    start_index = current_index;
    tmp1330 = 1.0;
    tmp1331 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4750]] /* vrNordic_g08.timer.outMin PARAM */));
    tmp1329 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4750]] /* vrNordic_g08.timer.outMin PARAM */), tmp1330, tmp1331, data->simulationInfo->storedRelations[348]);
    data->simulationInfo->relations[start_index] = tmp1329;
    current_index++;

    start_index = current_index;
    tmp1333 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */))) * (1.0);
    tmp1334 = 0.0;
    tmp1332 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)), 0.0, tmp1333, tmp1334, data->simulationInfo->storedRelations[349]);
    data->simulationInfo->relations[start_index] = tmp1332;
    current_index++;

    start_index = current_index;
    tmp1336 = 1.0;
    tmp1337 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4749]] /* vrNordic_g08.timer.outMax PARAM */));
    tmp1335 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4749]] /* vrNordic_g08.timer.outMax PARAM */), tmp1336, tmp1337, data->simulationInfo->storedRelations[350]);
    data->simulationInfo->relations[start_index] = tmp1335;
    current_index++;

    start_index = current_index;
    tmp1339 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */))) * (1.0);
    tmp1340 = 0.0;
    tmp1338 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)), 0.0, tmp1339, tmp1340, data->simulationInfo->storedRelations[351]);
    data->simulationInfo->relations[start_index] = tmp1338;
    current_index++;

    start_index = current_index;
    tmp1342 = 1.0;
    tmp1343 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1341 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1342, tmp1343, data->simulationInfo->storedRelations[352]);
    data->simulationInfo->relations[start_index] = tmp1341;
    current_index++;

    start_index = current_index;
    tmp1345 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1346 = 0.0;
    tmp1344 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1345, tmp1346, data->simulationInfo->storedRelations[353]);
    data->simulationInfo->relations[start_index] = tmp1344;
    current_index++;

    start_index = current_index;
    tmp1348 = 1.0;
    tmp1349 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1347 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1348, tmp1349, data->simulationInfo->storedRelations[354]);
    data->simulationInfo->relations[start_index] = tmp1347;
    current_index++;

    start_index = current_index;
    tmp1351 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1352 = 0.0;
    tmp1350 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1351, tmp1352, data->simulationInfo->storedRelations[355]);
    data->simulationInfo->relations[start_index] = tmp1350;
    current_index++;

    start_index = current_index;
    tmp1354 = 1.0;
    tmp1355 = 1.0;
    tmp1353 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3660]] /* vrNordic_g09.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */), tmp1354, tmp1355, data->simulationInfo->storedRelations[356]);
    data->simulationInfo->relations[start_index] = tmp1353;
    current_index++;

    start_index = current_index;
    tmp1357 = 1.0;
    tmp1358 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4772]] /* vrNordic_g09.greaterEqualThreshold.threshold PARAM */));
    tmp1356 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4772]] /* vrNordic_g09.greaterEqualThreshold.threshold PARAM */), tmp1357, tmp1358, data->simulationInfo->storedRelations[357]);
    data->simulationInfo->relations[start_index] = tmp1356;
    current_index++;

    start_index = current_index;
    tmp1360 = 1.0;
    tmp1361 = 0.1;
    tmp1359 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */), -0.1, tmp1360, tmp1361, data->simulationInfo->storedRelations[358]);
    data->simulationInfo->relations[start_index] = tmp1359;
    current_index++;

    start_index = current_index;
    tmp1363 = 1.0;
    tmp1364 = 0.0;
    tmp1362 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */), 0.0, tmp1363, tmp1364, data->simulationInfo->storedRelations[359]);
    data->simulationInfo->relations[start_index] = tmp1362;
    current_index++;

    start_index = current_index;
    tmp1366 = 1.0;
    tmp1367 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4815]] /* vrNordic_g09.limIntegrator.outMin PARAM */));
    tmp1365 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4815]] /* vrNordic_g09.limIntegrator.outMin PARAM */), tmp1366, tmp1367, data->simulationInfo->storedRelations[360]);
    data->simulationInfo->relations[start_index] = tmp1365;
    current_index++;

    start_index = current_index;
    tmp1369 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */))) * (1.0);
    tmp1370 = 0.0;
    tmp1368 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)), 0.0, tmp1369, tmp1370, data->simulationInfo->storedRelations[361]);
    data->simulationInfo->relations[start_index] = tmp1368;
    current_index++;

    start_index = current_index;
    tmp1372 = 1.0;
    tmp1373 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4814]] /* vrNordic_g09.limIntegrator.outMax PARAM */));
    tmp1371 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4814]] /* vrNordic_g09.limIntegrator.outMax PARAM */), tmp1372, tmp1373, data->simulationInfo->storedRelations[362]);
    data->simulationInfo->relations[start_index] = tmp1371;
    current_index++;

    start_index = current_index;
    tmp1375 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */))) * (1.0);
    tmp1376 = 0.0;
    tmp1374 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)), 0.0, tmp1375, tmp1376, data->simulationInfo->storedRelations[363]);
    data->simulationInfo->relations[start_index] = tmp1374;
    current_index++;

    start_index = current_index;
    tmp1378 = 1.0;
    tmp1379 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4829]] /* vrNordic_g09.timer.outMin PARAM */));
    tmp1377 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4829]] /* vrNordic_g09.timer.outMin PARAM */), tmp1378, tmp1379, data->simulationInfo->storedRelations[364]);
    data->simulationInfo->relations[start_index] = tmp1377;
    current_index++;

    start_index = current_index;
    tmp1381 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */))) * (1.0);
    tmp1382 = 0.0;
    tmp1380 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)), 0.0, tmp1381, tmp1382, data->simulationInfo->storedRelations[365]);
    data->simulationInfo->relations[start_index] = tmp1380;
    current_index++;

    start_index = current_index;
    tmp1384 = 1.0;
    tmp1385 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4828]] /* vrNordic_g09.timer.outMax PARAM */));
    tmp1383 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4828]] /* vrNordic_g09.timer.outMax PARAM */), tmp1384, tmp1385, data->simulationInfo->storedRelations[366]);
    data->simulationInfo->relations[start_index] = tmp1383;
    current_index++;

    start_index = current_index;
    tmp1387 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */))) * (1.0);
    tmp1388 = 0.0;
    tmp1386 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)), 0.0, tmp1387, tmp1388, data->simulationInfo->storedRelations[367]);
    data->simulationInfo->relations[start_index] = tmp1386;
    current_index++;

    start_index = current_index;
    tmp1390 = 1.0;
    tmp1391 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1389 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1390, tmp1391, data->simulationInfo->storedRelations[368]);
    data->simulationInfo->relations[start_index] = tmp1389;
    current_index++;

    start_index = current_index;
    tmp1393 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1394 = 0.0;
    tmp1392 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1393, tmp1394, data->simulationInfo->storedRelations[369]);
    data->simulationInfo->relations[start_index] = tmp1392;
    current_index++;

    start_index = current_index;
    tmp1396 = 1.0;
    tmp1397 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1395 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1396, tmp1397, data->simulationInfo->storedRelations[370]);
    data->simulationInfo->relations[start_index] = tmp1395;
    current_index++;

    start_index = current_index;
    tmp1399 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1400 = 0.0;
    tmp1398 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1399, tmp1400, data->simulationInfo->storedRelations[371]);
    data->simulationInfo->relations[start_index] = tmp1398;
    current_index++;

    start_index = current_index;
    tmp1402 = 1.0;
    tmp1403 = 1.0;
    tmp1401 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* vrNordic_g10.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */), tmp1402, tmp1403, data->simulationInfo->storedRelations[372]);
    data->simulationInfo->relations[start_index] = tmp1401;
    current_index++;

    start_index = current_index;
    tmp1405 = 1.0;
    tmp1406 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4851]] /* vrNordic_g10.greaterEqualThreshold.threshold PARAM */));
    tmp1404 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4851]] /* vrNordic_g10.greaterEqualThreshold.threshold PARAM */), tmp1405, tmp1406, data->simulationInfo->storedRelations[373]);
    data->simulationInfo->relations[start_index] = tmp1404;
    current_index++;

    start_index = current_index;
    tmp1408 = 1.0;
    tmp1409 = 0.1;
    tmp1407 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */), -0.1, tmp1408, tmp1409, data->simulationInfo->storedRelations[374]);
    data->simulationInfo->relations[start_index] = tmp1407;
    current_index++;

    start_index = current_index;
    tmp1411 = 1.0;
    tmp1412 = 0.0;
    tmp1410 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */), 0.0, tmp1411, tmp1412, data->simulationInfo->storedRelations[375]);
    data->simulationInfo->relations[start_index] = tmp1410;
    current_index++;

    start_index = current_index;
    tmp1414 = 1.0;
    tmp1415 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4894]] /* vrNordic_g10.limIntegrator.outMin PARAM */));
    tmp1413 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4894]] /* vrNordic_g10.limIntegrator.outMin PARAM */), tmp1414, tmp1415, data->simulationInfo->storedRelations[376]);
    data->simulationInfo->relations[start_index] = tmp1413;
    current_index++;

    start_index = current_index;
    tmp1417 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */))) * (1.0);
    tmp1418 = 0.0;
    tmp1416 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)), 0.0, tmp1417, tmp1418, data->simulationInfo->storedRelations[377]);
    data->simulationInfo->relations[start_index] = tmp1416;
    current_index++;

    start_index = current_index;
    tmp1420 = 1.0;
    tmp1421 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4893]] /* vrNordic_g10.limIntegrator.outMax PARAM */));
    tmp1419 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4893]] /* vrNordic_g10.limIntegrator.outMax PARAM */), tmp1420, tmp1421, data->simulationInfo->storedRelations[378]);
    data->simulationInfo->relations[start_index] = tmp1419;
    current_index++;

    start_index = current_index;
    tmp1423 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */))) * (1.0);
    tmp1424 = 0.0;
    tmp1422 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)), 0.0, tmp1423, tmp1424, data->simulationInfo->storedRelations[379]);
    data->simulationInfo->relations[start_index] = tmp1422;
    current_index++;

    start_index = current_index;
    tmp1426 = 1.0;
    tmp1427 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4908]] /* vrNordic_g10.timer.outMin PARAM */));
    tmp1425 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4908]] /* vrNordic_g10.timer.outMin PARAM */), tmp1426, tmp1427, data->simulationInfo->storedRelations[380]);
    data->simulationInfo->relations[start_index] = tmp1425;
    current_index++;

    start_index = current_index;
    tmp1429 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */))) * (1.0);
    tmp1430 = 0.0;
    tmp1428 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)), 0.0, tmp1429, tmp1430, data->simulationInfo->storedRelations[381]);
    data->simulationInfo->relations[start_index] = tmp1428;
    current_index++;

    start_index = current_index;
    tmp1432 = 1.0;
    tmp1433 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4907]] /* vrNordic_g10.timer.outMax PARAM */));
    tmp1431 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4907]] /* vrNordic_g10.timer.outMax PARAM */), tmp1432, tmp1433, data->simulationInfo->storedRelations[382]);
    data->simulationInfo->relations[start_index] = tmp1431;
    current_index++;

    start_index = current_index;
    tmp1435 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */))) * (1.0);
    tmp1436 = 0.0;
    tmp1434 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)), 0.0, tmp1435, tmp1436, data->simulationInfo->storedRelations[383]);
    data->simulationInfo->relations[start_index] = tmp1434;
    current_index++;

    start_index = current_index;
    tmp1438 = 1.0;
    tmp1439 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1437 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1438, tmp1439, data->simulationInfo->storedRelations[384]);
    data->simulationInfo->relations[start_index] = tmp1437;
    current_index++;

    start_index = current_index;
    tmp1441 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1442 = 0.0;
    tmp1440 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1441, tmp1442, data->simulationInfo->storedRelations[385]);
    data->simulationInfo->relations[start_index] = tmp1440;
    current_index++;

    start_index = current_index;
    tmp1444 = 1.0;
    tmp1445 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2604]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1443 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2604]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1444, tmp1445, data->simulationInfo->storedRelations[386]);
    data->simulationInfo->relations[start_index] = tmp1443;
    current_index++;

    start_index = current_index;
    tmp1447 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1448 = 0.0;
    tmp1446 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1447, tmp1448, data->simulationInfo->storedRelations[387]);
    data->simulationInfo->relations[start_index] = tmp1446;
    current_index++;

    start_index = current_index;
    tmp1450 = 1.0;
    tmp1451 = 1.0;
    tmp1449 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3708]] /* vrNordic_g11.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */), tmp1450, tmp1451, data->simulationInfo->storedRelations[388]);
    data->simulationInfo->relations[start_index] = tmp1449;
    current_index++;

    start_index = current_index;
    tmp1453 = 1.0;
    tmp1454 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4930]] /* vrNordic_g11.greaterEqualThreshold.threshold PARAM */));
    tmp1452 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4930]] /* vrNordic_g11.greaterEqualThreshold.threshold PARAM */), tmp1453, tmp1454, data->simulationInfo->storedRelations[389]);
    data->simulationInfo->relations[start_index] = tmp1452;
    current_index++;

    start_index = current_index;
    tmp1456 = 1.0;
    tmp1457 = 0.1;
    tmp1455 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */), -0.1, tmp1456, tmp1457, data->simulationInfo->storedRelations[390]);
    data->simulationInfo->relations[start_index] = tmp1455;
    current_index++;

    start_index = current_index;
    tmp1459 = 1.0;
    tmp1460 = 0.0;
    tmp1458 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */), 0.0, tmp1459, tmp1460, data->simulationInfo->storedRelations[391]);
    data->simulationInfo->relations[start_index] = tmp1458;
    current_index++;

    start_index = current_index;
    tmp1462 = 1.0;
    tmp1463 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4973]] /* vrNordic_g11.limIntegrator.outMin PARAM */));
    tmp1461 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4973]] /* vrNordic_g11.limIntegrator.outMin PARAM */), tmp1462, tmp1463, data->simulationInfo->storedRelations[392]);
    data->simulationInfo->relations[start_index] = tmp1461;
    current_index++;

    start_index = current_index;
    tmp1465 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */))) * (1.0);
    tmp1466 = 0.0;
    tmp1464 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)), 0.0, tmp1465, tmp1466, data->simulationInfo->storedRelations[393]);
    data->simulationInfo->relations[start_index] = tmp1464;
    current_index++;

    start_index = current_index;
    tmp1468 = 1.0;
    tmp1469 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4972]] /* vrNordic_g11.limIntegrator.outMax PARAM */));
    tmp1467 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4972]] /* vrNordic_g11.limIntegrator.outMax PARAM */), tmp1468, tmp1469, data->simulationInfo->storedRelations[394]);
    data->simulationInfo->relations[start_index] = tmp1467;
    current_index++;

    start_index = current_index;
    tmp1471 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */))) * (1.0);
    tmp1472 = 0.0;
    tmp1470 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)), 0.0, tmp1471, tmp1472, data->simulationInfo->storedRelations[395]);
    data->simulationInfo->relations[start_index] = tmp1470;
    current_index++;

    start_index = current_index;
    tmp1474 = 1.0;
    tmp1475 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4987]] /* vrNordic_g11.timer.outMin PARAM */));
    tmp1473 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4987]] /* vrNordic_g11.timer.outMin PARAM */), tmp1474, tmp1475, data->simulationInfo->storedRelations[396]);
    data->simulationInfo->relations[start_index] = tmp1473;
    current_index++;

    start_index = current_index;
    tmp1477 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */))) * (1.0);
    tmp1478 = 0.0;
    tmp1476 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)), 0.0, tmp1477, tmp1478, data->simulationInfo->storedRelations[397]);
    data->simulationInfo->relations[start_index] = tmp1476;
    current_index++;

    start_index = current_index;
    tmp1480 = 1.0;
    tmp1481 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4986]] /* vrNordic_g11.timer.outMax PARAM */));
    tmp1479 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4986]] /* vrNordic_g11.timer.outMax PARAM */), tmp1480, tmp1481, data->simulationInfo->storedRelations[398]);
    data->simulationInfo->relations[start_index] = tmp1479;
    current_index++;

    start_index = current_index;
    tmp1483 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */))) * (1.0);
    tmp1484 = 0.0;
    tmp1482 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)), 0.0, tmp1483, tmp1484, data->simulationInfo->storedRelations[399]);
    data->simulationInfo->relations[start_index] = tmp1482;
    current_index++;

    start_index = current_index;
    tmp1486 = 1.0;
    tmp1487 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1485 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1486, tmp1487, data->simulationInfo->storedRelations[400]);
    data->simulationInfo->relations[start_index] = tmp1485;
    current_index++;

    start_index = current_index;
    tmp1489 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1490 = 0.0;
    tmp1488 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1489, tmp1490, data->simulationInfo->storedRelations[401]);
    data->simulationInfo->relations[start_index] = tmp1488;
    current_index++;

    start_index = current_index;
    tmp1492 = 1.0;
    tmp1493 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1491 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1492, tmp1493, data->simulationInfo->storedRelations[402]);
    data->simulationInfo->relations[start_index] = tmp1491;
    current_index++;

    start_index = current_index;
    tmp1495 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1496 = 0.0;
    tmp1494 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1495, tmp1496, data->simulationInfo->storedRelations[403]);
    data->simulationInfo->relations[start_index] = tmp1494;
    current_index++;

    start_index = current_index;
    tmp1498 = 1.0;
    tmp1499 = 1.0;
    tmp1497 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3732]] /* vrNordic_g12.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */), tmp1498, tmp1499, data->simulationInfo->storedRelations[404]);
    data->simulationInfo->relations[start_index] = tmp1497;
    current_index++;

    start_index = current_index;
    tmp1501 = 1.0;
    tmp1502 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5009]] /* vrNordic_g12.greaterEqualThreshold.threshold PARAM */));
    tmp1500 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5009]] /* vrNordic_g12.greaterEqualThreshold.threshold PARAM */), tmp1501, tmp1502, data->simulationInfo->storedRelations[405]);
    data->simulationInfo->relations[start_index] = tmp1500;
    current_index++;

    start_index = current_index;
    tmp1504 = 1.0;
    tmp1505 = 0.1;
    tmp1503 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */), -0.1, tmp1504, tmp1505, data->simulationInfo->storedRelations[406]);
    data->simulationInfo->relations[start_index] = tmp1503;
    current_index++;

    start_index = current_index;
    tmp1507 = 1.0;
    tmp1508 = 0.0;
    tmp1506 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */), 0.0, tmp1507, tmp1508, data->simulationInfo->storedRelations[407]);
    data->simulationInfo->relations[start_index] = tmp1506;
    current_index++;

    start_index = current_index;
    tmp1510 = 1.0;
    tmp1511 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5052]] /* vrNordic_g12.limIntegrator.outMin PARAM */));
    tmp1509 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5052]] /* vrNordic_g12.limIntegrator.outMin PARAM */), tmp1510, tmp1511, data->simulationInfo->storedRelations[408]);
    data->simulationInfo->relations[start_index] = tmp1509;
    current_index++;

    start_index = current_index;
    tmp1513 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */))) * (1.0);
    tmp1514 = 0.0;
    tmp1512 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)), 0.0, tmp1513, tmp1514, data->simulationInfo->storedRelations[409]);
    data->simulationInfo->relations[start_index] = tmp1512;
    current_index++;

    start_index = current_index;
    tmp1516 = 1.0;
    tmp1517 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5051]] /* vrNordic_g12.limIntegrator.outMax PARAM */));
    tmp1515 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5051]] /* vrNordic_g12.limIntegrator.outMax PARAM */), tmp1516, tmp1517, data->simulationInfo->storedRelations[410]);
    data->simulationInfo->relations[start_index] = tmp1515;
    current_index++;

    start_index = current_index;
    tmp1519 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */))) * (1.0);
    tmp1520 = 0.0;
    tmp1518 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)), 0.0, tmp1519, tmp1520, data->simulationInfo->storedRelations[411]);
    data->simulationInfo->relations[start_index] = tmp1518;
    current_index++;

    start_index = current_index;
    tmp1522 = 1.0;
    tmp1523 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5066]] /* vrNordic_g12.timer.outMin PARAM */));
    tmp1521 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5066]] /* vrNordic_g12.timer.outMin PARAM */), tmp1522, tmp1523, data->simulationInfo->storedRelations[412]);
    data->simulationInfo->relations[start_index] = tmp1521;
    current_index++;

    start_index = current_index;
    tmp1525 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */))) * (1.0);
    tmp1526 = 0.0;
    tmp1524 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)), 0.0, tmp1525, tmp1526, data->simulationInfo->storedRelations[413]);
    data->simulationInfo->relations[start_index] = tmp1524;
    current_index++;

    start_index = current_index;
    tmp1528 = 1.0;
    tmp1529 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5065]] /* vrNordic_g12.timer.outMax PARAM */));
    tmp1527 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5065]] /* vrNordic_g12.timer.outMax PARAM */), tmp1528, tmp1529, data->simulationInfo->storedRelations[414]);
    data->simulationInfo->relations[start_index] = tmp1527;
    current_index++;

    start_index = current_index;
    tmp1531 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */))) * (1.0);
    tmp1532 = 0.0;
    tmp1530 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)), 0.0, tmp1531, tmp1532, data->simulationInfo->storedRelations[415]);
    data->simulationInfo->relations[start_index] = tmp1530;
    current_index++;

    start_index = current_index;
    tmp1534 = 1.0;
    tmp1535 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1533 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1534, tmp1535, data->simulationInfo->storedRelations[416]);
    data->simulationInfo->relations[start_index] = tmp1533;
    current_index++;

    start_index = current_index;
    tmp1537 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1538 = 0.0;
    tmp1536 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1537, tmp1538, data->simulationInfo->storedRelations[417]);
    data->simulationInfo->relations[start_index] = tmp1536;
    current_index++;

    start_index = current_index;
    tmp1540 = 1.0;
    tmp1541 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1539 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1540, tmp1541, data->simulationInfo->storedRelations[418]);
    data->simulationInfo->relations[start_index] = tmp1539;
    current_index++;

    start_index = current_index;
    tmp1543 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1544 = 0.0;
    tmp1542 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1543, tmp1544, data->simulationInfo->storedRelations[419]);
    data->simulationInfo->relations[start_index] = tmp1542;
    current_index++;

    start_index = current_index;
    tmp1546 = 1.0;
    tmp1547 = 1.0;
    tmp1545 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vrNordic_g13.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */), tmp1546, tmp1547, data->simulationInfo->storedRelations[420]);
    data->simulationInfo->relations[start_index] = tmp1545;
    current_index++;

    start_index = current_index;
    tmp1549 = 1.0;
    tmp1550 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5088]] /* vrNordic_g13.greaterEqualThreshold.threshold PARAM */));
    tmp1548 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5088]] /* vrNordic_g13.greaterEqualThreshold.threshold PARAM */), tmp1549, tmp1550, data->simulationInfo->storedRelations[421]);
    data->simulationInfo->relations[start_index] = tmp1548;
    current_index++;

    start_index = current_index;
    tmp1552 = 1.0;
    tmp1553 = 0.1;
    tmp1551 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */), -0.1, tmp1552, tmp1553, data->simulationInfo->storedRelations[422]);
    data->simulationInfo->relations[start_index] = tmp1551;
    current_index++;

    start_index = current_index;
    tmp1555 = 1.0;
    tmp1556 = 0.0;
    tmp1554 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */), 0.0, tmp1555, tmp1556, data->simulationInfo->storedRelations[423]);
    data->simulationInfo->relations[start_index] = tmp1554;
    current_index++;

    start_index = current_index;
    tmp1558 = 1.0;
    tmp1559 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5131]] /* vrNordic_g13.limIntegrator.outMin PARAM */));
    tmp1557 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5131]] /* vrNordic_g13.limIntegrator.outMin PARAM */), tmp1558, tmp1559, data->simulationInfo->storedRelations[424]);
    data->simulationInfo->relations[start_index] = tmp1557;
    current_index++;

    start_index = current_index;
    tmp1561 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */))) * (1.0);
    tmp1562 = 0.0;
    tmp1560 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)), 0.0, tmp1561, tmp1562, data->simulationInfo->storedRelations[425]);
    data->simulationInfo->relations[start_index] = tmp1560;
    current_index++;

    start_index = current_index;
    tmp1564 = 1.0;
    tmp1565 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5130]] /* vrNordic_g13.limIntegrator.outMax PARAM */));
    tmp1563 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5130]] /* vrNordic_g13.limIntegrator.outMax PARAM */), tmp1564, tmp1565, data->simulationInfo->storedRelations[426]);
    data->simulationInfo->relations[start_index] = tmp1563;
    current_index++;

    start_index = current_index;
    tmp1567 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */))) * (1.0);
    tmp1568 = 0.0;
    tmp1566 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)), 0.0, tmp1567, tmp1568, data->simulationInfo->storedRelations[427]);
    data->simulationInfo->relations[start_index] = tmp1566;
    current_index++;

    start_index = current_index;
    tmp1570 = 1.0;
    tmp1571 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5145]] /* vrNordic_g13.timer.outMin PARAM */));
    tmp1569 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5145]] /* vrNordic_g13.timer.outMin PARAM */), tmp1570, tmp1571, data->simulationInfo->storedRelations[428]);
    data->simulationInfo->relations[start_index] = tmp1569;
    current_index++;

    start_index = current_index;
    tmp1573 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */))) * (1.0);
    tmp1574 = 0.0;
    tmp1572 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)), 0.0, tmp1573, tmp1574, data->simulationInfo->storedRelations[429]);
    data->simulationInfo->relations[start_index] = tmp1572;
    current_index++;

    start_index = current_index;
    tmp1576 = 1.0;
    tmp1577 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5144]] /* vrNordic_g13.timer.outMax PARAM */));
    tmp1575 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5144]] /* vrNordic_g13.timer.outMax PARAM */), tmp1576, tmp1577, data->simulationInfo->storedRelations[430]);
    data->simulationInfo->relations[start_index] = tmp1575;
    current_index++;

    start_index = current_index;
    tmp1579 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */))) * (1.0);
    tmp1580 = 0.0;
    tmp1578 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)), 0.0, tmp1579, tmp1580, data->simulationInfo->storedRelations[431]);
    data->simulationInfo->relations[start_index] = tmp1578;
    current_index++;

    start_index = current_index;
    tmp1582 = 1.0;
    tmp1583 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1581 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1582, tmp1583, data->simulationInfo->storedRelations[432]);
    data->simulationInfo->relations[start_index] = tmp1581;
    current_index++;

    start_index = current_index;
    tmp1585 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1586 = 0.0;
    tmp1584 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1585, tmp1586, data->simulationInfo->storedRelations[433]);
    data->simulationInfo->relations[start_index] = tmp1584;
    current_index++;

    start_index = current_index;
    tmp1588 = 1.0;
    tmp1589 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1587 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1588, tmp1589, data->simulationInfo->storedRelations[434]);
    data->simulationInfo->relations[start_index] = tmp1587;
    current_index++;

    start_index = current_index;
    tmp1591 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1592 = 0.0;
    tmp1590 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1591, tmp1592, data->simulationInfo->storedRelations[435]);
    data->simulationInfo->relations[start_index] = tmp1590;
    current_index++;

    start_index = current_index;
    tmp1594 = 1.0;
    tmp1595 = 1.0;
    tmp1593 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3780]] /* vrNordic_g14.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */), tmp1594, tmp1595, data->simulationInfo->storedRelations[436]);
    data->simulationInfo->relations[start_index] = tmp1593;
    current_index++;

    start_index = current_index;
    tmp1597 = 1.0;
    tmp1598 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5167]] /* vrNordic_g14.greaterEqualThreshold.threshold PARAM */));
    tmp1596 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5167]] /* vrNordic_g14.greaterEqualThreshold.threshold PARAM */), tmp1597, tmp1598, data->simulationInfo->storedRelations[437]);
    data->simulationInfo->relations[start_index] = tmp1596;
    current_index++;

    start_index = current_index;
    tmp1600 = 1.0;
    tmp1601 = 0.1;
    tmp1599 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */), -0.1, tmp1600, tmp1601, data->simulationInfo->storedRelations[438]);
    data->simulationInfo->relations[start_index] = tmp1599;
    current_index++;

    start_index = current_index;
    tmp1603 = 1.0;
    tmp1604 = 0.0;
    tmp1602 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */), 0.0, tmp1603, tmp1604, data->simulationInfo->storedRelations[439]);
    data->simulationInfo->relations[start_index] = tmp1602;
    current_index++;

    start_index = current_index;
    tmp1606 = 1.0;
    tmp1607 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5210]] /* vrNordic_g14.limIntegrator.outMin PARAM */));
    tmp1605 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5210]] /* vrNordic_g14.limIntegrator.outMin PARAM */), tmp1606, tmp1607, data->simulationInfo->storedRelations[440]);
    data->simulationInfo->relations[start_index] = tmp1605;
    current_index++;

    start_index = current_index;
    tmp1609 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */))) * (1.0);
    tmp1610 = 0.0;
    tmp1608 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)), 0.0, tmp1609, tmp1610, data->simulationInfo->storedRelations[441]);
    data->simulationInfo->relations[start_index] = tmp1608;
    current_index++;

    start_index = current_index;
    tmp1612 = 1.0;
    tmp1613 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5209]] /* vrNordic_g14.limIntegrator.outMax PARAM */));
    tmp1611 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5209]] /* vrNordic_g14.limIntegrator.outMax PARAM */), tmp1612, tmp1613, data->simulationInfo->storedRelations[442]);
    data->simulationInfo->relations[start_index] = tmp1611;
    current_index++;

    start_index = current_index;
    tmp1615 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */))) * (1.0);
    tmp1616 = 0.0;
    tmp1614 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)), 0.0, tmp1615, tmp1616, data->simulationInfo->storedRelations[443]);
    data->simulationInfo->relations[start_index] = tmp1614;
    current_index++;

    start_index = current_index;
    tmp1618 = 1.0;
    tmp1619 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5224]] /* vrNordic_g14.timer.outMin PARAM */));
    tmp1617 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5224]] /* vrNordic_g14.timer.outMin PARAM */), tmp1618, tmp1619, data->simulationInfo->storedRelations[444]);
    data->simulationInfo->relations[start_index] = tmp1617;
    current_index++;

    start_index = current_index;
    tmp1621 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */))) * (1.0);
    tmp1622 = 0.0;
    tmp1620 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)), 0.0, tmp1621, tmp1622, data->simulationInfo->storedRelations[445]);
    data->simulationInfo->relations[start_index] = tmp1620;
    current_index++;

    start_index = current_index;
    tmp1624 = 1.0;
    tmp1625 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5223]] /* vrNordic_g14.timer.outMax PARAM */));
    tmp1623 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5223]] /* vrNordic_g14.timer.outMax PARAM */), tmp1624, tmp1625, data->simulationInfo->storedRelations[446]);
    data->simulationInfo->relations[start_index] = tmp1623;
    current_index++;

    start_index = current_index;
    tmp1627 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */))) * (1.0);
    tmp1628 = 0.0;
    tmp1626 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)), 0.0, tmp1627, tmp1628, data->simulationInfo->storedRelations[447]);
    data->simulationInfo->relations[start_index] = tmp1626;
    current_index++;

    start_index = current_index;
    tmp1630 = 1.0;
    tmp1631 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1629 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1630, tmp1631, data->simulationInfo->storedRelations[448]);
    data->simulationInfo->relations[start_index] = tmp1629;
    current_index++;

    start_index = current_index;
    tmp1633 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1634 = 0.0;
    tmp1632 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1633, tmp1634, data->simulationInfo->storedRelations[449]);
    data->simulationInfo->relations[start_index] = tmp1632;
    current_index++;

    start_index = current_index;
    tmp1636 = 1.0;
    tmp1637 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1635 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1636, tmp1637, data->simulationInfo->storedRelations[450]);
    data->simulationInfo->relations[start_index] = tmp1635;
    current_index++;

    start_index = current_index;
    tmp1639 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1640 = 0.0;
    tmp1638 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1639, tmp1640, data->simulationInfo->storedRelations[451]);
    data->simulationInfo->relations[start_index] = tmp1638;
    current_index++;

    start_index = current_index;
    tmp1642 = 1.0;
    tmp1643 = 1.0;
    tmp1641 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3804]] /* vrNordic_g15.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */), tmp1642, tmp1643, data->simulationInfo->storedRelations[452]);
    data->simulationInfo->relations[start_index] = tmp1641;
    current_index++;

    start_index = current_index;
    tmp1645 = 1.0;
    tmp1646 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5246]] /* vrNordic_g15.greaterEqualThreshold.threshold PARAM */));
    tmp1644 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5246]] /* vrNordic_g15.greaterEqualThreshold.threshold PARAM */), tmp1645, tmp1646, data->simulationInfo->storedRelations[453]);
    data->simulationInfo->relations[start_index] = tmp1644;
    current_index++;

    start_index = current_index;
    tmp1648 = 1.0;
    tmp1649 = 0.1;
    tmp1647 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */), -0.1, tmp1648, tmp1649, data->simulationInfo->storedRelations[454]);
    data->simulationInfo->relations[start_index] = tmp1647;
    current_index++;

    start_index = current_index;
    tmp1651 = 1.0;
    tmp1652 = 0.0;
    tmp1650 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */), 0.0, tmp1651, tmp1652, data->simulationInfo->storedRelations[455]);
    data->simulationInfo->relations[start_index] = tmp1650;
    current_index++;

    start_index = current_index;
    tmp1654 = 1.0;
    tmp1655 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5289]] /* vrNordic_g15.limIntegrator.outMin PARAM */));
    tmp1653 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5289]] /* vrNordic_g15.limIntegrator.outMin PARAM */), tmp1654, tmp1655, data->simulationInfo->storedRelations[456]);
    data->simulationInfo->relations[start_index] = tmp1653;
    current_index++;

    start_index = current_index;
    tmp1657 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */))) * (1.0);
    tmp1658 = 0.0;
    tmp1656 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)), 0.0, tmp1657, tmp1658, data->simulationInfo->storedRelations[457]);
    data->simulationInfo->relations[start_index] = tmp1656;
    current_index++;

    start_index = current_index;
    tmp1660 = 1.0;
    tmp1661 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5288]] /* vrNordic_g15.limIntegrator.outMax PARAM */));
    tmp1659 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5288]] /* vrNordic_g15.limIntegrator.outMax PARAM */), tmp1660, tmp1661, data->simulationInfo->storedRelations[458]);
    data->simulationInfo->relations[start_index] = tmp1659;
    current_index++;

    start_index = current_index;
    tmp1663 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */))) * (1.0);
    tmp1664 = 0.0;
    tmp1662 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)), 0.0, tmp1663, tmp1664, data->simulationInfo->storedRelations[459]);
    data->simulationInfo->relations[start_index] = tmp1662;
    current_index++;

    start_index = current_index;
    tmp1666 = 1.0;
    tmp1667 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5303]] /* vrNordic_g15.timer.outMin PARAM */));
    tmp1665 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5303]] /* vrNordic_g15.timer.outMin PARAM */), tmp1666, tmp1667, data->simulationInfo->storedRelations[460]);
    data->simulationInfo->relations[start_index] = tmp1665;
    current_index++;

    start_index = current_index;
    tmp1669 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */))) * (1.0);
    tmp1670 = 0.0;
    tmp1668 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)), 0.0, tmp1669, tmp1670, data->simulationInfo->storedRelations[461]);
    data->simulationInfo->relations[start_index] = tmp1668;
    current_index++;

    start_index = current_index;
    tmp1672 = 1.0;
    tmp1673 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5302]] /* vrNordic_g15.timer.outMax PARAM */));
    tmp1671 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5302]] /* vrNordic_g15.timer.outMax PARAM */), tmp1672, tmp1673, data->simulationInfo->storedRelations[462]);
    data->simulationInfo->relations[start_index] = tmp1671;
    current_index++;

    start_index = current_index;
    tmp1675 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */))) * (1.0);
    tmp1676 = 0.0;
    tmp1674 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)), 0.0, tmp1675, tmp1676, data->simulationInfo->storedRelations[463]);
    data->simulationInfo->relations[start_index] = tmp1674;
    current_index++;

    start_index = current_index;
    tmp1678 = 1.0;
    tmp1679 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1677 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1678, tmp1679, data->simulationInfo->storedRelations[464]);
    data->simulationInfo->relations[start_index] = tmp1677;
    current_index++;

    start_index = current_index;
    tmp1681 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1682 = 0.0;
    tmp1680 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1681, tmp1682, data->simulationInfo->storedRelations[465]);
    data->simulationInfo->relations[start_index] = tmp1680;
    current_index++;

    start_index = current_index;
    tmp1684 = 1.0;
    tmp1685 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1683 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1684, tmp1685, data->simulationInfo->storedRelations[466]);
    data->simulationInfo->relations[start_index] = tmp1683;
    current_index++;

    start_index = current_index;
    tmp1687 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1688 = 0.0;
    tmp1686 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1687, tmp1688, data->simulationInfo->storedRelations[467]);
    data->simulationInfo->relations[start_index] = tmp1686;
    current_index++;

    start_index = current_index;
    tmp1690 = 1.0;
    tmp1691 = 1.0;
    tmp1689 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3828]] /* vrNordic_g16.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */), tmp1690, tmp1691, data->simulationInfo->storedRelations[468]);
    data->simulationInfo->relations[start_index] = tmp1689;
    current_index++;

    start_index = current_index;
    tmp1693 = 1.0;
    tmp1694 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5325]] /* vrNordic_g16.greaterEqualThreshold.threshold PARAM */));
    tmp1692 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5325]] /* vrNordic_g16.greaterEqualThreshold.threshold PARAM */), tmp1693, tmp1694, data->simulationInfo->storedRelations[469]);
    data->simulationInfo->relations[start_index] = tmp1692;
    current_index++;

    start_index = current_index;
    tmp1696 = 1.0;
    tmp1697 = 0.1;
    tmp1695 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */), -0.1, tmp1696, tmp1697, data->simulationInfo->storedRelations[470]);
    data->simulationInfo->relations[start_index] = tmp1695;
    current_index++;

    start_index = current_index;
    tmp1699 = 1.0;
    tmp1700 = 0.0;
    tmp1698 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */), 0.0, tmp1699, tmp1700, data->simulationInfo->storedRelations[471]);
    data->simulationInfo->relations[start_index] = tmp1698;
    current_index++;

    start_index = current_index;
    tmp1702 = 1.0;
    tmp1703 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5368]] /* vrNordic_g16.limIntegrator.outMin PARAM */));
    tmp1701 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5368]] /* vrNordic_g16.limIntegrator.outMin PARAM */), tmp1702, tmp1703, data->simulationInfo->storedRelations[472]);
    data->simulationInfo->relations[start_index] = tmp1701;
    current_index++;

    start_index = current_index;
    tmp1705 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */))) * (1.0);
    tmp1706 = 0.0;
    tmp1704 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)), 0.0, tmp1705, tmp1706, data->simulationInfo->storedRelations[473]);
    data->simulationInfo->relations[start_index] = tmp1704;
    current_index++;

    start_index = current_index;
    tmp1708 = 1.0;
    tmp1709 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5367]] /* vrNordic_g16.limIntegrator.outMax PARAM */));
    tmp1707 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5367]] /* vrNordic_g16.limIntegrator.outMax PARAM */), tmp1708, tmp1709, data->simulationInfo->storedRelations[474]);
    data->simulationInfo->relations[start_index] = tmp1707;
    current_index++;

    start_index = current_index;
    tmp1711 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */))) * (1.0);
    tmp1712 = 0.0;
    tmp1710 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)), 0.0, tmp1711, tmp1712, data->simulationInfo->storedRelations[475]);
    data->simulationInfo->relations[start_index] = tmp1710;
    current_index++;

    start_index = current_index;
    tmp1714 = 1.0;
    tmp1715 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5382]] /* vrNordic_g16.timer.outMin PARAM */));
    tmp1713 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5382]] /* vrNordic_g16.timer.outMin PARAM */), tmp1714, tmp1715, data->simulationInfo->storedRelations[476]);
    data->simulationInfo->relations[start_index] = tmp1713;
    current_index++;

    start_index = current_index;
    tmp1717 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */))) * (1.0);
    tmp1718 = 0.0;
    tmp1716 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)), 0.0, tmp1717, tmp1718, data->simulationInfo->storedRelations[477]);
    data->simulationInfo->relations[start_index] = tmp1716;
    current_index++;

    start_index = current_index;
    tmp1720 = 1.0;
    tmp1721 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5381]] /* vrNordic_g16.timer.outMax PARAM */));
    tmp1719 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5381]] /* vrNordic_g16.timer.outMax PARAM */), tmp1720, tmp1721, data->simulationInfo->storedRelations[478]);
    data->simulationInfo->relations[start_index] = tmp1719;
    current_index++;

    start_index = current_index;
    tmp1723 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */))) * (1.0);
    tmp1724 = 0.0;
    tmp1722 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)), 0.0, tmp1723, tmp1724, data->simulationInfo->storedRelations[479]);
    data->simulationInfo->relations[start_index] = tmp1722;
    current_index++;

    start_index = current_index;
    tmp1726 = 1.0;
    tmp1727 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1725 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1726, tmp1727, data->simulationInfo->storedRelations[480]);
    data->simulationInfo->relations[start_index] = tmp1725;
    current_index++;

    start_index = current_index;
    tmp1729 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1730 = 0.0;
    tmp1728 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1729, tmp1730, data->simulationInfo->storedRelations[481]);
    data->simulationInfo->relations[start_index] = tmp1728;
    current_index++;

    start_index = current_index;
    tmp1732 = 1.0;
    tmp1733 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1731 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1732, tmp1733, data->simulationInfo->storedRelations[482]);
    data->simulationInfo->relations[start_index] = tmp1731;
    current_index++;

    start_index = current_index;
    tmp1735 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1736 = 0.0;
    tmp1734 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1735, tmp1736, data->simulationInfo->storedRelations[483]);
    data->simulationInfo->relations[start_index] = tmp1734;
    current_index++;

    start_index = current_index;
    tmp1738 = 1.0;
    tmp1739 = 1.0;
    tmp1737 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* vrNordic_g17.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */), tmp1738, tmp1739, data->simulationInfo->storedRelations[484]);
    data->simulationInfo->relations[start_index] = tmp1737;
    current_index++;

    start_index = current_index;
    tmp1741 = 1.0;
    tmp1742 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5404]] /* vrNordic_g17.greaterEqualThreshold.threshold PARAM */));
    tmp1740 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5404]] /* vrNordic_g17.greaterEqualThreshold.threshold PARAM */), tmp1741, tmp1742, data->simulationInfo->storedRelations[485]);
    data->simulationInfo->relations[start_index] = tmp1740;
    current_index++;

    start_index = current_index;
    tmp1744 = 1.0;
    tmp1745 = 0.1;
    tmp1743 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */), -0.1, tmp1744, tmp1745, data->simulationInfo->storedRelations[486]);
    data->simulationInfo->relations[start_index] = tmp1743;
    current_index++;

    start_index = current_index;
    tmp1747 = 1.0;
    tmp1748 = 0.0;
    tmp1746 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */), 0.0, tmp1747, tmp1748, data->simulationInfo->storedRelations[487]);
    data->simulationInfo->relations[start_index] = tmp1746;
    current_index++;

    start_index = current_index;
    tmp1750 = 1.0;
    tmp1751 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5447]] /* vrNordic_g17.limIntegrator.outMin PARAM */));
    tmp1749 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5447]] /* vrNordic_g17.limIntegrator.outMin PARAM */), tmp1750, tmp1751, data->simulationInfo->storedRelations[488]);
    data->simulationInfo->relations[start_index] = tmp1749;
    current_index++;

    start_index = current_index;
    tmp1753 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */))) * (1.0);
    tmp1754 = 0.0;
    tmp1752 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)), 0.0, tmp1753, tmp1754, data->simulationInfo->storedRelations[489]);
    data->simulationInfo->relations[start_index] = tmp1752;
    current_index++;

    start_index = current_index;
    tmp1756 = 1.0;
    tmp1757 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5446]] /* vrNordic_g17.limIntegrator.outMax PARAM */));
    tmp1755 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5446]] /* vrNordic_g17.limIntegrator.outMax PARAM */), tmp1756, tmp1757, data->simulationInfo->storedRelations[490]);
    data->simulationInfo->relations[start_index] = tmp1755;
    current_index++;

    start_index = current_index;
    tmp1759 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */))) * (1.0);
    tmp1760 = 0.0;
    tmp1758 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)), 0.0, tmp1759, tmp1760, data->simulationInfo->storedRelations[491]);
    data->simulationInfo->relations[start_index] = tmp1758;
    current_index++;

    start_index = current_index;
    tmp1762 = 1.0;
    tmp1763 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5461]] /* vrNordic_g17.timer.outMin PARAM */));
    tmp1761 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5461]] /* vrNordic_g17.timer.outMin PARAM */), tmp1762, tmp1763, data->simulationInfo->storedRelations[492]);
    data->simulationInfo->relations[start_index] = tmp1761;
    current_index++;

    start_index = current_index;
    tmp1765 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */))) * (1.0);
    tmp1766 = 0.0;
    tmp1764 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)), 0.0, tmp1765, tmp1766, data->simulationInfo->storedRelations[493]);
    data->simulationInfo->relations[start_index] = tmp1764;
    current_index++;

    start_index = current_index;
    tmp1768 = 1.0;
    tmp1769 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5460]] /* vrNordic_g17.timer.outMax PARAM */));
    tmp1767 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5460]] /* vrNordic_g17.timer.outMax PARAM */), tmp1768, tmp1769, data->simulationInfo->storedRelations[494]);
    data->simulationInfo->relations[start_index] = tmp1767;
    current_index++;

    start_index = current_index;
    tmp1771 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */))) * (1.0);
    tmp1772 = 0.0;
    tmp1770 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)), 0.0, tmp1771, tmp1772, data->simulationInfo->storedRelations[495]);
    data->simulationInfo->relations[start_index] = tmp1770;
    current_index++;

    start_index = current_index;
    tmp1774 = 1.0;
    tmp1775 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1773 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1774, tmp1775, data->simulationInfo->storedRelations[496]);
    data->simulationInfo->relations[start_index] = tmp1773;
    current_index++;

    start_index = current_index;
    tmp1777 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1778 = 0.0;
    tmp1776 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1777, tmp1778, data->simulationInfo->storedRelations[497]);
    data->simulationInfo->relations[start_index] = tmp1776;
    current_index++;

    start_index = current_index;
    tmp1780 = 1.0;
    tmp1781 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2856]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1779 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2856]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1780, tmp1781, data->simulationInfo->storedRelations[498]);
    data->simulationInfo->relations[start_index] = tmp1779;
    current_index++;

    start_index = current_index;
    tmp1783 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1784 = 0.0;
    tmp1782 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1783, tmp1784, data->simulationInfo->storedRelations[499]);
    data->simulationInfo->relations[start_index] = tmp1782;
    current_index++;

    start_index = current_index;
    tmp1786 = 1.0;
    tmp1787 = 1.0;
    tmp1785 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3876]] /* vrNordic_g18.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */), tmp1786, tmp1787, data->simulationInfo->storedRelations[500]);
    data->simulationInfo->relations[start_index] = tmp1785;
    current_index++;

    start_index = current_index;
    tmp1789 = 1.0;
    tmp1790 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5483]] /* vrNordic_g18.greaterEqualThreshold.threshold PARAM */));
    tmp1788 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5483]] /* vrNordic_g18.greaterEqualThreshold.threshold PARAM */), tmp1789, tmp1790, data->simulationInfo->storedRelations[501]);
    data->simulationInfo->relations[start_index] = tmp1788;
    current_index++;

    start_index = current_index;
    tmp1792 = 1.0;
    tmp1793 = 0.1;
    tmp1791 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */), -0.1, tmp1792, tmp1793, data->simulationInfo->storedRelations[502]);
    data->simulationInfo->relations[start_index] = tmp1791;
    current_index++;

    start_index = current_index;
    tmp1795 = 1.0;
    tmp1796 = 0.0;
    tmp1794 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */), 0.0, tmp1795, tmp1796, data->simulationInfo->storedRelations[503]);
    data->simulationInfo->relations[start_index] = tmp1794;
    current_index++;

    start_index = current_index;
    tmp1798 = 1.0;
    tmp1799 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5526]] /* vrNordic_g18.limIntegrator.outMin PARAM */));
    tmp1797 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5526]] /* vrNordic_g18.limIntegrator.outMin PARAM */), tmp1798, tmp1799, data->simulationInfo->storedRelations[504]);
    data->simulationInfo->relations[start_index] = tmp1797;
    current_index++;

    start_index = current_index;
    tmp1801 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */))) * (1.0);
    tmp1802 = 0.0;
    tmp1800 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)), 0.0, tmp1801, tmp1802, data->simulationInfo->storedRelations[505]);
    data->simulationInfo->relations[start_index] = tmp1800;
    current_index++;

    start_index = current_index;
    tmp1804 = 1.0;
    tmp1805 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5525]] /* vrNordic_g18.limIntegrator.outMax PARAM */));
    tmp1803 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5525]] /* vrNordic_g18.limIntegrator.outMax PARAM */), tmp1804, tmp1805, data->simulationInfo->storedRelations[506]);
    data->simulationInfo->relations[start_index] = tmp1803;
    current_index++;

    start_index = current_index;
    tmp1807 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */))) * (1.0);
    tmp1808 = 0.0;
    tmp1806 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)), 0.0, tmp1807, tmp1808, data->simulationInfo->storedRelations[507]);
    data->simulationInfo->relations[start_index] = tmp1806;
    current_index++;

    start_index = current_index;
    tmp1810 = 1.0;
    tmp1811 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5540]] /* vrNordic_g18.timer.outMin PARAM */));
    tmp1809 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5540]] /* vrNordic_g18.timer.outMin PARAM */), tmp1810, tmp1811, data->simulationInfo->storedRelations[508]);
    data->simulationInfo->relations[start_index] = tmp1809;
    current_index++;

    start_index = current_index;
    tmp1813 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */))) * (1.0);
    tmp1814 = 0.0;
    tmp1812 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)), 0.0, tmp1813, tmp1814, data->simulationInfo->storedRelations[509]);
    data->simulationInfo->relations[start_index] = tmp1812;
    current_index++;

    start_index = current_index;
    tmp1816 = 1.0;
    tmp1817 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5539]] /* vrNordic_g18.timer.outMax PARAM */));
    tmp1815 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5539]] /* vrNordic_g18.timer.outMax PARAM */), tmp1816, tmp1817, data->simulationInfo->storedRelations[510]);
    data->simulationInfo->relations[start_index] = tmp1815;
    current_index++;

    start_index = current_index;
    tmp1819 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */))) * (1.0);
    tmp1820 = 0.0;
    tmp1818 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)), 0.0, tmp1819, tmp1820, data->simulationInfo->storedRelations[511]);
    data->simulationInfo->relations[start_index] = tmp1818;
    current_index++;

    start_index = current_index;
    tmp1822 = 1.0;
    tmp1823 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1821 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1822, tmp1823, data->simulationInfo->storedRelations[512]);
    data->simulationInfo->relations[start_index] = tmp1821;
    current_index++;

    start_index = current_index;
    tmp1825 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1826 = 0.0;
    tmp1824 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1825, tmp1826, data->simulationInfo->storedRelations[513]);
    data->simulationInfo->relations[start_index] = tmp1824;
    current_index++;

    start_index = current_index;
    tmp1828 = 1.0;
    tmp1829 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1827 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1828, tmp1829, data->simulationInfo->storedRelations[514]);
    data->simulationInfo->relations[start_index] = tmp1827;
    current_index++;

    start_index = current_index;
    tmp1831 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1832 = 0.0;
    tmp1830 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1831, tmp1832, data->simulationInfo->storedRelations[515]);
    data->simulationInfo->relations[start_index] = tmp1830;
    current_index++;

    start_index = current_index;
    tmp1834 = 1.0;
    tmp1835 = 1.0;
    tmp1833 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vrNordic_g19.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */), tmp1834, tmp1835, data->simulationInfo->storedRelations[516]);
    data->simulationInfo->relations[start_index] = tmp1833;
    current_index++;

    start_index = current_index;
    tmp1837 = 1.0;
    tmp1838 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5562]] /* vrNordic_g19.greaterEqualThreshold.threshold PARAM */));
    tmp1836 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5562]] /* vrNordic_g19.greaterEqualThreshold.threshold PARAM */), tmp1837, tmp1838, data->simulationInfo->storedRelations[517]);
    data->simulationInfo->relations[start_index] = tmp1836;
    current_index++;

    start_index = current_index;
    tmp1840 = 1.0;
    tmp1841 = 0.1;
    tmp1839 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */), -0.1, tmp1840, tmp1841, data->simulationInfo->storedRelations[518]);
    data->simulationInfo->relations[start_index] = tmp1839;
    current_index++;

    start_index = current_index;
    tmp1843 = 1.0;
    tmp1844 = 0.0;
    tmp1842 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */), 0.0, tmp1843, tmp1844, data->simulationInfo->storedRelations[519]);
    data->simulationInfo->relations[start_index] = tmp1842;
    current_index++;

    start_index = current_index;
    tmp1846 = 1.0;
    tmp1847 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5605]] /* vrNordic_g19.limIntegrator.outMin PARAM */));
    tmp1845 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5605]] /* vrNordic_g19.limIntegrator.outMin PARAM */), tmp1846, tmp1847, data->simulationInfo->storedRelations[520]);
    data->simulationInfo->relations[start_index] = tmp1845;
    current_index++;

    start_index = current_index;
    tmp1849 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */))) * (1.0);
    tmp1850 = 0.0;
    tmp1848 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)), 0.0, tmp1849, tmp1850, data->simulationInfo->storedRelations[521]);
    data->simulationInfo->relations[start_index] = tmp1848;
    current_index++;

    start_index = current_index;
    tmp1852 = 1.0;
    tmp1853 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5604]] /* vrNordic_g19.limIntegrator.outMax PARAM */));
    tmp1851 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5604]] /* vrNordic_g19.limIntegrator.outMax PARAM */), tmp1852, tmp1853, data->simulationInfo->storedRelations[522]);
    data->simulationInfo->relations[start_index] = tmp1851;
    current_index++;

    start_index = current_index;
    tmp1855 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */))) * (1.0);
    tmp1856 = 0.0;
    tmp1854 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)), 0.0, tmp1855, tmp1856, data->simulationInfo->storedRelations[523]);
    data->simulationInfo->relations[start_index] = tmp1854;
    current_index++;

    start_index = current_index;
    tmp1858 = 1.0;
    tmp1859 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5619]] /* vrNordic_g19.timer.outMin PARAM */));
    tmp1857 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5619]] /* vrNordic_g19.timer.outMin PARAM */), tmp1858, tmp1859, data->simulationInfo->storedRelations[524]);
    data->simulationInfo->relations[start_index] = tmp1857;
    current_index++;

    start_index = current_index;
    tmp1861 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */))) * (1.0);
    tmp1862 = 0.0;
    tmp1860 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)), 0.0, tmp1861, tmp1862, data->simulationInfo->storedRelations[525]);
    data->simulationInfo->relations[start_index] = tmp1860;
    current_index++;

    start_index = current_index;
    tmp1864 = 1.0;
    tmp1865 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5618]] /* vrNordic_g19.timer.outMax PARAM */));
    tmp1863 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5618]] /* vrNordic_g19.timer.outMax PARAM */), tmp1864, tmp1865, data->simulationInfo->storedRelations[526]);
    data->simulationInfo->relations[start_index] = tmp1863;
    current_index++;

    start_index = current_index;
    tmp1867 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */))) * (1.0);
    tmp1868 = 0.0;
    tmp1866 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)), 0.0, tmp1867, tmp1868, data->simulationInfo->storedRelations[527]);
    data->simulationInfo->relations[start_index] = tmp1866;
    current_index++;

    start_index = current_index;
    tmp1870 = 1.0;
    tmp1871 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1869 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1870, tmp1871, data->simulationInfo->storedRelations[528]);
    data->simulationInfo->relations[start_index] = tmp1869;
    current_index++;

    start_index = current_index;
    tmp1873 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1874 = 0.0;
    tmp1872 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1873, tmp1874, data->simulationInfo->storedRelations[529]);
    data->simulationInfo->relations[start_index] = tmp1872;
    current_index++;

    start_index = current_index;
    tmp1876 = 1.0;
    tmp1877 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1875 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1876, tmp1877, data->simulationInfo->storedRelations[530]);
    data->simulationInfo->relations[start_index] = tmp1875;
    current_index++;

    start_index = current_index;
    tmp1879 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1880 = 0.0;
    tmp1878 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1879, tmp1880, data->simulationInfo->storedRelations[531]);
    data->simulationInfo->relations[start_index] = tmp1878;
    current_index++;

    start_index = current_index;
    tmp1882 = 1.0;
    tmp1883 = 1.0;
    tmp1881 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3924]] /* vrNordic_g20.switch.y variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */), tmp1882, tmp1883, data->simulationInfo->storedRelations[532]);
    data->simulationInfo->relations[start_index] = tmp1881;
    current_index++;

    start_index = current_index;
    tmp1885 = 1.0;
    tmp1886 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5641]] /* vrNordic_g20.greaterEqualThreshold.threshold PARAM */));
    tmp1884 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5641]] /* vrNordic_g20.greaterEqualThreshold.threshold PARAM */), tmp1885, tmp1886, data->simulationInfo->storedRelations[533]);
    data->simulationInfo->relations[start_index] = tmp1884;
    current_index++;

    start_index = current_index;
    tmp1888 = 1.0;
    tmp1889 = 0.1;
    tmp1887 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */), -0.1, tmp1888, tmp1889, data->simulationInfo->storedRelations[534]);
    data->simulationInfo->relations[start_index] = tmp1887;
    current_index++;

    start_index = current_index;
    tmp1891 = 1.0;
    tmp1892 = 0.0;
    tmp1890 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */), 0.0, tmp1891, tmp1892, data->simulationInfo->storedRelations[535]);
    data->simulationInfo->relations[start_index] = tmp1890;
    current_index++;

    start_index = current_index;
    tmp1894 = 1.0;
    tmp1895 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5684]] /* vrNordic_g20.limIntegrator.outMin PARAM */));
    tmp1893 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5684]] /* vrNordic_g20.limIntegrator.outMin PARAM */), tmp1894, tmp1895, data->simulationInfo->storedRelations[536]);
    data->simulationInfo->relations[start_index] = tmp1893;
    current_index++;

    start_index = current_index;
    tmp1897 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */))) * (1.0);
    tmp1898 = 0.0;
    tmp1896 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)), 0.0, tmp1897, tmp1898, data->simulationInfo->storedRelations[537]);
    data->simulationInfo->relations[start_index] = tmp1896;
    current_index++;

    start_index = current_index;
    tmp1900 = 1.0;
    tmp1901 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5683]] /* vrNordic_g20.limIntegrator.outMax PARAM */));
    tmp1899 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5683]] /* vrNordic_g20.limIntegrator.outMax PARAM */), tmp1900, tmp1901, data->simulationInfo->storedRelations[538]);
    data->simulationInfo->relations[start_index] = tmp1899;
    current_index++;

    start_index = current_index;
    tmp1903 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */))) * (1.0);
    tmp1904 = 0.0;
    tmp1902 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)), 0.0, tmp1903, tmp1904, data->simulationInfo->storedRelations[539]);
    data->simulationInfo->relations[start_index] = tmp1902;
    current_index++;

    start_index = current_index;
    tmp1906 = 1.0;
    tmp1907 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5698]] /* vrNordic_g20.timer.outMin PARAM */));
    tmp1905 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5698]] /* vrNordic_g20.timer.outMin PARAM */), tmp1906, tmp1907, data->simulationInfo->storedRelations[540]);
    data->simulationInfo->relations[start_index] = tmp1905;
    current_index++;

    start_index = current_index;
    tmp1909 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */))) * (1.0);
    tmp1910 = 0.0;
    tmp1908 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)), 0.0, tmp1909, tmp1910, data->simulationInfo->storedRelations[541]);
    data->simulationInfo->relations[start_index] = tmp1908;
    current_index++;

    start_index = current_index;
    tmp1912 = 1.0;
    tmp1913 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5697]] /* vrNordic_g20.timer.outMax PARAM */));
    tmp1911 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5697]] /* vrNordic_g20.timer.outMax PARAM */), tmp1912, tmp1913, data->simulationInfo->storedRelations[542]);
    data->simulationInfo->relations[start_index] = tmp1911;
    current_index++;

    start_index = current_index;
    tmp1915 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */))) * (1.0);
    tmp1916 = 0.0;
    tmp1914 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)), 0.0, tmp1915, tmp1916, data->simulationInfo->storedRelations[543]);
    data->simulationInfo->relations[start_index] = tmp1914;
    current_index++;

    start_index = current_index;
    tmp1918 = 1.0;
    tmp1919 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    tmp1917 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin PARAM */), tmp1918, tmp1919, data->simulationInfo->storedRelations[544]);
    data->simulationInfo->relations[start_index] = tmp1917;
    current_index++;

    start_index = current_index;
    tmp1921 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1922 = 0.0;
    tmp1920 = LessZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1921, tmp1922, data->simulationInfo->storedRelations[545]);
    data->simulationInfo->relations[start_index] = tmp1920;
    current_index++;

    start_index = current_index;
    tmp1924 = 1.0;
    tmp1925 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    tmp1923 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax PARAM */), tmp1924, tmp1925, data->simulationInfo->storedRelations[546]);
    data->simulationInfo->relations[start_index] = tmp1923;
    current_index++;

    start_index = current_index;
    tmp1927 = (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */))) * (1.0);
    tmp1928 = 0.0;
    tmp1926 = GreaterZC(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)), 0.0, tmp1927, tmp1928, data->simulationInfo->storedRelations[547]);
    data->simulationInfo->relations[start_index] = tmp1926;
    current_index++;

    start_index = current_index;
    tmp1930 = 1.0;
    tmp1931 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* disconnection.tEvent PARAM */));
    tmp1929 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* disconnection.tEvent PARAM */), tmp1930, tmp1931, data->simulationInfo->storedRelations[548]);
    data->simulationInfo->relations[start_index] = tmp1929;
    current_index++;

    start_index = current_index;
    tmp1933 = 1.0;
    tmp1934 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* nodeFault.tEnd PARAM */));
    tmp1932 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* nodeFault.tEnd PARAM */), tmp1933, tmp1934, data->simulationInfo->storedRelations[549]);
    data->simulationInfo->relations[start_index] = tmp1932;
    current_index++;

    start_index = current_index;
    tmp1936 = 1.0;
    tmp1937 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3569]] /* nodeFault.tBegin PARAM */));
    tmp1935 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3569]] /* nodeFault.tBegin PARAM */), tmp1936, tmp1937, data->simulationInfo->storedRelations[550]);
    data->simulationInfo->relations[start_index] = tmp1935;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* load_01.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* load_01.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2785]] /* load_02.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* load_02.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2792]] /* load_03.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2791]] /* load_03.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* load_04.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* load_04.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* load_05.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* load_05.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2813]] /* load_11.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2812]] /* load_11.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2820]] /* load_12.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2819]] /* load_12.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2827]] /* load_13.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2826]] /* load_13.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* load_22.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* load_22.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* load_31.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* load_31.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* load_32.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* load_32.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2855]] /* load_41.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2854]] /* load_41.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2862]] /* load_42.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2861]] /* load_42.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2869]] /* load_43.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2868]] /* load_43.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* load_47.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* load_47.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* load_46.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* load_46.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* load_51.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* load_51.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2897]] /* load_61.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2896]] /* load_61.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2904]] /* load_62.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2903]] /* load_62.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2911]] /* load_63.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2910]] /* load_63.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* load_71.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* load_71.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* load_72.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* load_72.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* g01.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* g01.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* g02.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* g02.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* g03.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* g03.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* g04.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* g04.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* g05.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* g05.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* g06.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* g06.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* g07.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* g07.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* g08.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* g08.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1417]] /* g09.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1416]] /* g09.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* g10.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* g10.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1509]] /* g11.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1508]] /* g11.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1555]] /* g12.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1554]] /* g12.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1601]] /* g13.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1600]] /* g13.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* g14.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* g14.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1693]] /* g15.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1692]] /* g15.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* g16.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* g16.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* g17.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* g17.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* g18.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* g18.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1877]] /* g19.terminal.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1876]] /* g19.terminal.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3379]] /* trafo_g20_4072.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* trafo_g20_4072.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* line_1011_1013a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* line_1011_1013a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2315]] /* line_1012_1014a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2314]] /* line_1012_1014a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2333]] /* line_1013_1014a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2332]] /* line_1013_1014a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2337]] /* line_1013_1014a.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2336]] /* line_1013_1014a.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2361]] /* line_1021_1022b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2360]] /* line_1021_1022b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2373]] /* line_1041_1043a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2372]] /* line_1041_1043a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2423]] /* line_1042_1045.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2422]] /* line_1042_1045.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2463]] /* line_2031_2032b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2462]] /* line_2031_2032b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2467]] /* line_2031_2032b.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2466]] /* line_2031_2032b.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* line_4011_4071.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* line_4011_4071.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* line_4012_4022.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* line_4012_4022.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2527]] /* line_4021_4032.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2526]] /* line_4021_4032.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2553]] /* line_4022_4031b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2552]] /* line_4022_4031b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2579]] /* line_4031_4041b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2578]] /* line_4031_4041b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2597]] /* line_4032_4044.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2596]] /* line_4032_4044.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* line_4042_4043.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2624]] /* line_4042_4043.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2669]] /* line_4044_4045a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2668]] /* line_4044_4045a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* line_4045_4051b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* line_4045_4051b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* line_4046_4047.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* line_4046_4047.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2727]] /* line_4061_4062.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2726]] /* line_4061_4062.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* line_4062_4063b.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* line_4062_4063b.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* line_4062_4063b.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* line_4062_4063b.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* line_4071_4072a.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* line_4071_4072a.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2365]] /* line_1021_1022b.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2364]] /* line_1021_1022b.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* line_1043_1044a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2434]] /* line_1043_1044a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2439]] /* line_1043_1044a.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2438]] /* line_1043_1044a.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2427]] /* line_1042_1045.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2426]] /* line_1042_1045.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2615]] /* line_4041_4061.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2614]] /* line_4041_4061.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2651]] /* line_4043_4046.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2650]] /* line_4043_4046.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* line_4046_4047.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* line_4046_4047.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* line_4045_4051b.terminal2.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* line_4045_4051b.terminal2.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* line_4071_4072a.terminal1.V.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* line_4071_4072a.terminal1.V.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* g01.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* g01.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* g01.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* g01.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* g02.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* g02.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* g02.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* g02.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* g03.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* g03.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* g03.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* g03.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* g04.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* g04.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* g04.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* g04.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* g05.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* g05.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* g05.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* g05.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* g06.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* g06.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* g06.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* g06.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* g07.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* g07.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1309]] /* g07.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* g07.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* g08.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* g08.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* g08.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* g08.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1424]] /* g09.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1423]] /* g09.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* g09.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* g09.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* g10.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* g10.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* g10.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* g10.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* g11.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* g11.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1493]] /* g11.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1492]] /* g11.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* g12.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* g12.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* g12.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* g12.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1608]] /* g13.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1607]] /* g13.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1585]] /* g13.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1584]] /* g13.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* g14.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* g14.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1631]] /* g14.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1630]] /* g14.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1700]] /* g15.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1699]] /* g15.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* g15.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* g15.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* g16.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* g16.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1723]] /* g16.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* g16.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* g17.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* g17.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* g17.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* g17.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* g18.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* g18.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* g18.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1814]] /* g18.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* g19.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* g19.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1861]] /* g19.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1860]] /* g19.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1928]] /* g20.uStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1927]] /* g20.uStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* g20.iStatorPu.re variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* g20.iStatorPu.im variable */) == 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3468]] /* vrNordic_g01.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* vrNordic_g01.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4140]] /* vrNordic_g01.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* vrNordic_g01.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4183]] /* vrNordic_g01.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* vrNordic_g01.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4182]] /* vrNordic_g01.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4181]] /* vrNordic_g01.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3454]] /* vrNordic_g01.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4197]] /* vrNordic_g01.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* vrNordic_g01.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4196]] /* vrNordic_g01.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4195]] /* vrNordic_g01.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3467]] /* vrNordic_g01.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* goverNordic_g01.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* goverNordic_g01.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3492]] /* vrNordic_g02.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3472]] /* vrNordic_g02.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4219]] /* vrNordic_g02.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3473]] /* vrNordic_g02.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4262]] /* vrNordic_g02.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* vrNordic_g02.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4261]] /* vrNordic_g02.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4260]] /* vrNordic_g02.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3478]] /* vrNordic_g02.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4276]] /* vrNordic_g02.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* vrNordic_g02.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4275]] /* vrNordic_g02.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4274]] /* vrNordic_g02.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3491]] /* vrNordic_g02.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2317]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2316]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* goverNordic_g02.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1965]] /* goverNordic_g02.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3516]] /* vrNordic_g03.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3496]] /* vrNordic_g03.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4298]] /* vrNordic_g03.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* vrNordic_g03.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4341]] /* vrNordic_g03.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* vrNordic_g03.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4340]] /* vrNordic_g03.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4339]] /* vrNordic_g03.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* vrNordic_g03.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4355]] /* vrNordic_g03.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* vrNordic_g03.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4354]] /* vrNordic_g03.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4353]] /* vrNordic_g03.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3515]] /* vrNordic_g03.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2352]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* goverNordic_g03.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1983]] /* goverNordic_g03.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* vrNordic_g04.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3520]] /* vrNordic_g04.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4377]] /* vrNordic_g04.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3521]] /* vrNordic_g04.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4420]] /* vrNordic_g04.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* vrNordic_g04.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4419]] /* vrNordic_g04.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4418]] /* vrNordic_g04.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3526]] /* vrNordic_g04.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4434]] /* vrNordic_g04.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* vrNordic_g04.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4433]] /* vrNordic_g04.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4432]] /* vrNordic_g04.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* vrNordic_g04.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* goverNordic_g04.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2001]] /* goverNordic_g04.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3564]] /* vrNordic_g05.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3544]] /* vrNordic_g05.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4456]] /* vrNordic_g05.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3545]] /* vrNordic_g05.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4499]] /* vrNordic_g05.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* vrNordic_g05.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4498]] /* vrNordic_g05.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4497]] /* vrNordic_g05.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3550]] /* vrNordic_g05.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4513]] /* vrNordic_g05.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* vrNordic_g05.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4512]] /* vrNordic_g05.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4511]] /* vrNordic_g05.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3563]] /* vrNordic_g05.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* goverNordic_g05.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2019]] /* goverNordic_g05.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3588]] /* vrNordic_g06.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* vrNordic_g06.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4535]] /* vrNordic_g06.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* vrNordic_g06.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4578]] /* vrNordic_g06.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* vrNordic_g06.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4577]] /* vrNordic_g06.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4576]] /* vrNordic_g06.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3574]] /* vrNordic_g06.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4592]] /* vrNordic_g06.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* vrNordic_g06.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4591]] /* vrNordic_g06.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4590]] /* vrNordic_g06.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3587]] /* vrNordic_g06.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2461]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2460]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* goverNordic_g06.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* goverNordic_g06.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3612]] /* vrNordic_g07.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3592]] /* vrNordic_g07.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4614]] /* vrNordic_g07.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3593]] /* vrNordic_g07.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4657]] /* vrNordic_g07.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* vrNordic_g07.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4656]] /* vrNordic_g07.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4655]] /* vrNordic_g07.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3598]] /* vrNordic_g07.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4671]] /* vrNordic_g07.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* vrNordic_g07.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4670]] /* vrNordic_g07.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4669]] /* vrNordic_g07.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* vrNordic_g07.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2497]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* goverNordic_g07.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2055]] /* goverNordic_g07.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* vrNordic_g08.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3616]] /* vrNordic_g08.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4693]] /* vrNordic_g08.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3617]] /* vrNordic_g08.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4736]] /* vrNordic_g08.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* vrNordic_g08.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4735]] /* vrNordic_g08.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4734]] /* vrNordic_g08.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3622]] /* vrNordic_g08.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4750]] /* vrNordic_g08.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* vrNordic_g08.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4749]] /* vrNordic_g08.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4748]] /* vrNordic_g08.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* vrNordic_g08.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* goverNordic_g08.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2073]] /* goverNordic_g08.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3660]] /* vrNordic_g09.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* vrNordic_g09.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4772]] /* vrNordic_g09.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* vrNordic_g09.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4815]] /* vrNordic_g09.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* vrNordic_g09.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4814]] /* vrNordic_g09.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4813]] /* vrNordic_g09.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* vrNordic_g09.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4829]] /* vrNordic_g09.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* vrNordic_g09.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4828]] /* vrNordic_g09.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4827]] /* vrNordic_g09.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* vrNordic_g09.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* goverNordic_g09.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2091]] /* goverNordic_g09.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* vrNordic_g10.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* vrNordic_g10.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4851]] /* vrNordic_g10.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* vrNordic_g10.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4894]] /* vrNordic_g10.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* vrNordic_g10.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4893]] /* vrNordic_g10.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4892]] /* vrNordic_g10.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* vrNordic_g10.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4908]] /* vrNordic_g10.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* vrNordic_g10.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4907]] /* vrNordic_g10.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4906]] /* vrNordic_g10.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3683]] /* vrNordic_g10.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2604]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* goverNordic_g10.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* goverNordic_g10.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3708]] /* vrNordic_g11.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3688]] /* vrNordic_g11.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4930]] /* vrNordic_g11.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3689]] /* vrNordic_g11.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4973]] /* vrNordic_g11.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* vrNordic_g11.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4972]] /* vrNordic_g11.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4971]] /* vrNordic_g11.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* vrNordic_g11.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4987]] /* vrNordic_g11.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* vrNordic_g11.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4986]] /* vrNordic_g11.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4985]] /* vrNordic_g11.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* vrNordic_g11.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* goverNordic_g11.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2127]] /* goverNordic_g11.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3732]] /* vrNordic_g12.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3712]] /* vrNordic_g12.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5009]] /* vrNordic_g12.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3713]] /* vrNordic_g12.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5052]] /* vrNordic_g12.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* vrNordic_g12.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5051]] /* vrNordic_g12.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5050]] /* vrNordic_g12.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3718]] /* vrNordic_g12.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5066]] /* vrNordic_g12.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* vrNordic_g12.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5065]] /* vrNordic_g12.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5064]] /* vrNordic_g12.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3731]] /* vrNordic_g12.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* goverNordic_g12.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2145]] /* goverNordic_g12.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3756]] /* vrNordic_g13.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* vrNordic_g13.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5088]] /* vrNordic_g13.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3737]] /* vrNordic_g13.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5131]] /* vrNordic_g13.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* vrNordic_g13.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5130]] /* vrNordic_g13.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5129]] /* vrNordic_g13.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3742]] /* vrNordic_g13.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5145]] /* vrNordic_g13.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* vrNordic_g13.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5144]] /* vrNordic_g13.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5143]] /* vrNordic_g13.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3755]] /* vrNordic_g13.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* goverNordic_g13.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2163]] /* goverNordic_g13.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3780]] /* vrNordic_g14.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3760]] /* vrNordic_g14.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5167]] /* vrNordic_g14.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3761]] /* vrNordic_g14.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5210]] /* vrNordic_g14.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* vrNordic_g14.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5209]] /* vrNordic_g14.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5208]] /* vrNordic_g14.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* vrNordic_g14.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5224]] /* vrNordic_g14.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* vrNordic_g14.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5223]] /* vrNordic_g14.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5222]] /* vrNordic_g14.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3779]] /* vrNordic_g14.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* goverNordic_g14.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* goverNordic_g14.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3804]] /* vrNordic_g15.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3784]] /* vrNordic_g15.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5246]] /* vrNordic_g15.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3785]] /* vrNordic_g15.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5289]] /* vrNordic_g15.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* vrNordic_g15.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5288]] /* vrNordic_g15.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5287]] /* vrNordic_g15.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3790]] /* vrNordic_g15.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5303]] /* vrNordic_g15.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* vrNordic_g15.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5302]] /* vrNordic_g15.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5301]] /* vrNordic_g15.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* vrNordic_g15.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* goverNordic_g15.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2199]] /* goverNordic_g15.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3828]] /* vrNordic_g16.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* vrNordic_g16.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5325]] /* vrNordic_g16.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* vrNordic_g16.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5368]] /* vrNordic_g16.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* vrNordic_g16.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5367]] /* vrNordic_g16.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5366]] /* vrNordic_g16.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3814]] /* vrNordic_g16.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5382]] /* vrNordic_g16.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* vrNordic_g16.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5381]] /* vrNordic_g16.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5380]] /* vrNordic_g16.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3827]] /* vrNordic_g16.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* goverNordic_g16.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2217]] /* goverNordic_g16.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* vrNordic_g17.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* vrNordic_g17.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5404]] /* vrNordic_g17.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* vrNordic_g17.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5447]] /* vrNordic_g17.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* vrNordic_g17.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5446]] /* vrNordic_g17.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5445]] /* vrNordic_g17.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* vrNordic_g17.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5461]] /* vrNordic_g17.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* vrNordic_g17.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5460]] /* vrNordic_g17.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5459]] /* vrNordic_g17.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* vrNordic_g17.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2856]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* goverNordic_g17.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2235]] /* goverNordic_g17.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3876]] /* vrNordic_g18.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3856]] /* vrNordic_g18.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5483]] /* vrNordic_g18.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3857]] /* vrNordic_g18.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5526]] /* vrNordic_g18.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* vrNordic_g18.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5525]] /* vrNordic_g18.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5524]] /* vrNordic_g18.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3862]] /* vrNordic_g18.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5540]] /* vrNordic_g18.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* vrNordic_g18.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5539]] /* vrNordic_g18.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5538]] /* vrNordic_g18.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3875]] /* vrNordic_g18.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2891]] /* goverNordic_g18.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* goverNordic_g18.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* vrNordic_g19.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* vrNordic_g19.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5562]] /* vrNordic_g19.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* vrNordic_g19.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5605]] /* vrNordic_g19.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* vrNordic_g19.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5604]] /* vrNordic_g19.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5603]] /* vrNordic_g19.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3886]] /* vrNordic_g19.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5619]] /* vrNordic_g19.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* vrNordic_g19.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5618]] /* vrNordic_g19.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5617]] /* vrNordic_g19.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* vrNordic_g19.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* goverNordic_g19.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* goverNordic_g19.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3924]] /* vrNordic_g20.switch.y variable */) < (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3904]] /* vrNordic_g20.add.y variable */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5641]] /* vrNordic_g20.greaterEqualThreshold.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */) < -0.1);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3905]] /* vrNordic_g20.dIf.y variable */) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5684]] /* vrNordic_g20.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* vrNordic_g20.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5683]] /* vrNordic_g20.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5682]] /* vrNordic_g20.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3910]] /* vrNordic_g20.gain.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5698]] /* vrNordic_g20.timer.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* vrNordic_g20.timer.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5697]] /* vrNordic_g20.timer.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5696]] /* vrNordic_g20.timer.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3923]] /* vrNordic_g20.overExcitationLimitation.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMin PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)) < 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.y STATE(1) */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.outMax PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* goverNordic_g20.limRateLimFirstOrder.limIntegrator.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* goverNordic_g20.limRateLimFirstOrder.limiter.y variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* disconnection.tEvent PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* nodeFault.tEnd PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3569]] /* nodeFault.tBegin PARAM */));
    current_index++;
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
