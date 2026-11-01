
/* ==== FUN_00434b74 @ 00434b74 ==== 
 * signature: undefined __register FUN_00434b74(int * param_1, int param_2)
 * body: 00434b74-00434be0
 */

void FUN_00434b74(int *param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_1[0x14] != 0)) {
    iVar1 = FUN_00434938((int)param_1);
    if (param_2 < iVar1) goto LAB_00434b9a;
  }
  FUN_00432180((undefined4 *)PTR_PTR_00446bbc);
LAB_00434b9a:
  iVar1 = FUN_0040f024((undefined4 *)param_1[0x14],param_2);
  FUN_0040ef14((int *)param_1[0x14],param_2);
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  if (param_1[10] != 0) {
    FUN_00432f04(param_1);
  }
  iVar1 = FUN_00434938((int)param_1);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1 == 0);
  return;
}


