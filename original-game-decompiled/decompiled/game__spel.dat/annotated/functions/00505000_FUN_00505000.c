
/* ==== FUN_00505000 @ 00505000 ==== 
 * signature: undefined __fastcall FUN_00505000(int param_1)
 * body: 00505000-005050ea
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00505000(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  double local_10;
  
  pfVar1 = *(float **)(param_1 + 0x40);
  pfVar1[0x17] = (float)CONCAT31((int3)((uint)pfVar1[0x17] >> 8),1);
  if (_DAT_0074d640 < *(float *)(param_1 + 0x58)) {
    pfVar1[0x19] = 1e+20;
    return;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x18);
  fVar4 = FUN_00504f80(param_1,iVar2);
  pfVar1[0x18] = (float)fVar4;
  fVar4 = (float10)0.0;
  fVar3 = pfVar1[0x1e];
  if (fVar3 != 0.0) {
    fVar4 = FUN_005050f0((float *)((int)fVar3 + 0x94),pfVar1 + 0x30);
    fVar4 = (float10)*(float *)((int)fVar3 + 0xa4) * (float10)*pfVar1 +
            (float10)*(float *)((int)fVar3 + 0xa8) * (float10)pfVar1[1] +
            (float10)*(float *)((int)fVar3 + 0xac) * (float10)pfVar1[2] + fVar4;
  }
  local_10 = (double)fVar4;
  fVar3 = pfVar1[0x1f];
  if (fVar3 != 0.0) {
    fVar4 = FUN_005050f0((float *)((int)fVar3 + 0x94),pfVar1 + 0x34);
    fVar5 = FUN_005050f0((float *)((int)fVar3 + 0xa4),pfVar1);
    fVar4 = (float10)local_10 - (fVar5 + (float10)(double)fVar4);
  }
  pfVar1[0x19] = (float)((float10)*(float *)(param_1 + 0x58) -
                        (float10)*(double *)(iVar2 + 0xc0) *
                        (fVar4 + (float10)pfVar1[0x18] * (float10)0.5));
  return;
}


