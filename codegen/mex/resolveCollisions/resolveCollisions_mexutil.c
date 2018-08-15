/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * resolveCollisions_mexutil.c
 *
 * Code generation for function 'resolveCollisions_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "resolveCollisions_mexutil.h"
#include "_coder_resolveCollisions_api.h"
#include "resolveCollisions_data.h"

/* Function Definitions */
void e_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void emlrt_checkEscapedGlobals(void)
{
  A_dirty |= A_dirty >> 1U;
  B_dirty |= B_dirty >> 1U;
  tRes_dirty |= tRes_dirty >> 1U;
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
  A = i_emlrt_marshallIn(sp, emlrtGetGlobalVariable("A"), "A");
  B = i_emlrt_marshallIn(sp, emlrtGetGlobalVariable("B"), "B");
  tRes = i_emlrt_marshallIn(sp, emlrtGetGlobalVariable("tRes"), "tRes");
}

void emlrt_synchGlobalsToML(void)
{
  if (A_dirty & 1U) {
    emlrtPutGlobalVariable("A", emlrt_marshallOut(A));
    A_dirty &= 2U;
  }

  if (B_dirty & 1U) {
    emlrtPutGlobalVariable("B", emlrt_marshallOut(B));
    B_dirty &= 2U;
  }

  if (tRes_dirty & 1U) {
    emlrtPutGlobalVariable("tRes", emlrt_marshallOut(tRes));
    tRes_dirty &= 2U;
  }
}

real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_A, const char_T
  *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(c_A), &thisId);
  emlrtDestroyArray(&c_A);
  return y;
}

real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/* End of code generation (resolveCollisions_mexutil.c) */
