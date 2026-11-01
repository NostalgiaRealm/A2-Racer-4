
/* ==== unit_090_finalization @ 0046e6b8 ==== 
 * signature: undefined __register unit_090_finalization(void)
 * body: 0046e6b8-0046e70c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_090_finalization(void)

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
  _DAT_004ad1c8 = _DAT_004ad1c8 + 1;
  if (_DAT_004ad1c8 == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_004ad1cc != (HWND)0x0) {
      SendMessageA(DAT_004ad1cc,0x10,0,0);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    if (DAT_004ad1d0 != (HMODULE)0x0) {
      FreeLibrary(DAT_004ad1d0);
    }
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


