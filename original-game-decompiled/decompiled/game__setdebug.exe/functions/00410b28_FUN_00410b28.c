
/* ==== FUN_00410b28 @ 00410b28 ==== 
 * signature: undefined __register FUN_00410b28(int * param_1, undefined4 param_2, int param_3)
 * body: 00410b28-00410b5e
 */

void FUN_00410b28(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      piVar2 = FUN_0040a9f4((int *)&DAT_0040d61c,'\x01',(undefined4 *)PTR_PTR_00446d34);
      FUN_0040346c(piVar2);
    }
  }
  return;
}


