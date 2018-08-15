/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sin.c
 *
 * Code generation for function 'sin'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "sin.h"

/* Function Definitions */
void b_sin(real_T x_data[], int32_T x_size[1])
{
  int32_T nx;
  int32_T k;
  nx = x_size[0];
  for (k = 0; k + 1 <= nx; k++) {
    x_data[k] = muDoubleScalarSin(x_data[k]);
  }
}

/* End of code generation (sin.c) */
