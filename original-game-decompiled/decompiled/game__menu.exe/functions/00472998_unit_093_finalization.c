
/* ==== unit_093_finalization @ 00472998 ==== 
 * signature: undefined __register unit_093_finalization(void)
 * body: 00472998-004729bc
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_093_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad1ec = _DAT_004ad1ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


