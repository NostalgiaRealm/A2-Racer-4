
/* ==== FUN_0041956c @ 0041956c ==== 
 * signature: undefined FUN_0041956c(void)
 * body: 0041956c-004195c4
 */

void FUN_0041956c(int param_1,int *param_2)

{
  int *piVar1;
  byte abStack_14c [64];
  byte abStack_10c [256];
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    abStack_14c[0] = 0;
  }
  else {
    FUN_00402c60(**(int **)(param_1 + 4),abStack_10c);
    FUN_00402908(abStack_14c,abStack_10c,0x3f);
  }
  (**(code **)(*param_2 + 8))(param_2,abStack_14c,abStack_14c[0] + 1);
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x44))(piVar1,param_2);
  }
  return;
}


