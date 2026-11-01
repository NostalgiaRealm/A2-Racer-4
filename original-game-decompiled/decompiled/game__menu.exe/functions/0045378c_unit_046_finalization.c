
/* ==== unit_046_finalization @ 0045378c ==== 
 * signature: undefined unit_046_finalization(void)
 * body: 0045378c-004537c7
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_046_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac88c = _DAT_004ac88c + 1;
  if (_DAT_004ac88c == 0) {
    FUN_00404578((VARIANTARG *)&PTR_DAT_004aab48,&DAT_004010d8,0x40);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


