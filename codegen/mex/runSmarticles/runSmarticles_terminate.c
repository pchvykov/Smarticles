/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runSmarticles_terminate.c
 *
 * Code generation for function 'runSmarticles_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "runSmarticles_terminate.h"
#include "_coder_runSmarticles_mex.h"
#include "runSmarticles_data.h"

/* Function Definitions */
void runSmarticles_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void runSmarticles_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (runSmarticles_terminate.c) */