
/* ==== unit_089_finalization @ 0046cf70 ==== 
 * signature: undefined unit_089_finalization(void)
 * body: 0046cf70-0046cf94
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_089_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad1c4 = _DAT_004ad1c4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


