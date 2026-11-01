
/* ==== unit_148_finalization @ 004926e4 ==== 
 * signature: undefined unit_148_finalization(void)
 * body: 004926e4-00492708
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_148_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4c0 = _DAT_004ad4c0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


