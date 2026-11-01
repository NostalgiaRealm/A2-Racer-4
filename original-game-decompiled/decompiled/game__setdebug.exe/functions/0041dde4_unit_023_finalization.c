
/* ==== unit_023_finalization @ 0041dde4 ==== 
 * signature: undefined __register unit_023_finalization(void)
 * body: 0041dde4-0041de08
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_023_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004476ec = _DAT_004476ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


