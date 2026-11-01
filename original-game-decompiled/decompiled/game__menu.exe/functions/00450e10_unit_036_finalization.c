
/* ==== unit_036_finalization @ 00450e10 ==== 
 * signature: undefined unit_036_finalization(void)
 * body: 00450e10-00450e34
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_036_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac81c = _DAT_004ac81c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


