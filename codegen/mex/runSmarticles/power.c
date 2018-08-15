/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "power.h"
#include "error.h"
#include "scalexpAlloc.h"
#include "runSmarticles_data.h"

/* Variable Definitions */
static emlrtRSInfo cb_emlrtRSI = { 58, /* lineNo */
  "power",                             /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 73, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"/* pathName */
};

/* Function Declarations */
static boolean_T b_fltpower_domain_error(const real_T a_data[], const int32_T
  a_size[1], real_T b);
static boolean_T fltpower_domain_error(void);

/* Function Definitions */
static boolean_T b_fltpower_domain_error(const real_T a_data[], const int32_T
  a_size[1], real_T b)
{
  boolean_T p;
  boolean_T b2;
  int32_T k;
  p = false;
  if (a_size[0] == 1) {
    if (a_data[0] < 0.0) {
      if (muDoubleScalarIsNaN(b) || (muDoubleScalarFloor(b) == b)) {
        b2 = true;
      } else {
        b2 = false;
      }

      p = !b2;
    }
  } else {
    if (muDoubleScalarIsNaN(b) || (muDoubleScalarFloor(b) == b)) {
      b2 = true;
    } else {
      b2 = false;
    }

    if (!b2) {
      for (k = 0; k < a_size[0]; k++) {
        if (p || (a_data[k] < 0.0)) {
          p = true;
        } else {
          p = false;
        }
      }
    }
  }

  return p;
}

static boolean_T fltpower_domain_error(void)
{
  return false;
}

void b_power(const emlrtStack *sp, const real_T a_data[], const int32_T a_size[1],
             real_T y_data[], int32_T y_size[1])
{
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  y_size[0] = (int16_T)a_size[0];
  if (!b_dimagree(y_size, a_size)) {
    emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  for (k = 0; k + 1 <= a_size[0]; k++) {
    y_data[k] = a_data[k] * a_data[k];
  }

  if (b_fltpower_domain_error(a_data, a_size, 2.0)) {
    b_st.site = &db_emlrtRSI;
    b_error(&b_st);
  }
}

void c_power(const emlrtStack *sp, const real_T a_data[], const int32_T a_size[1],
             real_T b, real_T y_data[], int32_T y_size[1])
{
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  y_size[0] = (int16_T)a_size[0];
  if (!b_dimagree(y_size, a_size)) {
    emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  for (k = 0; k + 1 <= a_size[0]; k++) {
    y_data[k] = muDoubleScalarPower(a_data[k], b);
  }

  if (b_fltpower_domain_error(a_data, a_size, b)) {
    b_st.site = &db_emlrtRSI;
    b_error(&b_st);
  }
}

void power(const emlrtStack *sp, const real_T a_data[], const int32_T a_size[2],
           real_T y_data[], int32_T y_size[2])
{
  int32_T n;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  y_size[0] = (int16_T)a_size[0];
  y_size[1] = 2;
  if (!dimagree(y_size, a_size)) {
    emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  n = a_size[0] << 1;
  for (k = 0; k + 1 <= n; k++) {
    y_data[k] = a_data[k] * a_data[k];
  }

  if (fltpower_domain_error()) {
    b_st.site = &db_emlrtRSI;
    b_error(&b_st);
  }
}

/* End of code generation (power.c) */
