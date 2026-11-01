
/* ==== unit_010_finalization @ 0040d2c4 ==== 
 * signature: undefined __register unit_010_finalization(void)
 * body: 0040d2c4-0040d309
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
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0044760c = _DAT_0044760c + 1;
  if (_DAT_0044760c == 0) {
    FUN_004039b8((int *)&PTR_DAT_004462f0);
    FUN_00404260((VARIANTARG *)&PTR_s_False_004462e8,&DAT_0040106c,2);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


