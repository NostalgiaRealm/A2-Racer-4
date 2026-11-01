
/* ==== unit_156_finalization @ 00494d5c ==== 
 * signature: undefined __register unit_156_finalization(void)
 * body: 00494d5c-00494d80
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_156_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4dc = _DAT_004ad4dc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


