
/* ==== FUN_0049a328 @ 0049a328 ==== 
 * signature: undefined __register FUN_0049a328(int param_1)
 * body: 0049a328-0049a42c
 */

void FUN_0049a328(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX_01;
  int *in_FS_OFFSET;
  bool bVar5;
  int iStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  int local_c;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  pcStack_18 = thunk_FUN_004036bc;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  if (DAT_004ad514 == 5) {
    DAT_004ad514 = 0;
    puVar1 = &stack0xfffffffc;
  }
  else {
    bVar5 = SCARRY4(DAT_004ad514,1);
    DAT_004ad514 = DAT_004ad514 + 1;
    puVar1 = &stack0xfffffffc;
    if (bVar5) {
      thunk_FUN_00402808(0);
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  iVar2 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_004085ac(*(undefined4 *)(iVar2 + 8),&local_c);
  FUN_00403f9c((int *)&local_8,3);
  iVar2 = DAT_004ad514;
  if (DAT_004ad518 == 0) {
    FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x328),local_8,
                 DAT_004ad514);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  else {
    FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x32c),local_8,
                 DAT_004ad514);
    uVar3 = extraout_ECX;
    uVar4 = extraout_EDX;
  }
  DAT_004ad518 = DAT_004ad518 ^ 1;
  TGroupBox_set_Visible
            (*(int **)(param_1 + 0x328),
             CONCAT31((int3)((uint)uVar4 >> 8),
                      *(undefined1 *)((int)*(int **)(param_1 + 0x328) + 0x47)) ^ 1,uVar3);
  TGroupBox_set_Visible
            (*(int **)(param_1 + 0x32c),
             CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                      *(undefined1 *)((int)*(int **)(param_1 + 0x32c) + 0x47)) ^ 1,extraout_ECX_01);
  *in_FS_OFFSET = iVar2;
  FUN_00403c80(&local_c,2);
  return;
}


