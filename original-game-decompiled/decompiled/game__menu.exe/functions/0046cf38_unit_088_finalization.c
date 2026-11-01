
/* ==== unit_088_finalization @ 0046cf38 ==== 
 * signature: undefined unit_088_finalization(void)
 * body: 0046cf38-0046cf5c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_088_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad1c0 = _DAT_004ad1c0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


