
/* ==== unit_053_finalization @ 00453f18 ==== 
 * signature: undefined __register unit_053_finalization(void)
 * body: 00453f18-00453f3c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_053_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac8c8 = _DAT_004ac8c8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


