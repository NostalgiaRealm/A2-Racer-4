
/* ==== FUN_0048c24c @ 0048c24c ==== 
 * signature: undefined __register FUN_0048c24c(int * param_1, char param_2, undefined4 * param_3, undefined4 param_4)
 * body: 0048c24c-0048c39e
 */

void FUN_0048c24c(int *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *extraout_ECX;
  int *in_FS_OFFSET;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  int iStack_144;
  code *pcStack_140;
  undefined1 *puStack_13c;
  undefined4 in_stack_fffffec8;
  undefined4 in_stack_fffffecc;
  byte local_120 [256];
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_1c = 0;
  local_20 = 0;
  if (param_2 != '\0') {
    puStack_13c = (undefined1 *)0x48c26b;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffec8,in_stack_fffffecc);
    param_3 = extraout_ECX;
  }
  puStack_13c = (undefined1 *)0x48c27a;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  pcStack_140 = thunk_FUN_004036bc;
  iStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_144;
  local_18 = local_8;
  local_14 = 0xb;
  local_10 = param_4;
  local_c = 0;
  puStack_13c = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_120);
  FUN_00403e80(&local_20,local_120);
  puVar5 = &DAT_0048c3d0;
  pcVar4 = "CreateNewPlayer";
  iVar6 = local_20;
  FUN_00403f9c(&local_1c,3);
  iVar1 = local_1c;
  uVar3 = FUN_0045f46c();
  FUN_0045fa3c(uVar3,iVar1,0,(int)pcVar4);
  (**(code **)(*param_1 + 4))(param_1,0,*param_1,pcVar4,puVar5,iVar6);
  FUN_00403eb8(local_120,local_8,0xff);
  FUN_0048b2ec((int)param_1,local_120);
  FUN_0048d180((int *)param_1[4],
               *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c) + 0x10));
  FUN_0048d180((int *)param_1[3],
               *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x38) + 0x10));
  (**(code **)(*(int *)param_1[6] + 0xc))
            ((int *)param_1[6],*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30));
  uVar2 = FUN_00480dd4();
  *(undefined1 *)(param_1[6] + 0x3c) = uVar2;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = (int)pcVar4;
  FUN_00403c80(&local_20,2);
  FUN_00403c5c((int *)&local_8);
  return;
}


