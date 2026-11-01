
/* ==== unit_018_finalization @ 0042fdf4 ==== 
 * signature: undefined __register unit_018_finalization(void)
 * body: 0042fdf4-0042fe18
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_018_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004477ac = _DAT_004477ac + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


