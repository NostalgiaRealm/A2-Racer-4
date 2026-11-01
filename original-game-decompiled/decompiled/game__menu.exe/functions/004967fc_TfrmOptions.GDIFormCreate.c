
/* ==== TfrmOptions.GDIFormCreate @ 004967fc ==== 
 * signature: undefined __register TfrmOptions.GDIFormCreate(int * param_1)
 * body: 004967fc-00496947
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmOptions_GDIFormCreate(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  code *pcStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_00481698(param_1[0xc0],0x496984);
  FUN_00481698(param_1[0xc1],0x496994);
  *(undefined1 *)(param_1[0xd0] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xd1] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xd2] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xc2] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xce] + 0x1e8) = 1;
  iVar3 = TSettings_vmt_004((int *)&PTR_TSettings_vmt_000_004a6010,'\x01');
  param_1[0xe1] = iVar3;
  piVar4 = (int *)(**(code **)(**(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8))();
  uVar2 = FUN_0045f46c();
  FUN_0045fd98(uVar2,0x4969a4,piVar4);
  (**(code **)(*(int *)param_1[0xe1] + 0xc))
            ((int *)param_1[0xe1],*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18))
  ;
  FUN_00495d6c(param_1);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "GDIFormCreate";
  FUN_00403c80(&local_c,2);
  return;
}


