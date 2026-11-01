
/* ==== unit_011_finalization @ 00416508 ==== 
 * signature: undefined unit_011_finalization(void)
 * body: 00416508-004165b3
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_011_finalization(void)

{
  LPVOID pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac620 = _DAT_004ac620 + 1;
  if (_DAT_004ac620 == 0) {
    FUN_0040fb64(DAT_004ac4dc);
    FUN_0040c8f8((int)DAT_004ac618);
    FUN_00416494();
    FUN_00402f9c(DAT_004ac624);
    FUN_00402f9c(DAT_004ac628);
    FUN_0041316c(0,(char *)0x0);
    FUN_00402f9c(DAT_004ac630);
    DAT_004ac630 = (int *)0x0;
    pvVar1 = FUN_0040655c();
    FUN_00402f9c(*(int **)((int)pvVar1 + 0xc));
    FUN_00415550();
    FUN_00402f9c(DAT_004ac618);
    DAT_004ac618 = (int *)0x0;
    FUN_004056a4(0x416500);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004ac634);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


