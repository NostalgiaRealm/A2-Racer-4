
/* ==== unit_150_finalization @ 00492b34 ==== 
 * signature: undefined unit_150_finalization(void)
 * body: 00492b34-00492b58
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_150_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4c8 = _DAT_004ad4c8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


