/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cos.c
 *
 * Code generation for function 'cos'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "cos.h"

/* Function Definitions */
void b_cos(real_T x_data[], int32_T x_size[1])
{
  int32_T nx;
  int32_T k;
  nx = x_size[0];
  for (k = 0; k + 1 <= nx; k++) {
    x_data[k] = muDoubleScalarCos(x_data[k]);
  }
}

/* End of code generation (cos.c) */
