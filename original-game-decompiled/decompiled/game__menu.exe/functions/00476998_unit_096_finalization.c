
/* ==== unit_096_finalization @ 00476998 ==== 
 * signature: undefined unit_096_finalization(void)
 * body: 00476998-004769c3
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_096_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad1f4 = _DAT_004ad1f4 + 1;
  if (_DAT_004ad1f4 == 0) {
    FUN_0047697c();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


