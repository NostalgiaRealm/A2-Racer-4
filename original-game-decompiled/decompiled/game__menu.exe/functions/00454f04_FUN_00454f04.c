
/* ==== FUN_00454f04 @ 00454f04 ==== 
 * signature: int __register FUN_00454f04(int param_1, byte * param_2, int param_3)
 * body: 00454f04-0045502c
 */

int FUN_00454f04(int param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  HPALETTE pHVar5;
  int iVar6;
  PALETTEENTRY *pPVar7;
  int iVar8;
  PALETTEENTRY *pPVar9;
  byte bVar10;
  PALETTEENTRY local_818 [256];
  LOGPALETTE local_418 [128];
  int local_14;
  int local_10;
  byte *local_c;
  int local_8;
  
  bVar10 = 0;
  pbVar1 = param_2;
  iVar6 = param_3;
  iVar8 = param_3;
  if (-1 < param_3 + -1) {
    do {
      iVar8 = iVar8 + (uint)pbVar1[2] + (uint)pbVar1[1] + (uint)*pbVar1;
      iVar6 = iVar6 + -1;
      pbVar1 = pbVar1 + 4;
    } while (iVar6 != 0);
  }
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar6 = FUN_00410f08(*(int *)(param_1 + 4));
  if (-1 < iVar6 + -1) {
    local_14 = 0;
    do {
      iVar2 = FUN_00410f10(*(int *)(local_8 + 4),local_14);
      if (((iVar8 == *(int *)(iVar2 + 0xc)) && (*(int *)(iVar2 + 0x418) == local_10)) &&
         (uVar3 = FUN_00408298((int *)(iVar2 + 0x18),(int *)local_c,local_10 << 2),
         (char)uVar3 != '\0')) {
        FUN_00454e68(iVar2);
        return *(int *)(iVar2 + 0x10);
      }
      local_14 = local_14 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  piVar4 = TCollectionItem_vmt_018
                     ((int *)&PTR_TPersistent_vmt_000_00454d88,'\x01',*(int **)(local_8 + 4));
  piVar4[3] = iVar8;
  FUN_004028d8((undefined4 *)local_c,piVar4 + 6,local_10 << 2);
  piVar4[0x106] = local_10;
  local_418[0].palVersion = 0x300;
  local_418[0].palNumEntries = (WORD)local_10;
  FUN_00454d08((undefined4 *)local_c,(uint *)local_818);
  pPVar7 = local_818;
  pPVar9 = local_418[0].palPalEntry;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pPVar9 = *pPVar7;
    pPVar7 = pPVar7 + (uint)bVar10 * -2 + 1;
    pPVar9 = pPVar9 + (uint)bVar10 * -2 + 1;
  }
  pHVar5 = CreatePalette(local_418);
  piVar4[4] = (int)pHVar5;
  FUN_00454e68((int)piVar4);
  return piVar4[4];
}


