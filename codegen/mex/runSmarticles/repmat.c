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
#include "runSmarticles.h"
#include "repmat.h"
#include "runSmarticles_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo ab_emlrtRSI = { 18, /* lineNo */
  "repmat",                            /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

static emlrtMCInfo e_emlrtMCI = { 37,  /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 53,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pName */
};

static emlrtRSInfo gc_emlrtRSI = { 37, /* lineNo */
  "repmat",                            /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

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

void c_repmat(const emlrtStack *sp, const real_T a[2], real_T varargin_1, real_T
              b_data[], int32_T b_size[2])
{
  boolean_T p;
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 15 };

  static const char_T u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  int32_T jcol;
  int32_T ibmat;
  int32_T itilerow;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ab_emlrtRSI;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    p = false;
  } else {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2012b(&st, &h_emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }

  if ((int16_T)(int32_T)varargin_1 != (int32_T)varargin_1) {
    emlrt_synchGlobalsToML();
    y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 15, m1, &u[0]);
    emlrtAssign(&y, m1);
    st.site = &gc_emlrtRSI;
    d_error(&st, y, &e_emlrtMCI);
    emlrt_synchGlobalsFromML(sp);
  }

  b_size[0] = (int16_T)(int32_T)varargin_1;
  b_size[1] = 2;
  if (!((int16_T)(int32_T)varargin_1 == 0)) {
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * (int32_T)varargin_1;
      for (itilerow = 1; itilerow <= (int32_T)varargin_1; itilerow++) {
        b_data[(ibmat + itilerow) - 1] = a[jcol];
      }
    }
  }
}

void d_repmat(const emlrtStack *sp, const real_T a_data[], const int32_T a_size
              [1], real_T b_data[], int32_T b_size[2])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv5[2] = { 1, 15 };

  static const char_T u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  int32_T nrows;
  int32_T jtilecol;
  int32_T ibtile;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((int16_T)a_size[0] != a_size[0]) {
    emlrt_synchGlobalsToML();
    y = NULL;
    m2 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(sp, 15, m2, &u[0]);
    emlrtAssign(&y, m2);
    st.site = &gc_emlrtRSI;
    d_error(&st, y, &e_emlrtMCI);
    emlrt_synchGlobalsFromML(sp);
  }

  b_size[0] = (int16_T)a_size[0];
  b_size[1] = 2;
  if ((!(a_size[0] == 0)) && (!((int16_T)a_size[0] == 0))) {
    nrows = a_size[0];
    for (jtilecol = 0; jtilecol < 2; jtilecol++) {
      ibtile = jtilecol * nrows;
      for (k = 1; k <= nrows; k++) {
        b_data[(ibtile + k) - 1] = a_data[k - 1];
      }
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
