
/* ==== unit_042_finalization @ 0045238c ==== 
 * signature: undefined __register unit_042_finalization(void)
 * body: 0045238c-004523b0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_042_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac870 = _DAT_004ac870 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


