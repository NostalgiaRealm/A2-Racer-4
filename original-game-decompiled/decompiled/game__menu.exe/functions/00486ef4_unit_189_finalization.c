
/* ==== unit_189_finalization @ 00486ef4 ==== 
 * signature: undefined unit_189_finalization(void)
 * body: 00486ef4-00486f3b
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_189_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad344 = _DAT_004ad344 + 1;
  if (_DAT_004ad344 == 0) {
    FUN_00402f9c(DAT_004ad2e8);
    DAT_004ad2e8 = (int *)0x0;
    FUN_0040454c(0x4ad2ec,(int)&DAT_0048659c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


