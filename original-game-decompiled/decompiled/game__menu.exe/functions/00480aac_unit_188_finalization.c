
/* ==== unit_188_finalization @ 00480aac ==== 
 * signature: undefined unit_188_finalization(void)
 * body: 00480aac-00480ad0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_188_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad2c0 = _DAT_004ad2c0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


