
/* ==== unit_020_finalization @ 004297fc ==== 
 * signature: undefined __register unit_020_finalization(void)
 * body: 004297fc-0042982c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_020_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac740 = _DAT_004ac740 + 1;
  if (_DAT_004ac740 == 0) {
    FUN_00402f9c(DAT_004ac744);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


