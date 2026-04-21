/* Linearization */
#include "MyNordic_initialized.TestCase_initialized_model.h"
#include "MyNordic_initialized.TestCase_initialized_16dae.h"
#if defined(__cplusplus)
extern "C" {
#endif

const char *MyNordic_initialized_TestCase_initialized_linear_model_frame()
{
  errorStreamPrint(OMC_LOG_STDOUT, 0, "Linearization disabled. Use compiler flag `--linearizationDumpLanguage` to change target language.");
  return "";
}
const char *MyNordic_initialized_TestCase_initialized_linear_model_datarecovery_frame()
{
  errorStreamPrint(OMC_LOG_STDOUT, 0, "Linearization disabled. Use compiler flag `--linearizationDumpLanguage` to change target language.");
  return "";
}

#if defined(__cplusplus)
}
#endif
