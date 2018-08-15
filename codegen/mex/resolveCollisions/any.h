/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * any.h
 *
 * Code generation for function 'any'
 *
 */

#ifndef ANY_H
#define ANY_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "resolveCollisions_types.h"

/* Function Declarations */
extern void any(const emlrtStack *sp, const boolean_T x[9], boolean_T y[3]);
extern boolean_T b_any(const boolean_T x[3]);
extern void c_any(const emlrtStack *sp, const real_T x[9], boolean_T y[3]);
extern boolean_T d_any(const emlrtStack *sp, const real_T x_data[], const
  int32_T x_size[2]);
extern boolean_T e_any(const emlrtStack *sp, const real_T x_data[], const
  int32_T x_size[1]);
extern boolean_T f_any(const real_T x[9]);

#endif

/* End of code generation (any.h) */
