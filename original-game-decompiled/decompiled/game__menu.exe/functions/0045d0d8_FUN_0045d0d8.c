
/* ==== FUN_0045d0d8 @ 0045d0d8 ==== 
 * signature: undefined __register FUN_0045d0d8(int * param_1, int param_2)
 * body: 0045d0d8-0045d118
 */

void FUN_0045d0d8(int *param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00403c40("Assertion failure");
  }
  (**(code **)(*(int *)param_1[3] + 0x50))((int *)param_1[3],param_2);
  (**(code **)(*param_1 + 0xc))(param_1,param_1);
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


