/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rand.h
 *
 * Code generation for function 'rand'
 *
 */

#ifndef RAND_H
#define RAND_H

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
extern real_T b_rand(void);

#ifdef __WATCOMC__

#pragma aux b_rand value [8087];

#endif
#endif

/* End of code generation (rand.h) */
