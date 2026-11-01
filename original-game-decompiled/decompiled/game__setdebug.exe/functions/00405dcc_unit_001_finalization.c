
/* ==== unit_001_finalization @ 00405dcc ==== 
 * signature: undefined __register unit_001_finalization(void)
 * body: 00405dcc-00405e29
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_001_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00447424 = _DAT_00447424 + 1;
  if (_DAT_00447424 == 0) {
    FUN_0040566c(&DAT_00447048);
    FUN_0040566c(&DAT_00447214);
    FUN_00401ae8();
    FUN_00404ac8((VARIANTARG *)&DAT_0044740c);
    FUN_00404ac8((VARIANTARG *)&DAT_004473fc);
    FUN_00404ac8((VARIANTARG *)&DAT_004473ec);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


