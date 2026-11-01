
/* ==== FUN_004f9470 @ 004f9470 ==== 
 * signature: float10 __fastcall FUN_004f9470(double * param_1)
 * body: 004f9470-004f9490
 */

float10 __fastcall FUN_004f9470(double *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}


