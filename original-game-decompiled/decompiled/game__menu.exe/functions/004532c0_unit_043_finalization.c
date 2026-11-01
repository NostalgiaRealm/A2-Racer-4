
/* ==== unit_043_finalization @ 004532c0 ==== 
 * signature: undefined unit_043_finalization(void)
 * body: 004532c0-004532f0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_043_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac880 = _DAT_004ac880 + 1;
  if (_DAT_004ac880 == 0) {
    FUN_00405860((int *)&DAT_004ac884);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


