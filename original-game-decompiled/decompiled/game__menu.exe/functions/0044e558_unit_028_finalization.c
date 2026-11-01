
/* ==== unit_028_finalization @ 0044e558 ==== 
 * signature: undefined unit_028_finalization(void)
 * body: 0044e558-0044e57c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_028_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac7fc = _DAT_004ac7fc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


