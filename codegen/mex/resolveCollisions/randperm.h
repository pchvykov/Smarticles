/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randperm.h
 *
 * Code generation for function 'randperm'
 *
 */

#ifndef RANDPERM_H
#define RANDPERM_H

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
extern void randperm(const emlrtStack *sp, real_T n, real_T p_data[], int32_T
                     p_size[2]);

#endif

/* End of code generation (randperm.h) */
