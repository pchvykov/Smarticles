/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runSmarticles.c
 *
 * Code generation for function 'runSmarticles'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "rand.h"
#include "runSmarticles_mexutil.h"
#include "runSmarticles_emxutil.h"
#include "all.h"
#include "lineSegmentIntersect.h"
#include "smcle2coord.h"
#include "indexShapeCheck.h"
#include "mod.h"
#include "norm.h"
#include "ifWhileCond.h"
#include "toLogicalCheck.h"
#include "pairCollision2.h"
#include "find.h"
#include "sum.h"
#include "power.h"
#include "repmat.h"
#include "mpower.h"
#include "scalexpAlloc.h"
#include "sin.h"
#include "cos.h"
#include "nested_function.h"
#include "runSmarticles_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 5,     /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 13,  /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 24,  /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 26,  /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 27,  /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 29,  /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 41,  /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 47,  /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 48,  /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 49,  /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 98,  /* lineNo */
  "colon",                             /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 282, /* lineNo */
  "colon",                             /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 49,  /* lineNo */
  "nested_function",                   /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/nested_function.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 7,   /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 20,  /* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 100, /* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 9,   /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 11,  /* lineNo */
  "resolveCollisions",                 /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 21,  /* lineNo */
  "resolveCollisions",                 /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 22,  /* lineNo */
  "resolveCollisions",                 /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 28,  /* lineNo */
  "resolveCollisions",                 /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 35, /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 36, /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 13, /* lineNo */
  "min",                               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/datafun/min.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 19, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 81, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 243,/* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 44,    /* lineNo */
  3,                                   /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 59,  /* lineNo */
  1,                                   /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 56,  /* lineNo */
  34,                                  /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 27,  /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/lang/error.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  19,                                  /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 5, /* lineNo */
  1,                                   /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  34,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  22,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  22,                                  /* colNo */
  "smC",                               /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  11,                                  /* lineNo */
  25,                                  /* colNo */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pName */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  35,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 388,/* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/ops/colon.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  57,                                  /* lineNo */
  5,                                   /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  16,                                  /* colNo */
  "crdDat",                            /* aName */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  49,                                  /* lineNo */
  5,                                   /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  49,                                  /* lineNo */
  16,                                  /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  48,                                  /* lineNo */
  5,                                   /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  20,                                  /* colNo */
  "t",                                 /* aName */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  46,                                  /* lineNo */
  5,                                   /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  16,                                  /* colNo */
  "t",                                 /* aName */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "xSm",                               /* aName */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  13,                                  /* lineNo */
  1,                                   /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 42,    /* lineNo */
  20,                                  /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  35,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  69,                                  /* colNo */
  "fricCoeff",                         /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  88,                                  /* colNo */
  "nextAl",                            /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  16,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  99,                                  /* colNo */
  "fricCoeff",                         /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  121,                                 /* colNo */
  "fricCoeff",                         /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  39,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  20,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  35,                                  /* colNo */
  "xSm",                               /* aName */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  7,                                   /* lineNo */
  19,                                  /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  7,                                   /* lineNo */
  45,                                  /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 281,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  35,                                  /* lineNo */
  35,                                  /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { 2,   /* nDims */
  35,                                  /* lineNo */
  16,                                  /* colNo */
  "runSmarticles",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pName */
};

static emlrtRSInfo dc_emlrtRSI = { 44, /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 59, /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 56, /* lineNo */
  "runSmarticles",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/runSmarticles.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 27, /* lineNo */
  "error",                             /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/lang/error.m"/* pathName */
};

/* Function Declarations */
static void __anon_fcn(const emlrtStack *sp, const real_T freqList_data[], const
  int32_T freqList_size[1], const real_T phaseList_data[], const int32_T
  phaseList_size[1], real_T varargout_1_data[], int32_T varargout_1_size[2]);
static void b___anon_fcn(const emlrtStack *sp, const real_T freqList_data[],
  const int32_T freqList_size[1], const real_T phaseList_data[], const int32_T
  phaseList_size[1], real_T t, real_T varargout_1_data[], int32_T
  varargout_1_size[2]);
static void b_waitbar(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location);
static void c___anon_fcn(const emlrtStack *sp, real_T Upow, real_T windSize,
  const real_T vec_data[], const int32_T vec_size[2], real_T varargout_1_data[],
  int32_T varargout_1_size[2]);
static void close(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *waitbar(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

/* Function Definitions */
static void __anon_fcn(const emlrtStack *sp, const real_T freqList_data[], const
  int32_T freqList_size[1], const real_T phaseList_data[], const int32_T
  phaseList_size[1], real_T varargout_1_data[], int32_T varargout_1_size[2])
{
  int32_T varargin_1_size[1];
  int32_T loop_ub;
  int32_T i10;
  real_T varargin_1_data[1000];
  int32_T varargin_2_size[1];
  real_T varargin_2_data[1000];
  boolean_T b0;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  varargin_1_size[0] = freqList_size[0];
  loop_ub = freqList_size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    varargin_1_data[i10] = freqList_data[i10] * 0.0;
  }

  if (freqList_size[0] != phaseList_size[0]) {
    emlrtSizeEqCheck1DR2012b(freqList_size[0], phaseList_size[0], &h_emlrtECI,
      sp);
  }

  varargin_2_size[0] = freqList_size[0];
  loop_ub = freqList_size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    varargin_2_data[i10] = freqList_data[i10] * 0.0;
  }

  if (freqList_size[0] != phaseList_size[0]) {
    emlrtSizeEqCheck1DR2012b(freqList_size[0], phaseList_size[0], &i_emlrtECI,
      sp);
  }

  loop_ub = freqList_size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    varargin_1_data[i10] += phaseList_data[i10];
  }

  b_cos(varargin_1_data, varargin_1_size);
  loop_ub = freqList_size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    varargin_2_data[i10] += phaseList_data[i10];
  }

  b_sin(varargin_2_data, varargin_2_size);
  st.site = &n_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  b0 = true;
  if (varargin_2_size[0] != varargin_1_size[0]) {
    b0 = false;
  }

  if (!b0) {
    emlrtErrorWithMessageIdR2012b(&c_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  varargout_1_size[0] = varargin_1_size[0];
  varargout_1_size[1] = 2;
  loop_ub = varargin_1_size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    varargout_1_data[i10] = varargin_1_data[i10] * 3.1415926535897931 / 2.0;
  }

  loop_ub = varargin_2_size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    varargout_1_data[i10 + varargout_1_size[0]] = varargin_2_data[i10] *
      3.1415926535897931 / 2.0;
  }
}

