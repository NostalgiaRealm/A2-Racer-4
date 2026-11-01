
/* ==== unit_142_finalization @ 00496b90 ==== 
 * signature: undefined unit_142_finalization(void)
 * body: 00496b90-00496bb4
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_142_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4e4 = _DAT_004ad4e4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


