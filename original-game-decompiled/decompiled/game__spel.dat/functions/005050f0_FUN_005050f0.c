
/* ==== FUN_005050f0 @ 005050f0 ==== 
 * signature: float10 __thiscall FUN_005050f0(float * param_1, float * param_2)
 * body: 005050f0-0050510a
 */

float10 __thiscall FUN_005050f0(float *param_1,float *param_2)

{
  return (float10)*param_2 * (float10)*param_1 +
         (float10)param_2[1] * (float10)param_1[1] + (float10)param_2[2] * (float10)param_1[2];
}


