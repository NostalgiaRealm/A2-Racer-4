
/* ==== unit_076_finalization @ 00460a44 ==== 
 * signature: undefined unit_076_finalization(void)
 * body: 00460a44-00460a68
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_076_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac930 = _DAT_004ac930 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


