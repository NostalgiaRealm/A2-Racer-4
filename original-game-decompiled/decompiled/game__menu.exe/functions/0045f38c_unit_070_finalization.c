
/* ==== unit_070_finalization @ 0045f38c ==== 
 * signature: undefined unit_070_finalization(void)
 * body: 0045f38c-0045f3b0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_070_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac914 = _DAT_004ac914 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


