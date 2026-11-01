
/* ==== FUN_0043f254 @ 0043f254 ==== 
 * signature: undefined __register FUN_0043f254(int * param_1, int param_2)
 * body: 0043f254-0043f2c0
 */

void FUN_0043f254(int *param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_1[0x14] != 0)) {
    iVar1 = FUN_0043f018((int)param_1);
    if (param_2 < iVar1) goto LAB_0043f27a;
  }
  FUN_0043c860((undefined4 *)PTR_PTR_004ab7a8);
LAB_0043f27a:
  iVar1 = FUN_004102b0((undefined4 *)param_1[0x14],param_2);
  FUN_00410150((int *)param_1[0x14],param_2);
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  if (param_1[10] != 0) {
    FUN_0043d5e4(param_1);
  }
  iVar1 = FUN_0043f018((int)param_1);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1 == 0);
  return;
}


