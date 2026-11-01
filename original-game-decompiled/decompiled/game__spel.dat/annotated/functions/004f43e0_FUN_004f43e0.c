
/* ==== FUN_004f43e0 @ 004f43e0 ==== 
 * signature: float10 __thiscall FUN_004f43e0(int param_1, float * param_2)
 * body: 004f43e0-004f4404
 */

float10 __thiscall FUN_004f43e0(int param_1,float *param_2)

{
  return (float10)*(float *)(param_1 + 0x94) * (float10)*param_2 +
         (float10)*(float *)(param_1 + 0x98) * (float10)param_2[1] +
         (float10)*(float *)(param_1 + 0x9c) * (float10)param_2[2];
}


