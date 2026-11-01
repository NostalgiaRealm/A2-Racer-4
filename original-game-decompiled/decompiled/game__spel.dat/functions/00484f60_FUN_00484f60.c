
/* ==== FUN_00484f60 @ 00484f60 ==== 
 * signature: undefined __thiscall FUN_00484f60(void * this, undefined4 param_1)
 * body: 00484f60-00484f7a
 */

void __thiscall FUN_00484f60(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00484dd0(this,param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x14))();
  return;
}


