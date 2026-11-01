
/* ==== unit_181_finalization @ 00462bb4 ==== 
 * signature: undefined unit_181_finalization(void)
 * body: 00462bb4-00462bd8
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_181_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad158 = _DAT_004ad158 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