static void b___anon_fcn(const emlrtStack *sp, const real_T freqList_data[],
  const int32_T freqList_size[1], const real_T phaseList_data[], const int32_T
  phaseList_size[1], real_T t, real_T varargout_1_data[], int32_T
  varargout_1_size[2])
{
  int32_T varargin_1_size[1];
  int32_T loop_ub;
  int32_T i15;
  real_T varargin_1_data[1000];
  int32_T varargin_2_size[1];
  real_T varargin_2_data[1000];
  boolean_T b1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  varargin_1_size[0] = freqList_size[0];
  loop_ub = freqList_size[0];
  for (i15 = 0; i15 < loop_ub; i15++) {
    varargin_1_data[i15] = freqList_data[i15] * t;
  }

  if (freqList_size[0] != phaseList_size[0]) {
    emlrtSizeEqCheck1DR2012b(freqList_size[0], phaseList_size[0], &h_emlrtECI,
      sp);
  }

  varargin_2_size[0] = freqList_size[0];
  loop_ub = freqList_size[0];
  for (i15 = 0; i15 < loop_ub; i15++) {
    varargin_2_data[i15] = freqList_data[i15] * t;
  }

  if (freqList_size[0] != phaseList_size[0]) {
    emlrtSizeEqCheck1DR2012b(freqList_size[0], phaseList_size[0], &i_emlrtECI,
      sp);
  }

  loop_ub = freqList_size[0];
  for (i15 = 0; i15 < loop_ub; i15++) {
    varargin_1_data[i15] += phaseList_data[i15];
  }

  b_cos(varargin_1_data, varargin_1_size);
  loop_ub = freqList_size[0];
  for (i15 = 0; i15 < loop_ub; i15++) {
    varargin_2_data[i15] += phaseList_data[i15];
  }

  b_sin(varargin_2_data, varargin_2_size);
  st.site = &n_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  b1 = true;
  if (varargin_2_size[0] != varargin_1_size[0]) {
    b1 = false;
  }

  if (!b1) {
    emlrtErrorWithMessageIdR2012b(&c_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  varargout_1_size[0] = varargin_1_size[0];
  varargout_1_size[1] = 2;
  loop_ub = varargin_1_size[0];
  for (i15 = 0; i15 < loop_ub; i15++) {
    varargout_1_data[i15] = varargin_1_data[i15] * 3.1415926535897931 / 2.0;
  }

  loop_ub = varargin_2_size[0];
  for (i15 = 0; i15 < loop_ub; i15++) {
    varargout_1_data[i15 + varargout_1_size[0]] = varargin_2_data[i15] *
      3.1415926535897931 / 2.0;
  }
}

static void b_waitbar(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "waitbar", true, location);
}

static void c___anon_fcn(const emlrtStack *sp, real_T Upow, real_T windSize,
  const real_T vec_data[], const int32_T vec_size[2], real_T varargout_1_data[],
  int32_T varargout_1_size[2])
{
  int32_T loop_ub;
  int32_T b_vec_size[1];
  int32_T i16;
  real_T b_vec_data[1000];
  real_T A_data[1000];
  int32_T A_size[1];
  int32_T c_vec_size[1];
  real_T minval_data[1000];
  int32_T b_A_size[1];
  real_T y;
  int32_T minval_size[1];
  real_T tmp_data[2000];
  int32_T tmp_size[2];
  int32_T varargout_1[2];
  int32_T iv4[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  loop_ub = vec_size[0];
  b_vec_size[0] = vec_size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    b_vec_data[i16] = vec_data[i16];
  }

  st.site = &vb_emlrtRSI;
  b_power(&st, b_vec_data, b_vec_size, A_data, A_size);
  loop_ub = vec_size[0];
  c_vec_size[0] = vec_size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    b_vec_data[i16] = vec_data[i16 + vec_size[0]];
  }

  st.site = &vb_emlrtRSI;
  b_power(&st, b_vec_data, c_vec_size, minval_data, b_vec_size);
  if (A_size[0] != b_vec_size[0]) {
    emlrtSizeEqCheck1DR2012b(A_size[0], b_vec_size[0], &j_emlrtECI, sp);
  }

  varargout_1_size[0] = vec_size[0];
  varargout_1_size[1] = 2;
  loop_ub = vec_size[0] * vec_size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    varargout_1_data[i16] = -vec_data[i16];
  }

  b_A_size[0] = A_size[0];
  loop_ub = A_size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    b_vec_data[i16] = A_data[i16] + minval_data[i16];
  }

  st.site = &vb_emlrtRSI;
  c_power(&st, b_vec_data, b_A_size, Upow / 2.0 - 1.0, A_data, A_size);
  loop_ub = A_size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    A_data[i16] *= Upow;
  }

  st.site = &wb_emlrtRSI;
  y = mpower(&st, windSize * 0.8, Upow - 2.0);
  loop_ub = A_size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    A_data[i16] /= y;
  }

  st.site = &vb_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  d_st.site = &bc_emlrtRSI;
  e_st.site = &cc_emlrtRSI;
  b_vec_size[0] = (int16_T)A_size[0];
  if (!b_dimagree(b_vec_size, A_size)) {
    emlrtErrorWithMessageIdR2012b(&e_st, &i_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  for (loop_ub = 0; loop_ub + 1 <= (int16_T)A_size[0]; loop_ub++) {
    minval_data[loop_ub] = muDoubleScalarMin(A_data[loop_ub], 10.0);
  }

  st.site = &wb_emlrtRSI;
  y = b_mpower(windSize * 0.8);
  minval_size[0] = (int16_T)A_size[0];
  loop_ub = (int16_T)A_size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    b_vec_data[i16] = minval_data[i16] / y;
  }

  st.site = &vb_emlrtRSI;
  d_repmat(&st, b_vec_data, minval_size, tmp_data, tmp_size);
  for (i16 = 0; i16 < 2; i16++) {
    varargout_1[i16] = varargout_1_size[i16];
    iv4[i16] = tmp_size[i16];
  }

  if ((varargout_1[0] != iv4[0]) || (varargout_1[1] != iv4[1])) {
    emlrtSizeEqCheckNDR2012b(&varargout_1[0], &iv4[0], &k_emlrtECI, sp);
  }

  varargout_1_size[1] = 2;
  loop_ub = vec_size[0] << 1;
  for (i16 = 0; i16 < loop_ub; i16++) {
    varargout_1_data[i16] *= tmp_data[i16];
  }
}

