/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "find.h"
#include "indexShapeCheck.h"
#include "resolveCollisions_data.h"

/* Variable Definitions */
static emlrtRTEInfo h_emlrtRTEI = { 243,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

/* Function Definitions */
void eml_find(const emlrtStack *sp, const boolean_T x_data[], const int32_T
              x_size[1], int32_T i_data[], int32_T i_size[1])
{
  int32_T nx;
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  int32_T iv1[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  nx = x_size[0];
  idx = 0;
  i_size[0] = x_size[0];
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx)) {
    if (x_data[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (!(idx <= x_size[0])) {
    emlrtErrorWithMessageIdR2012b(sp, &h_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (x_size[0] == 1) {
    if (idx == 0) {
      i_size[0] = 0;
    }
  } else {
    if (1 > idx) {
      nx = 0;
    } else {
      nx = idx;
    }

    iv1[0] = 1;
    iv1[1] = nx;
    st.site = &m_emlrtRSI;
    indexShapeCheck(&st, x_size[0], iv1);
    i_size[0] = nx;
  }
}

/* End of code generation (find.c) */
