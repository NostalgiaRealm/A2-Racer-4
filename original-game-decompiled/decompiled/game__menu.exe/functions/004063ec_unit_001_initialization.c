
/* ==== unit_001_initialization @ 004063ec ==== 
 * signature: undefined __register unit_001_initialization(void)
 * body: 004063ec-004064d3
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
  pcStack_c = thunk_FUN_004036bc;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar3 = _DAT_004ac42c == 0;
  _DAT_004ac42c = _DAT_004ac42c + -1;
  if (bVar3) {
    DAT_004ac038 = 0;
    DAT_004ac040 = 0;
    DAT_004ac044 = 0;
    DAT_004ac04a = 2;
    DAT_004ac04b = 2;
    DAT_004ac04c = 3;
    _DAT_004ac3f4 = 0;
    _DAT_004ac404 = 1;
    _DAT_004ac414 = 10;
    _DAT_004ac41c = 0x80020004;
    DAT_004ac3e8 = 0x4049e4;
    DAT_004ac3ec = thunk_FUN_00402808;
    _DAT_004ac3f0 = 0x4049e4;
    uVar2 = FUN_00402dd0();
    if ((char)uVar2 != '\0') {
      FUN_00402e00();
    }
    FUN_00402ec4();
    FUN_00405b82((undefined4 *)&DAT_004ac050,"");
    FUN_00405b82((undefined4 *)&DAT_004ac21c,"");
    _DAT_004ac030 = GetCommandLineA();
    WVar1 = FUN_004013f8();
    DAT_004ac02c = CONCAT22(extraout_var,WVar1);
    _DAT_004ac024 = GetCurrentThreadId();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


