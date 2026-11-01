
/* ==== FUN_0049ca50 @ 0049ca50 ==== 
 * signature: undefined FUN_0049ca50(void)
 * body: 0049ca50-0049cb6a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ca50(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  int *in_FS_OFFSET;
  bool bVar5;
  int iStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_14 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_18 = &UNK_0049cb6b;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  if (_DAT_004ad52c == 5) {
    _DAT_004ad52c = 0;
    puVar1 = &stack0xfffffffc;
  }
  else {
    bVar5 = SCARRY4(_DAT_004ad52c,1);
    _DAT_004ad52c = _DAT_004ad52c + 1;
    puVar1 = &stack0xfffffffc;
    if (bVar5) {
      thunk_FUN_00402808(0);
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  iVar2 = FUN_0048c604(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_004085ac(*(undefined4 *)(iVar2 + 8),&iStack_c);
  FUN_00403f9c((int *)&puStack_8,3);
  iVar2 = _DAT_004ad52c;
  if (DAT_004ad530 == 0) {
    FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x340),puStack_8,
                 _DAT_004ad52c);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  else {
    FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x33c),puStack_8,
                 _DAT_004ad52c);
    uVar3 = extraout_ECX;
    uVar4 = extraout_EDX;
  }
  DAT_004ad530 = DAT_004ad530 ^ 1;
  TGroupBox_set_Visible
            (*(int **)(param_1 + 0x340),
             CONCAT31((int3)((uint)uVar4 >> 8),
                      *(undefined1 *)((int)*(int **)(param_1 + 0x340) + 0x47)) ^ 1,uVar3);
  TGroupBox_set_Visible
            (*(int **)(param_1 + 0x33c),
             CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                      *(undefined1 *)((int)*(int **)(param_1 + 0x33c) + 0x47)) ^ 1,extraout_ECX_01);
  FUN_0042e978(*(int **)(param_1 + 0x2d4),extraout_EDX_02,extraout_ECX_02);
  FUN_0042e978(*(int **)(param_1 + 0x2d8),extraout_EDX_03,extraout_ECX_03);
  *in_FS_OFFSET = iVar2;
  FUN_00403c80(&iStack_c,2);
  return;
}


