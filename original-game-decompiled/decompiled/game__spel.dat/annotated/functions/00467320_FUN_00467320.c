
/* ==== FUN_00467320 @ 00467320 ==== 
 * signature: undefined __cdecl FUN_00467320(float * param_1, float * param_2, float param_3)
 * body: 00467320-00467364
 */

void __cdecl FUN_00467320(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = *param_2 / param_3;
  param_1[1] = fVar1 / param_3;
  param_1[2] = fVar2 / param_3;
  return;
}


