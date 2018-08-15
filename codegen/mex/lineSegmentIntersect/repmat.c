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
#include "lineSegmentIntersect.h"
#include "repmat.h"

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 18,  /* lineNo */
  "repmat",                            /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 37,    /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 53,  /* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pName */
};

static emlrtRSInfo l_emlrtRSI = { 37,  /* lineNo */
  "repmat",                            /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

/* Function Declarations */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void b_repmat(const emlrtStack *sp, const real_T a_data[], const int32_T a_size
              [2], real_T varargin_1, real_T b_data[], int32_T b_size[2])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv2[2] = { 1, 15 };

  static const char_T u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  static const int32_T iv3[2] = { 1, 15 };

  boolean_T p;
  int32_T jcol;
  int32_T ibmat;
  int32_T itilerow;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  if (varargin_1 != varargin_1) {
    emlrtErrorWithMessageIdR2012b(&st, &emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }

  if ((int8_T)(int32_T)varargin_1 != (int32_T)varargin_1) {
    y = NULL;
    m1 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 15, m1, &u[0]);
    emlrtAssign(&y, m1);
    st.site = &l_emlrtRSI;
    error(&st, y, &emlrtMCI);
  }

  if ((int8_T)a_size[1] != a_size[1]) {
    y = NULL;
    m1 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(sp, 15, m1, &u[0]);
    emlrtAssign(&y, m1);
    st.site = &l_emlrtRSI;
    error(&st, y, &emlrtMCI);
  }

  b_size[0] = (int8_T)(int32_T)varargin_1;
  b_size[1] = (int8_T)a_size[1];
  if (!(a_size[1] == 0)) {
    if ((int8_T)(int32_T)varargin_1 == 0) {
      p = true;
    } else if ((int8_T)a_size[1] == 0) {
      p = true;
    } else {
      p = false;
    }

    if (!p) {
      for (jcol = 0; jcol + 1 <= a_size[1]; jcol++) {
        ibmat = jcol * (int32_T)varargin_1;
        for (itilerow = 1; itilerow <= (int32_T)varargin_1; itilerow++) {
          b_data[(ibmat + itilerow) - 1] = a_data[jcol];
        }
      }
    }
  }
}

void repmat(const emlrtStack *sp, const real_T a_data[], const int32_T a_size[1],
            real_T varargin_2, real_T b_data[], int32_T b_size[2])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 15 };

  static const char_T u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  static const int32_T iv1[2] = { 1, 15 };

  boolean_T p;
  int32_T nrows;
  int32_T jtilecol;
  int32_T ibtile;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  if (varargin_2 != varargin_2) {
    emlrtErrorWithMessageIdR2012b(&st, &emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }

  if ((int8_T)a_size[0] != a_size[0]) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(sp, 15, m0, &u[0]);
    emlrtAssign(&y, m0);
    st.site = &l_emlrtRSI;
    error(&st, y, &emlrtMCI);
  }

  if ((int8_T)(int32_T)varargin_2 != (int32_T)varargin_2) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 15, m0, &u[0]);
    emlrtAssign(&y, m0);
    st.site = &l_emlrtRSI;
    error(&st, y, &emlrtMCI);
  }

  b_size[0] = (int8_T)a_size[0];
  b_size[1] = (int8_T)(int32_T)varargin_2;
  if (!(a_size[0] == 0)) {
    if ((int8_T)a_size[0] == 0) {
      p = true;
    } else if ((int8_T)(int32_T)varargin_2 == 0) {
      p = true;
    } else {
      p = false;
    }

    if (!p) {
      nrows = a_size[0];
      for (jtilecol = 1; jtilecol <= (int32_T)varargin_2; jtilecol++) {
        ibtile = (jtilecol - 1) * nrows;
        for (k = 0; k + 1 <= nrows; k++) {
          b_data[ibtile + k] = a_data[k];
        }
      }
    }
  }
}

/* End of code generation (repmat.c) */
