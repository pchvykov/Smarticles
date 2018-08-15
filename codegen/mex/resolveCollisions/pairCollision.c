/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pairCollision.c
 *
 * Code generation for function 'pairCollision'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "pairCollision.h"
#include "mpower.h"
#include "rand.h"
#include "toLogicalCheck.h"
#include "norm.h"
#include "sum.h"
#include "flip.h"
#include "error.h"
#include "indexShapeCheck.h"
#include "ifWhileCond.h"
#include "xor.h"
#include "error1.h"
#include "any.h"
#include "lineSegmentIntersect.h"
#include "repmat.h"
#include "smcle2coord.h"
#include "resolveCollisions_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 181, /* lineNo */
  13,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pName */
};

static emlrtRSInfo o_emlrtRSI = { 16,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 17,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 25,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 26,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 29,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 33,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 38,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 51,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 62,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 63,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 71,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 76, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 83, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 84, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 85, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 86, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 90, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 91, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 93, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 97, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 100,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 112,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 121,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 131,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 142,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 153,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 156,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 161,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 164,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 169,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 40, /* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 188,/* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 187,/* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 186,/* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 20, /* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 100,/* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 16, /* lineNo */
  "sub2ind",                           /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 25, /* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 238,/* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 12, /* lineNo */
  "sqrt",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

static emlrtRTEInfo j_emlrtRTEI = { 41,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/sub2ind.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 281,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  39,                                  /* colNo */
  "ins2",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  30,                                  /* colNo */
  "ins1",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  141,                                 /* lineNo */
  40,                                  /* colNo */
  "piv",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 141,   /* lineNo */
  40,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  141,                                 /* lineNo */
  18,                                  /* colNo */
  "piv",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 141, /* lineNo */
  18,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  137,                                 /* lineNo */
  15,                                  /* colNo */
  "piv",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 137, /* lineNo */
  15,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  134,                                 /* lineNo */
  17,                                  /* colNo */
  "piv",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 134, /* lineNo */
  17,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  132,                                 /* lineNo */
  17,                                  /* colNo */
  "piv",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 132, /* lineNo */
  17,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  129,                                 /* lineNo */
  15,                                  /* colNo */
  "piv",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 129, /* lineNo */
  15,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 127, /* lineNo */
  12,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  123,                                 /* lineNo */
  15,                                  /* colNo */
  "piv",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 123, /* lineNo */
  15,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  121,                                 /* lineNo */
  15,                                  /* colNo */
  "piv",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 121, /* lineNo */
  15,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  118,                                 /* lineNo */
  15,                                  /* colNo */
  "piv",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 118, /* lineNo */
  15,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 116, /* lineNo */
  12,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  101,                                 /* lineNo */
  17,                                  /* colNo */
  "intList",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  93,                                  /* lineNo */
  13,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  93,                                  /* lineNo */
  21,                                  /* colNo */
  "intList",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  86,                                  /* lineNo */
  17,                                  /* colNo */
  "intList",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  78,                                  /* lineNo */
  17,                                  /* colNo */
  "intList",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  72,                                  /* lineNo */
  17,                                  /* colNo */
  "intList",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  84,                                  /* lineNo */
  16,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pName */
};

static emlrtBCInfo q_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  79,                                  /* lineNo */
  25,                                  /* colNo */
  "tmpInt",                            /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  76,                                  /* lineNo */
  72,                                  /* colNo */
  "tmpInt",                            /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  76,                                  /* lineNo */
  57,                                  /* colNo */
  "inters.intNormalizedDistance1To2",  /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  73,                                  /* lineNo */
  27,                                  /* colNo */
  "tmpInt",                            /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  71,                                  /* lineNo */
  75,                                  /* colNo */
  "inters.intNormalizedDistance2To1",  /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  71,                                  /* lineNo */
  66,                                  /* colNo */
  "tmpInt",                            /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  65,                                  /* lineNo */
  48,                                  /* colNo */
  "inters.intNormalizedDistance2To1",  /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  53,                                  /* colNo */
  "crn2",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  64,                                  /* lineNo */
  50,                                  /* colNo */
  "inters.intNormalizedDistance1To2",  /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  55,                                  /* colNo */
  "crn1",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { 1,  /* iFirst */
  9,                                   /* iLast */
  34,                                  /* lineNo */
  45,                                  /* colNo */
  "inters.parAdjacencyMatrix",         /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  40,                                  /* colNo */
  "par2",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  32,                                  /* colNo */
  "par1",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  84,                                  /* lineNo */
  49,                                  /* colNo */
  "inters.intNormalizedDistance1To2",  /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  37,                                  /* colNo */
  "ins1",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  49,                                  /* colNo */
  "ins2",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  118,                                 /* lineNo */
  34,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 118, /* lineNo */
  34,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  118,                                 /* lineNo */
  45,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 118, /* lineNo */
  45,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  123,                                 /* lineNo */
  34,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 123, /* lineNo */
  34,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  123,                                 /* lineNo */
  45,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 123, /* lineNo */
  45,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  129,                                 /* lineNo */
  34,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 129, /* lineNo */
  34,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  129,                                 /* lineNo */
  51,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 129, /* lineNo */
  51,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  134,                                 /* lineNo */
  44,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 134, /* lineNo */
  44,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  132,                                 /* lineNo */
  45,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 132, /* lineNo */
  45,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  137,                                 /* lineNo */
  34,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 137, /* lineNo */
  34,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  137,                                 /* lineNo */
  50,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 137, /* lineNo */
  50,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  148,                                 /* lineNo */
  20,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 148, /* lineNo */
  20,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  54,                                  /* colNo */
  "ins1",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  62,                                  /* colNo */
  "ins2",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  36,                                  /* colNo */
  "inX",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  47,                                  /* colNo */
  "inX",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  77,                                  /* colNo */
  "crn2",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  62,                                  /* colNo */
  "crn2",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  35,                                  /* colNo */
  "crn2",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  78,                                  /* lineNo */
  45,                                  /* colNo */
  "tmpInt",                            /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  50,                                  /* colNo */
  "crn2",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  30,                                  /* colNo */
  "crn2",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  71,                                  /* colNo */
  "crn1",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  80,                                  /* colNo */
  "crn1",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  35,                                  /* colNo */
  "crn1",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  72,                                  /* lineNo */
  47,                                  /* colNo */
  "tmpInt",                            /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  52,                                  /* colNo */
  "crn1",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  32,                                  /* colNo */
  "crn1",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  27,                                  /* colNo */
  "parX",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  54,                                  /* colNo */
  "parX",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  32,                                  /* lineNo */
  49,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  32,                                  /* colNo */
  "parX",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  59,                                  /* colNo */
  "parX",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  30,                                  /* colNo */
  "parX",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  57,                                  /* colNo */
  "parX",                              /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  42,                                  /* lineNo */
  54,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  43,                                  /* lineNo */
  52,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  189,                                 /* lineNo */
  54,                                  /* colNo */
  "inters.intNormalizedDistance1To2",  /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  189,                                 /* lineNo */
  59,                                  /* colNo */
  "inters.intNormalizedDistance1To2",  /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  188,                                 /* lineNo */
  63,                                  /* colNo */
  "inters.intNormalizedDistance1To2",  /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  186,                                 /* lineNo */
  93,                                  /* colNo */
  "inters.intNormalizedDistance2To1",  /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  183,                                 /* lineNo */
  85,                                  /* colNo */
  "inters.intNormalizedDistance1To2",  /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 207, /* lineNo */
  12,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 213, /* lineNo */
  47,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  213,                                 /* lineNo */
  47,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 213, /* lineNo */
  68,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  213,                                 /* lineNo */
  68,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 214,/* lineNo */
  19,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  214,                                 /* lineNo */
  19,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  208,                                 /* lineNo */
  25,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 208,/* lineNo */
  25,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  208,                                 /* lineNo */
  35,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 208,/* lineNo */
  35,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  209,                                 /* lineNo */
  25,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 209,/* lineNo */
  25,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  210,                                 /* lineNo */
  25,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 210,/* lineNo */
  25,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  210,                                 /* lineNo */
  35,                                  /* colNo */
  "sm",                                /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 210,/* lineNo */
  35,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  213,                                 /* lineNo */
  51,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  213,                                 /* lineNo */
  72,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  213,                                 /* lineNo */
  20,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  214,                                 /* lineNo */
  23,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 214,/* lineNo */
  23,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void findSrc(const emlrtStack *sp, const real_T
                    c_inters_intNormalizedDistance1[9], const real_T
                    c_inters_intNormalizedDistance2[9], real_T ins1, real_T ins2,
                    const real_T lenVc[3], real_T *src, real_T *trg, boolean_T
                    *beg, real_T *intDistTrg);
static void intForce(const emlrtStack *sp, const real_T sm[10], const real_T
                     crd[16], real_T src, real_T sLk, real_T beg, real_T trg,
                     real_T tLk, real_T tXLen, real_T *fAng, real_T *fDir,
                     real_T vStickOut[2]);
static void pivotArm(real_T al, real_T th, real_T c_A, real_T out[3]);
static void pivotBody(const emlrtStack *sp, real_T x, real_T out[3]);

/* Function Definitions */
static void findSrc(const emlrtStack *sp, const real_T
                    c_inters_intNormalizedDistance1[9], const real_T
                    c_inters_intNormalizedDistance2[9], real_T ins1, real_T ins2,
                    const real_T lenVc[3], real_T *src, real_T *trg, boolean_T
                    *beg, real_T *intDistTrg)
{
  int32_T i6;
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv3[2] = { 1, 50 };

  static const char_T u[50] = { 'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'i',
    'n', 't', 'e', 'r', 's', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'i', 'n', ' ',
    't', 'h', 'e', ' ', 'm', 'i', 'd', 'd', 'l', 'e', ' ', 'o', 'f', ' ', 's',
    'm', 'a', 'r', 't', 'i', 'c', 'l', 'e', 's', '!' };

  int32_T i7;
  real_T dst1;
  real_T b_ins2;

  /* characterize single intersection: who is pushing who */
  /* in: intersection structure, intersecting links */
  /* out: source and target smls, intersection in beginning of source?, */
  /* distances on target link */
  if (ins1 == 2.0) {
    /* middle link is always target */
    if (ins2 == 2.0) {
      /* ; cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); %axis([-0.5,0.5,-0.5,0.5]*12); */
      y = NULL;
      m2 = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 50, m2, &u[0]);
      emlrtAssign(&y, m2);
      emlrtDisplayR2012b(y, "ans", &emlrtRTEI, sp);
    }

    *src = 2.0;
    *trg = 1.0;
    *beg = (ins2 == 1.0);
    i6 = (int32_T)ins2;
    if (!((i6 >= 1) && (i6 <= 3))) {
      emlrtDynamicBoundsCheckR2012b(i6, 1, 3, &wc_emlrtBCI, sp);
    }

    *intDistTrg = c_inters_intNormalizedDistance1[1 + 3 * (i6 - 1)];

    /*          end */
  } else if (ins2 == 2.0) {
    *src = 1.0;
    *trg = 2.0;
    *beg = (ins1 == 1.0);
    i6 = (int32_T)ins1;
    if (!((i6 >= 1) && (i6 <= 3))) {
      emlrtDynamicBoundsCheckR2012b(i6, 1, 3, &vc_emlrtBCI, sp);
    }

    *intDistTrg = c_inters_intNormalizedDistance2[i6 + 2];
  } else {
    /* if neither link ==2, then pick shorter end */
    if (ins1 == 1.0) {
      i6 = (int32_T)ins2;
      if (!((i6 >= 1) && (i6 <= 3))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, 3, &uc_emlrtBCI, sp);
      }

      dst1 = c_inters_intNormalizedDistance1[3 * (i6 - 1)] * lenVc[0];
    } else {
      i6 = (int32_T)ins1;
      if (!((i6 >= 1) && (i6 <= 3))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, 3, &sc_emlrtBCI, sp);
      }

      i7 = (int32_T)ins2;
      if (!((i7 >= 1) && (i7 <= 3))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, 3, &tc_emlrtBCI, sp);
      }

      dst1 = (1.0 - c_inters_intNormalizedDistance1[(i6 + 3 * (i7 - 1)) - 1]) *
        lenVc[2];
    }

    /* always take length from beg of 1 or end of 3 */
    if (ins2 == 1.0) {
      b_ins2 = c_inters_intNormalizedDistance2[(int32_T)ins1 - 1] * lenVc[0];
    } else {
      b_ins2 = (1.0 - c_inters_intNormalizedDistance2[((int32_T)ins1 + 3 *
                 ((int32_T)ins2 - 1)) - 1]) * lenVc[2];
    }

    *src = 1.0 + (real_T)(dst1 > b_ins2);
    *trg = 3.0 - *src;
    if (*src == 1.0) {
      *beg = (ins1 == 1.0);
      *intDistTrg = c_inters_intNormalizedDistance2[((int32_T)ins1 + 3 *
        ((int32_T)ins2 - 1)) - 1];
    } else {
      *beg = (ins2 == 1.0);
      *intDistTrg = c_inters_intNormalizedDistance1[((int32_T)ins1 + 3 *
        ((int32_T)ins2 - 1)) - 1];
    }
  }
}

