/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lineSegmentIntersect.h
 *
 * Code generation for function 'lineSegmentIntersect'
 *
 */

#ifndef LINESEGMENTINTERSECT_H
#define LINESEGMENTINTERSECT_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "lineSegmentIntersect_types.h"

/* Function Declarations */
extern void lineSegmentIntersect(const emlrtStack *sp, const real_T XY1_data[],
  const int32_T XY1_size[2], const real_T XY2_data[], const int32_T XY2_size[2],
  struct0_T *out);

#endif

/* End of code generation (lineSegmentIntersect.h) */
