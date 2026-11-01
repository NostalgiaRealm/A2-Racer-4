
/* ==== unit_032_finalization @ 00450cf8 ==== 
 * signature: undefined unit_032_finalization(void)
 * body: 00450cf8-00450d1c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_032_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac808 = _DAT_004ac808 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


