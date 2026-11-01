
/* ==== FUN_004161d0 @ 004161d0 ==== 
 * signature: undefined4 __cdecl FUN_004161d0(int param_1)
 * body: 004161d0-004165d2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004161d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar4 = FUN_00414070(param_1);
  iVar5 = DAT_00715e50;
  iVar10 = iVar4 * 0x38;
  iVar11 = (&DAT_005d1bc0)[iVar4 * 0xe];
  iVar8 = *(int *)(&DAT_005d1bbc + iVar10);
  if (iVar8 < *(int *)(&DAT_00709f1c + iVar11 * 0x340)) {
    iVar5 = FUN_004641a0(iVar11);
    local_c = *(float *)(&DAT_00709f24 + (iVar8 + iVar5 * 0x34) * 0x10);
    iVar5 = FUN_004641a0(iVar11);
    local_8 = *(float *)(&DAT_00709f28 + (iVar8 + iVar5 * 0x34) * 0x10);
    iVar6 = FUN_004641a0(iVar11);
    iVar4 = DAT_0073b0d0;
    iVar5 = DAT_00715e50;
    local_1c = *(float *)(&DAT_00709f2c + (iVar8 + iVar6 * 0x34) * 0x10);
    iVar6 = param_1 * 0xf0;
    iVar8 = *(int *)(iVar6 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
    fVar2 = local_c - *(float *)(iVar8 + 0x50);
    fVar3 = local_8 - *(float *)(iVar8 + 0x54);
    fVar1 = local_1c - *(float *)(iVar8 + 0x58);
    if (SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) < 30.0) {
      *(int *)(&DAT_005d1bbc + iVar10) = *(int *)(&DAT_005d1bbc + iVar10) + 1;
    }
    iVar8 = *(int *)(iVar6 + 0x24 + iVar5);
    iVar9 = iVar8 + iVar4;
    local_24 = local_c - *(float *)(iVar9 + 0x50 + iVar8 * 0xa8);
    iVar8 = iVar9 + 0x50 + iVar8 * 0xa8;
    local_20 = local_8 - *(float *)(iVar8 + 4);
    local_1c = local_1c - *(float *)(iVar8 + 8);
    if (((local_24 != 0.0) || (local_20 != 0.0)) ||
       (local_18 = local_24, local_14 = local_20, local_10 = local_1c, local_1c != 0.0)) {
      local_10 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
      local_18 = local_24 / local_10;
      local_14 = local_20 / local_10;
      local_10 = local_1c / local_10;
      local_c = local_18;
      local_8 = local_14;
      local_4 = local_10;
    }
    puVar7 = (undefined4 *)
             FUN_004b4070(&local_24,iVar4 + *(int *)(iVar6 + 0x24 + iVar5) * 0xa9 + 0x10);
    local_c = (float)*puVar7;
    local_8 = (float)puVar7[1];
    local_4 = (float)puVar7[2];
    fVar12 = (float10)FUN_00558550();
    FUN_00414450(param_1,(float *)(&DAT_005d1bd0 + iVar10),
                 (float)((float10)_DAT_005b23b8 * (float10)0.5 *
                        (fVar12 - (float10)1.5707964) * (float10)0.63661975));
    if ((float)*(int *)(&DAT_00709f18 + iVar11 * 0x340) <= *(float *)(iVar6 + 0xc4 + DAT_00715e50))
    {
      if (*(float *)(&DAT_005d1bd8 + iVar10) < 100.0) {
        fVar12 = FUN_004a6800(0x7128b0);
        *(float *)(&DAT_005d1bd8 + iVar10) =
             (float)(fVar12 * (float10)200.0 + (float10)*(float *)(&DAT_005d1bd8 + iVar10));
      }
      *(undefined4 *)(&DAT_005d1bd4 + iVar10) = 0;
    }
    else {
      if (*(float *)(&DAT_005d1bd4 + iVar10) < 100.0) {
        fVar12 = FUN_004a6800(0x7128b0);
        *(float *)(&DAT_005d1bd4 + iVar10) =
             (float)(fVar12 * (float10)100.0 + (float10)*(float *)(&DAT_005d1bd4 + iVar10));
      }
      *(undefined4 *)(&DAT_005d1bd8 + iVar10) = 0;
    }
    FUN_00415e40(param_1,(float *)(&DAT_005d1bd0 + iVar10));
    FUN_00436510(param_1,1);
    FUN_00450b30(param_1,1);
    iVar11 = 0;
    if (0 < *(int *)(iVar6 + 0xac + DAT_00715e50)) {
      do {
        iVar8 = FUN_004a8600((void *)(iVar6 + DAT_00715e50),iVar11);
        FUN_004b5770(DAT_0073b0d0 + iVar8 * 0xa9);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(iVar6 + 0xac + DAT_00715e50));
    }
  }
  else if (param_1 != -1) {
    switch((&DAT_00709f10)[iVar11 * 0xd0]) {
    case 0xd:
    case 0x10:
    case 0x13:
      FUN_004a7a50(param_1);
      FUN_00414000(iVar4);
      return 1;
    case 0xe:
    case 0x11:
    case 0x14:
      *(undefined4 *)(&DAT_005d1bd4 + iVar10) = 0;
      *(undefined4 *)(&DAT_005d1bd8 + iVar10) = 0x42c80000;
      return 1;
    case 0xf:
    case 0x12:
    case 0x15:
      (&DAT_005d1bac)[iVar4 * 0xe] = 0;
      *(code **)(param_1 * 0xf0 + 0x6c + iVar5) = FUN_00421f50;
      return 1;
    }
  }
  return 1;
}


