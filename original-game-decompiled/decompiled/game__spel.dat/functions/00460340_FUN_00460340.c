
/* ==== FUN_00460340 @ 00460340 ==== 
 * signature: float10 __cdecl FUN_00460340(float * param_1)
 * body: 00460340-00460364
 */

float10 __cdecl FUN_00460340(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}


