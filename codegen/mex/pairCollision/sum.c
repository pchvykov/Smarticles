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
#include "pairCollision.h"
#include "sum.h"

/* Function Definitions */
real_T b_sum(const boolean_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += (real_T)x[k + 1];
  }

  return y;
}

real_T sum(const boolean_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += (real_T)x[k + 1];
  }

  return y;
}

/* End of code generation (sum.c) */
