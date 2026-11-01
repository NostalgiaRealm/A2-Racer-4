
/* ==== unit_027_finalization @ 0044343c ==== 
 * signature: undefined unit_027_finalization(void)
 * body: 0044343c-00443460
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_027_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004477f4 = _DAT_004477f4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


