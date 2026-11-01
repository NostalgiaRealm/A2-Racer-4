
/* ==== unit_123_finalization @ 00487200 ==== 
 * signature: undefined unit_123_finalization(void)
 * body: 00487200-00487265
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_123_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad420 = _DAT_004ad420 + 1;
  if (_DAT_004ad420 == 0) {
    FUN_00404578((VARIANTARG *)&DAT_004ad404,&DAT_004010d8,7);
    FUN_00404578((VARIANTARG *)&DAT_004ad3e8,&DAT_004010d8,7);
    FUN_00404578((VARIANTARG *)&DAT_004ad348,&DAT_004010d8,0x28);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


