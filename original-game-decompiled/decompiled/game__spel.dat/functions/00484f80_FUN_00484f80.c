
/* ==== FUN_00484f80 @ 00484f80 ==== 
 * signature: undefined __thiscall FUN_00484f80(void * this, undefined4 param_1)
 * body: 00484f80-00484f9a
 */

void __thiscall FUN_00484f80(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00484c60(this,param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x18))();
  return;
}


