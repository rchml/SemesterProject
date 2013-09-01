#ifndef __c27_controller_template_h__
#define __c27_controller_template_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c27_ResolvedFunctionInfo;

typedef struct {
  SimStruct *S;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  ChartInfoStruct chartInfo;
} SFc27_controller_templateInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c27_controller_template_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c27_controller_template_get_check_sum(mxArray *plhs[]);
extern void c27_controller_template_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif