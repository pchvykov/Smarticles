/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lineSegmentIntersect_initialize.c
 *
 * Code generation for function 'lineSegmentIntersect_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "lineSegmentIntersect.h"
#include "lineSegmentIntersect_initialize.h"
#include "_coder_lineSegmentIntersect_mex.h"
#include "lineSegmentIntersect_data.h"

/* Function Definitions */
void lineSegmentIntersect_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (lineSegmentIntersect_initialize.c) */
