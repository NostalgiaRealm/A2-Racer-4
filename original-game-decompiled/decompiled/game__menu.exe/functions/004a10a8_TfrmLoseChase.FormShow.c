
/* ==== TfrmLoseChase.FormShow @ 004a10a8 ==== 
 * signature: undefined __register TfrmLoseChase.FormShow(int param_1)
 * body: 004a10a8-004a1132
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmLoseChase_FormShow(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_004ab694;
  TBaseFormOneWay_FormShow(param_1);
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x2fc),(undefined4 *)"trname",
               *(int *)(iVar2 + 8));
  FUN_00489c28(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x2dc),(undefined4 *)"cophappy")
  ;
  FUN_0048063c(*(int **)puVar1,(undefined4 *)"CDL05_",
               *(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x14));
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  TGroupBox_set_Caption(*(int *)(param_1 + 0x2f8),*(uint **)(iVar2 + 0x3c));
  return;
}


