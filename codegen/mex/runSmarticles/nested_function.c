/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nested_function.c
 *
 * Code generation for function 'nested_function'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "runSmarticles.h"
#include "nested_function.h"

/* Function Definitions */
void b_nested_function_nested_functi(real_T varargin_1, real_T varargin_2,
  real_T this_environment[2])
{
  real_T environment[2];
  int32_T i14;
  environment[0] = varargin_1;
  environment[1] = varargin_2;
  for (i14 = 0; i14 < 2; i14++) {
    this_environment[i14] = environment[i14];
  }
}

void nested_function_nested_function(const real_T varargin_1_data[], const
  int32_T varargin_1_size[1], const real_T varargin_2_data[], const int32_T
  varargin_2_size[1], cell_wrap_1 this_environment[2])
{
  cell_wrap_1 environment[2];
  int32_T loop_ub;
  int32_T i9;
  environment[0].f1.size[0] = varargin_1_size[0];
  loop_ub = varargin_1_size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    environment[0].f1.data[i9] = varargin_1_data[i9];
  }

  environment[1].f1.size[0] = varargin_2_size[0];
  loop_ub = varargin_2_size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    environment[1].f1.data[i9] = varargin_2_data[i9];
  }

  for (i9 = 0; i9 < 2; i9++) {
    this_environment[i9] = environment[i9];
  }
}

/* End of code generation (nested_function.c) */
