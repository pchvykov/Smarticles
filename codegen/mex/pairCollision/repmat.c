/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "pairCollision.h"
#include "repmat.h"

/* Function Definitions */
void b_repmat(const real_T a[3], real_T b[9])
{
  int32_T jcol;
  int32_T ibmat;
  int32_T itilerow;
  for (jcol = 0; jcol < 3; jcol++) {
    ibmat = jcol * 3;
    for (itilerow = 0; itilerow < 3; itilerow++) {
      b[ibmat + itilerow] = a[jcol];
    }
  }
}

void repmat(const real_T a[3], real_T b[9])
{
  int32_T jtilecol;
  int32_T ibtile;
  int32_T k;
  for (jtilecol = 0; jtilecol < 3; jtilecol++) {
    ibtile = jtilecol * 3;
    for (k = 0; k < 3; k++) {
      b[ibtile + k] = a[k];
    }
  }
}

/* End of code generation (repmat.c) */
