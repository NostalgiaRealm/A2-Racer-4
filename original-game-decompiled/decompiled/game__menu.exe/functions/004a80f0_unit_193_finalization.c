
/* ==== unit_193_finalization @ 004a80f0 ==== 
 * signature: undefined unit_193_finalization(void)
 * body: 004a80f0-004a8114
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_193_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad584 = _DAT_004ad584 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


