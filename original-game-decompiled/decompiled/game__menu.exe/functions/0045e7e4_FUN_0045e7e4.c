
/* ==== FUN_0045e7e4 @ 0045e7e4 ==== 
 * signature: undefined __register FUN_0045e7e4(int param_1, int * param_2)
 * body: 0045e7e4-0045e81c
 */

void FUN_0045e7e4(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_2,*(int *)(param_1 + 8));
  if ((char)uVar1 == '\0') {
    FUN_00403c40("Assertion failure");
  }
  FUN_00410104(*(int **)(param_1 + 0xc),(int)param_2);
  return;
}


