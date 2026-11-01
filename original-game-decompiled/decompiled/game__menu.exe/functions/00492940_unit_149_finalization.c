
/* ==== unit_149_finalization @ 00492940 ==== 
 * signature: undefined unit_149_finalization(void)
 * body: 00492940-00492964
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_149_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4c4 = _DAT_004ad4c4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


