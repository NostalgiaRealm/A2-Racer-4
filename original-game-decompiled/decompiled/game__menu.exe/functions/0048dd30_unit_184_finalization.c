
/* ==== unit_184_finalization @ 0048dd30 ==== 
 * signature: undefined unit_184_finalization(void)
 * body: 0048dd30-0048dd54
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_184_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad448 = _DAT_004ad448 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


