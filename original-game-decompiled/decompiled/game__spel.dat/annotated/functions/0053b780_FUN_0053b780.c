
/* ==== FUN_0053b780 @ 0053b780 ==== 
 * signature: undefined __cdecl FUN_0053b780(int param_1, float param_2)
 * body: 0053b780-0053b839
 */

void __cdecl FUN_0053b780(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0x80) & 7) == 0) {
    FUN_0053b6d0(param_1,0.0,param_2);
    return;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x44) + 0x80) & 7) == 0) {
    FUN_0053b6d0(param_1,param_2,0.0);
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0xa4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x44) + 0xa4);
  fVar3 = *(float *)(iVar1 + 0x1c0) + *(float *)(iVar1 + 0x1b8) + 1e-10;
  fVar5 = *(float *)(iVar2 + 0x1c0) + *(float *)(iVar2 + 0x1b8) + 1e-10;
  fVar4 = fVar5 * 0.1 + fVar3;
  fVar5 = fVar3 * 0.1 + fVar5;
  fVar3 = param_2 / (fVar5 + fVar4);
  FUN_0053b6d0(param_1,fVar3 * fVar4,fVar3 * fVar5);
  return;
}


