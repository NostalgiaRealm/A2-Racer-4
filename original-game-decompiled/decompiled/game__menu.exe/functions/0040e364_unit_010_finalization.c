
/* ==== unit_010_finalization @ 0040e364 ==== 
 * signature: undefined __register unit_010_finalization(void)
 * body: 0040e364-0040e3a9
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_010_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac614 = _DAT_004ac614 + 1;
  if (_DAT_004ac614 == 0) {
    FUN_00403c5c((int *)&PTR_DAT_004aa314);
    FUN_00404578((VARIANTARG *)&PTR_s_False_004aa30c,&DAT_004010d8,2);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


