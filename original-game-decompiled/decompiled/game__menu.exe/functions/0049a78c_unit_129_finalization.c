
/* ==== unit_129_finalization @ 0049a78c ==== 
 * signature: undefined unit_129_finalization(void)
 * body: 0049a78c-0049a7b0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_129_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad510 = _DAT_004ad510 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


