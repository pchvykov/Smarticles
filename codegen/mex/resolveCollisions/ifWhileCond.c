/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ifWhileCond.c
 *
 * Code generation for function 'ifWhileCond'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "ifWhileCond.h"

/* Function Definitions */
boolean_T b_ifWhileCond(const boolean_T x[3])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = true;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (!x[k - 1]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

boolean_T ifWhileCond(const boolean_T x_data[], const int32_T x_size[1])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = !(x_size[0] == 0);
  if (y) {
    k = 1;
    exitg1 = false;
    while ((!exitg1) && (k <= x_size[0])) {
      if (!x_data[k - 1]) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return y;
}

/* End of code generation (ifWhileCond.c) */
