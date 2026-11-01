
/* ==== FUN_004e1060 @ 004e1060 ==== 
 * signature: bool __fastcall FUN_004e1060(int param_1)
 * body: 004e1060-004e10c0
 */

bool __fastcall FUN_004e1060(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  
  uVar3 = 0xffffffff;
  pcVar7 = PTR_DAT_005b7628;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar4 = ~uVar3 - 1;
  uVar3 = uVar2;
  if (uVar4 <= uVar2) {
    uVar3 = uVar4;
  }
  bVar9 = false;
  uVar5 = 0;
  bVar10 = true;
  pbVar6 = *(byte **)(param_1 + 0x10);
  pbVar8 = PTR_DAT_005b7628;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar9 = *pbVar6 < *pbVar8;
    bVar10 = *pbVar6 == *pbVar8;
    pbVar6 = pbVar6 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar10);
  if (!bVar10) {
    uVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
  }
  if (uVar5 == 0) {
    if (uVar2 < uVar4) {
      return false;
    }
    uVar5 = (uint)(uVar2 != uVar4);
  }
  return uVar5 == 0;
}


