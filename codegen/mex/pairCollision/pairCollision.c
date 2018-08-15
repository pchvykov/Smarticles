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
#include "pairCollision.h"
#include "error.h"
#include "flip.h"
#include "norm.h"
#include "lineSegmentIntersect.h"
#include "smcle2coord.h"
#include "mod.h"
#include "sum.h"
#include "repmat.h"
#include "ifWhileCond.h"
#include "all.h"
#include "pairCollision_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 9,     /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 15,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 27,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 32,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 45,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 69,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 87,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 90,  /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 116, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 124, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 125, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 44,  /* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 12,  /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 151, /* lineNo */
  "pairCollision",                     /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 12,  /* lineNo */
  "sqrt",                              /* fcnName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  50,                                  /* colNo */
  "inX",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 30,    /* lineNo */
  62,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  30,                                  /* lineNo */
  62,                                  /* colNo */
  "inters.intAdjacencyMatrix",         /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  29,                                  /* lineNo */
  56,                                  /* colNo */
  "inters.intAdjacencyMatrix",         /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 29,  /* lineNo */
  56,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  50,                                  /* lineNo */
  23,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 50,  /* lineNo */
  23,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  77,                                  /* lineNo */
  20,                                  /* colNo */
  "crd",                               /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 77,  /* lineNo */
  20,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  97,                                  /* lineNo */
  50,                                  /* colNo */
  "nextCrd",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 97,  /* lineNo */
  50,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  97,                                  /* lineNo */
  79,                                  /* colNo */
  "nextCrd",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 97,  /* lineNo */
  79,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  102,                                 /* lineNo */
  32,                                  /* colNo */
  "nextCrd",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 102, /* lineNo */
  32,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  102,                                 /* lineNo */
  59,                                  /* colNo */
  "nextCrd",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 102, /* lineNo */
  59,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  103,                                 /* lineNo */
  25,                                  /* colNo */
  "nextCrd",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 103, /* lineNo */
  25,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  103,                                 /* lineNo */
  52,                                  /* colNo */
  "nextCrd",                           /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 103, /* lineNo */
  52,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  107,                                 /* lineNo */
  66,                                  /* colNo */
  "lenMx",                             /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 107, /* lineNo */
  66,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  106,                                 /* lineNo */
  75,                                  /* colNo */
  "lenMx",                             /* aName */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 106, /* lineNo */
  75,                                  /* colNo */
  "pairCollision",                     /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/pairCollision.m",/* pName */
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

