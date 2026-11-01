
/* ==== unit_006_finalization @ 004203a0 ==== 
 * signature: undefined unit_006_finalization(void)
 * body: 004203a0-004203c4
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_006_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac6b4 = _DAT_004ac6b4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


