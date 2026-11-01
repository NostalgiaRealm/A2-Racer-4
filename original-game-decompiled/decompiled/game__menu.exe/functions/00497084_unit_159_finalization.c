
/* ==== unit_159_finalization @ 00497084 ==== 
 * signature: undefined unit_159_finalization(void)
 * body: 00497084-004970a8
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_159_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4ec = _DAT_004ad4ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


