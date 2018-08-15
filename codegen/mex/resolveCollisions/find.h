/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.h
 *
 * Code generation for function 'find'
 *
 */

#ifndef FIND_H
#define FIND_H

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
extern void eml_find(const emlrtStack *sp, const boolean_T x_data[], const
                     int32_T x_size[1], int32_T i_data[], int32_T i_size[1]);

#endif

/* End of code generation (find.h) */
