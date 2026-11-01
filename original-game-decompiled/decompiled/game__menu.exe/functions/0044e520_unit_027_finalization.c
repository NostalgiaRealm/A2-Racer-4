
/* ==== unit_027_finalization @ 0044e520 ==== 
 * signature: undefined __register unit_027_finalization(void)
 * body: 0044e520-0044e544
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_027_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac7f8 = _DAT_004ac7f8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


