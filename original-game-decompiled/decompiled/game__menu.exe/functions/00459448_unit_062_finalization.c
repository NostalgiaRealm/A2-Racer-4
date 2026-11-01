
/* ==== unit_062_finalization @ 00459448 ==== 
 * signature: undefined unit_062_finalization(void)
 * body: 00459448-0045947e
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_062_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac8f4 = _DAT_004ac8f4 + 1;
  if (_DAT_004ac8f4 == 0) {
    FUN_0041b6f4(&PTR_TPicture_vmt_000_0041702c,(int)&PTR_TPersistent_vmt_000_00458968);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


