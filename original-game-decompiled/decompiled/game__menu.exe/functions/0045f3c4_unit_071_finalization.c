
/* ==== unit_071_finalization @ 0045f3c4 ==== 
 * signature: undefined unit_071_finalization(void)
 * body: 0045f3c4-0045f3e8
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_071_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac918 = _DAT_004ac918 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


