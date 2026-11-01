
/* ==== FUN_0044f970 @ 0044f970 ==== 
 * signature: undefined4 __cdecl FUN_0044f970(int * param_1)
 * body: 0044f970-0044fc35
 */

undefined4 __cdecl FUN_0044f970(int *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  float local_58 [3];
  undefined1 local_4c [4];
  float local_48 [3];
  undefined1 local_3c [4];
  float local_38 [3];
  int local_2c;
  void *local_28;
  void *local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  uint local_8;
  
  pcStack_c = FUN_0056a627;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  ExceptionList = &local_10;
  pvVar3 = (void *)FUN_004a2140(param_1);
  local_24 = pvVar3;
  local_28 = (void *)FUN_004a2150(param_1);
  iVar8 = *(int *)((int)pvVar3 + 0x28);
  iVar2 = *(int *)((int)local_28 + 0x28);
  local_2c = iVar8;
  pfVar4 = (float *)FUN_004a20f0(param_1,local_38);
  pfVar5 = (float *)FUN_004a20a0(param_1,local_48);
  fVar17 = FUN_00427170(iVar8,iVar2,pfVar5,pfVar4);
  local_20 = (float)fVar17;
  local_18 = local_20;
  pfVar4 = (float *)FUN_004a20f0(param_1,local_48);
  pfVar5 = (float *)FUN_004a20a0(param_1,local_38);
  fVar17 = FUN_00427170(iVar2,iVar8,pfVar5,pfVar4);
  local_20 = (float)fVar17;
  local_1c = local_20;
  iVar6 = FUN_0040dad0(iVar8);
  if (iVar6 != -1) {
    FUN_004a2050(param_1,local_48);
    FUN_0041a5b0(iVar8,iVar2,local_18);
  }
  iVar6 = FUN_0040dad0(iVar2);
  if (iVar6 != -1) {
    FUN_004a2050(param_1,local_48);
    FUN_0041a5b0(iVar2,iVar8,local_1c);
  }
  if ((iVar8 != DAT_006fba58) && (iVar2 != DAT_006fba58)) {
    ExceptionList = local_10;
    return 0;
  }
  local_20 = (float)((uint)local_20 & 0xffffff00);
  puVar7 = FUN_0044ff50(local_24,local_3c);
  uVar9 = 0xffffffff;
  pcVar13 = s_chunk_005a24a0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar10 = ~uVar9 - 1;
  uVar9 = 5;
  if (*(uint *)(puVar7 + 8) < 5) {
    uVar9 = *(uint *)(puVar7 + 8);
  }
  uVar11 = uVar9;
  if (uVar10 <= uVar9) {
    uVar11 = uVar10;
  }
  bVar15 = false;
  iVar8 = 0;
  bVar16 = true;
  pbVar12 = *(byte **)(puVar7 + 4);
  pbVar14 = (byte *)s_chunk_005a24a0;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    bVar15 = *pbVar12 < *pbVar14;
    bVar16 = *pbVar12 == *pbVar14;
    pbVar12 = pbVar12 + 1;
    pbVar14 = pbVar14 + 1;
  } while (bVar16);
  if (!bVar16) {
    iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
  }
  if (((iVar8 != 0) || (uVar9 < uVar10)) || (uVar9 != uVar10)) {
    puVar7 = FUN_0044ff50(local_28,local_4c);
    uVar9 = 0xffffffff;
    pcVar13 = s_chunk_005a24a8;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    uVar10 = ~uVar9 - 1;
    uVar9 = 5;
    if (*(uint *)(puVar7 + 8) < 5) {
      uVar9 = *(uint *)(puVar7 + 8);
    }
    uVar11 = uVar9;
    if (uVar10 <= uVar9) {
      uVar11 = uVar10;
    }
    bVar15 = false;
    iVar8 = 0;
    bVar16 = true;
    pbVar12 = *(byte **)(puVar7 + 4);
    pbVar14 = (byte *)s_chunk_005a24a8;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      bVar15 = *pbVar12 < *pbVar14;
      bVar16 = *pbVar12 == *pbVar14;
      pbVar12 = pbVar12 + 1;
      pbVar14 = pbVar14 + 1;
    } while (bVar16);
    if (!bVar16) {
      iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
    }
    bVar15 = false;
    if (iVar8 == 0) {
      if (uVar9 < uVar10) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = (uint)(uVar9 != uVar10);
      }
      bVar15 = uVar9 == 0;
    }
    if (local_48[0] != 0.0) {
      cVar1 = *(char *)((int)local_48[0] + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)((int)local_48[0] + -1));
      }
      else {
        *(char *)((int)local_48[0] + -1) = cVar1 + -1;
      }
    }
    local_48[0] = 0.0;
    local_48[1] = 0.0;
    local_48[2] = 0.0;
    bVar16 = false;
    if (!bVar15) goto LAB_0044fba1;
  }
  bVar16 = true;
LAB_0044fba1:
  local_8 = local_8 & 0xffffff00;
  if (local_38[0] != 0.0) {
    cVar1 = *(char *)((int)local_38[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_38[0] + -1));
    }
    else {
      *(char *)((int)local_38[0] + -1) = cVar1 + -1;
    }
  }
  if (bVar16) {
    local_20 = (float)CONCAT31(local_20._1_3_,1);
  }
  if (local_2c == DAT_006fba58) {
    local_1c = local_18;
  }
  FUN_004a2050(param_1,local_58);
  FUN_0044fe70(DAT_006fba58,local_1c);
  ExceptionList = local_10;
  return 0;
}


