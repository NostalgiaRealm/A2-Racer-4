
/* ==== unit_115_finalization @ 00481b44 ==== 
 * signature: undefined unit_115_finalization(void)
 * body: 00481b44-00481b68
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_115_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad2c4 = _DAT_004ad2c4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


