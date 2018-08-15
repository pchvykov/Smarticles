/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_runSmarticles_api.c
 *
 * Code generation for function '_coder_runSmarticles_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "_coder_runSmarticles_api.h"
#include "runSmarticles_mexutil.h"
#include "runSmarticles_emxutil.h"
#include "runSmarticles_data.h"

/* Variable Definitions */
static emlrtRTEInfo c_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_runSmarticles_api",          /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *freqList,
  const char_T *identifier, real_T **y_data, int32_T y_size[1]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[1]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[1]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv6[3] = { 0, 0, 0 };

  y = NULL;
  m4 = emlrtCreateNumericArray(3, iv6, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m4, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m4, u->size, 3);
  emlrtAssign(&y, m4);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *freqList,
  const char_T *identifier, real_T **y_data, int32_T y_size[1])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(freqList), &thisId, y_data, y_size);
  emlrtDestroyArray(&freqList);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[1])
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[1])
{
  static const int32_T dims[1] = { 1000 };

  const boolean_T bv0[1] = { true };

  int32_T iv7[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv0[0],
    iv7);
  ret_size[0] = iv7[0];
  *ret_data = (real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
}

void runSmarticles_api(runSmarticlesStackData *SD, const mxArray * const prhs[6],
  const mxArray *plhs[1])
{
  real_T tMax;
  real_T windSize;
  real_T Upow;
  real_T (*freqList_data)[1000];
  int32_T freqList_size[1];
  real_T (*phaseList_data)[1000];
  int32_T phaseList_size[1];
  real_T (*fricCoeff_data)[1000];
  int32_T fricCoeff_size[1];
  const mxArray *tmp;
  emxArray_real_T *crdDat;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);

  /* Marshall function inputs */
  tMax = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "tMax");
  windSize = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "windSize");
  Upow = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "Upow");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "freqList", (real_T **)
                     &freqList_data, freqList_size);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "phaseList", (real_T **)
                     &phaseList_data, phaseList_size);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "fricCoeff", (real_T **)
                     &fricCoeff_data, fricCoeff_size);

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("tRes");
  if (tmp != NULL) {
    tRes = emlrt_marshallIn(&st, tmp, "tRes");
    tRes_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("A");
  if (tmp != NULL) {
    A = emlrt_marshallIn(&st, tmp, "A");
    A_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("B");
  if (tmp != NULL) {
    B = emlrt_marshallIn(&st, tmp, "B");
    B_dirty = 0U;
  }

  emxInit_real_T1(&st, &crdDat, 3, &c_emlrtRTEI, true);

  /* Invoke the target function */
  runSmarticles(SD, &st, tMax, windSize, Upow, *freqList_data, freqList_size,
                *phaseList_data, phaseList_size, *fricCoeff_data, fricCoeff_size,
                crdDat);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("tRes", emlrt_marshallOut(tRes));
  emlrtPutGlobalVariable("A", emlrt_marshallOut(A));
  emlrtPutGlobalVariable("B", emlrt_marshallOut(B));

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(crdDat);
  crdDat->canFreeData = false;
  emxFree_real_T(&crdDat);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_runSmarticles_api.c) */
