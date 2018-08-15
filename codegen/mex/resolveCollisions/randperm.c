/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randperm.c
 *
 * Code generation for function 'randperm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "randperm.h"
#include "rand.h"
#include "sortIdx.h"

/* Variable Definitions */
static emlrtRTEInfo c_emlrtRTEI = { 12,/* lineNo */
  15,                                  /* colNo */
  "randperm",                          /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/randfun/randperm.m"/* pName */
};

/* Function Definitions */
void randperm(const emlrtStack *sp, real_T n, real_T p_data[], int32_T p_size[2])
{
  int32_T idx_data[1000];
  int32_T idx_size[2];
  int32_T i0;
  int32_T loop_ub;
  if (!(n == n)) {
    emlrtErrorWithMessageIdR2012b(sp, &c_emlrtRTEI, "MATLAB:randperm:inputType",
      0);
  }

  b_rand(n, p_data, p_size);
  sortIdx(p_data, p_size, idx_data, idx_size);
  for (i0 = 0; i0 < 2; i0++) {
    idx_size[i0] = p_size[i0];
  }

  p_size[0] = 1;
  p_size[1] = idx_size[1];
  loop_ub = idx_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    p_data[i0] = idx_data[idx_size[0] * i0];
  }
}

/* End of code generation (randperm.c) */
