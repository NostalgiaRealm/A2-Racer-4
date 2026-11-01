
/* ==== unit_073_finalization @ 004605f4 ==== 
 * signature: undefined __register unit_073_finalization(void)
 * body: 004605f4-00460618
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_073_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac928 = _DAT_004ac928 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


