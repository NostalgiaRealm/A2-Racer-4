
/* ==== unit_095_finalization @ 00465c7c ==== 
 * signature: undefined __register unit_095_finalization(void)
 * body: 00465c7c-00465ca0
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_095_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad174 = _DAT_004ad174 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


