
/* ==== FUN_004ab880 @ 004ab880 ==== 
 * signature: float10 __thiscall FUN_004ab880(int param_1, float param_2, float param_3)
 * body: 004ab880-004ab89b
 */

float10 __thiscall FUN_004ab880(int param_1,float param_2,float param_3)

{
  return (((float10)*(float *)(param_1 + 0xec) -
          (float10)param_2 * (float10)*(float *)(param_1 + 0x4c)) -
         (float10)param_3 * (float10)*(float *)(param_1 + 0x54)) /
         (float10)*(float *)(param_1 + 0x50);
}


