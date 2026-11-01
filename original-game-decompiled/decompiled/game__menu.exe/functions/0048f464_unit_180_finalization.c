
/* ==== unit_180_finalization @ 0048f464 ==== 
 * signature: undefined __register unit_180_finalization(void)
 * body: 0048f464-0048f488
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_180_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad458 = _DAT_004ad458 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


