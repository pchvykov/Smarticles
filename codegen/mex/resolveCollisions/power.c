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
#include "resolveCollisions.h"
#include "power.h"
#include "error.h"
#include "scalexpAlloc.h"

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = { 49,  /* lineNo */
  "power",                             /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 58,  /* lineNo */
  "power",                             /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 61,  /* lineNo */
  "power",                             /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 73,  /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"/* pathName */
};

static emlrtRTEInfo f_emlrtRTEI = { 17,/* lineNo */
  19,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"/* pName */
};

/* Function Declarations */
static boolean_T fltpower_domain_error(void);

/* Function Definitions */
static boolean_T fltpower_domain_error(void)
{
  return false;
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
  st.site = &h_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &i_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  y_size[0] = (int16_T)a_size[0];
  y_size[1] = 2;
  if (!dimagree(y_size, a_size)) {
    emlrtErrorWithMessageIdR2012b(&c_st, &f_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  n = a_size[0] << 1;
  for (k = 0; k + 1 <= n; k++) {
    y_data[k] = a_data[k] * a_data[k];
  }

  if (fltpower_domain_error()) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }
}

/* End of code generation (power.c) */
