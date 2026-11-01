
/* ==== unit_132_finalization @ 0048ec08 ==== 
 * signature: undefined unit_132_finalization(void)
 * body: 0048ec08-0048ec2c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_132_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad454 = _DAT_004ad454 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


