/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * resolveCollisions_data.c
 *
 * Code generation for function 'resolveCollisions_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "resolveCollisions_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T A;
real_T B;
real_T tRes;
uint32_T A_dirty;
uint32_T B_dirty;
uint32_T tRes_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "resolveCollisions",                 /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo f_emlrtRSI = { 15,         /* lineNo */
  "randperm",                          /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/randfun/randperm.m"/* pathName */
};

emlrtRSInfo l_emlrtRSI = { 44,         /* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 253,        /* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 37,        /* lineNo */
  "mpower",                            /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

emlrtRSInfo vb_emlrtRSI = { 124,       /* lineNo */
  "allOrAny",                          /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

emlrtRSInfo wb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

/* End of code generation (resolveCollisions_data.c) */
