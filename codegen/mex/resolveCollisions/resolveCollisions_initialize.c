/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * resolveCollisions_initialize.c
 *
 * Code generation for function 'resolveCollisions_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "resolveCollisions_initialize.h"
#include "_coder_resolveCollisions_mex.h"
#include "resolveCollisions_data.h"

/* Named Constants */
#define b_A                            (1.0)
#define b_B                            (1.0)
#define b_tRes                         (0.03)

/* Function Declarations */
static void resolveCollisions_once(void);

/* Function Definitions */
static void resolveCollisions_once(void)
{
  tRes = b_tRes;
  tRes_dirty = 1U;
  B = b_B;
  B_dirty = 1U;
  A = b_A;
  A_dirty = 1U;
}

void resolveCollisions_initialize(void)
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
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    resolveCollisions_once();
  }
}

/* End of code generation (resolveCollisions_initialize.c) */
