
/* ==== unit_061_finalization @ 004588cc ==== 
 * signature: undefined unit_061_finalization(void)
 * body: 004588cc-00458907
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_061_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac8f0 = _DAT_004ac8f0 + 1;
  if (_DAT_004ac8f0 == 0) {
    FUN_00404578((VARIANTARG *)&PTR_DAT_004aaca8,&DAT_004010d8,2);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


