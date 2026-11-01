
/* ==== unit_161_finalization @ 004974fc ==== 
 * signature: undefined unit_161_finalization(void)
 * body: 004974fc-00497520
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_161_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4f4 = _DAT_004ad4f4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


