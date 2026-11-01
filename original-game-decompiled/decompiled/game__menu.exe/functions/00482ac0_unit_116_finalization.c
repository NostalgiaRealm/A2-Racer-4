
/* ==== unit_116_finalization @ 00482ac0 ==== 
 * signature: undefined unit_116_finalization(void)
 * body: 00482ac0-00482ae4
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_116_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad2c8 = _DAT_004ad2c8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


