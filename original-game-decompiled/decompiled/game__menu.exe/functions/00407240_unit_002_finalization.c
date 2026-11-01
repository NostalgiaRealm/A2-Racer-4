
/* ==== unit_002_finalization @ 00407240 ==== 
 * signature: undefined unit_002_finalization(void)
 * body: 00407240-00407264
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_002_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac4e8 = _DAT_004ac4e8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


