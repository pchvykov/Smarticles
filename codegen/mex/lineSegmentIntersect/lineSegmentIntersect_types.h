/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lineSegmentIntersect_types.h
 *
 * Code generation for function 'lineSegmentIntersect'
 *
 */

#ifndef LINESEGMENTINTERSECT_TYPES_H
#define LINESEGMENTINTERSECT_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_boolean_T_3x3
#define struct_emxArray_boolean_T_3x3

struct emxArray_boolean_T_3x3
{
  boolean_T data[9];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_boolean_T_3x3*/

#ifndef typedef_emxArray_boolean_T_3x3
#define typedef_emxArray_boolean_T_3x3

typedef struct emxArray_boolean_T_3x3 emxArray_boolean_T_3x3;

#endif                                 /*typedef_emxArray_boolean_T_3x3*/

#ifndef struct_emxArray_real_T_3x3
#define struct_emxArray_real_T_3x3

struct emxArray_real_T_3x3
{
  real_T data[9];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_real_T_3x3*/

#ifndef typedef_emxArray_real_T_3x3
#define typedef_emxArray_real_T_3x3

typedef struct emxArray_real_T_3x3 emxArray_real_T_3x3;

#endif                                 /*typedef_emxArray_real_T_3x3*/

#ifndef struct_sV4Fg5sdPTw4PX6XbIEiskH
#define struct_sV4Fg5sdPTw4PX6XbIEiskH

struct sV4Fg5sdPTw4PX6XbIEiskH
{
  emxArray_boolean_T_3x3 intAdjacencyMatrix;
  emxArray_real_T_3x3 intMatrixX;
  emxArray_real_T_3x3 intMatrixY;
  emxArray_real_T_3x3 intNormalizedDistance1To2;
  emxArray_real_T_3x3 intNormalizedDistance2To1;
};

#endif                                 /*struct_sV4Fg5sdPTw4PX6XbIEiskH*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct sV4Fg5sdPTw4PX6XbIEiskH struct0_T;

#endif                                 /*typedef_struct0_T*/
#endif

/* End of code generation (lineSegmentIntersect_types.h) */
