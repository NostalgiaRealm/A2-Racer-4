
/* ==== unit_037_finalization @ 004457e0 ==== 
 * signature: undefined unit_037_finalization(void)
 * body: 004457e0-004457fe
 * note: Name source: Delphi unit init table
 */

/* Name source: Delphi unit init table */

void unit_037_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  *in_FS_OFFSET = uVar1;
  return;
}


