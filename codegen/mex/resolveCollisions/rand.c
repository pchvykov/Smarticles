/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rand.c
 *
 * Code generation for function 'rand'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "rand.h"
#include "resolveCollisions_mexutil.h"

/* Function Definitions */
void b_rand(real_T varargin_2, real_T r_data[], int32_T r_size[2])
{
  r_size[0] = 1;
  r_size[1] = (int32_T)varargin_2;
  if (!((int32_T)varargin_2 == 0)) {
    emlrt_checkEscapedGlobals();
    emlrtRandu(&r_data[0], (int32_T)varargin_2);
  }
}

real_T c_rand(void)
{
  real_T r;
  emlrt_checkEscapedGlobals();
  emlrtRandu(&r, 1);
  return r;
}

/* End of code generation (rand.c) */
