
/* ==== unit_013_finalization @ 00431284 ==== 
 * signature: undefined unit_013_finalization(void)
 * body: 00431284-004312a8
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_013_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004477b0 = _DAT_004477b0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


