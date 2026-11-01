
/* ==== unit_058_finalization @ 004549c0 ==== 
 * signature: undefined unit_058_finalization(void)
 * body: 004549c0-004549e4
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_058_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac8dc = _DAT_004ac8dc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


