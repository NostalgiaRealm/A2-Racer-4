
/* ==== unit_131_finalization @ 0049b750 ==== 
 * signature: undefined __register unit_131_finalization(void)
 * body: 0049b750-0049b774
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_131_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad520 = _DAT_004ad520 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


