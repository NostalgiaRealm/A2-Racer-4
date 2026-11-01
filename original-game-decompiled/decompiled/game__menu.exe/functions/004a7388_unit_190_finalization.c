
/* ==== unit_190_finalization @ 004a7388 ==== 
 * signature: undefined unit_190_finalization(void)
 * body: 004a7388-004a73ac
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_190_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad57c = _DAT_004ad57c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


