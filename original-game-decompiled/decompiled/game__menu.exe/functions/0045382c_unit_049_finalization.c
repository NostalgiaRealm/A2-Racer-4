
/* ==== unit_049_finalization @ 0045382c ==== 
 * signature: undefined unit_049_finalization(void)
 * body: 0045382c-00453850
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_049_finalization(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac894 = _DAT_004ac894 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


