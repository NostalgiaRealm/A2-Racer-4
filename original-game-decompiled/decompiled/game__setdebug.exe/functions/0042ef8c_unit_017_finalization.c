
/* ==== unit_017_finalization @ 0042ef8c ==== 
 * signature: undefined unit_017_finalization(void)
 * body: 0042ef8c-0042efd6
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
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00447744 = _DAT_00447744 + 1;
  if (_DAT_00447744 == 0) {
    FUN_00402d14(DAT_00447774);
    FUN_0042ee0c();
    FUN_00404260((VARIANTARG *)&DAT_00446634,"\x0e\x0eTIdentMapEntry\b",0x16);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


