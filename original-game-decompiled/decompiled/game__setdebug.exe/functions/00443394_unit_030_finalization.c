
/* ==== unit_030_finalization @ 00443394 ==== 
 * signature: undefined __register unit_030_finalization(void)
 * body: 00443394-004433b8
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_030_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004477e8 = _DAT_004477e8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


