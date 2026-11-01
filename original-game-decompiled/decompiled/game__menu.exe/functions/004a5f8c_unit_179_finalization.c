
/* ==== unit_179_finalization @ 004a5f8c ==== 
 * signature: undefined unit_179_finalization(void)
 * body: 004a5f8c-004a5fb0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_179_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad574 = _DAT_004ad574 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


