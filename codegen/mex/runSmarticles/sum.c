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
#include "runSmarticles.h"
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

real_T c_sum(const boolean_T x[3])
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