static void intForce(const emlrtStack *sp, const real_T sm[10], const real_T
                     crd[16], real_T src, real_T sLk, real_T beg, real_T trg,
                     real_T tLk, real_T tXLen, real_T *fAng, real_T *fDir,
                     real_T vStickOut[2])
{
  real_T r;
  int32_T i8;
  int32_T i9;
  real_T b_sLk;
  int32_T i10;
  real_T intCrd[2];
  real_T b[2];
  boolean_T rEQ0;
  real_T q;

  /* get the interaction force */
  /* in: 4 vertex coordinates, ... , relative distance to X on tLk */
  /* out: force angle and direction (+/-) */
  *fAng = 0.0;
  if (tLk != (int32_T)muDoubleScalarFloor(tLk)) {
    emlrtIntegerCheckR2012b(tLk, &w_emlrtDCI, sp);
  }

  switch ((int32_T)tLk) {
   case 1:
    /* find force angle */
    if (trg != (int32_T)muDoubleScalarFloor(trg)) {
      emlrtIntegerCheckR2012b(trg, &bb_emlrtDCI, sp);
    }

    i8 = (int32_T)trg;
    if (!((i8 >= 1) && (i8 <= 2))) {
      emlrtDynamicBoundsCheckR2012b(i8, 1, 2, &bd_emlrtBCI, sp);
    }

    if (trg != (int32_T)muDoubleScalarFloor(trg)) {
      emlrtIntegerCheckR2012b(trg, &cb_emlrtDCI, sp);
    }

    i9 = (int32_T)trg;
    if (!((i9 >= 1) && (i9 <= 2))) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, 2, &cd_emlrtBCI, sp);
    }

    *fAng = sm[i8 + 3] - sm[i9 + 5];

    /* left arm pushed */
    break;

   case 2:
    if (trg != (int32_T)muDoubleScalarFloor(trg)) {
      emlrtIntegerCheckR2012b(trg, &db_emlrtDCI, sp);
    }

    i8 = (int32_T)trg;
    if (!((i8 >= 1) && (i8 <= 2))) {
      emlrtDynamicBoundsCheckR2012b(i8, 1, 2, &dd_emlrtBCI, sp);
    }

    *fAng = sm[i8 + 3];

    /* center pushed */
    break;

   case 3:
    if (trg != (int32_T)muDoubleScalarFloor(trg)) {
      emlrtIntegerCheckR2012b(trg, &eb_emlrtDCI, sp);
    }

    i8 = (int32_T)trg;
    if (!((i8 >= 1) && (i8 <= 2))) {
      emlrtDynamicBoundsCheckR2012b(i8, 1, 2, &ed_emlrtBCI, sp);
    }

    if (trg != (int32_T)muDoubleScalarFloor(trg)) {
      emlrtIntegerCheckR2012b(trg, &fb_emlrtDCI, sp);
    }

    i9 = (int32_T)trg;
    if (!((i9 >= 1) && (i9 <= 2))) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, 2, &fd_emlrtBCI, sp);
    }

    *fAng = sm[i8 + 3] + sm[i9 + 7];

    /* right arm pushed */
    break;
  }

  /* get force orientation (+/-): */
  r = 2.0 * tLk;
  if (trg != (int32_T)muDoubleScalarFloor(trg)) {
    emlrtIntegerCheckR2012b(trg, &x_emlrtDCI, sp);
  }

  i8 = (int32_T)trg;
  if (!((i8 >= 1) && (i8 <= 2))) {
    emlrtDynamicBoundsCheckR2012b(i8, 1, 2, &xc_emlrtBCI, sp);
  }

  b_sLk = 2.0 * tLk;
  if (trg != (int32_T)muDoubleScalarFloor(trg)) {
    emlrtIntegerCheckR2012b(trg, &y_emlrtDCI, sp);
  }

  i8 = (int32_T)trg;
  if (!((i8 >= 1) && (i8 <= 2))) {
    emlrtDynamicBoundsCheckR2012b(i8, 1, 2, &yc_emlrtBCI, sp);
  }

  for (i8 = 0; i8 < 2; i8++) {
    i9 = (int32_T)(r + (1.0 + (real_T)i8));
    if (!((i9 >= 1) && (i9 <= 8))) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, 8, &gd_emlrtBCI, sp);
    }

    i10 = (int32_T)(b_sLk + (-1.0 + (real_T)i8));
    if (!((i10 >= 1) && (i10 <= 8))) {
      emlrtDynamicBoundsCheckR2012b(i10, 1, 8, &hd_emlrtBCI, sp);
    }

    b[i8] = crd[((int32_T)trg + ((i9 - 1) << 1)) - 1] - crd[((int32_T)trg +
      ((i10 - 1) << 1)) - 1];
  }

  r = 2.0 * tLk;
  for (i8 = 0; i8 < 2; i8++) {
    i9 = (int32_T)(r + (-1.0 + (real_T)i8));
    if (!((i9 >= 1) && (i9 <= 8))) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, 8, &id_emlrtBCI, sp);
    }

    intCrd[i8] = crd[((int32_T)trg + ((i9 - 1) << 1)) - 1] + tXLen * b[i8];
  }

  /* coordinate of the intersection */
  b_sLk = (sLk - beg) * 2.0;
  if (src != (int32_T)muDoubleScalarFloor(src)) {
    emlrtIntegerCheckR2012b(src, &ab_emlrtDCI, sp);
  }

  i8 = (int32_T)src;
  if (!((i8 >= 1) && (i8 <= 2))) {
    emlrtDynamicBoundsCheckR2012b(i8, 1, 2, &ad_emlrtBCI, sp);
  }

  for (i8 = 0; i8 < 2; i8++) {
    r = b_sLk + (1.0 + (real_T)i8);
    if (r != (int32_T)muDoubleScalarFloor(r)) {
      emlrtIntegerCheckR2012b(r, &gb_emlrtDCI, sp);
    }

    i9 = (int32_T)r;
    if (!((i9 >= 1) && (i9 <= 8))) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, 8, &jd_emlrtBCI, sp);
    }

    vStickOut[i8] = crd[((int32_T)src + ((i9 - 1) << 1)) - 1] - intCrd[i8];
  }

  /* sLk-beg=[0,4] vertex index - gives the piece sticking through inters */
  b_sLk = vStickOut[0];
  vStickOut[0] = muDoubleScalarAtan2(vStickOut[1], vStickOut[0]);
  vStickOut[1] = muDoubleScalarHypot(b_sLk, vStickOut[1]);

  /* polar coordinates */
  b_sLk = (vStickOut[0] - *fAng) + 3.1415926535897931;
  if ((!muDoubleScalarIsInf(b_sLk)) && (!muDoubleScalarIsNaN(b_sLk))) {
    if (b_sLk == 0.0) {
      r = 0.0;
    } else {
      r = muDoubleScalarRem(b_sLk, 6.2831853071795862);
      rEQ0 = (r == 0.0);
      if (!rEQ0) {
        q = muDoubleScalarAbs(b_sLk / 6.2831853071795862);
        rEQ0 = (muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) <=
                2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        r = 0.0;
      } else {
        if (b_sLk < 0.0) {
          r += 6.2831853071795862;
        }
      }
    }
  } else {
    r = rtNaN;
  }

  *fDir = muDoubleScalarSign(1.5707963267948966 - muDoubleScalarAbs(r -
    3.1415926535897931));

  /* get the direction of the force on trg */
}

