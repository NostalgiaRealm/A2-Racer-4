
/* ==== FUN_0053d370 @ 0053d370 ==== 
 * signature: undefined __thiscall FUN_0053d370(void * this, int param_1, float param_2, float param_3)
 * body: 0053d370-0053d585
 */

void __thiscall FUN_0053d370(void *this,int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double local_20;
  float local_18;
  float fStack_14;
  float local_10;
  
  fVar7 = (float10)0.0;
  pfVar4 = *(float **)((int)this + 0x40);
  fVar5 = pfVar4[0x1e];
  if (fVar5 != 0.0) {
    fVar7 = (float10)*(float *)((int)fVar5 + 0xa4) * (float10)*pfVar4 +
            (float10)*(float *)((int)fVar5 + 0xa8) * (float10)pfVar4[1] +
            (float10)*(float *)((int)fVar5 + 0xac) * (float10)pfVar4[2] +
            (float10)pfVar4[0x30] * (float10)*(float *)((int)fVar5 + 0x94) +
            (float10)pfVar4[0x31] * (float10)*(float *)((int)fVar5 + 0x98) +
            (float10)pfVar4[0x32] * (float10)*(float *)((int)fVar5 + 0x9c);
  }
  local_20 = (double)fVar7;
  fVar5 = pfVar4[0x1f];
  if (fVar5 != 0.0) {
    fVar7 = FUN_005050f0((float *)((int)fVar5 + 0x94),pfVar4 + 0x34);
    fVar7 = (float10)local_20 -
            ((float10)*pfVar4 * (float10)*(float *)((int)fVar5 + 0xa4) +
             (float10)*(float *)((int)fVar5 + 0xa8) * (float10)pfVar4[1] +
             (float10)*(float *)((int)fVar5 + 0xac) * (float10)pfVar4[2] + fVar7);
  }
  fVar8 = (float10)param_2 - (float10)*(float *)((int)this + 0x58);
  fVar9 = (float10)param_3;
  if (fVar8 < (float10)0.0) {
    fVar9 = fVar9 * (float10)20.0;
  }
  fVar7 = (fVar9 * fVar8 + fVar7) * (float10)pfVar4[0x1c];
  dVar3 = (double)fVar7;
  if (dVar3 <= 0.0) {
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  else {
    *(float *)((int)this + 0x54) = (float)((float10)dVar3 * (float10)*(double *)(param_1 + 8));
    fVar5 = pfVar4[0x1e];
    if (fVar5 != 0.0) {
      _local_18 = CONCAT44(pfVar4[0x31] * *(float *)((int)fVar5 + 0x38),
                           pfVar4[0x30] * *(float *)((int)fVar5 + 0x34));
      local_10 = pfVar4[0x32] * *(float *)((int)fVar5 + 0x3c);
      FUN_004fe070((void *)((int)fVar5 + 0x94),(void *)((int)fVar5 + 0x94),&local_18,-dVar3);
      FUN_004fe070((void *)((int)fVar5 + 0xa4),(void *)((int)fVar5 + 0xa4),pfVar4,
                   (double)-(*(float *)((int)fVar5 + 0x40) * (float)fVar7));
    }
    fVar5 = pfVar4[0x1f];
    if (fVar5 != 0.0) {
      _local_18 = CONCAT44(pfVar4[0x35] * *(float *)((int)fVar5 + 0x38),
                           pfVar4[0x34] * *(float *)((int)fVar5 + 0x34));
      local_10 = pfVar4[0x36] * *(float *)((int)fVar5 + 0x3c);
      FUN_004fe070((void *)((int)fVar5 + 0x94),(void *)((int)fVar5 + 0x94),&local_18,dVar3);
      fVar6 = *(float *)((int)fVar5 + 0x40) * (float)fVar7;
      fVar1 = pfVar4[1];
      fVar2 = pfVar4[2];
      *(float *)((int)fVar5 + 0xa4) = *pfVar4 * fVar6 + *(float *)((int)fVar5 + 0xa4);
      *(float *)((int)fVar5 + 0xa8) = fVar1 * fVar6 + *(float *)((int)fVar5 + 0xa8);
      *(float *)((int)fVar5 + 0xac) = fVar2 * fVar6 + *(float *)((int)fVar5 + 0xac);
      return;
    }
  }
  return;
}


