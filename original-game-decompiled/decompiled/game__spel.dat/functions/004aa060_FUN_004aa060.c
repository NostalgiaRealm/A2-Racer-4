
/* ==== FUN_004aa060 @ 004aa060 ==== 
 * signature: undefined __cdecl FUN_004aa060(undefined4 * param_1, undefined4 * param_2, float * param_3)
 * body: 004aa060-004aa0bf
 */

void __cdecl FUN_004aa060(undefined4 *param_1,undefined4 *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float local_8c [3];
  undefined4 local_80 [16];
  undefined4 local_40 [16];
  
  puVar3 = (undefined4 *)FUN_004b4310(local_40,param_2);
  puVar5 = local_80;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)FUN_004b42a0(local_8c,param_3,(int)local_80);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


