
/* ==== unit_020_finalization @ 0041fc7c ==== 
 * signature: undefined unit_020_finalization(void)
 * body: 0041fc7c-0041fcac
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_020_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00447730 = _DAT_00447730 + 1;
  if (_DAT_00447730 == 0) {
    FUN_00402d14(DAT_00447734);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


