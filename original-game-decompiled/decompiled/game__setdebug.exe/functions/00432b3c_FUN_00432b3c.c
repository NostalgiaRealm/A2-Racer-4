
/* ==== FUN_00432b3c @ 00432b3c ==== 
 * signature: undefined __register FUN_00432b3c(int param_1, HMENU param_2, byte param_3)
 * body: 00432b3c-00432d96
 */

void FUN_00432b3c(int param_1,HMENU param_2,byte param_3)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  LPCSTR pCVar7;
  UINT_PTR uIDNewItem;
  uint uVar8;
  int *in_FS_OFFSET;
  byte bVar9;
  int iStack_68;
  int iStack_5c;
  code *pcStack_58;
  undefined1 *puStack_54;
  int local_44;
  MENUITEMINFOA local_3d;
  byte local_d;
  undefined *local_c;
  byte local_5;
  
  puStack_54 = &stack0xfffffffc;
  local_44 = 0;
  local_c = (undefined *)0x0;
  pcStack_58 = thunk_FUN_00403434;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  puVar1 = &stack0xfffffffc;
  local_5 = param_3;
  if (*(char *)(param_1 + 0x32) == '\0') goto LAB_00432d79;
  FUN_00403a50((int *)&local_c,*(int *)(param_1 + 0x24));
  iVar4 = FUN_00434938(param_1);
  if (iVar4 < 1) {
    if (*(short *)(param_1 + 0x54) != 0) {
      iVar4 = *(int *)(param_1 + 0x58);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) == 0)) {
        uVar5 = FUN_00402e8c(*(int **)(iVar4 + 4),(int)&PTR_TPersistent_vmt_000_00431b18);
        if ((char)uVar5 != '\0') goto LAB_00432bd8;
      }
      FUN_0043222c(*(ushort *)(param_1 + 0x54),&local_44);
      iStack_68 = local_44;
      FUN_00403cf8((int *)&local_c,3);
    }
  }
  else {
    local_3d.hSubMenu = (HMENU)FUN_00432fe8(param_1);
  }
LAB_00432bd8:
  DVar6 = GetVersion();
  uVar3 = (ushort)DVar6 & 0xff;
  bVar9 = uVar3 == 4;
  if (uVar3 < 4) {
    FUN_00403d48(*(uint **)(param_1 + 0x24),(uint *)&DAT_00432dbc);
    uVar8 = *(uint *)(&DAT_004467e8 + (bVar9 & 0x7f) * 4) |
            *(uint *)(&DAT_004467dc + (uint)*(byte *)(param_1 + 0x3c) * 4) |
            *(uint *)(&DAT_004467cc + (uint)*(byte *)(param_1 + 0x2c) * 4) |
            *(uint *)(&DAT_004467d4 + (uint)*(byte *)(param_1 + 0x2d) * 4);
    iVar4 = FUN_00434938(param_1);
    if (iVar4 < 1) {
      pCVar7 = FUN_00403dfc(local_c);
      InsertMenuA(param_2,0xffffffff,uVar8 | 0x400,(uint)*(ushort *)(param_1 + 0x44),pCVar7);
      puVar1 = puStack_54;
    }
    else {
      pCVar7 = FUN_00403dfc(*(undefined **)(param_1 + 0x24));
      uIDNewItem = FUN_00432fe8(param_1);
      InsertMenuA(param_2,0xffffffff,uVar8 | 0x410,uIDNewItem,pCVar7);
      puVar1 = puStack_54;
    }
    goto LAB_00432d79;
  }
  local_3d.cbSize = 0x2c;
  local_3d.fMask = 0x3f;
  iVar4 = thunk_FUN_00434ea8(param_1);
  if (iVar4 == 0) {
LAB_00432c18:
    if (*(int *)(param_1 + 0x40) != 0) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
      bVar9 = 1;
      if (cVar2 == '\0') goto LAB_00432c2e;
    }
    local_d = 0;
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
    if (*(char *)(iVar4 + 0x34) == '\0') {
      iVar4 = FUN_00434510(param_1);
      bVar9 = 0;
      if (iVar4 == 0) goto LAB_00432c18;
    }
LAB_00432c2e:
    local_d = 1;
  }
  FUN_00403d48(*(uint **)(param_1 + 0x24),(uint *)&DAT_00432dbc);
  local_3d.fType =
       *(uint *)(&DAT_0044681c + (bVar9 & 0x7f) * 4) |
       *(uint *)(&DAT_00446814 + (uint)*(byte *)(param_1 + 0x31) * 4) |
       *(uint *)(&DAT_004467f0 + (uint)*(byte *)(param_1 + 0x3c) * 4) |
       *(uint *)(&DAT_00446824 + (uint)local_5 * 4) | *(uint *)(&DAT_0044682c + (uint)local_d * 4);
  local_3d.fState =
       *(uint *)(&DAT_004467fc + (uint)*(byte *)(param_1 + 0x2c) * 4) |
       *(uint *)(&DAT_0044680c + (uint)*(byte *)(param_1 + 0x2d) * 4) |
       *(uint *)(&DAT_00446804 + (uint)*(byte *)(param_1 + 0x2e) * 4);
  local_3d.wID = (UINT)*(ushort *)(param_1 + 0x44);
  local_3d.hSubMenu = (HMENU)0x0;
  local_3d.hbmpChecked = (HBITMAP)0x0;
  local_3d.hbmpUnchecked = (HBITMAP)0x0;
  local_3d.dwTypeData = FUN_00403dfc(local_c);
  iVar4 = FUN_00434938(param_1);
  if (0 < iVar4) {
    local_3d.hSubMenu = (HMENU)FUN_00432fe8(param_1);
  }
  InsertMenuItemA(param_2,0xffffffff,-1,&local_3d);
  puVar1 = puStack_54;
LAB_00432d79:
  puStack_54 = puVar1;
  *in_FS_OFFSET = iStack_68;
  FUN_004039b8(&local_44);
  FUN_004039b8((int *)&local_c);
  return;
}


