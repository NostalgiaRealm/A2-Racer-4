
/* ==== unit_026_finalization @ 00443320 ==== 
 * signature: undefined unit_026_finalization(void)
 * body: 00443320-00443368
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
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004477cc = _DAT_004477cc + 1;
  if (_DAT_004477cc == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_004477c4 != 0) {
      FUN_004398a4();
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    if (DAT_004477dc != (HANDLE)0x0) {
      CloseHandle(DAT_004477dc);
    }
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


