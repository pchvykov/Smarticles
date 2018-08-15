/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pairCollision2.c
 *
 * Code generation for function 'pairCollision2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "pairCollision2.h"
#include "error.h"
#include "flip.h"
#include "norm.h"
#include "runSmarticles_mexutil.h"
#include "lineSegmentIntersect.h"
#include "smcle2coord.h"
#include "mod.h"
#include "sum.h"
#include "indexShapeCheck.h"
#include "repmat.h"
#include "ifWhileCond.h"
#include "all.h"
#include "runSmarticles_data.h"

/* Variable Definitions */
static emlrtRSInfo ib_emlrtRSI = { 9,  /* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 15, /* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 27, /* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 32, /* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 45, /* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 69, /* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 87, /* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 90, /* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 116,/* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 124,/* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 125,/* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 151,/* lineNo */
  "pairCollision2",                    /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 12, /* lineNo */
  "sqrt",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  30,                                  /* lineNo */
  62,                                  /* colNo */
  "inters.intAdjacencyMatrix",         /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 30,  /* lineNo */
  62,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  50,                                  /* colNo */
  "inX",                               /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  29,                                  /* lineNo */
  56,                                  /* colNo */
  "inters.intAdjacencyMatrix",         /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 29,  /* lineNo */
  56,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  50,                                  /* lineNo */
  23,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 50,  /* lineNo */
  23,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  77,                                  /* lineNo */
  20,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 77,  /* lineNo */
  20,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  97,                                  /* lineNo */
  50,                                  /* colNo */
  "nextCrd",                           /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 97,  /* lineNo */
  50,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  97,                                  /* lineNo */
  79,                                  /* colNo */
  "nextCrd",                           /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 97,  /* lineNo */
  79,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  102,                                 /* lineNo */
  32,                                  /* colNo */
  "nextCrd",                           /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 102, /* lineNo */
  32,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 102, /* lineNo */
  59,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  103,                                 /* lineNo */
  25,                                  /* colNo */
  "nextCrd",                           /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 103, /* lineNo */
  25,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 103, /* lineNo */
  52,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  107,                                 /* lineNo */
  66,                                  /* colNo */
  "lenMx",                             /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 107, /* lineNo */
  66,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  106,                                 /* lineNo */
  75,                                  /* colNo */
  "lenMx",                             /* aName */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 106, /* lineNo */
  75,                                  /* colNo */
  "pairCollision2",                    /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision2.m",/* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void pivotArm(real_T al, real_T th, real_T c_A, real_T out[3]);

/* Function Definitions */
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

void pairCollision2(const emlrtStack *sp, const real_T sm[10], const real_T
                    fricCoeff[2], const real_T nextAl[4], real_T xSm[6])
{
  real_T crd[16];
  int32_T ix;
  real_T b_crd[12];
  real_T c_crd[12];
  boolean_T inters_intAdjacencyMatrix[9];
  real_T inters_intMatrixX[9];
  real_T inters_intMatrixY[9];
  real_T c_inters_intNormalizedDistance1[9];
  real_T c_inters_intNormalizedDistance2[9];
  boolean_T b_inters_intAdjacencyMatrix[9];
  boolean_T c_inters_intAdjacencyMatrix[3];
  real_T dv2[3];
  real_T lenMx[9];
  int32_T ixstart;
  real_T lenMx2[9];
  int32_T idx;
  int32_T begS;
  boolean_T exitg1;
  int32_T iv3[2];
  int8_T ii_data[9];
  int8_T inX_data[9];
  real_T intDistVc[4];
  real_T tmp;
  int32_T src;
  int32_T trg;
  real_T tLk;
  real_T sLk;
  real_T trgF;
  boolean_T beg;
  real_T trEps;
  boolean_T expl_temp;
  real_T fAng;
  real_T piv[6];
  real_T cth;
  real_T pCOMold[2];
  real_T d0;
  real_T vStickOut[2];
  real_T so2fAng;
  real_T fDir;
  real_T pAold;
  int32_T mv;
  real_T pivAngle;
  real_T sth;
  real_T pivRad[2];
  real_T b_xSm[10];
  real_T b[2];
  real_T b_cth[2];
  real_T pivCOM[2];
  real_T d_crd[4];
  boolean_T exitg2;
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
  /*  check for collisions:---------- */
  smcle2coord(sm, crd);
  for (ix = 0; ix < 4; ix++) {
    b_crd[3 * ix] = crd[ix << 1];
    b_crd[1 + 3 * ix] = crd[(2 + ix) << 1];
    b_crd[2 + 3 * ix] = crd[(4 + ix) << 1];
    c_crd[3 * ix] = crd[1 + (ix << 1)];
    c_crd[1 + 3 * ix] = crd[1 + ((2 + ix) << 1)];
    c_crd[2 + 3 * ix] = crd[1 + ((4 + ix) << 1)];
  }

  lineSegmentIntersect(b_crd, c_crd, inters_intAdjacencyMatrix,
                       inters_intMatrixX, inters_intMatrixY,
                       c_inters_intNormalizedDistance1,
                       c_inters_intNormalizedDistance2);
  for (ix = 0; ix < 9; ix++) {
    b_inters_intAdjacencyMatrix[ix] = !inters_intAdjacencyMatrix[ix];
  }

  st.site = &ib_emlrtRSI;
  all(&st, b_inters_intAdjacencyMatrix, c_inters_intAdjacencyMatrix);
  if (ifWhileCond(c_inters_intAdjacencyMatrix)) {
    for (ix = 0; ix < 6; ix++) {
      xSm[ix] = 0.0;
    }
  } else {
    /* if no collision, return false */
    /* if just checking for collisions */
    /*      cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12); */
    /*      scatter(inters.intMatrixX(:),inters.intMatrixY(:),1000,'r.'); %mark collision points */
    /*  find out who is pushing who:------- */
    dv2[0] = A;
    dv2[1] = B;
    dv2[2] = A;
    repmat(dv2, lenMx);
    for (ix = 0; ix < 3; ix++) {
      for (ixstart = 0; ixstart < 3; ixstart++) {
        lenMx2[ixstart + 3 * ix] = lenMx[ix + 3 * ixstart];
      }
    }

    /* scales to get real-space distances */
    st.site = &jb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    idx = 0;
    begS = 1;
    exitg1 = false;
    while ((!exitg1) && (begS < 10)) {
      if (inters_intAdjacencyMatrix[begS - 1]) {
        idx++;
        ii_data[idx - 1] = (int8_T)begS;
        if (idx >= 9) {
          exitg1 = true;
        } else {
          begS++;
        }
      } else {
        begS++;
      }
    }

    if (1 > idx) {
      idx = 0;
    }

    iv3[0] = 1;
    iv3[1] = idx;
    c_st.site = &gb_emlrtRSI;
    indexShapeCheck(&c_st, 9, iv3);
    for (ix = 0; ix < idx; ix++) {
      inX_data[ix] = ii_data[ix];
    }

    if (!(1 <= idx)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, idx, &s_emlrtBCI, sp);
    }

    /* get intersection index */
    intDistVc[0] = c_inters_intNormalizedDistance1[inX_data[0] - 1] *
      lenMx[inX_data[0] - 1];
    intDistVc[1] = (1.0 - c_inters_intNormalizedDistance1[inX_data[0] - 1]) *
      lenMx[inX_data[0] - 1];
    intDistVc[2] = c_inters_intNormalizedDistance2[inX_data[0] - 1] *
      lenMx2[inX_data[0] - 1];
    intDistVc[3] = (1.0 - c_inters_intNormalizedDistance2[inX_data[0] - 1]) *
      lenMx2[inX_data[0] - 1];

    /* decide by min sticking-out length: */
    ixstart = 1;
    tmp = intDistVc[0];
    begS = 1;
    if (muDoubleScalarIsNaN(intDistVc[0])) {
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix < 5)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(intDistVc[ix - 1])) {
          tmp = intDistVc[ix - 1];
          begS = ix;
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < 4) {
      while (ixstart + 1 < 5) {
        if (intDistVc[ixstart] < tmp) {
          tmp = intDistVc[ixstart];
          begS = ixstart + 1;
        }

        ixstart++;
      }
    }

    /* find shortest distance to intersec */
    /*      if(minDist>B/3) %error - need higher resolution (ambiguous pusing/pushed) */
    /*          "warning: collision orientation ambiguous" */
    /*      end */
    if (begS <= 2) {
      src = 0;
      trg = 1;
      sLk = b_mod((real_T)inX_data[0] - 1.0) + 1.0;
      tLk = muDoubleScalarCeil((real_T)inX_data[0] / 3.0);

      /* src - pushing, trg - pushed */
    } else {
      src = 1;
      trg = 0;
      tLk = b_mod((real_T)inX_data[0] - 1.0) + 1.0;
      sLk = muDoubleScalarCeil((real_T)inX_data[0] / 3.0);
    }

    trgF = c_mod(begS);
    st.site = &kb_emlrtRSI;
    if (muDoubleScalarIsNaN(trgF)) {
      b_st.site = &u_emlrtRSI;
      error(&b_st);
    }

    beg = (trgF != 0.0);

    /* src is at beginning of the sLk link?  */
    if ((sLk == 2.0) || ((sLk == 3.0) && beg) || ((sLk == 1.0) && (!beg))) {
      /* ensure that corner - check other intersection */
      if (src + 1 == 1) {
        if (tLk != (int32_T)muDoubleScalarFloor(tLk)) {
          emlrtIntegerCheckR2012b(tLk, &c_emlrtDCI, sp);
        }

        ix = (int32_T)tLk;
        if (!((ix >= 1) && (ix <= 3))) {
          emlrtDynamicBoundsCheckR2012b(ix, 1, 3, &t_emlrtBCI, sp);
        }

        if (b_sum(*(boolean_T (*)[3])&inters_intAdjacencyMatrix[3 * (ix - 1)]) ==
            2.0) {
          expl_temp = true;
        } else {
          expl_temp = false;
        }
      } else {
        expl_temp = false;
      }

      if (!expl_temp) {
        if (src + 1 == 2) {
          if (tLk != (int32_T)muDoubleScalarFloor(tLk)) {
            emlrtIntegerCheckR2012b(tLk, &b_emlrtDCI, sp);
          }

          ix = (int32_T)tLk;
          if (!((ix >= 1) && (ix <= 3))) {
            emlrtDynamicBoundsCheckR2012b(ix, 1, 3, &r_emlrtBCI, sp);
          }

          for (ix = 0; ix < 3; ix++) {
            c_inters_intAdjacencyMatrix[ix] = inters_intAdjacencyMatrix
              [((int32_T)tLk + 3 * ix) - 1];
          }

          if (c_sum(c_inters_intAdjacencyMatrix) == 2.0) {
            expl_temp = true;
          } else {
            expl_temp = false;
          }
        } else {
          expl_temp = false;
        }

        if (!expl_temp) {
          idx = (begS <= 2) << 1;
          ixstart = 1;
          tmp = intDistVc[idx];
          begS = 1;
          if (muDoubleScalarIsNaN(intDistVc[idx])) {
            ix = 2;
            exitg1 = false;
            while ((!exitg1) && (ix < 3)) {
              ixstart = 2;
              if (!muDoubleScalarIsNaN(intDistVc[idx + 1])) {
                tmp = intDistVc[idx + 1];
                begS = 2;
                exitg1 = true;
              } else {
                ix = 3;
              }
            }
          }

          if ((ixstart < 2) && (intDistVc[idx + 1] < tmp)) {
            begS = 2;
          }

          idx += begS;
          trgF = c_mod(idx);
          st.site = &lb_emlrtRSI;
          if (muDoubleScalarIsNaN(trgF)) {
            b_st.site = &u_emlrtRSI;
            error(&b_st);
          }

          beg = (trgF != 0.0);
          tmp = (real_T)src + 1.0;
          src = trg;
          trg = (int32_T)tmp - 1;
          tmp = sLk;
          sLk = tLk;
          tLk = tmp;
        }
      }

      /* else make the other link source */
    }

    /*  Do move calculation:---------- */
    trEps = 0.2 * tRes * B;

    /* get force angle from what we are pushing on (normal to the surface): */
    /* and calculate the response on the pushed smarticle: */
    for (ix = 0; ix < 6; ix++) {
      piv[ix] = 0.0;
    }

    fAng = 0.0;
    if (tLk == 3.0) {
      fAng = sm[4 + trg] + sm[8 + trg];

      /* right arm pushed */
      pivotArm(sm[8 + trg], sm[8 + trg] + 1.5707963267948966, intDistVc[((trg +
                 1) << 1) - 2] / B, dv2);
      for (ix = 0; ix < 3; ix++) {
        piv[trg + (ix << 1)] = dv2[ix];
      }
    } else if (tLk == 2.0) {
      fAng = sm[4 + trg];

      /* body pushed */
      cth = intDistVc[((trg + 1) << 1) - 2] / B;
      st.site = &mb_emlrtRSI;
      trgF = intDistVc[((trg + 1) << 1) - 2] / B - 0.5;

      /* response when orthogonal force applied to the body */
      /* in: distance from center to push point (in units of B) */
      /* out: [px,py,f] = pivot coordinates (in units of B) and critical force required to move */
      b_st.site = &tb_emlrtRSI;
      b_st.site = &tb_emlrtRSI;
      tmp = 1.0 + 4.0 * (trgF * trgF);
      if (tmp < 0.0) {
        c_st.site = &ub_emlrtRSI;
        c_error(&c_st);
      }

      tmp = muDoubleScalarSqrt(tmp);
      piv[trg] = trgF - muDoubleScalarSign(trgF) * tmp / 2.0;
      piv[2 + trg] = 0.0;
      piv[4 + trg] = -2.0 * trgF + muDoubleScalarSign(cth - 0.5) * tmp;
    } else {
      if (tLk == 1.0) {
        fAng = sm[4 + trg] - sm[6 + trg];

        /* left arm pushed */
        pivotArm(sm[6 + trg], sm[6 + trg] + 1.5707963267948966, intDistVc[((trg
                   + 1) << 1) - 1] / B, dv2);
        for (ix = 0; ix < 3; ix++) {
          piv[trg + (ix << 1)] = dv2[ix];
        }

        for (ix = 0; ix < 2; ix++) {
          piv[trg + (ix << 2)] = -piv[trg + (ix << 2)];
        }

        /* flip x-axis */
      }
    }

    /* get force orientation: */
    trgF = (sLk - (real_T)beg) * 2.0;
    pCOMold[0] = inters_intMatrixX[inX_data[0] - 1];
    pCOMold[1] = inters_intMatrixY[inX_data[0] - 1];
    for (ix = 0; ix < 2; ix++) {
      d0 = trgF + (1.0 + (real_T)ix);
      if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
        emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, sp);
      }

      ixstart = (int32_T)d0;
      if (!((ixstart >= 1) && (ixstart <= 8))) {
        emlrtDynamicBoundsCheckR2012b(ixstart, 1, 8, &u_emlrtBCI, sp);
      }

      vStickOut[ix] = crd[src + ((ixstart - 1) << 1)] - pCOMold[ix];
    }

    /* sLk-beg=[0,4] vertex index - gives the piece sticking through inters */
    trgF = vStickOut[0];
    vStickOut[0] = muDoubleScalarAtan2(vStickOut[1], vStickOut[0]);
    vStickOut[1] = muDoubleScalarHypot(trgF, vStickOut[1]);

    /* polar coordinates */
    so2fAng = muDoubleScalarAbs(d_mod((vStickOut[0] - fAng) + 3.1415926535897931)
      - 3.1415926535897931);
    fDir = muDoubleScalarSign(1.5707963267948966 - so2fAng);

    /* get the direction of the force on trg */
    for (ix = 0; ix < 3; ix++) {
      for (ixstart = 0; ixstart < 2; ixstart++) {
        xSm[ixstart + (ix << 1)] = sm[ixstart + (ix << 1)];
      }
    }

    /* setup the identity map */
    /* calculate the response on the pushing smarticle: */
    if ((!beg) && (sLk == 3.0)) {
      /* if pushing with the right arm tip */
      pivotArm(sm[8 + src], (fAng - sm[4 + src]) + 1.5707963267948966, A / B,
               dv2);
      for (ix = 0; ix < 3; ix++) {
        piv[src + (ix << 1)] = dv2[ix];
      }
    } else if ((beg && (sLk == 3.0)) || ((!beg) && (sLk == 2.0))) {
      /* if pushing with right corner */
      pivotArm(0.0, (fAng - sm[4 + src]) + 1.5707963267948966, 0.0, dv2);
      for (ix = 0; ix < 3; ix++) {
        piv[src + (ix << 1)] = dv2[ix];
      }
    } else if ((beg && (sLk == 2.0)) || ((!beg) && (sLk == 1.0))) {
      /* pusing with left corner */
      pivotArm(0.0, (-fAng + sm[4 + src]) + 1.5707963267948966, 0.0, dv2);
      for (ix = 0; ix < 3; ix++) {
        piv[src + (ix << 1)] = dv2[ix];
      }

      for (ix = 0; ix < 2; ix++) {
        piv[src + (ix << 2)] = -piv[src + (ix << 2)];
      }
    } else {
      if (beg && (sLk == 1.0)) {
        /* pushing with left arm tip */
        pivotArm(sm[6 + src], (-fAng + sm[4 + src]) + 1.5707963267948966, A / B,
                 dv2);
        for (ix = 0; ix < 3; ix++) {
          piv[src + (ix << 1)] = dv2[ix];
        }

        for (ix = 0; ix < 2; ix++) {
          piv[src + (ix << 2)] = -piv[src + (ix << 2)];
        }
      }
    }

    for (ix = 0; ix < 2; ix++) {
      piv[4 + ix] *= fricCoeff[ix];
    }

    /* scale force by friction coefficients */
    /* chose which of the two moves - random, but weighted by the required force: */
    tmp = muDoubleScalarAbs(piv[4 + src]);
    trgF = muDoubleScalarAbs(piv[4 + trg]);
    st.site = &nb_emlrtRSI;
    emlrt_checkEscapedGlobals();
    emlrtRandu(&pAold, 1);
    if ((tmp - trgF) / (tmp + trgF) < 0.5 * (pAold - 0.5)) {
      mv = src;

      /* move source smarticle */
    } else {
      mv = trg;

      /* else move target smarticle */
    }

    pAold = 0.0;
    for (ix = 0; ix < 2; ix++) {
      pCOMold[ix] = 0.0;
    }

    idx = 0;
    exitg1 = false;
    while ((!exitg1) && (idx < 2)) {
      /* if one is hard to rotate (too far), rotate the other */
      cth = muDoubleScalarCos(sm[4 + mv] - 1.5707963267948966);
      sth = muDoubleScalarSin(sm[4 + mv] - 1.5707963267948966);

      /* rotation matrix */
      intDistVc[0] = cth;
      intDistVc[2] = -sth;
      intDistVc[1] = sth;
      intDistVc[3] = cth;
      for (ix = 0; ix < 2; ix++) {
        b[ix] = piv[mv + (ix << 1)];
        b_cth[ix] = 0.0;
        for (ixstart = 0; ixstart < 2; ixstart++) {
          b_cth[ix] += intDistVc[ix + (ixstart << 1)] * piv[mv + (ixstart << 1)];
        }

        pivCOM[ix] = b_cth[ix] * B;
      }

      /* pivot to smarticle COM in lab frame */
      /* pivot point in absolute coord */
      trgF = (sLk - (real_T)beg) * 2.0;
      for (ix = 0; ix < 2; ix++) {
        d0 = trgF + (1.0 + (real_T)ix);
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
        }

        ixstart = (int32_T)d0;
        if (!((ixstart >= 1) && (ixstart <= 8))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, 8, &v_emlrtBCI, sp);
        }

        pivRad[ix] = crd[src + ((ixstart - 1) << 1)] - (sm[mv + (ix << 1)] +
          pivCOM[ix]);
      }

      /* pivot to collision point */
      trgF = pivRad[0];
      pivRad[0] = muDoubleScalarAtan2(pivRad[1], pivRad[0]);
      pivRad[1] = muDoubleScalarHypot(trgF, pivRad[1]);
      pivAngle = muDoubleScalarAbs(vStickOut[1] / pivRad[1] * muDoubleScalarCos
        (fAng - vStickOut[0]) / muDoubleScalarSin(fAng - pivRad[0]));

      /* angle to pivot in order to resolve collision */
      if (pivAngle < 0.2) {
        exitg1 = true;
      } else {
        ixstart = 1;
        tmp = fricCoeff[0];
        if (muDoubleScalarIsNaN(fricCoeff[0])) {
          ix = 2;
          exitg2 = false;
          while ((!exitg2) && (ix < 3)) {
            ixstart = 2;
            if (!muDoubleScalarIsNaN(fricCoeff[1])) {
              tmp = fricCoeff[1];
              exitg2 = true;
            } else {
              ix = 3;
            }
          }
        }

        if ((ixstart < 2) && (fricCoeff[1] > tmp)) {
          tmp = fricCoeff[1];
        }

        if (tmp > 100.0) {
          exitg1 = true;
        } else {
          if (idx + 1 == 1) {
            mv = 1 - mv;
            pAold = pivAngle;
            intDistVc[0] = cth;
            intDistVc[2] = -sth;
            intDistVc[1] = sth;
            intDistVc[3] = cth;
            for (ix = 0; ix < 2; ix++) {
              b_cth[ix] = 0.0;
              for (ixstart = 0; ixstart < 2; ixstart++) {
                b_cth[ix] += intDistVc[ix + (ixstart << 1)] * b[ixstart];
              }

              pCOMold[ix] = b_cth[ix] * B;
            }

            /* if pivAngle is too large, try rotating the other one */
          } else {
            if (pAold < pivAngle) {
              pivAngle = pAold;
              mv = 1 - mv;
              for (ix = 0; ix < 2; ix++) {
                pivCOM[ix] = pCOMold[ix];
              }
            }
          }

          idx++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }
      }
    }

    if (pivAngle < 0.2) {
      /* only pivot if small angle - else ... parallel? */
      /* xSm=NaN; return; %give error if rotating too far - need better resolution, or something is wrong */
      /*      pivAngle=max(pivAngle,tRes*3/pivRad(2)); %bound pivot angle from below */
      st.site = &ob_emlrtRSI;
      emlrt_checkEscapedGlobals();
      emlrtRandu(&pAold, 1);
      pivAngle = (1.0 - 2.0 * (real_T)(mv + 1 == src + 1)) * fDir *
        muDoubleScalarSign(piv[4 + mv]) * (pivAngle + trEps * (1.0 + pAold) /
        muDoubleScalarMax(pivRad[1], 0.5 * B));

      /* rotate a little further to make sure, and orient */
      for (ix = 0; ix < 2; ix++) {
        vStickOut[ix] = sm[mv + (ix << 1)] - sm[((ix << 1) - mv) + 1];
      }

      /* vector between smarticles */
      /* rotate COM; add repulsive noise to prevent sticking together: */
      tmp = trEps * muDoubleScalarAbs(pivAngle);
      cth = norm(vStickOut);
      st.site = &pb_emlrtRSI;
      emlrt_checkEscapedGlobals();
      emlrtRandu(&pAold, 1);
      flip(pivCOM);
      for (ix = 0; ix < 2; ix++) {
        xSm[mv + (ix << 1)] = (sm[mv + (ix << 1)] + pivAngle * (1.0 + -2.0 *
          (real_T)ix) * pivCOM[ix]) + tmp * vStickOut[ix] / cth * pAold;
      }

      xSm[4 + mv] += pivAngle;

      /* rotate angle */
    }

    /* if links were near-parallel, ensure they don't pass through on nextstep:  */
    /* (instead make them cross at the same point they did this time) */
    if (muDoubleScalarAbs(so2fAng - 1.5707963267948966) < tRes * 20.0) {
      for (ix = 0; ix < 3; ix++) {
        for (ixstart = 0; ixstart < 2; ixstart++) {
          b_xSm[ixstart + (ix << 1)] = xSm[ixstart + (ix << 1)];
        }
      }

      for (ix = 0; ix < 2; ix++) {
        for (ixstart = 0; ixstart < 2; ixstart++) {
          b_xSm[ixstart + ((ix + 3) << 1)] = nextAl[ixstart + (ix << 1)];
        }
      }

      smcle2coord(b_xSm, crd);

      /* coordinates for next arm angles */
      trgF = (sLk - 1.0) * 2.0;
      for (ix = 0; ix < 4; ix++) {
        d0 = trgF + (1.0 + (real_T)ix);
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &f_emlrtDCI, sp);
        }

        ixstart = (int32_T)d0;
        if (!((ixstart >= 1) && (ixstart <= 8))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, 8, &w_emlrtBCI, sp);
        }

        intDistVc[ix] = crd[src + ((ixstart - 1) << 1)];
      }

      tmp = (tLk - 1.0) * 2.0;
      for (ix = 0; ix < 4; ix++) {
        d0 = tmp + (1.0 + (real_T)ix);
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &g_emlrtDCI, sp);
        }

        ixstart = (int32_T)d0;
        if (!((ixstart >= 1) && (ixstart <= 8))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, 8, &x_emlrtBCI, sp);
        }

        d_crd[ix] = crd[trg + ((ixstart - 1) << 1)];
      }

      b_lineSegmentIntersect(intDistVc, d_crd, &expl_temp, &tmp, &trgF, &pAold,
        &cth);

      /* intersection of these same links */
      /*          cla; plot(nextCrd(:,1:2:end)',nextCrd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12); */
      /*          scatter(nextInt.intMatrixX(:),nextInt.intMatrixY(:),1000,'r.'); %mark collision points */
      /* get new force orientation: */
      idx = beg << 1;
      begS = 1 - (beg << 1);
      trgF = sLk * 2.0;
      tmp = (sLk - 1.0) * 2.0;
      for (ix = 0; ix < 2; ix++) {
        d0 = trgF + (1.0 + (real_T)ix);
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &h_emlrtDCI, sp);
        }

        ixstart = (int32_T)d0;
        if (!((ixstart >= 1) && (ixstart <= 8))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, 8, &y_emlrtBCI, sp);
        }

        d0 = tmp + (1.0 + (real_T)ix);
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &i_emlrtDCI, sp);
        }

        vStickOut[ix] = crd[src + ((ixstart - 1) << 1)] - crd[src + (((int32_T)
          d0 - 1) << 1)];
      }

      for (ix = 0; ix < 2; ix++) {
        vStickOut[ix] *= 1.0 - (real_T)idx;
      }

      /* new source vector */
      tmp = tLk * 2.0;
      trgF = (tLk - 1.0) * 2.0;
      for (ix = 0; ix < 2; ix++) {
        d0 = tmp + (1.0 + (real_T)ix);
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &j_emlrtDCI, sp);
        }

        ixstart = (int32_T)d0;
        if (!((ixstart >= 1) && (ixstart <= 8))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, 8, &ab_emlrtBCI, sp);
        }

        d0 = trgF + (1.0 + (real_T)ix);
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &k_emlrtDCI, sp);
        }

        pCOMold[ix] = crd[trg + ((ixstart - 1) << 1)] - crd[trg + (((int32_T)d0
          - 1) << 1)];
      }

      /* new target vector */
      trgF = (vStickOut[0] * pCOMold[1] - vStickOut[1] * pCOMold[0]) / norm
        (vStickOut) / norm(pCOMold);

      /* do the links flip relative orientation? use sin = cross prod */
      if (-fDir * muDoubleScalarSign(trgF) > 0.0) {
        if (sLk != (int32_T)muDoubleScalarFloor(sLk)) {
          emlrtIntegerCheckR2012b(sLk, &m_emlrtDCI, sp);
        }

        ix = (int32_T)sLk;
        if (!((ix >= 1) && (ix <= 3))) {
          emlrtDynamicBoundsCheckR2012b(ix, 1, 3, &cb_emlrtBCI, sp);
        }

        tmp = pAold * lenMx[ix - 1];
      } else {
        if (tLk != (int32_T)muDoubleScalarFloor(tLk)) {
          emlrtIntegerCheckR2012b(tLk, &l_emlrtDCI, sp);
        }

        ix = (int32_T)tLk;
        if (!((ix >= 1) && (ix <= 3))) {
          emlrtDynamicBoundsCheckR2012b(ix, 1, 3, &bb_emlrtBCI, sp);
        }

        tmp = cth * lenMx[ix - 1];
        cth = 0.0;
        for (idx = 0; idx < 2; idx++) {
          cth += vStickOut[idx] * pCOMold[idx];
        }

        begS = 1 - ((cth > 0.0) << 1);
        for (ix = 0; ix < 2; ix++) {
          pCOMold[ix] = -(real_T)begS * vStickOut[ix];
        }

        sLk = tLk;
      }

      /* shift s.t. this is new intersection point */
      tmp = (real_T)begS * (lenMx[(int32_T)sLk - 1] * (0.5 + 0.45 * (real_T)begS)
                            - tmp) * muDoubleScalarAbs(trgF);

      /* shift = intShift * sin(angle between new links) */
      if (tmp > 0.0) {
        /*              if(smShift<trEps/5); smShift=trEps; end %bound shift from below */
        tmp *= (1.0 - 2.0 * (real_T)(mv + 1 == src + 1)) * fDir;
        cth = norm(pCOMold);
        flip(pCOMold);
        for (ix = 0; ix < 2; ix++) {
          xSm[mv + (ix << 1)] -= tmp * pCOMold[ix] * (1.0 + -2.0 * (real_T)ix) /
            cth;
        }

        /* shift orthogonal to new target vector */
      } else {
        st.site = &qb_emlrtRSI;
        emlrt_checkEscapedGlobals();
        emlrtRandu(&pAold, 1);
        xSm[4 + mv] += (pAold - 0.5) * 0.1;
      }

      /*          nextCrd=smcle2coord([xSm,nextAl]); %coordinates for next arm angles */
      /*          nextInt=lineSegmentIntersect(nextCrd(src,(sLk-1)*2+(1:4)),nextCrd(trg,(tLk-1)*2+(1:4))); %intersection of these same links */
      /*          cla; plot(nextCrd(:,1:2:end)',nextCrd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12); */
      /*          scatter(nextInt.intMatrixX(:),nextInt.intMatrixY(:),1000,'r.'); %mark collision points */
    } else {
      if (muDoubleScalarAbs(pivAngle) >= 0.2) {
        /* if still hasn't moved, wiggle apart */
        for (ix = 0; ix < 2; ix++) {
          vStickOut[ix] = sm[mv + (ix << 1)] - sm[((ix << 1) - mv) + 1];
        }

        /* vector between smarticles */
        cth = norm(vStickOut);
        st.site = &rb_emlrtRSI;
        emlrt_checkEscapedGlobals();
        emlrtRandu(&pAold, 1);
        for (ix = 0; ix < 2; ix++) {
          xSm[mv + (ix << 1)] += vStickOut[ix] / cth * pAold * trEps;
        }

        /* add repulsive noise to prevent sticking together */
        st.site = &sb_emlrtRSI;
        emlrt_checkEscapedGlobals();
        emlrtRandu(&pAold, 1);
        xSm[4 + mv] += (pAold - 0.5) * 0.02;
      }
    }

    /*      if(abs(so2fAng-pi/2)<tRes*10) %approx cos */
    /*          xSm(:,1:2)=xSm(:,1:2)+4*trEps*fDir*[cos(fAng),sin(fAng)].*[1;-1]; */
    /*          xSm(:,3)=xSm(:,3)+(rand(2,1)-0.5)*tRes*40; */
    /*      end */
  }
}

/* End of code generation (pairCollision2.c) */
