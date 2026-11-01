
/* ==== unit_151_finalization @ 00492d30 ==== 
 * signature: undefined unit_151_finalization(void)
 * body: 00492d30-00492d54
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_151_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4cc = _DAT_004ad4cc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


