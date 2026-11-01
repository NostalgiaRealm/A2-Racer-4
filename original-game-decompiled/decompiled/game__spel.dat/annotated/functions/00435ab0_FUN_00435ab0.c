
/* ==== FUN_00435ab0 @ 00435ab0 ==== 
 * signature: undefined __cdecl FUN_00435ab0(int param_1)
 * body: 00435ab0-00435c55
 */

void __cdecl FUN_00435ab0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float local_18c [12];
  float local_15c;
  float local_158;
  float local_154;
  undefined4 local_14c [12];
  float local_11c;
  float local_118;
  float local_114;
  float local_10c [3];
  undefined4 local_100 [13];
  float local_cc;
  float local_c0 [16];
  float local_80 [16];
  float local_40 [16];
  
  iVar4 = param_1 * 0xf0;
  iVar8 = *(int *)(iVar4 + 0x10 + DAT_00715e50);
  if (iVar8 != 0) {
    puVar10 = (undefined4 *)(DAT_0073b0d0 + *(int *)(iVar4 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    puVar6 = local_14c;
    for (iVar7 = 0x10; fVar3 = local_114, fVar2 = local_118, fVar1 = local_11c, iVar7 != 0;
        iVar7 = iVar7 + -1) {
      *puVar6 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 1;
    }
    local_11c = 0.0;
    local_118 = 0.0;
    local_114 = 0.0;
    pfVar5 = (float *)FUN_004b4310(local_100,local_14c);
    iVar7 = 0;
    puVar10 = (undefined4 *)(iVar8 + 0x34);
    pfVar11 = local_c0;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar11 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar11 = pfVar11 + 1;
    }
    do {
      pfVar5 = (float *)FUN_004a1e20((void *)*puVar10,local_80);
      pfVar11 = local_18c;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar11 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar11 = pfVar11 + 1;
      }
      FUN_004a1dd0((void *)*puVar10,local_10c);
      local_15c = local_15c - fVar1;
      local_158 = local_158 - fVar2;
      local_154 = local_154 - fVar3;
      puVar6 = (undefined4 *)FUN_004b4110(local_40,local_c0,local_18c);
      puVar12 = local_100;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar12 = puVar12 + 1;
      }
      fVar13 = FUN_00435a70(local_cc);
      local_cc = (float)fVar13;
      iVar8 = FUN_004a8600((void *)(iVar4 + DAT_00715e50),iVar7);
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 1;
      puVar6 = local_100;
      puVar12 = (undefined4 *)(DAT_0073b0d0 + iVar8 * 0xa9 + 0x10);
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar12 = puVar12 + 1;
      }
    } while (iVar7 < 4);
  }
  return;
}


