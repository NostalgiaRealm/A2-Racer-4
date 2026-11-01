
/* ==== unit_120_finalization @ 004909fc ==== 
 * signature: undefined unit_120_finalization(void)
 * body: 004909fc-00490a37
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_120_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad4a4 = _DAT_004ad4a4 + 1;
  if (_DAT_004ad4a4 == 0) {
    FUN_00404578((VARIANTARG *)&PTR_DAT_004ab540,&DAT_004010d8,2);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


