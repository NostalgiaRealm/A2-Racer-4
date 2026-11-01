
/* ==== unit_021_finalization @ 004299b4 ==== 
 * signature: undefined unit_021_finalization(void)
 * body: 004299b4-004299d8
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_021_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac748 = _DAT_004ac748 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


