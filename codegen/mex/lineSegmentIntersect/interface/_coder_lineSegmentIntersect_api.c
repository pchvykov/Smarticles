/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_lineSegmentIntersect_api.c
 *
 * Code generation for function '_coder_lineSegmentIntersect_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "lineSegmentIntersect.h"
#include "_coder_lineSegmentIntersect_api.h"
#include "lineSegmentIntersect_data.h"

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2]);
static const mxArray *b_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *XY1, const
  char_T *identifier, real_T **y_data, int32_T y_size[2]);
static const mxArray *emlrt_marshallOut(const struct0_T *u);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2])
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *y;
  const mxArray *m3;
  real_T *pData;
  int32_T i3;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m3 = emlrtCreateNumericArray(2, u_size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m3);
  i3 = 0;
  for (i = 0; i < u_size[1]; i++) {
    for (b_i = 0; b_i < u_size[0]; b_i++) {
      pData[i3] = u_data[b_i + u_size[0] * i];
      i3++;
    }
  }

  emlrtAssign(&y, m3);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = { 3, 4 };

  const boolean_T bv0[2] = { true, false };

  int32_T iv4[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv4);
  ret_size[0] = iv4[0];
  ret_size[1] = iv4[1];
  *ret_data = (real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *XY1, const
  char_T *identifier, real_T **y_data, int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(XY1), &thisId, y_data, y_size);
  emlrtDestroyArray(&XY1);
}

static const mxArray *emlrt_marshallOut(const struct0_T *u)
{
  const mxArray *y;
  int32_T u_size[2];
  int32_T loop_ub;
  int32_T i2;
  const mxArray *b_y;
  boolean_T u_data[9];
  const mxArray *m2;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  u_size[0] = u->intAdjacencyMatrix.size[0];
  u_size[1] = u->intAdjacencyMatrix.size[1];
  loop_ub = u->intAdjacencyMatrix.size[0] * u->intAdjacencyMatrix.size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    u_data[i2] = u->intAdjacencyMatrix.data[i2];
  }

  b_y = NULL;
  m2 = emlrtCreateLogicalArray(2, u_size);
  emlrtInitLogicalArray(u->intAdjacencyMatrix.size[0] *
                        u->intAdjacencyMatrix.size[1], m2, (boolean_T *)u_data);
  emlrtAssign(&b_y, m2);
  emlrtAddField(y, b_y, "intAdjacencyMatrix", 0);
  emlrtAddField(y, b_emlrt_marshallOut(u->intMatrixX.data, u->intMatrixX.size),
                "intMatrixX", 0);
  emlrtAddField(y, b_emlrt_marshallOut(u->intMatrixY.data, u->intMatrixY.size),
                "intMatrixY", 0);
  emlrtAddField(y, b_emlrt_marshallOut(u->intNormalizedDistance1To2.data,
    u->intNormalizedDistance1To2.size), "intNormalizedDistance1To2", 0);
  emlrtAddField(y, b_emlrt_marshallOut(u->intNormalizedDistance2To1.data,
    u->intNormalizedDistance2To1.size), "intNormalizedDistance2To1", 0);
  return y;
}

void lineSegmentIntersect_api(const mxArray * const prhs[2], const mxArray *
  plhs[1])
{
  real_T (*XY1_data)[12];
  int32_T XY1_size[2];
  real_T (*XY2_data)[12];
  int32_T XY2_size[2];
  struct0_T out;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "XY1", (real_T **)&XY1_data,
                   XY1_size);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "XY2", (real_T **)&XY2_data,
                   XY2_size);

  /* Invoke the target function */
  lineSegmentIntersect(&st, *XY1_data, XY1_size, *XY2_data, XY2_size, &out);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&out);
}

/* End of code generation (_coder_lineSegmentIntersect_api.c) */
