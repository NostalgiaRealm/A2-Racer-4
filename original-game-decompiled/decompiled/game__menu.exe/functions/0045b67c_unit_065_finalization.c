
/* ==== unit_065_finalization @ 0045b67c ==== 
 * signature: undefined unit_065_finalization(void)
 * body: 0045b67c-0045b6a0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_065_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac900 = _DAT_004ac900 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


