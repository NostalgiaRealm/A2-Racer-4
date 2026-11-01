
/* ==== unit_144_finalization @ 0049e118 ==== 
 * signature: undefined __register unit_144_finalization(void)
 * body: 0049e118-0049e13c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_144_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad53c = _DAT_004ad53c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


