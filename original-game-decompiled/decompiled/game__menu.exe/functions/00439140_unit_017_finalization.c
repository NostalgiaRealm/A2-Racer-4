
/* ==== unit_017_finalization @ 00439140 ==== 
 * signature: undefined unit_017_finalization(void)
 * body: 00439140-0043918a
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_017_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac754 = _DAT_004ac754 + 1;
  if (_DAT_004ac754 == 0) {
    FUN_00402f9c(DAT_004ac784);
    FUN_00438fc0();
    FUN_00404578((VARIANTARG *)&DAT_004aa708,"\x0e\x0eTIdentMapEntry\b",0x16);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


