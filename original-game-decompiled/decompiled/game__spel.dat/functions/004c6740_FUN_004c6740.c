
/* ==== FUN_004c6740 @ 004c6740 ==== 
 * signature: undefined4 __stdcall FUN_004c6740(undefined4 * param_1, char * param_2, char * param_3)
 * body: 004c6740-004c6859
 */

undefined4 FUN_004c6740(undefined4 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  iVar2 = FUN_004c6720();
  if (iVar2 == -1) {
    return 0;
  }
  FUN_004c3fa0((byte *)s__s___s_005b4ee4);
  uVar5 = 0xffffffff;
  iVar7 = iVar2 * 0xd8;
  do {
    pcVar4 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar4 + -uVar5;
  pcVar9 = (char *)(iVar7 + 0x10 + DAT_00740930);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar4 = param_3;
  do {
    pcVar9 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar9 + -uVar5;
  pcVar9 = (char *)(iVar7 + 0x74 + DAT_00740930);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar3 = __strcmpi(param_3,s_SB16_VXD_005b4ed8);
  if (iVar3 == 0) {
    FUN_004c3fa0((byte *)s_sb16_driver_found__d_005b4ec0);
    DAT_005b4c40 = iVar2;
  }
  pcVar4 = _strrchr(param_3,0x2e);
  if (pcVar4 != (char *)0x0) {
    iVar3 = __strcmpi(pcVar4,&DAT_005b4eb8);
    if (iVar3 == 0) {
      FUN_004c3fa0((byte *)s_secondary_driver_found__d_005b4e9c);
      DAT_005b4c44 = iVar2;
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)(iVar7 + DAT_00740930);
    *puVar8 = *param_1;
    puVar8[1] = param_1[1];
    puVar8[2] = param_1[2];
    puVar8[3] = param_1[3];
  }
  return 1;
}


