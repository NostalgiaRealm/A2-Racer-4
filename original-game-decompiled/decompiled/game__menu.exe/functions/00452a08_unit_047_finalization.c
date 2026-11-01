
/* ==== unit_047_finalization @ 00452a08 ==== 
 * signature: undefined __register unit_047_finalization(void)
 * body: 00452a08-00452a2c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_047_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac878 = _DAT_004ac878 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


