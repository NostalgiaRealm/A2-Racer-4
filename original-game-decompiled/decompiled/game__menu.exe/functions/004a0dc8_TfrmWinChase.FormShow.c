
/* ==== TfrmWinChase.FormShow @ 004a0dc8 ==== 
 * signature: undefined __register TfrmWinChase.FormShow(int param_1)
 * body: 004a0dc8-004a0e52
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmWinChase_FormShow(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_004ab694;
  TBaseFormOneWay_FormShow(param_1);
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  TGroupBox_set_Caption(*(int *)(param_1 + 0x2f8),*(uint **)(iVar2 + 0x38));
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x2fc),(undefined4 *)"trname",
               *(int *)(iVar2 + 8));
  FUN_00489c28(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x2dc),(undefined4 *)"COPANGRY")
  ;
  FUN_0048063c(*(int **)puVar1,(undefined4 *)"CDW05_",
               *(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x14));
  return;
}


