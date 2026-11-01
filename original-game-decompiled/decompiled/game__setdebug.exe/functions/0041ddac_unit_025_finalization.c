
/* ==== unit_025_finalization @ 0041ddac ==== 
 * signature: undefined __register unit_025_finalization(void)
 * body: 0041ddac-0041ddd0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_025_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004476e8 = _DAT_004476e8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


