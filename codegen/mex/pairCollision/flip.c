/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * flip.c
 *
 * Code generation for function 'flip'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "pairCollision.h"
#include "flip.h"

/* Function Definitions */
void flip(real_T x[2])
{
  real_T tmp;
  tmp = x[0];
  x[0] = x[1];
  x[1] = tmp;
}

/* End of code generation (flip.c) */
