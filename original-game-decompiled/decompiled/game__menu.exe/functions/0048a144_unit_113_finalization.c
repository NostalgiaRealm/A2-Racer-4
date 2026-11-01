
/* ==== unit_113_finalization @ 0048a144 ==== 
 * signature: undefined unit_113_finalization(void)
 * body: 0048a144-0048a168
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_113_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad434 = _DAT_004ad434 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


