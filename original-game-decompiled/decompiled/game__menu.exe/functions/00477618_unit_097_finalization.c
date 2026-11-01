
/* ==== unit_097_finalization @ 00477618 ==== 
 * signature: undefined unit_097_finalization(void)
 * body: 00477618-0047763c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_097_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad2ac = _DAT_004ad2ac + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


