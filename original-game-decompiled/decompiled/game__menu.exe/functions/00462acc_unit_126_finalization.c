
/* ==== unit_126_finalization @ 00462acc ==== 
 * signature: undefined unit_126_finalization(void)
 * body: 00462acc-00462af0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_126_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad154 = _DAT_004ad154 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


