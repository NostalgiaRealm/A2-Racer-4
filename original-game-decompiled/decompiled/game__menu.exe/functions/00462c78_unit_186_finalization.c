
/* ==== unit_186_finalization @ 00462c78 ==== 
 * signature: undefined __register unit_186_finalization(void)
 * body: 00462c78-00462c9c
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_186_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad15c = _DAT_004ad15c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