static void pivotArm(real_T al, real_T th, real_T c_A, real_T out[3])
{
  real_T secth;
  real_T tanth;
  real_T py;
  real_T pylnpy2;

  /* response when force applied to the right arm or corner */
  /* in: arm angle, force angle, arm length (in units of B) */
  /* out: [px,py,f] = pivot coordinates (in units of B) and critical force */
  /* required to move (in units of friction force; f>0 => CCW rotation) */
  secth = 1.0 / muDoubleScalarCos(th);
  tanth = muDoubleScalarTan(th);

  /* the constant out front quantifies how far off the pivot can be (larger=>further away). "right" value: 0.081 */
  py = 0.081 / (-2.0 * c_A * secth * muDoubleScalarSin(al - th) + tanth);

  /* approximation for py */
  pylnpy2 = -0.6 * muDoubleScalarAtan(10.0 * py);

  /* differentiable approximation for py*log(py^2) for py in (-0.5,0.5) */
  out[0] = tanth / 2.0 * pylnpy2;
  out[1] = py;
  out[2] = -secth * pylnpy2;
}

static void pivotBody(const emlrtStack *sp, real_T x, real_T out[3])
{
  real_T sq;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* response when orthogonal force applied to the body */
  /* in: distance from center to push point (in units of B) */
  /* out: [px,py,f] = pivot coordinates (in units of B) and critical force required to move */
  st.site = &ic_emlrtRSI;
  st.site = &ic_emlrtRSI;
  sq = 1.0 + 4.0 * (x * x);
  if (sq < 0.0) {
    b_st.site = &jc_emlrtRSI;
    d_error(&b_st);
  }

  sq = muDoubleScalarSqrt(sq);
  out[0] = x - muDoubleScalarSign(x) * sq / 2.0;
  out[1] = 0.0;
  out[2] = -2.0 * x + muDoubleScalarSign(x) * sq;
}

