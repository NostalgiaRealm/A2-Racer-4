
/* ==== TfrmCurrentChar.FormShow @ 0049b4fc ==== 
 * signature: undefined __register TfrmCurrentChar.FormShow(int * param_1)
 * body: 0049b4fc-0049b5e1
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmCurrentChar_FormShow(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *in_FS_OFFSET;
  code *pcStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  pcStack_1c = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&pcStack_1c;
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_0049b630(param_1,extraout_EDX,extraout_ECX);
  iVar2 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  FUN_004085ac(*(undefined4 *)(iVar2 + 8),(int *)&local_8);
  TGroupBox_set_Caption(param_1[0xc6],local_8);
  iVar2 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xc2],(undefined4 *)"chara_",
               *(int *)(iVar2 + 0x10));
  iVar2 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  iVar2 = *(int *)(iVar2 + 0x10);
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xb7],(undefined4 *)&DAT_0049b608,
               iVar2);
  iVar3 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  FUN_00491710(param_1[199],*(int *)(iVar3 + 0xc));
  FUN_00480448(*(int **)puVar1,(undefined4 *)&DAT_0049b614);
  *in_FS_OFFSET = iVar2;
  pcStack_1c = FUN_0049b5e9;
  FUN_00403c5c((int *)&local_8);
  return;
}


