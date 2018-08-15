/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lineSegmentIntersect.c
 *
 * Code generation for function 'lineSegmentIntersect'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "lineSegmentIntersect.h"
#include "repmat.h"

/* Function Definitions */
void lineSegmentIntersect(const real_T XY1[12], const real_T XY2[12], real_T
  parThresh, real_T distThresh, const real_T lenMx[9], boolean_T
  out_intAdjacencyMatrix[9], real_T out_intNormalizedDistance1To2[9], real_T
  out_intNormalizedDistance2To1[9], real_T out_parAdjacencyMatrix[9])
{
  real_T X1[9];
  real_T Y1[9];
  int32_T k;
  real_T b_XY2[3];
  real_T X3[9];
  int32_T i4;
  real_T c_XY2[12];
  real_T Y3[9];
  real_T X4_X3[9];
  real_T Y1_Y3[9];
  real_T Y4_Y3[9];
  real_T X2_X1[9];
  real_T b_Y3;
  real_T denominator;
  real_T coOrient;
  real_T b_coOrient[9];
  real_T b_denominator[9];

  /* LINESEGMENTINTERSECT Intersections of line segments. */
  /*    OUT = LINESEGMENTINTERSECT(XY1,XY2) finds the 2D Cartesian Coordinates of */
  /*    intersection points between the set of line segments given in XY1 and XY2. */
  /*  */
  /*    XY1 and XY2 are N1x4 and N2x4 matrices. Rows correspond to line segments.  */
  /*    Each row is of the form [x1 y1 x2 y2] where (x1,y1) is the start point and  */
  /*    (x2,y2) is the end point of a line segment: */
  /*  */
  /*                   Line Segment */
  /*        o--------------------------------o */
  /*        ^                                ^ */
  /*     (x1,y1)                          (x2,y2) */
  /*  */
  /*    OUT is a structure with fields: */
  /*  */
  /*    'intAdjacencyMatrix' : N1xN2 indicator matrix where the entry (i,j) is 1 if */
  /*        line segments XY1(i,:) and XY2(j,:) intersect. */
  /*  */
  /*    'intMatrixX' : N1xN2 matrix where the entry (i,j) is the X coordinate of the */
  /*        intersection point between line segments XY1(i,:) and XY2(j,:). */
  /*  */
  /*    'intMatrixY' : N1xN2 matrix where the entry (i,j) is the Y coordinate of the */
  /*        intersection point between line segments XY1(i,:) and XY2(j,:). */
  /*  */
  /*    'intNormalizedDistance1To2' : N1xN2 matrix where the (i,j) entry is the */
  /*        normalized distance from the start point of line segment XY1(i,:) to the */
  /*        intersection point with XY2(j,:). */
  /*  */
  /*    'intNormalizedDistance2To1' : N1xN2 matrix where the (i,j) entry is the */
  /*        normalized distance from the start point of line segment XY2(j,:) to the */
  /*        intersection point with XY1(i,:). */
  /*  */
  /*    'parAdjacencyMatrix' : N1xN2 indicator matrix where the (i,j) entry is 1 if */
  /*        line segments XY1(i,:) and XY2(j,:) are parallel. */
  /*  */
  /*    'coincAdjacencyMatrix' : N1xN2 indicator matrix where the (i,j) entry is 1  */
  /*        if line segments XY1(i,:) and XY2(j,:) are coincident. */
  /*  Version: 1.00, April 03, 2010 */
  /*  Version: 1.10, April 10, 2010 */
  /*  Author:  U. Murat Erdem */
  /*  CHANGELOG: */
  /*  */
  /*  Ver. 1.00:  */
  /*    -Initial release. */
  /*   */
  /*  Ver. 1.10: */
  /*    - Changed the input parameters. Now the function accepts two sets of line */
  /*    segments. The intersection analysis is done between these sets and not in */
  /*    the same set. */
  /*    - Changed and added fields of the output. Now the analysis provides more */
  /*    information about the intersections and line segments. */
  /*    - Performance tweaks. */
  /*  I opted not to call this 'curve intersect' because it would be misleading */
  /*  unless you accept that curves are pairwise linear constructs. */
  /*  I tried to put emphasis on speed by vectorizing the code as much as possible. */
  /*  There should still be enough room to optimize the code but I left those out */
  /*  for the sake of clarity. */
  /*  The math behind is given in: */
  /*    http://local.wasp.uwa.edu.au/~pbourke/geometry/lineline2d/ */
  /*  If you really are interested in squeezing as much horse power as possible out */
  /*  of this code I would advise to remove the argument checks and tweak the */
  /*  creation of the OUT a little bit. */
  /* %% Argument check. */
  /* ------------------------------------------------------------------------------- */
  /*  validateattributes(XY1,{'numeric'},{'2d','finite'}); */
  /*  validateattributes(XY2,{'numeric'},{'2d','finite'}); */
  /* %% Prepare matrices for vectorized computation of line intersection points. */
  /* ------------------------------------------------------------------------------- */
  c_repmat(*(real_T (*)[3])&XY1[0], X1);
  c_repmat(*(real_T (*)[3])&XY1[3], Y1);
  for (k = 0; k < 3; k++) {
    for (i4 = 0; i4 < 4; i4++) {
      c_XY2[i4 + (k << 2)] = XY2[k + 3 * i4];
    }

    b_XY2[k] = c_XY2[k << 2];
  }

  b_repmat(b_XY2, X3);
  for (k = 0; k < 3; k++) {
    b_XY2[k] = c_XY2[1 + (k << 2)];
  }

  b_repmat(b_XY2, Y3);
  for (k = 0; k < 3; k++) {
    b_XY2[k] = c_XY2[2 + (k << 2)];
  }

  b_repmat(b_XY2, X4_X3);
  for (k = 0; k < 9; k++) {
    Y1_Y3[k] = Y1[k] - Y3[k];
    X4_X3[k] -= X3[k];
  }

  for (k = 0; k < 3; k++) {
    b_XY2[k] = c_XY2[3 + (k << 2)];
  }

  b_repmat(b_XY2, Y4_Y3);
  c_repmat(*(real_T (*)[3])&XY1[6], X2_X1);
  for (k = 0; k < 9; k++) {
    Y4_Y3[k] -= Y3[k];
    X3[k] = X1[k] - X3[k];
    X2_X1[k] -= X1[k];
  }

  c_repmat(*(real_T (*)[3])&XY1[9], Y3);

  /*  Find the adjacency matrix A of intersecting lines. */
  /*  INT_X = X1+X2_X1.*u_a; */
  /*  INT_Y = Y1+Y2_Y1.*u_a; */
  /* find parallel: */
  /*  %near-parallel lines (based on cross-product) */
  /*  %close longitudinally */
  for (k = 0; k < 9; k++) {
    b_Y3 = Y3[k] - Y1[k];
    denominator = Y4_Y3[k] * X2_X1[k] - X4_X3[k] * b_Y3;
    coOrient = muDoubleScalarSign(X2_X1[k] * X4_X3[k] + b_Y3 * Y4_Y3[k]);
    X1[k] = muDoubleScalarAbs(denominator);
    X2_X1[k] = (X2_X1[k] * Y1_Y3[k] - b_Y3 * X3[k]) / denominator;
    X4_X3[k] = (X4_X3[k] * Y1_Y3[k] - Y4_Y3[k] * X3[k]) / denominator;
    b_denominator[k] = denominator;
    b_coOrient[k] = coOrient;
  }

  for (k = 0; k < 3; k++) {
    for (i4 = 0; i4 < 3; i4++) {
      Y3[i4 + 3 * k] = (X4_X3[i4 + 3 * k] - 0.5) * lenMx[k + 3 * i4] -
        b_coOrient[i4 + 3 * k] * (X2_X1[i4 + 3 * k] - 0.5) * lenMx[i4 + 3 * k];
    }
  }

  for (k = 0; k < 9; k++) {
    Y1[k] = muDoubleScalarAbs(Y3[k]);
    X3[k] = muDoubleScalarAbs(X4_X3[k] - 0.5);
    Y1_Y3[k] = muDoubleScalarAbs(X2_X1[k] - 0.5);
  }

  for (k = 0; k < 9; k++) {
    Y3[k] = muDoubleScalarMin(X3[k], Y1_Y3[k]);
  }

  /* and transversely */
  /*  COINC_B = (numerator_a == 0 & numerator_b == 0 & PAR_B); */
  /*  Arrange output. */
  /*  out.intMatrixX = INT_X .* INT_B; */
  /*  out.intMatrixY = INT_Y .* INT_B; */
  for (k = 0; k < 9; k++) {
    out_intAdjacencyMatrix[k] = ((X4_X3[k] >= 0.0) && (X4_X3[k] <= 1.0) &&
      (X2_X1[k] >= 0.0) && (X2_X1[k] <= 1.0));
    out_intNormalizedDistance1To2[k] = X4_X3[k];
    out_intNormalizedDistance2To1[k] = X2_X1[k];
    out_parAdjacencyMatrix[k] = b_coOrient[k] * (real_T)((X1[k] < parThresh) &&
      (Y1[k] < 0.75) && (Y3[k] * muDoubleScalarAbs(b_denominator[k]) <
                         distThresh));
  }

  /*  out.coincAdjacencyMatrix= COINC_B; */
}

/* End of code generation (lineSegmentIntersect.c) */
