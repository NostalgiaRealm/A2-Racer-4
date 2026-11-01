
/* ==== unit_008_finalization @ 0040d594 ==== 
 * signature: undefined unit_008_finalization(void)
 * body: 0040d594-0040d6c9
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_008_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac5fc = _DAT_004ac5fc + 1;
  if (_DAT_004ac5fc == 0) {
    FUN_0040c968((undefined4 *)&DAT_004ac608);
    FUN_0040c798();
    FUN_0040bda8();
    FUN_00404578((VARIANTARG *)&PTR_DAT_004aa248,"\x0e\nTExceptRec\b",0x16);
    FUN_00404578((VARIANTARG *)&DAT_004aa210,"\x0e\tTErrorRec\b",7);
    FUN_00403c5c((int *)&PTR_DAT_004aa138);
    FUN_00404578((VARIANTARG *)&DAT_004ac5c0,&DAT_004010d8,7);
    FUN_00404578((VARIANTARG *)&DAT_004ac598,&DAT_004010d8,7);
    FUN_00404578((VARIANTARG *)&DAT_004ac57c,&DAT_004010d8,7);
    FUN_00404578((VARIANTARG *)&DAT_004ac54c,&DAT_004010d8,0xc);
    FUN_00404578((VARIANTARG *)&DAT_004ac51c,&DAT_004010d8,0xc);
    FUN_00403c5c(&DAT_004ac518);
    FUN_00403c5c(&DAT_004ac514);
    FUN_00403c5c(&DAT_004ac510);
    FUN_00403c5c(&DAT_004ac50c);
    FUN_00403c5c(&DAT_004ac504);
    FUN_00403c5c(&DAT_004ac500);
    FUN_00403c5c((int *)&DAT_004ac4f4);
    FUN_00403c5c((int *)&DAT_004aa0e0);
    FUN_00403c5c((int *)&DAT_004aa0cc);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