void pairCollision(const emlrtStack *sp, const real_T sm[10], boolean_T
                   resolveFl, const real_T fricCoeff[2], const real_T nextAl[4],
                   real_T xSm[6])
{
  real_T crd[16];
  int32_T i0;
  real_T b_crd[12];
  real_T c_crd[12];
  boolean_T inters_intAdjacencyMatrix[9];
  real_T inters_intMatrixX[9];
  real_T inters_intMatrixY[9];
  real_T c_inters_intNormalizedDistance1[9];
  real_T c_inters_intNormalizedDistance2[9];
  boolean_T b_inters_intAdjacencyMatrix[9];
  boolean_T c_inters_intAdjacencyMatrix[3];
  real_T dv0[3];
  real_T lenMx[9];
  int32_T itmp;
  real_T lenMx2[9];
  int32_T idx;
  int32_T ixstart;
  boolean_T exitg1;
  int8_T ii_data[9];
  int8_T inX_data[9];
  real_T intDistVc[4];
  real_T tmp;
  int32_T src;
  int32_T trg;
  real_T tLk;
  real_T sLk;
  real_T x;
  boolean_T beg;
  real_T trEps;
  boolean_T expl_temp;
  real_T fAng;
  real_T piv[6];
  int32_T mIx;
  real_T y;
  real_T pCOMold[2];
  real_T d0;
  real_T vStickOut[2];
  real_T so2fAng;
  real_T fDir;
  real_T trgF;
  real_T sth;
  int32_T mv;
  real_T pivAngle;
  real_T pivRad[2];
  real_T b_xSm[10];
  real_T b[2];
  real_T cth[2];
  real_T pivCOM[2];
  real_T d_crd[4];
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
  for (i0 = 0; i0 < 4; i0++) {
    b_crd[3 * i0] = crd[i0 << 1];
    b_crd[1 + 3 * i0] = crd[(2 + i0) << 1];
    b_crd[2 + 3 * i0] = crd[(4 + i0) << 1];
    c_crd[3 * i0] = crd[1 + (i0 << 1)];
    c_crd[1 + 3 * i0] = crd[1 + ((2 + i0) << 1)];
    c_crd[2 + 3 * i0] = crd[1 + ((4 + i0) << 1)];
  }

  lineSegmentIntersect(b_crd, c_crd, inters_intAdjacencyMatrix,
                       inters_intMatrixX, inters_intMatrixY,
                       c_inters_intNormalizedDistance1,
                       c_inters_intNormalizedDistance2);
  for (i0 = 0; i0 < 9; i0++) {
    b_inters_intAdjacencyMatrix[i0] = !inters_intAdjacencyMatrix[i0];
  }

  st.site = &emlrtRSI;
  all(&st, b_inters_intAdjacencyMatrix, c_inters_intAdjacencyMatrix);
  if (ifWhileCond(c_inters_intAdjacencyMatrix)) {
    for (i0 = 0; i0 < 6; i0++) {
      xSm[i0] = 0.0;
    }
  } else {
    /* if no collision, return false */
    if (!resolveFl) {
      for (i0 = 0; i0 < 6; i0++) {
        xSm[i0] = 1.0;
      }
    } else {
      /* if just checking for collisions */
      /*      cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12); */
      /*      scatter(inters.intMatrixX(:),inters.intMatrixY(:),1000,'r.'); %mark collision points */
      /*  find out who is pushing who:------- */
      dv0[0] = A;
      dv0[1] = B;
      dv0[2] = A;
      repmat(dv0, lenMx);
      for (i0 = 0; i0 < 3; i0++) {
        for (itmp = 0; itmp < 3; itmp++) {
          lenMx2[itmp + 3 * i0] = lenMx[i0 + 3 * itmp];
        }
      }

      /* scales to get real-space distances */
      st.site = &b_emlrtRSI;
      b_st.site = &o_emlrtRSI;
      idx = 0;
      ixstart = 1;
      exitg1 = false;
      while ((!exitg1) && (ixstart < 10)) {
        if (inters_intAdjacencyMatrix[ixstart - 1]) {
          idx++;
          ii_data[idx - 1] = (int8_T)ixstart;
          if (idx >= 9) {
            exitg1 = true;
          } else {
            ixstart++;
          }
        } else {
          ixstart++;
        }
      }

      if (1 > idx) {
        ixstart = 0;
      } else {
        ixstart = idx;
      }

      for (i0 = 0; i0 < ixstart; i0++) {
        inX_data[i0] = ii_data[i0];
      }

      if (1 > idx) {
        i0 = 0;
      } else {
        i0 = idx;
      }

      if (!(1 <= i0)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i0, &emlrtBCI, sp);
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
      itmp = 1;
      if (muDoubleScalarIsNaN(intDistVc[0])) {
        idx = 2;
        exitg1 = false;
        while ((!exitg1) && (idx < 5)) {
          ixstart = idx;
          if (!muDoubleScalarIsNaN(intDistVc[idx - 1])) {
            tmp = intDistVc[idx - 1];
            itmp = idx;
            exitg1 = true;
          } else {
            idx++;
          }
        }
      }

      if (ixstart < 4) {
        while (ixstart + 1 < 5) {
          if (intDistVc[ixstart] < tmp) {
            tmp = intDistVc[ixstart];
            itmp = ixstart + 1;
          }

          ixstart++;
        }
      }

      /* find shortest distance to intersec */
      /*      if(minDist>B/3) %error - need higher resolution (ambiguous pusing/pushed) */
      /*          "warning: collision orientation ambiguous" */
      /*      end */
      if (itmp <= 2) {
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

      x = c_mod(itmp);
      st.site = &c_emlrtRSI;
      if (muDoubleScalarIsNaN(x)) {
        b_st.site = &r_emlrtRSI;
        error(&b_st);
      }

      beg = (x != 0.0);

      /* src is at beginning of the sLk link?  */
      if ((sLk == 2.0) || ((sLk == 3.0) && beg) || ((sLk == 1.0) && (!beg))) {
        /* ensure that corner - check other intersection */
        if (src + 1 == 1) {
          if (tLk != (int32_T)muDoubleScalarFloor(tLk)) {
            emlrtIntegerCheckR2012b(tLk, &b_emlrtDCI, sp);
          }

          i0 = (int32_T)tLk;
          if (!((i0 >= 1) && (i0 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i0, 1, 3, &c_emlrtBCI, sp);
          }

          if (sum(*(boolean_T (*)[3])&inters_intAdjacencyMatrix[3 * (i0 - 1)]) ==
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
              emlrtIntegerCheckR2012b(tLk, &emlrtDCI, sp);
            }

            i0 = (int32_T)tLk;
            if (!((i0 >= 1) && (i0 <= 3))) {
              emlrtDynamicBoundsCheckR2012b(i0, 1, 3, &b_emlrtBCI, sp);
            }

            for (i0 = 0; i0 < 3; i0++) {
              c_inters_intAdjacencyMatrix[i0] = inters_intAdjacencyMatrix
                [((int32_T)tLk + 3 * i0) - 1];
            }

            if (b_sum(c_inters_intAdjacencyMatrix) == 2.0) {
              expl_temp = true;
            } else {
              expl_temp = false;
            }
          } else {
            expl_temp = false;
          }

          if (!expl_temp) {
            mIx = (itmp <= 2) << 1;
            ixstart = 1;
            tmp = intDistVc[mIx];
            itmp = 1;
            if (muDoubleScalarIsNaN(intDistVc[mIx])) {
              idx = 2;
              exitg1 = false;
              while ((!exitg1) && (idx < 3)) {
                ixstart = 2;
                if (!muDoubleScalarIsNaN(intDistVc[mIx + 1])) {
                  tmp = intDistVc[mIx + 1];
                  itmp = 2;
                  exitg1 = true;
                } else {
                  idx = 3;
                }
              }
            }

            if ((ixstart < 2) && (intDistVc[mIx + 1] < tmp)) {
              itmp = 2;
            }

            mIx += itmp;
            x = c_mod(mIx);
            st.site = &d_emlrtRSI;
            if (muDoubleScalarIsNaN(x)) {
              b_st.site = &r_emlrtRSI;
              error(&b_st);
            }

            beg = (x != 0.0);
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
      trEps = 0.5 * tRes * B;

      /* get force angle from what we are pushing on (normal to the surface): */
      /* and calculate the response on the pushed smarticle: */
      for (i0 = 0; i0 < 6; i0++) {
        piv[i0] = 0.0;
      }

      fAng = 0.0;
      if (tLk == 3.0) {
        fAng = sm[4 + trg] + sm[8 + trg];

        /* right arm pushed */
        pivotArm(sm[8 + trg], sm[8 + trg] + 1.5707963267948966, intDistVc[((trg
                   + 1) << 1) - 2] / B, dv0);
        for (i0 = 0; i0 < 3; i0++) {
          piv[trg + (i0 << 1)] = dv0[i0];
        }
      } else if (tLk == 2.0) {
        fAng = sm[4 + trg];

        /* body pushed */
        y = intDistVc[((trg + 1) << 1) - 2] / B;
        st.site = &e_emlrtRSI;
        x = intDistVc[((trg + 1) << 1) - 2] / B - 0.5;

        /* response when orthogonal force applied to the body */
        /* in: distance from center to push point (in units of B) */
        /* out: [px,py,f] = pivot coordinates (in units of B) and critical force required to move */
        b_st.site = &s_emlrtRSI;
        b_st.site = &s_emlrtRSI;
        tmp = 1.0 + 4.0 * (x * x);
        if (tmp < 0.0) {
          c_st.site = &u_emlrtRSI;
          b_error(&c_st);
        }

        tmp = muDoubleScalarSqrt(tmp);
        piv[trg] = x - muDoubleScalarSign(x) * tmp / 2.0;
        piv[2 + trg] = 0.0;
        piv[4 + trg] = -2.0 * x + muDoubleScalarSign(y - 0.5) * tmp;
      } else {
        if (tLk == 1.0) {
          fAng = sm[4 + trg] - sm[6 + trg];

          /* left arm pushed */
          pivotArm(sm[6 + trg], sm[6 + trg] + 1.5707963267948966, intDistVc
                   [((trg + 1) << 1) - 1] / B, dv0);
          for (i0 = 0; i0 < 3; i0++) {
            piv[trg + (i0 << 1)] = dv0[i0];
          }

          for (i0 = 0; i0 < 2; i0++) {
            piv[trg + (i0 << 2)] = -piv[trg + (i0 << 2)];
          }

          /* flip x-axis */
        }
      }

      /* get force orientation: */
      y = (sLk - (real_T)beg) * 2.0;
      pCOMold[0] = inters_intMatrixX[inX_data[0] - 1];
      pCOMold[1] = inters_intMatrixY[inX_data[0] - 1];
      for (i0 = 0; i0 < 2; i0++) {
        d0 = y + (1.0 + (real_T)i0);
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &c_emlrtDCI, sp);
        }

        itmp = (int32_T)d0;
        if (!((itmp >= 1) && (itmp <= 8))) {
          emlrtDynamicBoundsCheckR2012b(itmp, 1, 8, &d_emlrtBCI, sp);
        }

        vStickOut[i0] = crd[src + ((itmp - 1) << 1)] - pCOMold[i0];
      }

      /* sLk-beg=[0,4] vertex index - gives the piece sticking through inters */
      x = vStickOut[0];
      vStickOut[0] = muDoubleScalarAtan2(vStickOut[1], vStickOut[0]);
      vStickOut[1] = muDoubleScalarHypot(x, vStickOut[1]);

      /* polar coordinates */
      so2fAng = muDoubleScalarAbs(d_mod((vStickOut[0] - fAng) +
        3.1415926535897931) - 3.1415926535897931);
      fDir = muDoubleScalarSign(1.5707963267948966 - so2fAng);

      /* get the direction of the force on trg */
      for (i0 = 0; i0 < 3; i0++) {
        for (itmp = 0; itmp < 2; itmp++) {
          xSm[itmp + (i0 << 1)] = sm[itmp + (i0 << 1)];
        }
      }

      /* setup the identity map */
      /* calculate the response on the pushing smarticle: */
      if ((!beg) && (sLk == 3.0)) {
        /* if pushing with the right arm tip */
        pivotArm(sm[8 + src], (fAng - sm[4 + src]) + 1.5707963267948966, A / B,
                 dv0);
        for (i0 = 0; i0 < 3; i0++) {
          piv[src + (i0 << 1)] = dv0[i0];
        }
      } else if ((beg && (sLk == 3.0)) || ((!beg) && (sLk == 2.0))) {
        /* if pushing with right corner */
        pivotArm(0.0, (fAng - sm[4 + src]) + 1.5707963267948966, 0.0, dv0);
        for (i0 = 0; i0 < 3; i0++) {
          piv[src + (i0 << 1)] = dv0[i0];
        }
      } else if ((beg && (sLk == 2.0)) || ((!beg) && (sLk == 1.0))) {
        /* pusing with left corner */
        pivotArm(0.0, (-fAng + sm[4 + src]) + 1.5707963267948966, 0.0, dv0);
        for (i0 = 0; i0 < 3; i0++) {
          piv[src + (i0 << 1)] = dv0[i0];
        }

        for (i0 = 0; i0 < 2; i0++) {
          piv[src + (i0 << 2)] = -piv[src + (i0 << 2)];
        }
      } else {
        if (beg && (sLk == 1.0)) {
          /* pushing with left arm tip */
          pivotArm(sm[6 + src], (-fAng + sm[4 + src]) + 1.5707963267948966, A /
                   B, dv0);
          for (i0 = 0; i0 < 3; i0++) {
            piv[src + (i0 << 1)] = dv0[i0];
          }

          for (i0 = 0; i0 < 2; i0++) {
            piv[src + (i0 << 2)] = -piv[src + (i0 << 2)];
          }
        }
      }

      for (i0 = 0; i0 < 2; i0++) {
        piv[4 + i0] *= fricCoeff[i0];
      }

      /* scale force by friction coefficients */
      /* chose which of the two moves - random, but weighted by the required force: */
      tmp = muDoubleScalarAbs(piv[4 + src]);
      trgF = muDoubleScalarAbs(piv[4 + trg]);
      st.site = &f_emlrtRSI;
      emlrtRandu(&sth, 1);
      if ((tmp - trgF) / (tmp + trgF) < 0.5 * (sth - 0.5)) {
        mv = src;

        /* move source smarticle */
      } else {
        mv = trg;

        /* else move target smarticle */
      }

      tmp = 0.0;
      for (i0 = 0; i0 < 2; i0++) {
        pCOMold[i0] = 0.0;
      }

      idx = 0;
      exitg1 = false;
      while ((!exitg1) && (idx < 2)) {
        /* if one is hard to rotate (too far), rotate the other */
        trgF = muDoubleScalarCos(sm[4 + mv] - 1.5707963267948966);
        sth = muDoubleScalarSin(sm[4 + mv] - 1.5707963267948966);

        /* rotation matrix */
        intDistVc[0] = trgF;
        intDistVc[2] = -sth;
        intDistVc[1] = sth;
        intDistVc[3] = trgF;
        for (i0 = 0; i0 < 2; i0++) {
          b[i0] = piv[mv + (i0 << 1)];
          cth[i0] = 0.0;
          for (itmp = 0; itmp < 2; itmp++) {
            cth[i0] += intDistVc[i0 + (itmp << 1)] * piv[mv + (itmp << 1)];
          }

          pivCOM[i0] = cth[i0] * B;
        }

        /* pivot to smarticle COM in lab frame */
        /* pivot point in absolute coord */
        y = (sLk - (real_T)beg) * 2.0;
        for (i0 = 0; i0 < 2; i0++) {
          d0 = y + (1.0 + (real_T)i0);
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, sp);
          }

          itmp = (int32_T)d0;
          if (!((itmp >= 1) && (itmp <= 8))) {
            emlrtDynamicBoundsCheckR2012b(itmp, 1, 8, &e_emlrtBCI, sp);
          }

          pivRad[i0] = crd[src + ((itmp - 1) << 1)] - (sm[mv + (i0 << 1)] +
            pivCOM[i0]);
        }

        /* pivot to collision point */
        x = pivRad[0];
        pivRad[0] = muDoubleScalarAtan2(pivRad[1], pivRad[0]);
        pivRad[1] = muDoubleScalarHypot(x, pivRad[1]);
        pivAngle = muDoubleScalarAbs(vStickOut[1] / pivRad[1] *
          muDoubleScalarCos(fAng - vStickOut[0]) / muDoubleScalarSin(fAng -
          pivRad[0]));

        /* angle to pivot in order to resolve collision */
        if (pivAngle < 0.2) {
          exitg1 = true;
        } else {
          if (idx + 1 == 1) {
            mv = 1 - mv;
            tmp = pivAngle;
            intDistVc[0] = trgF;
            intDistVc[2] = -sth;
            intDistVc[1] = sth;
            intDistVc[3] = trgF;
            for (i0 = 0; i0 < 2; i0++) {
              cth[i0] = 0.0;
              for (itmp = 0; itmp < 2; itmp++) {
                cth[i0] += intDistVc[i0 + (itmp << 1)] * b[itmp];
              }

              pCOMold[i0] = cth[i0] * B;
            }

            /* if pivAngle is too large, try rotating the other one */
          } else {
            if (tmp < pivAngle) {
              pivAngle = tmp;
              mv = 1 - mv;
              for (i0 = 0; i0 < 2; i0++) {
                pivCOM[i0] = pCOMold[i0];
              }
            }
          }

          idx++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }
      }

      if (pivAngle < 0.2) {
        /* only pivot if small angle - else ... parallel? */
        /* xSm=NaN; return; %give error if rotating too far - need better resolution, or something is wrong */
        /*      pivAngle=max(pivAngle,tRes*3/pivRad(2)); %bound pivot angle from below */
        st.site = &g_emlrtRSI;
        emlrtRandu(&sth, 1);
        pivAngle = (1.0 - 2.0 * (real_T)(mv + 1 == src + 1)) * fDir *
          muDoubleScalarSign(piv[4 + mv]) * (pivAngle + trEps * (1.0 + sth) /
          muDoubleScalarMax(pivRad[1], 0.5 * B));

        /* rotate a little further to make sure, and orient */
        for (i0 = 0; i0 < 2; i0++) {
          vStickOut[i0] = sm[mv + (i0 << 1)] - sm[((i0 << 1) - mv) + 1];
        }

        /* vector between smarticles */
        /* rotate COM; add repulsive noise to prevent sticking together: */
        tmp = trEps * muDoubleScalarAbs(pivAngle);
        y = norm(vStickOut);
        st.site = &h_emlrtRSI;
        emlrtRandu(&sth, 1);
        flip(pivCOM);
        for (i0 = 0; i0 < 2; i0++) {
          xSm[mv + (i0 << 1)] = (sm[mv + (i0 << 1)] + pivAngle * (1.0 + -2.0 *
            (real_T)i0) * pivCOM[i0]) + tmp * vStickOut[i0] / y * sth;
        }

        xSm[4 + mv] += pivAngle;

        /* rotate angle */
      }

      /* if links were near-parallel, ensure they don't pass through on nextstep:  */
      /* (instead make them cross at the same point they did this time) */
      if (muDoubleScalarAbs(so2fAng - 1.5707963267948966) < tRes * 10.0) {
        for (i0 = 0; i0 < 3; i0++) {
          for (itmp = 0; itmp < 2; itmp++) {
            b_xSm[itmp + (i0 << 1)] = xSm[itmp + (i0 << 1)];
          }
        }

        for (i0 = 0; i0 < 2; i0++) {
          for (itmp = 0; itmp < 2; itmp++) {
            b_xSm[itmp + ((i0 + 3) << 1)] = nextAl[itmp + (i0 << 1)];
          }
        }

        smcle2coord(b_xSm, crd);

        /* coordinates for next arm angles */
        y = (sLk - 1.0) * 2.0;
        for (i0 = 0; i0 < 4; i0++) {
          d0 = y + (1.0 + (real_T)i0);
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
          }

          itmp = (int32_T)d0;
          if (!((itmp >= 1) && (itmp <= 8))) {
            emlrtDynamicBoundsCheckR2012b(itmp, 1, 8, &f_emlrtBCI, sp);
          }

          intDistVc[i0] = crd[src + ((itmp - 1) << 1)];
        }

        tmp = (tLk - 1.0) * 2.0;
        for (i0 = 0; i0 < 4; i0++) {
          d0 = tmp + (1.0 + (real_T)i0);
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &f_emlrtDCI, sp);
          }

          itmp = (int32_T)d0;
          if (!((itmp >= 1) && (itmp <= 8))) {
            emlrtDynamicBoundsCheckR2012b(itmp, 1, 8, &g_emlrtBCI, sp);
          }

          d_crd[i0] = crd[trg + ((itmp - 1) << 1)];
        }

        b_lineSegmentIntersect(intDistVc, d_crd, &expl_temp, &tmp, &trgF, &sth,
          &x);

        /* intersection of these same links */
        /*          cla; plot(nextCrd(:,1:2:end)',nextCrd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12); */
        /*          scatter(nextInt.intMatrixX(:),nextInt.intMatrixY(:),1000,'r.'); %mark collision points */
        /* get new force orientation: */
        idx = beg << 1;
        ixstart = 1 - (beg << 1);
        y = sLk * 2.0;
        tmp = (sLk - 1.0) * 2.0;
        for (i0 = 0; i0 < 2; i0++) {
          d0 = y + (1.0 + (real_T)i0);
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &g_emlrtDCI, sp);
          }

          itmp = (int32_T)d0;
          if (!((itmp >= 1) && (itmp <= 8))) {
            emlrtDynamicBoundsCheckR2012b(itmp, 1, 8, &h_emlrtBCI, sp);
          }

          d0 = tmp + (1.0 + (real_T)i0);
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &h_emlrtDCI, sp);
          }

          mIx = (int32_T)d0;
          if (!((mIx >= 1) && (mIx <= 8))) {
            emlrtDynamicBoundsCheckR2012b(mIx, 1, 8, &i_emlrtBCI, sp);
          }

          vStickOut[i0] = crd[src + ((itmp - 1) << 1)] - crd[src + ((mIx - 1) <<
            1)];
        }

        for (i0 = 0; i0 < 2; i0++) {
          vStickOut[i0] *= 1.0 - (real_T)idx;
        }

        /* new source vector */
        tmp = tLk * 2.0;
        trgF = (tLk - 1.0) * 2.0;
        for (i0 = 0; i0 < 2; i0++) {
          d0 = tmp + (1.0 + (real_T)i0);
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &i_emlrtDCI, sp);
          }

          itmp = (int32_T)d0;
          if (!((itmp >= 1) && (itmp <= 8))) {
            emlrtDynamicBoundsCheckR2012b(itmp, 1, 8, &j_emlrtBCI, sp);
          }

          d0 = trgF + (1.0 + (real_T)i0);
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &j_emlrtDCI, sp);
          }

          mIx = (int32_T)d0;
          if (!((mIx >= 1) && (mIx <= 8))) {
            emlrtDynamicBoundsCheckR2012b(mIx, 1, 8, &k_emlrtBCI, sp);
          }

          pCOMold[i0] = crd[trg + ((itmp - 1) << 1)] - crd[trg + ((mIx - 1) << 1)];
        }

        /* new target vector */
        trgF = (vStickOut[0] * pCOMold[1] - vStickOut[1] * pCOMold[0]) / norm
          (vStickOut) / norm(pCOMold);

        /* do the links flip relative orientation? use sin = cross prod */
        if (-fDir * muDoubleScalarSign(trgF) > 0.0) {
          if (sLk != (int32_T)muDoubleScalarFloor(sLk)) {
            emlrtIntegerCheckR2012b(sLk, &l_emlrtDCI, sp);
          }

          i0 = (int32_T)sLk;
          if (!((i0 >= 1) && (i0 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i0, 1, 3, &m_emlrtBCI, sp);
          }

          tmp = sth * lenMx[i0 - 1];
        } else {
          if (tLk != (int32_T)muDoubleScalarFloor(tLk)) {
            emlrtIntegerCheckR2012b(tLk, &k_emlrtDCI, sp);
          }

          i0 = (int32_T)tLk;
          if (!((i0 >= 1) && (i0 <= 3))) {
            emlrtDynamicBoundsCheckR2012b(i0, 1, 3, &l_emlrtBCI, sp);
          }

          tmp = x * lenMx[i0 - 1];
          y = 0.0;
          for (ixstart = 0; ixstart < 2; ixstart++) {
            y += vStickOut[ixstart] * pCOMold[ixstart];
          }

          ixstart = 1 - ((y > 0.0) << 1);
          for (i0 = 0; i0 < 2; i0++) {
            pCOMold[i0] = -(real_T)ixstart * vStickOut[i0];
          }

          sLk = tLk;
        }

        /* shift s.t. this is new intersection point */
        tmp = (real_T)ixstart * (lenMx[(int32_T)sLk - 1] * (0.5 + 0.45 * (real_T)
          ixstart) - tmp) * muDoubleScalarAbs(trgF);

        /* shift = intShift * sin(angle between new links) */
        if (tmp > 0.0) {
          /*              if(smShift<trEps/5); smShift=trEps; end %bound shift from below */
          tmp *= (1.0 - 2.0 * (real_T)(mv + 1 == src + 1)) * fDir;
          y = norm(pCOMold);
          flip(pCOMold);
          for (i0 = 0; i0 < 2; i0++) {
            xSm[mv + (i0 << 1)] -= tmp * pCOMold[i0] * (1.0 + -2.0 * (real_T)i0)
              / y;
          }

          /* shift orthogonal to new target vector */
        } else {
          st.site = &i_emlrtRSI;
          emlrtRandu(&sth, 1);
          xSm[4 + mv] += (sth - 0.5) * 0.1;
        }

        /*          nextCrd=smcle2coord([xSm,nextAl]); %coordinates for next arm angles */
        /*          nextInt=lineSegmentIntersect(nextCrd(src,(sLk-1)*2+(1:4)),nextCrd(trg,(tLk-1)*2+(1:4))); %intersection of these same links */
        /*          cla; plot(nextCrd(:,1:2:end)',nextCrd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12); */
        /*          scatter(nextInt.intMatrixX(:),nextInt.intMatrixY(:),1000,'r.'); %mark collision points */
      } else {
        if (muDoubleScalarAbs(pivAngle) >= 0.2) {
          /* if still hasn't moved, wiggle apart */
          for (i0 = 0; i0 < 2; i0++) {
            vStickOut[i0] = sm[mv + (i0 << 1)] - sm[((i0 << 1) - mv) + 1];
          }

          /* vector between smarticles */
          y = norm(vStickOut);
          st.site = &j_emlrtRSI;
          emlrtRandu(&sth, 1);
          for (i0 = 0; i0 < 2; i0++) {
            xSm[mv + (i0 << 1)] += vStickOut[i0] / y * sth * trEps;
          }

          /* add repulsive noise to prevent sticking together */
          st.site = &k_emlrtRSI;
          emlrtRandu(&sth, 1);
          xSm[4 + mv] += (sth - 0.5) * 0.02;
        }
      }

      /*      if(abs(so2fAng-pi/2)<tRes*10) %approx cos */
      /*          xSm(:,1:2)=xSm(:,1:2)+4*trEps*fDir*[cos(fAng),sin(fAng)].*[1;-1]; */
      /*          xSm(:,3)=xSm(:,3)+(rand(2,1)-0.5)*tRes*40; */
      /*      end */
    }
  }
}

/* End of code generation (pairCollision.c) */
