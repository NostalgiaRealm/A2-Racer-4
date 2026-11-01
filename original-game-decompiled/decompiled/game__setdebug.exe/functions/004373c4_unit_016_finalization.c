
/* ==== unit_016_finalization @ 004373c4 ==== 
 * signature: undefined unit_016_finalization(void)
 * body: 004373c4-00437427
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
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004477bc = _DAT_004477bc + 1;
  if (_DAT_004477bc == 0) {
    FUN_00402d14(DAT_004477b8);
    FUN_00402d14(DAT_004477b4);
    FUN_00402d14(DAT_004477c0);
    FUN_00404260((VARIANTARG *)&DAT_00446784,&DAT_0040106c,0x12);
    FUN_004039b8((int *)&PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_00446770);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


