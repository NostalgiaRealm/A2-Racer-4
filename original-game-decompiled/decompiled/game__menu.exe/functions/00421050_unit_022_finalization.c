
/* ==== unit_022_finalization @ 00421050 ==== 
 * signature: undefined unit_022_finalization(void)
 * body: 00421050-00421074
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_022_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac724 = _DAT_004ac724 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


