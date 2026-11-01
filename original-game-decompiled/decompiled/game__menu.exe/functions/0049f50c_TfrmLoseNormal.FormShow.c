
/* ==== TfrmLoseNormal.FormShow @ 0049f50c ==== 
 * signature: undefined __register TfrmLoseNormal.FormShow(int * param_1)
 * body: 0049f50c-0049f69b
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmLoseNormal_FormShow(int *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint *in_FS_OFFSET;
  undefined4 *puVar4;
  uint uStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  uint *local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_120 = &stack0xfffffffc;
  local_110 = (uint *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  pcStack_124 = thunk_FUN_004036bc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_128;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar4 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar4,2);
  TBaseFormOneWay_FormShow((int)param_1);
  iVar3 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xc1],(undefined4 *)"trname",
               *(int *)(iVar3 + 8));
  iVar3 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  FUN_004085ac(*(undefined4 *)(iVar3 + 8),(int *)&local_110);
  TGroupBox_set_Caption(param_1[0xbf],local_110);
  iVar3 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  TGroupBox_set_Caption(param_1[0xbe],*(uint **)(iVar3 + 0x3c));
  iVar3 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xb7],(undefined4 *)"los_ch",
               *(int *)(iVar3 + 0x10));
  uVar2 = 2;
  iVar3 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_004806b0(*(int **)puVar1,0x49f6f8,*(int *)(iVar3 + 0x10),uVar2);
  TTimer_set_Interval(param_1[0xc2],0x1194);
  TTimer_set_Enabled(param_1[0xc2],'\x01');
  (**(code **)(*(int *)param_1[0xbc] + 0xb4))();
  *in_FS_OFFSET = uVar2;
  FUN_00403c5c((int *)&local_110);
  FUN_00403c80(&local_c,2);
  return;
}


