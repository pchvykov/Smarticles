/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xor.c
 *
 * Code generation for function 'xor'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "xor.h"

/* Variable Definitions */
static emlrtRTEInfo n_emlrtRTEI = { 14,/* lineNo */
  15,                                  /* colNo */
  "xor",                               /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/xor.m"/* pName */
};

/* Function Definitions */
void b_xor(const emlrtStack *sp, const boolean_T s_data[], const int32_T s_size
           [1], const boolean_T t_data[], const int32_T t_size[1], boolean_T
           y_data[], int32_T y_size[1])
{
  int8_T varargin_1[2];
  int8_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  int32_T i5;
  varargin_1[0] = (int8_T)s_size[0];
  varargin_1[1] = 1;
  varargin_2[0] = (int8_T)t_size[0];
  varargin_2[1] = 1;
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2012b(sp, &n_emlrtRTEI,
      "MATLAB:andOrXor:sizeMismatch", 0);
  }

  y_size[0] = s_size[0];
  k = s_size[0];
  for (i5 = 0; i5 < k; i5++) {
    y_data[i5] = ((s_data[i5] ^ t_data[i5]) != 0);
  }
}

void xor(const emlrtStack *sp, const boolean_T s_data[], const int32_T s_size[2],
         const boolean_T t_data[], const int32_T t_size[1], boolean_T y_data[],
         int32_T y_size[1])
{
  int32_T k;
  int8_T varargin_2[2];
  int8_T varargin_1[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  int32_T loop_ub;
  for (k = 0; k < 2; k++) {
    varargin_1[k] = (int8_T)s_size[k];
  }

  varargin_2[0] = (int8_T)t_size[0];
  varargin_2[1] = 1;
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2012b(sp, &n_emlrtRTEI,
      "MATLAB:andOrXor:sizeMismatch", 0);
  }

  y_size[0] = s_size[0];
  loop_ub = s_size[0];
  for (k = 0; k < loop_ub; k++) {
    y_data[k] = ((s_data[k] ^ t_data[k]) != 0);
  }
}

/* End of code generation (xor.c) */