void pairCollision(const emlrtStack *sp, const real_T sm[10], boolean_T
                   resolveFl, const real_T fricCoeff[2], const real_T prevOrd[9],
                   real_T xSm[6], real_T currOrd[9], real_T flipPar[9])
{
  real_T lenVc[3];
  real_T trEps;
  real_T maxAngle;
  real_T parThresh;
  real_T parShift;
  real_T crd[16];
  int32_T i;
  real_T trgF;
  int32_T i2;
  real_T dv0[9];
  real_T b_crd[12];
  real_T c_crd[12];
  boolean_T inters_intAdjacencyMatrix[9];
  real_T c_inters_intNormalizedDistance1[9];
  real_T c_inters_intNormalizedDistance2[9];
  real_T inters_parAdjacencyMatrix[9];
  boolean_T tmpInt[3];
  boolean_T beg;
  int32_T idx;
  int32_T b_idx;
  int32_T ii;
  int32_T jj;
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T loop_ub;
  int32_T par1[2];
  int32_T ii_data[9];
  int8_T jj_data[9];
  int32_T b_loop_ub;
  int32_T par1_data[9];
  int8_T par2_data[9];
  int32_T parX_data[18];
  real_T mv;
  boolean_T b_tmpInt[9];
  real_T fNet[2];
  real_T intList[18];
  real_T d_inters_intNormalizedDistance1[3];
  real_T fAng;
  real_T vec2m[2];
  int32_T b_ii_data[3];
  int32_T crn1_size[2];
  real_T pivRad[2];
  real_T crn1_data[3];
  int32_T crn2_size[1];
  real_T crn2_data[3];
  real_T cth;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  real_T b;
  int32_T e_loop_ub;
  int32_T f_loop_ub;
  real_T dv1[3];
  int32_T trueCount;
  int32_T tmp_data[3];
  int32_T b_tmp_data[3];
  int32_T d_inters_intNormalizedDistance2[1];
  int32_T e_inters_intNormalizedDistance1[2];
  int32_T b_crn1_data[3];
  int32_T f_inters_intNormalizedDistance1[1];
  int32_T b_crn2_size[1];
  boolean_T b_crn2_data[3];
  boolean_T varargin_5_data[3];
  int32_T ci_size[1];
  boolean_T ci_data[9];
  int32_T g_inters_intNormalizedDistance1[2];
  int32_T par1_size[1];
  boolean_T h_inters_intNormalizedDistance1[81];
  boolean_T varargin_6_data[3];
  int32_T c_tmp_data[9];
  real_T piv[6];
  boolean_T b_varargin_5_data[9];
  int32_T reshapes_f3_data[1];
  boolean_T b_varargin_6_data[9];
  int8_T c_varargin_5_data[3];
  int32_T tmp_size[2];
  int8_T c_varargin_6_data[3];
  int32_T d_tmp_data[8];
  int32_T e_tmp_data[8];
  real_T b_cth[4];
  int32_T f_tmp_data[9];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* resolve a pair-collision, returning new sm position values */
  /* in: the two smcle 5-tuples, flag whether to resolve or just check collisions */
  /* out: T/F if just checking, list of new 3-tuples (cx,cy,theta) if resolving */
  lenVc[0] = A;
  lenVc[1] = B;
  lenVc[2] = A;

  /* scales to get real-space distances */
  trEps = 0.1 * tRes * B;
  maxAngle = tRes;
  parThresh = 5.0 * tRes;
  parShift = tRes * B;

  /* perturbative scales */
  /*  check for collisions:---------- */
  smcle2coord(sm, crd);

  /* order of parallel links - to know which way to shift next */
  /*      currOrd(abs(currOrd)<0.1)=0; %decay over time and eventually forget */
  for (i = 0; i < 9; i++) {
    currOrd[i] = prevOrd[i];
    flipPar[i] = 0.0;
  }

  /*      cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); %axis([-0.5,0.5,-0.5,0.5]*12); */
  trgF = parThresh * B;
  for (i2 = 0; i2 < 4; i2++) {
    b_crd[3 * i2] = crd[i2 << 1];
    b_crd[1 + 3 * i2] = crd[(2 + i2) << 1];
    b_crd[2 + 3 * i2] = crd[(4 + i2) << 1];
    c_crd[3 * i2] = crd[1 + (i2 << 1)];
    c_crd[1 + 3 * i2] = crd[1 + ((2 + i2) << 1)];
    c_crd[2 + 3 * i2] = crd[1 + ((4 + i2) << 1)];
  }

  b_repmat(lenVc, dv0);
  st.site = &o_emlrtRSI;
  lineSegmentIntersect(b_crd, c_crd, parThresh * mpower(B), trgF / 2.0, dv0,
                       inters_intAdjacencyMatrix,
                       c_inters_intNormalizedDistance1,
                       c_inters_intNormalizedDistance2,
                       inters_parAdjacencyMatrix);

  /* max value of cross-product and separation for parallel */
  st.site = &p_emlrtRSI;
  any(&st, inters_intAdjacencyMatrix, tmpInt);
  if (b_any(tmpInt)) {
    beg = true;
  } else {
    st.site = &p_emlrtRSI;
    c_any(&st, inters_parAdjacencyMatrix, tmpInt);
    if (b_any(tmpInt)) {
      beg = true;
    } else {
      beg = false;
    }
  }

  if (!beg) {
    for (i2 = 0; i2 < 6; i2++) {
      xSm[i2] = 0.0;
    }
  } else {
    /* if no collision, return false */
    if (!resolveFl) {
      for (i2 = 0; i2 < 6; i2++) {
        xSm[i2] = 1.0;
      }
    } else {
      /* if just checking for collisions */
      /*  find out the type of interaction:=============== */
      for (i2 = 0; i2 < 3; i2++) {
        for (idx = 0; idx < 2; idx++) {
          xSm[idx + (i2 << 1)] = sm[idx + (i2 << 1)];
        }
      }

      /* setup the identity map */
      /*  Separate any parallel links if present------- */
      /*      cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); %axis([-0.5,0.5,-0.5,0.5]*12); */
      st.site = &q_emlrtRSI;
      b_st.site = &xb_emlrtRSI;
      b_idx = 0;
      ii = 1;
      jj = 1;
      exitg1 = false;
      while ((!exitg1) && (jj <= 3)) {
        guard1 = false;
        if (inters_parAdjacencyMatrix[(ii + 3 * (jj - 1)) - 1] != 0.0) {
          b_idx++;
          ii_data[b_idx - 1] = ii;
          jj_data[b_idx - 1] = (int8_T)jj;
          if (b_idx >= 9) {
            exitg1 = true;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }

        if (guard1) {
          ii++;
          if (ii > 3) {
            ii = 1;
            jj++;
          }
        }
      }

      if (1 > b_idx) {
        loop_ub = 0;
      } else {
        loop_ub = b_idx;
      }

      par1[0] = 1;
      par1[1] = loop_ub;
      c_st.site = &bc_emlrtRSI;
      indexShapeCheck(&c_st, 9, par1);
      if (1 > b_idx) {
        b_loop_ub = 0;
      } else {
        b_loop_ub = b_idx;
      }

      par1[0] = 1;
      par1[1] = b_loop_ub;
      c_st.site = &ac_emlrtRSI;
      indexShapeCheck(&c_st, 9, par1);
      par1[0] = 1;
      if (1 > b_idx) {
        par1[1] = 0;
      } else {
        par1[1] = b_idx;
      }

      c_st.site = &yb_emlrtRSI;
      indexShapeCheck(&c_st, 9, par1);
      for (i2 = 0; i2 < loop_ub; i2++) {
        par1_data[i2] = ii_data[i2];
      }

      for (i2 = 0; i2 < b_loop_ub; i2++) {
        par2_data[i2] = jj_data[i2];
      }

      /* get parallel nearby lines */
      st.site = &r_emlrtRSI;
      b_st.site = &cc_emlrtRSI;
      c_st.site = &dc_emlrtRSI;
      beg = true;
      if (b_loop_ub != loop_ub) {
        beg = false;
      }

      if (!beg) {
        emlrtErrorWithMessageIdR2012b(&c_st, &k_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      for (i2 = 0; i2 < loop_ub; i2++) {
        parX_data[i2] = par1_data[i2];
      }

      for (i2 = 0; i2 < b_loop_ub; i2++) {
        parX_data[i2 + loop_ub] = par2_data[i2];
      }

      if (!(loop_ub == 0)) {
        /* number of parallel line */
        /*        cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); %axis([-0.5,0.5,-0.5,0.5]*12);   */
        st.site = &s_emlrtRSI;
        mv = 1.0 + (real_T)((fricCoeff[1] - fricCoeff[0]) / (fricCoeff[1] +
          fricCoeff[0]) < 0.5 * (c_rand() - 0.5));

        /* move the one with smaller fricCoeff */
        for (i2 = 0; i2 < 2; i2++) {
          fNet[i2] = 0.0;
        }

        i = 0;
        while (i <= loop_ub - 1) {
          /* total force for different parallel interactions */
          i2 = 1 + i;
          if (!((i2 >= 1) && (i2 <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &jc_emlrtBCI, sp);
          }

          parThresh = (real_T)parX_data[(i2 + loop_ub * ((int32_T)mv - 1)) - 1] *
            2.0;
          i2 = 1 + i;
          if (!((i2 >= 1) && (i2 <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &kc_emlrtBCI, sp);
          }

          trgF = (real_T)parX_data[(i2 + loop_ub * ((int32_T)mv - 1)) - 1] * 2.0;
          for (i2 = 0; i2 < 2; i2++) {
            idx = (int32_T)(trgF + (-1.0 + (real_T)i2));
            if (!((idx >= 1) && (idx <= 8))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, 8, &lc_emlrtBCI, sp);
            }

            pivRad[i2] = crd[((int32_T)mv + (((int32_T)(parThresh + (1.0 +
              (real_T)i2)) - 1) << 1)) - 1] - crd[((int32_T)mv + ((idx - 1) << 1))
              - 1];
          }

          parThresh = pivRad[0];
          pivRad[0] = -pivRad[1];
          pivRad[1] = parThresh;

          /* take unit vector perp to first parallel */
          st.site = &t_emlrtRSI;
          i2 = i + 1;
          if (!((i2 >= 1) && (i2 <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &db_emlrtBCI, &st);
          }

          i2 = i + 1;
          if (!((i2 >= 1) && (i2 <= b_loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, b_loop_ub, &cb_emlrtBCI, &st);
          }

          b_st.site = &ec_emlrtRSI;
          if ((par1_data[i] >= 1) && (3 >= par1_data[i])) {
            beg = true;
          } else {
            beg = false;
          }

          if (!beg) {
            emlrtErrorWithMessageIdR2012b(&b_st, &j_emlrtRTEI,
              "MATLAB:sub2ind:IndexOutOfRange", 0);
          }

          b_idx = (par1_data[i] + 3 * (par2_data[i] - 1)) - 1;

          /* linear index */
          i2 = b_idx + 1;
          if (!((i2 >= 1) && (i2 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 9, &bb_emlrtBCI, sp);
          }

          /* +/- */
          if (mv == 1.0) {
            cth = 1.0;
          } else {
            cth = -inters_parAdjacencyMatrix[b_idx];
          }

          st.site = &u_emlrtRSI;
          toLogicalCheck(&st, prevOrd[b_idx]);
          if (prevOrd[b_idx] != 0.0) {
            parThresh = muDoubleScalarSign(prevOrd[b_idx]);
            b = cth * parThresh;
            currOrd[b_idx] = parThresh;
          } else {
            i2 = 1 + i;
            if (!((i2 >= 1) && (i2 <= loop_ub))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &mc_emlrtBCI, sp);
            }

            parThresh = (real_T)parX_data[(i2 + loop_ub * ((int32_T)mv - 1)) - 1]
              * 2.0;
            i2 = 1 + i;
            if (!((i2 >= 1) && (i2 <= loop_ub))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &nc_emlrtBCI, sp);
            }

            trgF = (real_T)parX_data[(i2 + loop_ub * ((int32_T)mv - 1)) - 1] *
              2.0;
            i2 = 1 + i;
            if (!((i2 >= 1) && (i2 <= loop_ub))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &oc_emlrtBCI, sp);
            }

            b = (real_T)parX_data[(i2 + loop_ub * (2 - (int32_T)mv)) - 1] * 2.0;
            i2 = 1 + i;
            if (!((i2 >= 1) && (i2 <= loop_ub))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &pc_emlrtBCI, sp);
            }

            fAng = (real_T)parX_data[(i2 + loop_ub * (2 - (int32_T)mv)) - 1] *
              2.0;
            for (i2 = 0; i2 < 2; i2++) {
              idx = (int32_T)(trgF + (-1.0 + (real_T)i2));
              if (!((idx >= 1) && (idx <= 8))) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, 8, &qc_emlrtBCI, sp);
              }

              jj = (int32_T)(fAng + (-1.0 + (real_T)i2));
              if (!((jj >= 1) && (jj <= 8))) {
                emlrtDynamicBoundsCheckR2012b(jj, 1, 8, &rc_emlrtBCI, sp);
              }

              vec2m[i2] = (crd[((int32_T)mv + (((int32_T)(parThresh + (1.0 +
                (real_T)i2)) - 1) << 1)) - 1] + crd[((int32_T)mv + ((idx - 1) <<
                1)) - 1]) - (crd[((((int32_T)(b + (1.0 + (real_T)i2)) - 1) << 1)
                                  - (int32_T)mv) + 2] + crd[(((jj - 1) << 1) -
                (int32_T)mv) + 2]);
            }

            /* vector fixed -> moving c.o.m. */
            fAng = 0.0;
            for (jj = 0; jj < 2; jj++) {
              fAng += pivRad[jj] * vec2m[jj];
            }

            b = muDoubleScalarSign(fAng);
            currOrd[b_idx] = cth * b;
          }

          flipPar[b_idx] = -inters_parAdjacencyMatrix[b_idx];

          /* tells what to do under smarticle swap */
          for (i2 = 0; i2 < 2; i2++) {
            fNet[i2] += b * pivRad[i2];
          }

          i++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        for (i2 = 0; i2 < 2; i2++) {
          vec2m[i2] = fNet[i2] + 1.0E-5;
        }

        fAng = norm(vec2m);
        for (i2 = 0; i2 < 2; i2++) {
          xSm[((int32_T)mv + (i2 << 1)) - 1] = sm[((int32_T)mv + (i2 << 1)) - 1]
            + fNet[i2] / fAng * parShift;
        }

        st.site = &v_emlrtRSI;
        xSm[(int32_T)mv + 3] += (c_rand() - 0.5) * tRes;

        /* add angle fluctuation */
      } else {
        /*  Handle intersections======================== */
        /*      scatter(inters.intMatrixX(:),inters.intMatrixY(:),1000,'r.'); %mark collision points */
        /*  handle different possible intersection scenarios:----------- */
        /*  group corner intersections: */
        for (i2 = 0; i2 < 9; i2++) {
          b_tmpInt[i2] = inters_intAdjacencyMatrix[i2];
        }

        ii = 1;
        memset(&intList[0], 0, 18U * sizeof(real_T));

        /* [src,trg,sLk,tLk,beg,intDistTrg] - distinct intersections */
        b_sum(inters_intAdjacencyMatrix, d_inters_intNormalizedDistance1);
        for (i2 = 0; i2 < 3; i2++) {
          tmpInt[i2] = (d_inters_intNormalizedDistance1[i2] == 2.0);
        }

        b_idx = 0;
        b_loop_ub = 0;
        exitg1 = false;
        while ((!exitg1) && (b_loop_ub + 1 < 4)) {
          if (tmpInt[b_loop_ub] && inters_intAdjacencyMatrix[1 + 3 * b_loop_ub])
          {
            b_idx++;
            b_ii_data[b_idx - 1] = b_loop_ub + 1;
            if (b_idx >= 3) {
              exitg1 = true;
            } else {
              b_loop_ub++;
            }
          } else {
            b_loop_ub++;
          }
        }

        if (1 > b_idx) {
          loop_ub = 0;
        } else {
          loop_ub = b_idx;
        }

        crn1_size[0] = 1;
        crn1_size[1] = loop_ub;
        for (i2 = 0; i2 < loop_ub; i2++) {
          crn1_data[i2] = b_ii_data[i2];
        }

        /* corners: trg=2 */
        c_sum(inters_intAdjacencyMatrix, d_inters_intNormalizedDistance1);
        for (i = 0; i < 3; i++) {
          tmpInt[i] = (d_inters_intNormalizedDistance1[i] == 2.0);
        }

        st.site = &w_emlrtRSI;
        b_st.site = &l_emlrtRSI;
        idx = 0;
        b_loop_ub = 0;
        exitg1 = false;
        while ((!exitg1) && (b_loop_ub + 1 < 4)) {
          if (tmpInt[b_loop_ub] && inters_intAdjacencyMatrix[3 + b_loop_ub]) {
            idx++;
            b_ii_data[idx - 1] = b_loop_ub + 1;
            if (idx >= 3) {
              exitg1 = true;
            } else {
              b_loop_ub++;
            }
          } else {
            b_loop_ub++;
          }
        }

        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        par1[0] = 1;
        par1[1] = loop_ub;
        c_st.site = &m_emlrtRSI;
        indexShapeCheck(&c_st, 3, par1);
        crn2_size[0] = loop_ub;
        for (i2 = 0; i2 < loop_ub; i2++) {
          crn2_data[i2] = b_ii_data[i2];
        }

        /* corners: trg=1 */
        st.site = &x_emlrtRSI;
        if (d_any(&st, crn1_data, crn1_size) && e_any(&st, crn2_data, crn2_size))
        {
          /* take the smaller corner */
          if (1 > b_idx) {
            i2 = 0;
          } else {
            i2 = b_idx;
          }

          if (!(1 <= i2)) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i2, &ab_emlrtBCI, sp);
          }

          i2 = (int32_T)crn1_data[0];
          if (!((i2 >= 1) && (i2 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &y_emlrtBCI, sp);
          }

          if (!(1 <= loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &x_emlrtBCI, sp);
          }

          i2 = (int32_T)crn2_data[0];
          if (!((i2 >= 1) && (i2 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &w_emlrtBCI, sp);
          }

          if (muDoubleScalarMin(c_inters_intNormalizedDistance1[1 + 3 *
                                ((int32_T)crn1_data[0] - 1)], 1.0 -
                                c_inters_intNormalizedDistance1[1 + 3 *
                                ((int32_T)crn1_data[0] - 1)]) >
              muDoubleScalarMin(c_inters_intNormalizedDistance2[(int32_T)
                                crn2_data[0] + 2], 1.0 -
                                c_inters_intNormalizedDistance2[(int32_T)
                                crn2_data[0] + 2])) {
            crn1_size[1] = 0;
          } else {
            crn2_size[0] = 0;
          }
        }

        if (0 <= crn1_size[1] - 1) {
          c_loop_ub = crn1_size[1];
          d_loop_ub = crn1_size[1];
          e_loop_ub = crn1_size[1];
          f_loop_ub = crn1_size[1];
        }

        i = 1;
        while (i - 1 <= crn1_size[1] - 1) {
          if (!((i >= 1) && (i <= crn1_size[1]))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, crn1_size[1], &dc_emlrtBCI, sp);
          }

          i2 = (int32_T)crn1_data[i - 1];
          if (!((i2 >= 1) && (i2 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &v_emlrtBCI, sp);
          }

          trueCount = 0;
          for (b_loop_ub = 0; b_loop_ub < 3; b_loop_ub++) {
            if (b_tmpInt[b_loop_ub + 3 * ((int32_T)crn1_data[i - 1] - 1)]) {
              trueCount++;
            }
          }

          idx = 0;
          for (b_loop_ub = 0; b_loop_ub < 3; b_loop_ub++) {
            if (b_tmpInt[b_loop_ub + 3 * ((int32_T)crn1_data[i - 1] - 1)]) {
              tmp_data[idx] = b_loop_ub + 1;
              idx++;
            }
          }

          for (i2 = 0; i2 < c_loop_ub; i2++) {
            b_ii_data[i2] = (int32_T)crn1_data[i2];
          }

          if (!((i >= 1) && (i <= crn1_size[1]))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, crn1_size[1], &ec_emlrtBCI, sp);
          }

          i2 = b_ii_data[i - 1];
          if (!((i2 >= 1) && (i2 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &u_emlrtBCI, sp);
          }

          d_inters_intNormalizedDistance2[0] = trueCount;
          for (i2 = 0; i2 < trueCount; i2++) {
            d_inters_intNormalizedDistance1[i2] =
              c_inters_intNormalizedDistance2[(tmp_data[i2] + 3 * (b_ii_data[i -
              1] - 1)) - 1];
          }

          st.site = &y_emlrtRSI;
          parThresh = d_sum(&st, d_inters_intNormalizedDistance1,
                            d_inters_intNormalizedDistance2);
          for (i2 = 0; i2 < d_loop_ub; i2++) {
            b_ii_data[i2] = (int32_T)crn1_data[i2];
          }

          for (i2 = 0; i2 < e_loop_ub; i2++) {
            b_crn1_data[i2] = (int32_T)crn1_data[i2];
          }

          if (!((ii >= 1) && (ii <= 3))) {
            emlrtDynamicBoundsCheckR2012b(ii, 1, 3, &p_emlrtBCI, sp);
          }

          intList[ii - 1] = 1.0;
          intList[ii + 2] = 2.0;
          intList[ii + 5] = 2.0;
          if (!((i >= 1) && (i <= crn1_size[1]))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, crn1_size[1], &fc_emlrtBCI, sp);
          }

          intList[ii + 8] = b_ii_data[i - 1];
          if (!((i >= 1) && (i <= crn1_size[1]))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, crn1_size[1], &hc_emlrtBCI, sp);
          }

          i2 = b_crn1_data[i - 1];
          if (!((i2 >= 1) && (i2 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &gc_emlrtBCI, sp);
          }

          intList[ii + 11] = b_tmpInt[3 * (i2 - 1)];
          intList[ii + 14] = parThresh / 2.0;
          ii++;
          for (i2 = 0; i2 < f_loop_ub; i2++) {
            b_ii_data[i2] = (int32_T)crn1_data[i2];
          }

          if (!((i >= 1) && (i <= crn1_size[1]))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, crn1_size[1], &ic_emlrtBCI, sp);
          }

          i2 = b_ii_data[i - 1];
          if (!((i2 >= 1) && (i2 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &t_emlrtBCI, sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            b_tmpInt[i2 + 3 * (b_ii_data[i - 1] - 1)] = false;
          }

          /* remove intersection from mx */
          i++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        i = 1;
        while (i - 1 <= crn2_size[0] - 1) {
          if (!((i >= 1) && (i <= crn2_size[0]))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, crn2_size[0], &wb_emlrtBCI, sp);
          }

          i2 = (int32_T)crn2_data[i - 1];
          if (!((i2 >= 1) && (i2 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &r_emlrtBCI, sp);
          }

          trueCount = 0;
          for (b_loop_ub = 0; b_loop_ub < 3; b_loop_ub++) {
            if (b_tmpInt[((int32_T)crn2_data[i - 1] + 3 * b_loop_ub) - 1]) {
              trueCount++;
            }
          }

          idx = 0;
          for (b_loop_ub = 0; b_loop_ub < 3; b_loop_ub++) {
            if (b_tmpInt[((int32_T)crn2_data[i - 1] + 3 * b_loop_ub) - 1]) {
              b_tmp_data[idx] = b_loop_ub + 1;
              idx++;
            }
          }

          if (!((i >= 1) && (i <= crn2_size[0]))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, crn2_size[0], &xb_emlrtBCI, sp);
          }

          i2 = (int32_T)crn2_data[i - 1];
          if (!((i2 >= 1) && (i2 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &s_emlrtBCI, sp);
          }

          e_inters_intNormalizedDistance1[0] = 1;
          e_inters_intNormalizedDistance1[1] = trueCount;
          for (i2 = 0; i2 < trueCount; i2++) {
            d_inters_intNormalizedDistance1[i2] =
              c_inters_intNormalizedDistance1[((int32_T)crn2_data[i - 1] + 3 *
              (b_tmp_data[i2] - 1)) - 1];
          }

          st.site = &ab_emlrtRSI;
          parThresh = e_sum(&st, d_inters_intNormalizedDistance1,
                            e_inters_intNormalizedDistance1);

          /*          ixRep=find(intList(:,6)>0 & (intDistTrg>intList(:,6) | intDistTrg>1-intList(:,6))); */
          if (!((ii >= 1) && (ii <= 3))) {
            emlrtDynamicBoundsCheckR2012b(ii, 1, 3, &o_emlrtBCI, sp);
          }

          intList[ii - 1] = 2.0;
          intList[ii + 2] = 1.0;
          intList[ii + 5] = 2.0;
          if (!((i >= 1) && (i <= crn2_size[0]))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, crn2_size[0], &yb_emlrtBCI, sp);
          }

          intList[ii + 8] = crn2_data[i - 1];
          if (!((i >= 1) && (i <= crn2_size[0]))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, crn2_size[0], &bc_emlrtBCI, sp);
          }

          i2 = (int32_T)crn2_data[i - 1];
          if (!((i2 >= 1) && (i2 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &ac_emlrtBCI, sp);
          }

          intList[ii + 11] = b_tmpInt[i2 - 1];
          intList[ii + 14] = parThresh / 2.0;
          ii++;
          if (!((i >= 1) && (i <= crn2_size[0]))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, crn2_size[0], &cc_emlrtBCI, sp);
          }

          i2 = (int32_T)crn2_data[i - 1];
          if (!((i2 >= 1) && (i2 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &q_emlrtBCI, sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            b_tmpInt[((int32_T)crn2_data[i - 1] + 3 * i2) - 1] = false;
          }

          /* remove intersection from mx */
          i++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        if (b_tmpInt[4]) {
          b_sum(b_tmpInt, dv1);
          if (f_sum(dv1) > 1.0) {
            /* two corners intersecting */
            /*      if(sum(tmpInt(2,:))==1 && sum(tmpInt(:,2))==1 && sum(sum(tmpInt))>1)  */
            b_tmpInt[4] = false;
            st.site = &bb_emlrtRSI;
            b_st.site = &xb_emlrtRSI;
            b_idx = 0;
            b_loop_ub = 1;
            jj = 1;
            exitg1 = false;
            while ((!exitg1) && (jj <= 3)) {
              guard1 = false;
              if (b_tmpInt[(b_loop_ub + 3 * (jj - 1)) - 1]) {
                b_idx++;
                ii_data[b_idx - 1] = b_loop_ub;
                jj_data[b_idx - 1] = (int8_T)jj;
                if (b_idx >= 9) {
                  exitg1 = true;
                } else {
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }

              if (guard1) {
                b_loop_ub++;
                if (b_loop_ub > 3) {
                  b_loop_ub = 1;
                  jj++;
                }
              }
            }

            if (1 > b_idx) {
              loop_ub = 0;
            } else {
              loop_ub = b_idx;
            }

            par1[0] = 1;
            par1[1] = loop_ub;
            c_st.site = &bc_emlrtRSI;
            indexShapeCheck(&c_st, 9, par1);
            if (1 > b_idx) {
              b_loop_ub = 0;
            } else {
              b_loop_ub = b_idx;
            }

            par1[0] = 1;
            par1[1] = b_loop_ub;
            c_st.site = &ac_emlrtRSI;
            indexShapeCheck(&c_st, 9, par1);
            par1[0] = 1;
            if (1 > b_idx) {
              par1[1] = 0;
            } else {
              par1[1] = b_idx;
            }

            c_st.site = &yb_emlrtRSI;
            indexShapeCheck(&c_st, 9, par1);
            for (i2 = 0; i2 < loop_ub; i2++) {
              par1_data[i2] = ii_data[i2];
            }

            for (i2 = 0; i2 < b_loop_ub; i2++) {
              par2_data[i2] = jj_data[i2];
            }

            for (i2 = 0; i2 < loop_ub; i2++) {
              idx = par1_data[i2];
              if (!((idx >= 1) && (idx <= 3))) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, 3, &eb_emlrtBCI, sp);
              }
            }

            par1[0] = loop_ub;
            par1[1] = b_loop_ub;
            crn1_size[0] = loop_ub;
            crn1_size[1] = b_loop_ub;
            if ((par1[0] != crn1_size[0]) || (par1[1] != crn1_size[1])) {
              emlrtSizeEqCheckNDR2012b(&par1[0], &crn1_size[0], &b_emlrtECI, sp);
            }

            g_inters_intNormalizedDistance1[0] = loop_ub;
            g_inters_intNormalizedDistance1[1] = b_loop_ub;
            for (i2 = 0; i2 < b_loop_ub; i2++) {
              for (idx = 0; idx < loop_ub; idx++) {
                h_inters_intNormalizedDistance1[idx + loop_ub * i2] =
                  (c_inters_intNormalizedDistance1[(par1_data[idx] + 3 *
                    (par2_data[i2] - 1)) - 1] > 1.0 -
                   c_inters_intNormalizedDistance1[(par1_data[idx] + 3 *
                    (par2_data[i2] - 1)) - 1]);
              }
            }

            par1_size[0] = loop_ub;
            for (i2 = 0; i2 < loop_ub; i2++) {
              inters_intAdjacencyMatrix[i2] = (par1_data[i2] == 3);
            }

            st.site = &cb_emlrtRSI;
            xor(&st, h_inters_intNormalizedDistance1,
                g_inters_intNormalizedDistance1, inters_intAdjacencyMatrix,
                par1_size, ci_data, ci_size);

            /* end xor 3 */
            st.site = &db_emlrtRSI;
            if (g_sum(&st, ci_data, ci_size) != 1.0) {
              st.site = &db_emlrtRSI;
              c_error(&st);
            }

            jj = ci_size[0] - 1;
            trueCount = 0;
            for (i = 0; i <= jj; i++) {
              if (ci_data[i]) {
                trueCount++;
              }
            }

            idx = 0;
            for (i = 0; i <= jj; i++) {
              if (ci_data[i]) {
                c_tmp_data[idx] = i + 1;
                idx++;
              }
            }

            st.site = &eb_emlrtRSI;
            for (i2 = 0; i2 < trueCount; i2++) {
              if (!((c_tmp_data[i2] >= 1) && (c_tmp_data[i2] <= loop_ub))) {
                emlrtDynamicBoundsCheckR2012b(c_tmp_data[i2], 1, loop_ub,
                  &fb_emlrtBCI, &st);
              }

              b_varargin_5_data[i2] = (par1_data[c_tmp_data[i2] - 1] == 1);
            }

            for (i2 = 0; i2 < trueCount; i2++) {
              if (!((c_tmp_data[i2] >= 1) && (c_tmp_data[i2] <= b_loop_ub))) {
                emlrtDynamicBoundsCheckR2012b(c_tmp_data[i2], 1, b_loop_ub,
                  &gb_emlrtBCI, &st);
              }

              b_varargin_6_data[i2] = (par2_data[c_tmp_data[i2] - 1] == 3);
            }

            b_st.site = &cc_emlrtRSI;
            c_st.site = &dc_emlrtRSI;
            beg = (trueCount == 1);
            if (!beg) {
              emlrtErrorWithMessageIdR2012b(&c_st, &k_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            if (trueCount != 1) {
              beg = false;
            }

            if (!beg) {
              emlrtErrorWithMessageIdR2012b(&c_st, &k_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            if (!((ii >= 1) && (ii <= 3))) {
              emlrtDynamicBoundsCheckR2012b(ii, 1, 3, &n_emlrtBCI, sp);
            }

            intList[ii - 1] = 1.0;
            intList[ii + 2] = 2.0;
            intList[ii + 5] = 2.0;
            intList[ii + 8] = 2.0;
            for (i2 = 0; i2 < trueCount; i2++) {
              intList[ii + 11] = b_varargin_5_data[i2];
            }

            for (i2 = 0; i2 < trueCount; i2++) {
              intList[ii + 14] = b_varargin_6_data[i2];
            }

            ii++;
            jj = ci_size[0];
            for (i = 0; i < jj; i++) {
              if (ci_data[i] && (!((i + 1 >= 1) && (i + 1 <= loop_ub)))) {
                emlrtDynamicBoundsCheckR2012b(i + 1, 1, loop_ub, &b_emlrtBCI, sp);
              }
            }

            jj = ci_size[0];
            for (i = 0; i < jj; i++) {
              if (ci_data[i] && (!((i + 1 >= 1) && (i + 1 <= b_loop_ub)))) {
                emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_loop_ub, &emlrtBCI, sp);
              }
            }

            jj = ci_size[0] - 1;
            trueCount = 0;
            for (i = 0; i <= jj; i++) {
              if (ci_data[i]) {
                trueCount++;
              }
            }

            idx = 0;
            for (i = 0; i <= jj; i++) {
              if (ci_data[i]) {
                f_tmp_data[idx] = i + 1;
                idx++;
              }
            }

            for (i2 = 0; i2 < trueCount; i2++) {
              for (idx = 0; idx < trueCount; idx++) {
                b_tmpInt[(par1_data[f_tmp_data[idx] - 1] + 3 *
                          (par2_data[f_tmp_data[i2] - 1] - 1)) - 1] = false;
              }
            }
          }
        }

        for (i2 = 0; i2 < 3; i2++) {
          tmpInt[i2] = b_tmpInt[1 + 3 * i2];
        }

        if ((h_sum(tmpInt) == 1.0) && (i_sum(*(boolean_T (*)[3])&b_tmpInt[3]) ==
             1.0)) {
          /* two corners intersecting */
          st.site = &fb_emlrtRSI;
          b_st.site = &l_emlrtRSI;
          b_idx = 0;
          b_loop_ub = 1;
          exitg1 = false;
          while ((!exitg1) && (b_loop_ub < 4)) {
            if (b_tmpInt[b_loop_ub + 2]) {
              b_idx++;
              b_ii_data[b_idx - 1] = b_loop_ub;
              if (b_idx >= 3) {
                exitg1 = true;
              } else {
                b_loop_ub++;
              }
            } else {
              b_loop_ub++;
            }
          }

          if (1 > b_idx) {
            loop_ub = 0;
          } else {
            loop_ub = b_idx;
          }

          par1[0] = 1;
          par1[1] = loop_ub;
          c_st.site = &m_emlrtRSI;
          indexShapeCheck(&c_st, 3, par1);
          for (i2 = 0; i2 < loop_ub; i2++) {
            crn2_data[i2] = b_ii_data[i2];
          }

          for (i2 = 0; i2 < loop_ub; i2++) {
            par1_data[i2] = b_ii_data[i2];
          }

          f_inters_intNormalizedDistance1[0] = loop_ub;
          for (i2 = 0; i2 < loop_ub; i2++) {
            tmpInt[i2] = (c_inters_intNormalizedDistance1[(int32_T)crn2_data[i2]
                          + 2] > 1.0 - c_inters_intNormalizedDistance1[(int32_T)
                          crn2_data[i2] + 2]);
          }

          b_crn2_size[0] = loop_ub;
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_crn2_data[i2] = (crn2_data[i2] == 3.0);
          }

          st.site = &gb_emlrtRSI;
          b_xor(&st, tmpInt, f_inters_intNormalizedDistance1, b_crn2_data,
                b_crn2_size, varargin_5_data, crn2_size);
          ci_size[0] = crn2_size[0];
          b_loop_ub = crn2_size[0];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            ci_data[i2] = varargin_5_data[i2];
          }

          if (ifWhileCond(ci_data, ci_size)) {
            if (!((ii >= 1) && (ii <= 3))) {
              emlrtDynamicBoundsCheckR2012b(ii, 1, 3, &m_emlrtBCI, sp);
            }

            b_idx = 0;
            b_loop_ub = 1;
            exitg1 = false;
            while ((!exitg1) && (b_loop_ub < 4)) {
              if (b_tmpInt[1 + 3 * (b_loop_ub - 1)]) {
                b_idx++;
                b_ii_data[b_idx - 1] = b_loop_ub;
                if (b_idx >= 3) {
                  exitg1 = true;
                } else {
                  b_loop_ub++;
                }
              } else {
                b_loop_ub++;
              }
            }

            if (1 > b_idx) {
              trueCount = 0;
            } else {
              trueCount = b_idx;
            }

            st.site = &hb_emlrtRSI;
            for (i2 = 0; i2 < loop_ub; i2++) {
              varargin_5_data[i2] = (crn2_data[i2] == 3.0);
            }

            if (1 > b_idx) {
              b_loop_ub = 0;
            } else {
              b_loop_ub = b_idx;
            }

            for (i2 = 0; i2 < b_loop_ub; i2++) {
              varargin_6_data[i2] = (b_ii_data[i2] == 3);
            }

            b_st.site = &hc_emlrtRSI;
            c_st.site = &dc_emlrtRSI;
            if ((loop_ub == 1) || (loop_ub == 0)) {
              beg = true;
            } else {
              beg = false;
            }

            if (!beg) {
              emlrtErrorWithMessageIdR2012b(&c_st, &k_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            if ((loop_ub == 1) || (loop_ub == 0)) {
            } else {
              beg = false;
            }

            if (!beg) {
              emlrtErrorWithMessageIdR2012b(&c_st, &k_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            jj = !(loop_ub == 0);
            for (i2 = 0; i2 < jj; i2++) {
              reshapes_f3_data[i2] = par1_data[i2];
            }

            idx = !(loop_ub == 0);
            if (!(trueCount == 0)) {
              b_loop_ub = trueCount;
            } else {
              b_loop_ub = 0;
            }

            for (i2 = 0; i2 < loop_ub; i2++) {
              c_varargin_5_data[i2] = (int8_T)varargin_5_data[i2];
            }

            for (i2 = 0; i2 < trueCount; i2++) {
              c_varargin_6_data[i2] = (int8_T)varargin_6_data[i2];
            }

            tmp_size[0] = 1;
            tmp_size[1] = ((jj + idx) + b_loop_ub) + 3;
            d_tmp_data[0] = 1;
            d_tmp_data[1] = 2;
            for (i2 = 0; i2 < jj; i2++) {
              d_tmp_data[i2 + 2] = reshapes_f3_data[i2];
            }

            d_tmp_data[2 + jj] = 2;
            for (i2 = 0; i2 < idx; i2++) {
              d_tmp_data[(i2 + jj) + 3] = c_varargin_5_data[i2];
            }

            for (i2 = 0; i2 < b_loop_ub; i2++) {
              d_tmp_data[((i2 + jj) + idx) + 3] = c_varargin_6_data[i2];
            }

            for (i2 = 0; i2 < 2; i2++) {
              par1[i2] = 1 + 5 * i2;
            }

            emlrtSubAssignSizeCheckR2012b(par1, 2, tmp_size, 2, &emlrtECI, sp);
            loop_ub = tmp_size[1];
            for (i2 = 0; i2 < loop_ub; i2++) {
              e_tmp_data[i2] = d_tmp_data[i2];
            }

            for (i2 = 0; i2 < 6; i2++) {
              intList[(ii + 3 * i2) - 1] = e_tmp_data[i2];
            }

            ii++;
            for (i2 = 0; i2 < 3; i2++) {
              b_tmpInt[1 + 3 * i2] = false;
            }

            for (i2 = 0; i2 < 3; i2++) {
              b_tmpInt[3 + i2] = false;
            }
          }
        }

        st.site = &ib_emlrtRSI;
        b_st.site = &xb_emlrtRSI;
        b_idx = 0;
        b_loop_ub = 1;
        jj = 1;
        exitg1 = false;
        while ((!exitg1) && (jj <= 3)) {
          guard1 = false;
          if (b_tmpInt[(b_loop_ub + 3 * (jj - 1)) - 1]) {
            b_idx++;
            ii_data[b_idx - 1] = b_loop_ub;
            jj_data[b_idx - 1] = (int8_T)jj;
            if (b_idx >= 9) {
              exitg1 = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            b_loop_ub++;
            if (b_loop_ub > 3) {
              b_loop_ub = 1;
              jj++;
            }
          }
        }

        if (1 > b_idx) {
          loop_ub = 0;
        } else {
          loop_ub = b_idx;
        }

        par1[0] = 1;
        par1[1] = loop_ub;
        c_st.site = &bc_emlrtRSI;
        indexShapeCheck(&c_st, 9, par1);
        if (1 > b_idx) {
          b_loop_ub = 0;
        } else {
          b_loop_ub = b_idx;
        }

        par1[0] = 1;
        par1[1] = b_loop_ub;
        c_st.site = &ac_emlrtRSI;
        indexShapeCheck(&c_st, 9, par1);
        par1[0] = 1;
        if (1 > b_idx) {
          par1[1] = 0;
        } else {
          par1[1] = b_idx;
        }

        c_st.site = &yb_emlrtRSI;
        indexShapeCheck(&c_st, 9, par1);
        for (i2 = 0; i2 < loop_ub; i2++) {
          par1_data[i2] = ii_data[i2];
        }

        for (i2 = 0; i2 < b_loop_ub; i2++) {
          par2_data[i2] = jj_data[i2];
        }

        st.site = &ib_emlrtRSI;
        b_st.site = &cc_emlrtRSI;
        c_st.site = &dc_emlrtRSI;
        beg = true;
        if (b_loop_ub != loop_ub) {
          beg = false;
        }

        if (!beg) {
          emlrtErrorWithMessageIdR2012b(&c_st, &k_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        for (i2 = 0; i2 < loop_ub; i2++) {
          parX_data[i2] = par1_data[i2];
        }

        for (i2 = 0; i2 < b_loop_ub; i2++) {
          parX_data[i2 + loop_ub] = par2_data[i2];
        }

        /* get intersection index */
        i = 1;
        while (i - 1 <= loop_ub - 1) {
          /* single intersections */
          /*          if(ins1(i)==2 && ins2(i)==2); continue; end %just ignore it - probably a corner */
          if (!((i >= 1) && (i <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, loop_ub, &sb_emlrtBCI, sp);
          }

          if (!((i >= 1) && (i <= b_loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, b_loop_ub, &tb_emlrtBCI, sp);
          }

          st.site = &jb_emlrtRSI;
          findSrc(&st, c_inters_intNormalizedDistance1,
                  c_inters_intNormalizedDistance2, par1_data[i - 1], par2_data[i
                  - 1], lenVc, &parThresh, &trgF, &beg, &b);
          if (!((ii >= 1) && (ii <= 3))) {
            emlrtDynamicBoundsCheckR2012b(ii, 1, 3, &l_emlrtBCI, sp);
          }

          intList[ii - 1] = parThresh;
          intList[ii + 2] = trgF;
          if (!((i >= 1) && (i <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, loop_ub, &ub_emlrtBCI, sp);
          }

          intList[ii + 5] = parX_data[(i + loop_ub * ((int32_T)parThresh - 1)) -
            1];
          if (!((i >= 1) && (i <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, loop_ub, &vb_emlrtBCI, sp);
          }

          intList[ii + 8] = parX_data[(i + loop_ub * ((int32_T)trgF - 1)) - 1];
          intList[ii + 11] = beg;
          intList[ii + 14] = b;
          ii++;
          i++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        /*  move according to type of interaction------------------- */
        switch (ii) {
         case 1:
          /* switch on number of distinct contacts */
          /* no intersections  */
          break;

         case 2:
          /* if only one intersection: rotate------------------  */
          /* find force: */
          st.site = &kb_emlrtRSI;
          intForce(&st, sm, crd, intList[0], intList[6], intList[12], intList[3],
                   intList[9], intList[15], &fAng, &b, fNet);

          /* get force angle from what we are pushing on (normal to the surface): */
          /* and calculate the response on the pushed smarticle: */
          for (i2 = 0; i2 < 6; i2++) {
            piv[i2] = 0.0;
          }

          if (intList[9] != (int32_T)muDoubleScalarFloor(intList[9])) {
            emlrtIntegerCheckR2012b(intList[9], &k_emlrtDCI, sp);
          }

          switch ((int32_T)intList[9]) {
           case 1:
            /* pivot target */
            /* left arm pushed */
            if (intList[3] != (int32_T)muDoubleScalarFloor(intList[3])) {
              emlrtIntegerCheckR2012b(intList[3], &l_emlrtDCI, sp);
            }

            i2 = (int32_T)intList[3];
            if (!((i2 >= 1) && (i2 <= 2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &hb_emlrtBCI, sp);
            }

            if (intList[3] != (int32_T)muDoubleScalarFloor(intList[3])) {
              emlrtIntegerCheckR2012b(intList[3], &m_emlrtDCI, sp);
            }

            idx = (int32_T)intList[3];
            if (!((idx >= 1) && (idx <= 2))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, 2, &ib_emlrtBCI, sp);
            }

            pivotArm(sm[i2 + 5], sm[idx + 5] + 1.5707963267948966, (1.0 -
                      intList[15]) * A / B, d_inters_intNormalizedDistance1);
            if (intList[3] != (int32_T)muDoubleScalarFloor(intList[3])) {
              emlrtIntegerCheckR2012b(intList[3], &j_emlrtDCI, sp);
            }

            i2 = (int32_T)intList[3];
            if (!((i2 >= 1) && (i2 <= 2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &k_emlrtBCI, sp);
            }

            for (i2 = 0; i2 < 3; i2++) {
              piv[((int32_T)intList[3] + (i2 << 1)) - 1] =
                d_inters_intNormalizedDistance1[i2];
            }

            for (i2 = 0; i2 < 2; i2++) {
              piv[((int32_T)intList[3] + (i2 << 2)) - 1] = -piv[((int32_T)
                intList[3] + (i2 << 2)) - 1];
            }

            /* flip x-axis */
            break;

           case 2:
            /* body pushed */
            st.site = &lb_emlrtRSI;
            pivotBody(&st, intList[15] - 0.5, d_inters_intNormalizedDistance1);
            if (intList[3] != (int32_T)muDoubleScalarFloor(intList[3])) {
              emlrtIntegerCheckR2012b(intList[3], &i_emlrtDCI, sp);
            }

            i2 = (int32_T)intList[3];
            if (!((i2 >= 1) && (i2 <= 2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &j_emlrtBCI, sp);
            }

            for (i2 = 0; i2 < 3; i2++) {
              piv[((int32_T)intList[3] + (i2 << 1)) - 1] =
                d_inters_intNormalizedDistance1[i2];
            }
            break;

           case 3:
            /* right arm pushed */
            if (intList[3] != (int32_T)muDoubleScalarFloor(intList[3])) {
              emlrtIntegerCheckR2012b(intList[3], &n_emlrtDCI, sp);
            }

            i2 = (int32_T)intList[3];
            if (!((i2 >= 1) && (i2 <= 2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &jb_emlrtBCI, sp);
            }

            if (intList[3] != (int32_T)muDoubleScalarFloor(intList[3])) {
              emlrtIntegerCheckR2012b(intList[3], &o_emlrtDCI, sp);
            }

            idx = (int32_T)intList[3];
            if (!((idx >= 1) && (idx <= 2))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, 2, &kb_emlrtBCI, sp);
            }

            pivotArm(sm[i2 + 7], sm[idx + 7] + 1.5707963267948966, intList[15] *
                     A / B, d_inters_intNormalizedDistance1);
            if (intList[3] != (int32_T)muDoubleScalarFloor(intList[3])) {
              emlrtIntegerCheckR2012b(intList[3], &h_emlrtDCI, sp);
            }

            i2 = (int32_T)intList[3];
            if (!((i2 >= 1) && (i2 <= 2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &i_emlrtBCI, sp);
            }

            for (i2 = 0; i2 < 3; i2++) {
              piv[((int32_T)intList[3] + (i2 << 1)) - 1] =
                d_inters_intNormalizedDistance1[i2];
            }
            break;
          }

          /* calculate the response on the pushing smarticle: */
          if (intList[6] != (int32_T)muDoubleScalarFloor(intList[6])) {
            emlrtIntegerCheckR2012b(intList[6], &g_emlrtDCI, sp);
          }

          switch ((int32_T)intList[6]) {
           case 1:
            /* pushing with left arm tip */
            if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
              emlrtIntegerCheckR2012b(intList[0], &p_emlrtDCI, sp);
            }

            i2 = (int32_T)intList[0];
            if (!((i2 >= 1) && (i2 <= 2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &lb_emlrtBCI, sp);
            }

            if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
              emlrtIntegerCheckR2012b(intList[0], &q_emlrtDCI, sp);
            }

            idx = (int32_T)intList[0];
            if (!((idx >= 1) && (idx <= 2))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, 2, &mb_emlrtBCI, sp);
            }

            pivotArm(sm[i2 + 5], (-fAng + sm[idx + 3]) + 1.5707963267948966, A /
                     B, d_inters_intNormalizedDistance1);
            if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
              emlrtIntegerCheckR2012b(intList[0], &f_emlrtDCI, sp);
            }

            i2 = (int32_T)intList[0];
            if (!((i2 >= 1) && (i2 <= 2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &h_emlrtBCI, sp);
            }

            for (i2 = 0; i2 < 3; i2++) {
              piv[((int32_T)intList[0] + (i2 << 1)) - 1] =
                d_inters_intNormalizedDistance1[i2];
            }

            for (i2 = 0; i2 < 2; i2++) {
              piv[((int32_T)intList[0] + (i2 << 2)) - 1] = -piv[((int32_T)
                intList[0] + (i2 << 2)) - 1];
            }
            break;

           case 2:
            st.site = &mb_emlrtRSI;
            toLogicalCheck(&st, intList[12]);
            if (intList[12] != 0.0) {
              /* pusing with left corner */
              if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
                emlrtIntegerCheckR2012b(intList[0], &s_emlrtDCI, sp);
              }

              i2 = (int32_T)intList[0];
              if (!((i2 >= 1) && (i2 <= 2))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &ob_emlrtBCI, sp);
              }

              pivotArm(0.0, (-fAng + sm[i2 + 3]) + 1.5707963267948966, 0.0,
                       d_inters_intNormalizedDistance1);
              if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
                emlrtIntegerCheckR2012b(intList[0], &e_emlrtDCI, sp);
              }

              i2 = (int32_T)intList[0];
              if (!((i2 >= 1) && (i2 <= 2))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &g_emlrtBCI, sp);
              }

              for (i2 = 0; i2 < 3; i2++) {
                piv[((int32_T)intList[0] + (i2 << 1)) - 1] =
                  d_inters_intNormalizedDistance1[i2];
              }

              for (i2 = 0; i2 < 2; i2++) {
                piv[((int32_T)intList[0] + (i2 << 2)) - 1] = -piv[((int32_T)
                  intList[0] + (i2 << 2)) - 1];
              }
            } else {
              /* if pushing with right corner */
              if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
                emlrtIntegerCheckR2012b(intList[0], &r_emlrtDCI, sp);
              }

              i2 = (int32_T)intList[0];
              if (!((i2 >= 1) && (i2 <= 2))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &nb_emlrtBCI, sp);
              }

              pivotArm(0.0, (fAng - sm[i2 + 3]) + 1.5707963267948966, 0.0,
                       d_inters_intNormalizedDistance1);
              if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
                emlrtIntegerCheckR2012b(intList[0], &d_emlrtDCI, sp);
              }

              i2 = (int32_T)intList[0];
              if (!((i2 >= 1) && (i2 <= 2))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &f_emlrtBCI, sp);
              }

              for (i2 = 0; i2 < 3; i2++) {
                piv[((int32_T)intList[0] + (i2 << 1)) - 1] =
                  d_inters_intNormalizedDistance1[i2];
              }
            }
            break;

           case 3:
            /* if pushing with the right arm tip */
            if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
              emlrtIntegerCheckR2012b(intList[0], &t_emlrtDCI, sp);
            }

            i2 = (int32_T)intList[0];
            if (!((i2 >= 1) && (i2 <= 2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &pb_emlrtBCI, sp);
            }

            if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
              emlrtIntegerCheckR2012b(intList[0], &u_emlrtDCI, sp);
            }

            idx = (int32_T)intList[0];
            if (!((idx >= 1) && (idx <= 2))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, 2, &qb_emlrtBCI, sp);
            }

            pivotArm(sm[i2 + 7], (fAng - sm[idx + 3]) + 1.5707963267948966, A /
                     B, d_inters_intNormalizedDistance1);
            if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
              emlrtIntegerCheckR2012b(intList[0], &c_emlrtDCI, sp);
            }

            i2 = (int32_T)intList[0];
            if (!((i2 >= 1) && (i2 <= 2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &e_emlrtBCI, sp);
            }

            for (i2 = 0; i2 < 3; i2++) {
              piv[((int32_T)intList[0] + (i2 << 1)) - 1] =
                d_inters_intNormalizedDistance1[i2];
            }
            break;
          }

          for (i2 = 0; i2 < 2; i2++) {
            piv[4 + i2] *= fricCoeff[i2];
          }

          /* scale force by friction coefficients */
          /* chose which of the two moves - random, but weighted by the required force: */
          if (intList[0] != (int32_T)muDoubleScalarFloor(intList[0])) {
            emlrtIntegerCheckR2012b(intList[0], &b_emlrtDCI, sp);
          }

          i2 = (int32_T)intList[0];
          if (!((i2 >= 1) && (i2 <= 2))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &d_emlrtBCI, sp);
          }

          parThresh = muDoubleScalarAbs(piv[(int32_T)intList[0] + 3]);
          if (intList[3] != (int32_T)muDoubleScalarFloor(intList[3])) {
            emlrtIntegerCheckR2012b(intList[3], &emlrtDCI, sp);
          }

          i2 = (int32_T)intList[3];
          if (!((i2 >= 1) && (i2 <= 2))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &c_emlrtBCI, sp);
          }

          trgF = muDoubleScalarAbs(piv[(int32_T)intList[3] + 3]);
          st.site = &nb_emlrtRSI;
          if ((parThresh - trgF) / (parThresh + trgF) < 0.5 * (c_rand() - 0.5))
          {
            mv = intList[0];

            /* move source smarticle */
          } else {
            mv = intList[3];

            /* else move target smarticle */
          }

          cth = muDoubleScalarCos(sm[(int32_T)mv + 3] - 1.5707963267948966);
          parShift = muDoubleScalarSin(sm[(int32_T)mv + 3] - 1.5707963267948966);

          /* rotation matrix */
          /* pivot to smarticle COM in lab frame */
          /* pivot point in absolute coord */
          parThresh = (intList[6] - intList[12]) * 2.0;
          b_cth[0] = cth;
          b_cth[2] = -parShift;
          b_cth[1] = parShift;
          b_cth[3] = cth;
          for (i2 = 0; i2 < 2; i2++) {
            vec2m[i2] = 0.0;
            for (idx = 0; idx < 2; idx++) {
              vec2m[i2] += b_cth[i2 + (idx << 1)] * piv[((int32_T)mv + (idx << 1))
                - 1];
            }
          }

          for (i2 = 0; i2 < 2; i2++) {
            trgF = parThresh + (1.0 + (real_T)i2);
            if (trgF != (int32_T)muDoubleScalarFloor(trgF)) {
              emlrtIntegerCheckR2012b(trgF, &v_emlrtDCI, sp);
            }

            idx = (int32_T)trgF;
            if (!((idx >= 1) && (idx <= 8))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, 8, &rb_emlrtBCI, sp);
            }

            pivRad[i2] = crd[((int32_T)intList[0] + ((idx - 1) << 1)) - 1] -
              (sm[((int32_T)mv + (i2 << 1)) - 1] + vec2m[i2] * B);
          }

          /* pivot to collision point */
          parThresh = pivRad[0];
          pivRad[0] = muDoubleScalarAtan2(pivRad[1], pivRad[0]);
          pivRad[1] = muDoubleScalarHypot(parThresh, pivRad[1]);

          /* angle to pivot in order to resolve collision */
          /* cap pivot angle */
          /*      pivAngle=max(pivAngle,tRes*3/pivRad(2)); %bound pivot angle from below */
          st.site = &ob_emlrtRSI;
          trgF = trEps * (1.0 + c_rand());
          trgF = (1.0 - 2.0 * (real_T)(mv == intList[0])) * b *
            muDoubleScalarSign(piv[(int32_T)mv + 3]) * (muDoubleScalarMin
            (muDoubleScalarAbs(fNet[1] / pivRad[1] * muDoubleScalarCos(fAng -
            fNet[0]) / muDoubleScalarSin(fAng - pivRad[0])), maxAngle) + trgF /
            muDoubleScalarMax(pivRad[1], 0.5 * B));

          /* rotate a little further to make sure, and orient */
          for (i2 = 0; i2 < 2; i2++) {
            fNet[i2] = sm[((int32_T)mv + (i2 << 1)) - 1] - sm[((int32_T)(3.0 -
              mv) + (i2 << 1)) - 1];
          }

          /* vector between smarticles */
          /* rotate COM; add repulsive noise to prevent sticking together: */
          parThresh = trEps * muDoubleScalarAbs(trgF);
          fAng = norm(fNet);
          st.site = &pb_emlrtRSI;
          b = c_rand();
          b_cth[0] = cth;
          b_cth[2] = -parShift;
          b_cth[1] = parShift;
          b_cth[3] = cth;
          for (i2 = 0; i2 < 2; i2++) {
            vec2m[i2] = 0.0;
            for (idx = 0; idx < 2; idx++) {
              vec2m[i2] += b_cth[i2 + (idx << 1)] * piv[((int32_T)mv + (idx << 1))
                - 1];
            }

            pivRad[i2] = vec2m[i2] * B;
          }

          flip(pivRad);
          for (i2 = 0; i2 < 2; i2++) {
            xSm[((int32_T)mv + (i2 << 1)) - 1] = (sm[((int32_T)mv + (i2 << 1)) -
              1] + trgF * (1.0 + -2.0 * (real_T)i2) * pivRad[i2]) + parThresh *
              fNet[i2] / fAng * b;
          }

          xSm[(int32_T)mv + 3] += trgF;

          /* rotate angle */
          break;

         default:
          /* if >=2 intersections: pushing off - parallel transport */
          st.site = &qb_emlrtRSI;
          mv = 1.0 + (real_T)((fricCoeff[1] - fricCoeff[0]) / (fricCoeff[1] +
            fricCoeff[0]) < 0.5 * (c_rand() - 0.5));

          /* move the one with smaller fricCoeff */
          for (i2 = 0; i2 < 2; i2++) {
            fNet[i2] = 0.0;
          }

          i = 0;
          while (i <= ii - 2) {
            /* intList=[src,trg,sLk,tLk,beg,intDistTrg] */
            st.site = &rb_emlrtRSI;
            intForce(&st, sm, crd, intList[i], intList[6 + i], intList[12 + i],
                     intList[3 + i], intList[9 + i], intList[15 + i], &fAng, &b,
                     pivRad);
            jj = (mv == intList[i]) << 1;
            vec2m[0] = muDoubleScalarCos(fAng) * (1.0 - (real_T)jj) * b;
            vec2m[1] = muDoubleScalarSin(fAng) * (1.0 - (real_T)jj) * b;
            for (i2 = 0; i2 < 2; i2++) {
              fNet[i2] += vec2m[i2];
            }

            i++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }

          for (i2 = 0; i2 < 2; i2++) {
            xSm[((int32_T)mv + (i2 << 1)) - 1] = sm[((int32_T)mv + (i2 << 1)) -
              1] + fNet[i2] / ((real_T)ii - 1.0) * parShift;
          }

          st.site = &sb_emlrtRSI;
          xSm[(int32_T)mv + 3] += (c_rand() - 0.5) * tRes;

          /* add angle fluctuation */
          break;
        }

        /*      if(any(any(isnan(xSm)))) */
      }
    }
  }
}

/* End of code generation (pairCollision.c) */
