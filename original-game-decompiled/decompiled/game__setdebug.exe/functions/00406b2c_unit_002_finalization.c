
/* ==== unit_002_finalization @ 00406b2c ==== 
 * signature: undefined unit_002_finalization(void)
 * body: 00406b2c-00406b50
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_002_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004474e0 = _DAT_004474e0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


