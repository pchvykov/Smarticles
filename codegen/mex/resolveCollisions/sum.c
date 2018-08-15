/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "sum.h"

/* Variable Definitions */
static emlrtRSInfo gc_emlrtRSI = { 9,  /* lineNo */
  "sum",                               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/datafun/sum.m"/* pathName */
};

static emlrtRTEInfo m_emlrtRTEI = { 20,/* lineNo */
  15,                                  /* colNo */
  "sumprod",                           /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/datafun/private/sumprod.m"/* pName */
};

/* Function Definitions */
void b_sum(const boolean_T x[9], real_T y[3])
{
  int32_T i;
  int32_T xoffset;
  real_T s;
  int32_T k;
  for (i = 0; i < 3; i++) {
    xoffset = i * 3;
    s = x[xoffset];
    for (k = 0; k < 2; k++) {
      s += (real_T)x[(xoffset + k) + 1];
    }

    y[i] = s;
  }
}

void c_sum(const boolean_T x[9], real_T y[3])
{
  int32_T j;
  real_T s;
  int32_T k;
  for (j = 0; j < 3; j++) {
    s = x[j];
    for (k = 0; k < 2; k++) {
      s += (real_T)x[j + (k + 1) * 3];
    }

    y[j] = s;
  }
}

real_T d_sum(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[1])
{
  real_T y;
  boolean_T b3;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gc_emlrtRSI;
  if ((x_size[0] == 1) || (x_size[0] != 1)) {
    b3 = true;
  } else {
    b3 = false;
  }

  if (!b3) {
    emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (x_size[0] == 0) {
    y = 0.0;
  } else {
    y = x_data[0];
    for (k = 2; k <= x_size[0]; k++) {
      y += x_data[k - 1];
    }
  }

  return y;
}

real_T e_sum(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2])
{
  real_T y;
  boolean_T b4;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gc_emlrtRSI;
  if ((x_size[1] == 1) || (x_size[1] != 1)) {
    b4 = true;
  } else {
    b4 = false;
  }

  if (!b4) {
    emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (x_size[1] == 0) {
    y = 0.0;
  } else {
    y = x_data[0];
    for (k = 2; k <= x_size[1]; k++) {
      y += x_data[k - 1];
    }
  }

  return y;
}

real_T f_sum(const real_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += x[k + 1];
  }

  return y;
}

real_T g_sum(const emlrtStack *sp, const boolean_T x_data[], const int32_T
             x_size[1])
{
  real_T y;
  boolean_T b5;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gc_emlrtRSI;
  if ((x_size[0] == 1) || (x_size[0] != 1)) {
    b5 = true;
  } else {
    b5 = false;
  }

  if (!b5) {
    emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (x_size[0] == 0) {
    y = 0.0;
  } else {
    y = x_data[0];
    for (k = 2; k <= x_size[0]; k++) {
      y += (real_T)x_data[k - 1];
    }
  }

  return y;
}

real_T h_sum(const boolean_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += (real_T)x[k + 1];
  }

  return y;
}

real_T i_sum(const boolean_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += (real_T)x[k + 1];
  }

  return y;
}

void sum(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
         int32_T y_size[1])
{
  int32_T vstride;
  int32_T j;
  y_size[0] = (int16_T)x_size[0];
  if (x_size[0] == 0) {
    y_size[0] = 0;
  } else {
    vstride = x_size[0];
    for (j = 0; j + 1 <= vstride; j++) {
      y_data[j] = x_data[j] + x_data[j + vstride];
    }
  }
}

/* End of code generation (sum.c) */
