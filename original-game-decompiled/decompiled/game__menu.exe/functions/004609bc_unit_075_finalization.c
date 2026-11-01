
/* ==== unit_075_finalization @ 004609bc ==== 
 * signature: undefined unit_075_finalization(void)
 * body: 004609bc-004609e0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_075_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac92c = _DAT_004ac92c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


