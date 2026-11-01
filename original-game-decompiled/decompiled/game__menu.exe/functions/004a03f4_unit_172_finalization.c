
/* ==== unit_172_finalization @ 004a03f4 ==== 
 * signature: undefined unit_172_finalization(void)
 * body: 004a03f4-004a0418
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_172_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad554 = _DAT_004ad554 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


