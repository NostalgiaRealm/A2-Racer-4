
/* ==== FUN_00460570 @ 00460570 ==== 
 * signature: undefined __cdecl FUN_00460570(undefined4 * param_1, float param_2)
 * body: 00460570-00460599
 */

void __cdecl FUN_00460570(undefined4 *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  FUN_004603d0(param_1);
  fVar1 = (float10)fcos((float10)param_2);
  param_1[5] = (float)fVar1;
  fVar2 = (float10)fsin((float10)param_2);
  param_1[6] = (float)fVar2;
  param_1[9] = (float)-fVar2;
  param_1[10] = (float)fVar1;
  return;
}


