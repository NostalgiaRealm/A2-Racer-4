
/* ==== unit_004_finalization @ 00406b64 ==== 
 * signature: undefined unit_004_finalization(void)
 * body: 00406b64-00406b88
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_004_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004474e4 = _DAT_004474e4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


