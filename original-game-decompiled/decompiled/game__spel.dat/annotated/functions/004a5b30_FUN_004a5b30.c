
/* ==== FUN_004a5b30 @ 004a5b30 ==== 
 * signature: undefined __cdecl FUN_004a5b30(undefined4 * param_1, float * param_2, int param_3)
 * body: 004a5b30-004a5b67
 */

void __cdecl FUN_004a5b30(undefined4 *param_1,float *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float local_c [3];
  
  puVar3 = (undefined4 *)FUN_004b42a0(local_c,param_2,param_3);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


