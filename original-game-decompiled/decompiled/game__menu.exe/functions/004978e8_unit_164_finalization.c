
/* ==== unit_164_finalization @ 004978e8 ==== 
 * signature: undefined unit_164_finalization(void)
 * body: 004978e8-0049790c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_164_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad500 = _DAT_004ad500 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


