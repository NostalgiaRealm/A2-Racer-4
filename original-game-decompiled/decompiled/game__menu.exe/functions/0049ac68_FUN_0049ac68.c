
/* ==== FUN_0049ac68 @ 0049ac68 ==== 
 * signature: undefined __register FUN_0049ac68(int * param_1, int param_2)
 * body: 0049ac68-0049ad9e
 */

void FUN_0049ac68(int *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int iVar4;
  int iStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  byte local_110 [256];
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_120 = &stack0xfffffffc;
  local_10 = 0;
  pcStack_124 = thunk_FUN_004036bc;
  iStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_128;
  local_8 = 0;
  iVar4 = 0;
  local_c = param_2;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403ee4(&local_10,(undefined4 *)".SetCurrentCharIx");
  iVar3 = local_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar3,0,iVar4);
  FUN_0048d180(*(int **)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10),param_2);
  iVar3 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  FUN_00491710(param_1[0xcc],*(int *)(iVar3 + 0xc));
  FUN_0049ae50((int)param_1);
  iVar3 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xc3],(undefined4 *)"chara_",
               *(int *)(iVar3 + 0x10));
  iVar3 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  iVar3 = *(int *)(iVar3 + 0x10);
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xb7],(undefined4 *)FUN_0049ade8,
               iVar3);
  iVar4 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  TGroupBox_set_Caption(param_1[0xc0],*(uint **)(iVar4 + 0x18));
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = iVar3;
  FUN_00403c5c(&local_10);
  return;
}


