/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runSmarticles_data.c
 *
 * Code generation for function 'runSmarticles_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "runSmarticles_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T tRes;
real_T A;
real_T B;
uint32_T tRes_dirty;
uint32_T A_dirty;
uint32_T B_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "runSmarticles",                     /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo u_emlrtRSI = { 12,         /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pathName */
};

emlrtRSInfo bb_emlrtRSI = { 49,        /* lineNo */
  "power",                             /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

emlrtRSInfo db_emlrtRSI = { 61,        /* lineNo */
  "power",                             /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

emlrtRSInfo fb_emlrtRSI = { 44,        /* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRSInfo gb_emlrtRSI = { 253,       /* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRTEInfo i_emlrtRTEI = { 17,       /* lineNo */
  19,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"/* pName */
};

/* End of code generation (runSmarticles_data.c) */
