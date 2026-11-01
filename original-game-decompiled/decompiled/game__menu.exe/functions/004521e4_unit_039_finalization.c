
/* ==== unit_039_finalization @ 004521e4 ==== 
 * signature: undefined __register unit_039_finalization(void)
 * body: 004521e4-0045220f
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_039_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac860 = _DAT_004ac860 + 1;
  if (_DAT_004ac860 == 0) {
    FUN_004521d8();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


