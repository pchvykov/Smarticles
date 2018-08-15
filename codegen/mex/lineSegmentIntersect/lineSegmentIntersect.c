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
#include "lineSegmentIntersect.h"
#include "rdivide.h"
#include "repmat.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 83,    /* lineNo */
  "lineSegmentIntersect",              /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 84,  /* lineNo */
  "lineSegmentIntersect",              /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 85,  /* lineNo */
  "lineSegmentIntersect",              /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 86,  /* lineNo */
  "lineSegmentIntersect",              /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 90,  /* lineNo */
  "lineSegmentIntersect",              /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 91,  /* lineNo */
  "lineSegmentIntersect",              /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 92,  /* lineNo */
  "lineSegmentIntersect",              /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 93,  /* lineNo */
  "lineSegmentIntersect",              /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 106, /* lineNo */
  "lineSegmentIntersect",              /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 107, /* lineNo */
  "lineSegmentIntersect",              /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pathName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  95,                                  /* lineNo */
  10,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  96,                                  /* lineNo */
  10,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { 2,   /* nDims */
  97,                                  /* lineNo */
  10,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  98,                                  /* lineNo */
  10,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  99,                                  /* lineNo */
  10,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  100,                                 /* lineNo */
  10,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { 2,   /* nDims */
  102,                                 /* lineNo */
  15,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { 2,   /* nDims */
  102,                                 /* lineNo */
  32,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 2,   /* nDims */
  103,                                 /* lineNo */
  15,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { 2,   /* nDims */
  103,                                 /* lineNo */
  32,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { 2,   /* nDims */
  104,                                 /* lineNo */
  15,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { 2,   /* nDims */
  104,                                 /* lineNo */
  32,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { 2,   /* nDims */
  110,                                 /* lineNo */
  12,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { 2,   /* nDims */
  110,                                 /* lineNo */
  9,                                   /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { 2,   /* nDims */
  111,                                 /* lineNo */
  12,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo p_emlrtECI = { 2,   /* nDims */
  111,                                 /* lineNo */
  9,                                   /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo q_emlrtECI = { 2,   /* nDims */
  112,                                 /* lineNo */
  9,                                   /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { 2,   /* nDims */
  119,                                 /* lineNo */
  18,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { 2,   /* nDims */
  120,                                 /* lineNo */
  18,                                  /* colNo */
  "lineSegmentIntersect",              /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/lineSegmentIntersect.m"/* pName */
};

/* Function Definitions */
void lineSegmentIntersect(const emlrtStack *sp, const real_T XY1_data[], const
  int32_T XY1_size[2], const real_T XY2_data[], const int32_T XY2_size[2],
  struct0_T *out)
{
  int32_T loop_ub;
  int32_T b_XY1_size[1];
  int32_T i0;
  real_T b_XY1_data[3];
  real_T X1_data[9];
  int32_T X1_size[2];
  int32_T c_XY1_size[1];
  real_T X2_data[9];
  int32_T X2_size[2];
  int32_T d_XY1_size[1];
  real_T Y1_data[9];
  int32_T Y1_size[2];
  int32_T e_XY1_size[1];
  real_T Y2_data[9];
  int32_T Y2_size[2];
  int32_T i1;
  int32_T b_XY2_size[2];
  real_T b_XY2_data[12];
  real_T X3_data[9];
  int32_T X3_size[2];
  int32_T c_XY2_size[2];
  real_T X4_data[9];
  int32_T X4_size[2];
  int32_T d_XY2_size[2];
  real_T Y3_data[9];
  int32_T Y3_size[2];
  int32_T e_XY2_size[2];
  real_T Y4_data[9];
  int32_T Y4_size[2];
  int32_T Y1_Y3_size[2];
  real_T Y1_Y3_data[9];
  int32_T u_a_size[2];
  real_T u_a_data[9];
  int32_T b_Y3_size[2];
  int32_T b_Y1_Y3_size[2];
  int32_T INT_B_size[2];
  int32_T tmp_size[2];
  boolean_T INT_B_data[9];
  boolean_T tmp_data[9];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

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
  loop_ub = XY1_size[0];
  b_XY1_size[0] = XY1_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_XY1_data[i0] = XY1_data[i0];
  }

  st.site = &emlrtRSI;
  repmat(&st, b_XY1_data, b_XY1_size, XY2_size[0], X1_data, X1_size);
  loop_ub = XY1_size[0];
  c_XY1_size[0] = XY1_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_XY1_data[i0] = XY1_data[i0 + (XY1_size[0] << 1)];
  }

  st.site = &b_emlrtRSI;
  repmat(&st, b_XY1_data, c_XY1_size, XY2_size[0], X2_data, X2_size);
  loop_ub = XY1_size[0];
  d_XY1_size[0] = XY1_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_XY1_data[i0] = XY1_data[i0 + XY1_size[0]];
  }

  st.site = &c_emlrtRSI;
  repmat(&st, b_XY1_data, d_XY1_size, XY2_size[0], Y1_data, Y1_size);
  loop_ub = XY1_size[0];
  e_XY1_size[0] = XY1_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_XY1_data[i0] = XY1_data[i0 + XY1_size[0] * 3];
  }

  st.site = &d_emlrtRSI;
  repmat(&st, b_XY1_data, e_XY1_size, XY2_size[0], Y2_data, Y2_size);
  loop_ub = XY2_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    for (i1 = 0; i1 < 4; i1++) {
      b_XY2_data[i1 + (i0 << 2)] = XY2_data[i0 + XY2_size[0] * i1];
    }
  }

  loop_ub = XY2_size[0];
  b_XY2_size[0] = 1;
  b_XY2_size[1] = XY2_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_XY1_data[i0] = b_XY2_data[i0 << 2];
  }

  st.site = &e_emlrtRSI;
  b_repmat(&st, b_XY1_data, b_XY2_size, XY1_size[0], X3_data, X3_size);
  loop_ub = XY2_size[0];
  c_XY2_size[0] = 1;
  c_XY2_size[1] = XY2_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_XY1_data[i0] = b_XY2_data[2 + (i0 << 2)];
  }

  st.site = &f_emlrtRSI;
  b_repmat(&st, b_XY1_data, c_XY2_size, XY1_size[0], X4_data, X4_size);
  loop_ub = XY2_size[0];
  d_XY2_size[0] = 1;
  d_XY2_size[1] = XY2_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_XY1_data[i0] = b_XY2_data[1 + (i0 << 2)];
  }

  st.site = &g_emlrtRSI;
  b_repmat(&st, b_XY1_data, d_XY2_size, XY1_size[0], Y3_data, Y3_size);
  loop_ub = XY2_size[0];
  e_XY2_size[0] = 1;
  e_XY2_size[1] = XY2_size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_XY1_data[i0] = b_XY2_data[3 + (i0 << 2)];
  }

  st.site = &h_emlrtRSI;
  b_repmat(&st, b_XY1_data, e_XY2_size, XY1_size[0], Y4_data, Y4_size);
  for (i0 = 0; i0 < 2; i0++) {
    c_XY2_size[i0] = X4_size[i0];
    e_XY2_size[i0] = X3_size[i0];
  }

  if ((c_XY2_size[0] != e_XY2_size[0]) || (c_XY2_size[1] != e_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XY2_size[0], &e_XY2_size[0], &emlrtECI, sp);
  }

  loop_ub = X4_size[0] * X4_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    X4_data[i0] -= X3_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = Y1_size[i0];
    c_XY2_size[i0] = Y3_size[i0];
  }

  if ((b_XY2_size[0] != c_XY2_size[0]) || (b_XY2_size[1] != c_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &c_XY2_size[0], &b_emlrtECI, sp);
  }

  Y1_Y3_size[0] = Y1_size[0];
  Y1_Y3_size[1] = Y1_size[1];
  loop_ub = Y1_size[0] * Y1_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Y1_Y3_data[i0] = Y1_data[i0] - Y3_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = Y4_size[i0];
    c_XY2_size[i0] = Y3_size[i0];
  }

  if ((b_XY2_size[0] != c_XY2_size[0]) || (b_XY2_size[1] != c_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &c_XY2_size[0], &c_emlrtECI, sp);
  }

  loop_ub = Y4_size[0] * Y4_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Y4_data[i0] -= Y3_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = X1_size[i0];
    e_XY2_size[i0] = X3_size[i0];
  }

  if ((b_XY2_size[0] != e_XY2_size[0]) || (b_XY2_size[1] != e_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &e_XY2_size[0], &d_emlrtECI, sp);
  }

  X3_size[0] = X1_size[0];
  X3_size[1] = X1_size[1];
  loop_ub = X1_size[0] * X1_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    X3_data[i0] = X1_data[i0] - X3_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_XY2_size[i0] = X2_size[i0];
    b_XY2_size[i0] = X1_size[i0];
  }

  if ((c_XY2_size[0] != b_XY2_size[0]) || (c_XY2_size[1] != b_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XY2_size[0], &b_XY2_size[0], &e_emlrtECI, sp);
  }

  loop_ub = X2_size[0] * X2_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    X2_data[i0] -= X1_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    d_XY2_size[i0] = Y2_size[i0];
    b_XY2_size[i0] = Y1_size[i0];
  }

  if ((d_XY2_size[0] != b_XY2_size[0]) || (d_XY2_size[1] != b_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&d_XY2_size[0], &b_XY2_size[0], &f_emlrtECI, sp);
  }

  loop_ub = Y2_size[0] * Y2_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Y2_data[i0] -= Y1_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_XY2_size[i0] = X4_size[i0];
    b_XY2_size[i0] = Y1_Y3_size[i0];
  }

  if ((c_XY2_size[0] != b_XY2_size[0]) || (c_XY2_size[1] != b_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XY2_size[0], &b_XY2_size[0], &g_emlrtECI, sp);
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = Y4_size[i0];
    e_XY2_size[i0] = X3_size[i0];
  }

  if ((b_XY2_size[0] != e_XY2_size[0]) || (b_XY2_size[1] != e_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &e_XY2_size[0], &h_emlrtECI, sp);
  }

  Y3_size[0] = X4_size[0];
  Y3_size[1] = X4_size[1];
  loop_ub = X4_size[0] * X4_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Y3_data[i0] = X4_data[i0] * Y1_Y3_data[i0];
  }

  u_a_size[0] = Y4_size[0];
  u_a_size[1] = Y4_size[1];
  loop_ub = Y4_size[0] * Y4_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    u_a_data[i0] = Y4_data[i0] * X3_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_XY2_size[i0] = Y3_size[i0];
    b_XY2_size[i0] = u_a_size[i0];
  }

  if ((c_XY2_size[0] != b_XY2_size[0]) || (c_XY2_size[1] != b_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XY2_size[0], &b_XY2_size[0], &g_emlrtECI, sp);
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_XY2_size[i0] = X2_size[i0];
    b_XY2_size[i0] = Y1_Y3_size[i0];
  }

  if ((c_XY2_size[0] != b_XY2_size[0]) || (c_XY2_size[1] != b_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XY2_size[0], &b_XY2_size[0], &i_emlrtECI, sp);
  }

  for (i0 = 0; i0 < 2; i0++) {
    d_XY2_size[i0] = Y2_size[i0];
    e_XY2_size[i0] = X3_size[i0];
  }

  if ((d_XY2_size[0] != e_XY2_size[0]) || (d_XY2_size[1] != e_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&d_XY2_size[0], &e_XY2_size[0], &j_emlrtECI, sp);
  }

  Y1_Y3_size[0] = X2_size[0];
  Y1_Y3_size[1] = X2_size[1];
  loop_ub = X2_size[0] * X2_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Y1_Y3_data[i0] *= X2_data[i0];
  }

  X3_size[0] = Y2_size[0];
  X3_size[1] = Y2_size[1];
  loop_ub = Y2_size[0] * Y2_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    X3_data[i0] *= Y2_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = Y1_Y3_size[i0];
    e_XY2_size[i0] = X3_size[i0];
  }

  if ((b_XY2_size[0] != e_XY2_size[0]) || (b_XY2_size[1] != e_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &e_XY2_size[0], &i_emlrtECI, sp);
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = Y4_size[i0];
    c_XY2_size[i0] = X2_size[i0];
  }

  if ((b_XY2_size[0] != c_XY2_size[0]) || (b_XY2_size[1] != c_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &c_XY2_size[0], &k_emlrtECI, sp);
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_XY2_size[i0] = X4_size[i0];
    d_XY2_size[i0] = Y2_size[i0];
  }

  if ((c_XY2_size[0] != d_XY2_size[0]) || (c_XY2_size[1] != d_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XY2_size[0], &d_XY2_size[0], &l_emlrtECI, sp);
  }

  loop_ub = Y4_size[0] * Y4_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Y4_data[i0] *= X2_data[i0];
  }

  loop_ub = X4_size[0] * X4_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    X4_data[i0] *= Y2_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = Y4_size[i0];
    c_XY2_size[i0] = X4_size[i0];
  }

  if ((b_XY2_size[0] != c_XY2_size[0]) || (b_XY2_size[1] != c_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &c_XY2_size[0], &k_emlrtECI, sp);
  }

  loop_ub = Y4_size[0] * Y4_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Y4_data[i0] -= X4_data[i0];
  }

  b_Y3_size[0] = X4_size[0];
  b_Y3_size[1] = X4_size[1];
  loop_ub = X4_size[0] * X4_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    X4_data[i0] = Y3_data[i0] - u_a_data[i0];
  }

  st.site = &i_emlrtRSI;
  rdivide(&st, X4_data, b_Y3_size, Y4_data, Y4_size, u_a_data, u_a_size);
  b_Y1_Y3_size[0] = X2_size[0];
  b_Y1_Y3_size[1] = X2_size[1];
  loop_ub = X2_size[0] * X2_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    X4_data[i0] = Y1_Y3_data[i0] - X3_data[i0];
  }

  st.site = &j_emlrtRSI;
  rdivide(&st, X4_data, b_Y1_Y3_size, Y4_data, Y4_size, Y3_data, Y3_size);

  /*  Find the adjacency matrix A of intersecting lines. */
  for (i0 = 0; i0 < 2; i0++) {
    c_XY2_size[i0] = X2_size[i0];
    b_XY2_size[i0] = u_a_size[i0];
  }

  if ((c_XY2_size[0] != b_XY2_size[0]) || (c_XY2_size[1] != b_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XY2_size[0], &b_XY2_size[0], &m_emlrtECI, sp);
  }

  loop_ub = X2_size[0] * X2_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    X2_data[i0] *= u_a_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = X1_size[i0];
    c_XY2_size[i0] = X2_size[i0];
  }

  if ((b_XY2_size[0] != c_XY2_size[0]) || (b_XY2_size[1] != c_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &c_XY2_size[0], &n_emlrtECI, sp);
  }

  loop_ub = X1_size[0] * X1_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    X1_data[i0] += X2_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    d_XY2_size[i0] = Y2_size[i0];
    b_XY2_size[i0] = u_a_size[i0];
  }

  if ((d_XY2_size[0] != b_XY2_size[0]) || (d_XY2_size[1] != b_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&d_XY2_size[0], &b_XY2_size[0], &o_emlrtECI, sp);
  }

  loop_ub = Y2_size[0] * Y2_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Y2_data[i0] *= u_a_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = Y1_size[i0];
    d_XY2_size[i0] = Y2_size[i0];
  }

  if ((b_XY2_size[0] != d_XY2_size[0]) || (b_XY2_size[1] != d_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &d_XY2_size[0], &p_emlrtECI, sp);
  }

  loop_ub = Y1_size[0] * Y1_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Y1_data[i0] += Y2_data[i0];
  }

  INT_B_size[0] = u_a_size[0];
  INT_B_size[1] = u_a_size[1];
  loop_ub = u_a_size[0] * u_a_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    INT_B_data[i0] = (u_a_data[i0] >= 0.0);
  }

  tmp_size[0] = u_a_size[0];
  tmp_size[1] = u_a_size[1];
  loop_ub = u_a_size[0] * u_a_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    tmp_data[i0] = (u_a_data[i0] <= 1.0);
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_XY2_size[i0] = INT_B_size[i0];
    b_XY2_size[i0] = tmp_size[i0];
  }

  if ((c_XY2_size[0] != b_XY2_size[0]) || (c_XY2_size[1] != b_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XY2_size[0], &b_XY2_size[0], &q_emlrtECI, sp);
  }

  loop_ub = u_a_size[0] * u_a_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    INT_B_data[i0] = (INT_B_data[i0] && tmp_data[i0]);
  }

  tmp_size[0] = Y3_size[0];
  tmp_size[1] = Y3_size[1];
  loop_ub = Y3_size[0] * Y3_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    tmp_data[i0] = (Y3_data[i0] >= 0.0);
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_XY2_size[i0] = INT_B_size[i0];
    b_XY2_size[i0] = tmp_size[i0];
  }

  if ((c_XY2_size[0] != b_XY2_size[0]) || (c_XY2_size[1] != b_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XY2_size[0], &b_XY2_size[0], &q_emlrtECI, sp);
  }

  loop_ub = u_a_size[0] * u_a_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    INT_B_data[i0] = (INT_B_data[i0] && tmp_data[i0]);
  }

  tmp_size[0] = Y3_size[0];
  tmp_size[1] = Y3_size[1];
  loop_ub = Y3_size[0] * Y3_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    tmp_data[i0] = (Y3_data[i0] <= 1.0);
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_XY2_size[i0] = INT_B_size[i0];
    b_XY2_size[i0] = tmp_size[i0];
  }

  if ((c_XY2_size[0] != b_XY2_size[0]) || (c_XY2_size[1] != b_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XY2_size[0], &b_XY2_size[0], &q_emlrtECI, sp);
  }

  loop_ub = u_a_size[0] * u_a_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    INT_B_data[i0] = (INT_B_data[i0] && tmp_data[i0]);
  }

  /*  PAR_B = denominator == 0; */
  /*  COINC_B = (numerator_a == 0 & numerator_b == 0 & PAR_B); */
  /*  Arrange output. */
  out->intAdjacencyMatrix.size[0] = u_a_size[0];
  out->intAdjacencyMatrix.size[1] = u_a_size[1];
  loop_ub = u_a_size[0] * u_a_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    out->intAdjacencyMatrix.data[i0] = INT_B_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = X1_size[i0];
    c_XY2_size[i0] = INT_B_size[i0];
  }

  if ((b_XY2_size[0] != c_XY2_size[0]) || (b_XY2_size[1] != c_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &c_XY2_size[0], &r_emlrtECI, sp);
  }

  out->intMatrixX.size[0] = X1_size[0];
  out->intMatrixX.size[1] = X1_size[1];
  loop_ub = X1_size[0] * X1_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    out->intMatrixX.data[i0] = X1_data[i0] * (real_T)INT_B_data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_XY2_size[i0] = Y1_size[i0];
    c_XY2_size[i0] = INT_B_size[i0];
  }

  if ((b_XY2_size[0] != c_XY2_size[0]) || (b_XY2_size[1] != c_XY2_size[1])) {
    emlrtSizeEqCheckNDR2012b(&b_XY2_size[0], &c_XY2_size[0], &s_emlrtECI, sp);
  }

  out->intMatrixY.size[0] = Y1_size[0];
  out->intMatrixY.size[1] = Y1_size[1];
  loop_ub = Y1_size[0] * Y1_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    out->intMatrixY.data[i0] = Y1_data[i0] * (real_T)INT_B_data[i0];
  }

  out->intNormalizedDistance1To2.size[0] = u_a_size[0];
  out->intNormalizedDistance1To2.size[1] = u_a_size[1];
  loop_ub = u_a_size[0] * u_a_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    out->intNormalizedDistance1To2.data[i0] = u_a_data[i0];
  }

  out->intNormalizedDistance2To1.size[0] = Y3_size[0];
  out->intNormalizedDistance2To1.size[1] = Y3_size[1];
  loop_ub = Y3_size[0] * Y3_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    out->intNormalizedDistance2To1.data[i0] = Y3_data[i0];
  }

  /*  out.parAdjacencyMatrix = PAR_B; */
  /*  out.coincAdjacencyMatrix= COINC_B; */
}

/* End of code generation (lineSegmentIntersect.c) */
