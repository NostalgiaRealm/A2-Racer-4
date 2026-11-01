
/* ==== unit_004_finalization @ 00407278 ==== 
 * signature: undefined __register unit_004_finalization(void)
 * body: 00407278-0040729c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_004_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac4ec = _DAT_004ac4ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


