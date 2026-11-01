
/* ==== FUN_00513850 @ 00513850 ==== 
 * signature: int * __thiscall FUN_00513850(void * this, int * param_1)
 * body: 00513850-005138fc
 */

int * __thiscall FUN_00513850(void *this,int *param_1)

{
  undefined4 *puVar1;
  void *this_00;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573f86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005010f0(puVar1,8);
    *puVar1 = &PTR_FUN_00578b20;
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 8) = puVar1;
  this_00 = operator_new(0x50);
  local_4 = 1;
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00520e90(this_00,param_1);
  }
  *(undefined4 **)this = puVar1;
  *puVar1 = param_1;
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00513d30(this);
  ExceptionList = local_c;
  return this;
}


