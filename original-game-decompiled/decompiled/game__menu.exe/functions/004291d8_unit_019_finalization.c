
/* ==== unit_019_finalization @ 004291d8 ==== 
 * signature: undefined __register unit_019_finalization(void)
 * body: 004291d8-004291fc
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_019_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac738 = _DAT_004ac738 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


