
/* ==== unit_077_finalization @ 0046183c ==== 
 * signature: undefined unit_077_finalization(void)
 * body: 0046183c-0046187c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_077_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac934 = _DAT_004ac934 + 1;
  if (_DAT_004ac934 == 0) {
    FUN_004617f4();
    FUN_00404578((VARIANTARG *)&DAT_004aacbc,"\x0e\x17TDirectDrawErrorMessage\b",0x6e);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


