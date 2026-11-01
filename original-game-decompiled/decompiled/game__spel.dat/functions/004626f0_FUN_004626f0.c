
/* ==== FUN_004626f0 @ 004626f0 ==== 
 * signature: undefined __cdecl FUN_004626f0(float param_1, float param_2, float * param_3)
 * body: 004626f0-0046271c
 */

void __cdecl FUN_004626f0(float param_1,float param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_2);
  *param_3 = (float)-(fVar2 * fVar1);
  fVar2 = (float10)fsin((float10)param_1);
  param_3[1] = (float)fVar2;
  fVar2 = (float10)fcos((float10)param_2);
  param_3[2] = (float)(fVar2 * fVar1);
  return;
}


