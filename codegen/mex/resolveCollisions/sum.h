/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef SUM_H
#define SUM_H

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
extern void b_sum(const boolean_T x[9], real_T y[3]);
extern void c_sum(const boolean_T x[9], real_T y[3]);
extern real_T d_sum(const emlrtStack *sp, const real_T x_data[], const int32_T
                    x_size[1]);

#ifdef __WATCOMC__

#pragma aux d_sum value [8087];

#endif

extern real_T e_sum(const emlrtStack *sp, const real_T x_data[], const int32_T
                    x_size[2]);

#ifdef __WATCOMC__

#pragma aux e_sum value [8087];

#endif

extern real_T f_sum(const real_T x[3]);

#ifdef __WATCOMC__

#pragma aux f_sum value [8087];

#endif

extern real_T g_sum(const emlrtStack *sp, const boolean_T x_data[], const
                    int32_T x_size[1]);

#ifdef __WATCOMC__

#pragma aux g_sum value [8087];

#endif

extern real_T h_sum(const boolean_T x[3]);

#ifdef __WATCOMC__

#pragma aux h_sum value [8087];

#endif

extern real_T i_sum(const boolean_T x[3]);

#ifdef __WATCOMC__

#pragma aux i_sum value [8087];

#endif

extern void sum(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
                int32_T y_size[1]);

#endif

/* End of code generation (sum.h) */
