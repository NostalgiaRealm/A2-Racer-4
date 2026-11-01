
/* ==== unit_145_finalization @ 0049ecd8 ==== 
 * signature: undefined unit_145_finalization(void)
 * body: 0049ecd8-0049ecfc
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_145_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad540 = _DAT_004ad540 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


