
/* ==== unit_143_finalization @ 0049dde0 ==== 
 * signature: undefined __register unit_143_finalization(void)
 * body: 0049dde0-0049de04
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_143_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad538 = _DAT_004ad538 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


