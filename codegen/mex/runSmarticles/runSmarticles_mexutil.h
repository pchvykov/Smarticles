/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runSmarticles_mexutil.h
 *
 * Code generation for function 'runSmarticles_mexutil'
 *
 */

#ifndef RUNSMARTICLES_MEXUTIL_H
#define RUNSMARTICLES_MEXUTIL_H

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
extern void d_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
extern void emlrt_checkEscapedGlobals(void);
extern real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *tMax, const
  char_T *identifier);

#ifdef __WATCOMC__

#pragma aux emlrt_marshallIn value [8087];

#endif

extern const mxArray *emlrt_marshallOut(const real_T u);
extern void emlrt_synchGlobalsFromML(const emlrtStack *sp);
extern void emlrt_synchGlobalsToML(void);

#endif

/* End of code generation (runSmarticles_mexutil.h) */
