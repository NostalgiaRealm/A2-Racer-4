
/* ==== unit_009_finalization @ 0040cda4 ==== 
 * signature: undefined unit_009_finalization(void)
 * body: 0040cda4-0040cdc8
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_009_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00447608 = _DAT_00447608 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


