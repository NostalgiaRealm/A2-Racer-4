
/* ==== FUN_0049d7d0 @ 0049d7d0 ==== 
 * signature: uint __fastcall FUN_0049d7d0(int param_1)
 * body: 0049d7d0-0049d836
 */

uint __fastcall FUN_0049d7d0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  
  uVar2 = *(uint *)(param_1 + 4);
  if ((-1 < (int)uVar2) && (uVar2 = *(uint *)(param_1 + 8), 0 < (int)uVar2)) {
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_00712860;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar2 = *(uint *)(param_1 + 0x24);
    uVar4 = ~uVar3 - 1;
    uVar3 = uVar2;
    if (uVar4 <= uVar2) {
      uVar3 = uVar4;
    }
    bVar9 = false;
    iVar5 = 0;
    bVar10 = true;
    pbVar6 = *(byte **)(param_1 + 0x20);
    pbVar8 = &DAT_00712860;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar9 = *pbVar6 < *pbVar8;
      bVar10 = *pbVar6 == *pbVar8;
      pbVar6 = pbVar6 + 1;
      pbVar8 = pbVar8 + 1;
    } while (bVar10);
    if (!bVar10) {
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    }
    if ((((iVar5 != 0) || (uVar2 < uVar4)) || (uVar2 != uVar4)) &&
       (uVar2 = 0, *(int *)(param_1 + 0x18) != 0)) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x18) >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


