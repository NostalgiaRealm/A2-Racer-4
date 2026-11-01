
/* ==== unit_067_finalization @ 0045d4c8 ==== 
 * signature: undefined unit_067_finalization(void)
 * body: 0045d4c8-0045d4ec
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_067_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac908 = _DAT_004ac908 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


