
/* ==== unit_185_finalization @ 0048c6c0 ==== 
 * signature: undefined unit_185_finalization(void)
 * body: 0048c6c0-0048c6e4
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_185_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad43c = _DAT_004ad43c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