static void close(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "close", true, location);
}

static const mxArray *waitbar(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m5;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 1, &pArray, "waitbar", true, location);
}

void runSmarticles(runSmarticlesStackData *SD, const emlrtStack *sp, real_T tMax,
                   real_T windSize, real_T Upow, const real_T freqList_data[],
                   const int32_T freqList_size[1], const real_T phaseList_data[],
                   const int32_T phaseList_size[1], const real_T fricCoeff_data[],
                   const int32_T fricCoeff_size[1], emxArray_real_T *crdDat)
{
  emxArray_real_T *t;
  int32_T i0;
  real_T ndbl;
  real_T apnd;
  real_T cdiff;
  int32_T nm1d2;
  cell_wrap_1 gates_environment[2];
  int32_T xSm_size[2];
  int32_T n;
  int16_T tmp_data[1000];
  real_T varargout_1_data[2000];
  int32_T varargout_1_size[2];
  int32_T smi[2];
  int32_T k;
  int32_T b_smi;
  boolean_T collFl;
  real_T Fcent_environment[2];
  real_T r[3];
  real_T nextAl_data[2000];
  int32_T nextAl_size[2];
  real_T b_windSize[3];
  int32_T varargout_1[2];
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 15 };

  static const char_T varargin_1[15] = { 'c', 'a', 'n', 'n', 'o', 't', ' ', 'b',
    'u', 'i', 'l', 'd', ' ', 'I', 'C' };

  const mxArray *w = NULL;
  int16_T i1;
  int32_T loop_ub;
  real_T sm[10];
  real_T crd[16];
  int16_T i2;
  int32_T b_loop_ub;
  int32_T sm_size_idx_0;
  real_T b_crd[12];
  real_T c_crd[12];
  boolean_T inters_intAdjacencyMatrix[9];
  real_T expl_temp[9];
  real_T b_expl_temp[9];
  real_T c_expl_temp[9];
  real_T d_expl_temp[9];
  int32_T c_loop_ub;
  int32_T b_varargin_1;
  int32_T i3;
  boolean_T b_inters_intAdjacencyMatrix[9];
  boolean_T x[3];
  int32_T d_loop_ub;
  boolean_T b_y;
  int32_T i4;
  int32_T e_loop_ub;
  boolean_T exitg1;
  int32_T i5;
  int16_T i6;
  int32_T f_loop_ub;
  int32_T i7;
  int32_T xSm_size_idx_0;
  int32_T g_loop_ub;
  real_T res[6];
  int32_T h_loop_ub;
  int32_T i_loop_ub;
  real_T sm_data[5000];
  real_T sm12v[2];
  int32_T b_xSm_size[2];
  real_T b_xSm_data[2000];
  int32_T b_varargout_1_size[2];
  real_T smC_data[1000];
  int32_T smC_size[1];
  int32_T x_size[1];
  boolean_T x_data[1000];
  int32_T ii_data[1000];
  int32_T ii_size[1];
  int16_T i8;
  int32_T c_smi[2];
  real_T nextAl[4];
  boolean_T b_res[6];
  real_T c_y[4];
  real_T b_sm[4];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &emlrtRSI;
  emxInit_real_T(&st, &t, 2, &b_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(tRes) || muDoubleScalarIsNaN(tMax)) {
    i0 = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)t, i0, sizeof(real_T), &emlrtRTEI);
    t->data[0] = rtNaN;
  } else if ((tRes == 0.0) || ((0.0 < tMax) && (tRes < 0.0)) || ((tMax < 0.0) &&
              (tRes > 0.0))) {
    i0 = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 0;
    emxEnsureCapacity(&st, (emxArray__common *)t, i0, sizeof(real_T), &emlrtRTEI);
  } else if (muDoubleScalarIsInf(tMax) && (muDoubleScalarIsInf(tRes) || (0.0 ==
               tMax))) {
    i0 = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)t, i0, sizeof(real_T), &emlrtRTEI);
    t->data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(tRes)) {
    i0 = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)t, i0, sizeof(real_T), &emlrtRTEI);
    t->data[0] = 0.0;
  } else if (muDoubleScalarFloor(tRes) == tRes) {
    i0 = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = (int32_T)muDoubleScalarFloor(tMax / tRes) + 1;
    emxEnsureCapacity(&st, (emxArray__common *)t, i0, sizeof(real_T), &emlrtRTEI);
    nm1d2 = (int32_T)muDoubleScalarFloor(tMax / tRes);
    for (i0 = 0; i0 <= nm1d2; i0++) {
      t->data[t->size[0] * i0] = tRes * (real_T)i0;
    }
  } else {
    b_st.site = &k_emlrtRSI;
    ndbl = muDoubleScalarFloor(tMax / tRes + 0.5);
    apnd = ndbl * tRes;
    if (tRes > 0.0) {
      cdiff = apnd - tMax;
    } else {
      cdiff = tMax - apnd;
    }

    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarAbs
        (tMax)) {
      ndbl++;
      apnd = tMax;
    } else if (cdiff > 0.0) {
      apnd = (ndbl - 1.0) * tRes;
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      n = (int32_T)ndbl;
    } else {
      n = 0;
    }

    c_st.site = &l_emlrtRSI;
    if (2.147483647E+9 < ndbl) {
      emlrtErrorWithMessageIdR2012b(&c_st, &d_emlrtRTEI, "Coder:MATLAB:pmaxsize",
        0);
    }

    i0 = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = n;
    emxEnsureCapacity(&b_st, (emxArray__common *)t, i0, sizeof(real_T),
                      &emlrtRTEI);
    if (n > 0) {
      t->data[0] = 0.0;
      if (n > 1) {
        t->data[n - 1] = apnd;
        nm1d2 = (n - 1) / 2;
        for (k = 1; k < nm1d2; k++) {
          ndbl = (real_T)k * tRes;
          t->data[k] = ndbl;
          t->data[(n - k) - 1] = apnd - ndbl;
        }

        if (nm1d2 << 1 == n - 1) {
          t->data[nm1d2] = apnd / 2.0;
        } else {
          ndbl = (real_T)nm1d2 * tRes;
          t->data[nm1d2] = ndbl;
          t->data[nm1d2 + 1] = apnd - ndbl;
        }
      }
    }
  }

  /* ====Define motion gate=============== */
  nested_function_nested_function(freqList_data, freqList_size, phaseList_data,
    phaseList_size, gates_environment);

  /* variable frequency circle gate */
  /*  gates = @(t) [cos(t),sin(t);cos(t),sin(t)]*pi/2; %circle gate */
  /*  chopTri = @(t) max(min(2*sawtooth(t,0.5),1),-1); %for sq wave */
  /*  gates = @(t) [chopTri(freqList*t+phaseList),chopTri(freqList*t+pi/2+phaseList)]*pi/2; %var freq square gate */
  xSm_size[0] = freqList_size[0];
  xSm_size[1] = 5;
  nm1d2 = freqList_size[0] * 5;
  for (i0 = 0; i0 < nm1d2; i0++) {
    SD->f0.xSm_data[i0] = 0.0;
  }

  nm1d2 = (int16_T)((int16_T)freqList_size[0] - 1);
  for (i0 = 0; i0 <= nm1d2; i0++) {
    tmp_data[i0] = (int16_T)i0;
  }

  st.site = &b_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  __anon_fcn(&b_st, gates_environment[0].f1.data, gates_environment[0].f1.size,
             gates_environment[1].f1.data, gates_environment[1].f1.size,
             varargout_1_data, varargout_1_size);
  smi[0] = (int16_T)((int16_T)freqList_size[0] - 1) + 1;
  smi[1] = 2;
  emlrtSubAssignSizeCheckR2012b(smi, 2, varargout_1_size, 2, &g_emlrtECI, sp);
  nm1d2 = varargout_1_size[0];
  for (i0 = 0; i0 < 2; i0++) {
    for (k = 0; k < nm1d2; k++) {
      SD->f0.xSm_data[tmp_data[k] + xSm_size[0] * (3 + i0)] = varargout_1_data[k
        + varargout_1_size[0] * i0];
    }
  }

  /* ======Set smarticle initial positions: [cx,cy, theta, al1, al2] - c.o.m coord, body orientation, arm angles */
  /*  xSm=[2,1,pi/4,pi/8,pi/8]; */
  /*  xSm(:,1:3)=(rand(Nsm,3)-0.5).*repmat([10,10, 2*pi],Nsm,1); */
  b_smi = 1;
  while (b_smi - 1 <= freqList_size[0] - 1) {
    collFl = true;
    ndbl = 1.0;
    while (collFl) {
      ndbl++;
      collFl = false;
      st.site = &c_emlrtRSI;
      emlrt_checkEscapedGlobals();
      emlrtRandu(&r[0], 3);
      b_windSize[0] = windSize;
      b_windSize[1] = windSize;
      b_windSize[2] = 6.2831853071795862;
      if (!((b_smi >= 1) && (b_smi <= xSm_size[0]))) {
        emlrtDynamicBoundsCheckR2012b(b_smi, 1, xSm_size[0], &h_emlrtBCI, sp);
      }

      for (i0 = 0; i0 < 3; i0++) {
        SD->f0.xSm_data[(b_smi + xSm_size[0] * i0) - 1] = (r[i0] - 0.5) *
          b_windSize[i0];
      }

      /* add new smcle */
      nm1d2 = 0;
      while (nm1d2 <= b_smi - 2) {
        /* check that it doesn't collide with previous ones */
        st.site = &d_emlrtRSI;
        varargout_1[0] = b_smi;
        varargout_1[1] = nm1d2 + 1;
        for (i0 = 0; i0 < 5; i0++) {
          for (k = 0; k < 2; k++) {
            if (!((varargout_1[k] >= 1) && (varargout_1[k] <= xSm_size[0]))) {
              emlrtDynamicBoundsCheckR2012b(varargout_1[k], 1, xSm_size[0],
                &q_emlrtBCI, &st);
            }

            sm[k + (i0 << 1)] = SD->f0.xSm_data[(varargout_1[k] + xSm_size[0] *
              i0) - 1];
          }
        }

        /* resolve a pair-collision, returning new sm position values */
        /* in: the two smcle 5-tuples, flag whether to resolve or just check collisions */
        /* out: T/F if just checking, list of new 3-tuples (cx,cy,theta) if resolving */
        /*  check for collisions:---------- */
        smcle2coord(sm, crd);
        for (i0 = 0; i0 < 4; i0++) {
          b_crd[3 * i0] = crd[i0 << 1];
          b_crd[1 + 3 * i0] = crd[(2 + i0) << 1];
          b_crd[2 + 3 * i0] = crd[(4 + i0) << 1];
          c_crd[3 * i0] = crd[1 + (i0 << 1)];
          c_crd[1 + 3 * i0] = crd[1 + ((2 + i0) << 1)];
          c_crd[2 + 3 * i0] = crd[1 + ((4 + i0) << 1)];
        }

        lineSegmentIntersect(b_crd, c_crd, inters_intAdjacencyMatrix, expl_temp,
                             b_expl_temp, c_expl_temp, d_expl_temp);
        for (i0 = 0; i0 < 9; i0++) {
          b_inters_intAdjacencyMatrix[i0] = !inters_intAdjacencyMatrix[i0];
        }

        b_st.site = &t_emlrtRSI;
        all(&b_st, b_inters_intAdjacencyMatrix, x);
        b_y = true;
        k = 1;
        exitg1 = false;
        while ((!exitg1) && (k < 4)) {
          if (!x[k - 1]) {
            b_y = false;
            exitg1 = true;
          } else {
            k++;
          }
        }

        if (b_y) {
          for (i0 = 0; i0 < 6; i0++) {
            res[i0] = 0.0;
          }
        } else {
          /* if no collision, return false */
          for (i0 = 0; i0 < 6; i0++) {
            res[i0] = 1.0;
          }
        }

        if (collFl) {
          collFl = true;
        } else {
          st.site = &e_emlrtRSI;
          if (res[0] != 0.0) {
            collFl = true;
          } else {
            collFl = false;
          }
        }

        /* only check for collisions */
        nm1d2++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (ndbl > 1000.0) {
        st.site = &f_emlrtRSI;
        emlrt_synchGlobalsToML();
        y = NULL;
        m0 = emlrtCreateCharArray(2, iv0);
        emlrtInitCharArrayR2013a(&st, 15, m0, &varargin_1[0]);
        emlrtAssign(&y, m0);
        b_st.site = &hc_emlrtRSI;
        d_error(&b_st, y, &d_emlrtMCI);
        emlrt_synchGlobalsFromML(&st);
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    b_smi++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  xSm(:,1:3)=[-3,0,pi/2; -1.1,0.1,pi/2-0.1]; */
  /* ====Define Central attractive force======= */
  b_nested_function_nested_functi(Upow, windSize, Fcent_environment);

  /* Circular "plate" potential  */
  /*      Fcent = @(vec) -vec.*repmat(max(0,1-windSize*0.6./sqrt(vec(:,1).^2+vec(:,2).^2)),1,2); */
  /* ====Run simulation============== */
  i0 = t->size[1];
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &g_emlrtBCI, sp);
  }

  st.site = &g_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  b___anon_fcn(&b_st, gates_environment[0].f1.data, gates_environment[0].f1.size,
               gates_environment[1].f1.data, gates_environment[1].f1.size,
               t->data[0], nextAl_data, nextAl_size);
  i0 = crdDat->size[0] * crdDat->size[1] * crdDat->size[2];
  crdDat->size[0] = freqList_size[0];
  crdDat->size[1] = 5;
  k = t->size[1] - 1;
  if (!(k >= 0)) {
    emlrtNonNegativeCheckR2012b(k, &emlrtDCI, sp);
  }

  crdDat->size[2] = k;
  emxEnsureCapacity(sp, (emxArray__common *)crdDat, i0, sizeof(real_T),
                    &emlrtRTEI);
  i0 = t->size[1] - 1;
  if (!(i0 >= 0)) {
    emlrtNonNegativeCheckR2012b(i0, &emlrtDCI, sp);
  }

  nm1d2 = freqList_size[0] * 5 * i0;
  for (i0 = 0; i0 < nm1d2; i0++) {
    crdDat->data[i0] = 0.0;
  }

  emlrt_synchGlobalsToML();
  st.site = &dc_emlrtRSI;
  emlrtAssign(&w, waitbar(&st, emlrt_marshallOut(0.0), &emlrtMCI));
  emlrt_synchGlobalsFromML(sp);
  if (0 <= t->size[1] - 2) {
    i1 = (int16_T)((int16_T)freqList_size[0] - 1);
    loop_ub = (int16_T)((int16_T)freqList_size[0] - 1);
    i2 = (int16_T)((int16_T)freqList_size[0] - 1);
    b_loop_ub = (int16_T)((int16_T)freqList_size[0] - 1);
    sm_size_idx_0 = freqList_size[0];
    c_loop_ub = freqList_size[0] * 5;
    b_varargin_1 = freqList_size[0];
    i3 = freqList_size[0];
    d_loop_ub = freqList_size[0] - 1;
    i4 = freqList_size[0];
    e_loop_ub = freqList_size[0];
    i5 = freqList_size[0];
    i6 = (int16_T)((int16_T)freqList_size[0] - 1);
    f_loop_ub = (int16_T)((int16_T)freqList_size[0] - 1);
    i7 = freqList_size[0];
    xSm_size_idx_0 = freqList_size[0];
    g_loop_ub = freqList_size[0];
    h_loop_ub = freqList_size[0];
    i_loop_ub = freqList_size[0];
  }

  n = 0;
  while (n <= t->size[1] - 2) {
    for (i0 = 0; i0 <= loop_ub; i0++) {
      tmp_data[i0] = (int16_T)i0;
    }

    smi[0] = i1 + 1;
    smi[1] = 2;
    emlrtSubAssignSizeCheckR2012b(smi, 2, nextAl_size, 2, &f_emlrtECI, sp);
    nm1d2 = nextAl_size[0];
    for (i0 = 0; i0 < 2; i0++) {
      for (k = 0; k < nm1d2; k++) {
        SD->f0.xSm_data[tmp_data[k] + xSm_size[0] * (3 + i0)] = nextAl_data[k +
          nextAl_size[0] * i0];
      }
    }

    /* move the arms */
    st.site = &h_emlrtRSI;
    i0 = t->size[1];
    k = (int32_T)((1.0 + (real_T)n) + 1.0);
    if (!((k >= 1) && (k <= i0))) {
      emlrtDynamicBoundsCheckR2012b(k, 1, i0, &f_emlrtBCI, &st);
    }

    b_st.site = &m_emlrtRSI;
    b___anon_fcn(&b_st, gates_environment[0].f1.data, gates_environment[0].
                 f1.size, gates_environment[1].f1.data, gates_environment[1].
                 f1.size, t->data[n + 1], nextAl_data, nextAl_size);
    for (i0 = 0; i0 <= b_loop_ub; i0++) {
      tmp_data[i0] = (int16_T)i0;
    }

    st.site = &i_emlrtRSI;
    for (i0 = 0; i0 < c_loop_ub; i0++) {
      sm_data[i0] = SD->f0.xSm_data[i0];
    }

    /* resolve all collisions sequentially and iteratively until clear, returning new sm position values */
    /* in: list of smcle 5-tuples, flag whether to resolve or just check collisions */
    /* out: T/F if just checking, list of new 3-tuples (cx,cy,theta) if resolving */
    collFl = true;
    apnd = 1.0;
    while (collFl) {
      /* sequentially resolve all collisions until none left */
      collFl = false;
      b_smi = 1;
      while (b_smi - 1 <= xSm_size[0] - 1) {
        /* check for potential collisions based on distance to other smarticles: */
        if (!((b_smi >= 1) && (b_smi <= sm_size_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(b_smi, 1, sm_size_idx_0, &d_emlrtBCI,
            &st);
        }

        for (i0 = 0; i0 < 2; i0++) {
          sm12v[i0] = sm_data[(b_smi + sm_size_idx_0 * i0) - 1];
        }

        b_st.site = &v_emlrtRSI;
        c_repmat(&b_st, sm12v, b_varargin_1, varargout_1_data, varargout_1_size);
        for (i0 = 0; i0 < 2; i0++) {
          varargout_1[i0] = varargout_1_size[i0];
        }

        smi[0] = sm_size_idx_0;
        smi[1] = 2;
        if ((varargout_1[0] != smi[0]) || (varargout_1[1] != 2)) {
          emlrtSizeEqCheckNDR2012b(&varargout_1[0], &smi[0], &emlrtECI, &st);
        }

        b_st.site = &v_emlrtRSI;
        ndbl = 2.0 * A + B;
        c_st.site = &bb_emlrtRSI;
        ndbl *= ndbl;
        b_st.site = &v_emlrtRSI;
        b_varargout_1_size[0] = varargout_1_size[0];
        b_varargout_1_size[1] = 2;
        nm1d2 = varargout_1_size[0];
        for (i0 = 0; i0 < 2; i0++) {
          for (k = 0; k < nm1d2; k++) {
            b_xSm_data[k + b_varargout_1_size[0] * i0] = varargout_1_data[k +
              varargout_1_size[0] * i0] - sm_data[k + sm_size_idx_0 * i0];
          }
        }

        c_st.site = &v_emlrtRSI;
        power(&c_st, b_xSm_data, b_varargout_1_size, varargout_1_data,
              varargout_1_size);
        sum(varargout_1_data, varargout_1_size, smC_data, smC_size);
        x_size[0] = smC_size[0];
        nm1d2 = smC_size[0];
        for (i0 = 0; i0 < nm1d2; i0++) {
          x_data[i0] = (smC_data[i0] < ndbl);
        }

        c_st.site = &fb_emlrtRSI;
        eml_find(&c_st, x_data, x_size, ii_data, ii_size);
        smC_size[0] = ii_size[0];
        nm1d2 = ii_size[0];
        for (i0 = 0; i0 < nm1d2; i0++) {
          smC_data[i0] = ii_data[i0];
        }

        nm1d2 = 0;
        while (nm1d2 <= smC_size[0] - 1) {
          i0 = nm1d2 + 1;
          if (!((i0 >= 1) && (i0 <= smC_size[0]))) {
            emlrtDynamicBoundsCheckR2012b(i0, 1, smC_size[0], &c_emlrtBCI, &st);
          }

          /* index of the colliding smcle */
          if ((int32_T)smC_data[nm1d2] != b_smi) {
            /* no collision with itself */
            /*              if(resolveFl) %current pair being checked: */
            /*                  crd=smcle2coord(sm([smi,smci],:)); */
            /*                  cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12); */
            /*  %                 pause(); */
            /*              end */
            b_st.site = &w_emlrtRSI;
            b_indexShapeCheck(&b_st, fricCoeff_size[0]);
            varargout_1[0] = b_smi;
            varargout_1[1] = (int32_T)smC_data[nm1d2];
            for (i0 = 0; i0 < 5; i0++) {
              for (k = 0; k < 2; k++) {
                if (!((varargout_1[k] >= 1) && (varargout_1[k] <= sm_size_idx_0)))
                {
                  emlrtDynamicBoundsCheckR2012b(varargout_1[k], 1, sm_size_idx_0,
                    &i_emlrtBCI, &st);
                }

                sm[k + (i0 << 1)] = sm_data[(varargout_1[k] + sm_size_idx_0 * i0)
                  - 1];
              }
            }

            if (!((b_smi >= 1) && (b_smi <= fricCoeff_size[0]))) {
              emlrtDynamicBoundsCheckR2012b(b_smi, 1, fricCoeff_size[0],
                &j_emlrtBCI, &st);
            }

            c_smi[0] = b_smi;
            i0 = (int32_T)smC_data[nm1d2];
            if (!((i0 >= 1) && (i0 <= fricCoeff_size[0]))) {
              emlrtDynamicBoundsCheckR2012b(i0, 1, fricCoeff_size[0],
                &j_emlrtBCI, &st);
            }

            c_smi[1] = i0;
            for (i0 = 0; i0 < 2; i0++) {
              sm12v[i0] = fricCoeff_data[c_smi[i0] - 1];
            }

            varargout_1[0] = b_smi;
            varargout_1[1] = (int32_T)smC_data[nm1d2];
            for (i0 = 0; i0 < 2; i0++) {
              for (k = 0; k < 2; k++) {
                if (!((varargout_1[k] >= 1) && (varargout_1[k] <= nextAl_size[0])))
                {
                  emlrtDynamicBoundsCheckR2012b(varargout_1[k], 1, nextAl_size[0],
                    &k_emlrtBCI, &st);
                }

                nextAl[k + (i0 << 1)] = nextAl_data[(varargout_1[k] +
                  nextAl_size[0] * i0) - 1];
              }
            }

            b_st.site = &w_emlrtRSI;
            pairCollision2(&b_st, sm, sm12v, nextAl, res);

            /* resolve pair collision */
            b_st.site = &x_emlrtRSI;
            toLogicalCheck(&b_st, res);
            for (i0 = 0; i0 < 6; i0++) {
              b_res[i0] = !(res[i0] != 0.0);
            }

            b_st.site = &x_emlrtRSI;
            b_all(&b_st, b_res, x);
            if ((!ifWhileCond(x)) && (!(apnd > 150.0 * (real_T)b_varargin_1))) {
              /* if no collision, continue */
              /* if can't resolve, just move on */
              collFl = true;

              /* else set collision flag */
              varargout_1[0] = b_smi;
              varargout_1[1] = (int32_T)smC_data[nm1d2];
              for (i0 = 0; i0 < 3; i0++) {
                for (k = 0; k < 2; k++) {
                  if (!((varargout_1[k] >= 1) && (varargout_1[k] <=
                        sm_size_idx_0))) {
                    emlrtDynamicBoundsCheckR2012b(varargout_1[k], 1,
                      sm_size_idx_0, &l_emlrtBCI, &st);
                  }

                  sm_data[(varargout_1[k] + sm_size_idx_0 * i0) - 1] = res[k +
                    (i0 << 1)];
                }
              }

              if (!((b_smi >= 1) && (b_smi <= sm_size_idx_0))) {
                emlrtDynamicBoundsCheckR2012b(b_smi, 1, sm_size_idx_0,
                  &b_emlrtBCI, &st);
              }

              i0 = (int32_T)smC_data[nm1d2];
              if (!((i0 >= 1) && (i0 <= sm_size_idx_0))) {
                emlrtDynamicBoundsCheckR2012b(i0, 1, sm_size_idx_0, &emlrtBCI,
                  &st);
              }

              for (i0 = 0; i0 < 2; i0++) {
                sm12v[i0] = sm_data[(b_smi + sm_size_idx_0 * i0) - 1] - sm_data
                  [((int32_T)smC_data[nm1d2] + sm_size_idx_0 * i0) - 1];
              }

              ndbl = norm(sm12v);

              /* vector between smarticles */
              if ((ndbl < 0.2 * B) || (((int32_T)apnd > 10 * b_varargin_1) &&
                   (b_mod(apnd) < 1.0))) {
                /* can't resolve collisions */
                b_st.site = &y_emlrtRSI;
                b_indexShapeCheck(&b_st, fricCoeff_size[0]);
                b_st.site = &y_emlrtRSI;
                b_indexShapeCheck(&b_st, fricCoeff_size[0]);
                b_st.site = &y_emlrtRSI;
                cdiff = b_rand();
                if (!((b_smi >= 1) && (b_smi <= fricCoeff_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(b_smi, 1, fricCoeff_size[0],
                    &m_emlrtBCI, &st);
                }

                varargout_1[0] = b_smi;
                i0 = (int32_T)smC_data[nm1d2];
                if (!((i0 >= 1) && (i0 <= fricCoeff_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(i0, 1, fricCoeff_size[0],
                    &m_emlrtBCI, &st);
                }

                varargout_1[1] = i0;
                if (!((b_smi >= 1) && (b_smi <= fricCoeff_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(b_smi, 1, fricCoeff_size[0],
                    &n_emlrtBCI, &st);
                }

                varargout_1_size[0] = b_smi;
                i0 = (int32_T)smC_data[nm1d2];
                if (!((i0 >= 1) && (i0 <= fricCoeff_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(i0, 1, fricCoeff_size[0],
                    &n_emlrtBCI, &st);
                }

                varargout_1_size[1] = i0;
                smi[0] = b_smi;
                smi[1] = (int32_T)smC_data[nm1d2];
                for (i0 = 0; i0 < 2; i0++) {
                  c_y[i0] = fricCoeff_data[varargout_1[i0] - 1];
                  c_y[2 + i0] = fricCoeff_data[varargout_1_size[i0] - 1];
                  nextAl[i0 << 1] = sm12v[i0] / ndbl * cdiff * 0.03 * B;
                  nextAl[1 + (i0 << 1)] = -sm12v[i0] / ndbl * cdiff * 0.03 * B;
                }

                varargout_1[0] = b_smi;
                varargout_1[1] = (int32_T)smC_data[nm1d2];
                for (i0 = 0; i0 < 2; i0++) {
                  for (k = 0; k < 2; k++) {
                    if (!((smi[k] >= 1) && (smi[k] <= sm_size_idx_0))) {
                      emlrtDynamicBoundsCheckR2012b(smi[k], 1, sm_size_idx_0,
                        &o_emlrtBCI, &st);
                    }

                    b_sm[k + (i0 << 1)] = sm_data[(smi[k] + sm_size_idx_0 * i0)
                      - 1] + nextAl[k + (i0 << 1)] / c_y[k + (i0 << 1)];
                  }
                }

                for (i0 = 0; i0 < 2; i0++) {
                  for (k = 0; k < 2; k++) {
                    if (!((varargout_1[k] >= 1) && (varargout_1[k] <=
                          sm_size_idx_0))) {
                      emlrtDynamicBoundsCheckR2012b(varargout_1[k], 1,
                        sm_size_idx_0, &p_emlrtBCI, &st);
                    }

                    sm_data[(varargout_1[k] + sm_size_idx_0 * i0) - 1] = b_sm[k
                      + (i0 << 1)];
                  }
                }

                /* rotate COM; add repulsive noise to prevent sticking together */
              }
            }
          }

          nm1d2++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }

        b_smi++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      /* if just checking collisions */
      /*        collFl=false; */
      apnd++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    smi[0] = i2 + 1;
    smi[1] = 3;
    varargout_1[0] = i3;
    varargout_1[1] = 3;
    emlrtSubAssignSizeCheckR2012b(smi, 2, varargout_1, 2, &e_emlrtECI, sp);
    for (i0 = 0; i0 < 3; i0++) {
      for (k = 0; k <= d_loop_ub; k++) {
        SD->f0.xSm_data[tmp_data[k] + xSm_size[0] * i0] = sm_data[k +
          sm_size_idx_0 * i0];
      }
    }

    /* resolve all collisions sequentially */
    ndbl = tRes;
    st.site = &j_emlrtRSI;
    b_xSm_size[0] = i4;
    b_xSm_size[1] = 2;
    for (i0 = 0; i0 < 2; i0++) {
      for (k = 0; k < e_loop_ub; k++) {
        b_xSm_data[k + i4 * i0] = SD->f0.xSm_data[k + xSm_size[0] * i0];
      }
    }

    b_st.site = &m_emlrtRSI;
    c___anon_fcn(&b_st, Fcent_environment[0], Fcent_environment[1], b_xSm_data,
                 b_xSm_size, varargout_1_data, varargout_1_size);
    varargout_1_size[1] = 2;
    nm1d2 = varargout_1_size[0] << 1;
    for (i0 = 0; i0 < nm1d2; i0++) {
      varargout_1_data[i0] *= ndbl;
    }

    smi[0] = i5;
    smi[1] = 2;
    for (i0 = 0; i0 < 2; i0++) {
      varargout_1[i0] = varargout_1_size[i0];
    }

    if ((smi[0] != varargout_1[0]) || (2 != varargout_1[1])) {
      emlrtSizeEqCheckNDR2012b(&smi[0], &varargout_1[0], &d_emlrtECI, sp);
    }

    for (i0 = 0; i0 <= f_loop_ub; i0++) {
      tmp_data[i0] = (int16_T)i0;
    }

    smi[0] = i6 + 1;
    smi[1] = 2;
    varargout_1[0] = i7;
    varargout_1[1] = 2;
    emlrtSubAssignSizeCheckR2012b(smi, 2, varargout_1, 2, &c_emlrtECI, sp);
    for (i0 = 0; i0 < 2; i0++) {
      for (k = 0; k < g_loop_ub; k++) {
        b_xSm_data[k + xSm_size_idx_0 * i0] = SD->f0.xSm_data[k + xSm_size[0] *
          i0] + varargout_1_data[k + varargout_1_size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      for (k = 0; k < h_loop_ub; k++) {
        SD->f0.xSm_data[tmp_data[k] + xSm_size[0] * i0] = b_xSm_data[k +
          xSm_size_idx_0 * i0];
      }
    }

    /*      if(livePlot && mod(ti,0.05*2*pi/tRes)<1 && t(ti)>000) %show smarticles motion live */
    /*          crd=smcle2coord(xSm); */
    /*          cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*(windSize+B)*1.1); */
    /*          pause(0.01);  */
    /*      end */
    if (e_mod(1.0 + (real_T)n, (real_T)t->size[1] / 30.0) <= 1.0) {
      emlrt_synchGlobalsToML();
      st.site = &fc_emlrtRSI;
      b_waitbar(&st, emlrt_marshallOut((1.0 + (real_T)n) / (real_T)t->size[1]),
                emlrtAlias(w), &c_emlrtMCI);
      emlrt_synchGlobalsFromML(sp);
    }

    i8 = (int16_T)((int16_T)crdDat->size[0] - 1);
    nm1d2 = i8;
    for (i0 = 0; i0 <= nm1d2; i0++) {
      tmp_data[i0] = (int16_T)i0;
    }

    i0 = crdDat->size[2];
    k = n + 1;
    if (!((k >= 1) && (k <= i0))) {
      emlrtDynamicBoundsCheckR2012b(k, 1, i0, &e_emlrtBCI, sp);
    }

    smi[0] = i8 + 1;
    smi[1] = 5;
    emlrtSubAssignSizeCheckR2012b(smi, 2, xSm_size, 2, &b_emlrtECI, sp);
    for (i0 = 0; i0 < 5; i0++) {
      for (k = 0; k < i_loop_ub; k++) {
        crdDat->data[(tmp_data[k] + crdDat->size[0] * i0) + crdDat->size[0] *
          crdDat->size[1] * n] = SD->f0.xSm_data[k + xSm_size[0] * i0];
      }
    }

    n++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&t);
  st.site = &ec_emlrtRSI;
  close(&st, emlrtAlias(w), &b_emlrtMCI);
  emlrtDestroyArray(&w);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (runSmarticles.c) */
