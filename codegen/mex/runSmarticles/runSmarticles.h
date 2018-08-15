/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runSmarticles.h
 *
 * Code generation for function 'runSmarticles'
 *
 */

#ifndef RUNSMARTICLES_H
#define RUNSMARTICLES_H

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
extern void runSmarticles(runSmarticlesStackData *SD, const emlrtStack *sp,
  real_T tMax, real_T windSize, real_T Upow, const real_T freqList_data[], const
  int32_T freqList_size[1], const real_T phaseList_data[], const int32_T
  phaseList_size[1], const real_T fricCoeff_data[], const int32_T
  fricCoeff_size[1], emxArray_real_T *crdDat);

#endif

/* End of code generation (runSmarticles.h) */
