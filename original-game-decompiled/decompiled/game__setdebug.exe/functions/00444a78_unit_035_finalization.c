
/* ==== unit_035_finalization @ 00444a78 ==== 
 * signature: undefined unit_035_finalization(void)
 * body: 00444a78-00444ac9
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_035_finalization(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00447808 = _DAT_00447808 + 1;
  if (_DAT_00447808 == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_00446998 != 0) {
      GlobalDeleteAtom(DAT_00446998);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    FUN_00404260((VARIANTARG *)&PTR_DAT_004469c4,&DAT_0040106c,0xb);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


