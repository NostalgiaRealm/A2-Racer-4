
/* ==== FUN_0043f1a4 @ 0043f1a4 ==== 
 * signature: undefined __register FUN_0043f1a4(int * param_1, int param_2, int param_3)
 * body: 0043f1a4-0043f250
 */

void FUN_0043f1a4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar1 = param_3;
  if (*(int *)(param_3 + 0x58) != 0) {
    FUN_0043c860((undefined4 *)PTR_PTR_004aba08);
    iVar1 = extraout_ECX;
  }
  if (param_1[0x14] == 0) {
    iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',iVar1);
    param_1[0x14] = iVar1;
  }
  iVar1 = param_2 + -1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1[0x14] + 8))) {
    iVar2 = FUN_004102b0((undefined4 *)param_1[0x14],iVar1);
    if (*(byte *)(param_3 + 0x33) < *(byte *)(iVar2 + 0x33)) {
      iVar1 = FUN_004102b0((undefined4 *)param_1[0x14],iVar1);
      TMenuItem_set_GroupIndex(param_3,*(byte *)(iVar1 + 0x33));
    }
  }
  FUN_0043d668((int)param_1,param_2,*(byte *)(param_3 + 0x33));
  FUN_0041032c((int *)param_1[0x14],param_2,param_3);
  *(int **)(param_3 + 0x58) = param_1;
  *(int **)(param_3 + 0x7c) = param_1;
  *(code **)(param_3 + 0x78) = FUN_0043f3cc;
  if (param_1[10] != 0) {
    FUN_0043d5e4(param_1);
  }
  iVar1 = FUN_0043f018((int)param_1);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1 == 1);
  return;
}


