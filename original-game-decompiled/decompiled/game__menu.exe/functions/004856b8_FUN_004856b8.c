
/* ==== FUN_004856b8 @ 004856b8 ==== 
 * signature: undefined __register FUN_004856b8(int * param_1, int * param_2)
 * body: 004856b8-004856eb
 */

void FUN_004856b8(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x7d];
  if (param_2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      FUN_00485ef8(piVar1,param_1);
    }
    (**(code **)(*param_1 + 0x60))(param_1,param_2);
    if (param_2 != (int *)0x0) {
      FUN_00485e50((int)param_2,(int)param_1);
    }
  }
  return;
}


