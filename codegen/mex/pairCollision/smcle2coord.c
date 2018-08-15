/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * smcle2coord.c
 *
 * Code generation for function 'smcle2coord'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "pairCollision.h"
#include "smcle2coord.h"
#include "pairCollision_data.h"

/* Function Definitions */
void smcle2coord(const real_T sm[10], real_T crd[16])
{
  real_T y;
  int32_T k;
  real_T delB[4];
  int32_T i1;
  real_T x[2];
  real_T dv1[4];
  real_T b_x[2];
  real_T dv2[4];

  /* return coordinates of 4 points from smarticle position 5-tuple */
  /* in: [cx,cy, theta, al1, al2] - c.o.m coord, body orientation, arm angles (left, right) */
  /* out: [x1,y1, x2,y2, x3,y3, x4,y4] */
  y = B / 2.0;
  for (k = 0; k < 2; k++) {
    delB[k] = y * muDoubleScalarSin(sm[4 + k]);
    delB[2 + k] = y * -muDoubleScalarCos(sm[4 + k]);
  }

  memset(&crd[0], 0, sizeof(real_T) << 4);
  for (k = 0; k < 2; k++) {
    for (i1 = 0; i1 < 2; i1++) {
      crd[i1 + ((2 + k) << 1)] = sm[i1 + (k << 1)] - delB[i1 + (k << 1)];
      crd[i1 + ((4 + k) << 1)] = sm[i1 + (k << 1)] + delB[i1 + (k << 1)];
    }

    x[k] = sm[4 + k] - sm[6 + k];
    x[k] = muDoubleScalarSin(x[k]);
    b_x[k] = sm[4 + k] - sm[6 + k];
    b_x[k] = muDoubleScalarCos(b_x[k]);
    dv1[k] = A * -x[k];
    dv1[2 + k] = A * b_x[k];
  }

  for (k = 0; k < 2; k++) {
    for (i1 = 0; i1 < 2; i1++) {
      delB[i1 + (k << 1)] = crd[i1 + ((2 + k) << 1)] + dv1[i1 + (k << 1)];
      crd[i1 + (k << 1)] = delB[i1 + (k << 1)];
    }

    x[k] = sm[4 + k] + sm[8 + k];
    x[k] = muDoubleScalarSin(x[k]);
    b_x[k] = sm[4 + k] + sm[8 + k];
    b_x[k] = muDoubleScalarCos(b_x[k]);
    dv2[k] = A * -x[k];
    dv2[2 + k] = A * b_x[k];
  }

  for (i1 = 0; i1 < 2; i1++) {
    for (k = 0; k < 2; k++) {
      delB[k + (i1 << 1)] = crd[k + ((4 + i1) << 1)] - dv2[k + (i1 << 1)];
      crd[k + ((6 + i1) << 1)] = delB[k + (i1 << 1)];
    }
  }
}

/* End of code generation (smcle2coord.c) */
