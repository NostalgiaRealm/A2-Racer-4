
/* ==== FUN_004f9440 @ 004f9440 ==== 
 * signature: float10 __fastcall FUN_004f9440(float * param_1)
 * body: 004f9440-004f9460
 */

float10 __fastcall FUN_004f9440(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}


