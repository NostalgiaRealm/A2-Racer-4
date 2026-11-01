
/* ==== unit_147_finalization @ 004926ac ==== 
 * signature: undefined unit_147_finalization(void)
 * body: 004926ac-004926d0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_147_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4bc = _DAT_004ad4bc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


