
/* ==== FUN_004f4710 @ 004f4710 ==== 
 * signature: undefined __fastcall FUN_004f4710(void * param_1)
 * body: 004f4710-004f47a5
 */

void __fastcall FUN_004f4710(void *param_1)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  uint uVar4;
  float10 fVar5;
  
  FUN_004f4670(param_1);
  uVar4 = (uint)*(ushort *)((int)param_1 + 0x4e);
  dVar3 = *(double *)(*(int *)((int)param_1 + 0xc) + 0x120);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + uVar4 * 4);
    *(uint *)(uVar2 + 0x80) = *(uint *)(uVar2 + 0x80) & 0xffffff08 | 8;
    FUN_0053a580(*(void **)(*(int *)((int)param_1 + 0xc) + 0x10),uVar2);
    fVar5 = (float10)dVar3 - (float10)*(double *)(uVar2 + 0x48);
    fVar1 = *(float *)(uVar2 + 0x50);
    *(undefined4 *)(uVar2 + 0x50) = 0;
    *(float *)(uVar2 + 0x58) = (float)(fVar5 * (float10)fVar1 + (float10)*(float *)(uVar2 + 0x58));
    fVar1 = *(float *)(uVar2 + 0x54);
    *(undefined4 *)(uVar2 + 0x54) = 0;
    *(float *)(uVar2 + 0x5c) = (float)(fVar5 * (float10)fVar1 + (float10)*(float *)(uVar2 + 0x5c));
    FUN_0053cd60(uVar2 + 0x48);
    if (*(int *)(uVar2 + 0x40) != 0) {
      FUN_004fe450(uVar2);
    }
  }
  return;
}


