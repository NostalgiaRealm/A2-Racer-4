
/* ==== unit_178_finalization @ 004a4b30 ==== 
 * signature: undefined __register unit_178_finalization(void)
 * body: 004a4b30-004a4b54
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_178_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad56c = _DAT_004ad56c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


