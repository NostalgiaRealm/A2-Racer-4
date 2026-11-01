
/* ==== unit_153_finalization @ 0049304c ==== 
 * signature: undefined unit_153_finalization(void)
 * body: 0049304c-00493070
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_153_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4d0 = _DAT_004ad4d0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


