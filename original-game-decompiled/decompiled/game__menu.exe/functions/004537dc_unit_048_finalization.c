
/* ==== unit_048_finalization @ 004537dc ==== 
 * signature: undefined unit_048_finalization(void)
 * body: 004537dc-00453800
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_048_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac890 = _DAT_004ac890 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


