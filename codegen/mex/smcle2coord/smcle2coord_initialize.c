/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * smcle2coord_initialize.c
 *
 * Code generation for function 'smcle2coord_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "smcle2coord.h"
#include "smcle2coord_initialize.h"
#include "_coder_smcle2coord_mex.h"
#include "smcle2coord_data.h"

/* Named Constants */
#define b_B                            (1.0)
#define b_A                            (1.0)

/* Function Declarations */
static void smcle2coord_once(void);

/* Function Definitions */
static void smcle2coord_once(void)
{
  A_dirty = 0U;
  B_dirty = 0U;
  A = b_A;
  B = b_B;
}

void smcle2coord_initialize(void)
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
    smcle2coord_once();
  }
}

/* End of code generation (smcle2coord_initialize.c) */
