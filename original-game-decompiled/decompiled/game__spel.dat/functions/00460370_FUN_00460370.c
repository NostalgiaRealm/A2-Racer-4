
/* ==== FUN_00460370 @ 00460370 ==== 
 * signature: undefined __cdecl FUN_00460370(float * param_1)
 * body: 00460370-004603ac
 */

void __cdecl FUN_00460370(float *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_00460340(param_1);
  if (fVar1 == (float10)0.0) {
    fVar1 = (float10)1.0;
  }
  *param_1 = (float)((float10)*param_1 / fVar1);
  param_1[1] = (float)((float10)param_1[1] / fVar1);
  param_1[2] = (float)((float10)param_1[2] / fVar1);
  return;
}


