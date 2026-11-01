
/* ==== unit_008_initialization @ 0040d6d4 ==== 
 * signature: undefined __register unit_008_initialization(void)
 * body: 0040d6d4-0040d73b
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_008_initialization(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_004ac5fc == 0;
  _DAT_004ac5fc = _DAT_004ac5fc + -1;
  if (bVar1) {
    FUN_00403a2c((int *)&DAT_0040c9fc);
    FUN_00403a48((int *)&DAT_0040cae8);
    if (DAT_004ac4d1 != '\0') {
      FUN_00403cb0((int *)&PTR_DAT_004aa138,(undefined4 *)&DAT_0040d750);
    }
    FUN_0040bcdc();
    FUN_0040c35c();
    FUN_0040be14();
    FUN_0040c7b8();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


