/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pairCollision.h
 *
 * Code generation for function 'pairCollision'
 *
 */

#ifndef PAIRCOLLISION_H
#define PAIRCOLLISION_H

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
#include "pairCollision_types.h"

/* Function Declarations */
extern void pairCollision(const emlrtStack *sp, const real_T sm[10], boolean_T
  resolveFl, const real_T fricCoeff[2], const real_T nextAl[4], real_T xSm[6]);

#endif

/* End of code generation (pairCollision.h) */
