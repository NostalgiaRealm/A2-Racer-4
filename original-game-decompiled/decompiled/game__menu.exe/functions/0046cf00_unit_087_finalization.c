
/* ==== unit_087_finalization @ 0046cf00 ==== 
 * signature: undefined unit_087_finalization(void)
 * body: 0046cf00-0046cf24
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_087_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad1bc = _DAT_004ad1bc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


