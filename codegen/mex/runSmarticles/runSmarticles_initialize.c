/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runSmarticles_initialize.c
 *
 * Code generation for function 'runSmarticles_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "runSmarticles_initialize.h"
#include "_coder_runSmarticles_mex.h"
#include "runSmarticles_data.h"

/* Named Constants */
#define b_tRes                         (0.03)
#define b_A                            (1.1)
#define b_B                            (1.0)

/* Function Declarations */
static void runSmarticles_once(void);

/* Function Definitions */
static void runSmarticles_once(void)
{
  B = b_B;
  B_dirty = 1U;
  A = b_A;
  A_dirty = 1U;
  tRes = b_tRes;
  tRes_dirty = 1U;
}

void runSmarticles_initialize(void)
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
    runSmarticles_once();
  }
}

/* End of code generation (runSmarticles_initialize.c) */
