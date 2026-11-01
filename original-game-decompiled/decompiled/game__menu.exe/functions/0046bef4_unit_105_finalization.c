
/* ==== unit_105_finalization @ 0046bef4 ==== 
 * signature: undefined unit_105_finalization(void)
 * body: 0046bef4-0046bf2e
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_105_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad1a0 = _DAT_004ad1a0 + 1;
  if (_DAT_004ad1a0 == 0) {
    FUN_00405860((int *)&DAT_004ad19c);
    FUN_00405860(&DAT_004ad198);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


