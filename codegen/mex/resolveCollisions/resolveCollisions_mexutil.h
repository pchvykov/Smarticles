/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * resolveCollisions_mexutil.h
 *
 * Code generation for function 'resolveCollisions_mexutil'
 *
 */

#ifndef RESOLVECOLLISIONS_MEXUTIL_H
#define RESOLVECOLLISIONS_MEXUTIL_H

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
extern void e_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
extern void emlrt_checkEscapedGlobals(void);
extern const mxArray *emlrt_marshallOut(const real_T u);
extern void emlrt_synchGlobalsFromML(const emlrtStack *sp);
extern void emlrt_synchGlobalsToML(void);
extern real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_A, const
  char_T *identifier);

#ifdef __WATCOMC__

#pragma aux i_emlrt_marshallIn value [8087];

#endif

extern real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);

#ifdef __WATCOMC__

#pragma aux j_emlrt_marshallIn value [8087];

#endif

extern real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

#ifdef __WATCOMC__

#pragma aux o_emlrt_marshallIn value [8087];

#endif
#endif

/* End of code generation (resolveCollisions_mexutil.h) */
