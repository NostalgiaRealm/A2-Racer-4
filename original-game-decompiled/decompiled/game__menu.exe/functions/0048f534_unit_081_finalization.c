
/* ==== unit_081_finalization @ 0048f534 ==== 
 * signature: undefined unit_081_finalization(void)
 * body: 0048f534-0048f55f
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_081_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad45c = _DAT_004ad45c + 1;
  if (_DAT_004ad45c == 0) {
    FUN_0048f49c();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


