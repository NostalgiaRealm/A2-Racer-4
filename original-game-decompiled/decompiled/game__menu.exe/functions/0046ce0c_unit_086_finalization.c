
/* ==== unit_086_finalization @ 0046ce0c ==== 
 * signature: undefined unit_086_finalization(void)
 * body: 0046ce0c-0046ce81
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_086_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad1a8 = _DAT_004ad1a8 + 1;
  if (_DAT_004ad1a8 == 0) {
    DAT_004ad1ac = 1;
    FUN_00402f9c(DAT_004ad1b0);
    *(undefined4 *)PTR_DAT_004ab928 = 0;
    *(undefined4 *)PTR_PTR_004ab664 = 0;
    *(undefined4 *)PTR_PTR_004ab8d4 = 0;
    if (DAT_004ad1b8 != '\0') {
      CoUninitialize();
    }
    FUN_00404578((VARIANTARG *)&DAT_004ab08c,&DAT_004010d8,4);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


