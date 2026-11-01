
/* ==== FUN_004a4260 @ 004a4260 ==== 
 * signature: undefined1 * __thiscall FUN_004a4260(void * this, undefined1 * param_1, undefined4 param_2)
 * body: 004a4260-004a4328
 */

undefined1 * __thiscall FUN_004a4260(void *this,undefined1 *param_1,undefined4 param_2)

{
  undefined4 in_stack_ffffffbc;
  int in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffc8;
  undefined1 *local_14;
  undefined1 *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f0eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(0x24);
  local_4 = 0;
  if (local_10 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_14 = FUN_004a04e0(local_10);
  }
  local_4 = 0xffffffff;
  FUN_004a5620(*(void **)((int)this + 0x68),*(undefined4 **)((int)*(void **)((int)this + 0x68) + 8),
               1,&local_14);
  FUN_0041c870(&stack0xffffffbc,param_1);
  FUN_004a0670(local_14,this,in_stack_ffffffbc,in_stack_ffffffc0,in_stack_ffffffc4,in_stack_ffffffc8
               ,param_2);
  ExceptionList = local_c;
  return local_14;
}


