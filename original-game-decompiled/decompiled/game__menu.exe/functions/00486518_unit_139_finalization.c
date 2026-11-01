
/* ==== unit_139_finalization @ 00486518 ==== 
 * signature: undefined __register unit_139_finalization(void)
 * body: 00486518-00486586
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_139_finalization(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad2dc = _DAT_004ad2dc + 1;
  if (_DAT_004ad2dc == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_004ad2e0 != (HMODULE)0x0) {
      FreeLibrary(DAT_004ad2e0);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    if (DAT_004ad2e4 != (HMODULE)0x0) {
      FreeLibrary(DAT_004ad2e4);
    }
    FUN_0040454c(0x4ab480,(int)&DAT_004840d8);
    FUN_0040454c(0x4ab474,(int)&DAT_004840d8);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


