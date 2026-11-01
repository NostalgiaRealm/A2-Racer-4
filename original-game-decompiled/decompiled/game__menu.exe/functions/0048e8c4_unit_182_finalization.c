
/* ==== unit_182_finalization @ 0048e8c4 ==== 
 * signature: undefined unit_182_finalization(void)
 * body: 0048e8c4-0048e8e8
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_182_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad450 = _DAT_004ad450 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


