/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pairCollision2.h
 *
 * Code generation for function 'pairCollision2'
 *
 */

#ifndef PAIRCOLLISION2_H
#define PAIRCOLLISION2_H

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
extern void pairCollision2(const emlrtStack *sp, const real_T sm[10], const
  real_T fricCoeff[2], const real_T nextAl[4], real_T xSm[6]);

#endif

/* End of code generation (pairCollision2.h) */
