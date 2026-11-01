
/* ==== unit_074_finalization @ 004a7188 ==== 
 * signature: undefined __register unit_074_finalization(void)
 * body: 004a7188-004a71ac
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_074_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad578 = _DAT_004ad578 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


