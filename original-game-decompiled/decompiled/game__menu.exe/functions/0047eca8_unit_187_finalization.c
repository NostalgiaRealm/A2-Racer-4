
/* ==== unit_187_finalization @ 0047eca8 ==== 
 * signature: undefined unit_187_finalization(void)
 * body: 0047eca8-0047eccc
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_187_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad2b8 = _DAT_004ad2b8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


