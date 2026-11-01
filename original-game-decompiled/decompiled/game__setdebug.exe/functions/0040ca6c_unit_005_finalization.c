
/* ==== unit_005_finalization @ 0040ca6c ==== 
 * signature: undefined unit_005_finalization(void)
 * body: 0040ca6c-0040ca90
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_005_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00447604 = _DAT_00447604 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


