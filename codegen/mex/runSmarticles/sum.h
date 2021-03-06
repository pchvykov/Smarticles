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
#include "runSmarticles_types.h"

/* Function Declarations */
extern real_T b_sum(const boolean_T x[3]);

#ifdef __WATCOMC__

#pragma aux b_sum value [8087];

#endif

extern real_T c_sum(const boolean_T x[3]);

#ifdef __WATCOMC__

#pragma aux c_sum value [8087];

#endif

extern void sum(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
                int32_T y_size[1]);

#endif

/* End of code generation (sum.h) */
