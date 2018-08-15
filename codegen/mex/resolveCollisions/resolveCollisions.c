/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * resolveCollisions.c
 *
 * Code generation for function 'resolveCollisions'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "resolveCollisions.h"
#include "rand.h"
#include "indexShapeCheck.h"
#include "mod.h"
#include "norm.h"
#include "ifWhileCond.h"
#include "all.h"
#include "toLogicalCheck.h"
#include "any.h"
#include "pairCollision.h"
#include "find.h"
#include "sum.h"
#include "power.h"
#include "repmat.h"
#include "randperm.h"
#include "resolveCollisions_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 9,     /* lineNo */
  "resolveCollisions",                 /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 13,  /* lineNo */
  "resolveCollisions",                 /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 23,  /* lineNo */
  "resolveCollisions",                 /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 25,  /* lineNo */
  "resolveCollisions",                 /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 32,  /* lineNo */
  "resolveCollisions",                 /* fcnName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pathName */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  34,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  22,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  45,                                  /* colNo */
  "parOrd",                            /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  40,                                  /* colNo */
  "parOrd",                            /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  72,                                  /* colNo */
  "parOrd",                            /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  68,                                  /* colNo */
  "parOrd",                            /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  122,                                 /* colNo */
  "parOrd",                            /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  118,                                 /* colNo */
  "parOrd",                            /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  22,                                  /* colNo */
  "smC",                               /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { 2,   /* nDims */
  13,                                  /* lineNo */
  25,                                  /* colNo */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m"/* pName */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  35,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  21,                                  /* colNo */
  "iterOrd",                           /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  63,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  97,                                  /* colNo */
  "fricCoeff",                         /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  27,                                  /* colNo */
  "parOrd",                            /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  31,                                  /* colNo */
  "parOrd",                            /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  16,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  65,                                  /* colNo */
  "fricCoeff",                         /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  87,                                  /* colNo */
  "fricCoeff",                         /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  39,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  20,                                  /* colNo */
  "sm",                                /* aName */
  "resolveCollisions",                 /* fName */
  "/Users/pchvykov/Documents/GoogleDrive/MIT/RESEARCH/Numerics/Smarticles/resolveCollisions.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void resolveCollisions(const emlrtStack *sp, real_T sm_data[], int32_T sm_size[2],
  boolean_T resolveFl, const real_T fricCoeff_data[], const int32_T
  fricCoeff_size[1], emxArray_real_T *parOrd, real_T xSm_data[], int32_T
  xSm_size[2])
{
  int32_T varargin_1;
  int32_T i11;
  boolean_T collFl;
  real_T whCnt;
  int32_T exitg1;
  int32_T loop_ub;
  real_T iterOrd_data[1000];
  int32_T iterOrd_size[2];
  int32_T smi;
  int32_T i12;
  real_T b_smi;
  real_T sm12v[2];
  real_T tmp_data[2000];
  int32_T tmp_size[2];
  int32_T iv8[2];
  int32_T c_smi[2];
  real_T n12v;
  int32_T b_tmp_size[2];
  real_T b_tmp_data[2000];
  int32_T d_smi;
  real_T smC_data[1000];
  int32_T smC_size[1];
  int32_T x_size[1];
  boolean_T x_data[1000];
  int32_T ii_data[1000];
  int32_T ii_size[1];
  int32_T ci;
  real_T e_smi[2];
  real_T sm[10];
  real_T b_parOrd[9];
  real_T res[6];
  real_T flipPar[9];
  boolean_T b_res[6];
  boolean_T bv3[3];
  real_T b;
  real_T y[4];
  real_T b_sm12v[4];
  real_T b_sm[4];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* resolve all collisions sequentially and iteratively until clear, returning new sm position values */
  /* in: list of smcle 5-tuples, flag whether to resolve or just check collisions */
  /* out: T/F if just checking, list of new 3-tuples (cx,cy,theta) if resolving */
  varargin_1 = sm_size[0];
  i11 = sm_size[0];
  collFl = true;
  whCnt = 1.0;
  do {
    exitg1 = 0;
    if (collFl) {
      /* sequentially resolve all collisions until none left */
      collFl = false;
      st.site = &emlrtRSI;
      randperm(&st, varargin_1, iterOrd_data, iterOrd_size);

      /* randomize each pass to enhance stability */
      smi = 0;
      while (smi <= i11 - 1) {
        i12 = 1 + smi;
        if (!((i12 >= 1) && (i12 <= iterOrd_size[1]))) {
          emlrtDynamicBoundsCheckR2012b(i12, 1, iterOrd_size[1], &ud_emlrtBCI,
            sp);
        }

        b_smi = iterOrd_data[i12 - 1];

        /* check for potential collisions based on distance to other smarticles: */
        i12 = (int32_T)iterOrd_data[smi];
        if (!((i12 >= 1) && (i12 <= sm_size[0]))) {
          emlrtDynamicBoundsCheckR2012b(i12, 1, sm_size[0], &td_emlrtBCI, sp);
        }

        for (i12 = 0; i12 < 2; i12++) {
          sm12v[i12] = sm_data[((int32_T)iterOrd_data[smi] + sm_size[0] * i12) -
            1];
        }

        st.site = &b_emlrtRSI;
        repmat(&st, sm12v, varargin_1, tmp_data, tmp_size);
        for (i12 = 0; i12 < 2; i12++) {
          c_smi[i12] = tmp_size[i12];
        }

        iv8[0] = sm_size[0];
        iv8[1] = 2;
        if ((c_smi[0] != iv8[0]) || (c_smi[1] != 2)) {
          emlrtSizeEqCheckNDR2012b(&c_smi[0], &iv8[0], &c_emlrtECI, sp);
        }

        st.site = &b_emlrtRSI;
        n12v = 2.0 * A + B;
        n12v *= n12v;
        st.site = &b_emlrtRSI;
        b_tmp_size[0] = tmp_size[0];
        b_tmp_size[1] = 2;
        loop_ub = tmp_size[0];
        for (i12 = 0; i12 < 2; i12++) {
          for (d_smi = 0; d_smi < loop_ub; d_smi++) {
            b_tmp_data[d_smi + b_tmp_size[0] * i12] = tmp_data[d_smi + tmp_size
              [0] * i12] - sm_data[d_smi + sm_size[0] * i12];
          }
        }

        b_st.site = &b_emlrtRSI;
        power(&b_st, b_tmp_data, b_tmp_size, tmp_data, tmp_size);
        sum(tmp_data, tmp_size, smC_data, smC_size);
        x_size[0] = smC_size[0];
        loop_ub = smC_size[0];
        for (i12 = 0; i12 < loop_ub; i12++) {
          x_data[i12] = (smC_data[i12] < n12v);
        }

        b_st.site = &l_emlrtRSI;
        eml_find(&b_st, x_data, x_size, ii_data, ii_size);
        smC_size[0] = ii_size[0];
        loop_ub = ii_size[0];
        for (i12 = 0; i12 < loop_ub; i12++) {
          smC_data[i12] = ii_data[i12];
        }

        ci = 0;
        while (ci <= smC_size[0] - 1) {
          i12 = ci + 1;
          if (!((i12 >= 1) && (i12 <= smC_size[0]))) {
            emlrtDynamicBoundsCheckR2012b(i12, 1, smC_size[0], &sd_emlrtBCI, sp);
          }

          /* index of the colliding smcle */
          if (!(smC_data[ci] == b_smi)) {
            /* no collision with itself */
            /*              if(resolveFl) %plot current pair being checked: */
            /*                  crd=smcle2coord(sm([smi,smci],:)); */
            /*                  cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12); */
            /*  %                 pause(); */
            /*              end */
            st.site = &c_emlrtRSI;
            b_indexShapeCheck(&st, fricCoeff_size[0]);
            e_smi[0] = b_smi;
            e_smi[1] = smC_data[ci];
            for (i12 = 0; i12 < 5; i12++) {
              for (d_smi = 0; d_smi < 2; d_smi++) {
                loop_ub = (int32_T)e_smi[d_smi];
                if (!((loop_ub >= 1) && (loop_ub <= sm_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(loop_ub, 1, sm_size[0],
                    &vd_emlrtBCI, sp);
                }

                sm[d_smi + (i12 << 1)] = sm_data[(loop_ub + sm_size[0] * i12) -
                  1];
              }
            }

            i12 = (int32_T)b_smi;
            if (!((i12 >= 1) && (i12 <= fricCoeff_size[0]))) {
              emlrtDynamicBoundsCheckR2012b(i12, 1, fricCoeff_size[0],
                &wd_emlrtBCI, sp);
            }

            tmp_size[0] = i12;
            i12 = (int32_T)smC_data[ci];
            if (!((i12 >= 1) && (i12 <= fricCoeff_size[0]))) {
              emlrtDynamicBoundsCheckR2012b(i12, 1, fricCoeff_size[0],
                &wd_emlrtBCI, sp);
            }

            tmp_size[1] = i12;
            for (i12 = 0; i12 < 2; i12++) {
              sm12v[i12] = fricCoeff_data[tmp_size[i12] - 1];
            }

            i12 = parOrd->size[2];
            loop_ub = (int32_T)smC_data[ci];
            if (!((loop_ub >= 1) && (loop_ub <= i12))) {
              emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i12, &qd_emlrtBCI, sp);
            }

            i12 = parOrd->size[1];
            d_smi = (int32_T)b_smi;
            if (!((d_smi >= 1) && (d_smi <= i12))) {
              emlrtDynamicBoundsCheckR2012b(d_smi, 1, i12, &rd_emlrtBCI, sp);
            }

            for (i12 = 0; i12 < 9; i12++) {
              b_parOrd[i12] = parOrd->data[(i12 + parOrd->size[0] * (d_smi - 1))
                + parOrd->size[0] * parOrd->size[1] * (loop_ub - 1)];
            }

            i12 = parOrd->size[1];
            d_smi = (int32_T)b_smi;
            if (!((d_smi >= 1) && (d_smi <= i12))) {
              emlrtDynamicBoundsCheckR2012b(d_smi, 1, i12, &xd_emlrtBCI, sp);
            }

            i12 = parOrd->size[2];
            loop_ub = (int32_T)smC_data[ci];
            if (!((loop_ub >= 1) && (loop_ub <= i12))) {
              emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i12, &yd_emlrtBCI, sp);
            }

            st.site = &c_emlrtRSI;
            pairCollision(&st, sm, resolveFl, sm12v, b_parOrd, res, *(real_T (*)
              [9])&parOrd->data[parOrd->size[0] * (d_smi - 1) + parOrd->size[0] *
                          parOrd->size[1] * (loop_ub - 1)], flipPar);

            /* resolve pair collision */
            if (f_any(flipPar)) {
              loop_ub = parOrd->size[1];
              d_smi = parOrd->size[2];
              i12 = (int32_T)smC_data[ci];
              if (!((i12 >= 1) && (i12 <= d_smi))) {
                emlrtDynamicBoundsCheckR2012b(i12, 1, d_smi, &od_emlrtBCI, sp);
              }

              i12 = (int32_T)b_smi;
              if (!((i12 >= 1) && (i12 <= loop_ub))) {
                emlrtDynamicBoundsCheckR2012b(i12, 1, loop_ub, &pd_emlrtBCI, sp);
              }

              loop_ub = parOrd->size[1];
              d_smi = parOrd->size[2];
              i12 = (int32_T)b_smi;
              if (!((i12 >= 1) && (i12 <= d_smi))) {
                emlrtDynamicBoundsCheckR2012b(i12, 1, d_smi, &md_emlrtBCI, sp);
              }

              i12 = (int32_T)smC_data[ci];
              if (!((i12 >= 1) && (i12 <= loop_ub))) {
                emlrtDynamicBoundsCheckR2012b(i12, 1, loop_ub, &nd_emlrtBCI, sp);
              }

              for (i12 = 0; i12 < 9; i12++) {
                b_parOrd[i12] = flipPar[i12] * parOrd->data[(i12 + parOrd->size
                  [0] * ((int32_T)b_smi - 1)) + parOrd->size[0] * parOrd->size[1]
                  * ((int32_T)smC_data[ci] - 1)];
              }

              for (i12 = 0; i12 < 9; i12++) {
                parOrd->data[(i12 + parOrd->size[0] * ((int32_T)smC_data[ci] - 1))
                  + parOrd->size[0] * parOrd->size[1] * ((int32_T)b_smi - 1)] =
                  b_parOrd[i12];
              }
            }

            st.site = &d_emlrtRSI;
            b_toLogicalCheck(&st, res);
            for (i12 = 0; i12 < 6; i12++) {
              b_res[i12] = !(res[i12] != 0.0);
            }

            st.site = &d_emlrtRSI;
            all(&st, b_res, bv3);
            if ((!b_ifWhileCond(bv3)) && (!(whCnt > 100.0 * (real_T)varargin_1)))
            {
              /* if no collision, continue */
              /* if can't resolve, just move on */
              collFl = true;

              /* else set collision flag */
              e_smi[0] = b_smi;
              e_smi[1] = smC_data[ci];
              for (i12 = 0; i12 < 3; i12++) {
                for (d_smi = 0; d_smi < 2; d_smi++) {
                  loop_ub = (int32_T)e_smi[d_smi];
                  if (!((loop_ub >= 1) && (loop_ub <= sm_size[0]))) {
                    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, sm_size[0],
                      &ae_emlrtBCI, sp);
                  }

                  sm_data[(loop_ub + sm_size[0] * i12) - 1] = res[d_smi + (i12 <<
                    1)];
                }
              }

              i12 = (int32_T)b_smi;
              if (!((i12 >= 1) && (i12 <= sm_size[0]))) {
                emlrtDynamicBoundsCheckR2012b(i12, 1, sm_size[0], &ld_emlrtBCI,
                  sp);
              }

              i12 = (int32_T)smC_data[ci];
              if (!((i12 >= 1) && (i12 <= sm_size[0]))) {
                emlrtDynamicBoundsCheckR2012b(i12, 1, sm_size[0], &kd_emlrtBCI,
                  sp);
              }

              for (i12 = 0; i12 < 2; i12++) {
                sm12v[i12] = sm_data[((int32_T)b_smi + sm_size[0] * i12) - 1] -
                  sm_data[((int32_T)smC_data[ci] + sm_size[0] * i12) - 1];
              }

              n12v = norm(sm12v);

              /* vector between smarticles */
              if ((n12v < 0.2 * B) || (((int32_T)whCnt > 10 * varargin_1) &&
                   (b_mod(whCnt) < 1.0))) {
                /* can't resolve collisions */
                st.site = &e_emlrtRSI;
                b_indexShapeCheck(&st, fricCoeff_size[0]);
                st.site = &e_emlrtRSI;
                b_indexShapeCheck(&st, fricCoeff_size[0]);
                st.site = &e_emlrtRSI;
                b = c_rand();
                i12 = (int32_T)b_smi;
                if (!((i12 >= 1) && (i12 <= fricCoeff_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(i12, 1, fricCoeff_size[0],
                    &be_emlrtBCI, sp);
                }

                tmp_size[0] = i12;
                i12 = (int32_T)smC_data[ci];
                if (!((i12 >= 1) && (i12 <= fricCoeff_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(i12, 1, fricCoeff_size[0],
                    &be_emlrtBCI, sp);
                }

                tmp_size[1] = i12;
                i12 = (int32_T)b_smi;
                if (!((i12 >= 1) && (i12 <= fricCoeff_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(i12, 1, fricCoeff_size[0],
                    &ce_emlrtBCI, sp);
                }

                c_smi[0] = i12;
                i12 = (int32_T)smC_data[ci];
                if (!((i12 >= 1) && (i12 <= fricCoeff_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(i12, 1, fricCoeff_size[0],
                    &ce_emlrtBCI, sp);
                }

                c_smi[1] = i12;
                e_smi[0] = b_smi;
                e_smi[1] = smC_data[ci];
                for (i12 = 0; i12 < 2; i12++) {
                  y[i12] = fricCoeff_data[tmp_size[i12] - 1];
                  y[2 + i12] = fricCoeff_data[c_smi[i12] - 1];
                  b_sm12v[i12 << 1] = sm12v[i12] / n12v * b * 0.03 * B;
                  b_sm12v[1 + (i12 << 1)] = -sm12v[i12] / n12v * b * 0.03 * B;
                }

                sm12v[0] = b_smi;
                sm12v[1] = smC_data[ci];
                for (i12 = 0; i12 < 2; i12++) {
                  for (d_smi = 0; d_smi < 2; d_smi++) {
                    loop_ub = (int32_T)e_smi[d_smi];
                    if (!((loop_ub >= 1) && (loop_ub <= sm_size[0]))) {
                      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, sm_size[0],
                        &de_emlrtBCI, sp);
                    }

                    b_sm[d_smi + (i12 << 1)] = sm_data[(loop_ub + sm_size[0] *
                      i12) - 1] + b_sm12v[d_smi + (i12 << 1)] / y[d_smi + (i12 <<
                      1)];
                  }
                }

                for (i12 = 0; i12 < 2; i12++) {
                  for (d_smi = 0; d_smi < 2; d_smi++) {
                    loop_ub = (int32_T)sm12v[d_smi];
                    if (!((loop_ub >= 1) && (loop_ub <= sm_size[0]))) {
                      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, sm_size[0],
                        &ee_emlrtBCI, sp);
                    }

                    sm_data[(loop_ub + sm_size[0] * i12) - 1] = b_sm[d_smi +
                      (i12 << 1)];
                  }
                }

                /* rotate COM; add repulsive noise to prevent sticking together */
              }
            }
          }

          ci++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        smi++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (!resolveFl) {
        xSm_size[0] = i11;
        xSm_size[1] = 3;
        loop_ub = i11 * 3;
        for (i11 = 0; i11 < loop_ub; i11++) {
          xSm_data[i11] = collFl;
        }

        exitg1 = 1;
      } else {
        /* if just checking collisions */
        /*        collFl=false; */
        whCnt++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }
    } else {
      /*      whCnt */
      loop_ub = sm_size[0];
      xSm_size[0] = sm_size[0];
      xSm_size[1] = 3;
      for (i11 = 0; i11 < 3; i11++) {
        for (i12 = 0; i12 < loop_ub; i12++) {
          xSm_data[i12 + loop_ub * i11] = sm_data[i12 + sm_size[0] * i11];
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

/* End of code generation (resolveCollisions.c) */
