
/* ==== FUN_00416aa0 @ 00416aa0 ==== 
 * signature: undefined4 __register FUN_00416aa0(int param_1)
 * body: 00416aa0-00416b25;00416b2d-00416b36
 */

undefined4 FUN_00416aa0(int param_1)

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
    puStack_1c = (undefined1 *)0x416abf;
    FUN_004159cc(DAT_00447698);
    pcStack_20 = thunk_FUN_00403434;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    if (*(int *)(local_8 + 8) == 0) {
      local_18.lopnStyle = (UINT)*(ushort *)(&DAT_00446574 + (uint)*(byte *)(local_8 + 0x1c) * 2);
      local_18.lopnWidth.x = *(LONG *)(local_8 + 0x18);
      puStack_1c = &stack0xfffffffc;
      local_18.lopnColor = FUN_004160cc(*(uint *)(local_8 + 0x14));
      pHVar1 = CreatePenIndirect(&local_18);
      *(HPEN *)(local_8 + 8) = pHVar1;
    }
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x416b2d;
    pcStack_20 = (code *)0x416b25;
    uVar2 = FUN_004159d8(DAT_00447698);
    return uVar2;
  }
  return *(undefined4 *)(local_8 + 8);
}


