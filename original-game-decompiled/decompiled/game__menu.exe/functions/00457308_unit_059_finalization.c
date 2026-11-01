
/* ==== unit_059_finalization @ 00457308 ==== 
 * signature: undefined __register unit_059_finalization(void)
 * body: 00457308-00457352
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_059_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac8e0 = _DAT_004ac8e0 + 1;
  if (_DAT_004ac8e0 == 0) {
    FUN_0041b6f4(&PTR_TPicture_vmt_000_0041702c,(int)&PTR_TPersistent_vmt_000_00454aa4);
    FUN_00402f9c(DAT_004ac8e8);
    FUN_00402f9c(DAT_004ac8e4);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


