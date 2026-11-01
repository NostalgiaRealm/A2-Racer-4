
/* ==== unit_018_finalization @ 00439fe4 ==== 
 * signature: undefined __register unit_018_finalization(void)
 * body: 00439fe4-0043a008
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
  _DAT_004ac7bc = _DAT_004ac7bc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


