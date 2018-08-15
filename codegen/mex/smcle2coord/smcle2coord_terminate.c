/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * smcle2coord_terminate.c
 *
 * Code generation for function 'smcle2coord_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "smcle2coord.h"
#include "smcle2coord_terminate.h"
#include "_coder_smcle2coord_mex.h"
#include "smcle2coord_data.h"

/* Function Definitions */
void smcle2coord_atexit(void)
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

void smcle2coord_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (smcle2coord_terminate.c) */
