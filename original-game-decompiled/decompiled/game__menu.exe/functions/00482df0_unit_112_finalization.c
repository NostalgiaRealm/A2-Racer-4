
/* ==== unit_112_finalization @ 00482df0 ==== 
 * signature: undefined unit_112_finalization(void)
 * body: 00482df0-00482e14
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_112_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad2cc = _DAT_004ad2cc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


