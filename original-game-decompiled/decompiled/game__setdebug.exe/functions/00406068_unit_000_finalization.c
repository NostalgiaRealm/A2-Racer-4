
/* ==== unit_000_finalization @ 00406068 ==== 
 * signature: undefined unit_000_finalization(void)
 * body: 00406068-0040608c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_000_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004474d8 = _DAT_004474d8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


