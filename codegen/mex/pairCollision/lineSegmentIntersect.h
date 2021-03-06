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
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "pairCollision_types.h"

/* Function Declarations */
extern void b_lineSegmentIntersect(const real_T XY1[4], const real_T XY2[4],
  boolean_T *out_intAdjacencyMatrix, real_T *out_intMatrixX, real_T
  *out_intMatrixY, real_T *out_intNormalizedDistance1To2, real_T
  *out_intNormalizedDistance2To1);
extern void lineSegmentIntersect(const real_T XY1[12], const real_T XY2[12],
  boolean_T out_intAdjacencyMatrix[9], real_T out_intMatrixX[9], real_T
  out_intMatrixY[9], real_T out_intNormalizedDistance1To2[9], real_T
  out_intNormalizedDistance2To1[9]);

#endif

/* End of code generation (lineSegmentIntersect.h) */
