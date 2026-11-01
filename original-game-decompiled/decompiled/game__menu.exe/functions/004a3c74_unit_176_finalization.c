
/* ==== unit_176_finalization @ 004a3c74 ==== 
 * signature: undefined __register unit_176_finalization(void)
 * body: 004a3c74-004a3c98
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_176_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad564 = _DAT_004ad564 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


