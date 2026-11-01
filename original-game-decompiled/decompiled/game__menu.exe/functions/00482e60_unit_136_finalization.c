
/* ==== unit_136_finalization @ 00482e60 ==== 
 * signature: undefined unit_136_finalization(void)
 * body: 00482e60-00482e84
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_136_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad2d4 = _DAT_004ad2d4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


