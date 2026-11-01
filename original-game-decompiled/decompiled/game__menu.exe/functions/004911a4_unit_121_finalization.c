
/* ==== unit_121_finalization @ 004911a4 ==== 
 * signature: undefined unit_121_finalization(void)
 * body: 004911a4-004911e9
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_121_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad4a8 = _DAT_004ad4a8 + 1;
  if (_DAT_004ad4a8 == 0) {
    FUN_00403c5c(&DAT_004ad4ac);
    FUN_00404578((VARIANTARG *)&PTR_DAT_004ab548,&DAT_004010d8,4);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


