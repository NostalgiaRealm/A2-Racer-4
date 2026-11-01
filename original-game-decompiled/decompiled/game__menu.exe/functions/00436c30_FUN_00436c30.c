
/* ==== FUN_00436c30 @ 00436c30 ==== 
 * signature: undefined __register FUN_00436c30(int param_1, int param_2, undefined4 param_3)
 * body: 00436c30-00436c46
 */

void FUN_00436c30(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 100);
  }
  FUN_00436bf4(param_2,param_2,param_3,(int)&stack0xfffffffc);
  return;
}


