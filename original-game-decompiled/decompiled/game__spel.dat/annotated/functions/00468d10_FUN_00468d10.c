
/* ==== FUN_00468d10 @ 00468d10 ==== 
 * signature: undefined4 __cdecl FUN_00468d10(byte * param_1, char * param_2, char * param_3)
 * body: 00468d10-00468e72
 */

undefined4 __cdecl FUN_00468d10(byte *param_1,char *param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pbVar3 = param_1;
  local_c = 0;
LAB_00468d21:
  if (DAT_0071222c <= local_c) {
    return 0;
  }
  puVar4 = (undefined4 *)FUN_00468530(&DAT_00712224,&local_8);
  param_1 = (byte *)*puVar4;
  iVar10 = local_c;
  if (0 < local_c) {
    do {
      FUN_00448fd0(&param_1,&local_4);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = FUN_00468f60(*(undefined4 *)(param_1 + 8));
  uVar6 = 0xffffffff;
  pbVar11 = pbVar3;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar11;
    pbVar11 = pbVar11 + 1;
  } while (bVar1 != 0);
  uVar8 = *(uint *)(iVar10 + 8);
  uVar7 = ~uVar6 - 1;
  uVar6 = uVar8;
  if (uVar7 <= uVar8) {
    uVar6 = uVar7;
  }
  bVar14 = false;
  iVar9 = 0;
  bVar15 = true;
  pbVar11 = *(byte **)(iVar10 + 4);
  pbVar12 = pbVar3;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar14 = *pbVar11 < *pbVar12;
    bVar15 = *pbVar11 == *pbVar12;
    pbVar11 = pbVar11 + 1;
    pbVar12 = pbVar12 + 1;
  } while (bVar15);
  if (!bVar15) {
    iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
  }
  if (((iVar9 != 0) || (uVar8 < uVar7)) || (uVar8 != uVar7)) {
    local_c = local_c + 1;
    goto LAB_00468d21;
  }
  param_1 = (byte *)*DAT_00712228;
  iVar10 = local_c;
  if (0 < local_c) {
    do {
      FUN_00448fd0(&param_1,&local_4);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = FUN_00468f70(*(int *)(param_1 + 8));
  pcVar5 = *(char **)(iVar10 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  uVar6 = 0xffffffff;
  do {
    pcVar13 = pcVar5;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar5 = pcVar13 + -uVar6;
  pcVar13 = param_3;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  puVar4 = (undefined4 *)*DAT_00712228;
  if (0 < local_c) {
    do {
      puVar4 = (undefined4 *)*puVar4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  iVar10 = FUN_00468f80(puVar4[2]);
  pcVar5 = *(char **)(iVar10 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  uVar6 = 0xffffffff;
  do {
    pcVar13 = pcVar5;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar5 = pcVar13 + -uVar6;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *param_2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    param_2 = param_2 + 1;
  }
  return 1;
}


