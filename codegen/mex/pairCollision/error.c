/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "pairCollision.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "/Applications/MATLAB_R2017a.app/toolbox/eml/eml/+coder/+internal/error.m"/* pName */
};

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &b_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &b_emlrtRTEI, "MATLAB:nologicalnan", 0);
}

/* End of code generation (error.c) */
