
/* ==== unit_119_finalization @ 004909ac ==== 
 * signature: undefined unit_119_finalization(void)
 * body: 004909ac-004909d0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_119_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4a0 = _DAT_004ad4a0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


