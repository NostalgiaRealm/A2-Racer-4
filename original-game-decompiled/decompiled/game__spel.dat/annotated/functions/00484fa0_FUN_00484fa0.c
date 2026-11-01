
/* ==== FUN_00484fa0 @ 00484fa0 ==== 
 * signature: undefined __thiscall FUN_00484fa0(void * this, undefined4 param_1)
 * body: 00484fa0-00484fba
 */

void __thiscall FUN_00484fa0(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00484dd0(this,param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x1c))();
  return;
}


