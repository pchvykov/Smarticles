/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * all.c
 *
 * Code generation for function 'all'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "pairCollision.h"
#include "all.h"
#include "eml_int_forloop_overflow_check.h"

/* Variable Definitions */
static emlrtRSInfo l_emlrtRSI = { 12,  /* lineNo */
  "all",                               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/all.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 124, /* lineNo */
  "allOrAny",                          /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 21,  /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

/* Function Definitions */
void all(const emlrtStack *sp, const boolean_T x[9], boolean_T y[3])
{
  int32_T i2;
  int32_T iy;
  int32_T i;
  int32_T i1;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &l_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i2 = 0; i2 < 3; i2++) {
    y[i2] = true;
  }

  i2 = 0;
  iy = -1;
  for (i = 0; i < 3; i++) {
    i1 = i2 + 1;
    i2 += 3;
    iy++;
    b_st.site = &m_emlrtRSI;
    if ((!(i1 > i2)) && (i2 > 2147483646)) {
      c_st.site = &n_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    exitg1 = false;
    while ((!exitg1) && (i1 <= i2)) {
      if (!x[i1 - 1]) {
        y[iy] = false;
        exitg1 = true;
      } else {
        i1++;
      }
    }
  }
}

/* End of code generation (all.c) */
