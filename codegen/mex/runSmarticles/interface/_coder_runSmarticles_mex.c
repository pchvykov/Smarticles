/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_runSmarticles_mex.c
 *
 * Code generation for function '_coder_runSmarticles_mex'
 *
 */

/* Include files */
#include "runSmarticles.h"
#include "_coder_runSmarticles_mex.h"
#include "runSmarticles_terminate.h"
#include "_coder_runSmarticles_api.h"
#include "runSmarticles_initialize.h"
#include "runSmarticles_data.h"

/* Function Declarations */
static void runSmarticles_mexFunction(runSmarticlesStackData *SD, int32_T nlhs,
  mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[6]);

/* Function Definitions */
static void runSmarticles_mexFunction(runSmarticlesStackData *SD, int32_T nlhs,
  mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[6])
{
  int32_T n;
  const mxArray *inputs[6];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        13, "runSmarticles");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "runSmarticles");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  runSmarticles_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  runSmarticles_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  runSmarticlesStackData *runSmarticlesStackDataGlobal = NULL;
  runSmarticlesStackDataGlobal = (runSmarticlesStackData *)mxCalloc(1, 1U *
    sizeof(runSmarticlesStackData));
  mexAtExit(runSmarticles_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  runSmarticles_initialize();

  /* Dispatch the entry-point. */
  runSmarticles_mexFunction(runSmarticlesStackDataGlobal, nlhs, plhs, nrhs, prhs);
  mxFree(runSmarticlesStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_runSmarticles_mex.c) */
