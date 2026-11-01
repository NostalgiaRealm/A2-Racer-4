
/* ==== unit_013_finalization @ 0043b964 ==== 
 * signature: undefined unit_013_finalization(void)
 * body: 0043b964-0043b988
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_013_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac7c0 = _DAT_004ac7c0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


