
/* ==== unit_016_finalization @ 00441b60 ==== 
 * signature: undefined unit_016_finalization(void)
 * body: 00441b60-00441bc3
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_016_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac7cc = _DAT_004ac7cc + 1;
  if (_DAT_004ac7cc == 0) {
    FUN_00402f9c(DAT_004ac7c8);
    FUN_00402f9c(DAT_004ac7c4);
    FUN_00402f9c(DAT_004ac7d0);
    FUN_00404578((VARIANTARG *)&DAT_004aa858,&DAT_004010d8,0x12);
    FUN_00403c5c((int *)&PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_004aa844);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


