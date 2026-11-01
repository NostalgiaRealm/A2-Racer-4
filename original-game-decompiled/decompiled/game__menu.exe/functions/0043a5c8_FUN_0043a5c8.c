
/* ==== FUN_0043a5c8 @ 0043a5c8 ==== 
 * signature: undefined __register FUN_0043a5c8(int param_1, int * param_2, int * param_3)
 * body: 0043a5c8-0043a618
 */

void FUN_0043a5c8(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  FUN_0043b1ac(param_1,param_2);
  if (param_2 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
  }
  else {
    uVar1 = FUN_0041df80((int)param_2);
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


