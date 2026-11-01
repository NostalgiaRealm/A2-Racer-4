
/* ==== FUN_004605a0 @ 004605a0 ==== 
 * signature: undefined __cdecl FUN_004605a0(float * param_1, float param_2)
 * body: 004605a0-004605ca
 */

void __cdecl FUN_004605a0(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  FUN_004603d0(param_1);
  fVar1 = (float10)fcos((float10)param_2);
  *param_1 = (float)fVar1;
  fVar2 = (float10)fsin((float10)param_2);
  param_1[2] = (float)-fVar2;
  param_1[8] = (float)fVar2;
  param_1[10] = (float)fVar1;
  return;
}


