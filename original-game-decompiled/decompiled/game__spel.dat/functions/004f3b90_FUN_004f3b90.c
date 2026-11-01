
/* ==== FUN_004f3b90 @ 004f3b90 ==== 
 * signature: float10 __thiscall FUN_004f3b90(int param_1, float * param_2, float * param_3)
 * body: 004f3b90-004f3bf6
 */

float10 __thiscall FUN_004f3b90(int param_1,float *param_2,float *param_3)

{
  return ((float10)*param_3 * (float10)*param_3 * (float10)*(float *)(param_1 + 0x14) +
          (float10)param_3[2] * (float10)param_3[2] * (float10)*(float *)(param_1 + 0x1c) +
          (float10)param_3[1] * (float10)param_3[1] * (float10)*(float *)(param_1 + 0x18) +
         ((float10)param_2[2] * (float10)param_2[2] +
         (float10)param_2[1] * (float10)param_2[1] + (float10)*param_2 * (float10)*param_2) *
         (float10)*(float *)(param_1 + 0x20)) * (float10)0.5;
}


