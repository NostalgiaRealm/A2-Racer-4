
/* ==== TfrmWinNormal.FormShow @ 004a0218 ==== 
 * signature: undefined TfrmWinNormal.FormShow(void)
 * body: 004a0218-004a02c3
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmWinNormal_FormShow(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_004ab694;
  TBaseFormOneWay_FormShow(param_1);
  FUN_004a0304(param_1);
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x300),(undefined4 *)"trname",
               *(int *)(iVar2 + 8));
  iVar2 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x2dc),(undefined4 *)"win_ch",
               *(int *)(iVar2 + 0x10));
  uVar3 = 2;
  iVar2 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_004806b0(*(int **)puVar1,0x4a02ec,*(int *)(iVar2 + 0x10),uVar3);
  TTimer_set_Interval(*(int *)(param_1 + 0x304),0x1194);
  TTimer_set_Enabled(*(int *)(param_1 + 0x304),'\x01');
  return;
}


