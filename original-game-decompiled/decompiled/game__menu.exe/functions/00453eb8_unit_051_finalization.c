
/* ==== unit_051_finalization @ 00453eb8 ==== 
 * signature: undefined __register unit_051_finalization(void)
 * body: 00453eb8-00453edc
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_051_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac8c4 = _DAT_004ac8c4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


