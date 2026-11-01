
/* ==== FUN_0053f0c0 @ 0053f0c0 ==== 
 * signature: undefined __fastcall FUN_0053f0c0(int param_1)
 * body: 0053f0c0-0053f10c
 */

void __fastcall FUN_0053f0c0(int param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  
  fVar2 = (float)*(double *)(*(int *)(*(int *)(param_1 + 0x2c) + 0xc) + 0x148) *
          *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x28) = fVar2;
  if (0.0 < fVar2) {
    fVar3 = FUN_0053f690(param_1,(double)fVar2);
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0xc);
    *(double *)(iVar1 + 0x70) = (double)(fVar3 + (float10)*(double *)(iVar1 + 0x70));
    *(float *)(param_1 + 0x28) = (float)((float10)*(float *)(param_1 + 0x28) - fVar3);
    return;
  }
  return;
}


