/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error1.c
 *
 * Code generation for function 'error1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "error1.h"
#include "resolveCollisions_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo b_emlrtMCI = { 27,  /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/lang/error.m"/* pName */
};

static emlrtRSInfo lc_emlrtRSI = { 27, /* lineNo */
  "error",                             /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/lang/error.m"/* pathName */
};

/* Function Definitions */
void c_error(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv2[2] = { 1, 28 };

  static const char_T varargin_1[28] = { 'c', 'o', 'r', 'n', 'e', 'r', 's', ' ',
    'i', 'n', 't', 'e', 'r', 's', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'p', 'r',
    'o', 'b', 'l', 'e', 'm' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrt_synchGlobalsToML();
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 28, m1, &varargin_1[0]);
  emlrtAssign(&y, m1);
  st.site = &lc_emlrtRSI;
  e_error(&st, y, &b_emlrtMCI);
  emlrt_synchGlobalsFromML(sp);
}

/* End of code generation (error1.c) */
