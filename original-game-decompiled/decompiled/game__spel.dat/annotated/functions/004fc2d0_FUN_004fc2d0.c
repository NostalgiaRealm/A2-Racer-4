
/* ==== FUN_004fc2d0 @ 004fc2d0 ==== 
 * signature: undefined __fastcall FUN_004fc2d0(int param_1)
 * body: 004fc2d0-004fc301
 */

void __fastcall FUN_004fc2d0(int param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  fVar2 = 0.0;
  if (0 < iVar4) {
    piVar3 = (int *)(param_1 + 0x44);
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
      fVar2 = fVar2 - *(float *)(iVar1 + 0x74);
    } while (iVar4 != 0);
  }
  FUN_0050d610(*(void **)(param_1 + 0x40),(double)(fVar2 * *(float *)(param_1 + 0x128)));
  return;
}


