
/* ==== unit_072_initialization @ 0045ffbc ==== 
 * signature: undefined unit_072_initialization(void)
 * body: 0045ffbc-0045fff4
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_072_initialization(void)

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
  bVar1 = _DAT_004ac920 == 0;
  _DAT_004ac920 = _DAT_004ac920 + -1;
  if (bVar1) {
    FUN_00403c5c(&DAT_004ac91c);
    DAT_004ac924 = 0;
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


