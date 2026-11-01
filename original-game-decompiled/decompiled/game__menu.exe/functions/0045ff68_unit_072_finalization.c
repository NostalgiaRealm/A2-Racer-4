
/* ==== unit_072_finalization @ 0045ff68 ==== 
 * signature: undefined unit_072_finalization(void)
 * body: 0045ff68-0045ffb2
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_072_finalization(void)

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
  _DAT_004ac920 = _DAT_004ac920 + 1;
  if (_DAT_004ac920 == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_004ac924 != (int *)0x0) {
      FUN_00402f9c(DAT_004ac924);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    DAT_004ac924 = (int *)0x0;
    FUN_00403c5c(&DAT_004ac91c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


