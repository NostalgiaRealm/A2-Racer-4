
/* ==== unit_103_finalization @ 00468e60 ==== 
 * signature: undefined __register unit_103_finalization(void)
 * body: 00468e60-00468e84
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_103_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad17c = _DAT_004ad17c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


