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
#include "runSmarticles.h"
#include "rand.h"
#include "runSmarticles_mexutil.h"

/* Function Definitions */
real_T b_rand(void)
{
  real_T r;
  emlrt_checkEscapedGlobals();
  emlrtRandu(&r, 1);
  return r;
}

/* End of code generation (rand.c) */
