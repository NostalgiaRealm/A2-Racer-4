
/* ==== unit_170_finalization @ 0049fc00 ==== 
 * signature: undefined unit_170_finalization(void)
 * body: 0049fc00-0049fc24
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_170_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad54c = _DAT_004ad54c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


