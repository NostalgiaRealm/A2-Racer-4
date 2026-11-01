
/* ==== FUN_00434f04 @ 00434f04 ==== 
 * signature: undefined FUN_00434f04(void)
 * body: 00434f04-00434f2d
 */

void FUN_00434f04(int *param_1,int param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00434df8(param_1,param_2,param_3,param_4 ^ 1,param_4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb0))();
  }
  return;
}


