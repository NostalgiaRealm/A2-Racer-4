
/* ==== unit_135_finalization @ 0049d438 ==== 
 * signature: undefined __register unit_135_finalization(void)
 * body: 0049d438-0049d45c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_135_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad534 = _DAT_004ad534 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


