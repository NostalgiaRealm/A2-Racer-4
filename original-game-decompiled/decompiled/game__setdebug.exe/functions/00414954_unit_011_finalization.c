
/* ==== unit_011_finalization @ 00414954 ==== 
 * signature: undefined unit_011_finalization(void)
 * body: 00414954-004149ff
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
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00447618 = _DAT_00447618 + 1;
  if (_DAT_00447618 == 0) {
    FUN_0040e928(DAT_004474d4);
    FUN_0040bc08((int)DAT_00447610);
    FUN_004148e0();
    FUN_00402d14(DAT_0044761c);
    FUN_00402d14(DAT_00447620);
    FUN_004115b8(0,(char *)0x0);
    FUN_00402d14(DAT_00447628);
    DAT_00447628 = (int *)0x0;
    pvVar1 = FUN_00405fa4();
    FUN_00402d14(*(int **)((int)pvVar1 + 0xc));
    FUN_0041399c();
    FUN_00402d14(DAT_00447610);
    DAT_00447610 = (int *)0x0;
    FUN_00405134(0x41494c);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0044762c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


