
/* ==== FUN_004ccf60 @ 004ccf60 ==== 
 * signature: undefined4 __stdcall FUN_004ccf60(undefined4 * param_1, char * param_2, byte * param_3)
 * body: 004ccf60-004cd14f
 */

undefined4 FUN_004ccf60(undefined4 *param_1,char *param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  uint local_40 [16];
  
  iVar3 = FUN_004cce80();
  if (iVar3 == -1) {
    return 0;
  }
  _strncpy((char *)local_40,(char *)param_3,0x3f);
  FUN_005690b0(local_40);
  FUN_004c3fa0((byte *)s__s___s_005b4ee4);
  uVar7 = 0xffffffff;
  iVar9 = iVar3 * 0xd8;
  do {
    pcVar6 = param_2;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar6 = pcVar6 + -uVar7;
  pcVar12 = (char *)(DAT_00740db0 + 0x10 + iVar9);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar12 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar7 = 0xffffffff;
  pbVar11 = param_3;
  do {
    pbVar13 = pbVar11;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pbVar13 = pbVar11 + 1;
    bVar2 = *pbVar11;
    pbVar11 = pbVar13;
  } while (bVar2 != 0);
  uVar7 = ~uVar7;
  pbVar11 = pbVar13 + -uVar7;
  pbVar13 = (byte *)(DAT_00740db0 + 0x74 + iVar9);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    pbVar13 = pbVar13 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar13 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    pbVar13 = pbVar13 + 1;
  }
  puVar4 = FUN_00558f30(local_40,&DAT_005b6458);
  if (puVar4 != (uint *)0x0) {
    FUN_004c3fa0((byte *)s_3dfx_driver_found__d_005b6440);
    DAT_005b60bc = iVar3;
  }
  iVar5 = FUN_00567c10(param_3,s_DD3Dfx_005b6438,(void *)0x6);
  if (iVar5 == 0) {
    FUN_004c3fa0((byte *)s_dd3ddfx_driver_found__d_005b641c);
    DAT_005b60bc = iVar3;
  }
  iVar5 = FUN_00567c10(param_3,&DAT_005b6418,(void *)0x3);
  if (iVar5 == 0) {
    FUN_004c3fa0((byte *)s_Righteous_dd3ddfx_driver_found___005b63f4);
    DAT_005b60bc = iVar3;
  }
  iVar5 = FUN_00567c10(param_3,s_mnstr2_005b63ec,(void *)0x6);
  if (iVar5 == 0) {
    FUN_004c3fa0((byte *)s_Monster_2_driver_found__d_005b63d0);
    DAT_005b60bc = iVar3;
  }
  iVar5 = FUN_00567c10(param_3,s_display_005b63c8,(void *)0x6);
  if (iVar5 != 0) {
    iVar5 = __strcmpi((char *)param_3,&DAT_005b4eb8);
    if (iVar5 == 0) {
      FUN_004c3fa0((byte *)s_secondary_driver_found__d_005b4e9c);
      DAT_005b60b8 = iVar3;
    }
  }
  pcVar6 = _strrchr((char *)param_3,0x2e);
  if (pcVar6 != (char *)0x0) {
    iVar5 = __strcmpi((char *)param_3,&DAT_005b4eb8);
    if (iVar5 == 0) {
      FUN_004c3fa0((byte *)s_secondary_driver_found__d_005b4e9c);
      DAT_005b60b8 = iVar3;
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    puVar10 = (undefined4 *)(iVar9 + DAT_00740db0);
    *puVar10 = *param_1;
    puVar10[1] = param_1[1];
    puVar10[2] = param_1[2];
    puVar10[3] = param_1[3];
  }
  return 1;
}


