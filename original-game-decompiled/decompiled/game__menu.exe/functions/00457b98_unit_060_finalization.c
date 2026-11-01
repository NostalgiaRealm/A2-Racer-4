
/* ==== unit_060_finalization @ 00457b98 ==== 
 * signature: undefined unit_060_finalization(void)
 * body: 00457b98-00457bbc
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_060_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac8ec = _DAT_004ac8ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


