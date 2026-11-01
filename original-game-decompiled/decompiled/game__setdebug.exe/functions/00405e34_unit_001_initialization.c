
/* ==== unit_001_initialization @ 00405e34 ==== 
 * signature: undefined __register unit_001_initialization(void)
 * body: 00405e34-00405f1b
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_001_initialization(void)

{
  WORD WVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar3 = _DAT_00447424 == 0;
  _DAT_00447424 = _DAT_00447424 + -1;
  if (bVar3) {
    DAT_00447030 = 0;
    DAT_00447038 = 0;
    _DAT_0044703c = 0;
    DAT_00447042 = 2;
    DAT_00447043 = 2;
    DAT_00447044 = 3;
    _DAT_004473ec = 0;
    _DAT_004473fc = 1;
    _DAT_0044740c = 10;
    _DAT_00447414 = 0x80020004;
    DAT_004473e0 = 0x4046c4;
    DAT_004473e4 = thunk_FUN_00402744;
    _DAT_004473e8 = 0x4046c4;
    uVar2 = FUN_00402b5c();
    if ((char)uVar2 != '\0') {
      FUN_00402b8c();
    }
    FUN_00402c50();
    FUN_004055ca((undefined4 *)&DAT_00447048,"");
    FUN_004055ca((undefined4 *)&DAT_00447214,"");
    _DAT_0044702c = GetCommandLineA();
    WVar1 = FUN_00401334();
    _DAT_00447028 = CONCAT22(extraout_var,WVar1);
    _DAT_00447020 = GetCurrentThreadId();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


