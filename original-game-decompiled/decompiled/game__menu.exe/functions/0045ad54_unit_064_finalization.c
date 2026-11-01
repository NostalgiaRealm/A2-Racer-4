
/* ==== unit_064_finalization @ 0045ad54 ==== 
 * signature: undefined __register unit_064_finalization(void)
 * body: 0045ad54-0045ad78
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_064_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac8fc = _DAT_004ac8fc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


