
/* ==== unit_152_finalization @ 0048cbf0 ==== 
 * signature: undefined unit_152_finalization(void)
 * body: 0048cbf0-0048cc14
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_152_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad440 = _DAT_004ad440 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


