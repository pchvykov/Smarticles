/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_resolveCollisions_api.c
 *
 * Code generation for function '_coder_resolveCollisions_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "_coder_resolveCollisions_api.h"
#include "resolveCollisions_emxutil.h"
#include "resolveCollisions_mexutil.h"
#include "resolveCollisions_data.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_resolveCollisions_api",      /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2]);
static const mxArray *b_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);
static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *resolveFl, const char_T *identifier);
static void c_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *fricCoeff,
  const char_T *identifier, real_T **y_data, int32_T y_size[1]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *sm, const
  char_T *identifier, real_T **y_data, int32_T y_size[2]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[1]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *parOrd,
  const char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2]);
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[1]);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2])
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv4[2] = { 0, 0 };

  y = NULL;
  m4 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m4, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m4, u_size, 2);
  emlrtAssign(&y, m4);
  return y;
}

static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *resolveFl, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(resolveFl), &thisId);
  emlrtDestroyArray(&resolveFl);
  return y;
}

static void c_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  mxSetData((mxArray *)y, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)y, u->size, 3);
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *fricCoeff,
  const char_T *identifier, real_T **y_data, int32_T y_size[1])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(fricCoeff), &thisId, y_data, y_size);
  emlrtDestroyArray(&fricCoeff);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *sm, const
  char_T *identifier, real_T **y_data, int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(sm), &thisId, y_data, y_size);
  emlrtDestroyArray(&sm);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[1])
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *parOrd,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(parOrd), &thisId, y);
  emlrtDestroyArray(&parOrd);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = { 1000, 5 };

  const boolean_T bv0[2] = { true, false };

  int32_T iv5[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv5);
  ret_size[0] = iv5[0];
  ret_size[1] = iv5[1];
  *ret_data = (real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
}

static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[1])
{
  static const int32_T dims[1] = { 1000 };

  const boolean_T bv1[1] = { true };

  int32_T iv6[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv1[0],
    iv6);
  ret_size[0] = iv6[0];
  *ret_data = (real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { 9, 1000, 1000 };

  const boolean_T bv2[3] = { false, true, true };

  int32_T iv7[3];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv2[0],
    iv7);
  ret->size[0] = iv7[0];
  ret->size[1] = iv7[1];
  ret->size[2] = iv7[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void resolveCollisions_api(const mxArray *prhs[4], const mxArray *plhs[2])
{
  real_T (*xSm_data)[3000];
  emxArray_real_T *parOrd;
  real_T (*sm_data)[5000];
  int32_T sm_size[2];
  boolean_T resolveFl;
  real_T (*fricCoeff_data)[1000];
  int32_T fricCoeff_size[1];
  const mxArray *tmp;
  int32_T xSm_size[2];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  xSm_data = (real_T (*)[3000])mxMalloc(sizeof(real_T [3000]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &parOrd, 3, &b_emlrtRTEI, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, 5000);
  prhs[3] = emlrtProtectR2012b(prhs[3], 3, true, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "sm", (real_T **)&sm_data, sm_size);
  resolveFl = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "resolveFl");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "fricCoeff", (real_T **)
                     &fricCoeff_data, fricCoeff_size);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "parOrd", parOrd);

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("A");
  if (tmp != NULL) {
    A = i_emlrt_marshallIn(&st, tmp, "A");
    A_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("B");
  if (tmp != NULL) {
    B = i_emlrt_marshallIn(&st, tmp, "B");
    B_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("tRes");
  if (tmp != NULL) {
    tRes = i_emlrt_marshallIn(&st, tmp, "tRes");
    tRes_dirty = 0U;
  }

  /* Invoke the target function */
  resolveCollisions(&st, *sm_data, sm_size, resolveFl, *fricCoeff_data,
                    fricCoeff_size, parOrd, *xSm_data, xSm_size);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("A", emlrt_marshallOut(A));
  emlrtPutGlobalVariable("B", emlrt_marshallOut(B));
  emlrtPutGlobalVariable("tRes", emlrt_marshallOut(tRes));

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(*xSm_data, xSm_size);
  c_emlrt_marshallOut(parOrd, prhs[3]);
  plhs[1] = prhs[3];
  parOrd->canFreeData = false;
  emxFree_real_T(&parOrd);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_resolveCollisions_api.c) */
