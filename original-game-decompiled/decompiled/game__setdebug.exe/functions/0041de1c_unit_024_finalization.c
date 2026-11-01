
/* ==== unit_024_finalization @ 0041de1c ==== 
 * signature: undefined unit_024_finalization(void)
 * body: 0041de1c-0041de4c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_024_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004476f0 = _DAT_004476f0 + 1;
  if (_DAT_004476f0 == 0) {
    FUN_00402d14(DAT_00446608);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


