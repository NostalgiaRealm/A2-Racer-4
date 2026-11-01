
/* ==== unit_057_finalization @ 004544cc ==== 
 * signature: undefined unit_057_finalization(void)
 * body: 004544cc-004544f0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_057_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac8d8 = _DAT_004ac8d8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


