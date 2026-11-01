
/* ==== unit_091_finalization @ 00471a58 ==== 
 * signature: undefined unit_091_finalization(void)
 * body: 00471a58-00471a7c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_091_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad1e4 = _DAT_004ad1e4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


