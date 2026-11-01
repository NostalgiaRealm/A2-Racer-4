
/* ==== unit_134_finalization @ 0049cc1c ==== 
 * signature: undefined __register unit_134_finalization(void)
 * body: 0049cc1c-0049cc40
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_134_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad528 = _DAT_004ad528 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


