
/* ==== unit_014_finalization @ 0041dd6c ==== 
 * signature: undefined __register unit_014_finalization(void)
 * body: 0041dd6c-0041dd90
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_014_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004476e4 = _DAT_004476e4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


