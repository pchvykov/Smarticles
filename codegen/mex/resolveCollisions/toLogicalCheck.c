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
#include "resolveCollisions.h"
#include "toLogicalCheck.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo fc_emlrtRSI = { 12, /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pathName */
};

/* Function Definitions */
void b_toLogicalCheck(const emlrtStack *sp, const real_T x[6])
{
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 6; k++) {
    if (muDoubleScalarIsNaN(x[k])) {
      st.site = &fc_emlrtRSI;
      b_error(&st);
    }
  }
}

void toLogicalCheck(const emlrtStack *sp, real_T x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (muDoubleScalarIsNaN(x)) {
    st.site = &fc_emlrtRSI;
    b_error(&st);
  }
}

/* End of code generation (toLogicalCheck.c) */
