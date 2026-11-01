
/* ==== FUN_004ee6d0 @ 004ee6d0 ==== 
 * signature: undefined __stdcall FUN_004ee6d0(float * param_1, float param_2, float param_3)
 * body: 004ee6d0-004ee6fc
 */

void FUN_004ee6d0(float *param_1,float param_2,float param_3)

{
  if (*param_1 < param_2) {
    *param_1 = param_2;
  }
  if (param_3 < *param_1) {
    *param_1 = param_3;
  }
  return;
}


