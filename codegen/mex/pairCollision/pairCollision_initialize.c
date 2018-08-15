/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pairCollision_initialize.c
 *
 * Code generation for function 'pairCollision_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "pairCollision.h"
#include "pairCollision_initialize.h"
#include "_coder_pairCollision_mex.h"
#include "pairCollision_data.h"

/* Named Constants */
#define b_A                            (1.1)
#define b_B                            (1.0)
#define b_tRes                         (0.03)

/* Function Declarations */
static void pairCollision_once(void);

/* Function Definitions */
static void pairCollision_once(void)
{
  tRes_dirty = 0U;
  B_dirty = 0U;
  A_dirty = 0U;
  tRes = b_tRes;
  B = b_B;
  A = b_A;
}

void pairCollision_initialize(void)
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
    pairCollision_once();
  }
}

/* End of code generation (pairCollision_initialize.c) */
