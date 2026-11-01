
/* ==== unit_079_finalization @ 004618d4 ==== 
 * signature: undefined unit_079_finalization(void)
 * body: 004618d4-0046190e
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_079_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad140 = _DAT_004ad140 + 1;
  if (_DAT_004ad140 == 0) {
    FUN_00402f9c(DAT_004ad144);
    FUN_00402f9c(DAT_004ad148);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


