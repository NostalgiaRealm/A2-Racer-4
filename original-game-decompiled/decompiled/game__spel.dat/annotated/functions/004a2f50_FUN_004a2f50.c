
/* ==== FUN_004a2f50 @ 004a2f50 ==== 
 * signature: float10 __thiscall FUN_004a2f50(int param_1, float param_2)
 * body: 004a2f50-004a2f6f
 */

float10 __thiscall FUN_004a2f50(int param_1,float param_2)

{
  return (float10)*(float *)(param_1 + 0xa4 + *(int *)(param_1 + 0xe4) * 4) *
         (float10)*(float *)(param_1 + 0xa0) * (float10)param_2 * (float10)60.0;
}


