
/* ==== FUN_00410b60 @ 00410b60 ==== 
 * signature: undefined __register FUN_00410b60(int * param_1, undefined4 param_2, int param_3)
 * body: 00410b60-00410b96
 */

void FUN_00410b60(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      piVar2 = FUN_0040a9f4((int *)&DAT_0040d674,'\x01',(undefined4 *)PTR_PTR_00446c20);
      FUN_0040346c(piVar2);
    }
  }
  return;
}


