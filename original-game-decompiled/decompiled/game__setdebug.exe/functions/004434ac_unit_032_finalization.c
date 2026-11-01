
/* ==== unit_032_finalization @ 004434ac ==== 
 * signature: undefined unit_032_finalization(void)
 * body: 004434ac-004434d0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_032_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004477fc = _DAT_004477fc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


