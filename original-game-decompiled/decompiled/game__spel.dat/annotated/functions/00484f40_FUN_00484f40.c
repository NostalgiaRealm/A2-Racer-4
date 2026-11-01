
/* ==== FUN_00484f40 @ 00484f40 ==== 
 * signature: undefined __thiscall FUN_00484f40(void * this, undefined4 param_1)
 * body: 00484f40-00484f5a
 */

void __thiscall FUN_00484f40(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00484c60(this,param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x10))();
  return;
}


