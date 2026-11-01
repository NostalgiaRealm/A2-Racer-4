
/* ==== FUN_00430274 @ 00430274 ==== 
 * signature: undefined __register FUN_00430274(int param_1, int * param_2, int * param_3)
 * body: 00430274-004302c4
 */

void FUN_00430274(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  FUN_00430acc(param_1,param_2);
  if (param_2 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
  }
  else {
    uVar1 = FUN_0041b75c((int)param_2);
    if ((char)uVar1 == '\x01') {
      (**(code **)(*param_2 + 0x60))();
    }
    else {
      (**(code **)(*param_3 + 8))(param_3,param_2);
      (**(code **)(*param_3 + 0x68))(param_3,1);
      (**(code **)(*param_3 + 0x60))();
    }
  }
  return;
}


