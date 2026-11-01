
/* ==== unit_044_finalization @ 00453334 ==== 
 * signature: undefined unit_044_finalization(void)
 * body: 00453334-00453358
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_044_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac888 = _DAT_004ac888 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


