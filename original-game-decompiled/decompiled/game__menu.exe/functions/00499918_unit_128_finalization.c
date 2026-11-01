
/* ==== unit_128_finalization @ 00499918 ==== 
 * signature: undefined __register unit_128_finalization(void)
 * body: 00499918-0049993c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_128_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad50c = _DAT_004ad50c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


