
/* ==== unit_024_finalization @ 00420d2c ==== 
 * signature: undefined unit_024_finalization(void)
 * body: 00420d2c-00420d5c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_024_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac700 = _DAT_004ac700 + 1;
  if (_DAT_004ac700 == 0) {
    FUN_00402f9c(DAT_004aa62c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


