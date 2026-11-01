
/* ==== unit_033_finalization @ 00450cc0 ==== 
 * signature: undefined unit_033_finalization(void)
 * body: 00450cc0-00450ce4
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_033_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac804 = _DAT_004ac804 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


