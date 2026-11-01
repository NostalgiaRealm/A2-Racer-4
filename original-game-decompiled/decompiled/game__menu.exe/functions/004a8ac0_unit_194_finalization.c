
/* ==== unit_194_finalization @ 004a8ac0 ==== 
 * signature: undefined unit_194_finalization(void)
 * body: 004a8ac0-004a8af0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_194_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad588 = _DAT_004ad588 + 1;
  if (_DAT_004ad588 == 0) {
    FUN_00403c5c(&DAT_004ab5c8);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


