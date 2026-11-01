
/* ==== unit_012_finalization @ 0041fb88 ==== 
 * signature: undefined unit_012_finalization(void)
 * body: 0041fb88-0041fc50
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_012_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac654 = _DAT_004ac654 + 1;
  if (_DAT_004ac654 == 0) {
    FUN_00402f9c(DAT_004ac6ac);
    FUN_00402f9c(DAT_004aa5dc);
    FUN_00402f9c(DAT_004aa5d8);
    FUN_0041cbf4();
    FUN_00402f9c(DAT_004aa5e0);
    FUN_00402f9c(DAT_004ac6a8);
    FUN_00402f9c(DAT_004ac69c);
    FUN_00402f9c(DAT_004ac6a0);
    FUN_00402f9c(DAT_004ac6a4);
    DeleteObject(DAT_004ac650);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004ac66c);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004ac684);
    FUN_00404578((VARIANTARG *)&DAT_004aa4f8,"\x0e\x0eTIdentMapEntry\b",0x12);
    FUN_00404578((VARIANTARG *)&DAT_004aa3a8,"\x0e\x0eTIdentMapEntry\b",0x2a);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


