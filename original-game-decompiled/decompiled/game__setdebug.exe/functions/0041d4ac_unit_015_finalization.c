
/* ==== unit_015_finalization @ 0041d4ac ==== 
 * signature: undefined unit_015_finalization(void)
 * body: 0041d4ac-0041d4d0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_015_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004476a8 = _DAT_004476a8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


