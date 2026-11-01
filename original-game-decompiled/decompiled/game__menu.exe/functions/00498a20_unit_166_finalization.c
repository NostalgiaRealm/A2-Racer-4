
/* ==== unit_166_finalization @ 00498a20 ==== 
 * signature: undefined unit_166_finalization(void)
 * body: 00498a20-00498a44
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_166_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad508 = _DAT_004ad508 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


