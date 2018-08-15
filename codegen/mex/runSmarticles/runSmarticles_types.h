/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runSmarticles_types.h
 *
 * Code generation for function 'runSmarticles'
 *
 */

#ifndef RUNSMARTICLES_TYPES_H
#define RUNSMARTICLES_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T_1000
#define struct_emxArray_real_T_1000

struct emxArray_real_T_1000
{
  real_T data[1000];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_real_T_1000*/

#ifndef typedef_emxArray_real_T_1000
#define typedef_emxArray_real_T_1000

typedef struct emxArray_real_T_1000 emxArray_real_T_1000;

#endif                                 /*typedef_emxArray_real_T_1000*/

#ifndef struct_sZqOdoBJameDbnq0hpQxLVG
#define struct_sZqOdoBJameDbnq0hpQxLVG

struct sZqOdoBJameDbnq0hpQxLVG
{
  emxArray_real_T_1000 f1;
};

#endif                                 /*struct_sZqOdoBJameDbnq0hpQxLVG*/

#ifndef typedef_cell_wrap_1
#define typedef_cell_wrap_1

typedef struct sZqOdoBJameDbnq0hpQxLVG cell_wrap_1;

#endif                                 /*typedef_cell_wrap_1*/

#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_runSmarticlesStackData
#define typedef_runSmarticlesStackData

typedef struct {
  struct {
    real_T xSm_data[5000];
  } f0;
} runSmarticlesStackData;

#endif                                 /*typedef_runSmarticlesStackData*/
#endif

/* End of code generation (runSmarticles_types.h) */
