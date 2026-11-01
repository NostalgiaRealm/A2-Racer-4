
/* ==== unit_094_finalization @ 00472f70 ==== 
 * signature: undefined unit_094_finalization(void)
 * body: 00472f70-00472f94
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_094_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad1f0 = _DAT_004ad1f0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


