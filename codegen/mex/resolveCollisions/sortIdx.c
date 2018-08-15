/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortIdx.c
 *
 * Code generation for function 'sortIdx'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "sortIdx.h"
#include "mergesort.h"

/* Function Definitions */
void sortIdx(const real_T x_data[], const int32_T x_size[2], int32_T idx_data[],
             int32_T idx_size[2])
{
  int32_T loop_ub;
  int32_T i1;
  idx_size[0] = 1;
  idx_size[1] = x_size[1];
  loop_ub = x_size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    idx_data[i1] = 0;
  }

  if (x_size[1] != 0) {
    b_mergesort(idx_data, x_data, x_size[1]);
  }
}

/* End of code generation (sortIdx.c) */
