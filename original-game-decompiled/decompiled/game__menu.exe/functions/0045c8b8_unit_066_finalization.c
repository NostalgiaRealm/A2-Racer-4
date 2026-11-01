
/* ==== unit_066_finalization @ 0045c8b8 ==== 
 * signature: undefined unit_066_finalization(void)
 * body: 0045c8b8-0045c8ee
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_066_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac904 = _DAT_004ac904 + 1;
  if (_DAT_004ac904 == 0) {
    FUN_0041b6f4(&PTR_TPicture_vmt_000_0041702c,(int)&PTR_TPersistent_vmt_000_0045b71c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


