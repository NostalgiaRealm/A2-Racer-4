
/* ==== FUN_004b5770 @ 004b5770 ==== 
 * signature: undefined __fastcall FUN_004b5770(int param_1)
 * body: 004b5770-004b5b00
 */

void __fastcall FUN_004b5770(int param_1)

{
  float *pfVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  float local_600 [16];
  float local_5c0 [16];
  float local_580 [16];
  float local_540 [16];
  float local_500 [16];
  float local_4c0 [16];
  float local_480 [16];
  float local_440 [16];
  float local_400 [16];
  undefined4 local_3c0 [16];
  float local_380 [16];
  float local_340 [16];
  undefined4 local_300 [16];
  float local_2c0 [16];
  float local_280 [16];
  float local_240 [16];
  float local_200 [16];
  undefined4 local_1c0 [16];
  float local_180 [16];
  float local_140 [16];
  float local_100 [16];
  float local_c0 [16];
  undefined4 local_80 [16];
  float local_40 [16];
  
  pfVar1 = (float *)(param_1 + 0x10);
  pfVar5 = (float *)&DAT_0073b538;
  pfVar4 = pfVar1;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar4 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 1;
  }
  pfVar5 = pfVar1;
  if (DAT_005b0e9c == 0) {
    if (*(float *)(param_1 + 0x7c) != 0.0) {
      pfVar4 = pfVar1;
      lVar7 = __ftol();
      pfVar3 = (float *)FUN_004b3f80(local_2c0,(uint)lVar7);
      pfVar4 = (float *)FUN_004b4110(local_240,pfVar3,pfVar4);
      pfVar3 = pfVar1;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar3 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar3 = pfVar3 + 1;
      }
    }
    if (*(float *)(param_1 + 0x74) != 0.0) {
      pfVar4 = pfVar1;
      lVar7 = __ftol();
      pfVar3 = (float *)FUN_004b3ea0(local_1c0,(uint)lVar7);
      pfVar4 = (float *)FUN_004b4110(local_140,pfVar3,pfVar4);
      pfVar3 = pfVar1;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar3 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar3 = pfVar3 + 1;
      }
    }
    if (*(float *)(param_1 + 0x78) == 0.0) goto LAB_004b5abf;
    lVar7 = __ftol();
    pfVar3 = (float *)FUN_004b3f10(local_c0,(uint)lVar7);
    pfVar4 = local_40;
  }
  else if (DAT_005b0e9c == 1) {
    if (*(float *)(param_1 + 0x7c) != 0.0) {
      pfVar4 = pfVar1;
      lVar7 = __ftol();
      pfVar3 = (float *)FUN_004b3f80(local_5c0,(uint)lVar7);
      pfVar4 = (float *)FUN_004b4110(local_540,pfVar3,pfVar4);
      pfVar3 = pfVar1;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar3 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar3 = pfVar3 + 1;
      }
    }
    if (*(float *)(param_1 + 0x78) != 0.0) {
      pfVar4 = pfVar1;
      lVar7 = __ftol();
      pfVar3 = (float *)FUN_004b3f10(local_4c0,(uint)lVar7);
      pfVar4 = (float *)FUN_004b4110(local_440,pfVar3,pfVar4);
      pfVar3 = pfVar1;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar3 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar3 = pfVar3 + 1;
      }
    }
    if (*(float *)(param_1 + 0x74) == 0.0) goto LAB_004b5abf;
    lVar7 = __ftol();
    pfVar3 = (float *)FUN_004b3ea0(local_3c0,(uint)lVar7);
    pfVar4 = local_340;
  }
  else {
    bVar2 = *(float *)(param_1 + 0x74) != 0.0;
    if (DAT_005b0e9c == 2) {
      if (bVar2) {
        pfVar4 = pfVar1;
        lVar7 = __ftol();
        pfVar3 = (float *)FUN_004b3ea0(local_80,(uint)lVar7);
        pfVar4 = (float *)FUN_004b4110(local_400,pfVar3,pfVar4);
        pfVar3 = pfVar1;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar3 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar3 = pfVar3 + 1;
        }
      }
      if (*(float *)(param_1 + 0x78) != 0.0) {
        pfVar4 = pfVar1;
        lVar7 = __ftol();
        pfVar3 = (float *)FUN_004b3f10(local_200,(uint)lVar7);
        pfVar4 = (float *)FUN_004b4110(local_380,pfVar3,pfVar4);
        pfVar3 = pfVar1;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar3 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar3 = pfVar3 + 1;
        }
      }
      if (*(float *)(param_1 + 0x7c) == 0.0) goto LAB_004b5abf;
      lVar7 = __ftol();
      pfVar3 = (float *)FUN_004b3f80(local_100,(uint)lVar7);
      pfVar4 = local_600;
    }
    else {
      if (bVar2) {
        pfVar4 = pfVar1;
        lVar7 = __ftol();
        pfVar3 = (float *)FUN_004b3ea0(local_300,(uint)lVar7);
        pfVar4 = (float *)FUN_004b4110(local_580,pfVar3,pfVar4);
        pfVar3 = pfVar1;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar3 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar3 = pfVar3 + 1;
        }
      }
      if (*(float *)(param_1 + 0x78) != 0.0) {
        pfVar4 = pfVar1;
        lVar7 = __ftol();
        pfVar3 = (float *)FUN_004b3f10(local_180,(uint)lVar7);
        pfVar4 = (float *)FUN_004b4110(local_500,pfVar3,pfVar4);
        pfVar3 = pfVar1;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar3 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar3 = pfVar3 + 1;
        }
      }
      if (*(float *)(param_1 + 0x7c) == 0.0) goto LAB_004b5abf;
      lVar7 = __ftol();
      pfVar3 = (float *)FUN_004b3f80(local_280,(uint)lVar7);
      pfVar4 = local_480;
    }
  }
  pfVar5 = (float *)FUN_004b4110(pfVar4,pfVar3,pfVar5);
  pfVar4 = pfVar1;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar4 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 1;
  }
LAB_004b5abf:
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
  FUN_004b4360(pfVar1,*(float *)(param_1 + 0x80),*(float *)(param_1 + 0x84),
               *(float *)(param_1 + 0x88));
  return;
}


