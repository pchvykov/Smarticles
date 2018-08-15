/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * toLogicalCheck.c
 *
 * Code generation for function 'toLogicalCheck'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "toLogicalCheck.h"
#include "error.h"
#include "runSmarticles_data.h"

/* Function Definitions */
void toLogicalCheck(const emlrtStack *sp, const real_T x[6])
{
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 6; k++) {
    if (muDoubleScalarIsNaN(x[k])) {
      st.site = &u_emlrtRSI;
      error(&st);
    }
  }
}

/* End of code generation (toLogicalCheck.c) */
