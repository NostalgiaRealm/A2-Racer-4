
/* ==== unit_026_finalization @ 0044e4ac ==== 
 * signature: undefined unit_026_finalization(void)
 * body: 0044e4ac-0044e4f4
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_026_finalization(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac7dc = _DAT_004ac7dc + 1;
  if (_DAT_004ac7dc == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_004ac7d4 != 0) {
      FUN_00444254();
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    if (DAT_004ac7ec != (HANDLE)0x0) {
      CloseHandle(DAT_004ac7ec);
    }
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


