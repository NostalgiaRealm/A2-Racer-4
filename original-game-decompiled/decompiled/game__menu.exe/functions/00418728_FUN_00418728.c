
/* ==== FUN_00418728 @ 00418728 ==== 
 * signature: undefined4 __register FUN_00418728(int param_1)
 * body: 00418728-004187ad;004187b5-004187be
 */

undefined4 FUN_00418728(int param_1)

{
  HPEN pHVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  LOGPEN local_18;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_1c = (undefined1 *)0x418747;
    FUN_00417654(DAT_004ac6a0);
    pcStack_20 = thunk_FUN_004036bc;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    if (*(int *)(local_8 + 8) == 0) {
      local_18.lopnStyle = (UINT)*(ushort *)(&DAT_004aa598 + (uint)*(byte *)(local_8 + 0x1c) * 2);
      local_18.lopnWidth.x = *(LONG *)(local_8 + 0x18);
      puStack_1c = &stack0xfffffffc;
      local_18.lopnColor = FUN_00417d54(*(uint *)(local_8 + 0x14));
      pHVar1 = CreatePenIndirect(&local_18);
      *(HPEN *)(local_8 + 8) = pHVar1;
    }
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x4187b5;
    pcStack_20 = (code *)0x4187ad;
    uVar2 = FUN_00417660(DAT_004ac6a0);
    return uVar2;
  }
  return *(undefined4 *)(local_8 + 8);
}


