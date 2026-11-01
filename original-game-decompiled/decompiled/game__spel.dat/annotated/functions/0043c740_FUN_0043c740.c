
/* ==== FUN_0043c740 @ 0043c740 ==== 
 * signature: undefined __stdcall FUN_0043c740(void)
 * body: 0043c740-0043c884
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c740(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float10 extraout_ST0;
  longlong lVar9;
  float local_18;
  float local_14;
  undefined4 local_c [3];
  
  iVar5 = (&DAT_006c3518)[DAT_006c3ba8] * 0x178;
  FUN_004b1380((int *)(DAT_00719b50 + iVar5));
  if (*(int *)(iVar5 + 0x74 + DAT_00719b50) == 0) {
    fVar8 = (float10)-1.0;
    local_18 = 0.0;
  }
  else {
    pfVar3 = (float *)FUN_004b11c0((void *)(iVar5 + DAT_00719b50),local_c);
    local_18 = *pfVar3;
    fVar8 = (float10)pfVar3[2];
  }
  fpatan(fVar8,(float10)local_18);
  lVar9 = __ftol();
  iVar5 = DAT_0073b578;
  local_14 = (float)extraout_ST0;
  uVar6 = (int)lVar9 + 0x400;
  iVar7 = 0;
  if (0 < DAT_006c4078) {
    pfVar3 = (float *)&DAT_006c3bac;
    do {
      iVar4 = (DAT_005b23bc & uVar6) * 4;
      fVar1 = *(float *)(iVar4 + iVar5) * _DAT_006c4074;
      fVar2 = *(float *)(iVar4 + DAT_0073b530) * _DAT_006c4074;
      local_14 = _DAT_006c4060 + local_14;
      lVar9 = __ftol();
      _DAT_006c4074 = _DAT_006c4074 + 2.0;
      uVar6 = uVar6 - (int)lVar9;
      iVar7 = iVar7 + 1;
      *pfVar3 = fVar1;
      pfVar3[1] = local_14;
      pfVar3[2] = fVar2;
      pfVar3 = pfVar3 + 3;
    } while (iVar7 < DAT_006c4078);
  }
  return;
}


