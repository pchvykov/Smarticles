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
#include "runSmarticles.h"
#include "lineSegmentIntersect.h"
#include "repmat.h"

/* Function Definitions */
void b_lineSegmentIntersect(const real_T XY1[4], const real_T XY2[4], boolean_T *
  out_intAdjacencyMatrix, real_T *out_intMatrixX, real_T *out_intMatrixY, real_T
  *out_intNormalizedDistance1To2, real_T *out_intNormalizedDistance2To1)
{
  real_T X4_X3;
  real_T Y1_Y3;
  real_T Y4_Y3;
  real_T X1_X3;
  real_T X2_X1;
  real_T Y2_Y1;
  real_T denominator;

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
  X4_X3 = XY2[2] - XY2[0];
  Y1_Y3 = XY1[1] - XY2[1];
  Y4_Y3 = XY2[3] - XY2[1];
  X1_X3 = XY1[0] - XY2[0];
  X2_X1 = XY1[2] - XY1[0];
  Y2_Y1 = XY1[3] - XY1[1];
  denominator = Y4_Y3 * X2_X1 - X4_X3 * Y2_Y1;
  *out_intNormalizedDistance1To2 = (X4_X3 * Y1_Y3 - Y4_Y3 * X1_X3) / denominator;
  *out_intNormalizedDistance2To1 = (X2_X1 * Y1_Y3 - Y2_Y1 * X1_X3) / denominator;

  /*  Find the adjacency matrix A of intersecting lines. */
  *out_intAdjacencyMatrix = ((*out_intNormalizedDistance1To2 >= 0.0) &&
    (*out_intNormalizedDistance1To2 <= 1.0) && (*out_intNormalizedDistance2To1 >=
    0.0) && (*out_intNormalizedDistance2To1 <= 1.0));

  /*  PAR_B = denominator == 0; */
  /*  COINC_B = (numerator_a == 0 & numerator_b == 0 & PAR_B); */
  /*  Arrange output. */
  *out_intMatrixX = (XY1[0] + X2_X1 * *out_intNormalizedDistance1To2) * (real_T)*
    out_intAdjacencyMatrix;
  *out_intMatrixY = (XY1[1] + Y2_Y1 * *out_intNormalizedDistance1To2) * (real_T)*
    out_intAdjacencyMatrix;

  /*  out.parAdjacencyMatrix = PAR_B; */
  /*  out.coincAdjacencyMatrix= COINC_B; */
}

void lineSegmentIntersect(const real_T XY1[12], const real_T XY2[12], boolean_T
  out_intAdjacencyMatrix[9], real_T out_intMatrixX[9], real_T out_intMatrixY[9],
  real_T out_intNormalizedDistance1To2[9], real_T out_intNormalizedDistance2To1
  [9])
{
  real_T X1[9];
  real_T Y1[9];
  int32_T i12;
  real_T b_XY2[3];
  real_T X3[9];
  int32_T i13;
  real_T c_XY2[12];
  real_T Y3[9];
  real_T X4_X3[9];
  real_T Y1_Y3[9];
  real_T Y4_Y3[9];
  real_T Y2_Y1[9];
  real_T b_Y3;
  real_T b_Y2_Y1;
  real_T denominator;
  real_T b_X4_X3;
  boolean_T INT_B;

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
  repmat(*(real_T (*)[3])&XY1[0], X1);
  repmat(*(real_T (*)[3])&XY1[3], Y1);
  for (i12 = 0; i12 < 3; i12++) {
    for (i13 = 0; i13 < 4; i13++) {
      c_XY2[i13 + (i12 << 2)] = XY2[i12 + 3 * i13];
    }

    b_XY2[i12] = c_XY2[i12 << 2];
  }

  b_repmat(b_XY2, X3);
  for (i12 = 0; i12 < 3; i12++) {
    b_XY2[i12] = c_XY2[1 + (i12 << 2)];
  }

  b_repmat(b_XY2, Y3);
  for (i12 = 0; i12 < 3; i12++) {
    b_XY2[i12] = c_XY2[2 + (i12 << 2)];
  }

  b_repmat(b_XY2, X4_X3);
  for (i12 = 0; i12 < 9; i12++) {
    Y1_Y3[i12] = Y1[i12] - Y3[i12];
    X4_X3[i12] -= X3[i12];
  }

  for (i12 = 0; i12 < 3; i12++) {
    b_XY2[i12] = c_XY2[3 + (i12 << 2)];
  }

  b_repmat(b_XY2, Y4_Y3);
  for (i12 = 0; i12 < 9; i12++) {
    Y4_Y3[i12] -= Y3[i12];
    X3[i12] = X1[i12] - X3[i12];
  }

  repmat(*(real_T (*)[3])&XY1[6], Y3);
  repmat(*(real_T (*)[3])&XY1[9], Y2_Y1);

  /*  Find the adjacency matrix A of intersecting lines. */
  /*  PAR_B = denominator == 0; */
  /*  COINC_B = (numerator_a == 0 & numerator_b == 0 & PAR_B); */
  /*  Arrange output. */
  for (i12 = 0; i12 < 9; i12++) {
    b_Y3 = Y3[i12] - X1[i12];
    b_Y2_Y1 = Y2_Y1[i12] - Y1[i12];
    denominator = Y4_Y3[i12] * b_Y3 - X4_X3[i12] * b_Y2_Y1;
    b_X4_X3 = (X4_X3[i12] * Y1_Y3[i12] - Y4_Y3[i12] * X3[i12]) / denominator;
    denominator = (b_Y3 * Y1_Y3[i12] - b_Y2_Y1 * X3[i12]) / denominator;
    INT_B = ((b_X4_X3 >= 0.0) && (b_X4_X3 <= 1.0) && (denominator >= 0.0) &&
             (denominator <= 1.0));
    out_intAdjacencyMatrix[i12] = INT_B;
    out_intMatrixX[i12] = (X1[i12] + b_Y3 * b_X4_X3) * (real_T)INT_B;
    out_intMatrixY[i12] = (Y1[i12] + b_Y2_Y1 * b_X4_X3) * (real_T)INT_B;
    out_intNormalizedDistance1To2[i12] = b_X4_X3;
    out_intNormalizedDistance2To1[i12] = denominator;
  }

  /*  out.parAdjacencyMatrix = PAR_B; */
  /*  out.coincAdjacencyMatrix= COINC_B; */
}

/* End of code generation (lineSegmentIntersect.c) */
