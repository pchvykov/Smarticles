/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mergesort.c
 *
 * Code generation for function 'mergesort'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "mergesort.h"

/* Function Definitions */
void b_mergesort(int32_T idx_data[], const real_T x_data[], int32_T n)
{
  int32_T k;
  boolean_T p;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T b_p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  int32_T iwork_data[1000];
  for (k = 1; k <= n - 1; k += 2) {
    if ((x_data[k - 1] <= x_data[k]) || muDoubleScalarIsNaN(x_data[k])) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      idx_data[k - 1] = k;
      idx_data[k] = k + 1;
    } else {
      idx_data[k - 1] = k + 1;
      idx_data[k] = k;
    }
  }

  if ((n & 1) != 0) {
    idx_data[n - 1] = n;
  }

  i = 2;
  while (i < n) {
    i2 = i << 1;
    j = 1;
    for (pEnd = 1 + i; pEnd < n + 1; pEnd = qEnd + i) {
      b_p = j;
      q = pEnd - 1;
      qEnd = j + i2;
      if (qEnd > n + 1) {
        qEnd = n + 1;
      }

      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        if ((x_data[idx_data[b_p - 1] - 1] <= x_data[idx_data[q] - 1]) ||
            muDoubleScalarIsNaN(x_data[idx_data[q] - 1])) {
          p = true;
        } else {
          p = false;
        }

        if (p) {
          iwork_data[k] = idx_data[b_p - 1];
          b_p++;
          if (b_p == pEnd) {
            while (q + 1 < qEnd) {
              k++;
              iwork_data[k] = idx_data[q];
              q++;
            }
          }
        } else {
          iwork_data[k] = idx_data[q];
          q++;
          if (q + 1 == qEnd) {
            while (b_p < pEnd) {
              k++;
              iwork_data[k] = idx_data[b_p - 1];
              b_p++;
            }
          }
        }

        k++;
      }

      for (k = 0; k + 1 <= kEnd; k++) {
        idx_data[(j + k) - 1] = iwork_data[k];
      }

      j = qEnd;
    }

    i = i2;
  }
}

/* End of code generation (mergesort.c) */
