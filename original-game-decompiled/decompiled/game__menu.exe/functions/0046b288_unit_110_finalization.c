
/* ==== unit_110_finalization @ 0046b288 ==== 
 * signature: undefined unit_110_finalization(void)
 * body: 0046b288-0046b2ac
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_110_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad190 = _DAT_004ad190 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


