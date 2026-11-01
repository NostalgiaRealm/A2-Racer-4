
/* ==== unit_037_finalization @ 004518fc ==== 
 * signature: undefined unit_037_finalization(void)
 * body: 004518fc-0045194d
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_037_finalization(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac820 = _DAT_004ac820 + 1;
  if (_DAT_004ac820 == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_004aaa80 != 0) {
      GlobalDeleteAtom(DAT_004aaa80);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    FUN_00404578((VARIANTARG *)&PTR_DAT_004aaaac,&DAT_004010d8,0xb);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


