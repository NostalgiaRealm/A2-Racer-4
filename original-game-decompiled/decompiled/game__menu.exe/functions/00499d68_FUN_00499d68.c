
/* ==== FUN_00499d68 @ 00499d68 ==== 
 * signature: undefined __register FUN_00499d68(int * param_1, int param_2)
 * body: 00499d68-00499ed1
 */

void FUN_00499d68(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  int iVar4;
  int extraout_EDX_02;
  int extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int *in_FS_OFFSET;
  int iVar5;
  int iStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte local_110 [256];
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_10 = 0;
  pcStack_120 = thunk_FUN_004036bc;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  local_8 = 0;
  iVar5 = 0;
  local_c = param_2;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403ee4(&local_10,(undefined4 *)".SetCurrentTrackIndex");
  iVar3 = local_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar3,2,iVar5);
  FUN_0048d250(*(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10),param_2);
  iVar3 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  iVar3 = *(int *)(iVar3 + 8);
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xc9],
               (undefined4 *)"trname",iVar3);
  iVar5 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  bVar1 = FUN_00461c84(iVar5);
  if (bVar1) {
    TGroupBox_set_Visible((int *)param_1[0xb7],0,extraout_ECX);
    TGroupBox_set_Visible
              ((int *)param_1[0xd0],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_00);
  }
  else {
    TGroupBox_set_Visible((int *)param_1[0xd0],0,extraout_ECX);
    TGroupBox_set_Visible
              ((int *)param_1[0xb7],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_01);
  }
  uVar2 = *(uint *)(param_1[0xcc] + 0x30);
  iVar5 = *(int *)(param_1[0xcd] + 0x30) - uVar2;
  if (SBORROW4(*(int *)(param_1[0xcd] + 0x30),uVar2)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar5 = extraout_EDX_01;
  }
  iVar4 = (int)((longlong)iVar5 * (longlong)param_2);
  if ((longlong)iVar4 != (longlong)iVar5 * (longlong)param_2) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar4 = extraout_EDX_02;
  }
  iVar5 = iVar4 + uVar2;
  if (SCARRY4(iVar4,uVar2)) {
    thunk_FUN_00402808(uVar2);
    iVar5 = extraout_EDX_03;
  }
  TControl_set_Left((int *)param_1[0xce],iVar5);
  TTimer_set_Enabled(param_1[0xc6],'\x01');
  FUN_0049a110((int)param_1,extraout_EDX_04,extraout_ECX_02);
  *in_FS_OFFSET = iVar3;
  FUN_00403c5c(&local_10);
  return;
}


