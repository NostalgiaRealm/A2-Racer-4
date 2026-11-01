
/* ==== unit_069_finalization @ 0045e0dc ==== 
 * signature: undefined unit_069_finalization(void)
 * body: 0045e0dc-0045e100
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_069_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac910 = _DAT_004ac910 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


