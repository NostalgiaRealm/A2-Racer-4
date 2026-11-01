
/* ==== unit_038_finalization @ 00451c1c ==== 
 * signature: undefined unit_038_finalization(void)
 * body: 00451c1c-00451c40
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_038_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac858 = _DAT_004ac858 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


