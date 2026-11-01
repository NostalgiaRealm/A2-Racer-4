
/* ==== FUN_0041b618 @ 0041b618 ==== 
 * signature: undefined __register FUN_0041b618(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 0041b618-0041b640
 */

void FUN_0041b618(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x5c))(piVar1,param_2,param_3,param_4);
  }
  return;
}


