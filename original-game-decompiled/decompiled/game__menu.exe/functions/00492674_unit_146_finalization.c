
/* ==== unit_146_finalization @ 00492674 ==== 
 * signature: undefined unit_146_finalization(void)
 * body: 00492674-00492698
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_146_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4b8 = _DAT_004ad4b8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


