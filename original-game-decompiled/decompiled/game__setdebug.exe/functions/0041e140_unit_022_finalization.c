
/* ==== unit_022_finalization @ 0041e140 ==== 
 * signature: undefined unit_022_finalization(void)
 * body: 0041e140-0041e164
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_022_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00447714 = _DAT_00447714 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


