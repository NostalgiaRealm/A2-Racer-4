
/* ==== unit_114_finalization @ 00489554 ==== 
 * signature: undefined unit_114_finalization(void)
 * body: 00489554-00489578
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_114_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad430 = _DAT_004ad430 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


