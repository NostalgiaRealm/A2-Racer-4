
/* ==== FUN_0053b6d0 @ 0053b6d0 ==== 
 * signature: undefined __cdecl FUN_0053b6d0(int param_1, float param_2, float param_3)
 * body: 0053b6d0-0053b771
 */

void __cdecl FUN_0053b6d0(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffd7ffff | 0x140000;
  iVar3 = *(int *)(param_1 + 0x28);
  fVar5 = (float10)*(double *)(*(int *)(iVar3 + 0x18) + 0x120) - (float10)*(double *)(iVar3 + 0x48);
  uVar4 = FUN_0050dfd0((void *)(iVar3 + 0x68),param_1 + 0x18,
                       (float)(fVar5 * (float10)*(float *)(iVar3 + 0x50) +
                               (float10)*(float *)(iVar3 + 0x58) + (float10)param_2));
  *(uint *)(param_1 + 0x1c) = uVar4;
  fVar1 = *(float *)(iVar3 + 0x54);
  fVar2 = *(float *)(iVar3 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x44);
  fVar6 = (float10)*(double *)(*(int *)(iVar3 + 0x18) + 0x120) - (float10)*(double *)(iVar3 + 0x48);
  uVar4 = FUN_0050dfd0((void *)(iVar3 + 0x68),param_1 + 0x34,
                       (float)(fVar6 * (float10)*(float *)(iVar3 + 0x50) +
                               (float10)*(float *)(iVar3 + 0x58) + (float10)param_3));
  *(uint *)(param_1 + 0x38) = uVar4;
  *(double *)(param_1 + 0x60) =
       (double)((float)fVar6 * *(float *)(iVar3 + 0x54) + *(float *)(iVar3 + 0x5c) +
               (float)fVar5 * fVar1 + fVar2);
  return;
}


