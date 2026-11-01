
/* ==== FUN_00434ac4 @ 00434ac4 ==== 
 * signature: undefined __register FUN_00434ac4(int * param_1, int param_2, int param_3)
 * body: 00434ac4-00434b70
 */

void FUN_00434ac4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar1 = param_3;
  if (*(int *)(param_3 + 0x58) != 0) {
    FUN_00432180((undefined4 *)PTR_PTR_00446d94);
    iVar1 = extraout_ECX;
  }
  if (param_1[0x14] == 0) {
    iVar1 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',iVar1);
    param_1[0x14] = iVar1;
  }
  iVar1 = param_2 + -1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1[0x14] + 8))) {
    iVar2 = FUN_0040f024((undefined4 *)param_1[0x14],iVar1);
    if (*(byte *)(param_3 + 0x33) < *(byte *)(iVar2 + 0x33)) {
      iVar1 = FUN_0040f024((undefined4 *)param_1[0x14],iVar1);
      TMenuItem_set_GroupIndex(param_3,*(byte *)(iVar1 + 0x33));
    }
  }
  FUN_00432f88((int)param_1,param_2,*(byte *)(param_3 + 0x33));
  FUN_0040f0a0((int *)param_1[0x14],param_2,param_3);
  *(int **)(param_3 + 0x58) = param_1;
  *(int **)(param_3 + 0x7c) = param_1;
  *(code **)(param_3 + 0x78) = FUN_00434cec;
  if (param_1[10] != 0) {
    FUN_00432f04(param_1);
  }
  iVar1 = FUN_00434938((int)param_1);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1 == 1);
  return;
}


