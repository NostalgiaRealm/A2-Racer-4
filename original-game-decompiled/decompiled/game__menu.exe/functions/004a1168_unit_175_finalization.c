
/* ==== unit_175_finalization @ 004a1168 ==== 
 * signature: undefined unit_175_finalization(void)
 * body: 004a1168-004a118c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_175_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad560 = _DAT_004ad560 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


