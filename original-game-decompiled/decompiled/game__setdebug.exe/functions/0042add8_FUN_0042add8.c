
/* ==== FUN_0042add8 @ 0042add8 ==== 
 * signature: undefined FUN_0042add8(void)
 * body: 0042add8-0042ae01
 */

void FUN_0042add8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0042accc(param_1,param_2,param_3,param_4 ^ 1,param_4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb0))();
  }
  return;
}


