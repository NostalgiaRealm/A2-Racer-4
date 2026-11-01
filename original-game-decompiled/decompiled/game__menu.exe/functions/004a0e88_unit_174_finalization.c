
/* ==== unit_174_finalization @ 004a0e88 ==== 
 * signature: undefined unit_174_finalization(void)
 * body: 004a0e88-004a0eac
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_174_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad55c = _DAT_004ad55c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


