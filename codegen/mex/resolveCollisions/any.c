/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "any.h"
#include "eml_int_forloop_overflow_check.h"
#include "resolveCollisions_data.h"

/* Variable Definitions */
static emlrtRSInfo ub_emlrtRSI = { 12, /* lineNo */
  "any",                               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/any.m"/* pathName */
};

static emlrtRTEInfo l_emlrtRTEI = { 42,/* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pName */
};

/* Function Definitions */
void any(const emlrtStack *sp, const boolean_T x[9], boolean_T y[3])
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
  st.site = &ub_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i2 = 0; i2 < 3; i2++) {
    y[i2] = false;
  }

  i2 = 0;
  iy = -1;
  for (i = 0; i < 3; i++) {
    i1 = i2 + 1;
    i2 += 3;
    iy++;
    b_st.site = &vb_emlrtRSI;
    if ((!(i1 > i2)) && (i2 > 2147483646)) {
      c_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    exitg1 = false;
    while ((!exitg1) && (i1 <= i2)) {
      if (x[i1 - 1]) {
        y[iy] = true;
        exitg1 = true;
      } else {
        i1++;
      }
    }
  }
}

boolean_T b_any(const boolean_T x[3])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (x[k]) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

void c_any(const emlrtStack *sp, const real_T x[9], boolean_T y[3])
{
  int32_T i2;
  int32_T iy;
  int32_T i;
  int32_T i1;
  boolean_T exitg1;
  boolean_T b0;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ub_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i2 = 0; i2 < 3; i2++) {
    y[i2] = false;
  }

  i2 = 0;
  iy = -1;
  for (i = 0; i < 3; i++) {
    i1 = i2;
    i2 += 3;
    iy++;
    b_st.site = &vb_emlrtRSI;
    if ((!(i1 + 1 > i2)) && (i2 > 2147483646)) {
      c_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    exitg1 = false;
    while ((!exitg1) && (i1 + 1 <= i2)) {
      if ((x[i1] == 0.0) || muDoubleScalarIsNaN(x[i1])) {
        b0 = true;
      } else {
        b0 = false;
      }

      if (!b0) {
        y[iy] = true;
        exitg1 = true;
      } else {
        i1++;
      }
    }
  }
}

boolean_T d_any(const emlrtStack *sp, const real_T x_data[], const int32_T
                x_size[2])
{
  boolean_T y;
  boolean_T b1;
  int32_T ix;
  boolean_T exitg1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ub_emlrtRSI;
  if ((x_size[1] == 1) || (x_size[1] != 1)) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (!b1) {
    emlrtErrorWithMessageIdR2012b(&st, &l_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }

  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x_size[1])) {
    if ((x_data[ix] == 0.0) || muDoubleScalarIsNaN(x_data[ix])) {
      b1 = true;
    } else {
      b1 = false;
    }

    if (!b1) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

boolean_T e_any(const emlrtStack *sp, const real_T x_data[], const int32_T
                x_size[1])
{
  boolean_T y;
  boolean_T b2;
  int32_T ix;
  boolean_T exitg1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ub_emlrtRSI;
  if ((x_size[0] == 1) || (x_size[0] != 1)) {
    b2 = true;
  } else {
    b2 = false;
  }

  if (!b2) {
    emlrtErrorWithMessageIdR2012b(&st, &l_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }

  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x_size[0])) {
    if ((x_data[ix] == 0.0) || muDoubleScalarIsNaN(x_data[ix])) {
      b2 = true;
    } else {
      b2 = false;
    }

    if (!b2) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

boolean_T f_any(const real_T x[9])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  boolean_T b6;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 9)) {
    if ((x[k] == 0.0) || muDoubleScalarIsNaN(x[k])) {
      b6 = true;
    } else {
      b6 = false;
    }

    if (!b6) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

/* End of code generation (any.c) */
