
/* ==== unit_127_finalization @ 0048d7c4 ==== 
 * signature: undefined unit_127_finalization(void)
 * body: 0048d7c4-0048d7e8
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_127_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad444 = _DAT_004ad444 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


