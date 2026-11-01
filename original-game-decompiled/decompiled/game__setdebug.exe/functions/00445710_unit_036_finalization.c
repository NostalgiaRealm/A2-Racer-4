
/* ==== unit_036_finalization @ 00445710 ==== 
 * signature: undefined unit_036_finalization(void)
 * body: 00445710-0044574b
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_036_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00447840 = _DAT_00447840 + 1;
  if (_DAT_00447840 == 0) {
    FUN_00404260((VARIANTARG *)&PTR_DAT_00446a48,&DAT_0040106c,2);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


