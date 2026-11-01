
/* ==== unit_001_finalization @ 00406384 ==== 
 * signature: undefined __register unit_001_finalization(void)
 * body: 00406384-004063e1
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
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac42c = _DAT_004ac42c + 1;
  if (_DAT_004ac42c == 0) {
    FUN_00405c24(&DAT_004ac050);
    FUN_00405c24(&DAT_004ac21c);
    FUN_00401bac();
    FUN_00405038((VARIANTARG *)&DAT_004ac414);
    FUN_00405038((VARIANTARG *)&DAT_004ac404);
    FUN_00405038((VARIANTARG *)&DAT_004ac3f4);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


