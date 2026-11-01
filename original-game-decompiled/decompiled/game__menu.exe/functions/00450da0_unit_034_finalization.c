
/* ==== unit_034_finalization @ 00450da0 ==== 
 * signature: undefined unit_034_finalization(void)
 * body: 00450da0-00450dc4
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_034_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac814 = _DAT_004ac814 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


