/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runSmarticles_mexutil.c
 *
 * Code generation for function 'runSmarticles_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "runSmarticles_mexutil.h"
#include "runSmarticles_data.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void d_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void emlrt_checkEscapedGlobals(void)
{
  tRes_dirty |= tRes_dirty >> 1U;
  A_dirty |= A_dirty >> 1U;
  B_dirty |= B_dirty >> 1U;
}

real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *tMax, const char_T *
  identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(tMax), &thisId);
  emlrtDestroyArray(&tMax);
  return y;
}

const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m3;
  y = NULL;
  m3 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m3);
  return y;
}

void emlrt_synchGlobalsFromML(const emlrtStack *sp)
{
  tRes = emlrt_marshallIn(sp, emlrtGetGlobalVariable("tRes"), "tRes");
  A = emlrt_marshallIn(sp, emlrtGetGlobalVariable("A"), "A");
  B = emlrt_marshallIn(sp, emlrtGetGlobalVariable("B"), "B");
}

void emlrt_synchGlobalsToML(void)
{
  if (tRes_dirty & 1U) {
    emlrtPutGlobalVariable("tRes", emlrt_marshallOut(tRes));
    tRes_dirty &= 2U;
  }

  if (A_dirty & 1U) {
    emlrtPutGlobalVariable("A", emlrt_marshallOut(A));
    A_dirty &= 2U;
  }

  if (B_dirty & 1U) {
    emlrtPutGlobalVariable("B", emlrt_marshallOut(B));
    B_dirty &= 2U;
  }
}

/* End of code generation (runSmarticles_mexutil.c) */
