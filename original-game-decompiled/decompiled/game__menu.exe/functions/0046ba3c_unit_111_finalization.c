
/* ==== unit_111_finalization @ 0046ba3c ==== 
 * signature: undefined unit_111_finalization(void)
 * body: 0046ba3c-0046ba60
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_111_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad194 = _DAT_004ad194 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


