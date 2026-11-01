
/* ==== unit_008_initialization @ 0040c9e4 ==== 
 * signature: undefined __register unit_008_initialization(void)
 * body: 0040c9e4-0040ca4b
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
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_004475f4 == 0;
  _DAT_004475f4 = _DAT_004475f4 + -1;
  if (bVar1) {
    FUN_004037a4((int *)&DAT_0040bd0c);
    FUN_004037c0((int *)&DAT_0040bdf8);
    if (DAT_004474c9 != '\0') {
      FUN_00403a0c((int *)&PTR_DAT_00446128,(undefined4 *)FUN_0040ca60);
    }
    FUN_0040aff4();
    FUN_0040b66c();
    FUN_0040b12c();
    FUN_0040bac8();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


