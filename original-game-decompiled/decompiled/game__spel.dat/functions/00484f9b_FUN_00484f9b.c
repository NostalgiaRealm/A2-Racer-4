
/* ==== FUN_00484f9b @ 00484f9b ==== 
 * signature: undefined __thiscall FUN_00484f9b(void * this, undefined4 param_1)
 * body: 00484f9b-00484f9f
 */

void __thiscall FUN_00484f9b(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00484dd0(this,param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x1c))();
  return;
}


