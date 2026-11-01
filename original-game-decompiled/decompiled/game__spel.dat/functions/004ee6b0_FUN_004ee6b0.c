
/* ==== FUN_004ee6b0 @ 004ee6b0 ==== 
 * signature: undefined __stdcall FUN_004ee6b0(int * param_1, int param_2, int param_3)
 * body: 004ee6b0-004ee6cc
 */

void FUN_004ee6b0(int *param_1,int param_2,int param_3)

{
  if (*param_1 < param_2) {
    *param_1 = param_2;
  }
  if (param_3 < *param_1) {
    *param_1 = param_3;
  }
  return;
}


