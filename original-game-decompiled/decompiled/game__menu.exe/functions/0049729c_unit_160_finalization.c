
/* ==== unit_160_finalization @ 0049729c ==== 
 * signature: undefined unit_160_finalization(void)
 * body: 0049729c-004972c0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_160_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4f0 = _DAT_004ad4f0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


