
/* ==== TfrmQualify.FormShow @ 0049fe68 ==== 
 * signature: undefined __register TfrmQualify.FormShow(int param_1)
 * body: 0049fe68-0049ff52
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmQualify_FormShow(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_004ab694;
  TBaseFormOneWay_FormShow(param_1);
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x2fc),(undefined4 *)"trname",
               *(int *)(iVar2 + 8));
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  TGroupBox_set_Caption(*(int *)(param_1 + 0x2f8),*(uint **)(iVar2 + 0x40));
  iVar2 = FUN_00480390(*(int *)puVar1,0);
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x2dc),(undefined4 *)"win_ch",
               *(int *)(iVar2 + 8));
  iVar2 = FUN_00480390(*(int *)puVar1,0);
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x308),(undefined4 *)"chara_",
               *(int *)(iVar2 + 8));
  uVar3 = 2;
  iVar2 = FUN_00480390(*(int *)puVar1,0);
  FUN_004806b0(*(int **)puVar1,0x49ff8c,*(int *)(iVar2 + 8),uVar3);
  TTimer_set_Interval(*(int *)(param_1 + 0x300),0x1194);
  TTimer_set_Enabled(*(int *)(param_1 + 0x300),'\x01');
  (**(code **)(**(int **)(param_1 + 0x2f0) + 0xb4))();
  return;
}


