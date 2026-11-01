
/* ==== FUN_00410cc8 @ 00410cc8 ==== 
 * signature: undefined __register FUN_00410cc8(int * param_1, int * param_2, undefined4 param_3)
 * body: 00410cc8-00410cef
 */

void FUN_00410cc8(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  if (param_2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      FUN_00411260(piVar1,(int)param_1,param_3);
    }
    if (param_2 != (int *)0x0) {
      FUN_00411204(param_2,param_1);
    }
  }
  return;
}


