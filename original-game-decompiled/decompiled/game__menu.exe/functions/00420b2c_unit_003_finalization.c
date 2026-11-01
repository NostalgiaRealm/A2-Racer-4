
/* ==== unit_003_finalization @ 00420b2c ==== 
 * signature: undefined unit_003_finalization(void)
 * body: 00420b2c-00420b50
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_003_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac6e0 = _DAT_004ac6e0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


