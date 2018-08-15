/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * resolveCollisions.h
 *
 * Code generation for function 'resolveCollisions'
 *
 */

#ifndef RESOLVECOLLISIONS_H
#define RESOLVECOLLISIONS_H

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
extern void resolveCollisions(const emlrtStack *sp, real_T sm_data[], int32_T
  sm_size[2], boolean_T resolveFl, const real_T fricCoeff_data[], const int32_T
  fricCoeff_size[1], emxArray_real_T *parOrd, real_T xSm_data[], int32_T
  xSm_size[2]);

#endif

/* End of code generation (resolveCollisions.h) */
