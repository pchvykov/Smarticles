/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xor.h
 *
 * Code generation for function 'xor'
 *
 */

#ifndef XOR_H
#define XOR_H

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
extern void b_xor(const emlrtStack *sp, const boolean_T s_data[], const int32_T
                  s_size[1], const boolean_T t_data[], const int32_T t_size[1],
                  boolean_T y_data[], int32_T y_size[1]);
extern void xor(const emlrtStack *sp, const boolean_T s_data[], const int32_T
                s_size[2], const boolean_T t_data[], const int32_T t_size[1],
                boolean_T y_data[], int32_T y_size[1]);

#endif

/* End of code generation (xor.h) */
